#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825D0390"))) PPC_WEAK_FUNC(sub_825D0390);
PPC_FUNC_IMPL(__imp__sub_825D0390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x825D03B0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825d03d8
	if (ctx.cr0.eq) goto loc_825D03D8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825bc320
	ctx.lr = 0x825D03C4;
	sub_825BC320(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 + 136;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x825d03dc
	goto loc_825D03DC;
loc_825D03D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D03DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D03F8"))) PPC_WEAK_FUNC(sub_825D03F8);
PPC_FUNC_IMPL(__imp__sub_825D03F8) {
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
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82833108
	ctx.lr = 0x825D0410;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825d0458
	if (ctx.cr0.eq) goto loc_825D0458;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825c4d30
	ctx.lr = 0x825D0420;
	sub_825C4D30(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 + 136;
	// addi r3,r10,124
	ctx.r3.s64 = ctx.r10.s64 + 124;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828165a8
	ctx.lr = 0x825D0438;
	sub_828165A8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// lfs f0,24724(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24724);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// b 0x825d045c
	goto loc_825D045C;
loc_825D0458:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D045C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D0470"))) PPC_WEAK_FUNC(sub_825D0470);
PPC_FUNC_IMPL(__imp__sub_825D0470) {
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
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x825d04fc
	if (!ctx.cr6.gt) goto loc_825D04FC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x824e8038
	ctx.lr = 0x825D04AC;
	sub_824E8038(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d04fc
	if (ctx.cr0.eq) goto loc_825D04FC;
	// lwz r11,5380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5380);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825d04d8
	if (ctx.cr6.eq) goto loc_825D04D8;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825d04d8
	if (!ctx.cr6.eq) goto loc_825D04D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r4,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r4.u32);
loc_825D04D8:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x825d04fc
	if (ctx.cr6.eq) goto loc_825D04FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f1,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D04FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D04FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82906e28
	ctx.lr = 0x825D050C;
	sub_82906E28(ctx, base);
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

__attribute__((alias("__imp__sub_825D0528"))) PPC_WEAK_FUNC(sub_825D0528);
PPC_FUNC_IMPL(__imp__sub_825D0528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825D0530;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x824e8038
	ctx.lr = 0x825D0544;
	sub_824E8038(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x825d059c
	if (ctx.cr0.eq) goto loc_825D059C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lwz r28,64(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r11,488
	ctx.r3.s64 = ctx.r11.s64 + 488;
	// bl 0x82816528
	ctx.lr = 0x825D055C;
	sub_82816528(ctx, base);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x825d059c
	if (ctx.cr6.eq) goto loc_825D059C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lwz r28,64(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r11,520
	ctx.r3.s64 = ctx.r11.s64 + 520;
	// bl 0x82816528
	ctx.lr = 0x825D0574;
	sub_82816528(ctx, base);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x825d059c
	if (ctx.cr6.eq) goto loc_825D059C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,2044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2044);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D0594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,128(r29)
	PPC_STORE_U32(ctx.r29.u32 + 128, ctx.r11.u32);
loc_825D059C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82904cc0
	ctx.lr = 0x825D05A8;
	sub_82904CC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D05B0"))) PPC_WEAK_FUNC(sub_825D05B0);
PPC_FUNC_IMPL(__imp__sub_825D05B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r11,9396
	ctx.r3.s64 = ctx.r11.s64 + 9396;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D05C0"))) PPC_WEAK_FUNC(sub_825D05C0);
PPC_FUNC_IMPL(__imp__sub_825D05C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x824880b0
	ctx.lr = 0x825D05E0;
	sub_824880B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d05f0
	if (!ctx.cr6.eq) goto loc_825D05F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x825d0608
	goto loc_825D0608;
loc_825D05F0:
	// bl 0x8248ab68
	ctx.lr = 0x825D05F4;
	sub_8248AB68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825d0608
	if (ctx.cr6.eq) goto loc_825D0608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825bc130
	ctx.lr = 0x825D0608;
	sub_825BC130(ctx, base);
loc_825D0608:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D0620"))) PPC_WEAK_FUNC(sub_825D0620);
PPC_FUNC_IMPL(__imp__sub_825D0620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825d0658
	if (ctx.cr6.eq) goto loc_825D0658;
	// bl 0x824880b0
	ctx.lr = 0x825D0648;
	sub_824880B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d0658
	if (!ctx.cr6.eq) goto loc_825D0658;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d0664
	goto loc_825D0664;
loc_825D0658:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825bc1f0
	ctx.lr = 0x825D0664;
	sub_825BC1F0(ctx, base);
loc_825D0664:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D0680"))) PPC_WEAK_FUNC(sub_825D0680);
PPC_FUNC_IMPL(__imp__sub_825D0680) {
	PPC_FUNC_PROLOGUE();
	// b 0x824880b0
	sub_824880B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D0688"))) PPC_WEAK_FUNC(sub_825D0688);
PPC_FUNC_IMPL(__imp__sub_825D0688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x82833108
	ctx.lr = 0x825D06A8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825d06d8
	if (ctx.cr0.eq) goto loc_825D06D8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825bc320
	ctx.lr = 0x825D06BC;
	sub_825BC320(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,552
	ctx.r11.s64 = ctx.r11.s64 + 552;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// b 0x825d06dc
	goto loc_825D06DC;
loc_825D06D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D06DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D06F8"))) PPC_WEAK_FUNC(sub_825D06F8);
PPC_FUNC_IMPL(__imp__sub_825D06F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828d14b8
	ctx.lr = 0x825D0714;
	sub_828D14B8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825d0740
	if (ctx.cr0.eq) goto loc_825D0740;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D0730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d0740
	if (ctx.cr0.eq) goto loc_825D0740;
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
loc_825D0740:
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

__attribute__((alias("__imp__sub_825D0760"))) PPC_WEAK_FUNC(sub_825D0760);
PPC_FUNC_IMPL(__imp__sub_825D0760) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D0770"))) PPC_WEAK_FUNC(sub_825D0770);
PPC_FUNC_IMPL(__imp__sub_825D0770) {
	PPC_FUNC_PROLOGUE();
	// addi r9,r3,212
	ctx.r9.s64 = ctx.r3.s64 + 212;
	// addi r10,r6,72
	ctx.r10.s64 = ctx.r6.s64 + 72;
	// li r11,4
	ctx.r11.s64 = 4;
loc_825D077C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x825d077c
	if (!ctx.cr0.eq) goto loc_825D077C;
	// b 0x828d1e80
	sub_828D1E80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D0798"))) PPC_WEAK_FUNC(sub_825D0798);
PPC_FUNC_IMPL(__imp__sub_825D0798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825d06f8
	ctx.lr = 0x825D07B4;
	sub_825D06F8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x825d0810
	if (ctx.cr0.eq) goto loc_825D0810;
	// bl 0x824876e0
	ctx.lr = 0x825D07C0;
	sub_824876E0(ctx, base);
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
	ctx.lr = 0x825D07D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bne 0x825d07e8
	if (!ctx.cr0.eq) goto loc_825D07E8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_825D07E8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825d0810
	if (ctx.cr6.eq) goto loc_825D0810;
	// addi r11,r10,212
	ctx.r11.s64 = ctx.r10.s64 + 212;
	// subf r9,r10,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r10.s64;
	// li r10,4
	ctx.r10.s64 = 4;
loc_825D07FC:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x825d07fc
	if (!ctx.cr0.eq) goto loc_825D07FC;
loc_825D0810:
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

__attribute__((alias("__imp__sub_825D0830"))) PPC_WEAK_FUNC(sub_825D0830);
PPC_FUNC_IMPL(__imp__sub_825D0830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D0838;
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x824e8038
	ctx.lr = 0x825D0860;
	sub_824E8038(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x825d08e4
	if (ctx.cr0.eq) goto loc_825D08E4;
	// lwz r11,4164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4164);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r11,r11,53
	ctx.r11.s64 = ctx.r11.s64 + 53;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,13024(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x8282d4b0
	ctx.lr = 0x825D0888;
	sub_8282D4B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82412b58
	ctx.lr = 0x825D0894;
	sub_82412B58(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,4180(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f30,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// ble cr6,0x825d08e4
	if (!ctx.cr6.gt) goto loc_825D08E4;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d08bc
	if (ctx.cr6.eq) goto loc_825D08BC;
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// b 0x825d08c0
	goto loc_825D08C0;
loc_825D08BC:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_825D08C0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fdivs f31,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1568);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D08D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// ble cr6,0x825d08e4
	if (!ctx.cr6.gt) goto loc_825D08E4;
	// fmuls f31,f1,f31
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
loc_825D08E4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x828d20d8
	ctx.lr = 0x825D08F8;
	sub_828D20D8(ctx, base);
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

__attribute__((alias("__imp__sub_825D0910"))) PPC_WEAK_FUNC(sub_825D0910);
PPC_FUNC_IMPL(__imp__sub_825D0910) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r10.u32);
	// lwz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825D0928"))) PPC_WEAK_FUNC(sub_825D0928);
PPC_FUNC_IMPL(__imp__sub_825D0928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825ca550
	ctx.lr = 0x825D0948;
	sub_825CA550(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d0958
	if (ctx.cr0.eq) goto loc_825D0958;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x825D0958;
	sub_82332DB8(ctx, base);
loc_825D0958:
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

__attribute__((alias("__imp__sub_825D0978"))) PPC_WEAK_FUNC(sub_825D0978);
PPC_FUNC_IMPL(__imp__sub_825D0978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r11,9088
	ctx.r3.s64 = ctx.r11.s64 + 9088;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D0988"))) PPC_WEAK_FUNC(sub_825D0988);
PPC_FUNC_IMPL(__imp__sub_825D0988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x824876e0
	ctx.lr = 0x825D09A8;
	sub_824876E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825d09bc
	if (ctx.cr6.eq) goto loc_825D09BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825ca070
	ctx.lr = 0x825D09BC;
	sub_825CA070(ctx, base);
loc_825D09BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D09D8"))) PPC_WEAK_FUNC(sub_825D09D8);
PPC_FUNC_IMPL(__imp__sub_825D09D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825d0a10
	if (ctx.cr6.eq) goto loc_825D0A10;
	// bl 0x824876e0
	ctx.lr = 0x825D0A00;
	sub_824876E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d0a10
	if (!ctx.cr6.eq) goto loc_825D0A10;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d0a1c
	goto loc_825D0A1C;
loc_825D0A10:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ca180
	ctx.lr = 0x825D0A1C;
	sub_825CA180(ctx, base);
loc_825D0A1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D0A38"))) PPC_WEAK_FUNC(sub_825D0A38);
PPC_FUNC_IMPL(__imp__sub_825D0A38) {
	PPC_FUNC_PROLOGUE();
	// b 0x824876e0
	sub_824876E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D0A40"))) PPC_WEAK_FUNC(sub_825D0A40);
PPC_FUNC_IMPL(__imp__sub_825D0A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,228
	ctx.r3.s64 = 228;
	// bl 0x82833108
	ctx.lr = 0x825D0A60;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825d0ac0
	if (ctx.cr0.eq) goto loc_825D0AC0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ca2e0
	ctx.lr = 0x825D0A74;
	sub_825CA2E0(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r11,r11,-5528
	ctx.r11.s64 = ctx.r11.s64 + -5528;
	// addi r10,r10,872
	ctx.r10.s64 = ctx.r10.s64 + 872;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r31,212
	ctx.r11.s64 = ctx.r31.s64 + 212;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// lwz r11,216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// b 0x825d0ac4
	goto loc_825D0AC4;
loc_825D0AC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D0AC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D0AE0"))) PPC_WEAK_FUNC(sub_825D0AE0);
PPC_FUNC_IMPL(__imp__sub_825D0AE0) {
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
	// li r3,228
	ctx.r3.s64 = 228;
	// bl 0x82833108
	ctx.lr = 0x825D0AF8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825d0b3c
	if (ctx.cr0.eq) goto loc_825D0B3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828d1400
	ctx.lr = 0x825D0B08;
	sub_828D1400(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,872
	ctx.r9.s64 = ctx.r11.s64 + 872;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r10,r31,212
	ctx.r10.s64 = ctx.r31.s64 + 212;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// b 0x825d0b40
	goto loc_825D0B40;
loc_825D0B3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D0B40:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D0B58"))) PPC_WEAK_FUNC(sub_825D0B58);
PPC_FUNC_IMPL(__imp__sub_825D0B58) {
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
	// bl 0x828d1400
	ctx.lr = 0x825D0B70;
	sub_828D1400(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,1152
	ctx.r8.s64 = ctx.r11.s64 + 1152;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r9.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r9,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r10,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r10.u32);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// stw r10,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r10.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D0BF0"))) PPC_WEAK_FUNC(sub_825D0BF0);
PPC_FUNC_IMPL(__imp__sub_825D0BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x825D0BF8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82816528
	ctx.lr = 0x825D0C18;
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
	ctx.lr = 0x825D0C2C;
	sub_82846E98(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x825d0c68
	if (!ctx.cr6.gt) goto loc_825D0C68;
	// addi r27,r26,212
	ctx.r27.s64 = ctx.r26.s64 + 212;
loc_825D0C4C:
	// add r4,r30,r28
	ctx.r4.u64 = ctx.r30.u64 + ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82643410
	ctx.lr = 0x825D0C58;
	sub_82643410(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825d0c4c
	if (ctx.cr6.lt) goto loc_825D0C4C;
loc_825D0C68:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x825d0ca4
	if (!ctx.cr6.gt) goto loc_825D0CA4;
	// addi r27,r26,236
	ctx.r27.s64 = ctx.r26.s64 + 236;
loc_825D0C84:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82410060
	ctx.lr = 0x825D0C90;
	sub_82410060(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825d0c84
	if (ctx.cr6.lt) goto loc_825D0C84;
loc_825D0CA4:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x825d0ce0
	if (!ctx.cr6.gt) goto loc_825D0CE0;
	// addi r29,r26,260
	ctx.r29.s64 = ctx.r26.s64 + 260;
loc_825D0CC0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82410060
	ctx.lr = 0x825D0CCC;
	sub_82410060(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825d0cc0
	if (ctx.cr6.lt) goto loc_825D0CC0;
loc_825D0CE0:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x828d1e80
	ctx.lr = 0x825D0CF4;
	sub_828D1E80(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D0D00"))) PPC_WEAK_FUNC(sub_825D0D00);
PPC_FUNC_IMPL(__imp__sub_825D0D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x825D0D08;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825d06f8
	ctx.lr = 0x825D0D14;
	sub_825D06F8(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x825d0dfc
	if (ctx.cr0.eq) goto loc_825D0DFC;
	// bl 0x82487598
	ctx.lr = 0x825D0D20;
	sub_82487598(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D0D38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// bne 0x825d0d48
	if (!ctx.cr0.eq) goto loc_825D0D48;
	// li r27,0
	ctx.r27.s64 = 0;
loc_825D0D48:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x825d0dfc
	if (ctx.cr6.eq) goto loc_825D0DFC;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825d0d84
	if (!ctx.cr6.gt) goto loc_825D0D84;
	// addi r29,r27,212
	ctx.r29.s64 = ctx.r27.s64 + 212;
loc_825D0D64:
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82643410
	ctx.lr = 0x825D0D74;
	sub_82643410(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d0d64
	if (ctx.cr6.lt) goto loc_825D0D64;
loc_825D0D84:
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825d0dc0
	if (!ctx.cr6.gt) goto loc_825D0DC0;
	// addi r28,r27,236
	ctx.r28.s64 = ctx.r27.s64 + 236;
	// li r30,0
	ctx.r30.s64 = 0;
loc_825D0D9C:
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82410060
	ctx.lr = 0x825D0DAC;
	sub_82410060(ctx, base);
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d0d9c
	if (ctx.cr6.lt) goto loc_825D0D9C;
loc_825D0DC0:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825d0dfc
	if (!ctx.cr6.gt) goto loc_825D0DFC;
	// addi r28,r27,260
	ctx.r28.s64 = ctx.r27.s64 + 260;
	// li r30,0
	ctx.r30.s64 = 0;
loc_825D0DD8:
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82410060
	ctx.lr = 0x825D0DE8;
	sub_82410060(ctx, base);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d0dd8
	if (ctx.cr6.lt) goto loc_825D0DD8;
loc_825D0DFC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D0E08"))) PPC_WEAK_FUNC(sub_825D0E08);
PPC_FUNC_IMPL(__imp__sub_825D0E08) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x824e8038
	ctx.lr = 0x825D0E3C;
	sub_824E8038(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d0ef4
	if (ctx.cr0.eq) goto loc_825D0EF4;
	// lwz r10,1492(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1492);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r10,192(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 192);
	// blt 0x825d0ebc
	if (ctx.cr0.lt) goto loc_825D0EBC;
	// lwz r9,224(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_825D0E64:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x825d0e7c
	if (!ctx.cr6.lt) goto loc_825D0E7C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x825d0e64
	if (!ctx.cr0.lt) goto loc_825D0E64;
	// b 0x825d0ebc
	goto loc_825D0EBC;
loc_825D0E7C:
	// lwz r10,2820(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2820);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825d0eb0
	if (ctx.cr6.eq) goto loc_825D0EB0;
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x825d0eb0
	if (!ctx.cr6.lt) goto loc_825D0EB0;
	// lwz r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825d0eb0
	if (ctx.cr6.eq) goto loc_825D0EB0;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// b 0x825d0ebc
	goto loc_825D0EBC;
loc_825D0EB0:
	// lwz r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_825D0EBC:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d0ed0
	if (ctx.cr6.eq) goto loc_825D0ED0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_825D0ED0:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825d0ef4
	if (ctx.cr6.eq) goto loc_825D0EF4;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x8282d4b0
	ctx.lr = 0x825D0EE8;
	sub_8282D4B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82412b58
	ctx.lr = 0x825D0EF4;
	sub_82412B58(ctx, base);
loc_825D0EF4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x828d20d8
	ctx.lr = 0x825D0F08;
	sub_828D20D8(ctx, base);
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

__attribute__((alias("__imp__sub_825D0F28"))) PPC_WEAK_FUNC(sub_825D0F28);
PPC_FUNC_IMPL(__imp__sub_825D0F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,260
	ctx.r3.s64 = ctx.r31.s64 + 260;
	// bl 0x8239d768
	ctx.lr = 0x825D0F4C;
	sub_8239D768(ctx, base);
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// bl 0x8239d768
	ctx.lr = 0x825D0F54;
	sub_8239D768(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// bl 0x82339860
	ctx.lr = 0x825D0F5C;
	sub_82339860(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ca550
	ctx.lr = 0x825D0F64;
	sub_825CA550(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d0f74
	if (ctx.cr0.eq) goto loc_825D0F74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x825D0F74;
	sub_82332DB8(ctx, base);
loc_825D0F74:
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

__attribute__((alias("__imp__sub_825D0F90"))) PPC_WEAK_FUNC(sub_825D0F90);
PPC_FUNC_IMPL(__imp__sub_825D0F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r11,10312
	ctx.r3.s64 = ctx.r11.s64 + 10312;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D0FA0"))) PPC_WEAK_FUNC(sub_825D0FA0);
PPC_FUNC_IMPL(__imp__sub_825D0FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82487598
	ctx.lr = 0x825D0FC0;
	sub_82487598(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825d0fd4
	if (ctx.cr6.eq) goto loc_825D0FD4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825ca070
	ctx.lr = 0x825D0FD4;
	sub_825CA070(ctx, base);
loc_825D0FD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D0FF0"))) PPC_WEAK_FUNC(sub_825D0FF0);
PPC_FUNC_IMPL(__imp__sub_825D0FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825d1028
	if (ctx.cr6.eq) goto loc_825D1028;
	// bl 0x82487598
	ctx.lr = 0x825D1018;
	sub_82487598(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d1028
	if (!ctx.cr6.eq) goto loc_825D1028;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d1034
	goto loc_825D1034;
loc_825D1028:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ca180
	ctx.lr = 0x825D1034;
	sub_825CA180(ctx, base);
loc_825D1034:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D1050"))) PPC_WEAK_FUNC(sub_825D1050);
PPC_FUNC_IMPL(__imp__sub_825D1050) {
	PPC_FUNC_PROLOGUE();
	// b 0x82487598
	sub_82487598(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D1058"))) PPC_WEAK_FUNC(sub_825D1058);
PPC_FUNC_IMPL(__imp__sub_825D1058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,284
	ctx.r3.s64 = 284;
	// bl 0x82833108
	ctx.lr = 0x825D1078;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825d10d8
	if (ctx.cr0.eq) goto loc_825D10D8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ca2e0
	ctx.lr = 0x825D108C;
	sub_825CA2E0(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r11,r11,-5528
	ctx.r11.s64 = ctx.r11.s64 + -5528;
	// addi r10,r10,1152
	ctx.r10.s64 = ctx.r10.s64 + 1152;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r30,212
	ctx.r4.s64 = ctx.r30.s64 + 212;
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x823397c0
	ctx.lr = 0x825D10B8;
	sub_823397C0(ctx, base);
	// addi r4,r30,236
	ctx.r4.s64 = ctx.r30.s64 + 236;
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// bl 0x82873b58
	ctx.lr = 0x825D10C4;
	sub_82873B58(ctx, base);
	// addi r4,r30,260
	ctx.r4.s64 = ctx.r30.s64 + 260;
	// addi r3,r31,260
	ctx.r3.s64 = ctx.r31.s64 + 260;
	// bl 0x82873b58
	ctx.lr = 0x825D10D0;
	sub_82873B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x825d10dc
	goto loc_825D10DC;
loc_825D10D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D10DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D10F8"))) PPC_WEAK_FUNC(sub_825D10F8);
PPC_FUNC_IMPL(__imp__sub_825D10F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x825D1100;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82816528
	ctx.lr = 0x825D1120;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82846e98
	ctx.lr = 0x825D1134;
	sub_82846E98(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// add r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r9,r8,r3
	ctx.r9.u64 = ctx.r8.u64 + ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// ble cr6,0x825d11f4
	if (!ctx.cr6.gt) goto loc_825D11F4;
	// addi r29,r28,212
	ctx.r29.s64 = ctx.r28.s64 + 212;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// subf r27,r11,r7
	ctx.r27.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r26,r11,r10
	ctx.r26.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf r25,r11,r9
	ctx.r25.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_825D1178:
	// lwzx r11,r27,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwzx r10,r26,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r30.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwzx r9,r25,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x82332d50
	ctx.lr = 0x825D11AC;
	sub_82332D50(ctx, base);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d11e0
	if (ctx.cr0.eq) goto loc_825D11E0;
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
loc_825D11E0:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825d1178
	if (ctx.cr6.lt) goto loc_825D1178;
loc_825D11F4:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828d1e80
	ctx.lr = 0x825D1208;
	sub_828D1E80(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D1210"))) PPC_WEAK_FUNC(sub_825D1210);
PPC_FUNC_IMPL(__imp__sub_825D1210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x825D1218;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x825d06f8
	ctx.lr = 0x825D1224;
	sub_825D06F8(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x825d12b4
	if (ctx.cr0.eq) goto loc_825D12B4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825d1400
	ctx.lr = 0x825D1234;
	sub_825D1400(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d12b4
	if (ctx.cr0.eq) goto loc_825D12B4;
	// lwz r11,228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825d12b4
	if (!ctx.cr6.gt) goto loc_825D12B4;
	// addi r29,r3,212
	ctx.r29.s64 = ctx.r3.s64 + 212;
	// li r31,0
	ctx.r31.s64 = 0;
loc_825D1254:
	// lwz r11,224(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 224);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x825D1270;
	sub_82332D50(ctx, base);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d12a0
	if (ctx.cr0.eq) goto loc_825D12A0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_825D12A0:
	// lwz r11,228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d1254
	if (ctx.cr6.lt) goto loc_825D1254;
loc_825D12B4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D12C0"))) PPC_WEAK_FUNC(sub_825D12C0);
PPC_FUNC_IMPL(__imp__sub_825D12C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x825D12C8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825d1304
	if (ctx.cr6.eq) goto loc_825D1304;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D1304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D1304:
	// bl 0x824a0b58
	ctx.lr = 0x825D1308;
	sub_824A0B58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// twllei r11,0
	// lwz r9,10768(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10768);
	// addi r10,r9,59
	ctx.r10.s64 = ctx.r9.s64 + 59;
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r27,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// divwu r7,r10,r11
	ctx.r7.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r7,r7,r11
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// subf r30,r7,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r7.s64;
	// ble cr6,0x825d1388
	if (!ctx.cr6.gt) goto loc_825D1388;
	// lwz r7,224(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
loc_825D1344:
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x825d138c
	if (ctx.cr6.eq) goto loc_825D138C;
	// addi r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r5,r6,r11
	ctx.r5.s32 = ctx.r6.s32 / ctx.r11.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r5,r5,r11
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// andc r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// twllei r11,0
	// subf r30,r5,r6
	ctx.r30.s64 = ctx.r6.s64 - ctx.r5.s64;
	// twlgei r10,-1
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d1344
	if (ctx.cr6.lt) goto loc_825D1344;
loc_825D1388:
	// li r30,0
	ctx.r30.s64 = 0;
loc_825D138C:
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// rlwinm r29,r30,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,13024(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x8282d4b0
	ctx.lr = 0x825D13A8;
	sub_8282D4B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82412b58
	ctx.lr = 0x825D13B4;
	sub_82412B58(ctx, base);
	// stwx r30,r27,r31
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,10776(r28)
	PPC_STORE_U32(ctx.r28.u32 + 10776, ctx.r11.u32);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x825eced0
	ctx.lr = 0x825D13D8;
	sub_825ECED0(ctx, base);
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lfs f1,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828d20d8
	ctx.lr = 0x825D13F4;
	sub_828D20D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D1400"))) PPC_WEAK_FUNC(sub_825D1400);
PPC_FUNC_IMPL(__imp__sub_825D1400) {
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
	// beq cr6,0x825d1444
	if (ctx.cr6.eq) goto loc_825D1444;
	// bl 0x82485d38
	ctx.lr = 0x825D1420;
	sub_82485D38(ctx, base);
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
	ctx.lr = 0x825D1438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x825d1448
	if (!ctx.cr0.eq) goto loc_825D1448;
loc_825D1444:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D1448:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D1460"))) PPC_WEAK_FUNC(sub_825D1460);
PPC_FUNC_IMPL(__imp__sub_825D1460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D1468;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r30,212
	ctx.r31.s64 = ctx.r30.s64 + 212;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,228(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x825D1490;
	sub_82332CA8(ctx, base);
	// lwz r3,224(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d14a0
	if (ctx.cr6.eq) goto loc_825D14A0;
	// bl 0x82332db8
	ctx.lr = 0x825D14A0;
	sub_82332DB8(ctx, base);
loc_825D14A0:
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
	// bl 0x825ca550
	ctx.lr = 0x825D14B8;
	sub_825CA550(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d14c8
	if (ctx.cr0.eq) goto loc_825D14C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332db8
	ctx.lr = 0x825D14C8;
	sub_82332DB8(ctx, base);
loc_825D14C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D14D8"))) PPC_WEAK_FUNC(sub_825D14D8);
PPC_FUNC_IMPL(__imp__sub_825D14D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r11,10364
	ctx.r3.s64 = ctx.r11.s64 + 10364;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D14E8"))) PPC_WEAK_FUNC(sub_825D14E8);
PPC_FUNC_IMPL(__imp__sub_825D14E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82485d38
	ctx.lr = 0x825D1508;
	sub_82485D38(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825d151c
	if (ctx.cr6.eq) goto loc_825D151C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825ca070
	ctx.lr = 0x825D151C;
	sub_825CA070(ctx, base);
loc_825D151C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D1538"))) PPC_WEAK_FUNC(sub_825D1538);
PPC_FUNC_IMPL(__imp__sub_825D1538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825d1570
	if (ctx.cr6.eq) goto loc_825D1570;
	// bl 0x82485d38
	ctx.lr = 0x825D1560;
	sub_82485D38(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d1570
	if (!ctx.cr6.eq) goto loc_825D1570;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d157c
	goto loc_825D157C;
loc_825D1570:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ca180
	ctx.lr = 0x825D157C;
	sub_825CA180(ctx, base);
loc_825D157C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D1598"))) PPC_WEAK_FUNC(sub_825D1598);
PPC_FUNC_IMPL(__imp__sub_825D1598) {
	PPC_FUNC_PROLOGUE();
	// b 0x82485d38
	sub_82485D38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D15A0"))) PPC_WEAK_FUNC(sub_825D15A0);
PPC_FUNC_IMPL(__imp__sub_825D15A0) {
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
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82833108
	ctx.lr = 0x825D15BC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d15d0
	if (ctx.cr0.eq) goto loc_825D15D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825d15e8
	ctx.lr = 0x825D15CC;
	sub_825D15E8(ctx, base);
	// b 0x825d15d4
	goto loc_825D15D4;
loc_825D15D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D15D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D15E8"))) PPC_WEAK_FUNC(sub_825D15E8);
PPC_FUNC_IMPL(__imp__sub_825D15E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x825D15F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x825ca2e0
	ctx.lr = 0x825D1600;
	sub_825CA2E0(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r11,r11,-5528
	ctx.r11.s64 = ctx.r11.s64 + -5528;
	// addi r10,r10,1432
	ctx.r10.s64 = ctx.r10.s64 + 1432;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r28,212
	ctx.r31.s64 = ctx.r28.s64 + 212;
	// lwz r9,208(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 208);
	// addi r29,r26,212
	ctx.r29.s64 = ctx.r26.s64 + 212;
	// stw r9,208(r28)
	PPC_STORE_U32(ctx.r28.u32 + 208, ctx.r9.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// stw r30,220(r28)
	PPC_STORE_U32(ctx.r28.u32 + 220, ctx.r30.u32);
	// stw r11,216(r28)
	PPC_STORE_U32(ctx.r28.u32 + 216, ctx.r11.u32);
	// stw r30,224(r28)
	PPC_STORE_U32(ctx.r28.u32 + 224, ctx.r30.u32);
	// stw r30,228(r28)
	PPC_STORE_U32(ctx.r28.u32 + 228, ctx.r30.u32);
	// stw r30,232(r28)
	PPC_STORE_U32(ctx.r28.u32 + 232, ctx.r30.u32);
	// stw r30,212(r28)
	PPC_STORE_U32(ctx.r28.u32 + 212, ctx.r30.u32);
	// beq cr6,0x825d16ec
	if (ctx.cr6.eq) goto loc_825D16EC;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825d16ec
	if (!ctx.cr6.gt) goto loc_825D16EC;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d167c
	if (ctx.cr0.eq) goto loc_825D167C;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x825D167C;
	sub_82332C38(ctx, base);
loc_825D167C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825d16ec
	if (!ctx.cr6.gt) goto loc_825D16EC;
loc_825D168C:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x825D16A0;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d16d8
	if (ctx.cr0.eq) goto loc_825D16D8;
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
loc_825D16D8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d168c
	if (ctx.cr6.lt) goto loc_825D168C;
loc_825D16EC:
	// addi r10,r28,236
	ctx.r10.s64 = ctx.r28.s64 + 236;
	// addi r11,r26,236
	ctx.r11.s64 = ctx.r26.s64 + 236;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_825D16FC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x825d16fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825D16FC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D1720"))) PPC_WEAK_FUNC(sub_825D1720);
PPC_FUNC_IMPL(__imp__sub_825D1720) {
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
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82833108
	ctx.lr = 0x825D1738;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825d179c
	if (ctx.cr0.eq) goto loc_825D179C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828d1400
	ctx.lr = 0x825D1748;
	sub_828D1400(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,1432
	ctx.r9.s64 = ctx.r11.s64 + 1432;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// addi r10,r31,236
	ctx.r10.s64 = ctx.r31.s64 + 236;
	// stw r8,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// b 0x825d17a0
	goto loc_825D17A0;
loc_825D179C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D17A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D17B8"))) PPC_WEAK_FUNC(sub_825D17B8);
PPC_FUNC_IMPL(__imp__sub_825D17B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x825D17C0;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82816528
	ctx.lr = 0x825D17E0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82846e98
	ctx.lr = 0x825D17F4;
	sub_82846E98(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// add r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r9,r8,r3
	ctx.r9.u64 = ctx.r8.u64 + ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// ble cr6,0x825d18b4
	if (!ctx.cr6.gt) goto loc_825D18B4;
	// addi r29,r28,212
	ctx.r29.s64 = ctx.r28.s64 + 212;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// subf r27,r11,r7
	ctx.r27.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r26,r11,r10
	ctx.r26.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf r25,r11,r9
	ctx.r25.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_825D1838:
	// lwzx r11,r27,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwzx r10,r26,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r30.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwzx r9,r25,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x82332d50
	ctx.lr = 0x825D186C;
	sub_82332D50(ctx, base);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d18a0
	if (ctx.cr0.eq) goto loc_825D18A0;
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
loc_825D18A0:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825d1838
	if (ctx.cr6.lt) goto loc_825D1838;
loc_825D18B4:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828d1e80
	ctx.lr = 0x825D18C8;
	sub_828D1E80(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D18D0"))) PPC_WEAK_FUNC(sub_825D18D0);
PPC_FUNC_IMPL(__imp__sub_825D18D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x825D18D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x825d06f8
	ctx.lr = 0x825D18E4;
	sub_825D06F8(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x825d1974
	if (ctx.cr0.eq) goto loc_825D1974;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825d1c20
	ctx.lr = 0x825D18F4;
	sub_825D1C20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d1974
	if (ctx.cr0.eq) goto loc_825D1974;
	// lwz r11,228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825d1974
	if (!ctx.cr6.gt) goto loc_825D1974;
	// addi r29,r3,212
	ctx.r29.s64 = ctx.r3.s64 + 212;
	// li r31,0
	ctx.r31.s64 = 0;
loc_825D1914:
	// lwz r11,224(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 224);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x825D1930;
	sub_82332D50(ctx, base);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d1960
	if (ctx.cr0.eq) goto loc_825D1960;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_825D1960:
	// lwz r11,228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d1914
	if (ctx.cr6.lt) goto loc_825D1914;
loc_825D1974:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D1980"))) PPC_WEAK_FUNC(sub_825D1980);
PPC_FUNC_IMPL(__imp__sub_825D1980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825D1988;
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x824e8038
	ctx.lr = 0x825D19AC;
	sub_824E8038(ctx, base);
	// bl 0x824090e0
	ctx.lr = 0x825D19B0;
	sub_824090E0(ctx, base);
	// stfs f30,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lwz r8,10928(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10928);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r9.u32);
	// addi r10,r8,59
	ctx.r10.s64 = ctx.r8.s64 + 59;
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// twllei r11,0
	// lwzx r10,r29,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r6,r7,r11
	ctx.r6.s32 = ctx.r7.s32 / ctx.r11.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r6,r6,r11
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// andc r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// subf r30,r6,r7
	ctx.r30.s64 = ctx.r7.s64 - ctx.r6.s64;
	// twlgei r10,-1
	// ble cr6,0x825d1a5c
	if (!ctx.cr6.gt) goto loc_825D1A5C;
	// lwz r7,224(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
loc_825D1A00:
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x825d1a28
	if (ctx.cr6.eq) goto loc_825D1A28;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x825d1ad4
	if (ctx.cr6.eq) goto loc_825D1AD4;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x825d1ad4
	if (ctx.cr6.eq) goto loc_825D1AD4;
loc_825D1A28:
	// addi r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 1;
	// lwz r5,228(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r4,r6,r11
	ctx.r4.s32 = ctx.r6.s32 / ctx.r11.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r4,r4,r11
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// andc r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// twllei r11,0
	// subf r30,r4,r6
	ctx.r30.s64 = ctx.r6.s64 - ctx.r4.s64;
	// twlgei r10,-1
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x825d1a00
	if (ctx.cr6.lt) goto loc_825D1A00;
loc_825D1A5C:
	// bl 0x82a4cd78
	ctx.lr = 0x825D1A60;
	sub_82A4CD78(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,228(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// divw r7,r10,r9
	ctx.r7.s32 = ctx.r10.s32 / ctx.r9.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r7,r7,r9
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// lwz r8,276(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 276);
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// twllei r9,0
	// subf r4,r7,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r7.s64;
	// twlgei r11,-1
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825D1A9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D1A9C:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f1,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,256(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfs f0,24724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24724);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,260(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// bl 0x828d20d8
	ctx.lr = 0x825D1AC4;
	sub_828D20D8(ctx, base);
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
loc_825D1AD4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D1AEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stwx r30,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r30.u32);
	// b 0x825d1a9c
	goto loc_825D1A9C;
}

__attribute__((alias("__imp__sub_825D1AF8"))) PPC_WEAK_FUNC(sub_825D1AF8);
PPC_FUNC_IMPL(__imp__sub_825D1AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D1B00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// rlwinm r31,r29,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// lwz r3,13024(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x8282d4b0
	ctx.lr = 0x825D1B28;
	sub_8282D4B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82412b58
	ctx.lr = 0x825D1B34;
	sub_82412B58(ctx, base);
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 252, ctx.r29.u32);
	// stfs f0,80(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D1B50"))) PPC_WEAK_FUNC(sub_825D1B50);
PPC_FUNC_IMPL(__imp__sub_825D1B50) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x825e7770
	ctx.lr = 0x825D1B80;
	sub_825E7770(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825d1bf0
	if (ctx.cr0.eq) goto loc_825D1BF0;
	// lwz r11,11016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11016);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825d1bcc
	if (ctx.cr6.eq) goto loc_825D1BCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c1f08
	ctx.lr = 0x825D1B9C;
	sub_829C1F08(ctx, base);
	// bl 0x82611600
	ctx.lr = 0x825D1BA0;
	sub_82611600(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d1bb4
	if (ctx.cr0.eq) goto loc_825D1BB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// b 0x825d1bc0
	goto loc_825D1BC0;
loc_825D1BB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2564);
loc_825D1BC0:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D1BC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825d1bdc
	goto loc_825D1BDC;
loc_825D1BCC:
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825d1bf0
	if (!ctx.cr6.eq) goto loc_825D1BF0;
	// lfs f1,256(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	ctx.f1.f64 = double(temp.f32);
loc_825D1BDC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D1BF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D1BF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x828d2048
	ctx.lr = 0x825D1C00;
	sub_828D2048(ctx, base);
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

__attribute__((alias("__imp__sub_825D1C20"))) PPC_WEAK_FUNC(sub_825D1C20);
PPC_FUNC_IMPL(__imp__sub_825D1C20) {
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
	// beq cr6,0x825d1c64
	if (ctx.cr6.eq) goto loc_825D1C64;
	// bl 0x82485b90
	ctx.lr = 0x825D1C40;
	sub_82485B90(ctx, base);
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
	ctx.lr = 0x825D1C58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x825d1c68
	if (!ctx.cr0.eq) goto loc_825D1C68;
loc_825D1C64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D1C68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D1C80"))) PPC_WEAK_FUNC(sub_825D1C80);
PPC_FUNC_IMPL(__imp__sub_825D1C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r11,10748
	ctx.r3.s64 = ctx.r11.s64 + 10748;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D1C90"))) PPC_WEAK_FUNC(sub_825D1C90);
PPC_FUNC_IMPL(__imp__sub_825D1C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82485b90
	ctx.lr = 0x825D1CB0;
	sub_82485B90(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825d1cc4
	if (ctx.cr6.eq) goto loc_825D1CC4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825ca070
	ctx.lr = 0x825D1CC4;
	sub_825CA070(ctx, base);
loc_825D1CC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D1CE0"))) PPC_WEAK_FUNC(sub_825D1CE0);
PPC_FUNC_IMPL(__imp__sub_825D1CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825d1d18
	if (ctx.cr6.eq) goto loc_825D1D18;
	// bl 0x82485b90
	ctx.lr = 0x825D1D08;
	sub_82485B90(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d1d18
	if (!ctx.cr6.eq) goto loc_825D1D18;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d1d24
	goto loc_825D1D24;
loc_825D1D18:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ca180
	ctx.lr = 0x825D1D24;
	sub_825CA180(ctx, base);
loc_825D1D24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D1D40"))) PPC_WEAK_FUNC(sub_825D1D40);
PPC_FUNC_IMPL(__imp__sub_825D1D40) {
	PPC_FUNC_PROLOGUE();
	// b 0x82485b90
	sub_82485B90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D1D48"))) PPC_WEAK_FUNC(sub_825D1D48);
PPC_FUNC_IMPL(__imp__sub_825D1D48) {
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
	// li r3,268
	ctx.r3.s64 = 268;
	// bl 0x82833108
	ctx.lr = 0x825D1D64;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d1d78
	if (ctx.cr0.eq) goto loc_825D1D78;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825d1d90
	ctx.lr = 0x825D1D74;
	sub_825D1D90(ctx, base);
	// b 0x825d1d7c
	goto loc_825D1D7C;
loc_825D1D78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D1D7C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D1D90"))) PPC_WEAK_FUNC(sub_825D1D90);
PPC_FUNC_IMPL(__imp__sub_825D1D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x825D1D98;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x825ca2e0
	ctx.lr = 0x825D1DA8;
	sub_825CA2E0(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r11,r11,-5528
	ctx.r11.s64 = ctx.r11.s64 + -5528;
	// addi r10,r10,1712
	ctx.r10.s64 = ctx.r10.s64 + 1712;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r30,212
	ctx.r31.s64 = ctx.r30.s64 + 212;
	// lwz r9,208(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 208);
	// addi r27,r28,212
	ctx.r27.s64 = ctx.r28.s64 + 212;
	// stw r9,208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 208, ctx.r9.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// stw r29,220(r30)
	PPC_STORE_U32(ctx.r30.u32 + 220, ctx.r29.u32);
	// stw r11,216(r30)
	PPC_STORE_U32(ctx.r30.u32 + 216, ctx.r11.u32);
	// stw r29,224(r30)
	PPC_STORE_U32(ctx.r30.u32 + 224, ctx.r29.u32);
	// stw r29,228(r30)
	PPC_STORE_U32(ctx.r30.u32 + 228, ctx.r29.u32);
	// stw r29,232(r30)
	PPC_STORE_U32(ctx.r30.u32 + 232, ctx.r29.u32);
	// stw r29,212(r30)
	PPC_STORE_U32(ctx.r30.u32 + 212, ctx.r29.u32);
	// beq cr6,0x825d1e94
	if (ctx.cr6.eq) goto loc_825D1E94;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825d1e94
	if (!ctx.cr6.gt) goto loc_825D1E94;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d1e24
	if (ctx.cr0.eq) goto loc_825D1E24;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x825D1E24;
	sub_82332C38(ctx, base);
loc_825D1E24:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825d1e94
	if (!ctx.cr6.gt) goto loc_825D1E94;
loc_825D1E34:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x825D1E48;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d1e80
	if (ctx.cr0.eq) goto loc_825D1E80;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
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
loc_825D1E80:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d1e34
	if (ctx.cr6.lt) goto loc_825D1E34;
loc_825D1E94:
	// lwz r10,236(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 236);
	// addi r11,r28,236
	ctx.r11.s64 = ctx.r28.s64 + 236;
	// addi r11,r30,236
	ctx.r11.s64 = ctx.r30.s64 + 236;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 236, ctx.r10.u32);
	// lwz r11,240(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 240);
	// stw r11,240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 240, ctx.r11.u32);
	// lwz r11,244(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 244);
	// stw r11,244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 244, ctx.r11.u32);
	// lwz r11,248(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// stw r11,248(r30)
	PPC_STORE_U32(ctx.r30.u32 + 248, ctx.r11.u32);
	// lwz r11,252(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 252);
	// stw r11,252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 252, ctx.r11.u32);
	// lfs f0,256(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,256(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 256, temp.u32);
	// lfs f0,260(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,260(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 260, temp.u32);
	// lwz r11,264(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// stw r11,264(r30)
	PPC_STORE_U32(ctx.r30.u32 + 264, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D1EE8"))) PPC_WEAK_FUNC(sub_825D1EE8);
PPC_FUNC_IMPL(__imp__sub_825D1EE8) {
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
	// bl 0x828d1400
	ctx.lr = 0x825D1F00;
	sub_828D1400(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// addi r8,r11,2272
	ctx.r8.s64 = ctx.r11.s64 + 2272;
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,904(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r9,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r9.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D1F90"))) PPC_WEAK_FUNC(sub_825D1F90);
PPC_FUNC_IMPL(__imp__sub_825D1F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x825D1F98;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82816528
	ctx.lr = 0x825D1FB8;
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
	ctx.lr = 0x825D1FCC;
	sub_82846E98(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x825d2014
	if (!ctx.cr6.gt) goto loc_825D2014;
	// addi r27,r26,208
	ctx.r27.s64 = ctx.r26.s64 + 208;
loc_825D1FEC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825D2000;
	sub_82410060(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825d1fec
	if (ctx.cr6.lt) goto loc_825D1FEC;
loc_825D2014:
	// lwz r11,224(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 224);
	// addi r3,r26,208
	ctx.r3.s64 = ctx.r26.s64 + 208;
	// lwz r10,228(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 228);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x825d2038
	if (ctx.cr6.eq) goto loc_825D2038;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x825D2038;
	sub_82332C38(ctx, base);
loc_825D2038:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x825d2074
	if (!ctx.cr6.gt) goto loc_825D2074;
	// addi r28,r26,232
	ctx.r28.s64 = ctx.r26.s64 + 232;
loc_825D2054:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82410060
	ctx.lr = 0x825D2060;
	sub_82410060(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825d2054
	if (ctx.cr6.lt) goto loc_825D2054;
loc_825D2074:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x828d1e80
	ctx.lr = 0x825D2088;
	sub_828D1E80(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D2090"))) PPC_WEAK_FUNC(sub_825D2090);
PPC_FUNC_IMPL(__imp__sub_825D2090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D2098;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x828d14b8
	ctx.lr = 0x825D20A4;
	sub_828D14B8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x825d20f8
	if (ctx.cr0.eq) goto loc_825D20F8;
	// bl 0x8248bba0
	ctx.lr = 0x825D20B0;
	sub_8248BBA0(ctx, base);
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
	ctx.lr = 0x825D20C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bne 0x825d20d8
	if (!ctx.cr0.eq) goto loc_825D20D8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_825D20D8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825d20f8
	if (ctx.cr6.eq) goto loc_825D20F8;
	// addi r4,r29,208
	ctx.r4.s64 = ctx.r29.s64 + 208;
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x828e0f90
	ctx.lr = 0x825D20EC;
	sub_828E0F90(ctx, base);
	// addi r4,r29,232
	ctx.r4.s64 = ctx.r29.s64 + 232;
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x828e0f90
	ctx.lr = 0x825D20F8;
	sub_828E0F90(ctx, base);
loc_825D20F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D2108"))) PPC_WEAK_FUNC(sub_825D2108);
PPC_FUNC_IMPL(__imp__sub_825D2108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D2110;
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x824e8038
	ctx.lr = 0x825D2134;
	sub_824E8038(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d2218
	if (ctx.cr0.eq) goto loc_825D2218;
	// lwz r30,224(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82a4cd78
	ctx.lr = 0x825D2144;
	sub_82A4CD78(ctx, base);
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// lwz r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// divw r9,r3,r30
	ctx.r9.s32 = ctx.r3.s32 / ctx.r30.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// andc r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 & ~ctx.r11.u64;
	// twllei r30,0
	// subf r30,r9,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r9.s64;
	// twlgei r11,-1
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825d21dc
	if (ctx.cr6.eq) goto loc_825D21DC;
	// bl 0x82a4cd78
	ctx.lr = 0x825D2174;
	sub_82A4CD78(ctx, base);
	// li r11,100
	ctx.r11.s64 = 100;
	// lwz r7,248(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// li r10,0
	ctx.r10.s64 = 0;
	// divw r11,r3,r11
	ctx.r11.s32 = ctx.r3.s32 / ctx.r11.s32;
	// li r9,0
	ctx.r9.s64 = 0;
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// subf r6,r11,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x825d21dc
	if (!ctx.cr6.gt) goto loc_825D21DC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825D219C:
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825d21b8
	if (ctx.cr6.lt) goto loc_825D21B8;
	// lwz r8,244(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x825d21d8
	if (ctx.cr6.lt) goto loc_825D21D8;
loc_825D21B8:
	// lwz r8,244(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// blt cr6,0x825d219c
	if (ctx.cr6.lt) goto loc_825D219C;
	// b 0x825d21dc
	goto loc_825D21DC;
loc_825D21D8:
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
loc_825D21DC:
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,13024(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13024);
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8282d4b0
	ctx.lr = 0x825D21F8;
	sub_8282D4B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82412b58
	ctx.lr = 0x825D2204;
	sub_82412B58(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x828d20d8
	ctx.lr = 0x825D2218;
	sub_828D20D8(ctx, base);
loc_825D2218:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D2228"))) PPC_WEAK_FUNC(sub_825D2228);
PPC_FUNC_IMPL(__imp__sub_825D2228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x8239d768
	ctx.lr = 0x825D224C;
	sub_8239D768(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x8239d768
	ctx.lr = 0x825D2254;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ca550
	ctx.lr = 0x825D225C;
	sub_825CA550(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d226c
	if (ctx.cr0.eq) goto loc_825D226C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x825D226C;
	sub_82332DB8(ctx, base);
loc_825D226C:
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

__attribute__((alias("__imp__sub_825D2288"))) PPC_WEAK_FUNC(sub_825D2288);
PPC_FUNC_IMPL(__imp__sub_825D2288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r11,9488
	ctx.r3.s64 = ctx.r11.s64 + 9488;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2298"))) PPC_WEAK_FUNC(sub_825D2298);
PPC_FUNC_IMPL(__imp__sub_825D2298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8248bba0
	ctx.lr = 0x825D22B8;
	sub_8248BBA0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825d22cc
	if (ctx.cr6.eq) goto loc_825D22CC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825d22e8
	ctx.lr = 0x825D22CC;
	sub_825D22E8(ctx, base);
loc_825D22CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D22E8"))) PPC_WEAK_FUNC(sub_825D22E8);
PPC_FUNC_IMPL(__imp__sub_825D22E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8248bce0
	ctx.lr = 0x825D2308;
	sub_8248BCE0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d2318
	if (!ctx.cr6.eq) goto loc_825D2318;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x825d2330
	goto loc_825D2330;
loc_825D2318:
	// bl 0x82412588
	ctx.lr = 0x825D231C;
	sub_82412588(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825d2330
	if (ctx.cr6.eq) goto loc_825D2330;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824d4c28
	ctx.lr = 0x825D2330;
	sub_824D4C28(ctx, base);
loc_825D2330:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2348"))) PPC_WEAK_FUNC(sub_825D2348);
PPC_FUNC_IMPL(__imp__sub_825D2348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825d2380
	if (ctx.cr6.eq) goto loc_825D2380;
	// bl 0x8248bba0
	ctx.lr = 0x825D2370;
	sub_8248BBA0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d2380
	if (!ctx.cr6.eq) goto loc_825D2380;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d238c
	goto loc_825D238C;
loc_825D2380:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d23a8
	ctx.lr = 0x825D238C;
	sub_825D23A8(ctx, base);
loc_825D238C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D23A8"))) PPC_WEAK_FUNC(sub_825D23A8);
PPC_FUNC_IMPL(__imp__sub_825D23A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825d23e0
	if (ctx.cr6.eq) goto loc_825D23E0;
	// bl 0x8248bce0
	ctx.lr = 0x825D23D0;
	sub_8248BCE0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d23e0
	if (!ctx.cr6.eq) goto loc_825D23E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d23ec
	goto loc_825D23EC;
loc_825D23E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ca1e0
	ctx.lr = 0x825D23EC;
	sub_825CA1E0(ctx, base);
loc_825D23EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2408"))) PPC_WEAK_FUNC(sub_825D2408);
PPC_FUNC_IMPL(__imp__sub_825D2408) {
	PPC_FUNC_PROLOGUE();
	// b 0x8248bba0
	sub_8248BBA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D2410"))) PPC_WEAK_FUNC(sub_825D2410);
PPC_FUNC_IMPL(__imp__sub_825D2410) {
	PPC_FUNC_PROLOGUE();
	// b 0x8248bce0
	sub_8248BCE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D2418"))) PPC_WEAK_FUNC(sub_825D2418);
PPC_FUNC_IMPL(__imp__sub_825D2418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82833108
	ctx.lr = 0x825D2438;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825d2478
	if (ctx.cr0.eq) goto loc_825D2478;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ca2e0
	ctx.lr = 0x825D244C;
	sub_825CA2E0(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r30,208
	ctx.r4.s64 = ctx.r30.s64 + 208;
	// addi r11,r11,2272
	ctx.r11.s64 = ctx.r11.s64 + 2272;
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x825D2464;
	sub_82873B58(ctx, base);
	// addi r4,r30,232
	ctx.r4.s64 = ctx.r30.s64 + 232;
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x82873b58
	ctx.lr = 0x825D2470;
	sub_82873B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x825d247c
	goto loc_825D247C;
loc_825D2478:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D247C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2498"))) PPC_WEAK_FUNC(sub_825D2498);
PPC_FUNC_IMPL(__imp__sub_825D2498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r11,9460
	ctx.r3.s64 = ctx.r11.s64 + 9460;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D24A8"))) PPC_WEAK_FUNC(sub_825D24A8);
PPC_FUNC_IMPL(__imp__sub_825D24A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x82833108
	ctx.lr = 0x825D24C8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825d24f0
	if (ctx.cr0.eq) goto loc_825D24F0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ca2e0
	ctx.lr = 0x825D24DC;
	sub_825CA2E0(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1992
	ctx.r11.s64 = ctx.r11.s64 + 1992;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x825d24f4
	goto loc_825D24F4;
loc_825D24F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D24F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2510"))) PPC_WEAK_FUNC(sub_825D2510);
PPC_FUNC_IMPL(__imp__sub_825D2510) {
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
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x824e8038
	ctx.lr = 0x825D253C;
	sub_824E8038(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f1,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// beq 0x825d255c
	if (ctx.cr0.eq) goto loc_825D255C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1568);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D255C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D255C:
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x828d2048
	ctx.lr = 0x825D2578;
	sub_828D2048(ctx, base);
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

__attribute__((alias("__imp__sub_825D2598"))) PPC_WEAK_FUNC(sub_825D2598);
PPC_FUNC_IMPL(__imp__sub_825D2598) {
	PPC_FUNC_PROLOGUE();
	// b 0x825d06f8
	sub_825D06F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D25A0"))) PPC_WEAK_FUNC(sub_825D25A0);
PPC_FUNC_IMPL(__imp__sub_825D25A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,68(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lfs f1,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r4,r9,0,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// lfs f2,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,212(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825D25C8"))) PPC_WEAK_FUNC(sub_825D25C8);
PPC_FUNC_IMPL(__imp__sub_825D25C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D25D0;
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x824e8038
	ctx.lr = 0x825D25F0;
	sub_824E8038(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f30,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bgt cr6,0x825d260c
	if (ctx.cr6.gt) goto loc_825D260C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
loc_825D260C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825d2660
	if (ctx.cr6.eq) goto loc_825D2660;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1480);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D2628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// ble cr6,0x825d2660
	if (!ctx.cr6.gt) goto loc_825D2660;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d2644
	if (ctx.cr6.eq) goto loc_825D2644;
	// lfs f31,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f31.f64 = double(temp.f32);
	// b 0x825d2648
	goto loc_825D2648;
loc_825D2644:
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
loc_825D2648:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1480);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D265C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fdivs f31,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 / ctx.f1.f64));
loc_825D2660:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x828d20d8
	ctx.lr = 0x825D2674;
	sub_828D20D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D2688"))) PPC_WEAK_FUNC(sub_825D2688);
PPC_FUNC_IMPL(__imp__sub_825D2688) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x824e8038
	ctx.lr = 0x825D26A0;
	sub_824E8038(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825d26e0
	if (ctx.cr0.eq) goto loc_825D26E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c1f08
	ctx.lr = 0x825D26B0;
	sub_829C1F08(ctx, base);
	// bl 0x824f5d90
	ctx.lr = 0x825D26B4;
	sub_824F5D90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq 0x825d26cc
	if (ctx.cr0.eq) goto loc_825D26CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x825d26d8
	goto loc_825D26D8;
loc_825D26CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2316);
loc_825D26D8:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D26E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D26E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D26F8"))) PPC_WEAK_FUNC(sub_825D26F8);
PPC_FUNC_IMPL(__imp__sub_825D26F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r11,10548
	ctx.r3.s64 = ctx.r11.s64 + 10548;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2708"))) PPC_WEAK_FUNC(sub_825D2708);
PPC_FUNC_IMPL(__imp__sub_825D2708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82487490
	ctx.lr = 0x825D2728;
	sub_82487490(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825d273c
	if (ctx.cr6.eq) goto loc_825D273C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825ca070
	ctx.lr = 0x825D273C;
	sub_825CA070(ctx, base);
loc_825D273C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2758"))) PPC_WEAK_FUNC(sub_825D2758);
PPC_FUNC_IMPL(__imp__sub_825D2758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825d2790
	if (ctx.cr6.eq) goto loc_825D2790;
	// bl 0x82487490
	ctx.lr = 0x825D2780;
	sub_82487490(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d2790
	if (!ctx.cr6.eq) goto loc_825D2790;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d279c
	goto loc_825D279C;
loc_825D2790:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ca180
	ctx.lr = 0x825D279C;
	sub_825CA180(ctx, base);
loc_825D279C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D27B8"))) PPC_WEAK_FUNC(sub_825D27B8);
PPC_FUNC_IMPL(__imp__sub_825D27B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82487490
	sub_82487490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D27C0"))) PPC_WEAK_FUNC(sub_825D27C0);
PPC_FUNC_IMPL(__imp__sub_825D27C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x825D27E0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825d281c
	if (ctx.cr0.eq) goto loc_825D281C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ca2e0
	ctx.lr = 0x825D27F4;
	sub_825CA2E0(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r11,r11,-5528
	ctx.r11.s64 = ctx.r11.s64 + -5528;
	// addi r10,r10,2552
	ctx.r10.s64 = ctx.r10.s64 + 2552;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x825d2820
	goto loc_825D2820;
loc_825D281C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D2820:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2838"))) PPC_WEAK_FUNC(sub_825D2838);
PPC_FUNC_IMPL(__imp__sub_825D2838) {
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
	// li r3,212
	ctx.r3.s64 = 212;
	// bl 0x82833108
	ctx.lr = 0x825D2850;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825d287c
	if (ctx.cr0.eq) goto loc_825D287C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828d1400
	ctx.lr = 0x825D2860;
	sub_828D1400(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,2552
	ctx.r11.s64 = ctx.r11.s64 + 2552;
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x825d2880
	goto loc_825D2880;
loc_825D287C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D2880:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2898"))) PPC_WEAK_FUNC(sub_825D2898);
PPC_FUNC_IMPL(__imp__sub_825D2898) {
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
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x824e8038
	ctx.lr = 0x825D28C4;
	sub_824E8038(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d294c
	if (ctx.cr0.eq) goto loc_825D294C;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825d294c
	if (ctx.cr6.eq) goto loc_825D294C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,16776(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16776);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x825d294c
	if (!ctx.cr6.gt) goto loc_825D294C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,20416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20416);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,308(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D2908;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x824114f8
	ctx.lr = 0x825D2914;
	sub_824114F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d294c
	if (ctx.cr0.eq) goto loc_825D294C;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825d294c
	if (!ctx.cr0.eq) goto loc_825D294C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f2,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,212(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// lfs f1,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D294C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D294C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82906e28
	ctx.lr = 0x825D295C;
	sub_82906E28(ctx, base);
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

__attribute__((alias("__imp__sub_825D2978"))) PPC_WEAK_FUNC(sub_825D2978);
PPC_FUNC_IMPL(__imp__sub_825D2978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r11,8756
	ctx.r3.s64 = ctx.r11.s64 + 8756;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2988"))) PPC_WEAK_FUNC(sub_825D2988);
PPC_FUNC_IMPL(__imp__sub_825D2988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82486520
	ctx.lr = 0x825D29A8;
	sub_82486520(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825d29bc
	if (ctx.cr6.eq) goto loc_825D29BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825bc130
	ctx.lr = 0x825D29BC;
	sub_825BC130(ctx, base);
loc_825D29BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D29D8"))) PPC_WEAK_FUNC(sub_825D29D8);
PPC_FUNC_IMPL(__imp__sub_825D29D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825d2a10
	if (ctx.cr6.eq) goto loc_825D2A10;
	// bl 0x82486520
	ctx.lr = 0x825D2A00;
	sub_82486520(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d2a10
	if (!ctx.cr6.eq) goto loc_825D2A10;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d2a1c
	goto loc_825D2A1C;
loc_825D2A10:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825bc250
	ctx.lr = 0x825D2A1C;
	sub_825BC250(ctx, base);
loc_825D2A1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2A38"))) PPC_WEAK_FUNC(sub_825D2A38);
PPC_FUNC_IMPL(__imp__sub_825D2A38) {
	PPC_FUNC_PROLOGUE();
	// b 0x82486520
	sub_82486520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D2A40"))) PPC_WEAK_FUNC(sub_825D2A40);
PPC_FUNC_IMPL(__imp__sub_825D2A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x82833108
	ctx.lr = 0x825D2A60;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825d2a88
	if (ctx.cr0.eq) goto loc_825D2A88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825bc370
	ctx.lr = 0x825D2A74;
	sub_825BC370(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2832
	ctx.r11.s64 = ctx.r11.s64 + 2832;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x825d2a8c
	goto loc_825D2A8C;
loc_825D2A88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D2A8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2AA8"))) PPC_WEAK_FUNC(sub_825D2AA8);
PPC_FUNC_IMPL(__imp__sub_825D2AA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825cb800
	sub_825CB800(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D2AB0"))) PPC_WEAK_FUNC(sub_825D2AB0);
PPC_FUNC_IMPL(__imp__sub_825D2AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r11,10460
	ctx.r3.s64 = ctx.r11.s64 + 10460;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2AC0"))) PPC_WEAK_FUNC(sub_825D2AC0);
PPC_FUNC_IMPL(__imp__sub_825D2AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x824860c8
	ctx.lr = 0x825D2AE0;
	sub_824860C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d2af0
	if (!ctx.cr6.eq) goto loc_825D2AF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x825d2b08
	goto loc_825D2B08;
loc_825D2AF0:
	// bl 0x8248b958
	ctx.lr = 0x825D2AF4;
	sub_8248B958(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825d2b08
	if (ctx.cr6.eq) goto loc_825D2B08;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825bc130
	ctx.lr = 0x825D2B08;
	sub_825BC130(ctx, base);
loc_825D2B08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2B20"))) PPC_WEAK_FUNC(sub_825D2B20);
PPC_FUNC_IMPL(__imp__sub_825D2B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825d2b58
	if (ctx.cr6.eq) goto loc_825D2B58;
	// bl 0x824860c8
	ctx.lr = 0x825D2B48;
	sub_824860C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d2b58
	if (!ctx.cr6.eq) goto loc_825D2B58;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d2b64
	goto loc_825D2B64;
loc_825D2B58:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825c9778
	ctx.lr = 0x825D2B64;
	sub_825C9778(ctx, base);
loc_825D2B64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2B80"))) PPC_WEAK_FUNC(sub_825D2B80);
PPC_FUNC_IMPL(__imp__sub_825D2B80) {
	PPC_FUNC_PROLOGUE();
	// b 0x824860c8
	sub_824860C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D2B88"))) PPC_WEAK_FUNC(sub_825D2B88);
PPC_FUNC_IMPL(__imp__sub_825D2B88) {
	PPC_FUNC_PROLOGUE();
	// b 0x8248b958
	sub_8248B958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D2B90"))) PPC_WEAK_FUNC(sub_825D2B90);
PPC_FUNC_IMPL(__imp__sub_825D2B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x825D2BB0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825d2bd8
	if (ctx.cr0.eq) goto loc_825D2BD8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825c9848
	ctx.lr = 0x825D2BC4;
	sub_825C9848(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,3152
	ctx.r11.s64 = ctx.r11.s64 + 3152;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x825d2bdc
	goto loc_825D2BDC;
loc_825D2BD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D2BDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2BF8"))) PPC_WEAK_FUNC(sub_825D2BF8);
PPC_FUNC_IMPL(__imp__sub_825D2BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,18888
	ctx.r3.s64 = ctx.r11.s64 + 18888;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2C08"))) PPC_WEAK_FUNC(sub_825D2C08);
PPC_FUNC_IMPL(__imp__sub_825D2C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825d2c40
	if (ctx.cr6.eq) goto loc_825D2C40;
	// bl 0x8247baf0
	ctx.lr = 0x825D2C30;
	sub_8247BAF0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d2c40
	if (!ctx.cr6.eq) goto loc_825D2C40;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d2c4c
	goto loc_825D2C4C;
loc_825D2C40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d3158
	ctx.lr = 0x825D2C4C;
	sub_825D3158(ctx, base);
loc_825D2C4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2C68"))) PPC_WEAK_FUNC(sub_825D2C68);
PPC_FUNC_IMPL(__imp__sub_825D2C68) {
	PPC_FUNC_PROLOGUE();
	// b 0x8247baf0
	sub_8247BAF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D2C70"))) PPC_WEAK_FUNC(sub_825D2C70);
PPC_FUNC_IMPL(__imp__sub_825D2C70) {
	PPC_FUNC_PROLOGUE();
	// b 0x825d2ff8
	sub_825D2FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D2C78"))) PPC_WEAK_FUNC(sub_825D2C78);
PPC_FUNC_IMPL(__imp__sub_825D2C78) {
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
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82833108
	ctx.lr = 0x825D2C94;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d2cec
	if (ctx.cr0.eq) goto loc_825D2CEC;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,3568
	ctx.r10.s64 = ctx.r10.s64 + 3568;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,3472
	ctx.r11.s64 = ctx.r11.s64 + 3472;
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
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// b 0x825d2cf0
	goto loc_825D2CF0;
loc_825D2CEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D2CF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2D08"))) PPC_WEAK_FUNC(sub_825D2D08);
PPC_FUNC_IMPL(__imp__sub_825D2D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8247baf0
	ctx.lr = 0x825D2D28;
	sub_8247BAF0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d2d38
	if (!ctx.cr6.eq) goto loc_825D2D38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x825d2d50
	goto loc_825D2D50;
loc_825D2D38:
	// bl 0x825d2ff8
	ctx.lr = 0x825D2D3C;
	sub_825D2FF8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825d2d50
	if (ctx.cr6.eq) goto loc_825D2D50;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8248c828
	ctx.lr = 0x825D2D50;
	sub_8248C828(ctx, base);
loc_825D2D50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2D68"))) PPC_WEAK_FUNC(sub_825D2D68);
PPC_FUNC_IMPL(__imp__sub_825D2D68) {
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
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d2db8
	if (ctx.cr6.eq) goto loc_825D2DB8;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825d2db8
	if (ctx.cr6.eq) goto loc_825D2DB8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D2DA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d2db8
	if (ctx.cr0.eq) goto loc_825D2DB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D2DB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D2DB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2DC8"))) PPC_WEAK_FUNC(sub_825D2DC8);
PPC_FUNC_IMPL(__imp__sub_825D2DC8) {
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
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d2e1c
	if (ctx.cr6.eq) goto loc_825D2E1C;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825d2e1c
	if (ctx.cr6.eq) goto loc_825D2E1C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D2E00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d2e1c
	if (ctx.cr0.eq) goto loc_825D2E1C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D2E1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D2E1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2E30"))) PPC_WEAK_FUNC(sub_825D2E30);
PPC_FUNC_IMPL(__imp__sub_825D2E30) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825d2e74
	if (ctx.cr6.eq) goto loc_825D2E74;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D2E74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D2E74:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D2E84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x825d2ebc
	if (!ctx.cr6.lt) goto loc_825D2EBC;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d2ea8
	if (ctx.cr6.eq) goto loc_825D2EA8;
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
loc_825D2EA8:
	// lfs f13,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,16356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16356);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_825D2EBC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f2,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,1916(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1916);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D2ED4;
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

__attribute__((alias("__imp__sub_825D2EF0"))) PPC_WEAK_FUNC(sub_825D2EF0);
PPC_FUNC_IMPL(__imp__sub_825D2EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lfs f0,20(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lfs f0,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2F18"))) PPC_WEAK_FUNC(sub_825D2F18);
PPC_FUNC_IMPL(__imp__sub_825D2F18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2F30"))) PPC_WEAK_FUNC(sub_825D2F30);
PPC_FUNC_IMPL(__imp__sub_825D2F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r11,3548
	ctx.r3.s64 = ctx.r11.s64 + 3548;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2F40"))) PPC_WEAK_FUNC(sub_825D2F40);
PPC_FUNC_IMPL(__imp__sub_825D2F40) {
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
	ctx.lr = 0x825D2F5C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d2f90
	if (ctx.cr0.eq) goto loc_825D2F90;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,3568
	ctx.r10.s64 = ctx.r10.s64 + 3568;
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
	// b 0x825d2f94
	goto loc_825D2F94;
loc_825D2F90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D2F94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2FA8"))) PPC_WEAK_FUNC(sub_825D2FA8);
PPC_FUNC_IMPL(__imp__sub_825D2FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825d2ff8
	ctx.lr = 0x825D2FC8;
	sub_825D2FF8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825d2fdc
	if (ctx.cr6.eq) goto loc_825D2FDC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8248c828
	ctx.lr = 0x825D2FDC;
	sub_8248C828(ctx, base);
loc_825D2FDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D2FF8"))) PPC_WEAK_FUNC(sub_825D2FF8);
PPC_FUNC_IMPL(__imp__sub_825D2FF8) {
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
	// addi r31,r11,12576
	ctx.r31.s64 = ctx.r11.s64 + 12576;
	// lwz r11,12572(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12572);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825d3040
	if (!ctx.cr0.eq) goto loc_825D3040;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,3644
	ctx.r9.s64 = ctx.r9.s64 + 3644;
	// stw r11,12572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12572, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,23336
	ctx.r3.s64 = ctx.r11.s64 + 23336;
	// bl 0x82a4c758
	ctx.lr = 0x825D3040;
	sub_82A4C758(ctx, base);
loc_825D3040:
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

__attribute__((alias("__imp__sub_825D3058"))) PPC_WEAK_FUNC(sub_825D3058);
PPC_FUNC_IMPL(__imp__sub_825D3058) {
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
	ctx.lr = 0x825D3070;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825d3094
	if (ctx.cr0.eq) goto loc_825D3094;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x825D3080;
	sub_82833180(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,3568
	ctx.r11.s64 = ctx.r11.s64 + 3568;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x825d3098
	goto loc_825D3098;
loc_825D3094:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D3098:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D30B0"))) PPC_WEAK_FUNC(sub_825D30B0);
PPC_FUNC_IMPL(__imp__sub_825D30B0) {
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
	// lwz r11,25296(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25296);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825d30f0
	if (!ctx.cr0.eq) goto loc_825D30F0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// stw r11,25296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25296, ctx.r11.u32);
	// addi r3,r9,3548
	ctx.r3.s64 = ctx.r9.s64 + 3548;
	// bl 0x82816528
	ctx.lr = 0x825D30E8;
	sub_82816528(ctx, base);
	// stw r3,25292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25292, ctx.r3.u32);
	// b 0x825d30f4
	goto loc_825D30F4;
loc_825D30F0:
	// lwz r3,25292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25292);
loc_825D30F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D3108"))) PPC_WEAK_FUNC(sub_825D3108);
PPC_FUNC_IMPL(__imp__sub_825D3108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825d2ff8
	ctx.lr = 0x825D3128;
	sub_825D2FF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D313C;
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

__attribute__((alias("__imp__sub_825D3158"))) PPC_WEAK_FUNC(sub_825D3158);
PPC_FUNC_IMPL(__imp__sub_825D3158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825d3190
	if (ctx.cr6.eq) goto loc_825D3190;
	// bl 0x825d2ff8
	ctx.lr = 0x825D3180;
	sub_825D2FF8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d3190
	if (!ctx.cr6.eq) goto loc_825D3190;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d319c
	goto loc_825D319C;
loc_825D3190:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c990
	ctx.lr = 0x825D319C;
	sub_8248C990(ctx, base);
loc_825D319C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D31B8"))) PPC_WEAK_FUNC(sub_825D31B8);
PPC_FUNC_IMPL(__imp__sub_825D31B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825D31C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82846fb0
	ctx.lr = 0x825D31DC;
	sub_82846FB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d3224
	if (ctx.cr0.eq) goto loc_825D3224;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D31F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8247c018
	ctx.lr = 0x825D31FC;
	sub_8247C018(ctx, base);
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
	ctx.lr = 0x825D3214;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d3220
	if (!ctx.cr0.eq) goto loc_825D3220;
	// li r31,0
	ctx.r31.s64 = 0;
loc_825D3220:
	// stw r31,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r31.u32);
loc_825D3224:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x82846fb0
	ctx.lr = 0x825D3230;
	sub_82846FB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d3278
	if (ctx.cr0.eq) goto loc_825D3278;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D3248;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8247c400
	ctx.lr = 0x825D3250;
	sub_8247C400(ctx, base);
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
	ctx.lr = 0x825D3268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d3274
	if (!ctx.cr0.eq) goto loc_825D3274;
	// li r31,0
	ctx.r31.s64 = 0;
loc_825D3274:
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
loc_825D3278:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D3280"))) PPC_WEAK_FUNC(sub_825D3280);
PPC_FUNC_IMPL(__imp__sub_825D3280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D3288;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825d32bc
	if (ctx.cr6.eq) goto loc_825D32BC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D32B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_825D32BC:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D32D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825d3328
	if (ctx.cr0.eq) goto loc_825D3328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c1f08
	ctx.lr = 0x825D32E8;
	sub_829C1F08(ctx, base);
	// bl 0x82611600
	ctx.lr = 0x825D32EC;
	sub_82611600(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d3300
	if (ctx.cr0.eq) goto loc_825D3300;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// b 0x825d330c
	goto loc_825D330C;
loc_825D3300:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2392);
loc_825D330C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D3314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bgt cr6,0x825d3320
	if (ctx.cr6.gt) goto loc_825D3320;
	// li r3,1
	ctx.r3.s64 = 1;
loc_825D3320:
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// b 0x825d3344
	goto loc_825D3344;
loc_825D3328:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D333C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,2184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2184);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_825D3344:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D3358;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// blt cr6,0x825d3388
	if (ctx.cr6.lt) goto loc_825D3388;
	// beq cr6,0x825d337c
	if (ctx.cr6.eq) goto loc_825D337C;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D3378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825d33a0
	goto loc_825D33A0;
loc_825D337C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// b 0x825d3390
	goto loc_825D3390;
loc_825D3388:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
loc_825D3390:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D33A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D33A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D33A8"))) PPC_WEAK_FUNC(sub_825D33A8);
PPC_FUNC_IMPL(__imp__sub_825D33A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x825D33B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// std r6,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r6.u64);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// std r8,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r8.u64);
	// addi r3,r11,-17172
	ctx.r3.s64 = ctx.r11.s64 + -17172;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x82816528
	ctx.lr = 0x825D33E0;
	sub_82816528(ctx, base);
	// lwz r10,280(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r25,296(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// rldicr r10,r25,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8242f058
	ctx.lr = 0x825D3414;
	sub_8242F058(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x825d362c
	if (ctx.cr0.eq) goto loc_825D362C;
	// lwz r30,16(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D3438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r11,72(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D346C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x825d3498
	if (!ctx.cr6.eq) goto loc_825D3498;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r8,72(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r25,76(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// b 0x825d34c0
	goto loc_825D34C0;
loc_825D3498:
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D34AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x825d34c0
	if (!ctx.cr6.eq) goto loc_825D34C0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x825d34c0
	if (ctx.cr6.eq) goto loc_825D34C0;
	// lwz r25,3924(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3924);
loc_825D34C0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r28,56(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D34DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x825d3520
	if (ctx.cr0.eq) goto loc_825D3520;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D34F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// lwz r26,1692(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1692);
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f0.u64);
	// lwz r28,148(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
loc_825D3520:
	// stw r26,1428(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1428, ctx.r26.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lfs f1,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lwz r28,68(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r10,1024
	ctx.r10.s64 = 1024;
	// lwz r26,28(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ld r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// lwz r27,160(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lwz r24,1040(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1040);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r4.u64);
	// rldicr r7,r28,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// ld r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 60);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stw r26,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r26.u32);
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x825D3584;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f1,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D35A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825d35ec
	if (!ctx.cr6.gt) goto loc_825D35EC;
	// li r28,0
	ctx.r28.s64 = 0;
loc_825D35B8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,1408(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1408);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4);
	// bl 0x82979140
	ctx.lr = 0x825D35D8;
	sub_82979140(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d35b8
	if (ctx.cr6.lt) goto loc_825D35B8;
loc_825D35EC:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825d362c
	if (!ctx.cr6.gt) goto loc_825D362C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_825D3600:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r3,1408(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1408);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82979088
	ctx.lr = 0x825D3618;
	sub_82979088(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d3600
	if (ctx.cr6.lt) goto loc_825D3600;
loc_825D362C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D3638"))) PPC_WEAK_FUNC(sub_825D3638);
PPC_FUNC_IMPL(__imp__sub_825D3638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x825D3640;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,16(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r5,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r5.u64);
	// std r6,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r6.u64);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D366C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// lwz r10,660(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 660);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r8,664(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 664);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r9,-17148
	ctx.r3.s64 = ctx.r9.s64 + -17148;
	// addi r28,r1,136
	ctx.r28.s64 = ctx.r1.s64 + 136;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// addi r27,r1,240
	ctx.r27.s64 = ctx.r1.s64 + 240;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// bl 0x82816528
	ctx.lr = 0x825D369C;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
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
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x825D36D8;
	sub_828250B0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x825d3788
	if (ctx.cr0.eq) goto loc_825D3788;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwa r30,56(r31)
	ctx.r30.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 56));
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D36F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r9,1024
	ctx.r9.s64 = 1024;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lfs f6,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lwz r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lfs f5,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f5.f64 = double(temp.f32);
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lfs f4,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f4.f64 = double(temp.f32);
	// lwz r10,1040(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1040);
	// lfs f3,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f3.f64 = double(temp.f32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lfs f2,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f1,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825D3768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f1,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D3788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D3788:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825d37d0
	if (!ctx.cr6.gt) goto loc_825D37D0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_825D379C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,1408(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1408);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4);
	// bl 0x82979140
	ctx.lr = 0x825D37BC;
	sub_82979140(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d379c
	if (ctx.cr6.lt) goto loc_825D379C;
loc_825D37D0:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825d3810
	if (!ctx.cr6.gt) goto loc_825D3810;
	// li r30,0
	ctx.r30.s64 = 0;
loc_825D37E4:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r3,1408(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1408);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82979088
	ctx.lr = 0x825D37FC;
	sub_82979088(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d37e4
	if (ctx.cr6.lt) goto loc_825D37E4;
loc_825D3810:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D3820"))) PPC_WEAK_FUNC(sub_825D3820);
PPC_FUNC_IMPL(__imp__sub_825D3820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x825D3828;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,16(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r5,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r5.u64);
	// std r6,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r6.u64);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D3854;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// lwz r10,660(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 660);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r8,664(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 664);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r9,-17132
	ctx.r3.s64 = ctx.r9.s64 + -17132;
	// addi r28,r1,120
	ctx.r28.s64 = ctx.r1.s64 + 120;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r27,r1,224
	ctx.r27.s64 = ctx.r1.s64 + 224;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// bl 0x82816528
	ctx.lr = 0x825D3884;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
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
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x825D38C0;
	sub_828250B0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x825d3958
	if (ctx.cr0.eq) goto loc_825D3958;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwa r30,56(r31)
	ctx.r30.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 56));
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D38E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r9,1024
	ctx.r9.s64 = 1024;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f3,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f3.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f2,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// lwz r7,20(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,1040(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1040);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f1,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D3938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D3958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D3958:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825d39a0
	if (!ctx.cr6.gt) goto loc_825D39A0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_825D396C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,1408(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1408);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4);
	// bl 0x82979140
	ctx.lr = 0x825D398C;
	sub_82979140(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d396c
	if (ctx.cr6.lt) goto loc_825D396C;
loc_825D39A0:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825d39e0
	if (!ctx.cr6.gt) goto loc_825D39E0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_825D39B4:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r3,1408(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1408);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82979088
	ctx.lr = 0x825D39CC;
	sub_82979088(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d39b4
	if (ctx.cr6.lt) goto loc_825D39B4;
loc_825D39E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D39F0"))) PPC_WEAK_FUNC(sub_825D39F0);
PPC_FUNC_IMPL(__imp__sub_825D39F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x825D39F8;
	__savegprlr_23(ctx, base);
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f29.u64);
	// stfd f30,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D3A24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// beq cr6,0x825d3a60
	if (ctx.cr6.eq) goto loc_825D3A60;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825d3a84
	if (!ctx.cr6.eq) goto loc_825D3A84;
loc_825D3A60:
	// lwz r24,2864(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2864);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x825d3a84
	if (ctx.cr6.eq) goto loc_825D3A84;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,1412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D3A80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_825D3A84:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825d3b74
	if (ctx.cr6.lt) goto loc_825D3B74;
	// beq cr6,0x825d3af4
	if (ctx.cr6.eq) goto loc_825D3AF4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x825d3ad0
	if (ctx.cr6.lt) goto loc_825D3AD0;
	// beq cr6,0x825d3ab8
	if (ctx.cr6.eq) goto loc_825D3AB8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D3AB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825d3b88
	goto loc_825D3B88;
loc_825D3AB8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x825d3b88
	if (ctx.cr6.eq) goto loc_825D3B88;
	// lwz r3,3284(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3284);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825d3b88
	if (ctx.cr6.eq) goto loc_825D3B88;
	// b 0x825d3b78
	goto loc_825D3B78;
loc_825D3AD0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x825d3ae4
	if (ctx.cr6.eq) goto loc_825D3AE4;
	// lwz r3,3288(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3288);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x825d3b78
	if (!ctx.cr6.eq) goto loc_825D3B78;
loc_825D3AE4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x825d3b88
	if (ctx.cr6.eq) goto loc_825D3B88;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x825d3b78
	goto loc_825D3B78;
loc_825D3AF4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x8284d9a0
	ctx.lr = 0x825D3B04;
	sub_8284D9A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,852(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 852);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D3B1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,312(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lfs f0,304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfs f0,308(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x82817e08
	ctx.lr = 0x825D3B58;
	sub_82817E08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// b 0x825d3b88
	goto loc_825D3B88;
loc_825D3B74:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_825D3B78:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x8284da30
	ctx.lr = 0x825D3B88;
	sub_8284DA30(ctx, base);
loc_825D3B88:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825d3c9c
	if (ctx.cr6.eq) goto loc_825D3C9C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f29,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f29.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,32748(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32748);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// fsubs f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r3,13024(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13024);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r8,8324
	ctx.r8.s64 = 8324;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f30,908(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r25,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r25.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r25,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r25.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r25,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r25.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stw r25,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r25.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r25,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r25.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stw r25,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r25.u32);
	// stfs f30,196(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stw r25,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r25.u32);
	// bl 0x82825330
	ctx.lr = 0x825D3C40;
	sub_82825330(ctx, base);
	// lfs f0,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x825d3c9c
	if (!ctx.cr6.lt) goto loc_825D3C9C;
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f12,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// lfs f11,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// beq cr6,0x825d3c84
	if (ctx.cr6.eq) goto loc_825D3C84;
	// fsubs f13,f29,f13
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x825d3c9c
	if (ctx.cr6.gt) goto loc_825D3C9C;
loc_825D3C84:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r27,152(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// b 0x825d3ca0
	goto loc_825D3CA0;
loc_825D3C9C:
	// lwz r27,104(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_825D3CA0:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D3CB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x825d3de8
	if (!ctx.cr6.eq) goto loc_825D3DE8;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D3CD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,-17264
	ctx.r3.s64 = ctx.r11.s64 + -17264;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x82816528
	ctx.lr = 0x825D3CEC;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rldicr r8,r27,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x8242f058
	ctx.lr = 0x825D3D1C;
	sub_8242F058(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825d3f3c
	if (ctx.cr0.eq) goto loc_825D3F3C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// stw r11,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r11,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r11.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r11,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r11.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r11.u32);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stw r11,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r11.u32);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1468, temp.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825d3da4
	if (!ctx.cr6.gt) goto loc_825D3DA4;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_825D3D70:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4);
	// bl 0x82979140
	ctx.lr = 0x825D3D90;
	sub_82979140(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d3d70
	if (ctx.cr6.lt) goto loc_825D3D70;
loc_825D3DA4:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825d3e80
	if (!ctx.cr6.gt) goto loc_825D3E80;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_825D3DB8:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82979088
	ctx.lr = 0x825D3DD0;
	sub_82979088(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d3db8
	if (ctx.cr6.lt) goto loc_825D3DB8;
	// b 0x825d3e80
	goto loc_825D3E80;
loc_825D3DE8:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D3DFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x825d3e28
	if (!ctx.cr6.eq) goto loc_825D3E28;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rldicr r6,r27,32,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
loc_825D3E18:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D3E24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825d3e7c
	goto loc_825D3E7C;
loc_825D3E28:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D3E3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rldicr r6,r27,32,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x825d3e5c
	if (!ctx.cr6.eq) goto loc_825D3E5C;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// b 0x825d3e18
	goto loc_825D3E18;
loc_825D3E5C:
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D3E7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D3E7C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_825D3E80:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825d3f3c
	if (ctx.cr6.eq) goto loc_825D3F3C;
	// lwz r11,1692(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1692);
	// stw r11,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825d3f3c
	if (ctx.cr6.eq) goto loc_825D3F3C;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825d3f04
	if (ctx.cr6.lt) goto loc_825D3F04;
	// beq cr6,0x825d3ef4
	if (ctx.cr6.eq) goto loc_825D3EF4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x825d3ed0
	if (ctx.cr6.lt) goto loc_825D3ED0;
	// bne cr6,0x825d3f3c
	if (!ctx.cr6.eq) goto loc_825D3F3C;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x825d3f3c
	if (ctx.cr6.eq) goto loc_825D3F3C;
	// lwz r5,3284(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3284);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x825d3f3c
	if (ctx.cr6.eq) goto loc_825D3F3C;
	// b 0x825d3f08
	goto loc_825D3F08;
loc_825D3ED0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x825d3ee4
	if (ctx.cr6.eq) goto loc_825D3EE4;
	// lwz r5,3288(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3288);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x825d3f08
	if (!ctx.cr6.eq) goto loc_825D3F08;
loc_825D3EE4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x825d3f3c
	if (ctx.cr6.eq) goto loc_825D3F3C;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x825d3f08
	goto loc_825D3F08;
loc_825D3EF4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r11,284(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 284);
	// b 0x825d3f10
	goto loc_825D3F10;
loc_825D3F04:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_825D3F08:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
loc_825D3F10:
	// lwz r8,44(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// rldicr r9,r25,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r7,r8,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// ld r6,36(r29)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r29.u32 + 36);
	// ld r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D3F3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D3F3C:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
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

__attribute__((alias("__imp__sub_825D3F50"))) PPC_WEAK_FUNC(sub_825D3F50);
PPC_FUNC_IMPL(__imp__sub_825D3F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d0
	ctx.lr = 0x825D3F58;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82a61748
	ctx.lr = 0x825D3F60;
	__savefpr_28(ctx, base);
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D3F80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x824090e0
	ctx.lr = 0x825D3F84;
	sub_824090E0(ctx, base);
	// lwz r23,12(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D3FA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r25,960(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 960);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r31,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r31.u32);
	// stw r31,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r31.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r11,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r11.u32);
	// stw r31,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r31.u32);
	// lfs f29,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f29.f64 = double(temp.f32);
	// stw r31,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r31.u32);
	// lfs f31,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r11,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r11.u32);
	// stw r31,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r31.u32);
	// stw r31,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r31.u32);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// stw r31,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r31.u32);
	// stw r31,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r31.u32);
	// lwz r28,8680(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8680);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x825d4148
	if (ctx.cr6.eq) goto loc_825D4148;
	// lwz r11,656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,660(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 660);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lwz r7,664(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 664);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// li r29,1
	ctx.r29.s64 = 1;
	// stfs f31,432(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// stfs f31,440(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
	// stw r9,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r9.u32);
	// lfs f0,18332(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18332);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r7.u32);
	// lfs f13,18328(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18328);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,18324(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 18324);
	ctx.f12.f64 = double(temp.f32);
	// stw r29,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r29.u32);
	// stfs f0,416(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// stfs f13,420(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// stfs f0,424(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// stfs f12,428(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 428, temp.u32);
	// stfs f29,336(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f31,340(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f31,344(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stfs f31,320(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stfs f31,324(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stfs f31,328(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// bl 0x82817bb8
	ctx.lr = 0x825D4074;
	sub_82817BB8(ctx, base);
	// addi r11,r25,-3
	ctx.r11.s64 = ctx.r25.s64 + -3;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// ld r8,336(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 336);
	// lwz r15,8(r3)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r21,2
	ctx.r21.s64 = 2;
	// lwz r25,344(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// li r19,100
	ctx.r19.s64 = 100;
	// ld r22,320(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r20,328(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// addi r16,r1,448
	ctx.r16.s64 = ctx.r1.s64 + 448;
	// ld r18,620(r30)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r30.u32 + 620);
	// lfs f4,20252(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20252);
	ctx.f4.f64 = double(temp.f32);
	// lwz r14,628(r30)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// lfs f2,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lwz r17,440(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// lfs f1,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// std r8,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r8.u64);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// lwz r9,1016(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1016);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r5,416(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 416);
	// rldicr r8,r17,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r17.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,424(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 424);
	// ld r7,432(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 432);
	// stb r21,311(r1)
	PPC_STORE_U8(ctx.r1.u32 + 311, ctx.r21.u8);
	// stw r25,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r25.u32);
	// stw r19,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r19.u32);
	// stw r29,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r29.u32);
	// std r22,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r22.u64);
	// stw r20,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r20.u32);
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
	// stb r29,215(r1)
	PPC_STORE_U8(ctx.r1.u32 + 215, ctx.r29.u8);
	// stb r31,207(r1)
	PPC_STORE_U8(ctx.r1.u32 + 207, ctx.r31.u8);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// stw r29,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r29.u32);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r16,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r16.u32);
	// stb r31,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r31.u8);
	// std r18,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r18.u64);
	// stw r14,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r14.u32);
	// stw r15,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r15.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825D4148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D4148:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825d4324
	if (!ctx.cr6.gt) goto loc_825D4324;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lis r22,-31949
	ctx.r22.s64 = -2093809664;
	// lfs f28,32748(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32748);
	ctx.f28.f64 = double(temp.f32);
loc_825D4168:
	// lwz r11,384(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825d4324
	if (!ctx.cr6.lt) goto loc_825D4324;
	// lwz r11,380(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x8281d9b0
	ctx.lr = 0x825D4184;
	sub_8281D9B0(ctx, base);
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825d4284
	if (ctx.cr6.eq) goto loc_825D4284;
	// lfs f30,328(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f30.f64 = double(temp.f32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lfs f0,320(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f30,f28
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f28.f64));
	// lfs f12,324(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	ctx.f12.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f31,352(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// stfs f31,356(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// li r8,8324
	ctx.r8.s64 = 8324;
	// stfs f31,360(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// addi r7,r1,320
	ctx.r7.s64 = ctx.r1.s64 + 320;
	// stfs f0,472(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 472, temp.u32);
	// addi r6,r1,472
	ctx.r6.s64 = ctx.r1.s64 + 472;
	// stfs f12,476(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 476, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f13,480(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 480, temp.u32);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// lwz r3,13024(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// stfs f31,496(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 496, temp.u32);
	// stfs f31,500(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 500, temp.u32);
	// stw r11,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r11.u32);
	// stfs f31,504(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 504, temp.u32);
	// stw r31,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r31.u32);
	// stfs f31,508(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 508, temp.u32);
	// stw r31,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r31.u32);
	// stfs f31,512(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 512, temp.u32);
	// stw r31,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r31.u32);
	// stfs f31,516(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 516, temp.u32);
	// stw r31,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r31.u32);
	// stfs f31,520(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 520, temp.u32);
	// stw r31,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r31.u32);
	// stfs f31,524(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 524, temp.u32);
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// stfs f31,528(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 528, temp.u32);
	// stw r31,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r31.u32);
	// stfs f29,532(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 532, temp.u32);
	// bl 0x82825330
	ctx.lr = 0x825D4228;
	sub_82825330(ctx, base);
	// lfs f0,532(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x825d4284
	if (!ctx.cr6.lt) goto loc_825D4284;
	// lfs f12,504(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 504);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,16(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f12,496(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// lfs f11,500(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,344(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stfs f12,336(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f11,340(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// beq cr6,0x825d426c
	if (ctx.cr6.eq) goto loc_825D426C;
	// fsubs f13,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x825d4284
	if (ctx.cr6.gt) goto loc_825D4284;
loc_825D426C:
	// lwz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r9,344(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// stw r10,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r10.u32);
	// stw r9,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r9.u32);
loc_825D4284:
	// lwz r11,380(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// lfs f0,620(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,320(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	ctx.f12.f64 = double(temp.f32);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lfs f11,324(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f0,392(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// stfs f13,396(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// stfs f31,400(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// bl 0x8281d960
	ctx.lr = 0x825D42B4;
	sub_8281D960(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r1,392
	ctx.r4.s64 = ctx.r1.s64 + 392;
	// addi r3,r1,568
	ctx.r3.s64 = ctx.r1.s64 + 568;
	// bl 0x82817280
	ctx.lr = 0x825D42C8;
	sub_82817280(ctx, base);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D42E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// lwz r10,328(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,0(r20)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r20.u32 + 0);
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,320(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D4310;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d4168
	if (ctx.cr6.lt) goto loc_825D4168;
loc_825D4324:
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82400f38
	ctx.lr = 0x825D432C;
	sub_82400F38(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82400f38
	ctx.lr = 0x825D4334;
	sub_82400F38(ctx, base);
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82a61794
	ctx.lr = 0x825D4340;
	__restfpr_28(ctx, base);
	// b 0x82a4ea20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D4348"))) PPC_WEAK_FUNC(sub_825D4348);
PPC_FUNC_IMPL(__imp__sub_825D4348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D4350;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
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
	// bl 0x82333900
	ctx.lr = 0x825D4388;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d43b8
	if (ctx.cr0.eq) goto loc_825D43B8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// addi r10,r10,3684
	ctx.r10.s64 = ctx.r10.s64 + 3684;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x825d43bc
	goto loc_825D43BC;
loc_825D43B8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_825D43BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82846f58
	ctx.lr = 0x825D43C4;
	sub_82846F58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D43D0"))) PPC_WEAK_FUNC(sub_825D43D0);
PPC_FUNC_IMPL(__imp__sub_825D43D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825d4348
	ctx.lr = 0x825D43F0;
	sub_825D4348(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D4438"))) PPC_WEAK_FUNC(sub_825D4438);
PPC_FUNC_IMPL(__imp__sub_825D4438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x825D4440;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x825d4348
	ctx.lr = 0x825D4458;
	sub_825D4348(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// bl 0x82816528
	ctx.lr = 0x825D4464;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82846e98
	ctx.lr = 0x825D4478;
	sub_82846E98(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r30,r10,r3
	ctx.r30.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 + ctx.r3.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x825d4528
	if (!ctx.cr6.gt) goto loc_825D4528;
	// subf r28,r30,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// subf r27,r30,r10
	ctx.r27.s64 = ctx.r10.s64 - ctx.r30.s64;
	// lfs f31,23784(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23784);
	ctx.f31.f64 = double(temp.f32);
loc_825D44B4:
	// lwax r11,r27,r30
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r27.u32 + ctx.r30.u32));
	// lfsx f0,r28,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r26,0(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82332d50
	ctx.lr = 0x825D44F0;
	sub_82332D50(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d4514
	if (ctx.cr0.eq) goto loc_825D4514;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_825D4514:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d44b4
	if (ctx.cr6.lt) goto loc_825D44B4;
loc_825D4528:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D4538"))) PPC_WEAK_FUNC(sub_825D4538);
PPC_FUNC_IMPL(__imp__sub_825D4538) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x825d454c
	if (!ctx.cr6.gt) goto loc_825D454C;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// blr 
	return;
loc_825D454C:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mulli r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D4560"))) PPC_WEAK_FUNC(sub_825D4560);
PPC_FUNC_IMPL(__imp__sub_825D4560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82333900
	ctx.lr = 0x825D458C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d45bc
	if (ctx.cr0.eq) goto loc_825D45BC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// addi r10,r10,3684
	ctx.r10.s64 = ctx.r10.s64 + 3684;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x825d45c0
	goto loc_825D45C0;
loc_825D45BC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_825D45C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82846f58
	ctx.lr = 0x825D45C8;
	sub_82846F58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D45E0"))) PPC_WEAK_FUNC(sub_825D45E0);
PPC_FUNC_IMPL(__imp__sub_825D45E0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 11, ctx.xer);
	// bgt cr6,0x825d4670
	if (ctx.cr6.gt) {
		sub_825D4670(ctx, base);
		return;
	}
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,-31616
	ctx.r12.s64 = ctx.r12.s64 + -31616;
	// lbzx r0,r12,r4
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r4.u32);
	// lis r12,-32163
	ctx.r12.s64 = -2107834368;
	// addi r12,r12,17936
	ctx.r12.s64 = ctx.r12.s64 + 17936;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_825D4610;
	case 1:
		goto loc_825D4618;
	case 2:
		goto loc_825D4628;
	case 3:
		goto loc_825D4630;
	case 4:
		goto loc_825D4638;
	case 5:
		goto loc_825D4620;
	case 6:
		goto loc_825D4640;
	case 7:
		goto loc_825D4648;
	case 8:
		goto loc_825D4650;
	case 9:
		goto loc_825D4658;
	case 10:
		goto loc_825D4660;
	case 11:
		goto loc_825D4668;
	default:
		__builtin_unreachable();
	}
loc_825D4610:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825D4618:
	// li r3,25
	ctx.r3.s64 = 25;
	// blr 
	return;
loc_825D4620:
	// li r3,23
	ctx.r3.s64 = 23;
	// blr 
	return;
loc_825D4628:
	// li r3,21
	ctx.r3.s64 = 21;
	// blr 
	return;
loc_825D4630:
	// li r3,22
	ctx.r3.s64 = 22;
	// blr 
	return;
loc_825D4638:
	// li r3,24
	ctx.r3.s64 = 24;
	// blr 
	return;
loc_825D4640:
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
loc_825D4648:
	// li r3,30
	ctx.r3.s64 = 30;
	// blr 
	return;
loc_825D4650:
	// li r3,29
	ctx.r3.s64 = 29;
	// blr 
	return;
loc_825D4658:
	// li r3,28
	ctx.r3.s64 = 28;
	// blr 
	return;
loc_825D4660:
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
loc_825D4668:
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D4670"))) PPC_WEAK_FUNC(sub_825D4670);
PPC_FUNC_IMPL(__imp__sub_825D4670) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D4678"))) PPC_WEAK_FUNC(sub_825D4678);
PPC_FUNC_IMPL(__imp__sub_825D4678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x825D4680;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x825d4560
	ctx.lr = 0x825D4694;
	sub_825D4560(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r11,76(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D46D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// bl 0x82816528
	ctx.lr = 0x825D46E4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82846e98
	ctx.lr = 0x825D46F8;
	sub_82846E98(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r27,0
	ctx.r27.s64 = 0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x825d47a0
	if (!ctx.cr6.gt) goto loc_825D47A0;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_825D4714:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82846fb0
	ctx.lr = 0x825D4720;
	sub_82846FB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d478c
	if (ctx.cr0.eq) goto loc_825D478C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D4738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8247cfb8
	ctx.lr = 0x825D4740;
	sub_8247CFB8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D4758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d4764
	if (!ctx.cr0.eq) goto loc_825D4764;
	// li r28,0
	ctx.r28.s64 = 0;
loc_825D4764:
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x825D4778;
	sub_82332D50(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d478c
	if (ctx.cr0.eq) goto loc_825D478C;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_825D478C:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d4714
	if (ctx.cr6.lt) goto loc_825D4714;
loc_825D47A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D47A8"))) PPC_WEAK_FUNC(sub_825D47A8);
PPC_FUNC_IMPL(__imp__sub_825D47A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ble cr6,0x825d47c0
	if (!ctx.cr6.gt) goto loc_825D47C0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
loc_825D47C0:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D47D0"))) PPC_WEAK_FUNC(sub_825D47D0);
PPC_FUNC_IMPL(__imp__sub_825D47D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825d4678
	ctx.lr = 0x825D47F0;
	sub_825D4678(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825d482c
	if (ctx.cr6.lt) goto loc_825D482C;
	// bne cr6,0x825d483c
	if (!ctx.cr6.eq) goto loc_825D483C;
	// li r11,18
	ctx.r11.s64 = 18;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x825d4834
	goto loc_825D4834;
loc_825D482C:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
loc_825D4834:
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_825D483C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D4858"))) PPC_WEAK_FUNC(sub_825D4858);
PPC_FUNC_IMPL(__imp__sub_825D4858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x825D4860;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x825d4560
	ctx.lr = 0x825D4874;
	sub_825D4560(ctx, base);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stfs f0,12(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 12, temp.u32);
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// bl 0x82816528
	ctx.lr = 0x825D4888;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82846e98
	ctx.lr = 0x825D489C;
	sub_82846E98(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r25,0
	ctx.r25.s64 = 0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r30,r10,r29
	ctx.r30.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x825d4940
	if (!ctx.cr6.gt) goto loc_825D4940;
	// addi r28,r26,64
	ctx.r28.s64 = ctx.r26.s64 + 64;
	// subf r27,r30,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r30.s64;
loc_825D48C8:
	// add r11,r27,r30
	ctx.r11.u64 = ctx.r27.u64 + ctx.r30.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,28
	ctx.r5.s64 = 28;
	// lwzx r7,r27,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r24,4(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82332d50
	ctx.lr = 0x825D4910;
	sub_82332D50(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825d492c
	if (ctx.cr0.eq) goto loc_825D492C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x825D492C;
	sub_82A4EA80(ctx, base);
loc_825D492C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d48c8
	if (ctx.cr6.lt) goto loc_825D48C8;
loc_825D4940:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r30,r10,r29
	ctx.r30.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x825d49e4
	if (!ctx.cr6.gt) goto loc_825D49E4;
	// addi r27,r26,16
	ctx.r27.s64 = ctx.r26.s64 + 16;
loc_825D4964:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82332d50
	ctx.lr = 0x825D4998;
	sub_82332D50(ctx, base);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d49cc
	if (ctx.cr0.eq) goto loc_825D49CC;
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
loc_825D49CC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d4964
	if (ctx.cr6.lt) goto loc_825D4964;
loc_825D49E4:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x825d4a5c
	if (!ctx.cr6.gt) goto loc_825D4A5C;
	// addi r29,r26,40
	ctx.r29.s64 = ctx.r26.s64 + 40;
	// subf r28,r30,r10
	ctx.r28.s64 = ctx.r10.s64 - ctx.r30.s64;
loc_825D4A0C:
	// lwzx r11,r28,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82332d50
	ctx.lr = 0x825D4A30;
	sub_82332D50(ctx, base);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d4a48
	if (ctx.cr0.eq) goto loc_825D4A48;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_825D4A48:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d4a0c
	if (ctx.cr6.lt) goto loc_825D4A0C;
loc_825D4A5C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D4A68"))) PPC_WEAK_FUNC(sub_825D4A68);
PPC_FUNC_IMPL(__imp__sub_825D4A68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x825d4a7c
	if (!ctx.cr6.gt) goto loc_825D4A7C;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// blr 
	return;
loc_825D4A7C:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D4A90"))) PPC_WEAK_FUNC(sub_825D4A90);
PPC_FUNC_IMPL(__imp__sub_825D4A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x825D4A98;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x825d4560
	ctx.lr = 0x825D4AAC;
	sub_825D4560(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D4AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// bl 0x82816528
	ctx.lr = 0x825D4AF4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82846e98
	ctx.lr = 0x825D4B08;
	sub_82846E98(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r27,0
	ctx.r27.s64 = 0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x825d4bb0
	if (!ctx.cr6.gt) goto loc_825D4BB0;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_825D4B24:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82846fb0
	ctx.lr = 0x825D4B30;
	sub_82846FB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d4b9c
	if (ctx.cr0.eq) goto loc_825D4B9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D4B48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8247d118
	ctx.lr = 0x825D4B50;
	sub_8247D118(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D4B68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d4b74
	if (!ctx.cr0.eq) goto loc_825D4B74;
	// li r28,0
	ctx.r28.s64 = 0;
loc_825D4B74:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x825D4B88;
	sub_82332D50(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d4b9c
	if (ctx.cr0.eq) goto loc_825D4B9C;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_825D4B9C:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d4b24
	if (ctx.cr6.lt) goto loc_825D4B24;
loc_825D4BB0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D4BB8"))) PPC_WEAK_FUNC(sub_825D4BB8);
PPC_FUNC_IMPL(__imp__sub_825D4BB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// ble cr6,0x825d4bd0
	if (!ctx.cr6.gt) goto loc_825D4BD0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
loc_825D4BD0:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D4BE0"))) PPC_WEAK_FUNC(sub_825D4BE0);
PPC_FUNC_IMPL(__imp__sub_825D4BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x825D4BE8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x825d4560
	ctx.lr = 0x825D4BFC;
	sub_825D4560(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D4C2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// bl 0x82816528
	ctx.lr = 0x825D4C3C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82846e98
	ctx.lr = 0x825D4C50;
	sub_82846E98(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r27,0
	ctx.r27.s64 = 0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x825d4cf8
	if (!ctx.cr6.gt) goto loc_825D4CF8;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_825D4C6C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82846fb0
	ctx.lr = 0x825D4C78;
	sub_82846FB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d4ce4
	if (ctx.cr0.eq) goto loc_825D4CE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D4C90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8247d278
	ctx.lr = 0x825D4C98;
	sub_8247D278(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D4CB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d4cbc
	if (!ctx.cr0.eq) goto loc_825D4CBC;
	// li r28,0
	ctx.r28.s64 = 0;
loc_825D4CBC:
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x825D4CD0;
	sub_82332D50(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d4ce4
	if (ctx.cr0.eq) goto loc_825D4CE4;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_825D4CE4:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d4c6c
	if (ctx.cr6.lt) goto loc_825D4C6C;
loc_825D4CF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D4D00"))) PPC_WEAK_FUNC(sub_825D4D00);
PPC_FUNC_IMPL(__imp__sub_825D4D00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// ble cr6,0x825d4d18
	if (!ctx.cr6.gt) goto loc_825D4D18;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
loc_825D4D18:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D4D28"))) PPC_WEAK_FUNC(sub_825D4D28);
PPC_FUNC_IMPL(__imp__sub_825D4D28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lfs f0,20(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,28(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f0,32(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f0,36(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f0,40(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lwz r11,44(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r11,48(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lwz r11,52(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// lwz r11,56(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D4DA0"))) PPC_WEAK_FUNC(sub_825D4DA0);
PPC_FUNC_IMPL(__imp__sub_825D4DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x825D4DA8;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825d4de0
	if (ctx.cr6.eq) goto loc_825D4DE0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D4DE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D4DE0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D4DF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x824090e0
	ctx.lr = 0x825D4DF4;
	sub_824090E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825d51bc
	if (!ctx.cr6.eq) goto loc_825D51BC;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r30,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, ctx.r30.u32);
	// li r26,-1
	ctx.r26.s64 = -1;
	// stw r30,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r30.u32);
	// stw r11,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r11.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r30,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r30.u32);
	// stw r30,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r30.u32);
	// stw r30,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r30.u32);
	// lwz r4,8680(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8680);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r26,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r26.u32);
	// stw r30,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r30.u32);
	// stw r30,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r30.u32);
	// beq cr6,0x825d4f84
	if (ctx.cr6.eq) goto loc_825D4F84;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r28,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r28.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// ld r29,620(r31)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r31.u32 + 620);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lwz r26,628(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lfs f1,24(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f13,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stfs f3,388(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// li r5,100
	ctx.r5.s64 = 100;
	// stfs f3,400(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// addi r25,r1,464
	ctx.r25.s64 = ctx.r1.s64 + 464;
	// stfs f3,404(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// stb r10,311(r1)
	PPC_STORE_U8(ctx.r1.u32 + 311, ctx.r10.u8);
	// stfs f3,408(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// stw r5,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// stfs f13,384(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// stw r25,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// stfs f3,392(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// lwz r9,1012(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1012);
	// stfs f3,344(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stw r28,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r28.u32);
	// stfs f3,440(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// stw r28,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r28.u32);
	// lfs f0,18332(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18332);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// lfs f11,18324(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 18324);
	ctx.f11.f64 = double(temp.f32);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// lfs f12,18328(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 18328);
	ctx.f12.f64 = double(temp.f32);
	// stb r28,223(r1)
	PPC_STORE_U8(ctx.r1.u32 + 223, ctx.r28.u8);
	// stfs f3,432(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// stb r30,215(r1)
	PPC_STORE_U8(ctx.r1.u32 + 215, ctx.r30.u8);
	// stfs f3,340(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r30.u32);
	// stfs f0,416(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stfs f12,420(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// stfs f0,424(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stfs f11,428(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 428, temp.u32);
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// stfs f13,336(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// lfs f4,20252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20252);
	ctx.f4.f64 = double(temp.f32);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// stb r30,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r30.u8);
	// std r29,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r29.u64);
	// ld r10,400(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 400);
	// lwz r6,408(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// ld r5,384(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// lwz r11,392(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// lwz r25,344(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r8,440(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// std r10,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r10.u64);
	// std r5,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r5.u64);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r6,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r6.u32);
	// ld r7,432(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 432);
	// stw r11,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r11.u32);
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// ld r5,416(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 416);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// ld r6,424(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 424);
	// ld r10,336(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 336);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825D4F6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r11.u32);
	// stw r10,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r10.u32);
	// stw r26,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r26.u32);
loc_825D4F84:
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8281d960
	ctx.lr = 0x825D4F8C;
	sub_8281D960(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x825d5040
	if (ctx.cr0.eq) goto loc_825D5040;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825d5040
	if (!ctx.cr6.eq) goto loc_825D5040;
	// lfs f13,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// lfs f0,620(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,624(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r29,620
	ctx.r11.s64 = ctx.r29.s64 + 620;
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,628(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,336(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f13,340(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f12,344(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x825D4FE0;
	sub_82817280(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r30.u32);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// lfs f31,20(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// stw r11,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r11.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stw r10,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r10.u32);
	// bl 0x82817bb8
	ctx.lr = 0x825D5004;
	sub_82817BB8(ctx, base);
	// lfs f11,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// lfs f0,628(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,620(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,624(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f0,328(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// fsubs f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f0,320(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// fsubs f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// b 0x825d50bc
	goto loc_825D50BC;
loc_825D5040:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825d50d8
	if (!ctx.cr6.eq) goto loc_825D50D8;
	// lwz r9,660(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r8,656(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// lwz r7,664(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stw r10,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r10.u32);
	// lfs f31,20(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// stw r9,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r9.u32);
	// stw r8,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r8.u32);
	// stw r7,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r7.u32);
	// bl 0x82817bb8
	ctx.lr = 0x825D5084;
	sub_82817BB8(ctx, base);
	// lfs f11,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// lfs f0,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,328(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// fadds f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f0,320(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// fadds f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
loc_825D50BC:
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// stfs f0,324(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// lwz r10,320(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r9,324(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// stw r9,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r9.u32);
	// stw r11,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r11.u32);
	// stw r10,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r10.u32);
loc_825D50D8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r1,352
	ctx.r29.s64 = ctx.r1.s64 + 352;
	// addi r3,r11,-4656
	ctx.r3.s64 = ctx.r11.s64 + -4656;
	// addi r25,r1,368
	ctx.r25.s64 = ctx.r1.s64 + 368;
	// bl 0x82816528
	ctx.lr = 0x825D50EC;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x825D5124;
	sub_828250B0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825d5154
	if (ctx.cr0.eq) goto loc_825D5154;
	// bl 0x823c84c8
	ctx.lr = 0x825D5130;
	sub_823C84C8(ctx, base);
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
	ctx.lr = 0x825D5148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825d5154
	if (ctx.cr0.eq) goto loc_825D5154;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_825D5154:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f4,40(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lwz r9,56(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// lfs f3,36(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lwz r8,52(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// lfs f2,32(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// lwz r7,48(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// lfs f1,28(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,44(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,2360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2360);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D519C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,2356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D51B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82400f38
	ctx.lr = 0x825D51BC;
	sub_82400F38(ctx, base);
loc_825D51BC:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D51C8"))) PPC_WEAK_FUNC(sub_825D51C8);
PPC_FUNC_IMPL(__imp__sub_825D51C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x825D51D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r10,7312
	ctx.r3.s64 = ctx.r10.s64 + 7312;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// bl 0x82816528
	ctx.lr = 0x825D51F4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82846e98
	ctx.lr = 0x825D5208;
	sub_82846E98(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r25,0
	ctx.r25.s64 = 0;
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r30,r10,r29
	ctx.r30.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x825d52b0
	if (!ctx.cr6.gt) goto loc_825D52B0;
	// addi r27,r26,8
	ctx.r27.s64 = ctx.r26.s64 + 8;
loc_825D5230:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82332d50
	ctx.lr = 0x825D5264;
	sub_82332D50(ctx, base);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d5298
	if (ctx.cr0.eq) goto loc_825D5298;
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
loc_825D5298:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d5230
	if (ctx.cr6.lt) goto loc_825D5230;
loc_825D52B0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r30,r10,r29
	ctx.r30.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x825d5328
	if (!ctx.cr6.gt) goto loc_825D5328;
	// addi r29,r26,32
	ctx.r29.s64 = ctx.r26.s64 + 32;
	// subf r28,r30,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r30.s64;
loc_825D52D8:
	// lwzx r11,r28,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82332d50
	ctx.lr = 0x825D52FC;
	sub_82332D50(ctx, base);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d5314
	if (ctx.cr0.eq) goto loc_825D5314;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_825D5314:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d52d8
	if (ctx.cr6.lt) goto loc_825D52D8;
loc_825D5328:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D5330"))) PPC_WEAK_FUNC(sub_825D5330);
PPC_FUNC_IMPL(__imp__sub_825D5330) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x825d51c8
	ctx.lr = 0x825D5350;
	sub_825D51C8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,28
	ctx.r5.s64 = 28;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r9,56(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r8,60(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r6,44(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x825D53A0;
	sub_82A4EA80(ctx, base);
	// lfs f0,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
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

__attribute__((alias("__imp__sub_825D53C0"))) PPC_WEAK_FUNC(sub_825D53C0);
PPC_FUNC_IMPL(__imp__sub_825D53C0) {
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
	// bl 0x825d51c8
	ctx.lr = 0x825D53E0;
	sub_825D51C8(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f0,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f0,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lfs f0,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lfs f13,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bne cr6,0x825d5448
	if (!ctx.cr6.eq) goto loc_825D5448;
	// lfs f0,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
loc_825D5448:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D5460"))) PPC_WEAK_FUNC(sub_825D5460);
PPC_FUNC_IMPL(__imp__sub_825D5460) {
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
	// bl 0x825d51c8
	ctx.lr = 0x825D5480;
	sub_825D51C8(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f0,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f0,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D54C0"))) PPC_WEAK_FUNC(sub_825D54C0);
PPC_FUNC_IMPL(__imp__sub_825D54C0) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d54f4
	if (ctx.cr6.eq) goto loc_825D54F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D54F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D54F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D5510"))) PPC_WEAK_FUNC(sub_825D5510);
PPC_FUNC_IMPL(__imp__sub_825D5510) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825D5530"))) PPC_WEAK_FUNC(sub_825D5530);
PPC_FUNC_IMPL(__imp__sub_825D5530) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D5538"))) PPC_WEAK_FUNC(sub_825D5538);
PPC_FUNC_IMPL(__imp__sub_825D5538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r11,10628
	ctx.r3.s64 = ctx.r11.s64 + 10628;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D5548"))) PPC_WEAK_FUNC(sub_825D5548);
PPC_FUNC_IMPL(__imp__sub_825D5548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8248adb8
	ctx.lr = 0x825D5568;
	sub_8248ADB8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825d557c
	if (ctx.cr6.eq) goto loc_825D557C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825bc130
	ctx.lr = 0x825D557C;
	sub_825BC130(ctx, base);
loc_825D557C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D5598"))) PPC_WEAK_FUNC(sub_825D5598);
PPC_FUNC_IMPL(__imp__sub_825D5598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825d55d0
	if (ctx.cr6.eq) goto loc_825D55D0;
	// bl 0x8248adb8
	ctx.lr = 0x825D55C0;
	sub_8248ADB8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d55d0
	if (!ctx.cr6.eq) goto loc_825D55D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d55dc
	goto loc_825D55DC;
loc_825D55D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825bc250
	ctx.lr = 0x825D55DC;
	sub_825BC250(ctx, base);
loc_825D55DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D55F8"))) PPC_WEAK_FUNC(sub_825D55F8);
PPC_FUNC_IMPL(__imp__sub_825D55F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8248adb8
	sub_8248ADB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D5600"))) PPC_WEAK_FUNC(sub_825D5600);
PPC_FUNC_IMPL(__imp__sub_825D5600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x82833108
	ctx.lr = 0x825D5620;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825d5648
	if (ctx.cr0.eq) goto loc_825D5648;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825bc370
	ctx.lr = 0x825D5634;
	sub_825BC370(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,3760
	ctx.r11.s64 = ctx.r11.s64 + 3760;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x825d564c
	goto loc_825D564C;
loc_825D5648:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D564C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D5668"))) PPC_WEAK_FUNC(sub_825D5668);
PPC_FUNC_IMPL(__imp__sub_825D5668) {
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
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x82833108
	ctx.lr = 0x825D5680;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825d56b4
	if (ctx.cr0.eq) goto loc_825D56B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82906cb8
	ctx.lr = 0x825D5690;
	sub_82906CB8(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r11,r11,3760
	ctx.r11.s64 = ctx.r11.s64 + 3760;
	// addi r3,r10,3704
	ctx.r3.s64 = ctx.r10.s64 + 3704;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828165a8
	ctx.lr = 0x825D56A8;
	sub_828165A8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x825d56b8
	goto loc_825D56B8;
loc_825D56B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D56B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D56D0"))) PPC_WEAK_FUNC(sub_825D56D0);
PPC_FUNC_IMPL(__imp__sub_825D56D0) {
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
	// bl 0x828d14b8
	ctx.lr = 0x825D56EC;
	sub_828D14B8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x825d5740
	if (ctx.cr0.eq) goto loc_825D5740;
	// bl 0x8248ba98
	ctx.lr = 0x825D56F8;
	sub_8248BA98(ctx, base);
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
	ctx.lr = 0x825D5710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x825d5720
	if (!ctx.cr0.eq) goto loc_825D5720;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825D5720:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d5740
	if (ctx.cr6.eq) goto loc_825D5740;
	// lfs f0,212(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 212, temp.u32);
	// lfs f0,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,216(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 216, temp.u32);
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// stw r10,220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 220, ctx.r10.u32);
loc_825D5740:
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

__attribute__((alias("__imp__sub_825D5760"))) PPC_WEAK_FUNC(sub_825D5760);
PPC_FUNC_IMPL(__imp__sub_825D5760) {
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
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d57a0
	if (ctx.cr6.eq) goto loc_825D57A0;
	// lwz r10,1432(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1432);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825d57a0
	if (!ctx.cr6.eq) goto loc_825D57A0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825d58a4
	if (!ctx.cr6.eq) goto loc_825D58A4;
loc_825D57A0:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d58a4
	if (ctx.cr0.eq) goto loc_825D58A4;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x825d57f8
	if (!ctx.cr6.gt) goto loc_825D57F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d58c0
	ctx.lr = 0x825D57C4;
	sub_825D58C0(ctx, base);
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d57e8
	if (ctx.cr6.eq) goto loc_825D57E8;
	// bl 0x824c4b98
	ctx.lr = 0x825D57D8;
	sub_824C4B98(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lfs f0,1444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,1444(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1444, temp.u32);
loc_825D57E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x828d2048
	ctx.lr = 0x825D57F8;
	sub_828D2048(ctx, base);
loc_825D57F8:
	// lfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x825d58a4
	if (ctx.cr6.lt) goto loc_825D58A4;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825d5828
	if (!ctx.cr0.eq) goto loc_825D5828;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D5828;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D5828:
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825d58a4
	if (!ctx.cr6.eq) goto loc_825D58A4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825d58a4
	if (ctx.cr6.eq) goto loc_825D58A4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D5858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d58a4
	if (ctx.cr0.eq) goto loc_825D58A4;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825d58a4
	if (ctx.cr6.eq) goto loc_825D58A4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r10.u32);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825d589c
	if (ctx.cr6.eq) goto loc_825D589C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D589C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D589C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829c2168
	ctx.lr = 0x825D58A4;
	sub_829C2168(ctx, base);
loc_825D58A4:
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

__attribute__((alias("__imp__sub_825D58C0"))) PPC_WEAK_FUNC(sub_825D58C0);
PPC_FUNC_IMPL(__imp__sub_825D58C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// lfs f0,212(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d5964
	if (ctx.cr6.eq) goto loc_825D5964;
	// lwz r9,1408(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825d5964
	if (ctx.cr6.eq) goto loc_825D5964;
	// lwz r8,372(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 372);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x825d5970
	if (!ctx.cr6.gt) goto loc_825D5970;
	// lfs f13,1444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_825D58F4:
	// lwz r8,368(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 368);
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r8,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r8.u32);
	// stw r6,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r6.u32);
	// lfs f12,-24(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// stw r7,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r7.u32);
	// bgt cr6,0x825d5970
	if (ctx.cr6.gt) goto loc_825D5970;
	// lwz r8,368(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 368);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,208(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r7,1408(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1408);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r7,372(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 372);
	// stw r6,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r6.u32);
	// lfs f0,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stw r5,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r5.u32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// blt cr6,0x825d58f4
	if (ctx.cr6.lt) goto loc_825D58F4;
	// b 0x825d5970
	goto loc_825D5970;
loc_825D5964:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
loc_825D5970:
	// fmuls f1,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D5978"))) PPC_WEAK_FUNC(sub_825D5978);
PPC_FUNC_IMPL(__imp__sub_825D5978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r11,10600
	ctx.r3.s64 = ctx.r11.s64 + 10600;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D5988"))) PPC_WEAK_FUNC(sub_825D5988);
PPC_FUNC_IMPL(__imp__sub_825D5988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8248ba98
	ctx.lr = 0x825D59A8;
	sub_8248BA98(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d59b8
	if (!ctx.cr6.eq) goto loc_825D59B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x825d59d0
	goto loc_825D59D0;
loc_825D59B8:
	// bl 0x82412588
	ctx.lr = 0x825D59BC;
	sub_82412588(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825d59d0
	if (ctx.cr6.eq) goto loc_825D59D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824d4c28
	ctx.lr = 0x825D59D0;
	sub_824D4C28(ctx, base);
loc_825D59D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D59E8"))) PPC_WEAK_FUNC(sub_825D59E8);
PPC_FUNC_IMPL(__imp__sub_825D59E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825d5a20
	if (ctx.cr6.eq) goto loc_825D5A20;
	// bl 0x8248ba98
	ctx.lr = 0x825D5A10;
	sub_8248BA98(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d5a20
	if (!ctx.cr6.eq) goto loc_825D5A20;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d5a2c
	goto loc_825D5A2C;
loc_825D5A20:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ca1e0
	ctx.lr = 0x825D5A2C;
	sub_825CA1E0(ctx, base);
loc_825D5A2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D5A48"))) PPC_WEAK_FUNC(sub_825D5A48);
PPC_FUNC_IMPL(__imp__sub_825D5A48) {
	PPC_FUNC_PROLOGUE();
	// b 0x8248ba98
	sub_8248BA98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D5A50"))) PPC_WEAK_FUNC(sub_825D5A50);
PPC_FUNC_IMPL(__imp__sub_825D5A50) {
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
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x82833108
	ctx.lr = 0x825D5A70;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825d5ab8
	if (ctx.cr0.eq) goto loc_825D5AB8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825ca2e0
	ctx.lr = 0x825D5A84;
	sub_825CA2E0(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,4144
	ctx.r11.s64 = ctx.r11.s64 + 4144;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// lfs f0,212(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// lfs f0,216(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,216(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// b 0x825d5abc
	goto loc_825D5ABC;
loc_825D5AB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D5ABC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D5AD8"))) PPC_WEAK_FUNC(sub_825D5AD8);
PPC_FUNC_IMPL(__imp__sub_825D5AD8) {
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
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x82833108
	ctx.lr = 0x825D5AF0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825d5b24
	if (ctx.cr0.eq) goto loc_825D5B24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828d1400
	ctx.lr = 0x825D5B00;
	sub_828D1400(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r11,r11,4144
	ctx.r11.s64 = ctx.r11.s64 + 4144;
	// addi r3,r10,4076
	ctx.r3.s64 = ctx.r10.s64 + 4076;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828165a8
	ctx.lr = 0x825D5B18;
	sub_828165A8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x825d5b28
	goto loc_825D5B28;
loc_825D5B24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D5B28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D5B40"))) PPC_WEAK_FUNC(sub_825D5B40);
PPC_FUNC_IMPL(__imp__sub_825D5B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,13540
	ctx.r3.s64 = ctx.r11.s64 + 13540;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D5B50"))) PPC_WEAK_FUNC(sub_825D5B50);
PPC_FUNC_IMPL(__imp__sub_825D5B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825d5b88
	if (ctx.cr6.eq) goto loc_825D5B88;
	// bl 0x82332278
	ctx.lr = 0x825D5B78;
	sub_82332278(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d5b88
	if (!ctx.cr6.eq) goto loc_825D5B88;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d5b94
	goto loc_825D5B94;
loc_825D5B88:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824040a0
	ctx.lr = 0x825D5B94;
	sub_824040A0(ctx, base);
loc_825D5B94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D5BB0"))) PPC_WEAK_FUNC(sub_825D5BB0);
PPC_FUNC_IMPL(__imp__sub_825D5BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,6112
	ctx.r3.s64 = 6112;
	// bl 0x82833108
	ctx.lr = 0x825D5BD0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825d5c18
	if (ctx.cr0.eq) goto loc_825D5C18;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82400f98
	ctx.lr = 0x825D5BE4;
	sub_82400F98(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r11,r11,-30696
	ctx.r11.s64 = ctx.r11.s64 + -30696;
	// addi r10,r10,-28332
	ctx.r10.s64 = ctx.r10.s64 + -28332;
	// addi r9,r9,-28280
	ctx.r9.s64 = ctx.r9.s64 + -28280;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,6096(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6096);
	// stw r11,6096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6096, ctx.r11.u32);
	// b 0x825d5c1c
	goto loc_825D5C1C;
loc_825D5C18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D5C1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D5C38"))) PPC_WEAK_FUNC(sub_825D5C38);
PPC_FUNC_IMPL(__imp__sub_825D5C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82332278
	ctx.lr = 0x825D5C58;
	sub_82332278(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825d5c6c
	if (ctx.cr6.eq) goto loc_825D5C6C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82404040
	ctx.lr = 0x825D5C6C;
	sub_82404040(ctx, base);
loc_825D5C6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D5C88"))) PPC_WEAK_FUNC(sub_825D5C88);
PPC_FUNC_IMPL(__imp__sub_825D5C88) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,6096(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6096);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D5C90"))) PPC_WEAK_FUNC(sub_825D5C90);
PPC_FUNC_IMPL(__imp__sub_825D5C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r11,r11,-30696
	ctx.r11.s64 = ctx.r11.s64 + -30696;
	// addi r10,r10,-28332
	ctx.r10.s64 = ctx.r10.s64 + -28332;
	// addi r9,r9,-28280
	ctx.r9.s64 = ctx.r9.s64 + -28280;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x824dbe08
	ctx.lr = 0x825D5CD4;
	sub_824DBE08(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d5ce4
	if (ctx.cr0.eq) goto loc_825D5CE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x825D5CE4;
	sub_82332DB8(ctx, base);
loc_825D5CE4:
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

__attribute__((alias("__imp__sub_825D5D00"))) PPC_WEAK_FUNC(sub_825D5D00);
PPC_FUNC_IMPL(__imp__sub_825D5D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D5D08;
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
	// beq cr6,0x825d5d64
	if (ctx.cr6.eq) goto loc_825D5D64;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,12756
	ctx.r31.s64 = ctx.r11.s64 + 12756;
	// lwz r11,12752(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12752);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825d5d54
	if (!ctx.cr0.eq) goto loc_825D5D54;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-28224
	ctx.r9.s64 = ctx.r9.s64 + -28224;
	// stw r11,12752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12752, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,24120
	ctx.r3.s64 = ctx.r11.s64 + 24120;
	// bl 0x82a4c758
	ctx.lr = 0x825D5D54;
	sub_82A4C758(ctx, base);
loc_825D5D54:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825d5d64
	if (!ctx.cr6.eq) goto loc_825D5D64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d5d70
	goto loc_825D5D70;
loc_825D5D64:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339ee8
	ctx.lr = 0x825D5D70;
	sub_82339EE8(ctx, base);
loc_825D5D70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D5D78"))) PPC_WEAK_FUNC(sub_825D5D78);
PPC_FUNC_IMPL(__imp__sub_825D5D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D5D80;
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
	// addi r31,r11,12756
	ctx.r31.s64 = ctx.r11.s64 + 12756;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,12752(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12752);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825d5dc4
	if (!ctx.cr0.eq) goto loc_825D5DC4;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-28224
	ctx.r9.s64 = ctx.r9.s64 + -28224;
	// stw r11,12752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12752, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,24120
	ctx.r3.s64 = ctx.r11.s64 + 24120;
	// bl 0x82a4c758
	ctx.lr = 0x825D5DC4;
	sub_82A4C758(ctx, base);
loc_825D5DC4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x825d5dd8
	if (ctx.cr6.eq) goto loc_825D5DD8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339d80
	ctx.lr = 0x825D5DD8;
	sub_82339D80(ctx, base);
loc_825D5DD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D5DE0"))) PPC_WEAK_FUNC(sub_825D5DE0);
PPC_FUNC_IMPL(__imp__sub_825D5DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D5DE8;
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
	// beq cr6,0x825d5e44
	if (ctx.cr6.eq) goto loc_825D5E44;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,12764
	ctx.r31.s64 = ctx.r11.s64 + 12764;
	// lwz r11,12760(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12760);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825d5e34
	if (!ctx.cr0.eq) goto loc_825D5E34;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-28172
	ctx.r9.s64 = ctx.r9.s64 + -28172;
	// stw r11,12760(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12760, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,24096
	ctx.r3.s64 = ctx.r11.s64 + 24096;
	// bl 0x82a4c758
	ctx.lr = 0x825D5E34;
	sub_82A4C758(ctx, base);
loc_825D5E34:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825d5e44
	if (!ctx.cr6.eq) goto loc_825D5E44;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d5e50
	goto loc_825D5E50;
loc_825D5E44:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339ee8
	ctx.lr = 0x825D5E50;
	sub_82339EE8(ctx, base);
loc_825D5E50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D5E58"))) PPC_WEAK_FUNC(sub_825D5E58);
PPC_FUNC_IMPL(__imp__sub_825D5E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D5E60;
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
	// addi r31,r11,12764
	ctx.r31.s64 = ctx.r11.s64 + 12764;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,12760(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12760);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825d5ea4
	if (!ctx.cr0.eq) goto loc_825D5EA4;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-28172
	ctx.r9.s64 = ctx.r9.s64 + -28172;
	// stw r11,12760(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12760, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,24096
	ctx.r3.s64 = ctx.r11.s64 + 24096;
	// bl 0x82a4c758
	ctx.lr = 0x825D5EA4;
	sub_82A4C758(ctx, base);
loc_825D5EA4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x825d5eb8
	if (ctx.cr6.eq) goto loc_825D5EB8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339d80
	ctx.lr = 0x825D5EB8;
	sub_82339D80(ctx, base);
loc_825D5EB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D5EC0"))) PPC_WEAK_FUNC(sub_825D5EC0);
PPC_FUNC_IMPL(__imp__sub_825D5EC0) {
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
	// bl 0x82611488
	ctx.lr = 0x825D5EDC;
	sub_82611488(ctx, base);
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

__attribute__((alias("__imp__sub_825D5EF0"))) PPC_WEAK_FUNC(sub_825D5EF0);
PPC_FUNC_IMPL(__imp__sub_825D5EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825d5f40
	ctx.lr = 0x825D5F10;
	sub_825D5F40(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d5f20
	if (ctx.cr0.eq) goto loc_825D5F20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x825D5F20;
	sub_82332DB8(ctx, base);
loc_825D5F20:
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

__attribute__((alias("__imp__sub_825D5F40"))) PPC_WEAK_FUNC(sub_825D5F40);
PPC_FUNC_IMPL(__imp__sub_825D5F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82332ca8
	ctx.lr = 0x825D5F74;
	sub_82332CA8(ctx, base);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d5f84
	if (ctx.cr6.eq) goto loc_825D5F84;
	// bl 0x82332db8
	ctx.lr = 0x825D5F84;
	sub_82332DB8(ctx, base);
loc_825D5F84:
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,16980
	ctx.r10.s64 = ctx.r10.s64 + 16980;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D5FB8"))) PPC_WEAK_FUNC(sub_825D5FB8);
PPC_FUNC_IMPL(__imp__sub_825D5FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D5FC0;
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
	// beq cr6,0x825d601c
	if (ctx.cr6.eq) goto loc_825D601C;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,12772
	ctx.r31.s64 = ctx.r11.s64 + 12772;
	// lwz r11,12768(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12768);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825d600c
	if (!ctx.cr0.eq) goto loc_825D600C;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-28120
	ctx.r9.s64 = ctx.r9.s64 + -28120;
	// stw r11,12768(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12768, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,24072
	ctx.r3.s64 = ctx.r11.s64 + 24072;
	// bl 0x82a4c758
	ctx.lr = 0x825D600C;
	sub_82A4C758(ctx, base);
loc_825D600C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825d601c
	if (!ctx.cr6.eq) goto loc_825D601C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d6028
	goto loc_825D6028;
loc_825D601C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339ee8
	ctx.lr = 0x825D6028;
	sub_82339EE8(ctx, base);
loc_825D6028:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D6030"))) PPC_WEAK_FUNC(sub_825D6030);
PPC_FUNC_IMPL(__imp__sub_825D6030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D6038;
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
	// addi r31,r11,12772
	ctx.r31.s64 = ctx.r11.s64 + 12772;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,12768(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12768);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825d607c
	if (!ctx.cr0.eq) goto loc_825D607C;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-28120
	ctx.r9.s64 = ctx.r9.s64 + -28120;
	// stw r11,12768(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12768, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,24072
	ctx.r3.s64 = ctx.r11.s64 + 24072;
	// bl 0x82a4c758
	ctx.lr = 0x825D607C;
	sub_82A4C758(ctx, base);
loc_825D607C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x825d6090
	if (ctx.cr6.eq) goto loc_825D6090;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339d80
	ctx.lr = 0x825D6090;
	sub_82339D80(ctx, base);
loc_825D6090:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D6098"))) PPC_WEAK_FUNC(sub_825D6098);
PPC_FUNC_IMPL(__imp__sub_825D6098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x825D60C0;
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
	ctx.lr = 0x825D60DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// bl 0x828db368
	ctx.lr = 0x825D60E8;
	sub_828DB368(ctx, base);
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
	ctx.lr = 0x825D6104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828db368
	ctx.lr = 0x825D6110;
	sub_828DB368(ctx, base);
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

__attribute__((alias("__imp__sub_825D6130"))) PPC_WEAK_FUNC(sub_825D6130);
PPC_FUNC_IMPL(__imp__sub_825D6130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D6138;
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
	// beq cr6,0x825d6194
	if (ctx.cr6.eq) goto loc_825D6194;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,12780
	ctx.r31.s64 = ctx.r11.s64 + 12780;
	// lwz r11,12776(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12776);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825d6184
	if (!ctx.cr0.eq) goto loc_825D6184;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-28068
	ctx.r9.s64 = ctx.r9.s64 + -28068;
	// stw r11,12776(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12776, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,24048
	ctx.r3.s64 = ctx.r11.s64 + 24048;
	// bl 0x82a4c758
	ctx.lr = 0x825D6184;
	sub_82A4C758(ctx, base);
loc_825D6184:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825d6194
	if (!ctx.cr6.eq) goto loc_825D6194;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d61a0
	goto loc_825D61A0;
loc_825D6194:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339ee8
	ctx.lr = 0x825D61A0;
	sub_82339EE8(ctx, base);
loc_825D61A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D61A8"))) PPC_WEAK_FUNC(sub_825D61A8);
PPC_FUNC_IMPL(__imp__sub_825D61A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D61B0;
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
	// addi r31,r11,12780
	ctx.r31.s64 = ctx.r11.s64 + 12780;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,12776(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12776);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825d61f4
	if (!ctx.cr0.eq) goto loc_825D61F4;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-28068
	ctx.r9.s64 = ctx.r9.s64 + -28068;
	// stw r11,12776(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12776, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,24048
	ctx.r3.s64 = ctx.r11.s64 + 24048;
	// bl 0x82a4c758
	ctx.lr = 0x825D61F4;
	sub_82A4C758(ctx, base);
loc_825D61F4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x825d6208
	if (ctx.cr6.eq) goto loc_825D6208;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339d80
	ctx.lr = 0x825D6208;
	sub_82339D80(ctx, base);
loc_825D6208:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D6210"))) PPC_WEAK_FUNC(sub_825D6210);
PPC_FUNC_IMPL(__imp__sub_825D6210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D6218;
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
	// beq cr6,0x825d6274
	if (ctx.cr6.eq) goto loc_825D6274;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,12788
	ctx.r31.s64 = ctx.r11.s64 + 12788;
	// lwz r11,12784(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12784);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825d6264
	if (!ctx.cr0.eq) goto loc_825D6264;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-28016
	ctx.r9.s64 = ctx.r9.s64 + -28016;
	// stw r11,12784(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12784, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,24024
	ctx.r3.s64 = ctx.r11.s64 + 24024;
	// bl 0x82a4c758
	ctx.lr = 0x825D6264;
	sub_82A4C758(ctx, base);
loc_825D6264:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825d6274
	if (!ctx.cr6.eq) goto loc_825D6274;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d6280
	goto loc_825D6280;
loc_825D6274:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339ee8
	ctx.lr = 0x825D6280;
	sub_82339EE8(ctx, base);
loc_825D6280:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D6288"))) PPC_WEAK_FUNC(sub_825D6288);
PPC_FUNC_IMPL(__imp__sub_825D6288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D6290;
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
	// addi r31,r11,12788
	ctx.r31.s64 = ctx.r11.s64 + 12788;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,12784(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12784);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825d62d4
	if (!ctx.cr0.eq) goto loc_825D62D4;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-28016
	ctx.r9.s64 = ctx.r9.s64 + -28016;
	// stw r11,12784(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12784, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,24024
	ctx.r3.s64 = ctx.r11.s64 + 24024;
	// bl 0x82a4c758
	ctx.lr = 0x825D62D4;
	sub_82A4C758(ctx, base);
loc_825D62D4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x825d62e8
	if (ctx.cr6.eq) goto loc_825D62E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339d80
	ctx.lr = 0x825D62E8;
	sub_82339D80(ctx, base);
loc_825D62E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D62F0"))) PPC_WEAK_FUNC(sub_825D62F0);
PPC_FUNC_IMPL(__imp__sub_825D62F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828ff9f8
	ctx.lr = 0x825D6318;
	sub_828FF9F8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D6334;
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

__attribute__((alias("__imp__sub_825D6350"))) PPC_WEAK_FUNC(sub_825D6350);
PPC_FUNC_IMPL(__imp__sub_825D6350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82333960
	ctx.lr = 0x825D6374;
	sub_82333960(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,16980
	ctx.r11.s64 = ctx.r11.s64 + 16980;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x825d6390
	if (ctx.cr0.eq) goto loc_825D6390;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x825D6390;
	sub_82332DB8(ctx, base);
loc_825D6390:
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

__attribute__((alias("__imp__sub_825D63B0"))) PPC_WEAK_FUNC(sub_825D63B0);
PPC_FUNC_IMPL(__imp__sub_825D63B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D63B8;
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
	// beq cr6,0x825d6414
	if (ctx.cr6.eq) goto loc_825D6414;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,12796
	ctx.r31.s64 = ctx.r11.s64 + 12796;
	// lwz r11,12792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12792);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825d6404
	if (!ctx.cr0.eq) goto loc_825D6404;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-27964
	ctx.r9.s64 = ctx.r9.s64 + -27964;
	// stw r11,12792(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12792, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,24000
	ctx.r3.s64 = ctx.r11.s64 + 24000;
	// bl 0x82a4c758
	ctx.lr = 0x825D6404;
	sub_82A4C758(ctx, base);
loc_825D6404:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825d6414
	if (!ctx.cr6.eq) goto loc_825D6414;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d6420
	goto loc_825D6420;
loc_825D6414:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339ee8
	ctx.lr = 0x825D6420;
	sub_82339EE8(ctx, base);
loc_825D6420:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D6428"))) PPC_WEAK_FUNC(sub_825D6428);
PPC_FUNC_IMPL(__imp__sub_825D6428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D6430;
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
	// addi r31,r11,12796
	ctx.r31.s64 = ctx.r11.s64 + 12796;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,12792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12792);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825d6474
	if (!ctx.cr0.eq) goto loc_825D6474;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-27964
	ctx.r9.s64 = ctx.r9.s64 + -27964;
	// stw r11,12792(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12792, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,24000
	ctx.r3.s64 = ctx.r11.s64 + 24000;
	// bl 0x82a4c758
	ctx.lr = 0x825D6474;
	sub_82A4C758(ctx, base);
loc_825D6474:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x825d6488
	if (ctx.cr6.eq) goto loc_825D6488;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339d80
	ctx.lr = 0x825D6488;
	sub_82339D80(ctx, base);
loc_825D6488:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D6490"))) PPC_WEAK_FUNC(sub_825D6490);
PPC_FUNC_IMPL(__imp__sub_825D6490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D6498;
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
	// beq cr6,0x825d64f4
	if (ctx.cr6.eq) goto loc_825D64F4;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,12804
	ctx.r31.s64 = ctx.r11.s64 + 12804;
	// lwz r11,12800(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12800);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825d64e4
	if (!ctx.cr0.eq) goto loc_825D64E4;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-27912
	ctx.r9.s64 = ctx.r9.s64 + -27912;
	// stw r11,12800(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12800, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,23976
	ctx.r3.s64 = ctx.r11.s64 + 23976;
	// bl 0x82a4c758
	ctx.lr = 0x825D64E4;
	sub_82A4C758(ctx, base);
loc_825D64E4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825d64f4
	if (!ctx.cr6.eq) goto loc_825D64F4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d6500
	goto loc_825D6500;
loc_825D64F4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339ee8
	ctx.lr = 0x825D6500;
	sub_82339EE8(ctx, base);
loc_825D6500:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D6508"))) PPC_WEAK_FUNC(sub_825D6508);
PPC_FUNC_IMPL(__imp__sub_825D6508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D6510;
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
	// addi r31,r11,12804
	ctx.r31.s64 = ctx.r11.s64 + 12804;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,12800(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12800);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825d6554
	if (!ctx.cr0.eq) goto loc_825D6554;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-27912
	ctx.r9.s64 = ctx.r9.s64 + -27912;
	// stw r11,12800(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12800, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,23976
	ctx.r3.s64 = ctx.r11.s64 + 23976;
	// bl 0x82a4c758
	ctx.lr = 0x825D6554;
	sub_82A4C758(ctx, base);
loc_825D6554:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x825d6568
	if (ctx.cr6.eq) goto loc_825D6568;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339d80
	ctx.lr = 0x825D6568;
	sub_82339D80(ctx, base);
loc_825D6568:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D6570"))) PPC_WEAK_FUNC(sub_825D6570);
PPC_FUNC_IMPL(__imp__sub_825D6570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x825D6598;
	sub_828DB368(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D65B4;
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

__attribute__((alias("__imp__sub_825D65D0"))) PPC_WEAK_FUNC(sub_825D65D0);
PPC_FUNC_IMPL(__imp__sub_825D65D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D65D8;
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
	// beq cr6,0x825d6634
	if (ctx.cr6.eq) goto loc_825D6634;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,12812
	ctx.r31.s64 = ctx.r11.s64 + 12812;
	// lwz r11,12808(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12808);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825d6624
	if (!ctx.cr0.eq) goto loc_825D6624;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-27860
	ctx.r9.s64 = ctx.r9.s64 + -27860;
	// stw r11,12808(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12808, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,23952
	ctx.r3.s64 = ctx.r11.s64 + 23952;
	// bl 0x82a4c758
	ctx.lr = 0x825D6624;
	sub_82A4C758(ctx, base);
loc_825D6624:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825d6634
	if (!ctx.cr6.eq) goto loc_825D6634;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d6640
	goto loc_825D6640;
loc_825D6634:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339ee8
	ctx.lr = 0x825D6640;
	sub_82339EE8(ctx, base);
loc_825D6640:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D6648"))) PPC_WEAK_FUNC(sub_825D6648);
PPC_FUNC_IMPL(__imp__sub_825D6648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D6650;
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
	// addi r31,r11,12812
	ctx.r31.s64 = ctx.r11.s64 + 12812;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,12808(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12808);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825d6694
	if (!ctx.cr0.eq) goto loc_825D6694;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-27860
	ctx.r9.s64 = ctx.r9.s64 + -27860;
	// stw r11,12808(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12808, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,23952
	ctx.r3.s64 = ctx.r11.s64 + 23952;
	// bl 0x82a4c758
	ctx.lr = 0x825D6694;
	sub_82A4C758(ctx, base);
loc_825D6694:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x825d66a8
	if (ctx.cr6.eq) goto loc_825D66A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339d80
	ctx.lr = 0x825D66A8;
	sub_82339D80(ctx, base);
loc_825D66A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D66B0"))) PPC_WEAK_FUNC(sub_825D66B0);
PPC_FUNC_IMPL(__imp__sub_825D66B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D66B8;
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
	// beq cr6,0x825d6714
	if (ctx.cr6.eq) goto loc_825D6714;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,12820
	ctx.r31.s64 = ctx.r11.s64 + 12820;
	// lwz r11,12816(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12816);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825d6704
	if (!ctx.cr0.eq) goto loc_825D6704;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-27808
	ctx.r9.s64 = ctx.r9.s64 + -27808;
	// stw r11,12816(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12816, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,23928
	ctx.r3.s64 = ctx.r11.s64 + 23928;
	// bl 0x82a4c758
	ctx.lr = 0x825D6704;
	sub_82A4C758(ctx, base);
loc_825D6704:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825d6714
	if (!ctx.cr6.eq) goto loc_825D6714;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d6720
	goto loc_825D6720;
loc_825D6714:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339ee8
	ctx.lr = 0x825D6720;
	sub_82339EE8(ctx, base);
loc_825D6720:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D6728"))) PPC_WEAK_FUNC(sub_825D6728);
PPC_FUNC_IMPL(__imp__sub_825D6728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D6730;
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
	// addi r31,r11,12820
	ctx.r31.s64 = ctx.r11.s64 + 12820;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,12816(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12816);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825d6774
	if (!ctx.cr0.eq) goto loc_825D6774;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-27808
	ctx.r9.s64 = ctx.r9.s64 + -27808;
	// stw r11,12816(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12816, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,23928
	ctx.r3.s64 = ctx.r11.s64 + 23928;
	// bl 0x82a4c758
	ctx.lr = 0x825D6774;
	sub_82A4C758(ctx, base);
loc_825D6774:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x825d6788
	if (ctx.cr6.eq) goto loc_825D6788;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339d80
	ctx.lr = 0x825D6788;
	sub_82339D80(ctx, base);
loc_825D6788:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D6790"))) PPC_WEAK_FUNC(sub_825D6790);
PPC_FUNC_IMPL(__imp__sub_825D6790) {
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
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D67BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_825D67D0"))) PPC_WEAK_FUNC(sub_825D67D0);
PPC_FUNC_IMPL(__imp__sub_825D67D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D67D8;
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
	// beq cr6,0x825d6834
	if (ctx.cr6.eq) goto loc_825D6834;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,12828
	ctx.r31.s64 = ctx.r11.s64 + 12828;
	// lwz r11,12824(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12824);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825d6824
	if (!ctx.cr0.eq) goto loc_825D6824;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-27756
	ctx.r9.s64 = ctx.r9.s64 + -27756;
	// stw r11,12824(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12824, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,23904
	ctx.r3.s64 = ctx.r11.s64 + 23904;
	// bl 0x82a4c758
	ctx.lr = 0x825D6824;
	sub_82A4C758(ctx, base);
loc_825D6824:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825d6834
	if (!ctx.cr6.eq) goto loc_825D6834;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d6840
	goto loc_825D6840;
loc_825D6834:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339ee8
	ctx.lr = 0x825D6840;
	sub_82339EE8(ctx, base);
loc_825D6840:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D6848"))) PPC_WEAK_FUNC(sub_825D6848);
PPC_FUNC_IMPL(__imp__sub_825D6848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D6850;
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
	// addi r31,r11,12828
	ctx.r31.s64 = ctx.r11.s64 + 12828;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,12824(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12824);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825d6894
	if (!ctx.cr0.eq) goto loc_825D6894;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-27756
	ctx.r9.s64 = ctx.r9.s64 + -27756;
	// stw r11,12824(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12824, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,23904
	ctx.r3.s64 = ctx.r11.s64 + 23904;
	// bl 0x82a4c758
	ctx.lr = 0x825D6894;
	sub_82A4C758(ctx, base);
loc_825D6894:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x825d68a8
	if (ctx.cr6.eq) goto loc_825D68A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339d80
	ctx.lr = 0x825D68A8;
	sub_82339D80(ctx, base);
loc_825D68A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D68B0"))) PPC_WEAK_FUNC(sub_825D68B0);
PPC_FUNC_IMPL(__imp__sub_825D68B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D68B8;
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
	// beq cr6,0x825d6914
	if (ctx.cr6.eq) goto loc_825D6914;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,12836
	ctx.r31.s64 = ctx.r11.s64 + 12836;
	// lwz r11,12832(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12832);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825d6904
	if (!ctx.cr0.eq) goto loc_825D6904;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-27704
	ctx.r9.s64 = ctx.r9.s64 + -27704;
	// stw r11,12832(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12832, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,23880
	ctx.r3.s64 = ctx.r11.s64 + 23880;
	// bl 0x82a4c758
	ctx.lr = 0x825D6904;
	sub_82A4C758(ctx, base);
loc_825D6904:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825d6914
	if (!ctx.cr6.eq) goto loc_825D6914;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d6920
	goto loc_825D6920;
loc_825D6914:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339ee8
	ctx.lr = 0x825D6920;
	sub_82339EE8(ctx, base);
loc_825D6920:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D6928"))) PPC_WEAK_FUNC(sub_825D6928);
PPC_FUNC_IMPL(__imp__sub_825D6928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D6930;
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
	// addi r31,r11,12836
	ctx.r31.s64 = ctx.r11.s64 + 12836;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,12832(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12832);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825d6974
	if (!ctx.cr0.eq) goto loc_825D6974;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-27704
	ctx.r9.s64 = ctx.r9.s64 + -27704;
	// stw r11,12832(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12832, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,23880
	ctx.r3.s64 = ctx.r11.s64 + 23880;
	// bl 0x82a4c758
	ctx.lr = 0x825D6974;
	sub_82A4C758(ctx, base);
loc_825D6974:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x825d6988
	if (ctx.cr6.eq) goto loc_825D6988;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339d80
	ctx.lr = 0x825D6988;
	sub_82339D80(ctx, base);
loc_825D6988:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D6990"))) PPC_WEAK_FUNC(sub_825D6990);
PPC_FUNC_IMPL(__imp__sub_825D6990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82333960
	ctx.lr = 0x825D69B4;
	sub_82333960(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,16980
	ctx.r11.s64 = ctx.r11.s64 + 16980;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x825d69d0
	if (ctx.cr0.eq) goto loc_825D69D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x825D69D0;
	sub_82332DB8(ctx, base);
loc_825D69D0:
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

__attribute__((alias("__imp__sub_825D69F0"))) PPC_WEAK_FUNC(sub_825D69F0);
PPC_FUNC_IMPL(__imp__sub_825D69F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D69F8;
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
	// beq cr6,0x825d6a54
	if (ctx.cr6.eq) goto loc_825D6A54;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,12844
	ctx.r31.s64 = ctx.r11.s64 + 12844;
	// lwz r11,12840(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12840);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825d6a44
	if (!ctx.cr0.eq) goto loc_825D6A44;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-27652
	ctx.r9.s64 = ctx.r9.s64 + -27652;
	// stw r11,12840(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12840, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,23856
	ctx.r3.s64 = ctx.r11.s64 + 23856;
	// bl 0x82a4c758
	ctx.lr = 0x825D6A44;
	sub_82A4C758(ctx, base);
loc_825D6A44:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825d6a54
	if (!ctx.cr6.eq) goto loc_825D6A54;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d6a60
	goto loc_825D6A60;
loc_825D6A54:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339ee8
	ctx.lr = 0x825D6A60;
	sub_82339EE8(ctx, base);
loc_825D6A60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D6A68"))) PPC_WEAK_FUNC(sub_825D6A68);
PPC_FUNC_IMPL(__imp__sub_825D6A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825D6A70;
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
	// addi r31,r11,12844
	ctx.r31.s64 = ctx.r11.s64 + 12844;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,12840(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12840);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825d6ab4
	if (!ctx.cr0.eq) goto loc_825D6AB4;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-27652
	ctx.r9.s64 = ctx.r9.s64 + -27652;
	// stw r11,12840(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12840, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,23856
	ctx.r3.s64 = ctx.r11.s64 + 23856;
	// bl 0x82a4c758
	ctx.lr = 0x825D6AB4;
	sub_82A4C758(ctx, base);
loc_825D6AB4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x825d6ac8
	if (ctx.cr6.eq) goto loc_825D6AC8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339d80
	ctx.lr = 0x825D6AC8;
	sub_82339D80(ctx, base);
loc_825D6AC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D6AD0"))) PPC_WEAK_FUNC(sub_825D6AD0);
PPC_FUNC_IMPL(__imp__sub_825D6AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825d6b08
	if (ctx.cr6.eq) goto loc_825D6B08;
	// bl 0x82610060
	ctx.lr = 0x825D6AF8;
	sub_82610060(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d6b08
	if (!ctx.cr6.eq) goto loc_825D6B08;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d6b14
	goto loc_825D6B14;
loc_825D6B08:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339ee8
	ctx.lr = 0x825D6B14;
	sub_82339EE8(ctx, base);
loc_825D6B14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6B30"))) PPC_WEAK_FUNC(sub_825D6B30);
PPC_FUNC_IMPL(__imp__sub_825D6B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82610060
	ctx.lr = 0x825D6B50;
	sub_82610060(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825d6b64
	if (ctx.cr6.eq) goto loc_825D6B64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82339d80
	ctx.lr = 0x825D6B64;
	sub_82339D80(ctx, base);
loc_825D6B64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6B80"))) PPC_WEAK_FUNC(sub_825D6B80);
PPC_FUNC_IMPL(__imp__sub_825D6B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825d6bb8
	if (ctx.cr6.eq) goto loc_825D6BB8;
	// bl 0x82610168
	ctx.lr = 0x825D6BA8;
	sub_82610168(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d6bb8
	if (!ctx.cr6.eq) goto loc_825D6BB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d6bc4
	goto loc_825D6BC4;
loc_825D6BB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339ee8
	ctx.lr = 0x825D6BC4;
	sub_82339EE8(ctx, base);
loc_825D6BC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6BE0"))) PPC_WEAK_FUNC(sub_825D6BE0);
PPC_FUNC_IMPL(__imp__sub_825D6BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82610168
	ctx.lr = 0x825D6C00;
	sub_82610168(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825d6c14
	if (ctx.cr6.eq) goto loc_825D6C14;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82339d80
	ctx.lr = 0x825D6C14;
	sub_82339D80(ctx, base);
loc_825D6C14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6C30"))) PPC_WEAK_FUNC(sub_825D6C30);
PPC_FUNC_IMPL(__imp__sub_825D6C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,18704
	ctx.r3.s64 = ctx.r11.s64 + 18704;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6C40"))) PPC_WEAK_FUNC(sub_825D6C40);
PPC_FUNC_IMPL(__imp__sub_825D6C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825d6c78
	if (ctx.cr6.eq) goto loc_825D6C78;
	// bl 0x82392e08
	ctx.lr = 0x825D6C68;
	sub_82392E08(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d6c78
	if (!ctx.cr6.eq) goto loc_825D6C78;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d6c84
	goto loc_825D6C84;
loc_825D6C78:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d5b50
	ctx.lr = 0x825D6C84;
	sub_825D5B50(ctx, base);
loc_825D6C84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6CA0"))) PPC_WEAK_FUNC(sub_825D6CA0);
PPC_FUNC_IMPL(__imp__sub_825D6CA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82332278
	sub_82332278(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D6CA8"))) PPC_WEAK_FUNC(sub_825D6CA8);
PPC_FUNC_IMPL(__imp__sub_825D6CA8) {
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
	// li r3,12768
	ctx.r3.s64 = 12768;
	// bl 0x82833108
	ctx.lr = 0x825D6CC4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d6cd8
	if (ctx.cr0.eq) goto loc_825D6CD8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825d6f08
	ctx.lr = 0x825D6CD4;
	sub_825D6F08(ctx, base);
	// b 0x825d6cdc
	goto loc_825D6CDC;
loc_825D6CD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D6CDC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6CF0"))) PPC_WEAK_FUNC(sub_825D6CF0);
PPC_FUNC_IMPL(__imp__sub_825D6CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82392e08
	ctx.lr = 0x825D6D10;
	sub_82392E08(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d6d20
	if (!ctx.cr6.eq) goto loc_825D6D20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x825d6d38
	goto loc_825D6D38;
loc_825D6D20:
	// bl 0x82332278
	ctx.lr = 0x825D6D24;
	sub_82332278(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825d6d38
	if (ctx.cr6.eq) goto loc_825D6D38;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82404040
	ctx.lr = 0x825D6D38;
	sub_82404040(ctx, base);
loc_825D6D38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6D50"))) PPC_WEAK_FUNC(sub_825D6D50);
PPC_FUNC_IMPL(__imp__sub_825D6D50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8480(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8480);
	// lwz r10,8484(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8484);
	// lwz r9,8488(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8488);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6D70"))) PPC_WEAK_FUNC(sub_825D6D70);
PPC_FUNC_IMPL(__imp__sub_825D6D70) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10460(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10460);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6D78"))) PPC_WEAK_FUNC(sub_825D6D78);
PPC_FUNC_IMPL(__imp__sub_825D6D78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,264
	ctx.r4.s64 = 264;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825D6D90"))) PPC_WEAK_FUNC(sub_825D6D90);
PPC_FUNC_IMPL(__imp__sub_825D6D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,16568(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16568);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6DB0"))) PPC_WEAK_FUNC(sub_825D6DB0);
PPC_FUNC_IMPL(__imp__sub_825D6DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,1595
	ctx.r11.s64 = ctx.r4.s64 + 1595;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6DC0"))) PPC_WEAK_FUNC(sub_825D6DC0);
PPC_FUNC_IMPL(__imp__sub_825D6DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,11268(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11268);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6DC8"))) PPC_WEAK_FUNC(sub_825D6DC8);
PPC_FUNC_IMPL(__imp__sub_825D6DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,10520(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10520);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6DD0"))) PPC_WEAK_FUNC(sub_825D6DD0);
PPC_FUNC_IMPL(__imp__sub_825D6DD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11680);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825d6dec
	if (!ctx.cr6.lt) goto loc_825D6DEC;
	// lwz r11,11676(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11676);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_825D6DEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6DF8"))) PPC_WEAK_FUNC(sub_825D6DF8);
PPC_FUNC_IMPL(__imp__sub_825D6DF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11680(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11680);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6E00"))) PPC_WEAK_FUNC(sub_825D6E00);
PPC_FUNC_IMPL(__imp__sub_825D6E00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11656(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11656);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825d6e1c
	if (!ctx.cr6.lt) goto loc_825D6E1C;
	// lwz r11,11652(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11652);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_825D6E1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6E28"))) PPC_WEAK_FUNC(sub_825D6E28);
PPC_FUNC_IMPL(__imp__sub_825D6E28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11656(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11656);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6E30"))) PPC_WEAK_FUNC(sub_825D6E30);
PPC_FUNC_IMPL(__imp__sub_825D6E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,3864(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3864);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,2176(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2176);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x825d6e68
	if (!ctx.cr6.gt) goto loc_825D6E68;
	// lwz r8,3860(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3860);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_825D6E4C:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x825d6e9c
	if (ctx.cr6.eq) goto loc_825D6E9C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825d6e4c
	if (ctx.cr6.lt) goto loc_825D6E4C;
loc_825D6E68:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
loc_825D6E70:
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// blr 
	return;
loc_825D6E9C:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x825d6e70
	goto loc_825D6E70;
}

__attribute__((alias("__imp__sub_825D6EB0"))) PPC_WEAK_FUNC(sub_825D6EB0);
PPC_FUNC_IMPL(__imp__sub_825D6EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r11,4420
	ctx.r3.s64 = ctx.r11.s64 + 4420;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6EC0"))) PPC_WEAK_FUNC(sub_825D6EC0);
PPC_FUNC_IMPL(__imp__sub_825D6EC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x824e97b0
	sub_824E97B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D6EC8"))) PPC_WEAK_FUNC(sub_825D6EC8);
PPC_FUNC_IMPL(__imp__sub_825D6EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lfs f13,6820(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6820);
	ctx.f13.f64 = double(temp.f32);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6EF8"))) PPC_WEAK_FUNC(sub_825D6EF8);
PPC_FUNC_IMPL(__imp__sub_825D6EF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D6F00"))) PPC_WEAK_FUNC(sub_825D6F00);
PPC_FUNC_IMPL(__imp__sub_825D6F00) {
	PPC_FUNC_PROLOGUE();
	// b 0x824e12f8
	sub_824E12F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D6F08"))) PPC_WEAK_FUNC(sub_825D6F08);
PPC_FUNC_IMPL(__imp__sub_825D6F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x825D6F10;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82400f98
	ctx.lr = 0x825D6F20;
	sub_82400F98(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r10,r10,-30696
	ctx.r10.s64 = ctx.r10.s64 + -30696;
	// addi r9,r9,-28332
	ctx.r9.s64 = ctx.r9.s64 + -28332;
	// addi r8,r8,-28280
	ctx.r8.s64 = ctx.r8.s64 + -28280;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r21,r11,15852
	ctx.r21.s64 = ctx.r11.s64 + 15852;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lis r7,-32226
	ctx.r7.s64 = -2111963136;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// lis r6,-32225
	ctx.r6.s64 = -2111897600;
	// lis r5,-32225
	ctx.r5.s64 = -2111897600;
	// addi r11,r31,6112
	ctx.r11.s64 = ctx.r31.s64 + 6112;
	// addi r8,r5,-16424
	ctx.r8.s64 = ctx.r5.s64 + -16424;
	// addi r10,r7,32120
	ctx.r10.s64 = ctx.r7.s64 + 32120;
	// addi r9,r6,-30748
	ctx.r9.s64 = ctx.r6.s64 + -30748;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r4,r30,6116
	ctx.r4.s64 = ctx.r30.s64 + 6116;
	// li r5,28
	ctx.r5.s64 = 28;
	// lwz r11,6096(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6096);
	// stw r11,6096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6096, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// stw r21,6112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6112, ctx.r21.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x825D6F90;
	sub_82A4EA80(ctx, base);
	// addi r11,r31,6160
	ctx.r11.s64 = ctx.r31.s64 + 6160;
	// addi r3,r31,6228
	ctx.r3.s64 = ctx.r31.s64 + 6228;
	// addi r4,r30,6228
	ctx.r4.s64 = ctx.r30.s64 + 6228;
	// li r5,120
	ctx.r5.s64 = 120;
	// lwz r11,6144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6144);
	// stw r11,6144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6144, ctx.r11.u32);
	// lwz r11,6148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6148);
	// stw r11,6148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6148, ctx.r11.u32);
	// ld r11,6152(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 6152);
	// std r11,6152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 6152, ctx.r11.u64);
	// ld r11,6160(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 6160);
	// std r11,6160(r31)
	PPC_STORE_U64(ctx.r31.u32 + 6160, ctx.r11.u64);
	// ld r11,6168(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 6168);
	// std r11,6168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 6168, ctx.r11.u64);
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
	// lwz r11,6192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6192);
	// stw r11,6192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6192, ctx.r11.u32);
	// lwz r11,6196(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6196);
	// stw r11,6196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6196, ctx.r11.u32);
	// lwz r11,6200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6200);
	// stw r11,6200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6200, ctx.r11.u32);
	// lwz r11,6204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6204);
	// stw r11,6204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6204, ctx.r11.u32);
	// lwz r11,6208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6208);
	// stw r11,6208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6208, ctx.r11.u32);
	// lwz r11,6212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6212);
	// stw r11,6212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6212, ctx.r11.u32);
	// lwz r11,6216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6216);
	// stw r11,6216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6216, ctx.r11.u32);
	// lwz r11,6220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6220);
	// stw r11,6220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6220, ctx.r11.u32);
	// lwz r11,6224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6224);
	// stw r11,6224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6224, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x825D702C;
	sub_82A4EA80(ctx, base);
	// lwz r11,6348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6348);
	// addi r3,r31,6380
	ctx.r3.s64 = ctx.r31.s64 + 6380;
	// addi r4,r30,6380
	ctx.r4.s64 = ctx.r30.s64 + 6380;
	// li r5,1908
	ctx.r5.s64 = 1908;
	// stw r11,6348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6348, ctx.r11.u32);
	// lwz r11,6352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6352);
	// stw r11,6352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6352, ctx.r11.u32);
	// lwz r11,6356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6356);
	// stw r11,6356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6356, ctx.r11.u32);
	// lwz r11,6360(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6360);
	// stw r11,6360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6360, ctx.r11.u32);
	// lwz r11,6364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6364);
	// stw r11,6364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6364, ctx.r11.u32);
	// lwz r11,6368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6368);
	// stw r11,6368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6368, ctx.r11.u32);
	// lwz r11,6372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6372);
	// stw r11,6372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6372, ctx.r11.u32);
	// lwz r11,6376(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6376);
	// stw r11,6376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6376, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x825D707C;
	sub_82A4EA80(ctx, base);
	// addi r11,r31,8288
	ctx.r11.s64 = ctx.r31.s64 + 8288;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// addi r11,r30,8288
	ctx.r11.s64 = ctx.r30.s64 + 8288;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r10,r10,15864
	ctx.r10.s64 = ctx.r10.s64 + 15864;
	// addi r27,r11,8
	ctx.r27.s64 = ctx.r11.s64 + 8;
	// addi r9,r9,-28204
	ctx.r9.s64 = ctx.r9.s64 + -28204;
	// stw r10,8288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8288, ctx.r10.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,8
	ctx.r11.s64 = 8;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// lwz r10,8292(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8292);
	// stw r9,8288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8288, ctx.r9.u32);
	// stw r10,8292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8292, ctx.r10.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// stw r29,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r29.u32);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// beq cr6,0x825d7164
	if (ctx.cr6.eq) goto loc_825D7164;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825d7164
	if (!ctx.cr6.gt) goto loc_825D7164;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d7100
	if (ctx.cr0.eq) goto loc_825D7100;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x825D7100;
	sub_82332C38(ctx, base);
loc_825D7100:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825d7164
	if (!ctx.cr6.gt) goto loc_825D7164;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_825D7114:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x825D7128;
	sub_82332D50(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d7150
	if (ctx.cr0.eq) goto loc_825D7150;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_825D7150:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d7114
	if (ctx.cr6.lt) goto loc_825D7114;
loc_825D7164:
	// addi r28,r31,8320
	ctx.r28.s64 = ctx.r31.s64 + 8320;
	// stw r29,8328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8328, ctx.r29.u32);
	// li r22,28
	ctx.r22.s64 = 28;
	// stw r29,8332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8332, ctx.r29.u32);
	// addi r25,r30,8320
	ctx.r25.s64 = ctx.r30.s64 + 8320;
	// stw r29,8336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8336, ctx.r29.u32);
	// stw r22,8324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8324, ctx.r22.u32);
	// stw r29,8340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8340, ctx.r29.u32);
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// stw r29,8320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8320, ctx.r29.u32);
	// beq cr6,0x825d7224
	if (ctx.cr6.eq) goto loc_825D7224;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825d7224
	if (!ctx.cr6.gt) goto loc_825D7224;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d71bc
	if (ctx.cr0.eq) goto loc_825D71BC;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x825D71BC;
	sub_82332C38(ctx, base);
loc_825D71BC:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825d7224
	if (!ctx.cr6.gt) goto loc_825D7224;
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
loc_825D71D0:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x825D71E4;
	sub_82332D50(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// add. r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x825d7210
	if (ctx.cr0.eq) goto loc_825D7210;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r26,r11,r24
	ctx.r26.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x823339b8
	ctx.lr = 0x825D7208;
	sub_823339B8(ctx, base);
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// stw r11,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r11.u32);
loc_825D7210:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,28
	ctx.r24.s64 = ctx.r24.s64 + 28;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d71d0
	if (ctx.cr6.lt) goto loc_825D71D0;
loc_825D7224:
	// lwz r11,8344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8344);
	// stw r11,8344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8344, ctx.r11.u32);
	// lwz r11,8348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8348);
	// stw r11,8348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8348, ctx.r11.u32);
	// lwz r11,8352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8352);
	// stw r11,8352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8352, ctx.r11.u32);
	// lwz r11,8356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8356);
	// stw r11,8356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8356, ctx.r11.u32);
	// lfs f0,8360(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8360);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8360(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8360, temp.u32);
	// lwz r11,8364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8364);
	// stw r11,8364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8364, ctx.r11.u32);
	// lfs f0,8368(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8368);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8368(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8368, temp.u32);
	// lfs f0,8372(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8372);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8372(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8372, temp.u32);
	// lfs f0,8376(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8376);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8376(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8376, temp.u32);
	// lfs f0,8380(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8380);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8380(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8380, temp.u32);
	// lfs f0,8384(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8384);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8384(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8384, temp.u32);
	// lfs f0,8388(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8388);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8388(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8388, temp.u32);
	// lfs f0,8392(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8392);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8392(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8392, temp.u32);
	// lfs f0,8396(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8396);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8396(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8396, temp.u32);
	// lwz r11,8400(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8400);
	// stw r11,8400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8400, ctx.r11.u32);
	// lwz r11,8404(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8404);
	// stw r11,8404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8404, ctx.r11.u32);
	// lwz r11,8408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8408);
	// stw r11,8408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8408, ctx.r11.u32);
	// lwz r11,8412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8412);
	// stw r11,8412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8412, ctx.r11.u32);
	// lwz r11,8416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8416);
	// stw r11,8416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8416, ctx.r11.u32);
	// lwz r11,8420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8420);
	// stw r11,8420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8420, ctx.r11.u32);
	// lwz r11,8424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8424);
	// stw r11,8424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8424, ctx.r11.u32);
	// lwz r11,8428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8428);
	// stw r11,8428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8428, ctx.r11.u32);
	// lfs f0,8432(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8432);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8432(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8432, temp.u32);
	// lwz r11,8436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8436);
	// stw r11,8436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8436, ctx.r11.u32);
	// lwz r11,8440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8440);
	// stw r11,8440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8440, ctx.r11.u32);
	// lwz r11,8444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8444);
	// stw r11,8444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8444, ctx.r11.u32);
	// lwz r11,8448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8448);
	// stw r11,8448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8448, ctx.r11.u32);
	// lwz r11,8452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8452);
	// stw r11,8452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8452, ctx.r11.u32);
	// lfs f0,8456(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8456);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8456(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8456, temp.u32);
	// lwz r11,8460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8460);
	// stw r11,8460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8460, ctx.r11.u32);
	// lfs f0,8464(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8464);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8464(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8464, temp.u32);
	// ld r11,8472(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8472);
	// std r11,8472(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8472, ctx.r11.u64);
	// lwz r11,8480(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8480);
	// stw r11,8480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8480, ctx.r11.u32);
	// lwz r11,8484(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8484);
	// stw r11,8484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8484, ctx.r11.u32);
	// lwz r11,8488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8488);
	// stw r11,8488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8488, ctx.r11.u32);
	// lwz r11,8492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8492);
	// stw r11,8492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8492, ctx.r11.u32);
	// lwz r11,8496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8496);
	// stw r11,8496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8496, ctx.r11.u32);
	// lwz r11,8500(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8500);
	// stw r11,8500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8500, ctx.r11.u32);
	// lwz r11,8504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8504);
	// stw r11,8504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8504, ctx.r11.u32);
	// lwz r11,8508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8508);
	// stw r11,8508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8508, ctx.r11.u32);
	// lwz r11,8512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8512);
	// stw r11,8512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8512, ctx.r11.u32);
	// addi r4,r30,8572
	ctx.r4.s64 = ctx.r30.s64 + 8572;
	// addi r3,r31,8572
	ctx.r3.s64 = ctx.r31.s64 + 8572;
	// lwz r11,8516(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8516);
	// stw r11,8516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8516, ctx.r11.u32);
	// lwz r11,8520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8520);
	// stw r11,8520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8520, ctx.r11.u32);
	// lwz r11,8524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8524);
	// stw r11,8524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8524, ctx.r11.u32);
	// lfs f0,8528(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8528);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8528(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8528, temp.u32);
	// lwz r11,8532(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8532);
	// stw r11,8532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8532, ctx.r11.u32);
	// lwz r11,8536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8536);
	// stw r11,8536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8536, ctx.r11.u32);
	// lwz r11,8540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8540);
	// stw r11,8540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8540, ctx.r11.u32);
	// lwz r11,8544(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8544);
	// stw r11,8544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8544, ctx.r11.u32);
	// lwz r11,8548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8548);
	// stw r11,8548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8548, ctx.r11.u32);
	// lwz r11,8552(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8552);
	// stw r11,8552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8552, ctx.r11.u32);
	// lwz r11,8556(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8556);
	// stw r11,8556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8556, ctx.r11.u32);
	// lwz r11,8560(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8560);
	// stw r11,8560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8560, ctx.r11.u32);
	// lwz r11,8564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8564);
	// stw r11,8564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8564, ctx.r11.u32);
	// lwz r11,8568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8568);
	// stw r11,8568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8568, ctx.r11.u32);
	// bl 0x82400a48
	ctx.lr = 0x825D73E8;
	sub_82400A48(ctx, base);
	// addi r4,r30,8596
	ctx.r4.s64 = ctx.r30.s64 + 8596;
	// addi r3,r31,8596
	ctx.r3.s64 = ctx.r31.s64 + 8596;
	// bl 0x823339b8
	ctx.lr = 0x825D73F4;
	sub_823339B8(ctx, base);
	// lwz r11,8620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8620);
	// addi r3,r31,8756
	ctx.r3.s64 = ctx.r31.s64 + 8756;
	// addi r4,r30,8756
	ctx.r4.s64 = ctx.r30.s64 + 8756;
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r11,8620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8620, ctx.r11.u32);
	// lwz r11,8624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8624);
	// stw r11,8624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8624, ctx.r11.u32);
	// lwz r11,8628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8628);
	// stw r11,8628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8628, ctx.r11.u32);
	// lwz r11,8632(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8632);
	// stw r11,8632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8632, ctx.r11.u32);
	// lwz r11,8636(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8636);
	// stw r11,8636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8636, ctx.r11.u32);
	// lwz r11,8640(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8640);
	// stw r11,8640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8640, ctx.r11.u32);
	// lwz r11,8644(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8644);
	// stw r11,8644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8644, ctx.r11.u32);
	// lwz r11,8648(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8648);
	// stw r11,8648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8648, ctx.r11.u32);
	// lwz r11,8652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8652);
	// stw r11,8652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8652, ctx.r11.u32);
	// lwz r11,8656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8656);
	// stw r11,8656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8656, ctx.r11.u32);
	// lfs f0,8660(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8660);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8660(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8660, temp.u32);
	// lwz r11,8664(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8664);
	// stw r11,8664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8664, ctx.r11.u32);
	// lwz r11,8668(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8668);
	// stw r11,8668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8668, ctx.r11.u32);
	// lwz r11,8672(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8672);
	// stw r11,8672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8672, ctx.r11.u32);
	// lwz r11,8676(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8676);
	// stw r11,8676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8676, ctx.r11.u32);
	// lwz r11,8680(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8680);
	// stw r11,8680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8680, ctx.r11.u32);
	// lfs f0,8684(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8684);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8684(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8684, temp.u32);
	// lwz r11,8688(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8688);
	// stw r11,8688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8688, ctx.r11.u32);
	// lfs f0,8692(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8692);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8692(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8692, temp.u32);
	// lwz r11,8696(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8696);
	// stw r11,8696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8696, ctx.r11.u32);
	// lwz r11,8700(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8700);
	// stw r11,8700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8700, ctx.r11.u32);
	// lwz r11,8704(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8704);
	// stw r11,8704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8704, ctx.r11.u32);
	// lfs f0,8708(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8708);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8708(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8708, temp.u32);
	// lfs f0,8712(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8712);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8712(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8712, temp.u32);
	// lfs f0,8716(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8716(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8716, temp.u32);
	// lwz r11,8720(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8720);
	// stw r11,8720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8720, ctx.r11.u32);
	// lwz r11,8724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8724);
	// stw r11,8724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8724, ctx.r11.u32);
	// lfs f0,8728(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8728);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8728(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8728, temp.u32);
	// lwz r11,8732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8732);
	// stw r11,8732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8732, ctx.r11.u32);
	// lwz r11,8736(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8736);
	// stw r11,8736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8736, ctx.r11.u32);
	// lwz r11,8740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8740);
	// stw r11,8740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8740, ctx.r11.u32);
	// lfs f0,8744(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8744(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8744, temp.u32);
	// lfs f0,8748(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8748);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8748(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8748, temp.u32);
	// lwz r11,8752(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8752);
	// stw r11,8752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8752, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x825D7514;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,8780
	ctx.r3.s64 = ctx.r31.s64 + 8780;
	// addi r4,r30,8780
	ctx.r4.s64 = ctx.r30.s64 + 8780;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82a4ea80
	ctx.lr = 0x825D7524;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,8804
	ctx.r3.s64 = ctx.r31.s64 + 8804;
	// addi r4,r30,8804
	ctx.r4.s64 = ctx.r30.s64 + 8804;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82a4ea80
	ctx.lr = 0x825D7534;
	sub_82A4EA80(ctx, base);
	// lwz r11,8828(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8828);
	// addi r3,r31,8856
	ctx.r3.s64 = ctx.r31.s64 + 8856;
	// addi r4,r30,8856
	ctx.r4.s64 = ctx.r30.s64 + 8856;
	// li r5,48
	ctx.r5.s64 = 48;
	// stw r11,8828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8828, ctx.r11.u32);
	// lwz r11,8832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8832);
	// stw r11,8832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8832, ctx.r11.u32);
	// lwz r11,8836(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8836);
	// stw r11,8836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8836, ctx.r11.u32);
	// lwz r11,8840(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8840);
	// stw r11,8840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8840, ctx.r11.u32);
	// lwz r11,8844(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8844);
	// stw r11,8844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8844, ctx.r11.u32);
	// lwz r11,8848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8848);
	// stw r11,8848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8848, ctx.r11.u32);
	// lwz r11,8852(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8852);
	// stw r11,8852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8852, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x825D757C;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,8904
	ctx.r3.s64 = ctx.r31.s64 + 8904;
	// addi r4,r30,8904
	ctx.r4.s64 = ctx.r30.s64 + 8904;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x82a4ea80
	ctx.lr = 0x825D758C;
	sub_82A4EA80(ctx, base);
	// addi r11,r31,8992
	ctx.r11.s64 = ctx.r31.s64 + 8992;
	// addi r11,r31,9008
	ctx.r11.s64 = ctx.r31.s64 + 9008;
	// addi r3,r31,9024
	ctx.r3.s64 = ctx.r31.s64 + 9024;
	// addi r4,r30,9024
	ctx.r4.s64 = ctx.r30.s64 + 9024;
	// li r5,640
	ctx.r5.s64 = 640;
	// lwz r11,8952(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8952);
	// stw r11,8952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8952, ctx.r11.u32);
	// lwz r11,8956(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8956);
	// stw r11,8956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8956, ctx.r11.u32);
	// lwz r11,8960(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8960);
	// stw r11,8960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8960, ctx.r11.u32);
	// lwz r11,8964(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8964);
	// stw r11,8964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8964, ctx.r11.u32);
	// lwz r11,8968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8968);
	// stw r11,8968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8968, ctx.r11.u32);
	// lwz r11,8972(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8972);
	// stw r11,8972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8972, ctx.r11.u32);
	// lwz r11,8976(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8976);
	// stw r11,8976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8976, ctx.r11.u32);
	// lwz r11,8980(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8980);
	// stw r11,8980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8980, ctx.r11.u32);
	// ld r11,8984(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8984);
	// std r11,8984(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8984, ctx.r11.u64);
	// ld r11,8992(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8992);
	// std r11,8992(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8992, ctx.r11.u64);
	// ld r11,9000(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 9000);
	// std r11,9000(r31)
	PPC_STORE_U64(ctx.r31.u32 + 9000, ctx.r11.u64);
	// ld r11,9008(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 9008);
	// std r11,9008(r31)
	PPC_STORE_U64(ctx.r31.u32 + 9008, ctx.r11.u64);
	// ld r11,9016(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 9016);
	// std r11,9016(r31)
	PPC_STORE_U64(ctx.r31.u32 + 9016, ctx.r11.u64);
	// bl 0x82a4ea80
	ctx.lr = 0x825D760C;
	sub_82A4EA80(ctx, base);
	// lwz r11,9664(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9664);
	// addi r3,r31,9692
	ctx.r3.s64 = ctx.r31.s64 + 9692;
	// addi r4,r30,9692
	ctx.r4.s64 = ctx.r30.s64 + 9692;
	// li r5,48
	ctx.r5.s64 = 48;
	// stw r11,9664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9664, ctx.r11.u32);
	// lwz r11,9668(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9668);
	// stw r11,9668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9668, ctx.r11.u32);
	// lwz r11,9672(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9672);
	// stw r11,9672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9672, ctx.r11.u32);
	// lfs f0,9676(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 9676);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,9676(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 9676, temp.u32);
	// lfs f0,9680(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 9680);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,9680(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 9680, temp.u32);
	// lfs f0,9684(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 9684);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,9684(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 9684, temp.u32);
	// lfs f0,9688(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 9688);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,9688(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 9688, temp.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x825D7654;
	sub_82A4EA80(ctx, base);
	// lwz r11,9740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9740);
	// addi r4,r30,9812
	ctx.r4.s64 = ctx.r30.s64 + 9812;
	// addi r3,r31,9812
	ctx.r3.s64 = ctx.r31.s64 + 9812;
	// stw r11,9740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9740, ctx.r11.u32);
	// lfs f0,9744(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 9744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,9744(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 9744, temp.u32);
	// lfs f0,9748(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 9748);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,9748(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 9748, temp.u32);
	// lwz r11,9752(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9752);
	// stw r11,9752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9752, ctx.r11.u32);
	// lfs f0,9756(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 9756);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,9756(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 9756, temp.u32);
	// lwz r11,9760(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9760);
	// stw r11,9760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9760, ctx.r11.u32);
	// lwz r11,9764(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9764);
	// stw r11,9764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9764, ctx.r11.u32);
	// lfs f0,9768(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 9768);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,9768(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 9768, temp.u32);
	// lfs f0,9772(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 9772);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,9772(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 9772, temp.u32);
	// lwz r11,9776(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9776);
	// stw r11,9776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9776, ctx.r11.u32);
	// lfs f0,9780(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 9780);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,9780(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 9780, temp.u32);
	// lwz r11,9784(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9784);
	// stw r11,9784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9784, ctx.r11.u32);
	// lwz r11,9788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9788);
	// stw r11,9788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9788, ctx.r11.u32);
	// lfs f0,9792(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 9792);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,9792(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 9792, temp.u32);
	// lfs f0,9796(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 9796);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,9796(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 9796, temp.u32);
	// lfs f0,9800(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 9800);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,9800(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 9800, temp.u32);
	// lfs f0,9804(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 9804);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,9804(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 9804, temp.u32);
	// lwz r11,9808(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9808);
	// stw r11,9808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9808, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x825D76F0;
	sub_82873B58(ctx, base);
	// addi r4,r30,9836
	ctx.r4.s64 = ctx.r30.s64 + 9836;
	// addi r3,r31,9836
	ctx.r3.s64 = ctx.r31.s64 + 9836;
	// bl 0x82873b58
	ctx.lr = 0x825D76FC;
	sub_82873B58(ctx, base);
	// addi r4,r30,9860
	ctx.r4.s64 = ctx.r30.s64 + 9860;
	// addi r3,r31,9860
	ctx.r3.s64 = ctx.r31.s64 + 9860;
	// bl 0x82873b58
	ctx.lr = 0x825D7708;
	sub_82873B58(ctx, base);
	// addi r4,r30,9884
	ctx.r4.s64 = ctx.r30.s64 + 9884;
	// addi r3,r31,9884
	ctx.r3.s64 = ctx.r31.s64 + 9884;
	// bl 0x82873b58
	ctx.lr = 0x825D7714;
	sub_82873B58(ctx, base);
	// addi r4,r30,9908
	ctx.r4.s64 = ctx.r30.s64 + 9908;
	// addi r3,r31,9908
	ctx.r3.s64 = ctx.r31.s64 + 9908;
	// bl 0x82873b58
	ctx.lr = 0x825D7720;
	sub_82873B58(ctx, base);
	// addi r4,r30,9932
	ctx.r4.s64 = ctx.r30.s64 + 9932;
	// addi r3,r31,9932
	ctx.r3.s64 = ctx.r31.s64 + 9932;
	// bl 0x82873b58
	ctx.lr = 0x825D772C;
	sub_82873B58(ctx, base);
	// addi r4,r30,9956
	ctx.r4.s64 = ctx.r30.s64 + 9956;
	// addi r3,r31,9956
	ctx.r3.s64 = ctx.r31.s64 + 9956;
	// bl 0x82873b58
	ctx.lr = 0x825D7738;
	sub_82873B58(ctx, base);
	// addi r4,r30,9980
	ctx.r4.s64 = ctx.r30.s64 + 9980;
	// addi r3,r31,9980
	ctx.r3.s64 = ctx.r31.s64 + 9980;
	// bl 0x82873b58
	ctx.lr = 0x825D7744;
	sub_82873B58(ctx, base);
	// addi r4,r30,10004
	ctx.r4.s64 = ctx.r30.s64 + 10004;
	// addi r3,r31,10004
	ctx.r3.s64 = ctx.r31.s64 + 10004;
	// bl 0x82873b58
	ctx.lr = 0x825D7750;
	sub_82873B58(ctx, base);
	// addi r4,r30,10028
	ctx.r4.s64 = ctx.r30.s64 + 10028;
	// addi r3,r31,10028
	ctx.r3.s64 = ctx.r31.s64 + 10028;
	// bl 0x82873b58
	ctx.lr = 0x825D775C;
	sub_82873B58(ctx, base);
	// addi r4,r30,10052
	ctx.r4.s64 = ctx.r30.s64 + 10052;
	// addi r3,r31,10052
	ctx.r3.s64 = ctx.r31.s64 + 10052;
	// bl 0x82873b58
	ctx.lr = 0x825D7768;
	sub_82873B58(ctx, base);
	// addi r4,r30,10076
	ctx.r4.s64 = ctx.r30.s64 + 10076;
	// addi r3,r31,10076
	ctx.r3.s64 = ctx.r31.s64 + 10076;
	// bl 0x82873b58
	ctx.lr = 0x825D7774;
	sub_82873B58(ctx, base);
	// addi r4,r30,10100
	ctx.r4.s64 = ctx.r30.s64 + 10100;
	// addi r3,r31,10100
	ctx.r3.s64 = ctx.r31.s64 + 10100;
	// bl 0x82873b58
	ctx.lr = 0x825D7780;
	sub_82873B58(ctx, base);
	// addi r4,r30,10124
	ctx.r4.s64 = ctx.r30.s64 + 10124;
	// addi r3,r31,10124
	ctx.r3.s64 = ctx.r31.s64 + 10124;
	// bl 0x82873b58
	ctx.lr = 0x825D778C;
	sub_82873B58(ctx, base);
	// addi r4,r30,10148
	ctx.r4.s64 = ctx.r30.s64 + 10148;
	// addi r3,r31,10148
	ctx.r3.s64 = ctx.r31.s64 + 10148;
	// bl 0x82873b58
	ctx.lr = 0x825D7798;
	sub_82873B58(ctx, base);
	// addi r4,r30,10172
	ctx.r4.s64 = ctx.r30.s64 + 10172;
	// addi r3,r31,10172
	ctx.r3.s64 = ctx.r31.s64 + 10172;
	// bl 0x82873b58
	ctx.lr = 0x825D77A4;
	sub_82873B58(ctx, base);
	// addi r4,r30,10196
	ctx.r4.s64 = ctx.r30.s64 + 10196;
	// addi r3,r31,10196
	ctx.r3.s64 = ctx.r31.s64 + 10196;
	// bl 0x82873b58
	ctx.lr = 0x825D77B0;
	sub_82873B58(ctx, base);
	// addi r4,r30,10220
	ctx.r4.s64 = ctx.r30.s64 + 10220;
	// addi r3,r31,10220
	ctx.r3.s64 = ctx.r31.s64 + 10220;
	// bl 0x82873b58
	ctx.lr = 0x825D77BC;
	sub_82873B58(ctx, base);
	// addi r4,r30,10244
	ctx.r4.s64 = ctx.r30.s64 + 10244;
	// addi r3,r31,10244
	ctx.r3.s64 = ctx.r31.s64 + 10244;
	// bl 0x82873b58
	ctx.lr = 0x825D77C8;
	sub_82873B58(ctx, base);
	// addi r4,r30,10268
	ctx.r4.s64 = ctx.r30.s64 + 10268;
	// addi r3,r31,10268
	ctx.r3.s64 = ctx.r31.s64 + 10268;
	// bl 0x82873b58
	ctx.lr = 0x825D77D4;
	sub_82873B58(ctx, base);
	// addi r4,r30,10292
	ctx.r4.s64 = ctx.r30.s64 + 10292;
	// addi r3,r31,10292
	ctx.r3.s64 = ctx.r31.s64 + 10292;
	// bl 0x82873b58
	ctx.lr = 0x825D77E0;
	sub_82873B58(ctx, base);
	// addi r4,r30,10316
	ctx.r4.s64 = ctx.r30.s64 + 10316;
	// addi r3,r31,10316
	ctx.r3.s64 = ctx.r31.s64 + 10316;
	// bl 0x82873b58
	ctx.lr = 0x825D77EC;
	sub_82873B58(ctx, base);
	// lfs f0,10340(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10340(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10340, temp.u32);
	// lwz r11,10344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10344);
	// stw r11,10344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10344, ctx.r11.u32);
	// addi r28,r31,10352
	ctx.r28.s64 = ctx.r31.s64 + 10352;
	// lwz r11,10348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10348);
	// addi r27,r30,10352
	ctx.r27.s64 = ctx.r30.s64 + 10352;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// stw r11,10348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10348, ctx.r11.u32);
	// stw r22,10356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10356, ctx.r22.u32);
	// stw r29,10360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10360, ctx.r29.u32);
	// stw r29,10364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10364, ctx.r29.u32);
	// stw r29,10368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10368, ctx.r29.u32);
	// stw r29,10372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10372, ctx.r29.u32);
	// stw r29,10352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10352, ctx.r29.u32);
	// beq cr6,0x825d78c0
	if (ctx.cr6.eq) goto loc_825D78C0;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825d78c0
	if (!ctx.cr6.gt) goto loc_825D78C0;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d7858
	if (ctx.cr0.eq) goto loc_825D7858;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x825D7858;
	sub_82332C38(ctx, base);
loc_825D7858:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825d78c0
	if (!ctx.cr6.gt) goto loc_825D78C0;
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
loc_825D786C:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x825D7880;
	sub_82332D50(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// add. r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x825d78ac
	if (ctx.cr0.eq) goto loc_825D78AC;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r25,r11,r24
	ctx.r25.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x823339b8
	ctx.lr = 0x825D78A4;
	sub_823339B8(ctx, base);
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// stw r11,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r11.u32);
loc_825D78AC:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,28
	ctx.r24.s64 = ctx.r24.s64 + 28;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d786c
	if (ctx.cr6.lt) goto loc_825D786C;
loc_825D78C0:
	// lfs f0,10376(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10376);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r30,10416
	ctx.r4.s64 = ctx.r30.s64 + 10416;
	// stfs f0,10376(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10376, temp.u32);
	// addi r3,r31,10416
	ctx.r3.s64 = ctx.r31.s64 + 10416;
	// lfs f0,10380(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10380);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10380(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10380, temp.u32);
	// lfs f0,10384(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10384);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10384(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10384, temp.u32);
	// lfs f0,10388(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10388);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10388(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10388, temp.u32);
	// lfs f0,10392(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10392);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10392(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10392, temp.u32);
	// lfs f0,10396(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10396);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10396(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10396, temp.u32);
	// lfs f0,10400(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10400);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10400(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10400, temp.u32);
	// lwz r11,10404(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10404);
	// stw r11,10404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10404, ctx.r11.u32);
	// lwz r11,10408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10408);
	// stw r11,10408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10408, ctx.r11.u32);
	// lwz r11,10412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10412);
	// stw r11,10412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10412, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x825D791C;
	sub_82873B58(ctx, base);
	// lfs f0,10440(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10440);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10440(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10440, temp.u32);
	// addi r4,r30,10524
	ctx.r4.s64 = ctx.r30.s64 + 10524;
	// addi r3,r31,10524
	ctx.r3.s64 = ctx.r31.s64 + 10524;
	// lfs f0,10444(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10444(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10444, temp.u32);
	// lfs f0,10448(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10448);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10448, temp.u32);
	// lfs f0,10452(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10452);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10452(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10452, temp.u32);
	// lfs f0,10456(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10456);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10456(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10456, temp.u32);
	// lwz r11,10460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10460);
	// stw r11,10460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10460, ctx.r11.u32);
	// lwz r11,10464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10464);
	// stw r11,10464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10464, ctx.r11.u32);
	// lwz r11,10468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10468);
	// stw r11,10468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10468, ctx.r11.u32);
	// lwz r11,10472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10472);
	// stw r11,10472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10472, ctx.r11.u32);
	// lfs f0,10476(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10476);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10476(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10476, temp.u32);
	// lfs f0,10480(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10480);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10480, temp.u32);
	// lwz r11,10484(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10484);
	// stw r11,10484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10484, ctx.r11.u32);
	// lwz r11,10488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10488);
	// stw r11,10488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10488, ctx.r11.u32);
	// lwz r11,10492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10492);
	// stw r11,10492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10492, ctx.r11.u32);
	// lwz r11,10496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10496);
	// stw r11,10496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10496, ctx.r11.u32);
	// lwz r11,10500(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10500);
	// stw r11,10500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10500, ctx.r11.u32);
	// lfs f0,10504(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10504);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10504(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10504, temp.u32);
	// lfs f0,10508(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10508);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10508(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10508, temp.u32);
	// lfs f0,10512(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10512);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10512, temp.u32);
	// lfs f0,10516(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10516);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10516, temp.u32);
	// lfs f0,10520(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10520);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10520(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10520, temp.u32);
	// bl 0x82873b58
	ctx.lr = 0x825D79D0;
	sub_82873B58(ctx, base);
	// addi r4,r30,10548
	ctx.r4.s64 = ctx.r30.s64 + 10548;
	// addi r3,r31,10548
	ctx.r3.s64 = ctx.r31.s64 + 10548;
	// bl 0x82873b58
	ctx.lr = 0x825D79DC;
	sub_82873B58(ctx, base);
	// lfs f0,10572(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10572);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10572(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10572, temp.u32);
	// lfs f0,10576(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10576);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10576(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10576, temp.u32);
	// lfs f0,10580(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10580);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10580(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10580, temp.u32);
	// lwz r11,10584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10584);
	// stw r11,10584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10584, ctx.r11.u32);
	// lfs f0,10588(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10588);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10588(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10588, temp.u32);
	// lfs f0,10592(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10592);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r30,10668
	ctx.r4.s64 = ctx.r30.s64 + 10668;
	// stfs f0,10592(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10592, temp.u32);
	// addi r3,r31,10668
	ctx.r3.s64 = ctx.r31.s64 + 10668;
	// lfs f0,10596(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10596);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10596(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10596, temp.u32);
	// lfs f0,10600(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10600);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10600(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10600, temp.u32);
	// lfs f0,10604(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10604);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10604(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10604, temp.u32);
	// lfs f0,10608(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10608);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10608(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10608, temp.u32);
	// lfs f0,10612(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10612);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10612(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10612, temp.u32);
	// lfs f0,10616(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10616);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10616(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10616, temp.u32);
	// lfs f0,10620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10620);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10620(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10620, temp.u32);
	// lfs f0,10624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10624);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10624(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10624, temp.u32);
	// lfs f0,10628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10628);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10628, temp.u32);
	// lfs f0,10632(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10632);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10632(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10632, temp.u32);
	// lfs f0,10636(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10636);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10636(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10636, temp.u32);
	// lfs f0,10640(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10640);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10640(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10640, temp.u32);
	// lwz r11,10644(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10644);
	// stw r11,10644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10644, ctx.r11.u32);
	// lfs f0,10648(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10648);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10648(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10648, temp.u32);
	// lfs f0,10652(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10652);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10652(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10652, temp.u32);
	// lfs f0,10656(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10656);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10656(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10656, temp.u32);
	// lwz r11,10660(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10660);
	// stw r11,10660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10660, ctx.r11.u32);
	// lwz r11,10664(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10664);
	// stw r11,10664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10664, ctx.r11.u32);
	// bl 0x8284b058
	ctx.lr = 0x825D7AA8;
	sub_8284B058(ctx, base);
	// addi r4,r30,10692
	ctx.r4.s64 = ctx.r30.s64 + 10692;
	// addi r3,r31,10692
	ctx.r3.s64 = ctx.r31.s64 + 10692;
	// bl 0x8284b058
	ctx.lr = 0x825D7AB4;
	sub_8284B058(ctx, base);
	// lwz r11,10716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10716);
	// addi r4,r30,10728
	ctx.r4.s64 = ctx.r30.s64 + 10728;
	// addi r3,r31,10728
	ctx.r3.s64 = ctx.r31.s64 + 10728;
	// stw r11,10716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10716, ctx.r11.u32);
	// lwz r11,10720(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10720);
	// stw r11,10720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10720, ctx.r11.u32);
	// lwz r11,10724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10724);
	// stw r11,10724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10724, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x825D7AD8;
	sub_82873B58(ctx, base);
	// lwz r11,10752(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10752);
	// stw r11,10752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10752, ctx.r11.u32);
	// lfs f0,10756(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10756);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10756(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10756, temp.u32);
	// lwz r11,10760(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10760);
	// stw r11,10760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10760, ctx.r11.u32);
	// lwz r11,10764(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10764);
	// stw r11,10764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10764, ctx.r11.u32);
	// lwz r11,10768(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10768);
	// stw r11,10768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10768, ctx.r11.u32);
	// lwz r11,10772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10772);
	// stw r11,10772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10772, ctx.r11.u32);
	// lwz r11,10776(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10776);
	// stw r11,10776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10776, ctx.r11.u32);
	// lwz r11,10780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10780);
	// stw r11,10780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10780, ctx.r11.u32);
	// lwz r11,10784(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10784);
	// stw r11,10784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10784, ctx.r11.u32);
	// lwz r11,10788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10788);
	// stw r11,10788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10788, ctx.r11.u32);
	// lwz r11,10792(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10792);
	// stw r11,10792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10792, ctx.r11.u32);
	// lwz r11,10796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10796);
	// stw r11,10796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10796, ctx.r11.u32);
	// lwz r11,10800(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10800);
	// stw r11,10800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10800, ctx.r11.u32);
	// lwz r11,10804(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10804);
	// stw r11,10804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10804, ctx.r11.u32);
	// lwz r11,10808(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10808);
	// addi r4,r30,10828
	ctx.r4.s64 = ctx.r30.s64 + 10828;
	// addi r3,r31,10828
	ctx.r3.s64 = ctx.r31.s64 + 10828;
	// stw r11,10808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10808, ctx.r11.u32);
	// lwz r11,10812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10812);
	// stw r11,10812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10812, ctx.r11.u32);
	// lwz r11,10816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10816);
	// stw r11,10816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10816, ctx.r11.u32);
	// lwz r11,10820(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10820);
	// stw r11,10820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10820, ctx.r11.u32);
	// lwz r11,10824(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10824);
	// stw r11,10824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10824, ctx.r11.u32);
	// bl 0x82400a48
	ctx.lr = 0x825D7B7C;
	sub_82400A48(ctx, base);
	// lfs f0,10852(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10852);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10852(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10852, temp.u32);
	// addi r4,r30,10880
	ctx.r4.s64 = ctx.r30.s64 + 10880;
	// addi r3,r31,10880
	ctx.r3.s64 = ctx.r31.s64 + 10880;
	// lwz r11,10856(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10856);
	// stw r11,10856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10856, ctx.r11.u32);
	// lfs f0,10860(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10860);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10860(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10860, temp.u32);
	// lfs f0,10864(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10864(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10864, temp.u32);
	// lfs f0,10868(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10868(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10868, temp.u32);
	// lfs f0,10872(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10872);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10872(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10872, temp.u32);
	// lfs f0,10876(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10876);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10876(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10876, temp.u32);
	// bl 0x8284b058
	ctx.lr = 0x825D7BC0;
	sub_8284B058(ctx, base);
	// addi r4,r30,10904
	ctx.r4.s64 = ctx.r30.s64 + 10904;
	// addi r3,r31,10904
	ctx.r3.s64 = ctx.r31.s64 + 10904;
	// bl 0x8284b058
	ctx.lr = 0x825D7BCC;
	sub_8284B058(ctx, base);
	// lwz r11,10928(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10928);
	// stw r11,10928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10928, ctx.r11.u32);
	// lwz r11,10932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10932);
	// stw r11,10932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10932, ctx.r11.u32);
	// lwz r11,10936(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10936);
	// stw r11,10936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10936, ctx.r11.u32);
	// lwz r11,10940(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10940);
	// stw r11,10940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10940, ctx.r11.u32);
	// lwz r11,10944(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10944);
	// stw r11,10944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10944, ctx.r11.u32);
	// lwz r11,10948(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10948);
	// stw r11,10948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10948, ctx.r11.u32);
	// lwz r11,10952(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10952);
	// stw r11,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r11.u32);
	// lwz r11,10956(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10956);
	// stw r11,10956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10956, ctx.r11.u32);
	// lwz r11,10960(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10960);
	// stw r11,10960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10960, ctx.r11.u32);
	// lwz r11,10964(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10964);
	// stw r11,10964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10964, ctx.r11.u32);
	// lwz r11,10968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10968);
	// stw r11,10968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10968, ctx.r11.u32);
	// lwz r11,10972(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10972);
	// stw r11,10972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10972, ctx.r11.u32);
	// lfs f0,10976(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10976);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10976(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10976, temp.u32);
	// lfs f0,10980(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10980);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10980(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10980, temp.u32);
	// lwz r11,10984(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10984);
	// stw r11,10984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10984, ctx.r11.u32);
	// lwz r11,10988(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10988);
	// stw r11,10988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10988, ctx.r11.u32);
	// lfs f0,10992(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10992(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10992, temp.u32);
	// lfs f0,10996(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10996(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10996, temp.u32);
	// lfs f0,11000(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11000);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11000(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11000, temp.u32);
	// lfs f0,11004(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11004);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11004(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11004, temp.u32);
	// lwz r11,11008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// stw r11,11008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11008, ctx.r11.u32);
	// lwz r11,11012(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11012);
	// stw r11,11012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11012, ctx.r11.u32);
	// lwz r11,11016(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11016);
	// stw r11,11016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11016, ctx.r11.u32);
	// lwz r11,11020(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11020);
	// stw r11,11020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11020, ctx.r11.u32);
	// lwz r10,11024(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11024);
	// addi r11,r31,11184
	ctx.r11.s64 = ctx.r31.s64 + 11184;
	// addi r11,r31,11224
	ctx.r11.s64 = ctx.r31.s64 + 11224;
	// stw r10,11024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11024, ctx.r10.u32);
	// lwz r11,11028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11028);
	// stw r11,11028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11028, ctx.r11.u32);
	// lfs f0,11032(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11032);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11032(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11032, temp.u32);
	// lfs f0,11036(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11036);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11036(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11036, temp.u32);
	// lfs f0,11040(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11040);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11040(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11040, temp.u32);
	// lwz r11,11044(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11044);
	// stw r11,11044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11044, ctx.r11.u32);
	// lwz r11,11048(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11048);
	// stw r11,11048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11048, ctx.r11.u32);
	// lwz r11,11052(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11052);
	// stw r11,11052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11052, ctx.r11.u32);
	// lwz r11,11056(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11056);
	// stw r11,11056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11056, ctx.r11.u32);
	// lwz r11,11060(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11060);
	// stw r11,11060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11060, ctx.r11.u32);
	// lwz r11,11064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11064);
	// stw r11,11064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11064, ctx.r11.u32);
	// lwz r11,11068(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11068);
	// stw r11,11068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11068, ctx.r11.u32);
	// lwz r11,11072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11072);
	// stw r11,11072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11072, ctx.r11.u32);
	// lwz r11,11076(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11076);
	// stw r11,11076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11076, ctx.r11.u32);
	// lwz r11,11080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11080);
	// stw r11,11080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11080, ctx.r11.u32);
	// lwz r11,11084(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11084);
	// stw r11,11084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11084, ctx.r11.u32);
	// lfs f0,11088(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11088(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11088, temp.u32);
	// lfs f0,11092(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11092);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11092(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11092, temp.u32);
	// lwz r11,11096(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11096);
	// stw r11,11096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11096, ctx.r11.u32);
	// lwz r11,11100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11100);
	// stw r11,11100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11100, ctx.r11.u32);
	// lfs f0,11104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11104, temp.u32);
	// lfs f0,11108(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11108, temp.u32);
	// lwz r11,11112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11112);
	// stw r11,11112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11112, ctx.r11.u32);
	// lwz r11,11116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11116);
	// stw r11,11116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11116, ctx.r11.u32);
	// lfs f0,11120(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11120, temp.u32);
	// lwz r11,11124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11124);
	// stw r11,11124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11124, ctx.r11.u32);
	// lfs f0,11128(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11128, temp.u32);
	// lwz r11,11132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11132);
	// stw r11,11132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11132, ctx.r11.u32);
	// lwz r11,11136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11136);
	// stw r11,11136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11136, ctx.r11.u32);
	// lwz r11,11140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11140);
	// stw r11,11140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11140, ctx.r11.u32);
	// lwz r11,11144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11144);
	// stw r11,11144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11144, ctx.r11.u32);
	// lfs f0,11148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11148, temp.u32);
	// lwz r11,11152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11152);
	// stw r11,11152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11152, ctx.r11.u32);
	// lwz r11,11156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11156);
	// stw r11,11156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11156, ctx.r11.u32);
	// lwz r11,11160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11160);
	// stw r11,11160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11160, ctx.r11.u32);
	// lwz r11,11164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11164);
	// stw r11,11164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11164, ctx.r11.u32);
	// lwz r11,11168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11168);
	// stw r11,11168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11168, ctx.r11.u32);
	// lwz r11,11172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11172);
	// stw r11,11172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11172, ctx.r11.u32);
	// lwz r11,11176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11176);
	// stw r11,11176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11176, ctx.r11.u32);
	// addi r11,r31,11384
	ctx.r11.s64 = ctx.r31.s64 + 11384;
	// lwz r8,11180(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11180);
	// addi r9,r30,11384
	ctx.r9.s64 = ctx.r30.s64 + 11384;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r8,11180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11180, ctx.r8.u32);
	// ld r8,11184(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 11184);
	// std r8,11184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 11184, ctx.r8.u64);
	// ld r8,11192(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 11192);
	// std r8,11192(r31)
	PPC_STORE_U64(ctx.r31.u32 + 11192, ctx.r8.u64);
	// ld r8,11200(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 11200);
	// std r8,11200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 11200, ctx.r8.u64);
	// lwz r8,11208(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11208);
	// stw r8,11208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11208, ctx.r8.u32);
	// lwz r8,11212(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11212);
	// stw r8,11212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11212, ctx.r8.u32);
	// lwz r8,11216(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11216);
	// stw r8,11216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11216, ctx.r8.u32);
	// lwz r8,11220(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11220);
	// stw r8,11220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11220, ctx.r8.u32);
	// ld r8,11224(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 11224);
	// std r8,11224(r31)
	PPC_STORE_U64(ctx.r31.u32 + 11224, ctx.r8.u64);
	// ld r8,11232(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 11232);
	// std r8,11232(r31)
	PPC_STORE_U64(ctx.r31.u32 + 11232, ctx.r8.u64);
	// ld r8,11240(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 11240);
	// std r8,11240(r31)
	PPC_STORE_U64(ctx.r31.u32 + 11240, ctx.r8.u64);
	// lwz r8,11248(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11248);
	// stw r8,11248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11248, ctx.r8.u32);
	// lwz r8,11252(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11252);
	// stw r8,11252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11252, ctx.r8.u32);
	// lwz r8,11256(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11256);
	// stw r8,11256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11256, ctx.r8.u32);
	// lfs f0,11260(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11260(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11260, temp.u32);
	// lfs f0,11264(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11264);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11264(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11264, temp.u32);
	// lfs f0,11268(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11268);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11268(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11268, temp.u32);
	// lwz r8,11272(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11272);
	// stw r8,11272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11272, ctx.r8.u32);
	// lwz r8,11276(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11276);
	// stw r8,11276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11276, ctx.r8.u32);
	// lfs f0,11280(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11280);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11280(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11280, temp.u32);
	// lwz r8,11284(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11284);
	// stw r8,11284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11284, ctx.r8.u32);
	// lwz r8,11288(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11288);
	// stw r8,11288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11288, ctx.r8.u32);
	// lwz r8,11292(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11292);
	// stw r8,11292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11292, ctx.r8.u32);
	// lwz r8,11296(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11296);
	// stw r8,11296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11296, ctx.r8.u32);
	// lwz r8,11300(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11300);
	// stw r8,11300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11300, ctx.r8.u32);
	// lwz r8,11304(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11304);
	// stw r8,11304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11304, ctx.r8.u32);
	// lfs f0,11308(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11308);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11308(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11308, temp.u32);
	// lwz r8,11312(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11312);
	// stw r8,11312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11312, ctx.r8.u32);
	// lwz r8,11316(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11316);
	// stw r8,11316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11316, ctx.r8.u32);
	// lwz r8,11320(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11320);
	// stw r8,11320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11320, ctx.r8.u32);
	// lwz r8,11324(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11324);
	// stw r8,11324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11324, ctx.r8.u32);
	// lwz r8,11328(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11328);
	// stw r8,11328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11328, ctx.r8.u32);
	// lwz r8,11332(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11332);
	// stw r8,11332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11332, ctx.r8.u32);
	// lwz r8,11336(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11336);
	// stw r8,11336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11336, ctx.r8.u32);
	// lwz r8,11340(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11340);
	// stw r8,11340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11340, ctx.r8.u32);
	// ld r8,11344(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 11344);
	// std r8,11344(r31)
	PPC_STORE_U64(ctx.r31.u32 + 11344, ctx.r8.u64);
	// lwz r8,11352(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11352);
	// stw r8,11352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11352, ctx.r8.u32);
	// lwz r8,11356(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11356);
	// stw r8,11356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11356, ctx.r8.u32);
	// lwz r8,11360(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11360);
	// stw r8,11360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11360, ctx.r8.u32);
	// lwz r8,11364(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11364);
	// stw r8,11364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11364, ctx.r8.u32);
	// lwz r8,11368(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11368);
	// stw r8,11368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11368, ctx.r8.u32);
	// lfs f0,11372(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11372);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11372(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11372, temp.u32);
	// lwz r8,11376(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11376);
	// stw r8,11376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11376, ctx.r8.u32);
	// lwz r8,11380(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11380);
	// stw r8,11380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11380, ctx.r8.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825D7F3C:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825d7f3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825D7F3C;
	// lfs f0,11404(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11404);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r30,11432
	ctx.r4.s64 = ctx.r30.s64 + 11432;
	// stfs f0,11404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11404, temp.u32);
	// addi r3,r31,11432
	ctx.r3.s64 = ctx.r31.s64 + 11432;
	// lfs f0,11408(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11408);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11408(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11408, temp.u32);
	// lwz r11,11412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11412);
	// stw r11,11412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11412, ctx.r11.u32);
	// lwz r11,11416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11416);
	// stw r11,11416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11416, ctx.r11.u32);
	// lwz r11,11420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11420);
	// stw r11,11420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11420, ctx.r11.u32);
	// lwz r11,11424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11424);
	// stw r11,11424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11424, ctx.r11.u32);
	// lfs f0,11428(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11428);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11428(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11428, temp.u32);
	// bl 0x82873b58
	ctx.lr = 0x825D7F94;
	sub_82873B58(ctx, base);
	// lwz r11,11456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11456);
	// addi r4,r30,11640
	ctx.r4.s64 = ctx.r30.s64 + 11640;
	// addi r3,r31,11640
	ctx.r3.s64 = ctx.r31.s64 + 11640;
	// stw r11,11456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11456, ctx.r11.u32);
	// lwz r11,11460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11460);
	// stw r11,11460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11460, ctx.r11.u32);
	// lwz r11,11464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11464);
	// stw r11,11464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11464, ctx.r11.u32);
	// lwz r11,11468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11468);
	// stw r11,11468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11468, ctx.r11.u32);
	// lwz r11,11472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11472);
	// stw r11,11472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11472, ctx.r11.u32);
	// lwz r11,11476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11476);
	// stw r11,11476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11476, ctx.r11.u32);
	// lwz r11,11480(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11480);
	// stw r11,11480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11480, ctx.r11.u32);
	// lwz r11,11484(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11484);
	// stw r11,11484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11484, ctx.r11.u32);
	// lwz r11,11488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11488);
	// stw r11,11488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11488, ctx.r11.u32);
	// lfs f0,11492(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11492);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11492(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11492, temp.u32);
	// lwz r11,11496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11496);
	// stw r11,11496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11496, ctx.r11.u32);
	// lwz r11,11500(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11500);
	// stw r11,11500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11500, ctx.r11.u32);
	// lfs f0,11504(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11504);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11504(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11504, temp.u32);
	// lwz r11,11508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11508);
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// lwz r11,11512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11512);
	// stw r11,11512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11512, ctx.r11.u32);
	// lwz r11,11516(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11516);
	// stw r11,11516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11516, ctx.r11.u32);
	// lwz r11,11520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11520);
	// stw r11,11520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11520, ctx.r11.u32);
	// lwz r11,11524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11524);
	// stw r11,11524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11524, ctx.r11.u32);
	// lwz r11,11528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11528);
	// stw r11,11528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11528, ctx.r11.u32);
	// lwz r11,11532(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11532);
	// stw r11,11532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11532, ctx.r11.u32);
	// lwz r11,11536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11536);
	// stw r11,11536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11536, ctx.r11.u32);
	// lwz r11,11540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11540);
	// stw r11,11540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11540, ctx.r11.u32);
	// lwz r11,11544(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11544);
	// stw r11,11544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11544, ctx.r11.u32);
	// lwz r11,11548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11548);
	// stw r11,11548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11548, ctx.r11.u32);
	// lwz r11,11552(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11552);
	// stw r11,11552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11552, ctx.r11.u32);
	// lwz r11,11556(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11556);
	// stw r11,11556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11556, ctx.r11.u32);
	// lwz r11,11560(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11560);
	// stw r11,11560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11560, ctx.r11.u32);
	// lwz r11,11564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11564);
	// stw r11,11564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11564, ctx.r11.u32);
	// lwz r11,11568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11568);
	// stw r11,11568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11568, ctx.r11.u32);
	// lwz r11,11572(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11572);
	// stw r11,11572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11572, ctx.r11.u32);
	// lwz r11,11576(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11576);
	// stw r11,11576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11576, ctx.r11.u32);
	// lwz r11,11580(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11580);
	// stw r11,11580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11580, ctx.r11.u32);
	// lwz r11,11584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11584);
	// stw r11,11584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11584, ctx.r11.u32);
	// lwz r11,11588(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11588);
	// stw r11,11588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11588, ctx.r11.u32);
	// lwz r11,11592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11592);
	// stw r11,11592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11592, ctx.r11.u32);
	// lwz r11,11596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11596);
	// stw r11,11596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11596, ctx.r11.u32);
	// lfs f0,11600(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11600);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11600(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11600, temp.u32);
	// lfs f0,11604(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11604);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11604(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11604, temp.u32);
	// lfs f0,11608(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11608);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11608(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11608, temp.u32);
	// lwz r11,11612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11612);
	// stw r11,11612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11612, ctx.r11.u32);
	// lwz r11,11616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11616);
	// stw r11,11616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11616, ctx.r11.u32);
	// lwz r11,11620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11620);
	// stw r11,11620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11620, ctx.r11.u32);
	// lwz r11,11624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11624);
	// stw r11,11624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11624, ctx.r11.u32);
	// lwz r11,11628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11628);
	// stw r11,11628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11628, ctx.r11.u32);
	// lwz r11,11632(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11632);
	// stw r11,11632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11632, ctx.r11.u32);
	// lwz r11,11636(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11636);
	// stw r11,11636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11636, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x825D8110;
	sub_82873B58(ctx, base);
	// addi r4,r30,11664
	ctx.r4.s64 = ctx.r30.s64 + 11664;
	// addi r3,r31,11664
	ctx.r3.s64 = ctx.r31.s64 + 11664;
	// bl 0x82873b58
	ctx.lr = 0x825D811C;
	sub_82873B58(ctx, base);
	// lwz r10,11688(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11688);
	// addi r28,r31,11700
	ctx.r28.s64 = ctx.r31.s64 + 11700;
	// addi r25,r30,11700
	ctx.r25.s64 = ctx.r30.s64 + 11700;
	// li r11,36
	ctx.r11.s64 = 36;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// stw r10,11688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11688, ctx.r10.u32);
	// lwz r10,11692(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11692);
	// stw r10,11692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11692, ctx.r10.u32);
	// lwz r10,11696(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11696);
	// stw r10,11696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11696, ctx.r10.u32);
	// stw r11,11704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11704, ctx.r11.u32);
	// stw r29,11708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11708, ctx.r29.u32);
	// stw r29,11712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11712, ctx.r29.u32);
	// stw r29,11716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11716, ctx.r29.u32);
	// stw r29,11720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11720, ctx.r29.u32);
	// stw r29,11700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11700, ctx.r29.u32);
	// beq cr6,0x825d8204
	if (ctx.cr6.eq) goto loc_825D8204;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825d8204
	if (!ctx.cr6.gt) goto loc_825D8204;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d818c
	if (ctx.cr0.eq) goto loc_825D818C;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x825D818C;
	sub_82332C38(ctx, base);
loc_825D818C:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825d8204
	if (!ctx.cr6.gt) goto loc_825D8204;
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
loc_825D81A0:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x825D81B4;
	sub_82332D50(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mulli r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 * 36;
	// add. r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x825d81f0
	if (ctx.cr0.eq) goto loc_825D81F0;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// addi r3,r27,8
	ctx.r3.s64 = ctx.r27.s64 + 8;
	// add r26,r11,r24
	ctx.r26.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r4,r26,8
	ctx.r4.s64 = ctx.r26.s64 + 8;
	// lwzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lfs f0,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// bl 0x823339b8
	ctx.lr = 0x825D81E8;
	sub_823339B8(ctx, base);
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// stw r11,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r11.u32);
loc_825D81F0:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,36
	ctx.r24.s64 = ctx.r24.s64 + 36;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d81a0
	if (ctx.cr6.lt) goto loc_825D81A0;
loc_825D8204:
	// lwz r11,11724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11724);
	// addi r4,r30,11736
	ctx.r4.s64 = ctx.r30.s64 + 11736;
	// addi r3,r31,11736
	ctx.r3.s64 = ctx.r31.s64 + 11736;
	// stw r11,11724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11724, ctx.r11.u32);
	// lwz r11,11728(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11728);
	// stw r11,11728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11728, ctx.r11.u32);
	// lfs f0,11732(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11732);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11732(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11732, temp.u32);
	// bl 0x82873b58
	ctx.lr = 0x825D8228;
	sub_82873B58(ctx, base);
	// ld r11,11760(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 11760);
	// addi r3,r31,11768
	ctx.r3.s64 = ctx.r31.s64 + 11768;
	// addi r4,r30,11768
	ctx.r4.s64 = ctx.r30.s64 + 11768;
	// li r5,216
	ctx.r5.s64 = 216;
	// std r11,11760(r31)
	PPC_STORE_U64(ctx.r31.u32 + 11760, ctx.r11.u64);
	// bl 0x82a4ea80
	ctx.lr = 0x825D8240;
	sub_82A4EA80(ctx, base);
	// lwz r11,11984(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11984);
	// addi r4,r30,12020
	ctx.r4.s64 = ctx.r30.s64 + 12020;
	// addi r3,r31,12020
	ctx.r3.s64 = ctx.r31.s64 + 12020;
	// stw r11,11984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11984, ctx.r11.u32);
	// lwz r11,11988(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11988);
	// stw r11,11988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11988, ctx.r11.u32);
	// lfs f0,11992(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11992(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11992, temp.u32);
	// lwz r11,11996(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11996);
	// stw r11,11996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11996, ctx.r11.u32);
	// lfs f0,12000(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12000);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12000(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12000, temp.u32);
	// lfs f0,12004(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12004);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12004(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12004, temp.u32);
	// lfs f0,12008(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12008(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12008, temp.u32);
	// lfs f0,12012(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12012);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12012(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12012, temp.u32);
	// lfs f0,12016(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12016);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12016(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12016, temp.u32);
	// bl 0x82873b58
	ctx.lr = 0x825D8294;
	sub_82873B58(ctx, base);
	// addi r4,r30,12044
	ctx.r4.s64 = ctx.r30.s64 + 12044;
	// addi r3,r31,12044
	ctx.r3.s64 = ctx.r31.s64 + 12044;
	// bl 0x82873b58
	ctx.lr = 0x825D82A0;
	sub_82873B58(ctx, base);
	// addi r4,r30,12068
	ctx.r4.s64 = ctx.r30.s64 + 12068;
	// addi r3,r31,12068
	ctx.r3.s64 = ctx.r31.s64 + 12068;
	// bl 0x82873b58
	ctx.lr = 0x825D82AC;
	sub_82873B58(ctx, base);
	// addi r4,r30,12092
	ctx.r4.s64 = ctx.r30.s64 + 12092;
	// addi r3,r31,12092
	ctx.r3.s64 = ctx.r31.s64 + 12092;
	// bl 0x82873b58
	ctx.lr = 0x825D82B8;
	sub_82873B58(ctx, base);
	// addi r4,r30,12116
	ctx.r4.s64 = ctx.r30.s64 + 12116;
	// addi r3,r31,12116
	ctx.r3.s64 = ctx.r31.s64 + 12116;
	// bl 0x82873b58
	ctx.lr = 0x825D82C4;
	sub_82873B58(ctx, base);
	// addi r4,r30,12140
	ctx.r4.s64 = ctx.r30.s64 + 12140;
	// addi r3,r31,12140
	ctx.r3.s64 = ctx.r31.s64 + 12140;
	// bl 0x82873b58
	ctx.lr = 0x825D82D0;
	sub_82873B58(ctx, base);
	// addi r4,r30,12164
	ctx.r4.s64 = ctx.r30.s64 + 12164;
	// addi r3,r31,12164
	ctx.r3.s64 = ctx.r31.s64 + 12164;
	// bl 0x82873b58
	ctx.lr = 0x825D82DC;
	sub_82873B58(ctx, base);
	// addi r4,r30,12188
	ctx.r4.s64 = ctx.r30.s64 + 12188;
	// addi r3,r31,12188
	ctx.r3.s64 = ctx.r31.s64 + 12188;
	// bl 0x82873b58
	ctx.lr = 0x825D82E8;
	sub_82873B58(ctx, base);
	// addi r4,r30,12212
	ctx.r4.s64 = ctx.r30.s64 + 12212;
	// addi r3,r31,12212
	ctx.r3.s64 = ctx.r31.s64 + 12212;
	// bl 0x82873b58
	ctx.lr = 0x825D82F4;
	sub_82873B58(ctx, base);
	// addi r4,r30,12236
	ctx.r4.s64 = ctx.r30.s64 + 12236;
	// addi r3,r31,12236
	ctx.r3.s64 = ctx.r31.s64 + 12236;
	// bl 0x82873b58
	ctx.lr = 0x825D8300;
	sub_82873B58(ctx, base);
	// addi r4,r30,12260
	ctx.r4.s64 = ctx.r30.s64 + 12260;
	// addi r3,r31,12260
	ctx.r3.s64 = ctx.r31.s64 + 12260;
	// bl 0x82873b58
	ctx.lr = 0x825D830C;
	sub_82873B58(ctx, base);
	// addi r4,r30,12284
	ctx.r4.s64 = ctx.r30.s64 + 12284;
	// addi r3,r31,12284
	ctx.r3.s64 = ctx.r31.s64 + 12284;
	// bl 0x82873b58
	ctx.lr = 0x825D8318;
	sub_82873B58(ctx, base);
	// addi r4,r30,12308
	ctx.r4.s64 = ctx.r30.s64 + 12308;
	// addi r3,r31,12308
	ctx.r3.s64 = ctx.r31.s64 + 12308;
	// bl 0x82873b58
	ctx.lr = 0x825D8324;
	sub_82873B58(ctx, base);
	// lfs f0,12332(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12332);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12332(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12332, temp.u32);
	// addi r4,r30,12336
	ctx.r4.s64 = ctx.r30.s64 + 12336;
	// addi r3,r31,12336
	ctx.r3.s64 = ctx.r31.s64 + 12336;
	// bl 0x82873b58
	ctx.lr = 0x825D8338;
	sub_82873B58(ctx, base);
	// addi r4,r30,12360
	ctx.r4.s64 = ctx.r30.s64 + 12360;
	// addi r3,r31,12360
	ctx.r3.s64 = ctx.r31.s64 + 12360;
	// bl 0x82873b58
	ctx.lr = 0x825D8344;
	sub_82873B58(ctx, base);
	// addi r4,r30,12384
	ctx.r4.s64 = ctx.r30.s64 + 12384;
	// addi r3,r31,12384
	ctx.r3.s64 = ctx.r31.s64 + 12384;
	// bl 0x82873b58
	ctx.lr = 0x825D8350;
	sub_82873B58(ctx, base);
	// addi r4,r30,12408
	ctx.r4.s64 = ctx.r30.s64 + 12408;
	// addi r3,r31,12408
	ctx.r3.s64 = ctx.r31.s64 + 12408;
	// bl 0x82873b58
	ctx.lr = 0x825D835C;
	sub_82873B58(ctx, base);
	// addi r4,r30,12432
	ctx.r4.s64 = ctx.r30.s64 + 12432;
	// addi r3,r31,12432
	ctx.r3.s64 = ctx.r31.s64 + 12432;
	// bl 0x82873b58
	ctx.lr = 0x825D8368;
	sub_82873B58(ctx, base);
	// addi r4,r30,12456
	ctx.r4.s64 = ctx.r30.s64 + 12456;
	// addi r3,r31,12456
	ctx.r3.s64 = ctx.r31.s64 + 12456;
	// bl 0x82873b58
	ctx.lr = 0x825D8374;
	sub_82873B58(ctx, base);
	// addi r4,r30,12480
	ctx.r4.s64 = ctx.r30.s64 + 12480;
	// addi r3,r31,12480
	ctx.r3.s64 = ctx.r31.s64 + 12480;
	// bl 0x82873b58
	ctx.lr = 0x825D8380;
	sub_82873B58(ctx, base);
	// addi r11,r31,12536
	ctx.r11.s64 = ctx.r31.s64 + 12536;
	// addi r28,r31,12604
	ctx.r28.s64 = ctx.r31.s64 + 12604;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r27,r30,12604
	ctx.r27.s64 = ctx.r30.s64 + 12604;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// lwz r11,12504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12504);
	// stw r11,12504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12504, ctx.r11.u32);
	// lwz r11,12508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12508);
	// stw r11,12508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12508, ctx.r11.u32);
	// lwz r11,12512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12512);
	// stw r11,12512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12512, ctx.r11.u32);
	// lfs f0,12516(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12516);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12516, temp.u32);
	// lwz r11,12520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12520);
	// stw r11,12520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12520, ctx.r11.u32);
	// lwz r11,12524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12524);
	// stw r11,12524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12524, ctx.r11.u32);
	// lfs f0,12528(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12528);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12528(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12528, temp.u32);
	// lfs f0,12532(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12532);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12532(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12532, temp.u32);
	// ld r11,12536(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 12536);
	// std r11,12536(r31)
	PPC_STORE_U64(ctx.r31.u32 + 12536, ctx.r11.u64);
	// ld r11,12544(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 12544);
	// std r11,12544(r31)
	PPC_STORE_U64(ctx.r31.u32 + 12544, ctx.r11.u64);
	// ld r11,12552(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 12552);
	// std r11,12552(r31)
	PPC_STORE_U64(ctx.r31.u32 + 12552, ctx.r11.u64);
	// lwz r11,12560(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12560);
	// stw r11,12560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12560, ctx.r11.u32);
	// lwz r11,12564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12564);
	// stw r11,12564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12564, ctx.r11.u32);
	// lwz r11,12568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12568);
	// stw r11,12568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12568, ctx.r11.u32);
	// lfs f0,12572(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12572);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12572(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12572, temp.u32);
	// lfs f0,12576(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12576);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12576(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12576, temp.u32);
	// lwz r11,12580(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12580);
	// stw r11,12580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12580, ctx.r11.u32);
	// lwz r11,12584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12584);
	// stw r11,12584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12584, ctx.r11.u32);
	// lwz r11,12588(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12588);
	// stw r11,12588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12588, ctx.r11.u32);
	// lwz r11,12592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12592);
	// stw r11,12592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12592, ctx.r11.u32);
	// lfs f0,12596(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12596);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12596(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12596, temp.u32);
	// lfs f0,12600(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12600);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12600(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12600, temp.u32);
	// stw r10,12608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12608, ctx.r10.u32);
	// stw r29,12612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12612, ctx.r29.u32);
	// stw r29,12616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12616, ctx.r29.u32);
	// stw r29,12620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12620, ctx.r29.u32);
	// stw r29,12624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12624, ctx.r29.u32);
	// stw r29,12604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12604, ctx.r29.u32);
	// beq cr6,0x825d84a8
	if (ctx.cr6.eq) goto loc_825D84A8;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825d84a8
	if (!ctx.cr6.gt) goto loc_825D84A8;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d848c
	if (ctx.cr0.eq) goto loc_825D848C;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x825D848C;
	sub_82332C38(ctx, base);
loc_825D848C:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x825D84A0;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
loc_825D84A8:
	// stw r21,12628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12628, ctx.r21.u32);
	// addi r11,r31,12628
	ctx.r11.s64 = ctx.r31.s64 + 12628;
	// addi r4,r30,12632
	ctx.r4.s64 = ctx.r30.s64 + 12632;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x825D84C0;
	sub_82A4EA80(ctx, base);
	// lwz r11,12660(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12660);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12660, ctx.r11.u32);
	// lwz r11,12664(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12664);
	// stw r11,12664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12664, ctx.r11.u32);
	// lfs f0,12668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12668);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12668(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12668, temp.u32);
	// lwz r11,12672(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12672);
	// stw r11,12672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12672, ctx.r11.u32);
	// lwz r11,12676(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12676);
	// stw r11,12676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12676, ctx.r11.u32);
	// lwz r11,12680(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12680);
	// stw r11,12680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12680, ctx.r11.u32);
	// lwz r11,12684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12684);
	// stw r11,12684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12684, ctx.r11.u32);
	// lwz r11,12688(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12688);
	// stw r11,12688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12688, ctx.r11.u32);
	// lfs f0,12692(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12692);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12692(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12692, temp.u32);
	// lwz r11,12696(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12696);
	// stw r11,12696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12696, ctx.r11.u32);
	// lfs f0,12700(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12700);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12700(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12700, temp.u32);
	// lwz r11,12704(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12704);
	// stw r11,12704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12704, ctx.r11.u32);
	// lwz r11,12708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12708);
	// stw r11,12708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12708, ctx.r11.u32);
	// lwz r11,12712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12712);
	// stw r11,12712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12712, ctx.r11.u32);
	// lwz r11,12716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12716);
	// stw r11,12716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12716, ctx.r11.u32);
	// lwz r11,12720(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12720);
	// stw r11,12720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12720, ctx.r11.u32);
	// lwz r11,12724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12724);
	// stw r11,12724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12724, ctx.r11.u32);
	// lwz r11,12728(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12728);
	// stw r11,12728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12728, ctx.r11.u32);
	// lwz r11,12732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12732);
	// stw r11,12732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12732, ctx.r11.u32);
	// lwz r11,12736(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12736);
	// stw r11,12736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12736, ctx.r11.u32);
	// lwz r11,12740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12740);
	// stw r11,12740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12740, ctx.r11.u32);
	// lwz r11,12744(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12744);
	// stw r11,12744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12744, ctx.r11.u32);
	// lwz r11,12748(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12748);
	// stw r11,12748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12748, ctx.r11.u32);
	// lwz r11,12752(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12752);
	// stw r11,12752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12752, ctx.r11.u32);
	// lwz r11,12756(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12756);
	// stw r11,12756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12756, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D8598"))) PPC_WEAK_FUNC(sub_825D8598);
PPC_FUNC_IMPL(__imp__sub_825D8598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r11,4464
	ctx.r3.s64 = ctx.r11.s64 + 4464;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D85A8"))) PPC_WEAK_FUNC(sub_825D85A8);
PPC_FUNC_IMPL(__imp__sub_825D85A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825d85e0
	if (ctx.cr6.eq) goto loc_825D85E0;
	// bl 0x82610438
	ctx.lr = 0x825D85D0;
	sub_82610438(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d85e0
	if (!ctx.cr6.eq) goto loc_825D85E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d85ec
	goto loc_825D85EC;
loc_825D85E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233c178
	ctx.lr = 0x825D85EC;
	sub_8233C178(ctx, base);
loc_825D85EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8608"))) PPC_WEAK_FUNC(sub_825D8608);
PPC_FUNC_IMPL(__imp__sub_825D8608) {
	PPC_FUNC_PROLOGUE();
	// b 0x82610438
	sub_82610438(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D8610"))) PPC_WEAK_FUNC(sub_825D8610);
PPC_FUNC_IMPL(__imp__sub_825D8610) {
	PPC_FUNC_PROLOGUE();
	// b 0x82393908
	sub_82393908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D8618"))) PPC_WEAK_FUNC(sub_825D8618);
PPC_FUNC_IMPL(__imp__sub_825D8618) {
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
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82833108
	ctx.lr = 0x825D8634;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d864c
	if (ctx.cr0.eq) goto loc_825D864C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x825d86d8
	ctx.lr = 0x825D8648;
	sub_825D86D8(ctx, base);
	// b 0x825d8650
	goto loc_825D8650;
loc_825D864C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D8650:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d8668
	if (ctx.cr6.eq) goto loc_825D8668;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_825D8668:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8680"))) PPC_WEAK_FUNC(sub_825D8680);
PPC_FUNC_IMPL(__imp__sub_825D8680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82610438
	ctx.lr = 0x825D86A0;
	sub_82610438(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d86b0
	if (!ctx.cr6.eq) goto loc_825D86B0;
	// addi r3,r30,-32
	ctx.r3.s64 = ctx.r30.s64 + -32;
	// b 0x825d86bc
	goto loc_825D86BC;
loc_825D86B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233c240
	ctx.lr = 0x825D86BC;
	sub_8233C240(ctx, base);
loc_825D86BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D86D8"))) PPC_WEAK_FUNC(sub_825D86D8);
PPC_FUNC_IMPL(__imp__sub_825D86D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-25920
	ctx.r11.s64 = ctx.r11.s64 + -25920;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// bne cr6,0x825d8720
	if (!ctx.cr6.eq) goto loc_825D8720;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825d8730
	goto loc_825D8730;
loc_825D8720:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_825D8730:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x824006f0
	ctx.lr = 0x825D8738;
	sub_824006F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825d8748
	if (!ctx.cr6.eq) goto loc_825D8748;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825d8758
	goto loc_825D8758;
loc_825D8748:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_825D8758:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82400638
	ctx.lr = 0x825D8764;
	sub_82400638(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233bdd8
	ctx.lr = 0x825D8774;
	sub_8233BDD8(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-26368
	ctx.r11.s64 = ctx.r11.s64 + -26368;
	// addi r10,r10,-32512
	ctx.r10.s64 = ctx.r10.s64 + -32512;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r8,r11,-32316
	ctx.r8.s64 = ctx.r11.s64 + -32316;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r9,r9,-25368
	ctx.r9.s64 = ctx.r9.s64 + -25368;
	// addi r6,r11,-26368
	ctx.r6.s64 = ctx.r11.s64 + -26368;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r7,-32225
	ctx.r7.s64 = -2111897600;
	// addi r4,r11,-25972
	ctx.r4.s64 = ctx.r11.s64 + -25972;
	// addi r7,r7,-26168
	ctx.r7.s64 = ctx.r7.s64 + -26168;
	// lis r5,-32225
	ctx.r5.s64 = -2111897600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r5,-25368
	ctx.r5.s64 = ctx.r5.s64 + -25368;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8838"))) PPC_WEAK_FUNC(sub_825D8838);
PPC_FUNC_IMPL(__imp__sub_825D8838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823e9e88
	ctx.lr = 0x825D8858;
	sub_823E9E88(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d8868
	if (ctx.cr0.eq) goto loc_825D8868;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// bl 0x82332db8
	ctx.lr = 0x825D8868;
	sub_82332DB8(ctx, base);
loc_825D8868:
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

__attribute__((alias("__imp__sub_825D8888"))) PPC_WEAK_FUNC(sub_825D8888);
PPC_FUNC_IMPL(__imp__sub_825D8888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r11,4504
	ctx.r3.s64 = ctx.r11.s64 + 4504;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8898"))) PPC_WEAK_FUNC(sub_825D8898);
PPC_FUNC_IMPL(__imp__sub_825D8898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825d88d0
	if (ctx.cr6.eq) goto loc_825D88D0;
	// bl 0x82610590
	ctx.lr = 0x825D88C0;
	sub_82610590(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825d88d0
	if (!ctx.cr6.eq) goto loc_825D88D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d88e8
	goto loc_825D88E8;
loc_825D88D0:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8233abf8
	ctx.lr = 0x825D88E8;
	sub_8233ABF8(ctx, base);
loc_825D88E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8900"))) PPC_WEAK_FUNC(sub_825D8900);
PPC_FUNC_IMPL(__imp__sub_825D8900) {
	PPC_FUNC_PROLOGUE();
	// b 0x82610590
	sub_82610590(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D8908"))) PPC_WEAK_FUNC(sub_825D8908);
PPC_FUNC_IMPL(__imp__sub_825D8908) {
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
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x82833108
	ctx.lr = 0x825D8924;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d893c
	if (ctx.cr0.eq) goto loc_825D893C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// bl 0x825d89c8
	ctx.lr = 0x825D8938;
	sub_825D89C8(ctx, base);
	// b 0x825d8940
	goto loc_825D8940;
loc_825D893C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D8940:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d8954
	if (ctx.cr6.eq) goto loc_825D8954;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_825D8954:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8968"))) PPC_WEAK_FUNC(sub_825D8968);
PPC_FUNC_IMPL(__imp__sub_825D8968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82610590
	ctx.lr = 0x825D8988;
	sub_82610590(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825d8998
	if (!ctx.cr6.eq) goto loc_825D8998;
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// b 0x825d89b0
	goto loc_825D89B0;
loc_825D8998:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8233acc8
	ctx.lr = 0x825D89B0;
	sub_8233ACC8(ctx, base);
loc_825D89B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D89C8"))) PPC_WEAK_FUNC(sub_825D89C8);
PPC_FUNC_IMPL(__imp__sub_825D89C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r11,-24048
	ctx.r11.s64 = ctx.r11.s64 + -24048;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r9,r9,-3040
	ctx.r9.s64 = ctx.r9.s64 + -3040;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// bne cr6,0x825d8a1c
	if (!ctx.cr6.eq) goto loc_825D8A1C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825d8a28
	goto loc_825D8A28;
loc_825D8A1C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_825D8A28:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x824006f0
	ctx.lr = 0x825D8A30;
	sub_824006F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825d8a40
	if (!ctx.cr6.eq) goto loc_825D8A40;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825d8a4c
	goto loc_825D8A4C;
loc_825D8A40:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_825D8A4C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82400638
	ctx.lr = 0x825D8A58;
	sub_82400638(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825d8a68
	if (!ctx.cr6.eq) goto loc_825D8A68;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825d8a74
	goto loc_825D8A74;
loc_825D8A68:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_825D8A74:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8233b258
	ctx.lr = 0x825D8A80;
	sub_8233B258(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r11,r11,-25888
	ctx.r11.s64 = ctx.r11.s64 + -25888;
	// addi r10,r10,-25692
	ctx.r10.s64 = ctx.r10.s64 + -25692;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r9,r9,-23760
	ctx.r9.s64 = ctx.r9.s64 + -23760;
	// addi r8,r8,-31216
	ctx.r8.s64 = ctx.r8.s64 + -31216;
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8AF0"))) PPC_WEAK_FUNC(sub_825D8AF0);
PPC_FUNC_IMPL(__imp__sub_825D8AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r11,4536
	ctx.r3.s64 = ctx.r11.s64 + 4536;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8B00"))) PPC_WEAK_FUNC(sub_825D8B00);
PPC_FUNC_IMPL(__imp__sub_825D8B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825d8b38
	if (ctx.cr6.eq) goto loc_825D8B38;
	// bl 0x826106f0
	ctx.lr = 0x825D8B28;
	sub_826106F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d8b38
	if (!ctx.cr6.eq) goto loc_825D8B38;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d8b44
	goto loc_825D8B44;
loc_825D8B38:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233bf28
	ctx.lr = 0x825D8B44;
	sub_8233BF28(ctx, base);
loc_825D8B44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8B60"))) PPC_WEAK_FUNC(sub_825D8B60);
PPC_FUNC_IMPL(__imp__sub_825D8B60) {
	PPC_FUNC_PROLOGUE();
	// b 0x826106f0
	sub_826106F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D8B68"))) PPC_WEAK_FUNC(sub_825D8B68);
PPC_FUNC_IMPL(__imp__sub_825D8B68) {
	PPC_FUNC_PROLOGUE();
	// b 0x823937a8
	sub_823937A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D8B70"))) PPC_WEAK_FUNC(sub_825D8B70);
PPC_FUNC_IMPL(__imp__sub_825D8B70) {
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
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82833108
	ctx.lr = 0x825D8B8C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d8ba4
	if (ctx.cr0.eq) goto loc_825D8BA4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x825d8c30
	ctx.lr = 0x825D8BA0;
	sub_825D8C30(ctx, base);
	// b 0x825d8ba8
	goto loc_825D8BA8;
loc_825D8BA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D8BA8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d8bc0
	if (ctx.cr6.eq) goto loc_825D8BC0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_825D8BC0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8BD8"))) PPC_WEAK_FUNC(sub_825D8BD8);
PPC_FUNC_IMPL(__imp__sub_825D8BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826106f0
	ctx.lr = 0x825D8BF8;
	sub_826106F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d8c08
	if (!ctx.cr6.eq) goto loc_825D8C08;
	// addi r3,r30,-32
	ctx.r3.s64 = ctx.r30.s64 + -32;
	// b 0x825d8c14
	goto loc_825D8C14;
loc_825D8C08:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233bff8
	ctx.lr = 0x825D8C14;
	sub_8233BFF8(ctx, base);
loc_825D8C14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8C30"))) PPC_WEAK_FUNC(sub_825D8C30);
PPC_FUNC_IMPL(__imp__sub_825D8C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-25920
	ctx.r11.s64 = ctx.r11.s64 + -25920;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// bne cr6,0x825d8c78
	if (!ctx.cr6.eq) goto loc_825D8C78;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825d8c88
	goto loc_825D8C88;
loc_825D8C78:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_825D8C88:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x824006f0
	ctx.lr = 0x825D8C90;
	sub_824006F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825d8ca0
	if (!ctx.cr6.eq) goto loc_825D8CA0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825d8cb0
	goto loc_825D8CB0;
loc_825D8CA0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_825D8CB0:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82400638
	ctx.lr = 0x825D8CBC;
	sub_82400638(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233bdd8
	ctx.lr = 0x825D8CCC;
	sub_8233BDD8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,32552
	ctx.r11.s64 = ctx.r11.s64 + 32552;
	// addi r10,r10,32752
	ctx.r10.s64 = ctx.r10.s64 + 32752;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r8,r11,-32588
	ctx.r8.s64 = ctx.r11.s64 + -32588;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r9,r9,-25368
	ctx.r9.s64 = ctx.r9.s64 + -25368;
	// addi r6,r11,32552
	ctx.r6.s64 = ctx.r11.s64 + 32552;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r7,-32225
	ctx.r7.s64 = -2111897600;
	// addi r4,r11,-25420
	ctx.r4.s64 = ctx.r11.s64 + -25420;
	// addi r7,r7,-25616
	ctx.r7.s64 = ctx.r7.s64 + -25616;
	// lis r5,-32225
	ctx.r5.s64 = -2111897600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r5,-25368
	ctx.r5.s64 = ctx.r5.s64 + -25368;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8D90"))) PPC_WEAK_FUNC(sub_825D8D90);
PPC_FUNC_IMPL(__imp__sub_825D8D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r11,4576
	ctx.r3.s64 = ctx.r11.s64 + 4576;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8DA0"))) PPC_WEAK_FUNC(sub_825D8DA0);
PPC_FUNC_IMPL(__imp__sub_825D8DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825d8dd8
	if (ctx.cr6.eq) goto loc_825D8DD8;
	// bl 0x82610850
	ctx.lr = 0x825D8DC8;
	sub_82610850(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d8dd8
	if (!ctx.cr6.eq) goto loc_825D8DD8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d8de4
	goto loc_825D8DE4;
loc_825D8DD8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233bf28
	ctx.lr = 0x825D8DE4;
	sub_8233BF28(ctx, base);
loc_825D8DE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8E00"))) PPC_WEAK_FUNC(sub_825D8E00);
PPC_FUNC_IMPL(__imp__sub_825D8E00) {
	PPC_FUNC_PROLOGUE();
	// b 0x82610850
	sub_82610850(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825D8E08"))) PPC_WEAK_FUNC(sub_825D8E08);
PPC_FUNC_IMPL(__imp__sub_825D8E08) {
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
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82833108
	ctx.lr = 0x825D8E24;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d8e3c
	if (ctx.cr0.eq) goto loc_825D8E3C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x825d8ec8
	ctx.lr = 0x825D8E38;
	sub_825D8EC8(ctx, base);
	// b 0x825d8e40
	goto loc_825D8E40;
loc_825D8E3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D8E40:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d8e58
	if (ctx.cr6.eq) goto loc_825D8E58;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_825D8E58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8E70"))) PPC_WEAK_FUNC(sub_825D8E70);
PPC_FUNC_IMPL(__imp__sub_825D8E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82610850
	ctx.lr = 0x825D8E90;
	sub_82610850(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d8ea0
	if (!ctx.cr6.eq) goto loc_825D8EA0;
	// addi r3,r30,-32
	ctx.r3.s64 = ctx.r30.s64 + -32;
	// b 0x825d8eac
	goto loc_825D8EAC;
loc_825D8EA0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233bff8
	ctx.lr = 0x825D8EAC;
	sub_8233BFF8(ctx, base);
loc_825D8EAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D8EC8"))) PPC_WEAK_FUNC(sub_825D8EC8);
PPC_FUNC_IMPL(__imp__sub_825D8EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-25920
	ctx.r11.s64 = ctx.r11.s64 + -25920;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// bne cr6,0x825d8f10
	if (!ctx.cr6.eq) goto loc_825D8F10;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825d8f20
	goto loc_825D8F20;
loc_825D8F10:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_825D8F20:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x824006f0
	ctx.lr = 0x825D8F28;
	sub_824006F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825d8f38
	if (!ctx.cr6.eq) goto loc_825D8F38;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825d8f48
	goto loc_825D8F48;
loc_825D8F38:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_825D8F48:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82400638
	ctx.lr = 0x825D8F54;
	sub_82400638(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233bdd8
	ctx.lr = 0x825D8F64;
	sub_8233BDD8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,32552
	ctx.r11.s64 = ctx.r11.s64 + 32552;
	// addi r10,r10,32752
	ctx.r10.s64 = ctx.r10.s64 + 32752;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r8,r11,-32588
	ctx.r8.s64 = ctx.r11.s64 + -32588;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r9,r9,-25368
	ctx.r9.s64 = ctx.r9.s64 + -25368;
	// addi r6,r11,32552
	ctx.r6.s64 = ctx.r11.s64 + 32552;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r7,-32225
	ctx.r7.s64 = -2111897600;
	// addi r4,r11,-25124
	ctx.r4.s64 = ctx.r11.s64 + -25124;
	// addi r7,r7,-25320
	ctx.r7.s64 = ctx.r7.s64 + -25320;
	// lis r5,-32225
	ctx.r5.s64 = -2111897600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r5,-25368
	ctx.r5.s64 = ctx.r5.s64 + -25368;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D9028"))) PPC_WEAK_FUNC(sub_825D9028);
PPC_FUNC_IMPL(__imp__sub_825D9028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r11,4616
	ctx.r3.s64 = ctx.r11.s64 + 4616;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825D9038"))) PPC_WEAK_FUNC(sub_825D9038);
PPC_FUNC_IMPL(__imp__sub_825D9038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825d9070
	if (ctx.cr6.eq) goto loc_825D9070;
	// bl 0x826109b0
	ctx.lr = 0x825D9060;
	sub_826109B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825d9070
	if (!ctx.cr6.eq) goto loc_825D9070;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d907c
	goto loc_825D907C;
loc_825D9070:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233d668
	ctx.lr = 0x825D907C;
	sub_8233D668(ctx, base);
loc_825D907C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

