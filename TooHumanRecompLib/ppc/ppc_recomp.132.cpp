#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82861760"))) PPC_WEAK_FUNC(sub_82861760);
PPC_FUNC_IMPL(__imp__sub_82861760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-920
	ctx.r3.s64 = ctx.r11.s64 + -920;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82861770"))) PPC_WEAK_FUNC(sub_82861770);
PPC_FUNC_IMPL(__imp__sub_82861770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x828617a8
	if (ctx.cr6.eq) goto loc_828617A8;
	// bl 0x82877980
	ctx.lr = 0x82861798;
	sub_82877980(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828617a8
	if (!ctx.cr6.eq) goto loc_828617A8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828617b4
	goto loc_828617B4;
loc_828617A8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246cb90
	ctx.lr = 0x828617B4;
	sub_8246CB90(ctx, base);
loc_828617B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828617D0"))) PPC_WEAK_FUNC(sub_828617D0);
PPC_FUNC_IMPL(__imp__sub_828617D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82877980
	sub_82877980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828617D8"))) PPC_WEAK_FUNC(sub_828617D8);
PPC_FUNC_IMPL(__imp__sub_828617D8) {
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
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82833108
	ctx.lr = 0x828617F8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82861870
	if (ctx.cr0.eq) goto loc_82861870;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246cc88
	ctx.lr = 0x8286180C;
	sub_8246CC88(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,16616
	ctx.r11.s64 = ctx.r11.s64 + 16616;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// lfs f0,220(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// lfs f0,224(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,224(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// lfs f0,228(r30)
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
	// b 0x82861874
	goto loc_82861874;
loc_82861870:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82861874:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82861890"))) PPC_WEAK_FUNC(sub_82861890);
PPC_FUNC_IMPL(__imp__sub_82861890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82877980
	ctx.lr = 0x828618B0;
	sub_82877980(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828618c0
	if (!ctx.cr6.eq) goto loc_828618C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828618d8
	goto loc_828618D8;
loc_828618C0:
	// bl 0x8247dd60
	ctx.lr = 0x828618C4;
	sub_8247DD60(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828618d8
	if (ctx.cr6.eq) goto loc_828618D8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8246c378
	ctx.lr = 0x828618D8;
	sub_8246C378(ctx, base);
loc_828618D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828618F0"))) PPC_WEAK_FUNC(sub_828618F0);
PPC_FUNC_IMPL(__imp__sub_828618F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-884
	ctx.r3.s64 = ctx.r11.s64 + -884;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82861900"))) PPC_WEAK_FUNC(sub_82861900);
PPC_FUNC_IMPL(__imp__sub_82861900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82861938
	if (ctx.cr6.eq) goto loc_82861938;
	// bl 0x82877ae0
	ctx.lr = 0x82861928;
	sub_82877AE0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82861938
	if (!ctx.cr6.eq) goto loc_82861938;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82861944
	goto loc_82861944;
loc_82861938:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246cb90
	ctx.lr = 0x82861944;
	sub_8246CB90(ctx, base);
loc_82861944:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82861960"))) PPC_WEAK_FUNC(sub_82861960);
PPC_FUNC_IMPL(__imp__sub_82861960) {
	PPC_FUNC_PROLOGUE();
	// b 0x82877ae0
	sub_82877AE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82861968"))) PPC_WEAK_FUNC(sub_82861968);
PPC_FUNC_IMPL(__imp__sub_82861968) {
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
	// li r3,228
	ctx.r3.s64 = 228;
	// bl 0x82833108
	ctx.lr = 0x82861988;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828619c8
	if (ctx.cr0.eq) goto loc_828619C8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246cc88
	ctx.lr = 0x8286199C;
	sub_8246CC88(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,16736
	ctx.r11.s64 = ctx.r11.s64 + 16736;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,216(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,216(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// lfs f0,220(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// b 0x828619cc
	goto loc_828619CC;
loc_828619C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828619CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828619E8"))) PPC_WEAK_FUNC(sub_828619E8);
PPC_FUNC_IMPL(__imp__sub_828619E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82877ae0
	ctx.lr = 0x82861A08;
	sub_82877AE0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82861a18
	if (!ctx.cr6.eq) goto loc_82861A18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82861a30
	goto loc_82861A30;
loc_82861A18:
	// bl 0x8247dd60
	ctx.lr = 0x82861A1C;
	sub_8247DD60(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82861a30
	if (ctx.cr6.eq) goto loc_82861A30;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8246c378
	ctx.lr = 0x82861A30;
	sub_8246C378(ctx, base);
loc_82861A30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82861A48"))) PPC_WEAK_FUNC(sub_82861A48);
PPC_FUNC_IMPL(__imp__sub_82861A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-852
	ctx.r3.s64 = ctx.r11.s64 + -852;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82861A58"))) PPC_WEAK_FUNC(sub_82861A58);
PPC_FUNC_IMPL(__imp__sub_82861A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82861a90
	if (ctx.cr6.eq) goto loc_82861A90;
	// bl 0x82877c40
	ctx.lr = 0x82861A80;
	sub_82877C40(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82861a90
	if (!ctx.cr6.eq) goto loc_82861A90;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82861a9c
	goto loc_82861A9C;
loc_82861A90:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246cb90
	ctx.lr = 0x82861A9C;
	sub_8246CB90(ctx, base);
loc_82861A9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82861AB8"))) PPC_WEAK_FUNC(sub_82861AB8);
PPC_FUNC_IMPL(__imp__sub_82861AB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82877c40
	sub_82877C40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82861AC0"))) PPC_WEAK_FUNC(sub_82861AC0);
PPC_FUNC_IMPL(__imp__sub_82861AC0) {
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
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82833108
	ctx.lr = 0x82861AE0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82861b60
	if (ctx.cr0.eq) goto loc_82861B60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246cc88
	ctx.lr = 0x82861AF4;
	sub_8246CC88(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,16856
	ctx.r11.s64 = ctx.r11.s64 + 16856;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// lwz r11,236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// lwz r11,244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// lfs f0,248(r30)
	ctx.fpscr.disableFlushMode();
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
	// b 0x82861b64
	goto loc_82861B64;
loc_82861B60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82861B64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82861B80"))) PPC_WEAK_FUNC(sub_82861B80);
PPC_FUNC_IMPL(__imp__sub_82861B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82877c40
	ctx.lr = 0x82861BA0;
	sub_82877C40(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82861bb0
	if (!ctx.cr6.eq) goto loc_82861BB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82861bc8
	goto loc_82861BC8;
loc_82861BB0:
	// bl 0x8247dd60
	ctx.lr = 0x82861BB4;
	sub_8247DD60(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82861bc8
	if (ctx.cr6.eq) goto loc_82861BC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8246c378
	ctx.lr = 0x82861BC8;
	sub_8246C378(ctx, base);
loc_82861BC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82861BE0"))) PPC_WEAK_FUNC(sub_82861BE0);
PPC_FUNC_IMPL(__imp__sub_82861BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-824
	ctx.r3.s64 = ctx.r11.s64 + -824;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82861BF0"))) PPC_WEAK_FUNC(sub_82861BF0);
PPC_FUNC_IMPL(__imp__sub_82861BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82861c28
	if (ctx.cr6.eq) goto loc_82861C28;
	// bl 0x82877da0
	ctx.lr = 0x82861C18;
	sub_82877DA0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82861c28
	if (!ctx.cr6.eq) goto loc_82861C28;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82861c34
	goto loc_82861C34;
loc_82861C28:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246c2d0
	ctx.lr = 0x82861C34;
	sub_8246C2D0(ctx, base);
loc_82861C34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82861C50"))) PPC_WEAK_FUNC(sub_82861C50);
PPC_FUNC_IMPL(__imp__sub_82861C50) {
	PPC_FUNC_PROLOGUE();
	// b 0x82877da0
	sub_82877DA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82861C58"))) PPC_WEAK_FUNC(sub_82861C58);
PPC_FUNC_IMPL(__imp__sub_82861C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,156
	ctx.r3.s64 = 156;
	// bl 0x82833108
	ctx.lr = 0x82861C78;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82861ca8
	if (ctx.cr0.eq) goto loc_82861CA8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246c440
	ctx.lr = 0x82861C8C;
	sub_8246C440(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,16976
	ctx.r11.s64 = ctx.r11.s64 + 16976;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// b 0x82861cac
	goto loc_82861CAC;
loc_82861CA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82861CAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82861CC8"))) PPC_WEAK_FUNC(sub_82861CC8);
PPC_FUNC_IMPL(__imp__sub_82861CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82877da0
	ctx.lr = 0x82861CE8;
	sub_82877DA0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82861cfc
	if (ctx.cr6.eq) goto loc_82861CFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8246c378
	ctx.lr = 0x82861CFC;
	sub_8246C378(ctx, base);
loc_82861CFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82861D18"))) PPC_WEAK_FUNC(sub_82861D18);
PPC_FUNC_IMPL(__imp__sub_82861D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-808
	ctx.r3.s64 = ctx.r11.s64 + -808;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82861D28"))) PPC_WEAK_FUNC(sub_82861D28);
PPC_FUNC_IMPL(__imp__sub_82861D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82861d60
	if (ctx.cr6.eq) goto loc_82861D60;
	// bl 0x82877f00
	ctx.lr = 0x82861D50;
	sub_82877F00(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82861d60
	if (!ctx.cr6.eq) goto loc_82861D60;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82861d6c
	goto loc_82861D6C;
loc_82861D60:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246c2d0
	ctx.lr = 0x82861D6C;
	sub_8246C2D0(ctx, base);
loc_82861D6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82861D88"))) PPC_WEAK_FUNC(sub_82861D88);
PPC_FUNC_IMPL(__imp__sub_82861D88) {
	PPC_FUNC_PROLOGUE();
	// b 0x82877f00
	sub_82877F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82861D90"))) PPC_WEAK_FUNC(sub_82861D90);
PPC_FUNC_IMPL(__imp__sub_82861D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,156
	ctx.r3.s64 = 156;
	// bl 0x82833108
	ctx.lr = 0x82861DB0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82861de0
	if (ctx.cr0.eq) goto loc_82861DE0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246c440
	ctx.lr = 0x82861DC4;
	sub_8246C440(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,17096
	ctx.r11.s64 = ctx.r11.s64 + 17096;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// b 0x82861de4
	goto loc_82861DE4;
loc_82861DE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82861DE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82861E00"))) PPC_WEAK_FUNC(sub_82861E00);
PPC_FUNC_IMPL(__imp__sub_82861E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82877f00
	ctx.lr = 0x82861E20;
	sub_82877F00(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82861e34
	if (ctx.cr6.eq) goto loc_82861E34;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8246c378
	ctx.lr = 0x82861E34;
	sub_8246C378(ctx, base);
loc_82861E34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82861E50"))) PPC_WEAK_FUNC(sub_82861E50);
PPC_FUNC_IMPL(__imp__sub_82861E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-792
	ctx.r3.s64 = ctx.r11.s64 + -792;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82861E60"))) PPC_WEAK_FUNC(sub_82861E60);
PPC_FUNC_IMPL(__imp__sub_82861E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82861e98
	if (ctx.cr6.eq) goto loc_82861E98;
	// bl 0x82878060
	ctx.lr = 0x82861E88;
	sub_82878060(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82861e98
	if (!ctx.cr6.eq) goto loc_82861E98;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82861ea4
	goto loc_82861EA4;
loc_82861E98:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246c2d0
	ctx.lr = 0x82861EA4;
	sub_8246C2D0(ctx, base);
loc_82861EA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82861EC0"))) PPC_WEAK_FUNC(sub_82861EC0);
PPC_FUNC_IMPL(__imp__sub_82861EC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82878060
	sub_82878060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82861EC8"))) PPC_WEAK_FUNC(sub_82861EC8);
PPC_FUNC_IMPL(__imp__sub_82861EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,156
	ctx.r3.s64 = 156;
	// bl 0x82833108
	ctx.lr = 0x82861EE8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82861f18
	if (ctx.cr0.eq) goto loc_82861F18;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246c440
	ctx.lr = 0x82861EFC;
	sub_8246C440(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,17216
	ctx.r11.s64 = ctx.r11.s64 + 17216;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// b 0x82861f1c
	goto loc_82861F1C;
loc_82861F18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82861F1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82861F38"))) PPC_WEAK_FUNC(sub_82861F38);
PPC_FUNC_IMPL(__imp__sub_82861F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82878060
	ctx.lr = 0x82861F58;
	sub_82878060(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82861f6c
	if (ctx.cr6.eq) goto loc_82861F6C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8246c378
	ctx.lr = 0x82861F6C;
	sub_8246C378(ctx, base);
loc_82861F6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82861F88"))) PPC_WEAK_FUNC(sub_82861F88);
PPC_FUNC_IMPL(__imp__sub_82861F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-772
	ctx.r3.s64 = ctx.r11.s64 + -772;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82861F98"))) PPC_WEAK_FUNC(sub_82861F98);
PPC_FUNC_IMPL(__imp__sub_82861F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82861fd0
	if (ctx.cr6.eq) goto loc_82861FD0;
	// bl 0x828781c0
	ctx.lr = 0x82861FC0;
	sub_828781C0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82861fd0
	if (!ctx.cr6.eq) goto loc_82861FD0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82861fdc
	goto loc_82861FDC;
loc_82861FD0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246c2d0
	ctx.lr = 0x82861FDC;
	sub_8246C2D0(ctx, base);
loc_82861FDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82861FF8"))) PPC_WEAK_FUNC(sub_82861FF8);
PPC_FUNC_IMPL(__imp__sub_82861FF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828781c0
	sub_828781C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82862000"))) PPC_WEAK_FUNC(sub_82862000);
PPC_FUNC_IMPL(__imp__sub_82862000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82862020;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82862058
	if (ctx.cr0.eq) goto loc_82862058;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246c440
	ctx.lr = 0x82862034;
	sub_8246C440(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,17336
	ctx.r11.s64 = ctx.r11.s64 + 17336;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// b 0x8286205c
	goto loc_8286205C;
loc_82862058:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8286205C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862078"))) PPC_WEAK_FUNC(sub_82862078);
PPC_FUNC_IMPL(__imp__sub_82862078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828781c0
	ctx.lr = 0x82862098;
	sub_828781C0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828620ac
	if (ctx.cr6.eq) goto loc_828620AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8246c378
	ctx.lr = 0x828620AC;
	sub_8246C378(ctx, base);
loc_828620AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828620C8"))) PPC_WEAK_FUNC(sub_828620C8);
PPC_FUNC_IMPL(__imp__sub_828620C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-752
	ctx.r3.s64 = ctx.r11.s64 + -752;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828620D8"))) PPC_WEAK_FUNC(sub_828620D8);
PPC_FUNC_IMPL(__imp__sub_828620D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82862110
	if (ctx.cr6.eq) goto loc_82862110;
	// bl 0x82878328
	ctx.lr = 0x82862100;
	sub_82878328(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82862110
	if (!ctx.cr6.eq) goto loc_82862110;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8286211c
	goto loc_8286211C;
loc_82862110:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246c2d0
	ctx.lr = 0x8286211C;
	sub_8246C2D0(ctx, base);
loc_8286211C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862138"))) PPC_WEAK_FUNC(sub_82862138);
PPC_FUNC_IMPL(__imp__sub_82862138) {
	PPC_FUNC_PROLOGUE();
	// b 0x82878328
	sub_82878328(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82862140"))) PPC_WEAK_FUNC(sub_82862140);
PPC_FUNC_IMPL(__imp__sub_82862140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82862160;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82862198
	if (ctx.cr0.eq) goto loc_82862198;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246c440
	ctx.lr = 0x82862174;
	sub_8246C440(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,17456
	ctx.r11.s64 = ctx.r11.s64 + 17456;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// b 0x8286219c
	goto loc_8286219C;
loc_82862198:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8286219C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828621B8"))) PPC_WEAK_FUNC(sub_828621B8);
PPC_FUNC_IMPL(__imp__sub_828621B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82878328
	ctx.lr = 0x828621D8;
	sub_82878328(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828621ec
	if (ctx.cr6.eq) goto loc_828621EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8246c378
	ctx.lr = 0x828621EC;
	sub_8246C378(ctx, base);
loc_828621EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862208"))) PPC_WEAK_FUNC(sub_82862208);
PPC_FUNC_IMPL(__imp__sub_82862208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-736
	ctx.r3.s64 = ctx.r11.s64 + -736;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862218"))) PPC_WEAK_FUNC(sub_82862218);
PPC_FUNC_IMPL(__imp__sub_82862218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82862250
	if (ctx.cr6.eq) goto loc_82862250;
	// bl 0x82878488
	ctx.lr = 0x82862240;
	sub_82878488(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82862250
	if (!ctx.cr6.eq) goto loc_82862250;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8286225c
	goto loc_8286225C;
loc_82862250:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246c2d0
	ctx.lr = 0x8286225C;
	sub_8246C2D0(ctx, base);
loc_8286225C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862278"))) PPC_WEAK_FUNC(sub_82862278);
PPC_FUNC_IMPL(__imp__sub_82862278) {
	PPC_FUNC_PROLOGUE();
	// b 0x82878488
	sub_82878488(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82862280"))) PPC_WEAK_FUNC(sub_82862280);
PPC_FUNC_IMPL(__imp__sub_82862280) {
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
	// li r3,168
	ctx.r3.s64 = 168;
	// bl 0x82833108
	ctx.lr = 0x828622A0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828622e8
	if (ctx.cr0.eq) goto loc_828622E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246c440
	ctx.lr = 0x828622B4;
	sub_8246C440(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,17576
	ctx.r11.s64 = ctx.r11.s64 + 17576;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,152(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// lfs f0,156(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// lfs f0,160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// b 0x828622ec
	goto loc_828622EC;
loc_828622E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828622EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862308"))) PPC_WEAK_FUNC(sub_82862308);
PPC_FUNC_IMPL(__imp__sub_82862308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82878488
	ctx.lr = 0x82862328;
	sub_82878488(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8286233c
	if (ctx.cr6.eq) goto loc_8286233C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8246c378
	ctx.lr = 0x8286233C;
	sub_8246C378(ctx, base);
loc_8286233C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862358"))) PPC_WEAK_FUNC(sub_82862358);
PPC_FUNC_IMPL(__imp__sub_82862358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-708
	ctx.r3.s64 = ctx.r11.s64 + -708;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862368"))) PPC_WEAK_FUNC(sub_82862368);
PPC_FUNC_IMPL(__imp__sub_82862368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x828623a0
	if (ctx.cr6.eq) goto loc_828623A0;
	// bl 0x828785e8
	ctx.lr = 0x82862390;
	sub_828785E8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828623a0
	if (!ctx.cr6.eq) goto loc_828623A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828623ac
	goto loc_828623AC;
loc_828623A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246c2d0
	ctx.lr = 0x828623AC;
	sub_8246C2D0(ctx, base);
loc_828623AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828623C8"))) PPC_WEAK_FUNC(sub_828623C8);
PPC_FUNC_IMPL(__imp__sub_828623C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828785e8
	sub_828785E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828623D0"))) PPC_WEAK_FUNC(sub_828623D0);
PPC_FUNC_IMPL(__imp__sub_828623D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x828623F0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82862418
	if (ctx.cr0.eq) goto loc_82862418;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246c440
	ctx.lr = 0x82862404;
	sub_8246C440(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,17696
	ctx.r11.s64 = ctx.r11.s64 + 17696;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8286241c
	goto loc_8286241C;
loc_82862418:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8286241C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862438"))) PPC_WEAK_FUNC(sub_82862438);
PPC_FUNC_IMPL(__imp__sub_82862438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828785e8
	ctx.lr = 0x82862458;
	sub_828785E8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8286246c
	if (ctx.cr6.eq) goto loc_8286246C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8246c378
	ctx.lr = 0x8286246C;
	sub_8246C378(ctx, base);
loc_8286246C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862488"))) PPC_WEAK_FUNC(sub_82862488);
PPC_FUNC_IMPL(__imp__sub_82862488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-684
	ctx.r3.s64 = ctx.r11.s64 + -684;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862498"))) PPC_WEAK_FUNC(sub_82862498);
PPC_FUNC_IMPL(__imp__sub_82862498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x828624d0
	if (ctx.cr6.eq) goto loc_828624D0;
	// bl 0x82878768
	ctx.lr = 0x828624C0;
	sub_82878768(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828624d0
	if (!ctx.cr6.eq) goto loc_828624D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828624dc
	goto loc_828624DC;
loc_828624D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246c2d0
	ctx.lr = 0x828624DC;
	sub_8246C2D0(ctx, base);
loc_828624DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828624F8"))) PPC_WEAK_FUNC(sub_828624F8);
PPC_FUNC_IMPL(__imp__sub_828624F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82878768
	sub_82878768(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82862500"))) PPC_WEAK_FUNC(sub_82862500);
PPC_FUNC_IMPL(__imp__sub_82862500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82862520;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82862554
	if (ctx.cr0.eq) goto loc_82862554;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246c440
	ctx.lr = 0x82862534;
	sub_8246C440(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r4,r30,152
	ctx.r4.s64 = ctx.r30.s64 + 152;
	// addi r11,r11,17816
	ctx.r11.s64 = ctx.r11.s64 + 17816;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x8286254C;
	sub_823339B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82862558
	goto loc_82862558;
loc_82862554:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82862558:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862570"))) PPC_WEAK_FUNC(sub_82862570);
PPC_FUNC_IMPL(__imp__sub_82862570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82878768
	ctx.lr = 0x82862590;
	sub_82878768(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828625a4
	if (ctx.cr6.eq) goto loc_828625A4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8246c378
	ctx.lr = 0x828625A4;
	sub_8246C378(ctx, base);
loc_828625A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828625C0"))) PPC_WEAK_FUNC(sub_828625C0);
PPC_FUNC_IMPL(__imp__sub_828625C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-660
	ctx.r3.s64 = ctx.r11.s64 + -660;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828625D0"))) PPC_WEAK_FUNC(sub_828625D0);
PPC_FUNC_IMPL(__imp__sub_828625D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82862608
	if (ctx.cr6.eq) goto loc_82862608;
	// bl 0x828788c8
	ctx.lr = 0x828625F8;
	sub_828788C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82862608
	if (!ctx.cr6.eq) goto loc_82862608;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82862614
	goto loc_82862614;
loc_82862608:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246c2d0
	ctx.lr = 0x82862614;
	sub_8246C2D0(ctx, base);
loc_82862614:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862630"))) PPC_WEAK_FUNC(sub_82862630);
PPC_FUNC_IMPL(__imp__sub_82862630) {
	PPC_FUNC_PROLOGUE();
	// b 0x828788c8
	sub_828788C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82862638"))) PPC_WEAK_FUNC(sub_82862638);
PPC_FUNC_IMPL(__imp__sub_82862638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,156
	ctx.r3.s64 = 156;
	// bl 0x82833108
	ctx.lr = 0x82862658;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82862688
	if (ctx.cr0.eq) goto loc_82862688;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246c440
	ctx.lr = 0x8286266C;
	sub_8246C440(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,17936
	ctx.r11.s64 = ctx.r11.s64 + 17936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// b 0x8286268c
	goto loc_8286268C;
loc_82862688:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8286268C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828626A8"))) PPC_WEAK_FUNC(sub_828626A8);
PPC_FUNC_IMPL(__imp__sub_828626A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828788c8
	ctx.lr = 0x828626C8;
	sub_828788C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828626dc
	if (ctx.cr6.eq) goto loc_828626DC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8246c378
	ctx.lr = 0x828626DC;
	sub_8246C378(ctx, base);
loc_828626DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828626F8"))) PPC_WEAK_FUNC(sub_828626F8);
PPC_FUNC_IMPL(__imp__sub_828626F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-640
	ctx.r3.s64 = ctx.r11.s64 + -640;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862708"))) PPC_WEAK_FUNC(sub_82862708);
PPC_FUNC_IMPL(__imp__sub_82862708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82862740
	if (ctx.cr6.eq) goto loc_82862740;
	// bl 0x82878a28
	ctx.lr = 0x82862730;
	sub_82878A28(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82862740
	if (!ctx.cr6.eq) goto loc_82862740;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8286274c
	goto loc_8286274C;
loc_82862740:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823345e8
	ctx.lr = 0x8286274C;
	sub_823345E8(ctx, base);
loc_8286274C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862768"))) PPC_WEAK_FUNC(sub_82862768);
PPC_FUNC_IMPL(__imp__sub_82862768) {
	PPC_FUNC_PROLOGUE();
	// b 0x82878a28
	sub_82878A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82862770"))) PPC_WEAK_FUNC(sub_82862770);
PPC_FUNC_IMPL(__imp__sub_82862770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82862790;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828627b8
	if (ctx.cr0.eq) goto loc_828627B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823347c8
	ctx.lr = 0x828627A4;
	sub_823347C8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,18056
	ctx.r11.s64 = ctx.r11.s64 + 18056;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x828627bc
	goto loc_828627BC;
loc_828627B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828627BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828627D8"))) PPC_WEAK_FUNC(sub_828627D8);
PPC_FUNC_IMPL(__imp__sub_828627D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82878a28
	ctx.lr = 0x828627F8;
	sub_82878A28(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8286280c
	if (ctx.cr6.eq) goto loc_8286280C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82334690
	ctx.lr = 0x8286280C;
	sub_82334690(ctx, base);
loc_8286280C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862828"))) PPC_WEAK_FUNC(sub_82862828);
PPC_FUNC_IMPL(__imp__sub_82862828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-616
	ctx.r3.s64 = ctx.r11.s64 + -616;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862838"))) PPC_WEAK_FUNC(sub_82862838);
PPC_FUNC_IMPL(__imp__sub_82862838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82862870
	if (ctx.cr6.eq) goto loc_82862870;
	// bl 0x82878bc0
	ctx.lr = 0x82862860;
	sub_82878BC0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82862870
	if (!ctx.cr6.eq) goto loc_82862870;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8286287c
	goto loc_8286287C;
loc_82862870:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823345e8
	ctx.lr = 0x8286287C;
	sub_823345E8(ctx, base);
loc_8286287C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862898"))) PPC_WEAK_FUNC(sub_82862898);
PPC_FUNC_IMPL(__imp__sub_82862898) {
	PPC_FUNC_PROLOGUE();
	// b 0x82878bc0
	sub_82878BC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828628A0"))) PPC_WEAK_FUNC(sub_828628A0);
PPC_FUNC_IMPL(__imp__sub_828628A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x828628C0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82862908
	if (ctx.cr0.eq) goto loc_82862908;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823347c8
	ctx.lr = 0x828628D4;
	sub_823347C8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r4,r30,164
	ctx.r4.s64 = ctx.r30.s64 + 164;
	// addi r11,r11,18184
	ctx.r11.s64 = ctx.r11.s64 + 18184;
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x828628F4;
	sub_82873B58(ctx, base);
	// addi r4,r30,188
	ctx.r4.s64 = ctx.r30.s64 + 188;
	// addi r3,r31,188
	ctx.r3.s64 = ctx.r31.s64 + 188;
	// bl 0x82873b58
	ctx.lr = 0x82862900;
	sub_82873B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8286290c
	goto loc_8286290C;
loc_82862908:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8286290C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862928"))) PPC_WEAK_FUNC(sub_82862928);
PPC_FUNC_IMPL(__imp__sub_82862928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82878bc0
	ctx.lr = 0x82862948;
	sub_82878BC0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8286295c
	if (ctx.cr6.eq) goto loc_8286295C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82334690
	ctx.lr = 0x8286295C;
	sub_82334690(ctx, base);
loc_8286295C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862978"))) PPC_WEAK_FUNC(sub_82862978);
PPC_FUNC_IMPL(__imp__sub_82862978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,188
	ctx.r3.s64 = ctx.r31.s64 + 188;
	// bl 0x8239d768
	ctx.lr = 0x8286299C;
	sub_8239D768(ctx, base);
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// bl 0x8239d768
	ctx.lr = 0x828629A4;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82334768
	ctx.lr = 0x828629AC;
	sub_82334768(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828629bc
	if (ctx.cr0.eq) goto loc_828629BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x828629BC;
	sub_82332DB8(ctx, base);
loc_828629BC:
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

__attribute__((alias("__imp__sub_828629D8"))) PPC_WEAK_FUNC(sub_828629D8);
PPC_FUNC_IMPL(__imp__sub_828629D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-600
	ctx.r3.s64 = ctx.r11.s64 + -600;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828629E8"))) PPC_WEAK_FUNC(sub_828629E8);
PPC_FUNC_IMPL(__imp__sub_828629E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82862a20
	if (ctx.cr6.eq) goto loc_82862A20;
	// bl 0x82878d20
	ctx.lr = 0x82862A10;
	sub_82878D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82862a20
	if (!ctx.cr6.eq) goto loc_82862A20;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82862a2c
	goto loc_82862A2C;
loc_82862A20:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823345e8
	ctx.lr = 0x82862A2C;
	sub_823345E8(ctx, base);
loc_82862A2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862A48"))) PPC_WEAK_FUNC(sub_82862A48);
PPC_FUNC_IMPL(__imp__sub_82862A48) {
	PPC_FUNC_PROLOGUE();
	// b 0x82878d20
	sub_82878D20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82862A50"))) PPC_WEAK_FUNC(sub_82862A50);
PPC_FUNC_IMPL(__imp__sub_82862A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82862A70;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82862a98
	if (ctx.cr0.eq) goto loc_82862A98;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823347c8
	ctx.lr = 0x82862A84;
	sub_823347C8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,18312
	ctx.r11.s64 = ctx.r11.s64 + 18312;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82862a9c
	goto loc_82862A9C;
loc_82862A98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82862A9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862AB8"))) PPC_WEAK_FUNC(sub_82862AB8);
PPC_FUNC_IMPL(__imp__sub_82862AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82878d20
	ctx.lr = 0x82862AD8;
	sub_82878D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82862aec
	if (ctx.cr6.eq) goto loc_82862AEC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82334690
	ctx.lr = 0x82862AEC;
	sub_82334690(ctx, base);
loc_82862AEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862B08"))) PPC_WEAK_FUNC(sub_82862B08);
PPC_FUNC_IMPL(__imp__sub_82862B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-580
	ctx.r3.s64 = ctx.r11.s64 + -580;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862B18"))) PPC_WEAK_FUNC(sub_82862B18);
PPC_FUNC_IMPL(__imp__sub_82862B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82862b50
	if (ctx.cr6.eq) goto loc_82862B50;
	// bl 0x82878e80
	ctx.lr = 0x82862B40;
	sub_82878E80(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82862b50
	if (!ctx.cr6.eq) goto loc_82862B50;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82862b5c
	goto loc_82862B5C;
loc_82862B50:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823345e8
	ctx.lr = 0x82862B5C;
	sub_823345E8(ctx, base);
loc_82862B5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862B78"))) PPC_WEAK_FUNC(sub_82862B78);
PPC_FUNC_IMPL(__imp__sub_82862B78) {
	PPC_FUNC_PROLOGUE();
	// b 0x82878e80
	sub_82878E80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82862B80"))) PPC_WEAK_FUNC(sub_82862B80);
PPC_FUNC_IMPL(__imp__sub_82862B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82862BA0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82862bc8
	if (ctx.cr0.eq) goto loc_82862BC8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823347c8
	ctx.lr = 0x82862BB4;
	sub_823347C8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,18440
	ctx.r11.s64 = ctx.r11.s64 + 18440;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82862bcc
	goto loc_82862BCC;
loc_82862BC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82862BCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862BE8"))) PPC_WEAK_FUNC(sub_82862BE8);
PPC_FUNC_IMPL(__imp__sub_82862BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82878e80
	ctx.lr = 0x82862C08;
	sub_82878E80(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82862c1c
	if (ctx.cr6.eq) goto loc_82862C1C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82334690
	ctx.lr = 0x82862C1C;
	sub_82334690(ctx, base);
loc_82862C1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862C38"))) PPC_WEAK_FUNC(sub_82862C38);
PPC_FUNC_IMPL(__imp__sub_82862C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-556
	ctx.r3.s64 = ctx.r11.s64 + -556;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862C48"))) PPC_WEAK_FUNC(sub_82862C48);
PPC_FUNC_IMPL(__imp__sub_82862C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82862c80
	if (ctx.cr6.eq) goto loc_82862C80;
	// bl 0x82878fe0
	ctx.lr = 0x82862C70;
	sub_82878FE0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82862c80
	if (!ctx.cr6.eq) goto loc_82862C80;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82862c8c
	goto loc_82862C8C;
loc_82862C80:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823345e8
	ctx.lr = 0x82862C8C;
	sub_823345E8(ctx, base);
loc_82862C8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862CA8"))) PPC_WEAK_FUNC(sub_82862CA8);
PPC_FUNC_IMPL(__imp__sub_82862CA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82878fe0
	sub_82878FE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82862CB0"))) PPC_WEAK_FUNC(sub_82862CB0);
PPC_FUNC_IMPL(__imp__sub_82862CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x82833108
	ctx.lr = 0x82862CD0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82862d00
	if (ctx.cr0.eq) goto loc_82862D00;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823347c8
	ctx.lr = 0x82862CE4;
	sub_823347C8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,18568
	ctx.r11.s64 = ctx.r11.s64 + 18568;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// b 0x82862d04
	goto loc_82862D04;
loc_82862D00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82862D04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862D20"))) PPC_WEAK_FUNC(sub_82862D20);
PPC_FUNC_IMPL(__imp__sub_82862D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82878fe0
	ctx.lr = 0x82862D40;
	sub_82878FE0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82862d54
	if (ctx.cr6.eq) goto loc_82862D54;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82334690
	ctx.lr = 0x82862D54;
	sub_82334690(ctx, base);
loc_82862D54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862D70"))) PPC_WEAK_FUNC(sub_82862D70);
PPC_FUNC_IMPL(__imp__sub_82862D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-536
	ctx.r3.s64 = ctx.r11.s64 + -536;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862D80"))) PPC_WEAK_FUNC(sub_82862D80);
PPC_FUNC_IMPL(__imp__sub_82862D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82862db8
	if (ctx.cr6.eq) goto loc_82862DB8;
	// bl 0x82879140
	ctx.lr = 0x82862DA8;
	sub_82879140(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82862db8
	if (!ctx.cr6.eq) goto loc_82862DB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82862dc4
	goto loc_82862DC4;
loc_82862DB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823345e8
	ctx.lr = 0x82862DC4;
	sub_823345E8(ctx, base);
loc_82862DC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862DE0"))) PPC_WEAK_FUNC(sub_82862DE0);
PPC_FUNC_IMPL(__imp__sub_82862DE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82879140
	sub_82879140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82862DE8"))) PPC_WEAK_FUNC(sub_82862DE8);
PPC_FUNC_IMPL(__imp__sub_82862DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x82833108
	ctx.lr = 0x82862E08;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82862e38
	if (ctx.cr0.eq) goto loc_82862E38;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823347c8
	ctx.lr = 0x82862E1C;
	sub_823347C8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,18696
	ctx.r11.s64 = ctx.r11.s64 + 18696;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// b 0x82862e3c
	goto loc_82862E3C;
loc_82862E38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82862E3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862E58"))) PPC_WEAK_FUNC(sub_82862E58);
PPC_FUNC_IMPL(__imp__sub_82862E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82879140
	ctx.lr = 0x82862E78;
	sub_82879140(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82862e8c
	if (ctx.cr6.eq) goto loc_82862E8C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82334690
	ctx.lr = 0x82862E8C;
	sub_82334690(ctx, base);
loc_82862E8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862EA8"))) PPC_WEAK_FUNC(sub_82862EA8);
PPC_FUNC_IMPL(__imp__sub_82862EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828d0b58
	ctx.lr = 0x82862EC8;
	sub_828D0B58(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82862ed8
	if (ctx.cr0.eq) goto loc_82862ED8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82862ED8;
	sub_82332DB8(ctx, base);
loc_82862ED8:
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

__attribute__((alias("__imp__sub_82862EF8"))) PPC_WEAK_FUNC(sub_82862EF8);
PPC_FUNC_IMPL(__imp__sub_82862EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-508
	ctx.r3.s64 = ctx.r11.s64 + -508;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862F08"))) PPC_WEAK_FUNC(sub_82862F08);
PPC_FUNC_IMPL(__imp__sub_82862F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82862f40
	if (ctx.cr6.eq) goto loc_82862F40;
	// bl 0x828792a0
	ctx.lr = 0x82862F30;
	sub_828792A0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82862f40
	if (!ctx.cr6.eq) goto loc_82862F40;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82862f4c
	goto loc_82862F4C;
loc_82862F40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246c640
	ctx.lr = 0x82862F4C;
	sub_8246C640(ctx, base);
loc_82862F4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862F68"))) PPC_WEAK_FUNC(sub_82862F68);
PPC_FUNC_IMPL(__imp__sub_82862F68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828792a0
	sub_828792A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82862F70"))) PPC_WEAK_FUNC(sub_82862F70);
PPC_FUNC_IMPL(__imp__sub_82862F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82862F90;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82862fb8
	if (ctx.cr0.eq) goto loc_82862FB8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82334248
	ctx.lr = 0x82862FA4;
	sub_82334248(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,18824
	ctx.r11.s64 = ctx.r11.s64 + 18824;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82862fbc
	goto loc_82862FBC;
loc_82862FB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82862FBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82862FD8"))) PPC_WEAK_FUNC(sub_82862FD8);
PPC_FUNC_IMPL(__imp__sub_82862FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828792a0
	ctx.lr = 0x82862FF8;
	sub_828792A0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8286300c
	if (ctx.cr6.eq) goto loc_8286300C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8246c708
	ctx.lr = 0x8286300C;
	sub_8246C708(ctx, base);
loc_8286300C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863028"))) PPC_WEAK_FUNC(sub_82863028);
PPC_FUNC_IMPL(__imp__sub_82863028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-484
	ctx.r3.s64 = ctx.r11.s64 + -484;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863038"))) PPC_WEAK_FUNC(sub_82863038);
PPC_FUNC_IMPL(__imp__sub_82863038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82863070
	if (ctx.cr6.eq) goto loc_82863070;
	// bl 0x82879400
	ctx.lr = 0x82863060;
	sub_82879400(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82863070
	if (!ctx.cr6.eq) goto loc_82863070;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8286307c
	goto loc_8286307C;
loc_82863070:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246c640
	ctx.lr = 0x8286307C;
	sub_8246C640(ctx, base);
loc_8286307C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863098"))) PPC_WEAK_FUNC(sub_82863098);
PPC_FUNC_IMPL(__imp__sub_82863098) {
	PPC_FUNC_PROLOGUE();
	// b 0x82879400
	sub_82879400(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828630A0"))) PPC_WEAK_FUNC(sub_828630A0);
PPC_FUNC_IMPL(__imp__sub_828630A0) {
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
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82833108
	ctx.lr = 0x828630C0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828630f8
	if (ctx.cr0.eq) goto loc_828630F8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82334248
	ctx.lr = 0x828630D4;
	sub_82334248(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,18936
	ctx.r11.s64 = ctx.r11.s64 + 18936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,120(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lfs f0,124(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// b 0x828630fc
	goto loc_828630FC;
loc_828630F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828630FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863118"))) PPC_WEAK_FUNC(sub_82863118);
PPC_FUNC_IMPL(__imp__sub_82863118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82879400
	ctx.lr = 0x82863138;
	sub_82879400(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8286314c
	if (ctx.cr6.eq) goto loc_8286314C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8246c708
	ctx.lr = 0x8286314C;
	sub_8246C708(ctx, base);
loc_8286314C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863168"))) PPC_WEAK_FUNC(sub_82863168);
PPC_FUNC_IMPL(__imp__sub_82863168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-460
	ctx.r3.s64 = ctx.r11.s64 + -460;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863178"))) PPC_WEAK_FUNC(sub_82863178);
PPC_FUNC_IMPL(__imp__sub_82863178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x828631b0
	if (ctx.cr6.eq) goto loc_828631B0;
	// bl 0x82879560
	ctx.lr = 0x828631A0;
	sub_82879560(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828631b0
	if (!ctx.cr6.eq) goto loc_828631B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828631bc
	goto loc_828631BC;
loc_828631B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246c640
	ctx.lr = 0x828631BC;
	sub_8246C640(ctx, base);
loc_828631BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828631D8"))) PPC_WEAK_FUNC(sub_828631D8);
PPC_FUNC_IMPL(__imp__sub_828631D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82879560
	sub_82879560(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828631E0"))) PPC_WEAK_FUNC(sub_828631E0);
PPC_FUNC_IMPL(__imp__sub_828631E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82863200;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82863238
	if (ctx.cr0.eq) goto loc_82863238;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82334248
	ctx.lr = 0x82863214;
	sub_82334248(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19048
	ctx.r11.s64 = ctx.r11.s64 + 19048;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// b 0x8286323c
	goto loc_8286323C;
loc_82863238:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8286323C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863258"))) PPC_WEAK_FUNC(sub_82863258);
PPC_FUNC_IMPL(__imp__sub_82863258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82879560
	ctx.lr = 0x82863278;
	sub_82879560(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8286328c
	if (ctx.cr6.eq) goto loc_8286328C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8246c708
	ctx.lr = 0x8286328C;
	sub_8246C708(ctx, base);
loc_8286328C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828632A8"))) PPC_WEAK_FUNC(sub_828632A8);
PPC_FUNC_IMPL(__imp__sub_828632A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-440
	ctx.r3.s64 = ctx.r11.s64 + -440;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828632B8"))) PPC_WEAK_FUNC(sub_828632B8);
PPC_FUNC_IMPL(__imp__sub_828632B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x828632f0
	if (ctx.cr6.eq) goto loc_828632F0;
	// bl 0x828796c0
	ctx.lr = 0x828632E0;
	sub_828796C0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828632f0
	if (!ctx.cr6.eq) goto loc_828632F0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828632fc
	goto loc_828632FC;
loc_828632F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246c640
	ctx.lr = 0x828632FC;
	sub_8246C640(ctx, base);
loc_828632FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863318"))) PPC_WEAK_FUNC(sub_82863318);
PPC_FUNC_IMPL(__imp__sub_82863318) {
	PPC_FUNC_PROLOGUE();
	// b 0x828796c0
	sub_828796C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82863320"))) PPC_WEAK_FUNC(sub_82863320);
PPC_FUNC_IMPL(__imp__sub_82863320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82863340;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82863368
	if (ctx.cr0.eq) goto loc_82863368;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82334248
	ctx.lr = 0x82863354;
	sub_82334248(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19160
	ctx.r11.s64 = ctx.r11.s64 + 19160;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8286336c
	goto loc_8286336C;
loc_82863368:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8286336C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863388"))) PPC_WEAK_FUNC(sub_82863388);
PPC_FUNC_IMPL(__imp__sub_82863388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828796c0
	ctx.lr = 0x828633A8;
	sub_828796C0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828633bc
	if (ctx.cr6.eq) goto loc_828633BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8246c708
	ctx.lr = 0x828633BC;
	sub_8246C708(ctx, base);
loc_828633BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828633D8"))) PPC_WEAK_FUNC(sub_828633D8);
PPC_FUNC_IMPL(__imp__sub_828633D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-416
	ctx.r3.s64 = ctx.r11.s64 + -416;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828633E8"))) PPC_WEAK_FUNC(sub_828633E8);
PPC_FUNC_IMPL(__imp__sub_828633E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82863420
	if (ctx.cr6.eq) goto loc_82863420;
	// bl 0x82879820
	ctx.lr = 0x82863410;
	sub_82879820(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82863420
	if (!ctx.cr6.eq) goto loc_82863420;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8286342c
	goto loc_8286342C;
loc_82863420:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246c640
	ctx.lr = 0x8286342C;
	sub_8246C640(ctx, base);
loc_8286342C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863448"))) PPC_WEAK_FUNC(sub_82863448);
PPC_FUNC_IMPL(__imp__sub_82863448) {
	PPC_FUNC_PROLOGUE();
	// b 0x82879820
	sub_82879820(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82863450"))) PPC_WEAK_FUNC(sub_82863450);
PPC_FUNC_IMPL(__imp__sub_82863450) {
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
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x82833108
	ctx.lr = 0x82863470;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828634b0
	if (ctx.cr0.eq) goto loc_828634B0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82334248
	ctx.lr = 0x82863484;
	sub_82334248(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19272
	ctx.r11.s64 = ctx.r11.s64 + 19272;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,120(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lfs f0,124(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// lfs f0,128(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// b 0x828634b4
	goto loc_828634B4;
loc_828634B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828634B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828634D0"))) PPC_WEAK_FUNC(sub_828634D0);
PPC_FUNC_IMPL(__imp__sub_828634D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82879820
	ctx.lr = 0x828634F0;
	sub_82879820(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82863504
	if (ctx.cr6.eq) goto loc_82863504;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8246c708
	ctx.lr = 0x82863504;
	sub_8246C708(ctx, base);
loc_82863504:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863520"))) PPC_WEAK_FUNC(sub_82863520);
PPC_FUNC_IMPL(__imp__sub_82863520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-392
	ctx.r3.s64 = ctx.r11.s64 + -392;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863530"))) PPC_WEAK_FUNC(sub_82863530);
PPC_FUNC_IMPL(__imp__sub_82863530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82863568
	if (ctx.cr6.eq) goto loc_82863568;
	// bl 0x82879980
	ctx.lr = 0x82863558;
	sub_82879980(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82863568
	if (!ctx.cr6.eq) goto loc_82863568;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82863574
	goto loc_82863574;
loc_82863568:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246c640
	ctx.lr = 0x82863574;
	sub_8246C640(ctx, base);
loc_82863574:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863590"))) PPC_WEAK_FUNC(sub_82863590);
PPC_FUNC_IMPL(__imp__sub_82863590) {
	PPC_FUNC_PROLOGUE();
	// b 0x82879980
	sub_82879980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82863598"))) PPC_WEAK_FUNC(sub_82863598);
PPC_FUNC_IMPL(__imp__sub_82863598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x828635B8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828635f8
	if (ctx.cr0.eq) goto loc_828635F8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82334248
	ctx.lr = 0x828635CC;
	sub_82334248(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19384
	ctx.r11.s64 = ctx.r11.s64 + 19384;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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
	// b 0x828635fc
	goto loc_828635FC;
loc_828635F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828635FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863618"))) PPC_WEAK_FUNC(sub_82863618);
PPC_FUNC_IMPL(__imp__sub_82863618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82879980
	ctx.lr = 0x82863638;
	sub_82879980(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8286364c
	if (ctx.cr6.eq) goto loc_8286364C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8246c708
	ctx.lr = 0x8286364C;
	sub_8246C708(ctx, base);
loc_8286364C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863668"))) PPC_WEAK_FUNC(sub_82863668);
PPC_FUNC_IMPL(__imp__sub_82863668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823341a0
	ctx.lr = 0x82863688;
	sub_823341A0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82863698
	if (ctx.cr0.eq) goto loc_82863698;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82863698;
	sub_82332DB8(ctx, base);
loc_82863698:
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

__attribute__((alias("__imp__sub_828636B8"))) PPC_WEAK_FUNC(sub_828636B8);
PPC_FUNC_IMPL(__imp__sub_828636B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-372
	ctx.r3.s64 = ctx.r11.s64 + -372;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828636C8"))) PPC_WEAK_FUNC(sub_828636C8);
PPC_FUNC_IMPL(__imp__sub_828636C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82863700
	if (ctx.cr6.eq) goto loc_82863700;
	// bl 0x82879ae0
	ctx.lr = 0x828636F0;
	sub_82879AE0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82863700
	if (!ctx.cr6.eq) goto loc_82863700;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8286370c
	goto loc_8286370C;
loc_82863700:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246c640
	ctx.lr = 0x8286370C;
	sub_8246C640(ctx, base);
loc_8286370C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863728"))) PPC_WEAK_FUNC(sub_82863728);
PPC_FUNC_IMPL(__imp__sub_82863728) {
	PPC_FUNC_PROLOGUE();
	// b 0x82879ae0
	sub_82879AE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82863730"))) PPC_WEAK_FUNC(sub_82863730);
PPC_FUNC_IMPL(__imp__sub_82863730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82863750;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82863780
	if (ctx.cr0.eq) goto loc_82863780;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82334248
	ctx.lr = 0x82863764;
	sub_82334248(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19496
	ctx.r11.s64 = ctx.r11.s64 + 19496;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// b 0x82863784
	goto loc_82863784;
loc_82863780:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82863784:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828637A0"))) PPC_WEAK_FUNC(sub_828637A0);
PPC_FUNC_IMPL(__imp__sub_828637A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82879ae0
	ctx.lr = 0x828637C0;
	sub_82879AE0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828637d4
	if (ctx.cr6.eq) goto loc_828637D4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8246c708
	ctx.lr = 0x828637D4;
	sub_8246C708(ctx, base);
loc_828637D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828637F0"))) PPC_WEAK_FUNC(sub_828637F0);
PPC_FUNC_IMPL(__imp__sub_828637F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-336
	ctx.r3.s64 = ctx.r11.s64 + -336;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863800"))) PPC_WEAK_FUNC(sub_82863800);
PPC_FUNC_IMPL(__imp__sub_82863800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82863838
	if (ctx.cr6.eq) goto loc_82863838;
	// bl 0x82879de0
	ctx.lr = 0x82863828;
	sub_82879DE0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82863838
	if (!ctx.cr6.eq) goto loc_82863838;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82863844
	goto loc_82863844;
loc_82863838:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246cb90
	ctx.lr = 0x82863844;
	sub_8246CB90(ctx, base);
loc_82863844:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863860"))) PPC_WEAK_FUNC(sub_82863860);
PPC_FUNC_IMPL(__imp__sub_82863860) {
	PPC_FUNC_PROLOGUE();
	// b 0x82879de0
	sub_82879DE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82863868"))) PPC_WEAK_FUNC(sub_82863868);
PPC_FUNC_IMPL(__imp__sub_82863868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,320
	ctx.r3.s64 = 320;
	// bl 0x82833108
	ctx.lr = 0x82863884;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82863898
	if (ctx.cr0.eq) goto loc_82863898;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82863910
	ctx.lr = 0x82863894;
	sub_82863910(ctx, base);
	// b 0x8286389c
	goto loc_8286389C;
loc_82863898:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8286389C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828638B0"))) PPC_WEAK_FUNC(sub_828638B0);
PPC_FUNC_IMPL(__imp__sub_828638B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82879de0
	ctx.lr = 0x828638D0;
	sub_82879DE0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828638e0
	if (!ctx.cr6.eq) goto loc_828638E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828638f8
	goto loc_828638F8;
loc_828638E0:
	// bl 0x8247dd60
	ctx.lr = 0x828638E4;
	sub_8247DD60(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828638f8
	if (ctx.cr6.eq) goto loc_828638F8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8246c378
	ctx.lr = 0x828638F8;
	sub_8246C378(ctx, base);
loc_828638F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863910"))) PPC_WEAK_FUNC(sub_82863910);
PPC_FUNC_IMPL(__imp__sub_82863910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82863918;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8246cc88
	ctx.lr = 0x82863928;
	sub_8246CC88(ctx, base);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,816
	ctx.r10.s64 = ctx.r10.s64 + 816;
	// addi r29,r31,288
	ctx.r29.s64 = ctx.r31.s64 + 288;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r28,r30,288
	ctx.r28.s64 = ctx.r30.s64 + 288;
	// lwz r9,216(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r9.u32);
	// lfs f0,220(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// lfs f0,224(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,224(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// lfs f0,228(r30)
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
	// lwz r9,240(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// stw r9,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r9.u32);
	// lwz r9,244(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// stw r9,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r9.u32);
	// lwz r9,248(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// stw r9,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r9.u32);
	// lwz r9,252(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	// stw r9,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r9.u32);
	// lwz r9,256(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// lwz r9,260(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// stw r9,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r9.u32);
	// lwz r9,264(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// stw r9,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r9.u32);
	// lwz r9,268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// stw r9,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r9.u32);
	// lwz r9,272(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// stw r9,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r9.u32);
	// lwz r9,276(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// stw r9,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r9.u32);
	// lwz r9,280(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// stw r9,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r9.u32);
	// lwz r9,284(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// stw r9,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r9.u32);
	// stw r10,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// beq cr6,0x82863a3c
	if (ctx.cr6.eq) goto loc_82863A3C;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82863a3c
	if (!ctx.cr6.gt) goto loc_82863A3C;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82863a20
	if (ctx.cr0.eq) goto loc_82863A20;
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x82863A20;
	sub_82332C38(ctx, base);
loc_82863A20:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x82863A34;
	sub_82A45878(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_82863A3C:
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// lwz r11,316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82863A58"))) PPC_WEAK_FUNC(sub_82863A58);
PPC_FUNC_IMPL(__imp__sub_82863A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829301f0
	ctx.lr = 0x82863A78;
	sub_829301F0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82863a88
	if (ctx.cr0.eq) goto loc_82863A88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82863A88;
	sub_82332DB8(ctx, base);
loc_82863A88:
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

__attribute__((alias("__imp__sub_82863AA8"))) PPC_WEAK_FUNC(sub_82863AA8);
PPC_FUNC_IMPL(__imp__sub_82863AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,4468
	ctx.r3.s64 = ctx.r11.s64 + 4468;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863AB8"))) PPC_WEAK_FUNC(sub_82863AB8);
PPC_FUNC_IMPL(__imp__sub_82863AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x82863af8
	if (ctx.cr6.eq) goto loc_82863AF8;
	// bl 0x827eb068
	ctx.lr = 0x82863AD8;
	sub_827EB068(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82863ae8
	if (!ctx.cr6.eq) goto loc_82863AE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82863afc
	goto loc_82863AFC;
loc_82863AE8:
	// bl 0x82333d20
	ctx.lr = 0x82863AEC;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82863afc
	if (ctx.cr6.eq) goto loc_82863AFC;
loc_82863AF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82863AFC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863B10"))) PPC_WEAK_FUNC(sub_82863B10);
PPC_FUNC_IMPL(__imp__sub_82863B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827eb068
	ctx.lr = 0x82863B30;
	sub_827EB068(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82863b40
	if (!ctx.cr6.eq) goto loc_82863B40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82863b54
	goto loc_82863B54;
loc_82863B40:
	// bl 0x82333d20
	ctx.lr = 0x82863B44;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82863b54
	if (ctx.cr6.eq) goto loc_82863B54;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82863B54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863B70"))) PPC_WEAK_FUNC(sub_82863B70);
PPC_FUNC_IMPL(__imp__sub_82863B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-184
	ctx.r3.s64 = ctx.r11.s64 + -184;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863B80"))) PPC_WEAK_FUNC(sub_82863B80);
PPC_FUNC_IMPL(__imp__sub_82863B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82863bb8
	if (ctx.cr6.eq) goto loc_82863BB8;
	// bl 0x8287a7e8
	ctx.lr = 0x82863BA8;
	sub_8287A7E8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82863bb8
	if (!ctx.cr6.eq) goto loc_82863BB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82863bc4
	goto loc_82863BC4;
loc_82863BB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82863ab8
	ctx.lr = 0x82863BC4;
	sub_82863AB8(ctx, base);
loc_82863BC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863BE0"))) PPC_WEAK_FUNC(sub_82863BE0);
PPC_FUNC_IMPL(__imp__sub_82863BE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8287a7e8
	sub_8287A7E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82863BE8"))) PPC_WEAK_FUNC(sub_82863BE8);
PPC_FUNC_IMPL(__imp__sub_82863BE8) {
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
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82833108
	ctx.lr = 0x82863C08;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82863c78
	if (ctx.cr0.eq) goto loc_82863C78;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,19768
	ctx.r10.s64 = ctx.r10.s64 + 19768;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82873b58
	ctx.lr = 0x82863C3C;
	sub_82873B58(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19848
	ctx.r11.s64 = ctx.r11.s64 + 19848;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// b 0x82863c7c
	goto loc_82863C7C;
loc_82863C78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82863C7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863C98"))) PPC_WEAK_FUNC(sub_82863C98);
PPC_FUNC_IMPL(__imp__sub_82863C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287a7e8
	ctx.lr = 0x82863CB8;
	sub_8287A7E8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82863ccc
	if (ctx.cr6.eq) goto loc_82863CCC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82863b10
	ctx.lr = 0x82863CCC;
	sub_82863B10(ctx, base);
loc_82863CCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863CE8"))) PPC_WEAK_FUNC(sub_82863CE8);
PPC_FUNC_IMPL(__imp__sub_82863CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-164
	ctx.r3.s64 = ctx.r11.s64 + -164;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863CF8"))) PPC_WEAK_FUNC(sub_82863CF8);
PPC_FUNC_IMPL(__imp__sub_82863CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82863d30
	if (ctx.cr6.eq) goto loc_82863D30;
	// bl 0x8287a980
	ctx.lr = 0x82863D20;
	sub_8287A980(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82863d30
	if (!ctx.cr6.eq) goto loc_82863D30;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82863d3c
	goto loc_82863D3C;
loc_82863D30:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82863ab8
	ctx.lr = 0x82863D3C;
	sub_82863AB8(ctx, base);
loc_82863D3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863D58"))) PPC_WEAK_FUNC(sub_82863D58);
PPC_FUNC_IMPL(__imp__sub_82863D58) {
	PPC_FUNC_PROLOGUE();
	// b 0x8287a980
	sub_8287A980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82863D60"))) PPC_WEAK_FUNC(sub_82863D60);
PPC_FUNC_IMPL(__imp__sub_82863D60) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82833108
	ctx.lr = 0x82863D80;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82863dd8
	if (ctx.cr0.eq) goto loc_82863DD8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,19768
	ctx.r10.s64 = ctx.r10.s64 + 19768;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82873b58
	ctx.lr = 0x82863DB4;
	sub_82873B58(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19944
	ctx.r11.s64 = ctx.r11.s64 + 19944;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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
	// b 0x82863ddc
	goto loc_82863DDC;
loc_82863DD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82863DDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863DF8"))) PPC_WEAK_FUNC(sub_82863DF8);
PPC_FUNC_IMPL(__imp__sub_82863DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287a980
	ctx.lr = 0x82863E18;
	sub_8287A980(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82863e2c
	if (ctx.cr6.eq) goto loc_82863E2C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82863b10
	ctx.lr = 0x82863E2C;
	sub_82863B10(ctx, base);
loc_82863E2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863E48"))) PPC_WEAK_FUNC(sub_82863E48);
PPC_FUNC_IMPL(__imp__sub_82863E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-144
	ctx.r3.s64 = ctx.r11.s64 + -144;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863E58"))) PPC_WEAK_FUNC(sub_82863E58);
PPC_FUNC_IMPL(__imp__sub_82863E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82863e90
	if (ctx.cr6.eq) goto loc_82863E90;
	// bl 0x8287ab18
	ctx.lr = 0x82863E80;
	sub_8287AB18(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82863e90
	if (!ctx.cr6.eq) goto loc_82863E90;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82863e9c
	goto loc_82863E9C;
loc_82863E90:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82863ab8
	ctx.lr = 0x82863E9C;
	sub_82863AB8(ctx, base);
loc_82863E9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863EB8"))) PPC_WEAK_FUNC(sub_82863EB8);
PPC_FUNC_IMPL(__imp__sub_82863EB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8287ab18
	sub_8287AB18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82863EC0"))) PPC_WEAK_FUNC(sub_82863EC0);
PPC_FUNC_IMPL(__imp__sub_82863EC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x827eb068
	sub_827EB068(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82863EC8"))) PPC_WEAK_FUNC(sub_82863EC8);
PPC_FUNC_IMPL(__imp__sub_82863EC8) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82833108
	ctx.lr = 0x82863EE8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82863f40
	if (ctx.cr0.eq) goto loc_82863F40;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,19768
	ctx.r10.s64 = ctx.r10.s64 + 19768;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82873b58
	ctx.lr = 0x82863F1C;
	sub_82873B58(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,20040
	ctx.r11.s64 = ctx.r11.s64 + 20040;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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
	// b 0x82863f44
	goto loc_82863F44;
loc_82863F40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82863F44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863F60"))) PPC_WEAK_FUNC(sub_82863F60);
PPC_FUNC_IMPL(__imp__sub_82863F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287ab18
	ctx.lr = 0x82863F80;
	sub_8287AB18(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82863f94
	if (ctx.cr6.eq) goto loc_82863F94;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82863b10
	ctx.lr = 0x82863F94;
	sub_82863B10(ctx, base);
loc_82863F94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863FB0"))) PPC_WEAK_FUNC(sub_82863FB0);
PPC_FUNC_IMPL(__imp__sub_82863FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-20
	ctx.r3.s64 = ctx.r11.s64 + -20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82863FC0"))) PPC_WEAK_FUNC(sub_82863FC0);
PPC_FUNC_IMPL(__imp__sub_82863FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82863ff8
	if (ctx.cr6.eq) goto loc_82863FF8;
	// bl 0x8287b5a8
	ctx.lr = 0x82863FE8;
	sub_8287B5A8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82863ff8
	if (!ctx.cr6.eq) goto loc_82863FF8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82864004
	goto loc_82864004;
loc_82863FF8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246c2d0
	ctx.lr = 0x82864004;
	sub_8246C2D0(ctx, base);
loc_82864004:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82864020"))) PPC_WEAK_FUNC(sub_82864020);
PPC_FUNC_IMPL(__imp__sub_82864020) {
	PPC_FUNC_PROLOGUE();
	// b 0x8287b5a8
	sub_8287B5A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82864028"))) PPC_WEAK_FUNC(sub_82864028);
PPC_FUNC_IMPL(__imp__sub_82864028) {
	PPC_FUNC_PROLOGUE();
	// b 0x8247d518
	sub_8247D518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82864030"))) PPC_WEAK_FUNC(sub_82864030);
PPC_FUNC_IMPL(__imp__sub_82864030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,212
	ctx.r3.s64 = 212;
	// bl 0x82833108
	ctx.lr = 0x8286404C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82864060
	if (ctx.cr0.eq) goto loc_82864060;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828640c8
	ctx.lr = 0x8286405C;
	sub_828640C8(ctx, base);
	// b 0x82864064
	goto loc_82864064;
loc_82864060:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82864064:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82864078"))) PPC_WEAK_FUNC(sub_82864078);
PPC_FUNC_IMPL(__imp__sub_82864078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287b5a8
	ctx.lr = 0x82864098;
	sub_8287B5A8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828640ac
	if (ctx.cr6.eq) goto loc_828640AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8246c378
	ctx.lr = 0x828640AC;
	sub_8246C378(ctx, base);
loc_828640AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828640C8"))) PPC_WEAK_FUNC(sub_828640C8);
PPC_FUNC_IMPL(__imp__sub_828640C8) {
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
	// bl 0x8246c440
	ctx.lr = 0x828640E8;
	sub_8246C440(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,20256
	ctx.r11.s64 = ctx.r11.s64 + 20256;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// rlwimi r10,r11,0,1,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x7FFFFFFF) | (ctx.r10.u64 & 0xFFFFFFFF80000000);
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// rlwimi r10,r11,0,1,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// rlwimi r10,r11,0,2,2
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x20000000) | (ctx.r10.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// rlwimi r10,r11,0,3,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x10000000) | (ctx.r10.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// rlwimi r10,r11,0,4,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x8000000) | (ctx.r10.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// rlwimi r10,r11,0,5,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x4000000) | (ctx.r10.u64 & 0xFFFFFFFFFBFFFFFF);
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// rlwimi r10,r11,0,6,6
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x2000000) | (ctx.r10.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// rlwimi r10,r11,0,7,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x1000000) | (ctx.r10.u64 & 0xFFFFFFFFFEFFFFFF);
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// rlwimi r10,r11,0,8,8
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x800000) | (ctx.r10.u64 & 0xFFFFFFFFFF7FFFFF);
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// rlwimi r10,r11,0,9,9
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x400000) | (ctx.r10.u64 & 0xFFFFFFFFFFBFFFFF);
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// rlwimi r10,r11,0,10,10
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x200000) | (ctx.r10.u64 & 0xFFFFFFFFFFDFFFFF);
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// lfs f0,156(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// lfs f0,160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// lfs f0,164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// lfs f0,168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// lfs f0,172(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// lfs f0,176(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// lfs f0,180(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// lfs f0,184(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82864230"))) PPC_WEAK_FUNC(sub_82864230);
PPC_FUNC_IMPL(__imp__sub_82864230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82864240"))) PPC_WEAK_FUNC(sub_82864240);
PPC_FUNC_IMPL(__imp__sub_82864240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82864278
	if (ctx.cr6.eq) goto loc_82864278;
	// bl 0x8287b720
	ctx.lr = 0x82864268;
	sub_8287B720(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82864278
	if (!ctx.cr6.eq) goto loc_82864278;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82864284
	goto loc_82864284;
loc_82864278:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246c2d0
	ctx.lr = 0x82864284;
	sub_8246C2D0(ctx, base);
loc_82864284:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828642A0"))) PPC_WEAK_FUNC(sub_828642A0);
PPC_FUNC_IMPL(__imp__sub_828642A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8287b720
	sub_8287B720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828642A8"))) PPC_WEAK_FUNC(sub_828642A8);
PPC_FUNC_IMPL(__imp__sub_828642A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x82833108
	ctx.lr = 0x828642C8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82864300
	if (ctx.cr0.eq) goto loc_82864300;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246c440
	ctx.lr = 0x828642DC;
	sub_8246C440(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r4,r30,152
	ctx.r4.s64 = ctx.r30.s64 + 152;
	// addi r11,r11,20376
	ctx.r11.s64 = ctx.r11.s64 + 20376;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,88
	ctx.r5.s64 = 88;
	// bl 0x82a4ea80
	ctx.lr = 0x828642F8;
	sub_82A4EA80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82864304
	goto loc_82864304;
loc_82864300:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82864304:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82864320"))) PPC_WEAK_FUNC(sub_82864320);
PPC_FUNC_IMPL(__imp__sub_82864320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287b720
	ctx.lr = 0x82864340;
	sub_8287B720(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82864354
	if (ctx.cr6.eq) goto loc_82864354;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8246c378
	ctx.lr = 0x82864354;
	sub_8246C378(ctx, base);
loc_82864354:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82864370"))) PPC_WEAK_FUNC(sub_82864370);
PPC_FUNC_IMPL(__imp__sub_82864370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82864380"))) PPC_WEAK_FUNC(sub_82864380);
PPC_FUNC_IMPL(__imp__sub_82864380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x828643b8
	if (ctx.cr6.eq) goto loc_828643B8;
	// bl 0x8287ba28
	ctx.lr = 0x828643A8;
	sub_8287BA28(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828643b8
	if (!ctx.cr6.eq) goto loc_828643B8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828643c4
	goto loc_828643C4;
loc_828643B8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370018
	ctx.lr = 0x828643C4;
	sub_82370018(ctx, base);
loc_828643C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828643E0"))) PPC_WEAK_FUNC(sub_828643E0);
PPC_FUNC_IMPL(__imp__sub_828643E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8287ba28
	sub_8287BA28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828643E8"))) PPC_WEAK_FUNC(sub_828643E8);
PPC_FUNC_IMPL(__imp__sub_828643E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1728
	ctx.r3.s64 = 1728;
	// bl 0x82833108
	ctx.lr = 0x82864408;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82864450
	if (ctx.cr0.eq) goto loc_82864450;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370118
	ctx.lr = 0x8286441C;
	sub_82370118(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// addi r11,r11,20512
	ctx.r11.s64 = ctx.r11.s64 + 20512;
	// addi r10,r10,21568
	ctx.r10.s64 = ctx.r10.s64 + 21568;
	// addi r9,r9,21620
	ctx.r9.s64 = ctx.r9.s64 + 21620;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lbz r11,1712(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1712);
	// stb r11,1712(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1712, ctx.r11.u8);
	// b 0x82864454
	goto loc_82864454;
loc_82864450:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82864454:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82864470"))) PPC_WEAK_FUNC(sub_82864470);
PPC_FUNC_IMPL(__imp__sub_82864470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287ba28
	ctx.lr = 0x82864490;
	sub_8287BA28(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828644a0
	if (!ctx.cr6.eq) goto loc_828644A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828644b8
	goto loc_828644B8;
loc_828644A0:
	// bl 0x823bd878
	ctx.lr = 0x828644A4;
	sub_823BD878(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828644b8
	if (ctx.cr6.eq) goto loc_828644B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8236fc08
	ctx.lr = 0x828644B8;
	sub_8236FC08(ctx, base);
loc_828644B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828644D0"))) PPC_WEAK_FUNC(sub_828644D0);
PPC_FUNC_IMPL(__imp__sub_828644D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// addi r11,r11,20512
	ctx.r11.s64 = ctx.r11.s64 + 20512;
	// addi r10,r10,21568
	ctx.r10.s64 = ctx.r10.s64 + 21568;
	// addi r9,r9,21620
	ctx.r9.s64 = ctx.r9.s64 + 21620;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x828b5b88
	ctx.lr = 0x82864514;
	sub_828B5B88(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82864524
	if (ctx.cr0.eq) goto loc_82864524;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82864524;
	sub_82332DB8(ctx, base);
loc_82864524:
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

__attribute__((alias("__imp__sub_82864540"))) PPC_WEAK_FUNC(sub_82864540);
PPC_FUNC_IMPL(__imp__sub_82864540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82864550"))) PPC_WEAK_FUNC(sub_82864550);
PPC_FUNC_IMPL(__imp__sub_82864550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x82864590
	if (ctx.cr6.eq) goto loc_82864590;
	// bl 0x8287bb88
	ctx.lr = 0x82864570;
	sub_8287BB88(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82864580
	if (!ctx.cr6.eq) goto loc_82864580;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82864594
	goto loc_82864594;
loc_82864580:
	// bl 0x82333d20
	ctx.lr = 0x82864584;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82864594
	if (ctx.cr6.eq) goto loc_82864594;
loc_82864590:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82864594:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828645A8"))) PPC_WEAK_FUNC(sub_828645A8);
PPC_FUNC_IMPL(__imp__sub_828645A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8287bb88
	sub_8287BB88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828645B0"))) PPC_WEAK_FUNC(sub_828645B0);
PPC_FUNC_IMPL(__imp__sub_828645B0) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82833108
	ctx.lr = 0x828645CC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82864628
	if (ctx.cr0.eq) goto loc_82864628;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,21664
	ctx.r10.s64 = ctx.r10.s64 + 21664;
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
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// b 0x8286462c
	goto loc_8286462C;
loc_82864628:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8286462C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82864640"))) PPC_WEAK_FUNC(sub_82864640);
PPC_FUNC_IMPL(__imp__sub_82864640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287bb88
	ctx.lr = 0x82864660;
	sub_8287BB88(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82864670
	if (!ctx.cr6.eq) goto loc_82864670;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82864684
	goto loc_82864684;
loc_82864670:
	// bl 0x82333d20
	ctx.lr = 0x82864674;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82864684
	if (ctx.cr6.eq) goto loc_82864684;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82864684:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828646A0"))) PPC_WEAK_FUNC(sub_828646A0);
PPC_FUNC_IMPL(__imp__sub_828646A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,188
	ctx.r3.s64 = ctx.r11.s64 + 188;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828646B0"))) PPC_WEAK_FUNC(sub_828646B0);
PPC_FUNC_IMPL(__imp__sub_828646B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x828646f0
	if (ctx.cr6.eq) goto loc_828646F0;
	// bl 0x8287c078
	ctx.lr = 0x828646D0;
	sub_8287C078(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828646e0
	if (!ctx.cr6.eq) goto loc_828646E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828646f4
	goto loc_828646F4;
loc_828646E0:
	// bl 0x82333d20
	ctx.lr = 0x828646E4;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x828646f4
	if (ctx.cr6.eq) goto loc_828646F4;
loc_828646F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828646F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82864708"))) PPC_WEAK_FUNC(sub_82864708);
PPC_FUNC_IMPL(__imp__sub_82864708) {
	PPC_FUNC_PROLOGUE();
	// b 0x8287c078
	sub_8287C078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82864710"))) PPC_WEAK_FUNC(sub_82864710);
PPC_FUNC_IMPL(__imp__sub_82864710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82833108
	ctx.lr = 0x8286472C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828647e8
	if (ctx.cr0.eq) goto loc_828647E8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,1016
	ctx.r10.s64 = ctx.r10.s64 + 1016;
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
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// b 0x828647ec
	goto loc_828647EC;
loc_828647E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828647EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82864800"))) PPC_WEAK_FUNC(sub_82864800);
PPC_FUNC_IMPL(__imp__sub_82864800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287c078
	ctx.lr = 0x82864820;
	sub_8287C078(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82864830
	if (!ctx.cr6.eq) goto loc_82864830;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82864844
	goto loc_82864844;
loc_82864830:
	// bl 0x82333d20
	ctx.lr = 0x82864834;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82864844
	if (ctx.cr6.eq) goto loc_82864844;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82864844:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82864860"))) PPC_WEAK_FUNC(sub_82864860);
PPC_FUNC_IMPL(__imp__sub_82864860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,1016
	ctx.r11.s64 = ctx.r11.s64 + 1016;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828648a4
	if (ctx.cr6.eq) goto loc_828648A4;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828648a4
	if (ctx.cr6.eq) goto loc_828648A4;
	// bl 0x82332db8
	ctx.lr = 0x828648A4;
	sub_82332DB8(ctx, base);
loc_828648A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833238
	ctx.lr = 0x828648AC;
	sub_82833238(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828648bc
	if (ctx.cr0.eq) goto loc_828648BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x828648BC;
	sub_82332DB8(ctx, base);
loc_828648BC:
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

__attribute__((alias("__imp__sub_828648D8"))) PPC_WEAK_FUNC(sub_828648D8);
PPC_FUNC_IMPL(__imp__sub_828648D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x828648E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828648F0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r28,0
	ctx.r28.s64 = 0;
	// beq 0x8286492c
	if (ctx.cr0.eq) goto loc_8286492C;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,260
	ctx.r4.s64 = ctx.r11.s64 + 260;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82864918;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,2996
	ctx.r11.s64 = ctx.r11.s64 + 2996;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82864930
	goto loc_82864930;
loc_8286492C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82864930:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82864938;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82864940;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82864978
	if (ctx.cr0.eq) goto loc_82864978;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,280
	ctx.r4.s64 = ctx.r11.s64 + 280;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82864964;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,3008
	ctx.r11.s64 = ctx.r11.s64 + 3008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8286497c
	goto loc_8286497C;
loc_82864978:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286497C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82864984;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286498C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828649c4
	if (ctx.cr0.eq) goto loc_828649C4;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,296
	ctx.r4.s64 = ctx.r11.s64 + 296;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x828649B0;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,3044
	ctx.r11.s64 = ctx.r11.s64 + 3044;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x828649c8
	goto loc_828649C8;
loc_828649C4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828649C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828649D0;
	sub_82843BF8(ctx, base);
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x82333900
	ctx.lr = 0x828649D8;
	sub_82333900(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r11,15852
	ctx.r30.s64 = ctx.r11.s64 + 15852;
	// beq 0x82864a44
	if (ctx.cr0.eq) goto loc_82864A44;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-18424
	ctx.r4.s64 = ctx.r11.s64 + -18424;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82864A04;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r11,3056
	ctx.r9.s64 = ctx.r11.s64 + 3056;
	// addi r11,r31,208
	ctx.r11.s64 = ctx.r31.s64 + 208;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r10,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r28,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r28.u32);
	// stw r28,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r28.u32);
	// stw r28,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r28.u32);
	// stw r28,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r28.u32);
	// stw r28,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r28.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// bl 0x8312e7dc
	ctx.lr = 0x82864A3C;
	sub_8312E7DC(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x82864a48
	goto loc_82864A48;
loc_82864A44:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82864A48:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82864A50;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82864A58;
	sub_82333900(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r25,5
	ctx.r25.s64 = 5;
	// addi r24,r11,2984
	ctx.r24.s64 = ctx.r11.s64 + 2984;
	// beq 0x82864a9c
	if (ctx.cr0.eq) goto loc_82864A9C;
	// bl 0x8287c228
	ctx.lr = 0x82864A70;
	sub_8287C228(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-9384
	ctx.r4.s64 = ctx.r11.s64 + -9384;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82864A8C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x82864aa0
	goto loc_82864AA0;
loc_82864A9C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82864AA0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82864AA8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82864AB0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82864ae0
	if (ctx.cr0.eq) goto loc_82864AE0;
	// bl 0x82870530
	ctx.lr = 0x82864ABC;
	sub_82870530(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-20836
	ctx.r4.s64 = ctx.r11.s64 + -20836;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82864AD8;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82864ae4
	goto loc_82864AE4;
loc_82864AE0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82864AE4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82864AEC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82864AF4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82864b24
	if (ctx.cr0.eq) goto loc_82864B24;
	// bl 0x8284ff70
	ctx.lr = 0x82864B00;
	sub_8284FF70(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-20812
	ctx.r4.s64 = ctx.r11.s64 + -20812;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82864B1C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82864b28
	goto loc_82864B28;
loc_82864B24:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82864B28:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82864B30;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82864B38;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82864b70
	if (ctx.cr0.eq) goto loc_82864B70;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-20504
	ctx.r4.s64 = ctx.r11.s64 + -20504;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82864B5C;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,3068
	ctx.r11.s64 = ctx.r11.s64 + 3068;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82864b74
	goto loc_82864B74;
loc_82864B70:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82864B74:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82864B7C;
	sub_82843BF8(ctx, base);
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x82333900
	ctx.lr = 0x82864B84;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82864be8
	if (ctx.cr0.eq) goto loc_82864BE8;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-20792
	ctx.r4.s64 = ctx.r11.s64 + -20792;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82864BA8;
	sub_82847920(ctx, base);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r31,184
	ctx.r11.s64 = ctx.r31.s64 + 184;
	// addi r10,r10,3080
	ctx.r10.s64 = ctx.r10.s64 + 3080;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// bl 0x8312e7dc
	ctx.lr = 0x82864BC4;
	sub_8312E7DC(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r28,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stw r28,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r28.u32);
	// stw r28,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r28.u32);
	// stw r28,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r28.u32);
	// stw r28,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r28.u32);
	// b 0x82864bec
	goto loc_82864BEC;
loc_82864BE8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82864BEC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82864BF4;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82864BFC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82864c34
	if (ctx.cr0.eq) goto loc_82864C34;
	// bl 0x8287a220
	ctx.lr = 0x82864C08;
	sub_8287A220(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-20736
	ctx.r4.s64 = ctx.r11.s64 + -20736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82864C24;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x82864c38
	goto loc_82864C38;
loc_82864C34:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82864C38:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82864C40;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82864C48;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82864c80
	if (ctx.cr0.eq) goto loc_82864C80;
	// bl 0x82412e78
	ctx.lr = 0x82864C54;
	sub_82412E78(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14180
	ctx.r4.s64 = ctx.r11.s64 + -14180;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82864C70;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x82864c84
	goto loc_82864C84;
loc_82864C80:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82864C84:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82864C8C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82864C94;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82864cc4
	if (ctx.cr0.eq) goto loc_82864CC4;
	// bl 0x8287c078
	ctx.lr = 0x82864CA0;
	sub_8287C078(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-20616
	ctx.r4.s64 = ctx.r11.s64 + -20616;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82864CBC;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82864cc8
	goto loc_82864CC8;
loc_82864CC4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82864CC8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82864CD0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82864CD8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82864d08
	if (ctx.cr0.eq) goto loc_82864D08;
	// bl 0x8288b9e8
	ctx.lr = 0x82864CE4;
	sub_8288B9E8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-20640
	ctx.r4.s64 = ctx.r11.s64 + -20640;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82864D00;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82864d0c
	goto loc_82864D0C;
loc_82864D08:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82864D0C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82864D14;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82864D1C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82864d54
	if (ctx.cr0.eq) goto loc_82864D54;
	// bl 0x8287a360
	ctx.lr = 0x82864D28;
	sub_8287A360(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-8180
	ctx.r4.s64 = ctx.r11.s64 + -8180;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82864D44;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x82864d58
	goto loc_82864D58;
loc_82864D54:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82864D58:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82864D60;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82864D68;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82864d98
	if (ctx.cr0.eq) goto loc_82864D98;
	// bl 0x8288b470
	ctx.lr = 0x82864D74;
	sub_8288B470(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-20456
	ctx.r4.s64 = ctx.r11.s64 + -20456;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82864D90;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82864d9c
	goto loc_82864D9C;
loc_82864D98:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82864D9C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82864DA4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82864DAC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82864de4
	if (ctx.cr0.eq) goto loc_82864DE4;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-21888
	ctx.r4.s64 = ctx.r11.s64 + -21888;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82864DD0;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,3092
	ctx.r11.s64 = ctx.r11.s64 + 3092;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82864de8
	goto loc_82864DE8;
loc_82864DE4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82864DE8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82864DF0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82864DF8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82864e30
	if (ctx.cr0.eq) goto loc_82864E30;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-20684
	ctx.r4.s64 = ctx.r11.s64 + -20684;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82864E1C;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,3104
	ctx.r11.s64 = ctx.r11.s64 + 3104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82864e34
	goto loc_82864E34;
loc_82864E30:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82864E34:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82864E3C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82864E44;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82864e7c
	if (ctx.cr0.eq) goto loc_82864E7C;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-20660
	ctx.r4.s64 = ctx.r11.s64 + -20660;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82864E68;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,3116
	ctx.r11.s64 = ctx.r11.s64 + 3116;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82864e80
	goto loc_82864E80;
loc_82864E7C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82864E80:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82864E88;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82864E90;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82864ec8
	if (ctx.cr0.eq) goto loc_82864EC8;
	// bl 0x8288b330
	ctx.lr = 0x82864E9C;
	sub_8288B330(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-20696
	ctx.r4.s64 = ctx.r11.s64 + -20696;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82864EB8;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x82864ecc
	goto loc_82864ECC;
loc_82864EC8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82864ECC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82864ED4;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82864EDC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82864f14
	if (ctx.cr0.eq) goto loc_82864F14;
	// bl 0x82879f68
	ctx.lr = 0x82864EE8;
	sub_82879F68(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-20484
	ctx.r4.s64 = ctx.r11.s64 + -20484;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82864F04;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x82864f18
	goto loc_82864F18;
loc_82864F14:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82864F18:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82864F20;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82864F28;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82864f58
	if (ctx.cr0.eq) goto loc_82864F58;
	// bl 0x8288aff8
	ctx.lr = 0x82864F34;
	sub_8288AFF8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-18672
	ctx.r4.s64 = ctx.r11.s64 + -18672;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82864F50;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82864f5c
	goto loc_82864F5C;
loc_82864F58:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82864F5C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82864F64;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82864F6C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82864f9c
	if (ctx.cr0.eq) goto loc_82864F9C;
	// bl 0x8288ae98
	ctx.lr = 0x82864F78;
	sub_8288AE98(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-18644
	ctx.r4.s64 = ctx.r11.s64 + -18644;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82864F94;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82864fa0
	goto loc_82864FA0;
loc_82864F9C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82864FA0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82864FA8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82864FB0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82864fe0
	if (ctx.cr0.eq) goto loc_82864FE0;
	// bl 0x8288aaa8
	ctx.lr = 0x82864FBC;
	sub_8288AAA8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-18616
	ctx.r4.s64 = ctx.r11.s64 + -18616;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82864FD8;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82864fe4
	goto loc_82864FE4;
loc_82864FE0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82864FE4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82864FEC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82864FF4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865024
	if (ctx.cr0.eq) goto loc_82865024;
	// bl 0x824c4e38
	ctx.lr = 0x82865000;
	sub_824C4E38(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-18504
	ctx.r4.s64 = ctx.r11.s64 + -18504;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286501C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82865028
	goto loc_82865028;
loc_82865024:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865028:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865030;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865038;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865068
	if (ctx.cr0.eq) goto loc_82865068;
	// bl 0x8288a7c0
	ctx.lr = 0x82865044;
	sub_8288A7C0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-18476
	ctx.r4.s64 = ctx.r11.s64 + -18476;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82865060;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286506c
	goto loc_8286506C;
loc_82865068:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286506C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865074;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286507C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828650ac
	if (ctx.cr0.eq) goto loc_828650AC;
	// bl 0x8288a530
	ctx.lr = 0x82865088;
	sub_8288A530(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-18580
	ctx.r4.s64 = ctx.r11.s64 + -18580;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828650A4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828650b0
	goto loc_828650B0;
loc_828650AC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828650B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828650B8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828650C0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828650f0
	if (ctx.cr0.eq) goto loc_828650F0;
	// bl 0x8288a100
	ctx.lr = 0x828650CC;
	sub_8288A100(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-18540
	ctx.r4.s64 = ctx.r11.s64 + -18540;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828650E8;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828650f4
	goto loc_828650F4;
loc_828650F0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828650F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828650FC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865104;
	sub_82333900(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r11,29096
	ctx.r30.s64 = ctx.r11.s64 + 29096;
	// beq 0x82865140
	if (ctx.cr0.eq) goto loc_82865140;
	// bl 0x82889fc0
	ctx.lr = 0x82865118;
	sub_82889FC0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19892
	ctx.r4.s64 = ctx.r11.s64 + -19892;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82865134;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82865144
	goto loc_82865144;
loc_82865140:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865144:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286514C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865154;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865188
	if (ctx.cr0.eq) goto loc_82865188;
	// bl 0x825bc898
	ctx.lr = 0x82865160;
	sub_825BC898(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-20240
	ctx.r4.s64 = ctx.r11.s64 + -20240;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286517C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8286518c
	goto loc_8286518C;
loc_82865188:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286518C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865194;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286519C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828651d0
	if (ctx.cr0.eq) goto loc_828651D0;
	// bl 0x825bd7f8
	ctx.lr = 0x828651A8;
	sub_825BD7F8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19920
	ctx.r4.s64 = ctx.r11.s64 + -19920;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x828651C4;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x828651d4
	goto loc_828651D4;
loc_828651D0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828651D4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828651DC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828651E4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865218
	if (ctx.cr0.eq) goto loc_82865218;
	// bl 0x82889e60
	ctx.lr = 0x828651F0;
	sub_82889E60(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-20096
	ctx.r4.s64 = ctx.r11.s64 + -20096;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286520C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8286521c
	goto loc_8286521C;
loc_82865218:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286521C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865224;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286522C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865260
	if (ctx.cr0.eq) goto loc_82865260;
	// bl 0x82889d00
	ctx.lr = 0x82865238;
	sub_82889D00(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-20064
	ctx.r4.s64 = ctx.r11.s64 + -20064;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82865254;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82865264
	goto loc_82865264;
loc_82865260:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865264:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286526C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865274;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828652a8
	if (ctx.cr0.eq) goto loc_828652A8;
	// bl 0x824f7370
	ctx.lr = 0x82865280;
	sub_824F7370(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-20032
	ctx.r4.s64 = ctx.r11.s64 + -20032;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286529C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x828652ac
	goto loc_828652AC;
loc_828652A8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828652AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828652B4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828652BC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828652f0
	if (ctx.cr0.eq) goto loc_828652F0;
	// bl 0x825c18a8
	ctx.lr = 0x828652C8;
	sub_825C18A8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-20000
	ctx.r4.s64 = ctx.r11.s64 + -20000;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x828652E4;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x828652f4
	goto loc_828652F4;
loc_828652F0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828652F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828652FC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865304;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865338
	if (ctx.cr0.eq) goto loc_82865338;
	// bl 0x82593960
	ctx.lr = 0x82865310;
	sub_82593960(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-20124
	ctx.r4.s64 = ctx.r11.s64 + -20124;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286532C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8286533c
	goto loc_8286533C;
loc_82865338:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286533C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865344;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286534C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865380
	if (ctx.cr0.eq) goto loc_82865380;
	// bl 0x82889b68
	ctx.lr = 0x82865358;
	sub_82889B68(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19864
	ctx.r4.s64 = ctx.r11.s64 + -19864;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82865374;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82865384
	goto loc_82865384;
loc_82865380:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865384:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286538C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865394;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828653c8
	if (ctx.cr0.eq) goto loc_828653C8;
	// bl 0x825c3738
	ctx.lr = 0x828653A0;
	sub_825C3738(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-20216
	ctx.r4.s64 = ctx.r11.s64 + -20216;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x828653BC;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x828653cc
	goto loc_828653CC;
loc_828653C8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828653CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828653D4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828653DC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865410
	if (ctx.cr0.eq) goto loc_82865410;
	// bl 0x825cf8d8
	ctx.lr = 0x828653E8;
	sub_825CF8D8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-20184
	ctx.r4.s64 = ctx.r11.s64 + -20184;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82865404;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82865414
	goto loc_82865414;
loc_82865410:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865414:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286541C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865424;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865458
	if (ctx.cr0.eq) goto loc_82865458;
	// bl 0x82889a60
	ctx.lr = 0x82865430;
	sub_82889A60(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19804
	ctx.r4.s64 = ctx.r11.s64 + -19804;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286544C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8286545c
	goto loc_8286545C;
loc_82865458:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286545C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865464;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286546C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828654a0
	if (ctx.cr0.eq) goto loc_828654A0;
	// bl 0x82889958
	ctx.lr = 0x82865478;
	sub_82889958(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-20156
	ctx.r4.s64 = ctx.r11.s64 + -20156;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82865494;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x828654a4
	goto loc_828654A4;
loc_828654A0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828654A4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828654AC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828654B4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828654e8
	if (ctx.cr0.eq) goto loc_828654E8;
	// bl 0x82889540
	ctx.lr = 0x828654C0;
	sub_82889540(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19944
	ctx.r4.s64 = ctx.r11.s64 + -19944;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x828654DC;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x828654ec
	goto loc_828654EC;
loc_828654E8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828654EC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828654F4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828654FC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865530
	if (ctx.cr0.eq) goto loc_82865530;
	// bl 0x828893d8
	ctx.lr = 0x82865508;
	sub_828893D8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19780
	ctx.r4.s64 = ctx.r11.s64 + -19780;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82865524;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82865534
	goto loc_82865534;
loc_82865530:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865534:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286553C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865544;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865578
	if (ctx.cr0.eq) goto loc_82865578;
	// bl 0x82889260
	ctx.lr = 0x82865550;
	sub_82889260(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-17932
	ctx.r4.s64 = ctx.r11.s64 + -17932;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286556C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8286557c
	goto loc_8286557C;
loc_82865578:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286557C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865584;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286558C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828655c0
	if (ctx.cr0.eq) goto loc_828655C0;
	// bl 0x82412588
	ctx.lr = 0x82865598;
	sub_82412588(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-20412
	ctx.r4.s64 = ctx.r11.s64 + -20412;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x828655B4;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x828655c4
	goto loc_828655C4;
loc_828655C0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828655C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828655CC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828655D4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865608
	if (ctx.cr0.eq) goto loc_82865608;
	// bl 0x828890e0
	ctx.lr = 0x828655E0;
	sub_828890E0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-17896
	ctx.r4.s64 = ctx.r11.s64 + -17896;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x828655FC;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8286560c
	goto loc_8286560C;
loc_82865608:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286560C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865614;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286561C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865650
	if (ctx.cr0.eq) goto loc_82865650;
	// bl 0x82615908
	ctx.lr = 0x82865628;
	sub_82615908(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19748
	ctx.r4.s64 = ctx.r11.s64 + -19748;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82865644;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82865654
	goto loc_82865654;
loc_82865650:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865654:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286565C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865664;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865698
	if (ctx.cr0.eq) goto loc_82865698;
	// bl 0x82615f88
	ctx.lr = 0x82865670;
	sub_82615F88(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19664
	ctx.r4.s64 = ctx.r11.s64 + -19664;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286568C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8286569c
	goto loc_8286569C;
loc_82865698:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286569C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828656A4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828656AC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828656e0
	if (ctx.cr0.eq) goto loc_828656E0;
	// bl 0x82615a68
	ctx.lr = 0x828656B8;
	sub_82615A68(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19688
	ctx.r4.s64 = ctx.r11.s64 + -19688;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x828656D4;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x828656e4
	goto loc_828656E4;
loc_828656E0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828656E4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828656EC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828656F4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865728
	if (ctx.cr0.eq) goto loc_82865728;
	// bl 0x824d4928
	ctx.lr = 0x82865700;
	sub_824D4928(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19964
	ctx.r4.s64 = ctx.r11.s64 + -19964;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286571C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8286572c
	goto loc_8286572C;
loc_82865728:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286572C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865734;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286573C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865770
	if (ctx.cr0.eq) goto loc_82865770;
	// bl 0x825c77e8
	ctx.lr = 0x82865748;
	sub_825C77E8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-20324
	ctx.r4.s64 = ctx.r11.s64 + -20324;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82865764;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82865774
	goto loc_82865774;
loc_82865770:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865774:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286577C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865784;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828657b8
	if (ctx.cr0.eq) goto loc_828657B8;
	// bl 0x826516b0
	ctx.lr = 0x82865790;
	sub_826516B0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-20384
	ctx.r4.s64 = ctx.r11.s64 + -20384;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x828657AC;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x828657bc
	goto loc_828657BC;
loc_828657B8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828657BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828657C4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828657CC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865800
	if (ctx.cr0.eq) goto loc_82865800;
	// bl 0x82888f80
	ctx.lr = 0x828657D8;
	sub_82888F80(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19724
	ctx.r4.s64 = ctx.r11.s64 + -19724;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x828657F4;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82865804
	goto loc_82865804;
loc_82865800:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865804:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286580C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865814;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286584c
	if (ctx.cr0.eq) goto loc_8286584C;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-18712
	ctx.r4.s64 = ctx.r11.s64 + -18712;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82865838;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,3200
	ctx.r11.s64 = ctx.r11.s64 + 3200;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82865850
	goto loc_82865850;
loc_8286584C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865850:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865858;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865860;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865890
	if (ctx.cr0.eq) goto loc_82865890;
	// bl 0x82888cf0
	ctx.lr = 0x8286586C;
	sub_82888CF0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-18316
	ctx.r4.s64 = ctx.r11.s64 + -18316;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82865888;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82865894
	goto loc_82865894;
loc_82865890:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865894:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286589C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828658A4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828658d4
	if (ctx.cr0.eq) goto loc_828658D4;
	// bl 0x82888a60
	ctx.lr = 0x828658B0;
	sub_82888A60(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-18280
	ctx.r4.s64 = ctx.r11.s64 + -18280;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828658CC;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828658d8
	goto loc_828658D8;
loc_828658D4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828658D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828658E0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828658E8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865918
	if (ctx.cr0.eq) goto loc_82865918;
	// bl 0x824f7268
	ctx.lr = 0x828658F4;
	sub_824F7268(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-18252
	ctx.r4.s64 = ctx.r11.s64 + -18252;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82865910;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286591c
	goto loc_8286591C;
loc_82865918:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286591C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865924;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286592C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286595c
	if (ctx.cr0.eq) goto loc_8286595C;
	// bl 0x82403da0
	ctx.lr = 0x82865938;
	sub_82403DA0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-18228
	ctx.r4.s64 = ctx.r11.s64 + -18228;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82865954;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82865960
	goto loc_82865960;
loc_8286595C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865960:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865968;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865970;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828659a0
	if (ctx.cr0.eq) goto loc_828659A0;
	// bl 0x824f7478
	ctx.lr = 0x8286597C;
	sub_824F7478(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-18200
	ctx.r4.s64 = ctx.r11.s64 + -18200;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82865998;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828659a4
	goto loc_828659A4;
loc_828659A0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828659A4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828659AC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828659B4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828659e4
	if (ctx.cr0.eq) goto loc_828659E4;
	// bl 0x828887d0
	ctx.lr = 0x828659C0;
	sub_828887D0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-18168
	ctx.r4.s64 = ctx.r11.s64 + -18168;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828659DC;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828659e8
	goto loc_828659E8;
loc_828659E4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828659E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828659F0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828659F8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865a28
	if (ctx.cr0.eq) goto loc_82865A28;
	// bl 0x828886c8
	ctx.lr = 0x82865A04;
	sub_828886C8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-18140
	ctx.r4.s64 = ctx.r11.s64 + -18140;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82865A20;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82865a2c
	goto loc_82865A2C;
loc_82865A28:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865A2C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865A34;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865A3C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865a74
	if (ctx.cr0.eq) goto loc_82865A74;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-18836
	ctx.r4.s64 = ctx.r11.s64 + -18836;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82865A60;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,3128
	ctx.r11.s64 = ctx.r11.s64 + 3128;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82865a78
	goto loc_82865A78;
loc_82865A74:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865A78:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865A80;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865A88;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865ac0
	if (ctx.cr0.eq) goto loc_82865AC0;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-18692
	ctx.r4.s64 = ctx.r11.s64 + -18692;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82865AAC;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,3140
	ctx.r11.s64 = ctx.r11.s64 + 3140;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82865ac4
	goto loc_82865AC4;
loc_82865AC0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865AC4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865ACC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865AD4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865b0c
	if (ctx.cr0.eq) goto loc_82865B0C;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-18800
	ctx.r4.s64 = ctx.r11.s64 + -18800;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82865AF8;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,3152
	ctx.r11.s64 = ctx.r11.s64 + 3152;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82865b10
	goto loc_82865B10;
loc_82865B0C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865B10:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865B18;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865B20;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865b58
	if (ctx.cr0.eq) goto loc_82865B58;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-18780
	ctx.r4.s64 = ctx.r11.s64 + -18780;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82865B44;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,3164
	ctx.r11.s64 = ctx.r11.s64 + 3164;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82865b5c
	goto loc_82865B5C;
loc_82865B58:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865B5C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865B64;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865B6C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865ba4
	if (ctx.cr0.eq) goto loc_82865BA4;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-18756
	ctx.r4.s64 = ctx.r11.s64 + -18756;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82865B90;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,3176
	ctx.r11.s64 = ctx.r11.s64 + 3176;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82865ba8
	goto loc_82865BA8;
loc_82865BA4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865BA8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865BB0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865BB8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865bf0
	if (ctx.cr0.eq) goto loc_82865BF0;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-18820
	ctx.r4.s64 = ctx.r11.s64 + -18820;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82865BDC;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,3188
	ctx.r11.s64 = ctx.r11.s64 + 3188;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82865bf4
	goto loc_82865BF4;
loc_82865BF0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865BF4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865BFC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865C04;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865c3c
	if (ctx.cr0.eq) goto loc_82865C3C;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-18356
	ctx.r4.s64 = ctx.r11.s64 + -18356;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82865C28;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,3212
	ctx.r11.s64 = ctx.r11.s64 + 3212;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82865c40
	goto loc_82865C40;
loc_82865C3C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865C40:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865C48;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865C50;
	sub_82333900(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r26,r11,29084
	ctx.r26.s64 = ctx.r11.s64 + 29084;
	// beq 0x82865c88
	if (ctx.cr0.eq) goto loc_82865C88;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,328
	ctx.r4.s64 = ctx.r11.s64 + 328;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82865C7C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// b 0x82865c8c
	goto loc_82865C8C;
loc_82865C88:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865C8C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865C94;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865C9C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865ccc
	if (ctx.cr0.eq) goto loc_82865CCC;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,352
	ctx.r4.s64 = ctx.r11.s64 + 352;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82865CC0;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// b 0x82865cd0
	goto loc_82865CD0;
loc_82865CCC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865CD0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865CD8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865CE0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865d10
	if (ctx.cr0.eq) goto loc_82865D10;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,376
	ctx.r4.s64 = ctx.r11.s64 + 376;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82865D04;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// b 0x82865d14
	goto loc_82865D14;
loc_82865D10:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865D14:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865D1C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865D24;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865d54
	if (ctx.cr0.eq) goto loc_82865D54;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,404
	ctx.r4.s64 = ctx.r11.s64 + 404;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82865D48;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// b 0x82865d58
	goto loc_82865D58;
loc_82865D54:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865D58:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865D60;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865D68;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865d98
	if (ctx.cr0.eq) goto loc_82865D98;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,424
	ctx.r4.s64 = ctx.r11.s64 + 424;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82865D8C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// b 0x82865d9c
	goto loc_82865D9C;
loc_82865D98:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865D9C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865DA4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865DAC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865ddc
	if (ctx.cr0.eq) goto loc_82865DDC;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,444
	ctx.r4.s64 = ctx.r11.s64 + 444;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82865DD0;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// b 0x82865de0
	goto loc_82865DE0;
loc_82865DDC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865DE0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865DE8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865DF0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865e20
	if (ctx.cr0.eq) goto loc_82865E20;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,7312
	ctx.r4.s64 = ctx.r11.s64 + 7312;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82865E14;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// b 0x82865e24
	goto loc_82865E24;
loc_82865E20:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865E24:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865E2C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865E34;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865e6c
	if (ctx.cr0.eq) goto loc_82865E6C;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-19060
	ctx.r4.s64 = ctx.r11.s64 + -19060;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82865E58;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,3032
	ctx.r11.s64 = ctx.r11.s64 + 3032;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82865e70
	goto loc_82865E70;
loc_82865E6C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865E70:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865E78;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865E80;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865eb8
	if (ctx.cr0.eq) goto loc_82865EB8;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-18376
	ctx.r4.s64 = ctx.r11.s64 + -18376;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82865EA4;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,3020
	ctx.r11.s64 = ctx.r11.s64 + 3020;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82865ebc
	goto loc_82865EBC;
loc_82865EB8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865EBC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865EC4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865ECC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865f04
	if (ctx.cr0.eq) goto loc_82865F04;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-18052
	ctx.r4.s64 = ctx.r11.s64 + -18052;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82865EF0;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,3224
	ctx.r11.s64 = ctx.r11.s64 + 3224;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82865f08
	goto loc_82865F08;
loc_82865F04:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865F08:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865F10;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865F18;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865f50
	if (ctx.cr0.eq) goto loc_82865F50;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-17780
	ctx.r4.s64 = ctx.r11.s64 + -17780;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82865F3C;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,3236
	ctx.r11.s64 = ctx.r11.s64 + 3236;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82865f54
	goto loc_82865F54;
loc_82865F50:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865F54:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865F5C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865F64;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82865f94
	if (ctx.cr0.eq) goto loc_82865F94;
	// bl 0x8287bdd0
	ctx.lr = 0x82865F70;
	sub_8287BDD0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-17760
	ctx.r4.s64 = ctx.r11.s64 + -17760;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82865F8C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82865f98
	goto loc_82865F98;
loc_82865F94:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865F98:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865FA0;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82865FA8;
	sub_82333900(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r27,r11,924
	ctx.r27.s64 = ctx.r11.s64 + 924;
	// beq 0x82865fe8
	if (ctx.cr0.eq) goto loc_82865FE8;
	// bl 0x82888550
	ctx.lr = 0x82865FBC;
	sub_82888550(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-20528
	ctx.r4.s64 = ctx.r11.s64 + -20528;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82865FD8;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x82865fec
	goto loc_82865FEC;
loc_82865FE8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82865FEC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82865FF4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82865FFC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286602c
	if (ctx.cr0.eq) goto loc_8286602C;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-20560
	ctx.r4.s64 = ctx.r11.s64 + -20560;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82866020;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// b 0x82866030
	goto loc_82866030;
loc_8286602C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866030:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866038;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82866040;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866070
	if (ctx.cr0.eq) goto loc_82866070;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-20580
	ctx.r4.s64 = ctx.r11.s64 + -20580;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82866064;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// b 0x82866074
	goto loc_82866074;
loc_82866070:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866074:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286607C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82866084;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828660bc
	if (ctx.cr0.eq) goto loc_828660BC;
	// bl 0x8287c3e0
	ctx.lr = 0x82866090;
	sub_8287C3E0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-10700
	ctx.r4.s64 = ctx.r11.s64 + -10700;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x828660AC;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x828660c0
	goto loc_828660C0;
loc_828660BC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828660C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828660C8;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x828660D0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866108
	if (ctx.cr0.eq) goto loc_82866108;
	// bl 0x82485608
	ctx.lr = 0x828660DC;
	sub_82485608(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19640
	ctx.r4.s64 = ctx.r11.s64 + -19640;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x828660F8;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x8286610c
	goto loc_8286610C;
loc_82866108:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286610C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866114;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8286611C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866154
	if (ctx.cr0.eq) goto loc_82866154;
	// bl 0x8248d030
	ctx.lr = 0x82866128;
	sub_8248D030(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19332
	ctx.r4.s64 = ctx.r11.s64 + -19332;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82866144;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x82866158
	goto loc_82866158;
loc_82866154:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866158:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866160;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82866168;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828661a0
	if (ctx.cr0.eq) goto loc_828661A0;
	// bl 0x8248d8e8
	ctx.lr = 0x82866174;
	sub_8248D8E8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19592
	ctx.r4.s64 = ctx.r11.s64 + -19592;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82866190;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x828661a4
	goto loc_828661A4;
loc_828661A0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828661A4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828661AC;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x828661B4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828661ec
	if (ctx.cr0.eq) goto loc_828661EC;
	// bl 0x82482fd8
	ctx.lr = 0x828661C0;
	sub_82482FD8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19292
	ctx.r4.s64 = ctx.r11.s64 + -19292;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x828661DC;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x828661f0
	goto loc_828661F0;
loc_828661EC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828661F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828661F8;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82866200;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866238
	if (ctx.cr0.eq) goto loc_82866238;
	// bl 0x82483440
	ctx.lr = 0x8286620C;
	sub_82483440(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,472
	ctx.r4.s64 = ctx.r11.s64 + 472;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82866228;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x8286623c
	goto loc_8286623C;
loc_82866238:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286623C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866244;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8286624C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866284
	if (ctx.cr0.eq) goto loc_82866284;
	// bl 0x82483150
	ctx.lr = 0x82866258;
	sub_82483150(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,500
	ctx.r4.s64 = ctx.r11.s64 + 500;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82866274;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x82866288
	goto loc_82866288;
loc_82866284:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866288:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866290;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82866298;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828662d0
	if (ctx.cr0.eq) goto loc_828662D0;
	// bl 0x824832c8
	ctx.lr = 0x828662A4;
	sub_824832C8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,528
	ctx.r4.s64 = ctx.r11.s64 + 528;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x828662C0;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x828662d4
	goto loc_828662D4;
loc_828662D0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828662D4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828662DC;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x828662E4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286631c
	if (ctx.cr0.eq) goto loc_8286631C;
	// bl 0x8248cb00
	ctx.lr = 0x828662F0;
	sub_8248CB00(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19564
	ctx.r4.s64 = ctx.r11.s64 + -19564;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286630C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x82866320
	goto loc_82866320;
loc_8286631C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866320:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866328;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82866330;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866368
	if (ctx.cr0.eq) goto loc_82866368;
	// bl 0x8248cb00
	ctx.lr = 0x8286633C;
	sub_8248CB00(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,552
	ctx.r4.s64 = ctx.r11.s64 + 552;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82866358;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x8286636c
	goto loc_8286636C;
loc_82866368:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286636C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866374;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8286637C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828663b4
	if (ctx.cr0.eq) goto loc_828663B4;
	// bl 0x82888298
	ctx.lr = 0x82866388;
	sub_82888298(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19544
	ctx.r4.s64 = ctx.r11.s64 + -19544;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x828663A4;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x828663b8
	goto loc_828663B8;
loc_828663B4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828663B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828663C0;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x828663C8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866400
	if (ctx.cr0.eq) goto loc_82866400;
	// bl 0x82888130
	ctx.lr = 0x828663D4;
	sub_82888130(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19516
	ctx.r4.s64 = ctx.r11.s64 + -19516;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x828663F0;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x82866404
	goto loc_82866404;
loc_82866400:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866404:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286640C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82866414;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286644c
	if (ctx.cr0.eq) goto loc_8286644C;
	// bl 0x82887e88
	ctx.lr = 0x82866420;
	sub_82887E88(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19492
	ctx.r4.s64 = ctx.r11.s64 + -19492;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286643C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x82866450
	goto loc_82866450;
loc_8286644C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866450:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866458;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82866460;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866498
	if (ctx.cr0.eq) goto loc_82866498;
	// bl 0x82887b80
	ctx.lr = 0x8286646C;
	sub_82887B80(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19464
	ctx.r4.s64 = ctx.r11.s64 + -19464;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82866488;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x8286649c
	goto loc_8286649C;
loc_82866498:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286649C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828664A4;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x828664AC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828664e4
	if (ctx.cr0.eq) goto loc_828664E4;
	// bl 0x828878d8
	ctx.lr = 0x828664B8;
	sub_828878D8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19440
	ctx.r4.s64 = ctx.r11.s64 + -19440;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x828664D4;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x828664e8
	goto loc_828664E8;
loc_828664E4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828664E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828664F0;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x828664F8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866530
	if (ctx.cr0.eq) goto loc_82866530;
	// bl 0x828874e8
	ctx.lr = 0x82866504;
	sub_828874E8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19412
	ctx.r4.s64 = ctx.r11.s64 + -19412;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82866520;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x82866534
	goto loc_82866534;
loc_82866530:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866534:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286653C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82866544;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286657c
	if (ctx.cr0.eq) goto loc_8286657C;
	// bl 0x82887230
	ctx.lr = 0x82866550;
	sub_82887230(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19384
	ctx.r4.s64 = ctx.r11.s64 + -19384;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286656C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x82866580
	goto loc_82866580;
loc_8286657C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866580:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866588;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82866590;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828665c8
	if (ctx.cr0.eq) goto loc_828665C8;
	// bl 0x82886f40
	ctx.lr = 0x8286659C;
	sub_82886F40(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19360
	ctx.r4.s64 = ctx.r11.s64 + -19360;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x828665B8;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x828665cc
	goto loc_828665CC;
loc_828665C8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828665CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828665D4;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x828665DC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866614
	if (ctx.cr0.eq) goto loc_82866614;
	// bl 0x82886c48
	ctx.lr = 0x828665E8;
	sub_82886C48(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-18896
	ctx.r4.s64 = ctx.r11.s64 + -18896;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82866604;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x82866618
	goto loc_82866618;
loc_82866614:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866618:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866620;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82866628;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866660
	if (ctx.cr0.eq) goto loc_82866660;
	// bl 0x82886960
	ctx.lr = 0x82866634;
	sub_82886960(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-18868
	ctx.r4.s64 = ctx.r11.s64 + -18868;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82866650;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x82866664
	goto loc_82866664;
loc_82866660:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866664:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286666C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82866674;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828666ac
	if (ctx.cr0.eq) goto loc_828666AC;
	// bl 0x828866a8
	ctx.lr = 0x82866680;
	sub_828866A8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19088
	ctx.r4.s64 = ctx.r11.s64 + -19088;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286669C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x828666b0
	goto loc_828666B0;
loc_828666AC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828666B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828666B8;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x828666C0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828666fc
	if (ctx.cr0.eq) goto loc_828666FC;
	// bl 0x82437b78
	ctx.lr = 0x828666CC;
	sub_82437B78(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14200
	ctx.r4.s64 = ctx.r11.s64 + -14200;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x828666E8;
	sub_82847920(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// b 0x82866700
	goto loc_82866700;
loc_828666FC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866700:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866708;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82866710;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866748
	if (ctx.cr0.eq) goto loc_82866748;
	// bl 0x82569060
	ctx.lr = 0x8286671C;
	sub_82569060(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19016
	ctx.r4.s64 = ctx.r11.s64 + -19016;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82866738;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x8286674c
	goto loc_8286674C;
loc_82866748:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286674C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866754;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8286675C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866794
	if (ctx.cr0.eq) goto loc_82866794;
	// bl 0x82872718
	ctx.lr = 0x82866768;
	sub_82872718(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-17652
	ctx.r4.s64 = ctx.r11.s64 + -17652;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82866784;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x82866798
	goto loc_82866798;
loc_82866794:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866798:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828667A0;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x828667A8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828667e0
	if (ctx.cr0.eq) goto loc_828667E0;
	// bl 0x82872890
	ctx.lr = 0x828667B4;
	sub_82872890(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-17628
	ctx.r4.s64 = ctx.r11.s64 + -17628;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x828667D0;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x828667e4
	goto loc_828667E4;
loc_828667E0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828667E4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828667EC;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x828667F4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286682c
	if (ctx.cr0.eq) goto loc_8286682C;
	// bl 0x824101a8
	ctx.lr = 0x82866800;
	sub_824101A8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-17604
	ctx.r4.s64 = ctx.r11.s64 + -17604;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286681C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x82866830
	goto loc_82866830;
loc_8286682C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866830:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866838;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82866840;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866878
	if (ctx.cr0.eq) goto loc_82866878;
	// bl 0x8282d970
	ctx.lr = 0x8286684C;
	sub_8282D970(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-17076
	ctx.r4.s64 = ctx.r11.s64 + -17076;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82866868;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x8286687c
	goto loc_8286687C;
loc_82866878:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286687C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866884;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8286688C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828668c4
	if (ctx.cr0.eq) goto loc_828668C4;
	// bl 0x824f5d30
	ctx.lr = 0x82866898;
	sub_824F5D30(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-17052
	ctx.r4.s64 = ctx.r11.s64 + -17052;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x828668B4;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x828668c8
	goto loc_828668C8;
loc_828668C4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828668C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828668D0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828668D8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866908
	if (ctx.cr0.eq) goto loc_82866908;
	// bl 0x8287bb88
	ctx.lr = 0x828668E4;
	sub_8287BB88(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-17524
	ctx.r4.s64 = ctx.r11.s64 + -17524;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82866900;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286690c
	goto loc_8286690C;
loc_82866908:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286690C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866914;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8286691C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866954
	if (ctx.cr0.eq) goto loc_82866954;
	// bl 0x82481648
	ctx.lr = 0x82866928;
	sub_82481648(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-17024
	ctx.r4.s64 = ctx.r11.s64 + -17024;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82866944;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x82866958
	goto loc_82866958;
loc_82866954:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866958:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866960;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82866968;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828669a0
	if (ctx.cr0.eq) goto loc_828669A0;
	// bl 0x82479c38
	ctx.lr = 0x82866974;
	sub_82479C38(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-17220
	ctx.r4.s64 = ctx.r11.s64 + -17220;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82866990;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x828669a4
	goto loc_828669A4;
loc_828669A0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828669A4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828669AC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828669B4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828669e4
	if (ctx.cr0.eq) goto loc_828669E4;
	// bl 0x827df6e8
	ctx.lr = 0x828669C0;
	sub_827DF6E8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-17332
	ctx.r4.s64 = ctx.r11.s64 + -17332;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828669DC;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828669e8
	goto loc_828669E8;
loc_828669E4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828669E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828669F0;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x828669F8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866a30
	if (ctx.cr0.eq) goto loc_82866A30;
	// bl 0x82481390
	ctx.lr = 0x82866A04;
	sub_82481390(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-17492
	ctx.r4.s64 = ctx.r11.s64 + -17492;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82866A20;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x82866a34
	goto loc_82866A34;
loc_82866A30:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866A34:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866A3C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82866A44;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866a7c
	if (ctx.cr0.eq) goto loc_82866A7C;
	// bl 0x82872b80
	ctx.lr = 0x82866A50;
	sub_82872B80(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-10240
	ctx.r4.s64 = ctx.r11.s64 + -10240;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82866A6C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x82866a80
	goto loc_82866A80;
loc_82866A7C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866A80:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866A88;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82866A90;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866ac8
	if (ctx.cr0.eq) goto loc_82866AC8;
	// bl 0x82872cc0
	ctx.lr = 0x82866A9C;
	sub_82872CC0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-10200
	ctx.r4.s64 = ctx.r11.s64 + -10200;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82866AB8;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x82866acc
	goto loc_82866ACC;
loc_82866AC8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866ACC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866AD4;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82866ADC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866b14
	if (ctx.cr0.eq) goto loc_82866B14;
	// bl 0x8287ba28
	ctx.lr = 0x82866AE8;
	sub_8287BA28(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-17108
	ctx.r4.s64 = ctx.r11.s64 + -17108;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82866B04;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x82866b18
	goto loc_82866B18;
loc_82866B14:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866B18:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866B20;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82866B28;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866b58
	if (ctx.cr0.eq) goto loc_82866B58;
	// bl 0x827eb2f8
	ctx.lr = 0x82866B34;
	sub_827EB2F8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-21432
	ctx.r4.s64 = ctx.r11.s64 + -21432;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82866B50;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82866b5c
	goto loc_82866B5C;
loc_82866B58:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866B5C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866B64;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82866B6C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866b9c
	if (ctx.cr0.eq) goto loc_82866B9C;
	// bl 0x827ebd68
	ctx.lr = 0x82866B78;
	sub_827EBD68(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-21408
	ctx.r4.s64 = ctx.r11.s64 + -21408;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82866B94;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82866ba0
	goto loc_82866BA0;
loc_82866B9C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866BA0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866BA8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82866BB0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866be0
	if (ctx.cr0.eq) goto loc_82866BE0;
	// bl 0x827ebbf0
	ctx.lr = 0x82866BBC;
	sub_827EBBF0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-21380
	ctx.r4.s64 = ctx.r11.s64 + -21380;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82866BD8;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82866be4
	goto loc_82866BE4;
loc_82866BE0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866BE4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866BEC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82866BF4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866c24
	if (ctx.cr0.eq) goto loc_82866C24;
	// bl 0x827eb8c8
	ctx.lr = 0x82866C00;
	sub_827EB8C8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-21348
	ctx.r4.s64 = ctx.r11.s64 + -21348;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82866C1C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82866c28
	goto loc_82866C28;
loc_82866C24:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866C28:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866C30;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82866C38;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866c68
	if (ctx.cr0.eq) goto loc_82866C68;
	// bl 0x827eb5d8
	ctx.lr = 0x82866C44;
	sub_827EB5D8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-21316
	ctx.r4.s64 = ctx.r11.s64 + -21316;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82866C60;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82866c6c
	goto loc_82866C6C;
loc_82866C68:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866C6C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866C74;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82866C7C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866cac
	if (ctx.cr0.eq) goto loc_82866CAC;
	// bl 0x827eba68
	ctx.lr = 0x82866C88;
	sub_827EBA68(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-21272
	ctx.r4.s64 = ctx.r11.s64 + -21272;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82866CA4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82866cb0
	goto loc_82866CB0;
loc_82866CAC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866CB0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866CB8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82866CC0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866cf0
	if (ctx.cr0.eq) goto loc_82866CF0;
	// bl 0x827eb750
	ctx.lr = 0x82866CCC;
	sub_827EB750(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-21240
	ctx.r4.s64 = ctx.r11.s64 + -21240;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82866CE8;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82866cf4
	goto loc_82866CF4;
loc_82866CF0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866CF4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866CFC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82866D04;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866d34
	if (ctx.cr0.eq) goto loc_82866D34;
	// bl 0x827eb438
	ctx.lr = 0x82866D10;
	sub_827EB438(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-21196
	ctx.r4.s64 = ctx.r11.s64 + -21196;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82866D2C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82866d38
	goto loc_82866D38;
loc_82866D34:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866D38:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866D40;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82866D48;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866d78
	if (ctx.cr0.eq) goto loc_82866D78;
	// bl 0x827eb170
	ctx.lr = 0x82866D54;
	sub_827EB170(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-21160
	ctx.r4.s64 = ctx.r11.s64 + -21160;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82866D70;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82866d7c
	goto loc_82866D7C;
loc_82866D78:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866D7C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866D84;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82866D8C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866dbc
	if (ctx.cr0.eq) goto loc_82866DBC;
	// bl 0x8287a4a0
	ctx.lr = 0x82866D98;
	sub_8287A4A0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-21132
	ctx.r4.s64 = ctx.r11.s64 + -21132;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82866DB4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82866dc0
	goto loc_82866DC0;
loc_82866DBC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866DC0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866DC8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82866DD0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866e00
	if (ctx.cr0.eq) goto loc_82866E00;
	// bl 0x8287a620
	ctx.lr = 0x82866DDC;
	sub_8287A620(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-21100
	ctx.r4.s64 = ctx.r11.s64 + -21100;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82866DF8;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82866e04
	goto loc_82866E04;
loc_82866E00:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866E04:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866E0C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82866E14;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866e44
	if (ctx.cr0.eq) goto loc_82866E44;
	// bl 0x827eb068
	ctx.lr = 0x82866E20;
	sub_827EB068(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-9508
	ctx.r4.s64 = ctx.r11.s64 + -9508;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82866E3C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82866e48
	goto loc_82866E48;
loc_82866E44:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866E48:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866E50;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82866E58;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866e88
	if (ctx.cr0.eq) goto loc_82866E88;
	// bl 0x8287a980
	ctx.lr = 0x82866E64;
	sub_8287A980(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-9476
	ctx.r4.s64 = ctx.r11.s64 + -9476;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82866E80;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82866e8c
	goto loc_82866E8C;
loc_82866E88:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866E8C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866E94;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82866E9C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866ecc
	if (ctx.cr0.eq) goto loc_82866ECC;
	// bl 0x8287a7e8
	ctx.lr = 0x82866EA8;
	sub_8287A7E8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-9448
	ctx.r4.s64 = ctx.r11.s64 + -9448;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82866EC4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82866ed0
	goto loc_82866ED0;
loc_82866ECC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866ED0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866ED8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82866EE0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866f10
	if (ctx.cr0.eq) goto loc_82866F10;
	// bl 0x8287ab18
	ctx.lr = 0x82866EEC;
	sub_8287AB18(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-9416
	ctx.r4.s64 = ctx.r11.s64 + -9416;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82866F08;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82866f14
	goto loc_82866F14;
loc_82866F10:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866F14:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866F1C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82866F24;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866f54
	if (ctx.cr0.eq) goto loc_82866F54;
	// bl 0x827ed730
	ctx.lr = 0x82866F30;
	sub_827ED730(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,576
	ctx.r4.s64 = ctx.r11.s64 + 576;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82866F4C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82866f58
	goto loc_82866F58;
loc_82866F54:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866F58:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866F60;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82866F68;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866f98
	if (ctx.cr0.eq) goto loc_82866F98;
	// bl 0x8287ac58
	ctx.lr = 0x82866F74;
	sub_8287AC58(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-21036
	ctx.r4.s64 = ctx.r11.s64 + -21036;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82866F90;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82866f9c
	goto loc_82866F9C;
loc_82866F98:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866F9C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866FA4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82866FAC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82866fdc
	if (ctx.cr0.eq) goto loc_82866FDC;
	// bl 0x8287ae00
	ctx.lr = 0x82866FB8;
	sub_8287AE00(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-21008
	ctx.r4.s64 = ctx.r11.s64 + -21008;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82866FD4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82866fe0
	goto loc_82866FE0;
loc_82866FDC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82866FE0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82866FE8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82866FF0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867020
	if (ctx.cr0.eq) goto loc_82867020;
	// bl 0x8287af78
	ctx.lr = 0x82866FFC;
	sub_8287AF78(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-20976
	ctx.r4.s64 = ctx.r11.s64 + -20976;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867018;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867024
	goto loc_82867024;
loc_82867020:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867024:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286702C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867034;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867064
	if (ctx.cr0.eq) goto loc_82867064;
	// bl 0x8287b110
	ctx.lr = 0x82867040;
	sub_8287B110(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-20948
	ctx.r4.s64 = ctx.r11.s64 + -20948;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286705C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867068
	goto loc_82867068;
loc_82867064:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867068:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867070;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867078;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828670a8
	if (ctx.cr0.eq) goto loc_828670A8;
	// bl 0x8287b2b8
	ctx.lr = 0x82867084;
	sub_8287B2B8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-20920
	ctx.r4.s64 = ctx.r11.s64 + -20920;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828670A0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828670ac
	goto loc_828670AC;
loc_828670A8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828670AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828670B4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828670BC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828670ec
	if (ctx.cr0.eq) goto loc_828670EC;
	// bl 0x827e9c00
	ctx.lr = 0x828670C8;
	sub_827E9C00(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-20892
	ctx.r4.s64 = ctx.r11.s64 + -20892;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828670E4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828670f0
	goto loc_828670F0;
loc_828670EC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828670F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828670F8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867100;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867130
	if (ctx.cr0.eq) goto loc_82867130;
	// bl 0x8287b448
	ctx.lr = 0x8286710C;
	sub_8287B448(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-20864
	ctx.r4.s64 = ctx.r11.s64 + -20864;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867128;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867134
	goto loc_82867134;
loc_82867130:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867134:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286713C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867144;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867174
	if (ctx.cr0.eq) goto loc_82867174;
	// bl 0x8287b720
	ctx.lr = 0x82867150;
	sub_8287B720(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15012
	ctx.r4.s64 = ctx.r11.s64 + -15012;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286716C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867178
	goto loc_82867178;
loc_82867174:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867178:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867180;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867188;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828671b8
	if (ctx.cr0.eq) goto loc_828671B8;
	// bl 0x8287b5a8
	ctx.lr = 0x82867194;
	sub_8287B5A8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14952
	ctx.r4.s64 = ctx.r11.s64 + -14952;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828671B0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828671bc
	goto loc_828671BC;
loc_828671B8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828671BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828671C4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828671CC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828671fc
	if (ctx.cr0.eq) goto loc_828671FC;
	// bl 0x824852c0
	ctx.lr = 0x828671D8;
	sub_824852C0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-17192
	ctx.r4.s64 = ctx.r11.s64 + -17192;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82847920
	ctx.lr = 0x828671F4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867200
	goto loc_82867200;
loc_828671FC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867200:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867208;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867210;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867240
	if (ctx.cr0.eq) goto loc_82867240;
	// bl 0x827d2260
	ctx.lr = 0x8286721C;
	sub_827D2260(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-17168
	ctx.r4.s64 = ctx.r11.s64 + -17168;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867238;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867244
	goto loc_82867244;
loc_82867240:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867244:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286724C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82867254;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286728c
	if (ctx.cr0.eq) goto loc_8286728C;
	// bl 0x827f0080
	ctx.lr = 0x82867260;
	sub_827F0080(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-17144
	ctx.r4.s64 = ctx.r11.s64 + -17144;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286727C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x82867290
	goto loc_82867290;
loc_8286728C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867290:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867298;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828672A0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828672d0
	if (ctx.cr0.eq) goto loc_828672D0;
	// bl 0x82334e88
	ctx.lr = 0x828672AC;
	sub_82334E88(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-16984
	ctx.r4.s64 = ctx.r11.s64 + -16984;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828672C8;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828672d4
	goto loc_828672D4;
loc_828672D0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828672D4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828672DC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828672E4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867314
	if (ctx.cr0.eq) goto loc_82867314;
	// bl 0x82335178
	ctx.lr = 0x828672F0;
	sub_82335178(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-16804
	ctx.r4.s64 = ctx.r11.s64 + -16804;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286730C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867318
	goto loc_82867318;
loc_82867314:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867318:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867320;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867328;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867358
	if (ctx.cr0.eq) goto loc_82867358;
	// bl 0x828792a0
	ctx.lr = 0x82867334;
	sub_828792A0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-16784
	ctx.r4.s64 = ctx.r11.s64 + -16784;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867350;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286735c
	goto loc_8286735C;
loc_82867358:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286735C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867364;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286736C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286739c
	if (ctx.cr0.eq) goto loc_8286739C;
	// bl 0x82872f80
	ctx.lr = 0x82867378;
	sub_82872F80(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-16580
	ctx.r4.s64 = ctx.r11.s64 + -16580;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867394;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828673a0
	goto loc_828673A0;
loc_8286739C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828673A0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828673A8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828673B0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828673e0
	if (ctx.cr0.eq) goto loc_828673E0;
	// bl 0x828730e0
	ctx.lr = 0x828673BC;
	sub_828730E0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-16548
	ctx.r4.s64 = ctx.r11.s64 + -16548;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828673D8;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828673e4
	goto loc_828673E4;
loc_828673E0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828673E4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828673EC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828673F4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867424
	if (ctx.cr0.eq) goto loc_82867424;
	// bl 0x82873250
	ctx.lr = 0x82867400;
	sub_82873250(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-16516
	ctx.r4.s64 = ctx.r11.s64 + -16516;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286741C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867428
	goto loc_82867428;
loc_82867424:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867428:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867430;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867438;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867468
	if (ctx.cr0.eq) goto loc_82867468;
	// bl 0x828733c0
	ctx.lr = 0x82867444;
	sub_828733C0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-16488
	ctx.r4.s64 = ctx.r11.s64 + -16488;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867460;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286746c
	goto loc_8286746C;
loc_82867468:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286746C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867474;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286747C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828674ac
	if (ctx.cr0.eq) goto loc_828674AC;
	// bl 0x82873530
	ctx.lr = 0x82867488;
	sub_82873530(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-16456
	ctx.r4.s64 = ctx.r11.s64 + -16456;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828674A4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828674b0
	goto loc_828674B0;
loc_828674AC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828674B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828674B8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828674C0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828674f0
	if (ctx.cr0.eq) goto loc_828674F0;
	// bl 0x82872e20
	ctx.lr = 0x828674CC;
	sub_82872E20(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-16420
	ctx.r4.s64 = ctx.r11.s64 + -16420;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828674E8;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828674f4
	goto loc_828674F4;
loc_828674F0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828674F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828674FC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867504;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867534
	if (ctx.cr0.eq) goto loc_82867534;
	// bl 0x82873698
	ctx.lr = 0x82867510;
	sub_82873698(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-16384
	ctx.r4.s64 = ctx.r11.s64 + -16384;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286752C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867538
	goto loc_82867538;
loc_82867534:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867538:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867540;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867548;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867578
	if (ctx.cr0.eq) goto loc_82867578;
	// bl 0x82873800
	ctx.lr = 0x82867554;
	sub_82873800(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-16364
	ctx.r4.s64 = ctx.r11.s64 + -16364;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867570;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286757c
	goto loc_8286757C;
loc_82867578:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286757C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867584;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286758C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828675bc
	if (ctx.cr0.eq) goto loc_828675BC;
	// bl 0x82873970
	ctx.lr = 0x82867598;
	sub_82873970(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-16336
	ctx.r4.s64 = ctx.r11.s64 + -16336;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828675B4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828675c0
	goto loc_828675C0;
loc_828675BC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828675C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828675C8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828675D0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867600
	if (ctx.cr0.eq) goto loc_82867600;
	// bl 0x8247da98
	ctx.lr = 0x828675DC;
	sub_8247DA98(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-16304
	ctx.r4.s64 = ctx.r11.s64 + -16304;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828675F8;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867604
	goto loc_82867604;
loc_82867600:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867604:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286760C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867614;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867644
	if (ctx.cr0.eq) goto loc_82867644;
	// bl 0x828740c0
	ctx.lr = 0x82867620;
	sub_828740C0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-16272
	ctx.r4.s64 = ctx.r11.s64 + -16272;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286763C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867648
	goto loc_82867648;
loc_82867644:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867648:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867650;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867658;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867688
	if (ctx.cr0.eq) goto loc_82867688;
	// bl 0x82874220
	ctx.lr = 0x82867664;
	sub_82874220(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-16252
	ctx.r4.s64 = ctx.r11.s64 + -16252;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867680;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286768c
	goto loc_8286768C;
loc_82867688:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286768C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867694;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286769C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828676cc
	if (ctx.cr0.eq) goto loc_828676CC;
	// bl 0x82875f10
	ctx.lr = 0x828676A8;
	sub_82875F10(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-16228
	ctx.r4.s64 = ctx.r11.s64 + -16228;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828676C4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828676d0
	goto loc_828676D0;
loc_828676CC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828676D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828676D8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828676E0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867710
	if (ctx.cr0.eq) goto loc_82867710;
	// bl 0x82874380
	ctx.lr = 0x828676EC;
	sub_82874380(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-16204
	ctx.r4.s64 = ctx.r11.s64 + -16204;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867708;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867714
	goto loc_82867714;
loc_82867710:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867714:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286771C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867724;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867754
	if (ctx.cr0.eq) goto loc_82867754;
	// bl 0x828744e0
	ctx.lr = 0x82867730;
	sub_828744E0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-16176
	ctx.r4.s64 = ctx.r11.s64 + -16176;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286774C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867758
	goto loc_82867758;
loc_82867754:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867758:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867760;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867768;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867798
	if (ctx.cr0.eq) goto loc_82867798;
	// bl 0x82874640
	ctx.lr = 0x82867774;
	sub_82874640(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-16140
	ctx.r4.s64 = ctx.r11.s64 + -16140;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867790;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286779c
	goto loc_8286779C;
loc_82867798:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286779C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828677A4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828677AC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828677dc
	if (ctx.cr0.eq) goto loc_828677DC;
	// bl 0x8247dd60
	ctx.lr = 0x828677B8;
	sub_8247DD60(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15632
	ctx.r4.s64 = ctx.r11.s64 + -15632;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828677D4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828677e0
	goto loc_828677E0;
loc_828677DC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828677E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828677E8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828677F0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867820
	if (ctx.cr0.eq) goto loc_82867820;
	// bl 0x8247dc18
	ctx.lr = 0x828677FC;
	sub_8247DC18(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-16072
	ctx.r4.s64 = ctx.r11.s64 + -16072;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867818;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867824
	goto loc_82867824;
loc_82867820:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867824:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286782C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867834;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867864
	if (ctx.cr0.eq) goto loc_82867864;
	// bl 0x828747a0
	ctx.lr = 0x82867840;
	sub_828747A0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-16104
	ctx.r4.s64 = ctx.r11.s64 + -16104;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286785C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867868
	goto loc_82867868;
loc_82867864:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867868:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867870;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867878;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828678a8
	if (ctx.cr0.eq) goto loc_828678A8;
	// bl 0x82875980
	ctx.lr = 0x82867884;
	sub_82875980(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15544
	ctx.r4.s64 = ctx.r11.s64 + -15544;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828678A0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828678ac
	goto loc_828678AC;
loc_828678A8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828678AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828678B4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828678BC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828678ec
	if (ctx.cr0.eq) goto loc_828678EC;
	// bl 0x82875ae0
	ctx.lr = 0x828678C8;
	sub_82875AE0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15508
	ctx.r4.s64 = ctx.r11.s64 + -15508;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828678E4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828678f0
	goto loc_828678F0;
loc_828678EC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828678F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828678F8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867900;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867930
	if (ctx.cr0.eq) goto loc_82867930;
	// bl 0x82875c40
	ctx.lr = 0x8286790C;
	sub_82875C40(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15472
	ctx.r4.s64 = ctx.r11.s64 + -15472;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867928;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867934
	goto loc_82867934;
loc_82867930:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867934:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286793C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867944;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867974
	if (ctx.cr0.eq) goto loc_82867974;
	// bl 0x8247def0
	ctx.lr = 0x82867950;
	sub_8247DEF0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15448
	ctx.r4.s64 = ctx.r11.s64 + -15448;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286796C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867978
	goto loc_82867978;
loc_82867974:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867978:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867980;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867988;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828679b8
	if (ctx.cr0.eq) goto loc_828679B8;
	// bl 0x82875da0
	ctx.lr = 0x82867994;
	sub_82875DA0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14980
	ctx.r4.s64 = ctx.r11.s64 + -14980;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828679B0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828679bc
	goto loc_828679BC;
loc_828679B8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828679BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828679C4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828679CC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828679fc
	if (ctx.cr0.eq) goto loc_828679FC;
	// bl 0x82874920
	ctx.lr = 0x828679D8;
	sub_82874920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-16040
	ctx.r4.s64 = ctx.r11.s64 + -16040;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828679F4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867a00
	goto loc_82867A00;
loc_828679FC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867A00:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867A08;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867A10;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867a40
	if (ctx.cr0.eq) goto loc_82867A40;
	// bl 0x82874aa0
	ctx.lr = 0x82867A1C;
	sub_82874AA0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-16016
	ctx.r4.s64 = ctx.r11.s64 + -16016;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867A38;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867a44
	goto loc_82867A44;
loc_82867A40:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867A44:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867A4C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867A54;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867a84
	if (ctx.cr0.eq) goto loc_82867A84;
	// bl 0x82874c10
	ctx.lr = 0x82867A60;
	sub_82874C10(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15900
	ctx.r4.s64 = ctx.r11.s64 + -15900;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867A7C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867a88
	goto loc_82867A88;
loc_82867A84:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867A88:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867A90;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867A98;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867ac8
	if (ctx.cr0.eq) goto loc_82867AC8;
	// bl 0x82874da8
	ctx.lr = 0x82867AA4;
	sub_82874DA8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15876
	ctx.r4.s64 = ctx.r11.s64 + -15876;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867AC0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867acc
	goto loc_82867ACC;
loc_82867AC8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867ACC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867AD4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867ADC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867b0c
	if (ctx.cr0.eq) goto loc_82867B0C;
	// bl 0x82874f28
	ctx.lr = 0x82867AE8;
	sub_82874F28(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15840
	ctx.r4.s64 = ctx.r11.s64 + -15840;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867B04;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867b10
	goto loc_82867B10;
loc_82867B0C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867B10:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867B18;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867B20;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867b50
	if (ctx.cr0.eq) goto loc_82867B50;
	// bl 0x82875098
	ctx.lr = 0x82867B2C;
	sub_82875098(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15800
	ctx.r4.s64 = ctx.r11.s64 + -15800;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867B48;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867b54
	goto loc_82867B54;
loc_82867B50:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867B54:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867B5C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867B64;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867b94
	if (ctx.cr0.eq) goto loc_82867B94;
	// bl 0x82875208
	ctx.lr = 0x82867B70;
	sub_82875208(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15776
	ctx.r4.s64 = ctx.r11.s64 + -15776;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867B8C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867b98
	goto loc_82867B98;
loc_82867B94:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867B98:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867BA0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867BA8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867bd8
	if (ctx.cr0.eq) goto loc_82867BD8;
	// bl 0x82875388
	ctx.lr = 0x82867BB4;
	sub_82875388(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15720
	ctx.r4.s64 = ctx.r11.s64 + -15720;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867BD0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867bdc
	goto loc_82867BDC;
loc_82867BD8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867BDC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867BE4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867BEC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867c1c
	if (ctx.cr0.eq) goto loc_82867C1C;
	// bl 0x82875678
	ctx.lr = 0x82867BF8;
	sub_82875678(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15688
	ctx.r4.s64 = ctx.r11.s64 + -15688;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867C14;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867c20
	goto loc_82867C20;
loc_82867C1C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867C20:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867C28;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867C30;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867c60
	if (ctx.cr0.eq) goto loc_82867C60;
	// bl 0x82875800
	ctx.lr = 0x82867C3C;
	sub_82875800(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15660
	ctx.r4.s64 = ctx.r11.s64 + -15660;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867C58;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867c64
	goto loc_82867C64;
loc_82867C60:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867C64:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867C6C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867C74;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867ca4
	if (ctx.cr0.eq) goto loc_82867CA4;
	// bl 0x82873af8
	ctx.lr = 0x82867C80;
	sub_82873AF8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15988
	ctx.r4.s64 = ctx.r11.s64 + -15988;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867C9C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867ca8
	goto loc_82867CA8;
loc_82867CA4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867CA8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867CB0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867CB8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867ce8
	if (ctx.cr0.eq) goto loc_82867CE8;
	// bl 0x82873d50
	ctx.lr = 0x82867CC4;
	sub_82873D50(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15932
	ctx.r4.s64 = ctx.r11.s64 + -15932;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867CE0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867cec
	goto loc_82867CEC;
loc_82867CE8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867CEC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867CF4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867CFC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867d2c
	if (ctx.cr0.eq) goto loc_82867D2C;
	// bl 0x82873f60
	ctx.lr = 0x82867D08;
	sub_82873F60(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15608
	ctx.r4.s64 = ctx.r11.s64 + -15608;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867D24;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867d30
	goto loc_82867D30;
loc_82867D2C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867D30:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867D38;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867D40;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867d70
	if (ctx.cr0.eq) goto loc_82867D70;
	// bl 0x82876cd8
	ctx.lr = 0x82867D4C;
	sub_82876CD8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-9352
	ctx.r4.s64 = ctx.r11.s64 + -9352;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867D68;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867d74
	goto loc_82867D74;
loc_82867D70:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867D74:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867D7C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867D84;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867db4
	if (ctx.cr0.eq) goto loc_82867DB4;
	// bl 0x82876770
	ctx.lr = 0x82867D90;
	sub_82876770(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15184
	ctx.r4.s64 = ctx.r11.s64 + -15184;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867DAC;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867db8
	goto loc_82867DB8;
loc_82867DB4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867DB8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867DC0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867DC8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867df8
	if (ctx.cr0.eq) goto loc_82867DF8;
	// bl 0x82876e38
	ctx.lr = 0x82867DD4;
	sub_82876E38(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15960
	ctx.r4.s64 = ctx.r11.s64 + -15960;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867DF0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867dfc
	goto loc_82867DFC;
loc_82867DF8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867DFC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867E04;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867E0C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867e3c
	if (ctx.cr0.eq) goto loc_82867E3C;
	// bl 0x82875500
	ctx.lr = 0x82867E18;
	sub_82875500(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15752
	ctx.r4.s64 = ctx.r11.s64 + -15752;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867E34;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867e40
	goto loc_82867E40;
loc_82867E3C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867E40:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867E48;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867E50;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867e80
	if (ctx.cr0.eq) goto loc_82867E80;
	// bl 0x828768d0
	ctx.lr = 0x82867E5C;
	sub_828768D0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15148
	ctx.r4.s64 = ctx.r11.s64 + -15148;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867E78;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867e84
	goto loc_82867E84;
loc_82867E80:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867E84:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867E8C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867E94;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867ec4
	if (ctx.cr0.eq) goto loc_82867EC4;
	// bl 0x82876a30
	ctx.lr = 0x82867EA0;
	sub_82876A30(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15108
	ctx.r4.s64 = ctx.r11.s64 + -15108;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867EBC;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867ec8
	goto loc_82867EC8;
loc_82867EC4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867EC8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867ED0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867ED8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867f08
	if (ctx.cr0.eq) goto loc_82867F08;
	// bl 0x82876b90
	ctx.lr = 0x82867EE4;
	sub_82876B90(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15068
	ctx.r4.s64 = ctx.r11.s64 + -15068;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867F00;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867f0c
	goto loc_82867F0C;
loc_82867F08:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867F0C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867F14;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867F1C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867f4c
	if (ctx.cr0.eq) goto loc_82867F4C;
	// bl 0x828761d0
	ctx.lr = 0x82867F28;
	sub_828761D0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15416
	ctx.r4.s64 = ctx.r11.s64 + -15416;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867F44;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867f50
	goto loc_82867F50;
loc_82867F4C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867F50:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867F58;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867F60;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867f90
	if (ctx.cr0.eq) goto loc_82867F90;
	// bl 0x82876330
	ctx.lr = 0x82867F6C;
	sub_82876330(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15368
	ctx.r4.s64 = ctx.r11.s64 + -15368;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867F88;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867f94
	goto loc_82867F94;
loc_82867F90:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867F94:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867F9C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867FA4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82867fd4
	if (ctx.cr0.eq) goto loc_82867FD4;
	// bl 0x82876070
	ctx.lr = 0x82867FB0;
	sub_82876070(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15392
	ctx.r4.s64 = ctx.r11.s64 + -15392;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82867FCC;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82867fd8
	goto loc_82867FD8;
loc_82867FD4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82867FD8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82867FE0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82867FE8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868018
	if (ctx.cr0.eq) goto loc_82868018;
	// bl 0x828764b0
	ctx.lr = 0x82867FF4;
	sub_828764B0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15344
	ctx.r4.s64 = ctx.r11.s64 + -15344;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868010;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286801c
	goto loc_8286801C;
loc_82868018:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286801C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868024;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286802C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286805c
	if (ctx.cr0.eq) goto loc_8286805C;
	// bl 0x82876610
	ctx.lr = 0x82868038;
	sub_82876610(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15316
	ctx.r4.s64 = ctx.r11.s64 + -15316;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868054;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868060
	goto loc_82868060;
loc_8286805C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868060:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868068;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868070;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828680a0
	if (ctx.cr0.eq) goto loc_828680A0;
	// bl 0x82838870
	ctx.lr = 0x8286807C;
	sub_82838870(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14508
	ctx.r4.s64 = ctx.r11.s64 + -14508;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868098;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828680a4
	goto loc_828680A4;
loc_828680A0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828680A4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828680AC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828680B4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828680e4
	if (ctx.cr0.eq) goto loc_828680E4;
	// bl 0x823352b8
	ctx.lr = 0x828680C0;
	sub_823352B8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14152
	ctx.r4.s64 = ctx.r11.s64 + -14152;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828680DC;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828680e8
	goto loc_828680E8;
loc_828680E4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828680E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828680F0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828680F8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868128
	if (ctx.cr0.eq) goto loc_82868128;
	// bl 0x8282db38
	ctx.lr = 0x82868104;
	sub_8282DB38(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14128
	ctx.r4.s64 = ctx.r11.s64 + -14128;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868120;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286812c
	goto loc_8286812C;
loc_82868128:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286812C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868134;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286813C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286816c
	if (ctx.cr0.eq) goto loc_8286816C;
	// bl 0x82838cb0
	ctx.lr = 0x82868148;
	sub_82838CB0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14096
	ctx.r4.s64 = ctx.r11.s64 + -14096;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868164;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868170
	goto loc_82868170;
loc_8286816C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868170:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868178;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868180;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828681b0
	if (ctx.cr0.eq) goto loc_828681B0;
	// bl 0x82878a28
	ctx.lr = 0x8286818C;
	sub_82878A28(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14064
	ctx.r4.s64 = ctx.r11.s64 + -14064;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828681A8;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828681b4
	goto loc_828681B4;
loc_828681B0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828681B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828681BC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828681C4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828681f4
	if (ctx.cr0.eq) goto loc_828681F4;
	// bl 0x82838e10
	ctx.lr = 0x828681D0;
	sub_82838E10(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14032
	ctx.r4.s64 = ctx.r11.s64 + -14032;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828681EC;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828681f8
	goto loc_828681F8;
loc_828681F4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828681F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868200;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868208;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868238
	if (ctx.cr0.eq) goto loc_82868238;
	// bl 0x82878bc0
	ctx.lr = 0x82868214;
	sub_82878BC0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-13996
	ctx.r4.s64 = ctx.r11.s64 + -13996;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868230;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286823c
	goto loc_8286823C;
loc_82868238:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286823C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868244;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286824C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286827c
	if (ctx.cr0.eq) goto loc_8286827C;
	// bl 0x82410f70
	ctx.lr = 0x82868258;
	sub_82410F70(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-13872
	ctx.r4.s64 = ctx.r11.s64 + -13872;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868274;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868280
	goto loc_82868280;
loc_8286827C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868280:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868288;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868290;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828682c0
	if (ctx.cr0.eq) goto loc_828682C0;
	// bl 0x8282ddf8
	ctx.lr = 0x8286829C;
	sub_8282DDF8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-13848
	ctx.r4.s64 = ctx.r11.s64 + -13848;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828682B8;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828682c4
	goto loc_828682C4;
loc_828682C0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828682C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828682CC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828682D4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868304
	if (ctx.cr0.eq) goto loc_82868304;
	// bl 0x82878d20
	ctx.lr = 0x828682E0;
	sub_82878D20(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-13816
	ctx.r4.s64 = ctx.r11.s64 + -13816;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828682FC;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868308
	goto loc_82868308;
loc_82868304:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868308:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868310;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868318;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868348
	if (ctx.cr0.eq) goto loc_82868348;
	// bl 0x824110d8
	ctx.lr = 0x82868324;
	sub_824110D8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-13788
	ctx.r4.s64 = ctx.r11.s64 + -13788;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868340;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286834c
	goto loc_8286834C;
loc_82868348:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286834C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868354;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286835C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286838c
	if (ctx.cr0.eq) goto loc_8286838C;
	// bl 0x82410e10
	ctx.lr = 0x82868368;
	sub_82410E10(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-13756
	ctx.r4.s64 = ctx.r11.s64 + -13756;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868384;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868390
	goto loc_82868390;
loc_8286838C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868390:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868398;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828683A0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828683d0
	if (ctx.cr0.eq) goto loc_828683D0;
	// bl 0x82878e80
	ctx.lr = 0x828683AC;
	sub_82878E80(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-13732
	ctx.r4.s64 = ctx.r11.s64 + -13732;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828683C8;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828683d4
	goto loc_828683D4;
loc_828683D0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828683D4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828683DC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828683E4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868414
	if (ctx.cr0.eq) goto loc_82868414;
	// bl 0x82838f70
	ctx.lr = 0x828683F0;
	sub_82838F70(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-13672
	ctx.r4.s64 = ctx.r11.s64 + -13672;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286840C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868418
	goto loc_82868418;
loc_82868414:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868418:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868420;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868428;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868458
	if (ctx.cr0.eq) goto loc_82868458;
	// bl 0x82878fe0
	ctx.lr = 0x82868434;
	sub_82878FE0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-13700
	ctx.r4.s64 = ctx.r11.s64 + -13700;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868450;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286845c
	goto loc_8286845C;
loc_82868458:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286845C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868464;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286846C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286849c
	if (ctx.cr0.eq) goto loc_8286849C;
	// bl 0x827173e8
	ctx.lr = 0x82868478;
	sub_827173E8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-13972
	ctx.r4.s64 = ctx.r11.s64 + -13972;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868494;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828684a0
	goto loc_828684A0;
loc_8286849C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828684A0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828684A8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828684B0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828684e0
	if (ctx.cr0.eq) goto loc_828684E0;
	// bl 0x82717568
	ctx.lr = 0x828684BC;
	sub_82717568(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-13940
	ctx.r4.s64 = ctx.r11.s64 + -13940;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828684D8;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828684e4
	goto loc_828684E4;
loc_828684E0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828684E4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828684EC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828684F4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868524
	if (ctx.cr0.eq) goto loc_82868524;
	// bl 0x8282dc98
	ctx.lr = 0x82868500;
	sub_8282DC98(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-13908
	ctx.r4.s64 = ctx.r11.s64 + -13908;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286851C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868528
	goto loc_82868528;
loc_82868524:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868528:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868530;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868538;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868568
	if (ctx.cr0.eq) goto loc_82868568;
	// bl 0x8247d678
	ctx.lr = 0x82868544;
	sub_8247D678(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14488
	ctx.r4.s64 = ctx.r11.s64 + -14488;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868560;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286856c
	goto loc_8286856C;
loc_82868568:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286856C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868574;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286857C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828685ac
	if (ctx.cr0.eq) goto loc_828685AC;
	// bl 0x82871d00
	ctx.lr = 0x82868588;
	sub_82871D00(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14460
	ctx.r4.s64 = ctx.r11.s64 + -14460;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828685A4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828685b0
	goto loc_828685B0;
loc_828685AC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828685B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828685B8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828685C0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828685f0
	if (ctx.cr0.eq) goto loc_828685F0;
	// bl 0x82871a40
	ctx.lr = 0x828685CC;
	sub_82871A40(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14416
	ctx.r4.s64 = ctx.r11.s64 + -14416;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828685E8;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828685f4
	goto loc_828685F4;
loc_828685F0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828685F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828685FC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868604;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868634
	if (ctx.cr0.eq) goto loc_82868634;
	// bl 0x82871ba0
	ctx.lr = 0x82868610;
	sub_82871BA0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14392
	ctx.r4.s64 = ctx.r11.s64 + -14392;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286862C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868638
	goto loc_82868638;
loc_82868634:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868638:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868640;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868648;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868678
	if (ctx.cr0.eq) goto loc_82868678;
	// bl 0x82871e88
	ctx.lr = 0x82868654;
	sub_82871E88(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14364
	ctx.r4.s64 = ctx.r11.s64 + -14364;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868670;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286867c
	goto loc_8286867C;
loc_82868678:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286867C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868684;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286868C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828686bc
	if (ctx.cr0.eq) goto loc_828686BC;
	// bl 0x82871ff0
	ctx.lr = 0x82868698;
	sub_82871FF0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14340
	ctx.r4.s64 = ctx.r11.s64 + -14340;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828686B4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828686c0
	goto loc_828686C0;
loc_828686BC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828686C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828686C8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828686D0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868700
	if (ctx.cr0.eq) goto loc_82868700;
	// bl 0x82872150
	ctx.lr = 0x828686DC;
	sub_82872150(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14320
	ctx.r4.s64 = ctx.r11.s64 + -14320;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828686F8;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868704
	goto loc_82868704;
loc_82868700:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868704:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286870C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868714;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868744
	if (ctx.cr0.eq) goto loc_82868744;
	// bl 0x8247d938
	ctx.lr = 0x82868720;
	sub_8247D938(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14268
	ctx.r4.s64 = ctx.r11.s64 + -14268;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286873C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868748
	goto loc_82868748;
loc_82868744:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868748:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868750;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868758;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868788
	if (ctx.cr0.eq) goto loc_82868788;
	// bl 0x82838b50
	ctx.lr = 0x82868764;
	sub_82838B50(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14440
	ctx.r4.s64 = ctx.r11.s64 + -14440;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868780;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286878c
	goto loc_8286878C;
loc_82868788:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286878C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868794;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286879C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828687cc
	if (ctx.cr0.eq) goto loc_828687CC;
	// bl 0x828389d0
	ctx.lr = 0x828687A8;
	sub_828389D0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14292
	ctx.r4.s64 = ctx.r11.s64 + -14292;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828687C4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828687d0
	goto loc_828687D0;
loc_828687CC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828687D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828687D8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828687E0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868810
	if (ctx.cr0.eq) goto loc_82868810;
	// bl 0x828722d8
	ctx.lr = 0x828687EC;
	sub_828722D8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14244
	ctx.r4.s64 = ctx.r11.s64 + -14244;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868808;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868814
	goto loc_82868814;
loc_82868810:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868814:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286881C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868824;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868854
	if (ctx.cr0.eq) goto loc_82868854;
	// bl 0x82879560
	ctx.lr = 0x82868830;
	sub_82879560(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-16724
	ctx.r4.s64 = ctx.r11.s64 + -16724;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286884C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868858
	goto loc_82868858;
loc_82868854:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868858:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868860;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868868;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868898
	if (ctx.cr0.eq) goto loc_82868898;
	// bl 0x82879400
	ctx.lr = 0x82868874;
	sub_82879400(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-16756
	ctx.r4.s64 = ctx.r11.s64 + -16756;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868890;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286889c
	goto loc_8286889C;
loc_82868898:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286889C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828688A4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828688AC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828688dc
	if (ctx.cr0.eq) goto loc_828688DC;
	// bl 0x828796c0
	ctx.lr = 0x828688B8;
	sub_828796C0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-16696
	ctx.r4.s64 = ctx.r11.s64 + -16696;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828688D4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828688e0
	goto loc_828688E0;
loc_828688DC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828688E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828688E8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828688F0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868920
	if (ctx.cr0.eq) goto loc_82868920;
	// bl 0x82879980
	ctx.lr = 0x828688FC;
	sub_82879980(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-16664
	ctx.r4.s64 = ctx.r11.s64 + -16664;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868918;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868924
	goto loc_82868924;
loc_82868920:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868924:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286892C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868934;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868964
	if (ctx.cr0.eq) goto loc_82868964;
	// bl 0x82879820
	ctx.lr = 0x82868940;
	sub_82879820(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-16636
	ctx.r4.s64 = ctx.r11.s64 + -16636;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286895C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868968
	goto loc_82868968;
loc_82868964:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868968:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868970;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868978;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828689a8
	if (ctx.cr0.eq) goto loc_828689A8;
	// bl 0x82876fc0
	ctx.lr = 0x82868984;
	sub_82876FC0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-9256
	ctx.r4.s64 = ctx.r11.s64 + -9256;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828689A0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828689ac
	goto loc_828689AC;
loc_828689A8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828689AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828689B4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828689BC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828689ec
	if (ctx.cr0.eq) goto loc_828689EC;
	// bl 0x82877140
	ctx.lr = 0x828689C8;
	sub_82877140(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-9224
	ctx.r4.s64 = ctx.r11.s64 + -9224;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828689E4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828689f0
	goto loc_828689F0;
loc_828689EC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828689F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828689F8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868A00;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868a30
	if (ctx.cr0.eq) goto loc_82868A30;
	// bl 0x82877980
	ctx.lr = 0x82868A0C;
	sub_82877980(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-8936
	ctx.r4.s64 = ctx.r11.s64 + -8936;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868A28;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868a34
	goto loc_82868A34;
loc_82868A30:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868A34:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868A3C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868A44;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868a74
	if (ctx.cr0.eq) goto loc_82868A74;
	// bl 0x82877ae0
	ctx.lr = 0x82868A50;
	sub_82877AE0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-8976
	ctx.r4.s64 = ctx.r11.s64 + -8976;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868A6C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868a78
	goto loc_82868A78;
loc_82868A74:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868A78:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868A80;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868A88;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868ab8
	if (ctx.cr0.eq) goto loc_82868AB8;
	// bl 0x82877c40
	ctx.lr = 0x82868A94;
	sub_82877C40(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-8892
	ctx.r4.s64 = ctx.r11.s64 + -8892;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868AB0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868abc
	goto loc_82868ABC;
loc_82868AB8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868ABC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868AC4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868ACC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868afc
	if (ctx.cr0.eq) goto loc_82868AFC;
	// bl 0x828772a0
	ctx.lr = 0x82868AD8;
	sub_828772A0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-9192
	ctx.r4.s64 = ctx.r11.s64 + -9192;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868AF4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868b00
	goto loc_82868B00;
loc_82868AFC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868B00:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868B08;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868B10;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868b40
	if (ctx.cr0.eq) goto loc_82868B40;
	// bl 0x82877400
	ctx.lr = 0x82868B1C;
	sub_82877400(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-9152
	ctx.r4.s64 = ctx.r11.s64 + -9152;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868B38;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868b44
	goto loc_82868B44;
loc_82868B40:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868B44:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868B4C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868B54;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868b84
	if (ctx.cr0.eq) goto loc_82868B84;
	// bl 0x82877560
	ctx.lr = 0x82868B60;
	sub_82877560(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-9112
	ctx.r4.s64 = ctx.r11.s64 + -9112;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868B7C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868b88
	goto loc_82868B88;
loc_82868B84:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868B88:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868B90;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868B98;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868bc8
	if (ctx.cr0.eq) goto loc_82868BC8;
	// bl 0x828776c0
	ctx.lr = 0x82868BA4;
	sub_828776C0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-9072
	ctx.r4.s64 = ctx.r11.s64 + -9072;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868BC0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868bcc
	goto loc_82868BCC;
loc_82868BC8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868BCC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868BD4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868BDC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868c0c
	if (ctx.cr0.eq) goto loc_82868C0C;
	// bl 0x82877820
	ctx.lr = 0x82868BE8;
	sub_82877820(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-9024
	ctx.r4.s64 = ctx.r11.s64 + -9024;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868C04;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868c10
	goto loc_82868C10;
loc_82868C0C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868C10:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868C18;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868C20;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868c50
	if (ctx.cr0.eq) goto loc_82868C50;
	// bl 0x82878488
	ctx.lr = 0x82868C2C;
	sub_82878488(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15280
	ctx.r4.s64 = ctx.r11.s64 + -15280;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868C48;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868c54
	goto loc_82868C54;
loc_82868C50:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868C54:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868C5C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868C64;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868c94
	if (ctx.cr0.eq) goto loc_82868C94;
	// bl 0x828785e8
	ctx.lr = 0x82868C70;
	sub_828785E8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15248
	ctx.r4.s64 = ctx.r11.s64 + -15248;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868C8C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868c98
	goto loc_82868C98;
loc_82868C94:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868C98:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868CA0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868CA8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868cd8
	if (ctx.cr0.eq) goto loc_82868CD8;
	// bl 0x82878768
	ctx.lr = 0x82868CB4;
	sub_82878768(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15216
	ctx.r4.s64 = ctx.r11.s64 + -15216;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868CD0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868cdc
	goto loc_82868CDC;
loc_82868CD8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868CDC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868CE4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868CEC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868d1c
	if (ctx.cr0.eq) goto loc_82868D1C;
	// bl 0x82878328
	ctx.lr = 0x82868CF8;
	sub_82878328(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-8752
	ctx.r4.s64 = ctx.r11.s64 + -8752;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868D14;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868d20
	goto loc_82868D20;
loc_82868D1C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868D20:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868D28;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868D30;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868d60
	if (ctx.cr0.eq) goto loc_82868D60;
	// bl 0x82878060
	ctx.lr = 0x82868D3C;
	sub_82878060(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-8808
	ctx.r4.s64 = ctx.r11.s64 + -8808;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868D58;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868d64
	goto loc_82868D64;
loc_82868D60:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868D64:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868D6C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868D74;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868da4
	if (ctx.cr0.eq) goto loc_82868DA4;
	// bl 0x828781c0
	ctx.lr = 0x82868D80;
	sub_828781C0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-8780
	ctx.r4.s64 = ctx.r11.s64 + -8780;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868D9C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868da8
	goto loc_82868DA8;
loc_82868DA4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868DA8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868DB0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868DB8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868de8
	if (ctx.cr0.eq) goto loc_82868DE8;
	// bl 0x82877da0
	ctx.lr = 0x82868DC4;
	sub_82877DA0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-8832
	ctx.r4.s64 = ctx.r11.s64 + -8832;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868DE0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868dec
	goto loc_82868DEC;
loc_82868DE8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868DEC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868DF4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868DFC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868e2c
	if (ctx.cr0.eq) goto loc_82868E2C;
	// bl 0x82877f00
	ctx.lr = 0x82868E08;
	sub_82877F00(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-8856
	ctx.r4.s64 = ctx.r11.s64 + -8856;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868E24;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868e30
	goto loc_82868E30;
loc_82868E2C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868E30:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868E38;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868E40;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868e70
	if (ctx.cr0.eq) goto loc_82868E70;
	// bl 0x82872438
	ctx.lr = 0x82868E4C;
	sub_82872438(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-8504
	ctx.r4.s64 = ctx.r11.s64 + -8504;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868E68;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868e74
	goto loc_82868E74;
loc_82868E70:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868E74:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868E7C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868E84;
	sub_82333900(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82868ee8
	if (ctx.cr0.eq) goto loc_82868EE8;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,16100
	ctx.r31.s64 = ctx.r11.s64 + 16100;
	// lwz r11,16096(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16096);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82868ec4
	if (!ctx.cr0.eq) goto loc_82868EC4;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,21756
	ctx.r9.s64 = ctx.r9.s64 + 21756;
	// stw r11,16096(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16096, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23240
	ctx.r3.s64 = ctx.r11.s64 + -23240;
	// bl 0x82a4c758
	ctx.lr = 0x82868EC4;
	sub_82A4C758(ctx, base);
loc_82868EC4:
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r11,-9280
	ctx.r4.s64 = ctx.r11.s64 + -9280;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82847920
	ctx.lr = 0x82868EE0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868eec
	goto loc_82868EEC;
loc_82868EE8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868EEC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868EF4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868EFC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868f2c
	if (ctx.cr0.eq) goto loc_82868F2C;
	// bl 0x82879c60
	ctx.lr = 0x82868F08;
	sub_82879C60(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14220
	ctx.r4.s64 = ctx.r11.s64 + -14220;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868F24;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868f30
	goto loc_82868F30;
loc_82868F2C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868F30:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868F38;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868F40;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868f70
	if (ctx.cr0.eq) goto loc_82868F70;
	// bl 0x82879de0
	ctx.lr = 0x82868F4C;
	sub_82879DE0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14532
	ctx.r4.s64 = ctx.r11.s64 + -14532;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868F68;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868f74
	goto loc_82868F74;
loc_82868F70:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868F74:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868F7C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868F84;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868fb4
	if (ctx.cr0.eq) goto loc_82868FB4;
	// bl 0x82870830
	ctx.lr = 0x82868F90;
	sub_82870830(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-15032
	ctx.r4.s64 = ctx.r11.s64 + -15032;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868FAC;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868fb8
	goto loc_82868FB8;
loc_82868FB4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868FB8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82868FC0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82868FC8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82868ff8
	if (ctx.cr0.eq) goto loc_82868FF8;
	// bl 0x82871430
	ctx.lr = 0x82868FD4;
	sub_82871430(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14888
	ctx.r4.s64 = ctx.r11.s64 + -14888;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82868FF0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82868ffc
	goto loc_82868FFC;
loc_82868FF8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82868FFC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869004;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286900C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286903c
	if (ctx.cr0.eq) goto loc_8286903C;
	// bl 0x82870e38
	ctx.lr = 0x82869018;
	sub_82870E38(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14800
	ctx.r4.s64 = ctx.r11.s64 + -14800;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869034;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869040
	goto loc_82869040;
loc_8286903C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869040:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869048;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869050;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869080
	if (ctx.cr0.eq) goto loc_82869080;
	// bl 0x82871288
	ctx.lr = 0x8286905C;
	sub_82871288(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14768
	ctx.r4.s64 = ctx.r11.s64 + -14768;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869078;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869084
	goto loc_82869084;
loc_82869080:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869084:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286908C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869094;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828690c4
	if (ctx.cr0.eq) goto loc_828690C4;
	// bl 0x828709c0
	ctx.lr = 0x828690A0;
	sub_828709C0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14736
	ctx.r4.s64 = ctx.r11.s64 + -14736;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828690BC;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828690c8
	goto loc_828690C8;
loc_828690C4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828690C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828690D0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828690D8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869108
	if (ctx.cr0.eq) goto loc_82869108;
	// bl 0x82870b50
	ctx.lr = 0x828690E4;
	sub_82870B50(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14708
	ctx.r4.s64 = ctx.r11.s64 + -14708;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869100;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286910c
	goto loc_8286910C;
loc_82869108:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286910C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869114;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286911C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286914c
	if (ctx.cr0.eq) goto loc_8286914C;
	// bl 0x828715c0
	ctx.lr = 0x82869128;
	sub_828715C0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14680
	ctx.r4.s64 = ctx.r11.s64 + -14680;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869144;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869150
	goto loc_82869150;
loc_8286914C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869150:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869158;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869160;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869190
	if (ctx.cr0.eq) goto loc_82869190;
	// bl 0x82870fa8
	ctx.lr = 0x8286916C;
	sub_82870FA8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14652
	ctx.r4.s64 = ctx.r11.s64 + -14652;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869188;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869194
	goto loc_82869194;
loc_82869190:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869194:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286919C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828691A4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828691d4
	if (ctx.cr0.eq) goto loc_828691D4;
	// bl 0x82871118
	ctx.lr = 0x828691B0;
	sub_82871118(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14612
	ctx.r4.s64 = ctx.r11.s64 + -14612;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828691CC;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828691d8
	goto loc_828691D8;
loc_828691D4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828691D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828691E0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828691E8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869218
	if (ctx.cr0.eq) goto loc_82869218;
	// bl 0x828718e0
	ctx.lr = 0x828691F4;
	sub_828718E0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-14572
	ctx.r4.s64 = ctx.r11.s64 + -14572;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869210;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286921c
	goto loc_8286921C;
loc_82869218:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286921C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869224;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286922C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286925c
	if (ctx.cr0.eq) goto loc_8286925C;
	// bl 0x82886120
	ctx.lr = 0x82869238;
	sub_82886120(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-10716
	ctx.r4.s64 = ctx.r11.s64 + -10716;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82847920
	ctx.lr = 0x82869254;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869260
	goto loc_82869260;
loc_8286925C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869260:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869268;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869270;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828692a0
	if (ctx.cr0.eq) goto loc_828692A0;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,596
	ctx.r4.s64 = ctx.r11.s64 + 596;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82869294;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// b 0x828692a4
	goto loc_828692A4;
loc_828692A0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828692A4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828692AC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828692B4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828692e4
	if (ctx.cr0.eq) goto loc_828692E4;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,616
	ctx.r4.s64 = ctx.r11.s64 + 616;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x828692D8;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// b 0x828692e8
	goto loc_828692E8;
loc_828692E4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828692E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828692F0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828692F8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869328
	if (ctx.cr0.eq) goto loc_82869328;
	// bl 0x82885f70
	ctx.lr = 0x82869304;
	sub_82885F70(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-10760
	ctx.r4.s64 = ctx.r11.s64 + -10760;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82847920
	ctx.lr = 0x82869320;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286932c
	goto loc_8286932C;
loc_82869328:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286932C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869334;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286933C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286936c
	if (ctx.cr0.eq) goto loc_8286936C;
	// bl 0x82885df0
	ctx.lr = 0x82869348;
	sub_82885DF0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-10740
	ctx.r4.s64 = ctx.r11.s64 + -10740;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82847920
	ctx.lr = 0x82869364;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869370
	goto loc_82869370;
loc_8286936C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869370:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869378;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82869380;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828693b8
	if (ctx.cr0.eq) goto loc_828693B8;
	// bl 0x823fc348
	ctx.lr = 0x8286938C;
	sub_823FC348(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-13620
	ctx.r4.s64 = ctx.r11.s64 + -13620;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x828693A8;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x828693bc
	goto loc_828693BC;
loc_828693B8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828693BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828693C4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828693CC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828693fc
	if (ctx.cr0.eq) goto loc_828693FC;
	// bl 0x82412438
	ctx.lr = 0x828693D8;
	sub_82412438(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-13520
	ctx.r4.s64 = ctx.r11.s64 + -13520;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828693F4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869400
	goto loc_82869400;
loc_828693FC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869400:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869408;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869410;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869440
	if (ctx.cr0.eq) goto loc_82869440;
	// bl 0x824120a8
	ctx.lr = 0x8286941C;
	sub_824120A8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-13544
	ctx.r4.s64 = ctx.r11.s64 + -13544;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869438;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869444
	goto loc_82869444;
loc_82869440:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869444:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286944C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869454;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869484
	if (ctx.cr0.eq) goto loc_82869484;
	// bl 0x82885cb0
	ctx.lr = 0x82869460;
	sub_82885CB0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-13448
	ctx.r4.s64 = ctx.r11.s64 + -13448;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286947C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869488
	goto loc_82869488;
loc_82869484:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869488:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869490;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869498;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828694c8
	if (ctx.cr0.eq) goto loc_828694C8;
	// bl 0x828856f0
	ctx.lr = 0x828694A4;
	sub_828856F0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-13424
	ctx.r4.s64 = ctx.r11.s64 + -13424;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828694C0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828694cc
	goto loc_828694CC;
loc_828694C8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828694CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828694D4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828694DC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286950c
	if (ctx.cr0.eq) goto loc_8286950C;
	// bl 0x82885538
	ctx.lr = 0x828694E8;
	sub_82885538(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-10788
	ctx.r4.s64 = ctx.r11.s64 + -10788;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869504;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869510
	goto loc_82869510;
loc_8286950C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869510:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869518;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869520;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869550
	if (ctx.cr0.eq) goto loc_82869550;
	// bl 0x828853f8
	ctx.lr = 0x8286952C;
	sub_828853F8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-13392
	ctx.r4.s64 = ctx.r11.s64 + -13392;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869548;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869554
	goto loc_82869554;
loc_82869550:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869554:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286955C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869564;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869594
	if (ctx.cr0.eq) goto loc_82869594;
	// bl 0x82885298
	ctx.lr = 0x82869570;
	sub_82885298(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-13368
	ctx.r4.s64 = ctx.r11.s64 + -13368;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286958C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869598
	goto loc_82869598;
loc_82869594:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869598:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828695A0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828695A8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828695d8
	if (ctx.cr0.eq) goto loc_828695D8;
	// bl 0x82885118
	ctx.lr = 0x828695B4;
	sub_82885118(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-13328
	ctx.r4.s64 = ctx.r11.s64 + -13328;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828695D0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828695dc
	goto loc_828695DC;
loc_828695D8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828695DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828695E4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828695EC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286961c
	if (ctx.cr0.eq) goto loc_8286961C;
	// bl 0x82884fa8
	ctx.lr = 0x828695F8;
	sub_82884FA8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-13284
	ctx.r4.s64 = ctx.r11.s64 + -13284;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869614;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869620
	goto loc_82869620;
loc_8286961C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869620:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869628;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869630;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869660
	if (ctx.cr0.eq) goto loc_82869660;
	// bl 0x82884e48
	ctx.lr = 0x8286963C;
	sub_82884E48(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-11592
	ctx.r4.s64 = ctx.r11.s64 + -11592;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869658;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869664
	goto loc_82869664;
loc_82869660:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869664:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286966C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869674;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828696a4
	if (ctx.cr0.eq) goto loc_828696A4;
	// bl 0x828848f8
	ctx.lr = 0x82869680;
	sub_828848F8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-11556
	ctx.r4.s64 = ctx.r11.s64 + -11556;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286969C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828696a8
	goto loc_828696A8;
loc_828696A4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828696A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828696B0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828696B8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828696e8
	if (ctx.cr0.eq) goto loc_828696E8;
	// bl 0x82884750
	ctx.lr = 0x828696C4;
	sub_82884750(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-13244
	ctx.r4.s64 = ctx.r11.s64 + -13244;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828696E0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828696ec
	goto loc_828696EC;
loc_828696E8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828696EC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828696F4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828696FC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286972c
	if (ctx.cr0.eq) goto loc_8286972C;
	// bl 0x828845e0
	ctx.lr = 0x82869708;
	sub_828845E0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-13208
	ctx.r4.s64 = ctx.r11.s64 + -13208;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869724;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869730
	goto loc_82869730;
loc_8286972C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869730:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869738;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869740;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869770
	if (ctx.cr0.eq) goto loc_82869770;
	// bl 0x82884460
	ctx.lr = 0x8286974C;
	sub_82884460(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-13172
	ctx.r4.s64 = ctx.r11.s64 + -13172;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869768;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869774
	goto loc_82869774;
loc_82869770:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869774:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286977C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869784;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828697b4
	if (ctx.cr0.eq) goto loc_828697B4;
	// bl 0x828842f8
	ctx.lr = 0x82869790;
	sub_828842F8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-12068
	ctx.r4.s64 = ctx.r11.s64 + -12068;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828697AC;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828697b8
	goto loc_828697B8;
loc_828697B4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828697B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828697C0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828697C8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828697f8
	if (ctx.cr0.eq) goto loc_828697F8;
	// bl 0x82884060
	ctx.lr = 0x828697D4;
	sub_82884060(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,640
	ctx.r4.s64 = ctx.r11.s64 + 640;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828697F0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828697fc
	goto loc_828697FC;
loc_828697F8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828697FC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869804;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286980C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286983c
	if (ctx.cr0.eq) goto loc_8286983C;
	// bl 0x82883ee8
	ctx.lr = 0x82869818;
	sub_82883EE8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-12000
	ctx.r4.s64 = ctx.r11.s64 + -12000;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869834;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869840
	goto loc_82869840;
loc_8286983C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869840:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869848;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869850;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869880
	if (ctx.cr0.eq) goto loc_82869880;
	// bl 0x82883d80
	ctx.lr = 0x8286985C;
	sub_82883D80(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-12032
	ctx.r4.s64 = ctx.r11.s64 + -12032;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869878;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869884
	goto loc_82869884;
loc_82869880:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869884:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286988C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869894;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828698c4
	if (ctx.cr0.eq) goto loc_828698C4;
	// bl 0x82883c18
	ctx.lr = 0x828698A0;
	sub_82883C18(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-11960
	ctx.r4.s64 = ctx.r11.s64 + -11960;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828698BC;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828698c8
	goto loc_828698C8;
loc_828698C4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828698C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828698D0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828698D8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869908
	if (ctx.cr0.eq) goto loc_82869908;
	// bl 0x82883ab8
	ctx.lr = 0x828698E4;
	sub_82883AB8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-11920
	ctx.r4.s64 = ctx.r11.s64 + -11920;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869900;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286990c
	goto loc_8286990C;
loc_82869908:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286990C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869914;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286991C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286994c
	if (ctx.cr0.eq) goto loc_8286994C;
	// bl 0x82883958
	ctx.lr = 0x82869928;
	sub_82883958(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-12984
	ctx.r4.s64 = ctx.r11.s64 + -12984;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869944;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869950
	goto loc_82869950;
loc_8286994C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869950:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869958;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869960;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869990
	if (ctx.cr0.eq) goto loc_82869990;
	// bl 0x828837f8
	ctx.lr = 0x8286996C;
	sub_828837F8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-12952
	ctx.r4.s64 = ctx.r11.s64 + -12952;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869988;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869994
	goto loc_82869994;
loc_82869990:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869994:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286999C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828699A4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828699d4
	if (ctx.cr0.eq) goto loc_828699D4;
	// bl 0x82883698
	ctx.lr = 0x828699B0;
	sub_82883698(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-12920
	ctx.r4.s64 = ctx.r11.s64 + -12920;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x828699CC;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828699d8
	goto loc_828699D8;
loc_828699D4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828699D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x828699E0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x828699E8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869a18
	if (ctx.cr0.eq) goto loc_82869A18;
	// bl 0x82883518
	ctx.lr = 0x828699F4;
	sub_82883518(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-12880
	ctx.r4.s64 = ctx.r11.s64 + -12880;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869A10;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869a1c
	goto loc_82869A1C;
loc_82869A18:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869A1C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869A24;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869A2C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869a5c
	if (ctx.cr0.eq) goto loc_82869A5C;
	// bl 0x828833b0
	ctx.lr = 0x82869A38;
	sub_828833B0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-12840
	ctx.r4.s64 = ctx.r11.s64 + -12840;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869A54;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869a60
	goto loc_82869A60;
loc_82869A5C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869A60:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869A68;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869A70;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869aa0
	if (ctx.cr0.eq) goto loc_82869AA0;
	// bl 0x82883228
	ctx.lr = 0x82869A7C;
	sub_82883228(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-12792
	ctx.r4.s64 = ctx.r11.s64 + -12792;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869A98;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869aa4
	goto loc_82869AA4;
loc_82869AA0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869AA4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869AAC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869AB4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869ae4
	if (ctx.cr0.eq) goto loc_82869AE4;
	// bl 0x82883098
	ctx.lr = 0x82869AC0;
	sub_82883098(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-12744
	ctx.r4.s64 = ctx.r11.s64 + -12744;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869ADC;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869ae8
	goto loc_82869AE8;
loc_82869AE4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869AE8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869AF0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869AF8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869b28
	if (ctx.cr0.eq) goto loc_82869B28;
	// bl 0x82882f10
	ctx.lr = 0x82869B04;
	sub_82882F10(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-12692
	ctx.r4.s64 = ctx.r11.s64 + -12692;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869B20;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869b2c
	goto loc_82869B2C;
loc_82869B28:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869B2C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869B34;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869B3C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869b6c
	if (ctx.cr0.eq) goto loc_82869B6C;
	// bl 0x82882da8
	ctx.lr = 0x82869B48;
	sub_82882DA8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-13136
	ctx.r4.s64 = ctx.r11.s64 + -13136;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869B64;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869b70
	goto loc_82869B70;
loc_82869B6C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869B70:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869B78;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869B80;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869bb0
	if (ctx.cr0.eq) goto loc_82869BB0;
	// bl 0x82882c48
	ctx.lr = 0x82869B8C;
	sub_82882C48(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-13100
	ctx.r4.s64 = ctx.r11.s64 + -13100;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869BA8;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869bb4
	goto loc_82869BB4;
loc_82869BB0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869BB4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869BBC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869BC4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869bf4
	if (ctx.cr0.eq) goto loc_82869BF4;
	// bl 0x828826f0
	ctx.lr = 0x82869BD0;
	sub_828826F0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-13060
	ctx.r4.s64 = ctx.r11.s64 + -13060;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869BEC;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869bf8
	goto loc_82869BF8;
loc_82869BF4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869BF8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869C00;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869C08;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869c38
	if (ctx.cr0.eq) goto loc_82869C38;
	// bl 0x82882548
	ctx.lr = 0x82869C14;
	sub_82882548(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-13016
	ctx.r4.s64 = ctx.r11.s64 + -13016;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869C30;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869c3c
	goto loc_82869C3C;
loc_82869C38:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869C3C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869C44;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869C4C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869c7c
	if (ctx.cr0.eq) goto loc_82869C7C;
	// bl 0x828822b0
	ctx.lr = 0x82869C58;
	sub_828822B0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,676
	ctx.r4.s64 = ctx.r11.s64 + 676;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869C74;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869c80
	goto loc_82869C80;
loc_82869C7C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869C80:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869C88;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869C90;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869cc0
	if (ctx.cr0.eq) goto loc_82869CC0;
	// bl 0x82882150
	ctx.lr = 0x82869C9C;
	sub_82882150(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-11876
	ctx.r4.s64 = ctx.r11.s64 + -11876;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869CB8;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869cc4
	goto loc_82869CC4;
loc_82869CC0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869CC4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869CCC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869CD4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869d04
	if (ctx.cr0.eq) goto loc_82869D04;
	// bl 0x82881fe8
	ctx.lr = 0x82869CE0;
	sub_82881FE8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-11760
	ctx.r4.s64 = ctx.r11.s64 + -11760;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869CFC;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869d08
	goto loc_82869D08;
loc_82869D04:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869D08:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869D10;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869D18;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869d48
	if (ctx.cr0.eq) goto loc_82869D48;
	// bl 0x82881e88
	ctx.lr = 0x82869D24;
	sub_82881E88(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-11844
	ctx.r4.s64 = ctx.r11.s64 + -11844;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869D40;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869d4c
	goto loc_82869D4C;
loc_82869D48:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869D4C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869D54;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869D5C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869d8c
	if (ctx.cr0.eq) goto loc_82869D8C;
	// bl 0x82881d28
	ctx.lr = 0x82869D68;
	sub_82881D28(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-11808
	ctx.r4.s64 = ctx.r11.s64 + -11808;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869D84;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869d90
	goto loc_82869D90;
loc_82869D8C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869D90:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869D98;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869DA0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869dd0
	if (ctx.cr0.eq) goto loc_82869DD0;
	// bl 0x82881960
	ctx.lr = 0x82869DAC;
	sub_82881960(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,712
	ctx.r4.s64 = ctx.r11.s64 + 712;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869DC8;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869dd4
	goto loc_82869DD4;
loc_82869DD0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869DD4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869DDC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869DE4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869e14
	if (ctx.cr0.eq) goto loc_82869E14;
	// bl 0x828817f8
	ctx.lr = 0x82869DF0;
	sub_828817F8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-12644
	ctx.r4.s64 = ctx.r11.s64 + -12644;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869E0C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869e18
	goto loc_82869E18;
loc_82869E14:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869E18:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869E20;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869E28;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869e58
	if (ctx.cr0.eq) goto loc_82869E58;
	// bl 0x82881688
	ctx.lr = 0x82869E34;
	sub_82881688(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-12532
	ctx.r4.s64 = ctx.r11.s64 + -12532;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869E50;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869e5c
	goto loc_82869E5C;
loc_82869E58:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869E5C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869E64;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869E6C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869e9c
	if (ctx.cr0.eq) goto loc_82869E9C;
	// bl 0x82881518
	ctx.lr = 0x82869E78;
	sub_82881518(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-12616
	ctx.r4.s64 = ctx.r11.s64 + -12616;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869E94;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869ea0
	goto loc_82869EA0;
loc_82869E9C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869EA0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869EA8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869EB0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869ee0
	if (ctx.cr0.eq) goto loc_82869EE0;
	// bl 0x828813a8
	ctx.lr = 0x82869EBC;
	sub_828813A8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-12576
	ctx.r4.s64 = ctx.r11.s64 + -12576;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869ED8;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869ee4
	goto loc_82869EE4;
loc_82869EE0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869EE4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869EEC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869EF4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869f24
	if (ctx.cr0.eq) goto loc_82869F24;
	// bl 0x82881248
	ctx.lr = 0x82869F00;
	sub_82881248(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-12496
	ctx.r4.s64 = ctx.r11.s64 + -12496;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869F1C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869f28
	goto loc_82869F28;
loc_82869F24:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869F28:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869F30;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869F38;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869f68
	if (ctx.cr0.eq) goto loc_82869F68;
	// bl 0x828810e8
	ctx.lr = 0x82869F44;
	sub_828810E8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-12464
	ctx.r4.s64 = ctx.r11.s64 + -12464;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869F60;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869f6c
	goto loc_82869F6C;
loc_82869F68:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869F6C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869F74;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869F7C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869fac
	if (ctx.cr0.eq) goto loc_82869FAC;
	// bl 0x82880f88
	ctx.lr = 0x82869F88;
	sub_82880F88(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-12428
	ctx.r4.s64 = ctx.r11.s64 + -12428;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869FA4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869fb0
	goto loc_82869FB0;
loc_82869FAC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869FB0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869FB8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82869FC0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82869ff0
	if (ctx.cr0.eq) goto loc_82869FF0;
	// bl 0x82880e08
	ctx.lr = 0x82869FCC;
	sub_82880E08(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-12392
	ctx.r4.s64 = ctx.r11.s64 + -12392;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82869FE8;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82869ff4
	goto loc_82869FF4;
loc_82869FF0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82869FF4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x82869FFC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286A004;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a034
	if (ctx.cr0.eq) goto loc_8286A034;
	// bl 0x82880c88
	ctx.lr = 0x8286A010;
	sub_82880C88(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-12356
	ctx.r4.s64 = ctx.r11.s64 + -12356;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286A02C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286a038
	goto loc_8286A038;
loc_8286A034:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A038:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A040;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286A048;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a078
	if (ctx.cr0.eq) goto loc_8286A078;
	// bl 0x82880b48
	ctx.lr = 0x8286A054;
	sub_82880B48(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-12268
	ctx.r4.s64 = ctx.r11.s64 + -12268;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286A070;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286a07c
	goto loc_8286A07C;
loc_8286A078:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A07C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A084;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286A08C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a0bc
	if (ctx.cr0.eq) goto loc_8286A0BC;
	// bl 0x828809d8
	ctx.lr = 0x8286A098;
	sub_828809D8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-12228
	ctx.r4.s64 = ctx.r11.s64 + -12228;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286A0B4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286a0c0
	goto loc_8286A0C0;
loc_8286A0BC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A0C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A0C8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286A0D0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a100
	if (ctx.cr0.eq) goto loc_8286A100;
	// bl 0x82880860
	ctx.lr = 0x8286A0DC;
	sub_82880860(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-12192
	ctx.r4.s64 = ctx.r11.s64 + -12192;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286A0F8;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286a104
	goto loc_8286A104;
loc_8286A100:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A104:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A10C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286A114;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a144
	if (ctx.cr0.eq) goto loc_8286A144;
	// bl 0x828806b8
	ctx.lr = 0x8286A120;
	sub_828806B8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-12148
	ctx.r4.s64 = ctx.r11.s64 + -12148;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286A13C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286a148
	goto loc_8286A148;
loc_8286A144:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A148:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A150;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286A158;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a188
	if (ctx.cr0.eq) goto loc_8286A188;
	// bl 0x82880518
	ctx.lr = 0x8286A164;
	sub_82880518(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-12108
	ctx.r4.s64 = ctx.r11.s64 + -12108;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286A180;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286a18c
	goto loc_8286A18C;
loc_8286A188:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A18C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A194;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286A19C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a1cc
	if (ctx.cr0.eq) goto loc_8286A1CC;
	// bl 0x828803b8
	ctx.lr = 0x8286A1A8;
	sub_828803B8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-11716
	ctx.r4.s64 = ctx.r11.s64 + -11716;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286A1C4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286a1d0
	goto loc_8286A1D0;
loc_8286A1CC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A1D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A1D8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286A1E0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a210
	if (ctx.cr0.eq) goto loc_8286A210;
	// bl 0x82880258
	ctx.lr = 0x8286A1EC;
	sub_82880258(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-11684
	ctx.r4.s64 = ctx.r11.s64 + -11684;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286A208;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286a214
	goto loc_8286A214;
loc_8286A210:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A214:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A21C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286A224;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a254
	if (ctx.cr0.eq) goto loc_8286A254;
	// bl 0x828800f0
	ctx.lr = 0x8286A230;
	sub_828800F0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-11636
	ctx.r4.s64 = ctx.r11.s64 + -11636;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286A24C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286a258
	goto loc_8286A258;
loc_8286A254:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A258:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A260;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286A268;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a298
	if (ctx.cr0.eq) goto loc_8286A298;
	// bl 0x8286efe8
	ctx.lr = 0x8286A274;
	sub_8286EFE8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-11508
	ctx.r4.s64 = ctx.r11.s64 + -11508;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286A290;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286a29c
	goto loc_8286A29C;
loc_8286A298:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A29C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A2A4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286A2AC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a2dc
	if (ctx.cr0.eq) goto loc_8286A2DC;
	// bl 0x8286f148
	ctx.lr = 0x8286A2B8;
	sub_8286F148(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-11480
	ctx.r4.s64 = ctx.r11.s64 + -11480;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286A2D4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286a2e0
	goto loc_8286A2E0;
loc_8286A2DC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A2E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A2E8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286A2F0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a320
	if (ctx.cr0.eq) goto loc_8286A320;
	// bl 0x8286f2c8
	ctx.lr = 0x8286A2FC;
	sub_8286F2C8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-11412
	ctx.r4.s64 = ctx.r11.s64 + -11412;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286A318;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286a324
	goto loc_8286A324;
loc_8286A320:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A324:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A32C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286A334;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a364
	if (ctx.cr0.eq) goto loc_8286A364;
	// bl 0x8286f438
	ctx.lr = 0x8286A340;
	sub_8286F438(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-11372
	ctx.r4.s64 = ctx.r11.s64 + -11372;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286A35C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286a368
	goto loc_8286A368;
loc_8286A364:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A368:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A370;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286A378;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a3a8
	if (ctx.cr0.eq) goto loc_8286A3A8;
	// bl 0x8286f5a8
	ctx.lr = 0x8286A384;
	sub_8286F5A8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-11332
	ctx.r4.s64 = ctx.r11.s64 + -11332;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286A3A0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286a3ac
	goto loc_8286A3AC;
loc_8286A3A8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A3AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A3B4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286A3BC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a3ec
	if (ctx.cr0.eq) goto loc_8286A3EC;
	// bl 0x8286f720
	ctx.lr = 0x8286A3C8;
	sub_8286F720(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-11288
	ctx.r4.s64 = ctx.r11.s64 + -11288;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286A3E4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286a3f0
	goto loc_8286A3F0;
loc_8286A3EC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A3F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A3F8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286A400;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a430
	if (ctx.cr0.eq) goto loc_8286A430;
	// bl 0x8286f880
	ctx.lr = 0x8286A40C;
	sub_8286F880(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-11244
	ctx.r4.s64 = ctx.r11.s64 + -11244;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286A428;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286a434
	goto loc_8286A434;
loc_8286A430:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A434:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A43C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286A444;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a474
	if (ctx.cr0.eq) goto loc_8286A474;
	// bl 0x8286fa00
	ctx.lr = 0x8286A450;
	sub_8286FA00(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-11172
	ctx.r4.s64 = ctx.r11.s64 + -11172;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286A46C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286a478
	goto loc_8286A478;
loc_8286A474:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A478:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A480;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286A488;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a4b8
	if (ctx.cr0.eq) goto loc_8286A4B8;
	// bl 0x8286fb68
	ctx.lr = 0x8286A494;
	sub_8286FB68(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-11132
	ctx.r4.s64 = ctx.r11.s64 + -11132;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286A4B0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286a4bc
	goto loc_8286A4BC;
loc_8286A4B8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A4BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A4C4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286A4CC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a4fc
	if (ctx.cr0.eq) goto loc_8286A4FC;
	// bl 0x8286fcc8
	ctx.lr = 0x8286A4D8;
	sub_8286FCC8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-11104
	ctx.r4.s64 = ctx.r11.s64 + -11104;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286A4F4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286a500
	goto loc_8286A500;
loc_8286A4FC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A500:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A508;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286A510;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a540
	if (ctx.cr0.eq) goto loc_8286A540;
	// bl 0x8286fe48
	ctx.lr = 0x8286A51C;
	sub_8286FE48(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-11036
	ctx.r4.s64 = ctx.r11.s64 + -11036;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286A538;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286a544
	goto loc_8286A544;
loc_8286A540:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A544:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A54C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286A554;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a584
	if (ctx.cr0.eq) goto loc_8286A584;
	// bl 0x8286ffa8
	ctx.lr = 0x8286A560;
	sub_8286FFA8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-10992
	ctx.r4.s64 = ctx.r11.s64 + -10992;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286A57C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286a588
	goto loc_8286A588;
loc_8286A584:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A588:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A590;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286A598;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a5c8
	if (ctx.cr0.eq) goto loc_8286A5C8;
	// bl 0x82870108
	ctx.lr = 0x8286A5A4;
	sub_82870108(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-10948
	ctx.r4.s64 = ctx.r11.s64 + -10948;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286A5C0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286a5cc
	goto loc_8286A5CC;
loc_8286A5C8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A5CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A5D4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286A5DC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a60c
	if (ctx.cr0.eq) goto loc_8286A60C;
	// bl 0x82870268
	ctx.lr = 0x8286A5E8;
	sub_82870268(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-10900
	ctx.r4.s64 = ctx.r11.s64 + -10900;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286A604;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286a610
	goto loc_8286A610;
loc_8286A60C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A610:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A618;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286A620;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a650
	if (ctx.cr0.eq) goto loc_8286A650;
	// bl 0x828703e8
	ctx.lr = 0x8286A62C;
	sub_828703E8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-10828
	ctx.r4.s64 = ctx.r11.s64 + -10828;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286A648;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286a654
	goto loc_8286A654;
loc_8286A650:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A654:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A65C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286A664;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a694
	if (ctx.cr0.eq) goto loc_8286A694;
	// bl 0x8287fe08
	ctx.lr = 0x8286A670;
	sub_8287FE08(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-10536
	ctx.r4.s64 = ctx.r11.s64 + -10536;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286A68C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286a698
	goto loc_8286A698;
loc_8286A694:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A698:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A6A0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286A6A8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a6d8
	if (ctx.cr0.eq) goto loc_8286A6D8;
	// bl 0x824a30d8
	ctx.lr = 0x8286A6B4;
	sub_824A30D8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-10400
	ctx.r4.s64 = ctx.r11.s64 + -10400;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82847920
	ctx.lr = 0x8286A6D0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286a6dc
	goto loc_8286A6DC;
loc_8286A6D8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A6DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A6E4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286A6EC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a71c
	if (ctx.cr0.eq) goto loc_8286A71C;
	// bl 0x8287f918
	ctx.lr = 0x8286A6F8;
	sub_8287F918(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-10560
	ctx.r4.s64 = ctx.r11.s64 + -10560;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82847920
	ctx.lr = 0x8286A714;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286a720
	goto loc_8286A720;
loc_8286A71C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A720:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A728;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286A730;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a760
	if (ctx.cr0.eq) goto loc_8286A760;
	// bl 0x8287f7d8
	ctx.lr = 0x8286A73C;
	sub_8287F7D8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-10380
	ctx.r4.s64 = ctx.r11.s64 + -10380;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286A758;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286a764
	goto loc_8286A764;
loc_8286A760:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A764:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A76C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8286A774;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a7ac
	if (ctx.cr0.eq) goto loc_8286A7AC;
	// bl 0x826da3d0
	ctx.lr = 0x8286A780;
	sub_826DA3D0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-10588
	ctx.r4.s64 = ctx.r11.s64 + -10588;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286A79C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r28,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r28.u32);
	// b 0x8286a7b0
	goto loc_8286A7B0;
loc_8286A7AC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A7B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A7B8;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8286A7C0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a7f8
	if (ctx.cr0.eq) goto loc_8286A7F8;
	// bl 0x826513c0
	ctx.lr = 0x8286A7CC;
	sub_826513C0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19000
	ctx.r4.s64 = ctx.r11.s64 + -19000;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286A7E8;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x8286a7fc
	goto loc_8286A7FC;
loc_8286A7F8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A7FC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A804;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8286A80C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a844
	if (ctx.cr0.eq) goto loc_8286A844;
	// bl 0x827d42e8
	ctx.lr = 0x8286A818;
	sub_827D42E8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-10356
	ctx.r4.s64 = ctx.r11.s64 + -10356;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286A834;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x8286a848
	goto loc_8286A848;
loc_8286A844:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A848:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A850;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8286A858;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a890
	if (ctx.cr0.eq) goto loc_8286A890;
	// bl 0x827d4020
	ctx.lr = 0x8286A864;
	sub_827D4020(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-10312
	ctx.r4.s64 = ctx.r11.s64 + -10312;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286A880;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x8286a894
	goto loc_8286A894;
loc_8286A890:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A894:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A89C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8286A8A4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a8dc
	if (ctx.cr0.eq) goto loc_8286A8DC;
	// bl 0x827e7480
	ctx.lr = 0x8286A8B0;
	sub_827E7480(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-17400
	ctx.r4.s64 = ctx.r11.s64 + -17400;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286A8CC;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x8286a8e0
	goto loc_8286A8E0;
loc_8286A8DC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A8E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A8E8;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8286A8F0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a928
	if (ctx.cr0.eq) goto loc_8286A928;
	// bl 0x8256d710
	ctx.lr = 0x8286A8FC;
	sub_8256D710(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-17000
	ctx.r4.s64 = ctx.r11.s64 + -17000;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286A918;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x8286a92c
	goto loc_8286A92C;
loc_8286A928:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A92C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A934;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8286A93C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a974
	if (ctx.cr0.eq) goto loc_8286A974;
	// bl 0x827d41a8
	ctx.lr = 0x8286A948;
	sub_827D41A8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-10276
	ctx.r4.s64 = ctx.r11.s64 + -10276;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286A964;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x8286a978
	goto loc_8286A978;
loc_8286A974:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A978:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A980;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286A988;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286a9c0
	if (ctx.cr0.eq) goto loc_8286A9C0;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-10128
	ctx.r4.s64 = ctx.r11.s64 + -10128;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286A9AC;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,21896
	ctx.r11.s64 = ctx.r11.s64 + 21896;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8286a9c4
	goto loc_8286A9C4;
loc_8286A9C0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286A9C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286A9CC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286A9D4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286aa0c
	if (ctx.cr0.eq) goto loc_8286AA0C;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-10108
	ctx.r4.s64 = ctx.r11.s64 + -10108;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286A9F8;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,21908
	ctx.r11.s64 = ctx.r11.s64 + 21908;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8286aa10
	goto loc_8286AA10;
loc_8286AA0C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286AA10:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286AA18;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286AA20;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286aa58
	if (ctx.cr0.eq) goto loc_8286AA58;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-10084
	ctx.r4.s64 = ctx.r11.s64 + -10084;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286AA44;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,21920
	ctx.r11.s64 = ctx.r11.s64 + 21920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8286aa5c
	goto loc_8286AA5C;
loc_8286AA58:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286AA5C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286AA64;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286AA6C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286aaa4
	if (ctx.cr0.eq) goto loc_8286AAA4;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-10060
	ctx.r4.s64 = ctx.r11.s64 + -10060;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286AA90;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,21932
	ctx.r11.s64 = ctx.r11.s64 + 21932;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8286aaa8
	goto loc_8286AAA8;
loc_8286AAA4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286AAA8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286AAB0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286AAB8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286aaf0
	if (ctx.cr0.eq) goto loc_8286AAF0;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-10036
	ctx.r4.s64 = ctx.r11.s64 + -10036;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286AADC;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,21944
	ctx.r11.s64 = ctx.r11.s64 + 21944;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8286aaf4
	goto loc_8286AAF4;
loc_8286AAF0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286AAF4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286AAFC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286AB04;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286ab3c
	if (ctx.cr0.eq) goto loc_8286AB3C;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-10008
	ctx.r4.s64 = ctx.r11.s64 + -10008;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286AB28;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,21956
	ctx.r11.s64 = ctx.r11.s64 + 21956;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8286ab40
	goto loc_8286AB40;
loc_8286AB3C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286AB40:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286AB48;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286AB50;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286ab88
	if (ctx.cr0.eq) goto loc_8286AB88;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-9980
	ctx.r4.s64 = ctx.r11.s64 + -9980;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286AB74;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,21968
	ctx.r11.s64 = ctx.r11.s64 + 21968;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8286ab8c
	goto loc_8286AB8C;
loc_8286AB88:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286AB8C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286AB94;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286AB9C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286abd4
	if (ctx.cr0.eq) goto loc_8286ABD4;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-9956
	ctx.r4.s64 = ctx.r11.s64 + -9956;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286ABC0;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,21980
	ctx.r11.s64 = ctx.r11.s64 + 21980;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8286abd8
	goto loc_8286ABD8;
loc_8286ABD4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286ABD8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286ABE0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286ABE8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286ac20
	if (ctx.cr0.eq) goto loc_8286AC20;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-9928
	ctx.r4.s64 = ctx.r11.s64 + -9928;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286AC0C;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,21992
	ctx.r11.s64 = ctx.r11.s64 + 21992;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8286ac24
	goto loc_8286AC24;
loc_8286AC20:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286AC24:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286AC2C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286AC34;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286ac6c
	if (ctx.cr0.eq) goto loc_8286AC6C;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-9900
	ctx.r4.s64 = ctx.r11.s64 + -9900;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286AC58;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,22004
	ctx.r11.s64 = ctx.r11.s64 + 22004;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8286ac70
	goto loc_8286AC70;
loc_8286AC6C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286AC70:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286AC78;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286AC80;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286acb8
	if (ctx.cr0.eq) goto loc_8286ACB8;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-9872
	ctx.r4.s64 = ctx.r11.s64 + -9872;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286ACA4;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,22016
	ctx.r11.s64 = ctx.r11.s64 + 22016;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8286acbc
	goto loc_8286ACBC;
loc_8286ACB8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286ACBC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286ACC4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286ACCC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286ad04
	if (ctx.cr0.eq) goto loc_8286AD04;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-9840
	ctx.r4.s64 = ctx.r11.s64 + -9840;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286ACF0;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,22028
	ctx.r11.s64 = ctx.r11.s64 + 22028;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8286ad08
	goto loc_8286AD08;
loc_8286AD04:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286AD08:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286AD10;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286AD18;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286ad50
	if (ctx.cr0.eq) goto loc_8286AD50;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-9812
	ctx.r4.s64 = ctx.r11.s64 + -9812;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286AD3C;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,22040
	ctx.r11.s64 = ctx.r11.s64 + 22040;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8286ad54
	goto loc_8286AD54;
loc_8286AD50:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286AD54:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286AD5C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286AD64;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286ad9c
	if (ctx.cr0.eq) goto loc_8286AD9C;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-9788
	ctx.r4.s64 = ctx.r11.s64 + -9788;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286AD88;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,22052
	ctx.r11.s64 = ctx.r11.s64 + 22052;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8286ada0
	goto loc_8286ADA0;
loc_8286AD9C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286ADA0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286ADA8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286ADB0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286ade8
	if (ctx.cr0.eq) goto loc_8286ADE8;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-9716
	ctx.r4.s64 = ctx.r11.s64 + -9716;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286ADD4;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,22064
	ctx.r11.s64 = ctx.r11.s64 + 22064;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8286adec
	goto loc_8286ADEC;
loc_8286ADE8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286ADEC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286ADF4;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8286ADFC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286ae34
	if (ctx.cr0.eq) goto loc_8286AE34;
	// bl 0x8286ee88
	ctx.lr = 0x8286AE08;
	sub_8286EE88(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-9756
	ctx.r4.s64 = ctx.r11.s64 + -9756;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286AE24;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x8286ae38
	goto loc_8286AE38;
loc_8286AE34:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286AE38:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286AE40;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286AE48;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286ae80
	if (ctx.cr0.eq) goto loc_8286AE80;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-18396
	ctx.r4.s64 = ctx.r11.s64 + -18396;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286AE6C;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,3248
	ctx.r11.s64 = ctx.r11.s64 + 3248;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8286ae84
	goto loc_8286AE84;
loc_8286AE80:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286AE84:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286AE8C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8286AE94;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286aecc
	if (ctx.cr0.eq) goto loc_8286AECC;
	// bl 0x826d1d18
	ctx.lr = 0x8286AEA0;
	sub_826D1D18(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-9576
	ctx.r4.s64 = ctx.r11.s64 + -9576;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286AEBC;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x8286aed0
	goto loc_8286AED0;
loc_8286AECC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286AED0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286AED8;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8286AEE0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286af18
	if (ctx.cr0.eq) goto loc_8286AF18;
	// bl 0x8287a0a8
	ctx.lr = 0x8286AEEC;
	sub_8287A0A8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-9544
	ctx.r4.s64 = ctx.r11.s64 + -9544;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286AF08;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x8286af1c
	goto loc_8286AF1C;
loc_8286AF18:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286AF1C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286AF24;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8286AF2C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286af64
	if (ctx.cr0.eq) goto loc_8286AF64;
	// bl 0x82872a40
	ctx.lr = 0x8286AF38;
	sub_82872A40(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-9628
	ctx.r4.s64 = ctx.r11.s64 + -9628;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286AF54;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x8286af68
	goto loc_8286AF68;
loc_8286AF64:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286AF68:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286AF70;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8286AF78;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286afb0
	if (ctx.cr0.eq) goto loc_8286AFB0;
	// bl 0x82408eb8
	ctx.lr = 0x8286AF84;
	sub_82408EB8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-9304
	ctx.r4.s64 = ctx.r11.s64 + -9304;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286AFA0;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x8286afb4
	goto loc_8286AFB4;
loc_8286AFB0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286AFB4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286AFBC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286AFC4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286aff4
	if (ctx.cr0.eq) goto loc_8286AFF4;
	// bl 0x82856308
	ctx.lr = 0x8286AFD0;
	sub_82856308(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-9324
	ctx.r4.s64 = ctx.r11.s64 + -9324;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286AFEC;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286aff8
	goto loc_8286AFF8;
loc_8286AFF4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286AFF8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286B000;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8286B008;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286b040
	if (ctx.cr0.eq) goto loc_8286B040;
	// bl 0x8287b8b0
	ctx.lr = 0x8286B014;
	sub_8287B8B0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-8728
	ctx.r4.s64 = ctx.r11.s64 + -8728;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286B030;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x8286b044
	goto loc_8286B044;
loc_8286B040:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286B044:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286B04C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286B054;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286b084
	if (ctx.cr0.eq) goto loc_8286B084;
	// bl 0x8287c560
	ctx.lr = 0x8286B060;
	sub_8287C560(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-8672
	ctx.r4.s64 = ctx.r11.s64 + -8672;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286B07C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286b088
	goto loc_8286B088;
loc_8286B084:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286B088:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286B090;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286B098;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286b0c8
	if (ctx.cr0.eq) goto loc_8286B0C8;
	// bl 0x828788c8
	ctx.lr = 0x8286B0A4;
	sub_828788C8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-8648
	ctx.r4.s64 = ctx.r11.s64 + -8648;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286B0C0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286b0cc
	goto loc_8286B0CC;
loc_8286B0C8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286B0CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286B0D4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286B0DC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286b10c
	if (ctx.cr0.eq) goto loc_8286B10C;
	// bl 0x82879ae0
	ctx.lr = 0x8286B0E8;
	sub_82879AE0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-8620
	ctx.r4.s64 = ctx.r11.s64 + -8620;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286B104;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286b110
	goto loc_8286B110;
loc_8286B10C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286B110:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286B118;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286B120;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286b150
	if (ctx.cr0.eq) goto loc_8286B150;
	// bl 0x82879140
	ctx.lr = 0x8286B12C;
	sub_82879140(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-8588
	ctx.r4.s64 = ctx.r11.s64 + -8588;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286B148;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286b154
	goto loc_8286B154;
loc_8286B150:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286B154:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286B15C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286B164;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286b194
	if (ctx.cr0.eq) goto loc_8286B194;
	// bl 0x828725a0
	ctx.lr = 0x8286B170;
	sub_828725A0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-8552
	ctx.r4.s64 = ctx.r11.s64 + -8552;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8286B18C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286b198
	goto loc_8286B198;
loc_8286B194:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286B198:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286B1A0;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8286B1A8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286b1e0
	if (ctx.cr0.eq) goto loc_8286B1E0;
	// bl 0x8287bf10
	ctx.lr = 0x8286B1B4;
	sub_8287BF10(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-8396
	ctx.r4.s64 = ctx.r11.s64 + -8396;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286B1D0;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r25,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r25.u32);
	// b 0x8286b1e4
	goto loc_8286B1E4;
loc_8286B1E0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286B1E4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286B1EC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8286B1F4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286b224
	if (ctx.cr0.eq) goto loc_8286B224;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,744
	ctx.r4.s64 = ctx.r11.s64 + 744;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8286B218;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// b 0x8286b228
	goto loc_8286B228;
loc_8286B224:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8286B228:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843bf8
	ctx.lr = 0x8286B230;
	sub_82843BF8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286B238"))) PPC_WEAK_FUNC(sub_8286B238);
PPC_FUNC_IMPL(__imp__sub_8286B238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82847920
	ctx.lr = 0x8286B25C;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,924
	ctx.r11.s64 = ctx.r11.s64 + 924;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286B288"))) PPC_WEAK_FUNC(sub_8286B288);
PPC_FUNC_IMPL(__imp__sub_8286B288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8286B290;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x828479d0
	ctx.lr = 0x8286B2A4;
	sub_828479D0(ctx, base);
	// lwz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286b31c
	if (ctx.cr6.eq) goto loc_8286B31C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8286b31c
	if (!ctx.cr0.eq) goto loc_8286B31C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// bl 0x82847bb0
	ctx.lr = 0x8286B2CC;
	sub_82847BB0(ctx, base);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,-4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x823388b8
	ctx.lr = 0x8286B2E8;
	sub_823388B8(ctx, base);
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
	ctx.lr = 0x8286B300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8286b30c
	if (!ctx.cr0.eq) goto loc_8286B30C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8286B30C:
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r11,184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_8286B31C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286B328"))) PPC_WEAK_FUNC(sub_8286B328);
PPC_FUNC_IMPL(__imp__sub_8286B328) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,84(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,84(r4)
	PPC_STORE_U32(ctx.r4.u32 + 84, ctx.r11.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,128(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8286b368
	if (ctx.cr0.eq) goto loc_8286B368;
	// lwz r11,140(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8286b368
	if (ctx.cr6.eq) goto loc_8286B368;
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// b 0x8286b36c
	goto loc_8286B36C;
loc_8286B368:
	// lwz r5,60(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
loc_8286B36C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// b 0x829b8ee8
	sub_829B8EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286B37C"))) PPC_WEAK_FUNC(sub_8286B37C);
PPC_FUNC_IMPL(__imp__sub_8286B37C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286B380"))) PPC_WEAK_FUNC(sub_8286B380);
PPC_FUNC_IMPL(__imp__sub_8286B380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82847920
	ctx.lr = 0x8286B3A4;
	sub_82847920(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2984
	ctx.r11.s64 = ctx.r11.s64 + 2984;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286B3D0"))) PPC_WEAK_FUNC(sub_8286B3D0);
PPC_FUNC_IMPL(__imp__sub_8286B3D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8286B3D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8286b288
	ctx.lr = 0x8286B3EC;
	sub_8286B288(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8286b448
	if (ctx.cr0.eq) goto loc_8286B448;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8286B400;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286b438
	if (ctx.cr0.eq) goto loc_8286B438;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,22076
	ctx.r10.s64 = ctx.r10.s64 + 22076;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
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
	// b 0x8286b43c
	goto loc_8286B43C;
loc_8286B438:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8286B43C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8286B444;
	sub_8248C5F8(ctx, base);
	// b 0x8286b4d8
	goto loc_8286B4D8;
loc_8286B448:
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286b4d8
	if (ctx.cr6.eq) goto loc_8286B4D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,160(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x82847bb0
	ctx.lr = 0x8286B464;
	sub_82847BB0(ctx, base);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x824a0a48
	ctx.lr = 0x8286B480;
	sub_824A0A48(ctx, base);
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r31,656(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 656);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r30,660(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 660);
	// addi r5,r3,620
	ctx.r5.s64 = ctx.r3.s64 + 620;
	// lwz r29,664(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 664);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8286B4D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8286B4D8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286B4E0"))) PPC_WEAK_FUNC(sub_8286B4E0);
PPC_FUNC_IMPL(__imp__sub_8286B4E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d8
	ctx.lr = 0x8286B4E8;
	__savegprlr_16(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// bl 0x824c1c28
	ctx.lr = 0x8286B4FC;
	sub_824C1C28(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// bl 0x82816528
	ctx.lr = 0x8286B508;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82846e98
	ctx.lr = 0x8286B51C;
	sub_82846E98(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82333900
	ctx.lr = 0x8286B524;
	sub_82333900(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286b554
	if (ctx.cr0.eq) goto loc_8286B554;
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,26860
	ctx.r10.s64 = ctx.r10.s64 + 26860;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x8286b558
	goto loc_8286B558;
loc_8286B554:
	// mr r16,r29
	ctx.r16.u64 = ctx.r29.u64;
loc_8286B558:
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82333900
	ctx.lr = 0x8286B560;
	sub_82333900(ctx, base);
	// li r30,4
	ctx.r30.s64 = 4;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286b5d8
	if (ctx.cr0.eq) goto loc_8286B5D8;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// stw r29,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r29.u32);
	// stw r29,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r29.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// stw r29,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r29.u32);
	// stw r29,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r29.u32);
	// stw r29,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r29.u32);
	// stw r29,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r29.u32);
	// stw r29,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r29.u32);
	// stw r30,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r30.u32);
	// stw r29,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r29.u32);
	// stw r29,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r29.u32);
	// stw r29,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r29.u32);
	// stw r29,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r29.u32);
	// stw r29,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r29.u32);
	// stw r30,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r30.u32);
	// stw r29,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r29.u32);
	// stw r29,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r29.u32);
	// stw r29,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r29.u32);
	// stw r29,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r29.u32);
	// stw r29,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r29.u32);
	// b 0x8286b5dc
	goto loc_8286B5DC;
loc_8286B5D8:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8286B5DC:
	// stw r31,12(r16)
	PPC_STORE_U32(ctx.r16.u32 + 12, ctx.r31.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,152(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 152);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,52(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 52);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r4,16(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// bl 0x82846fb0
	ctx.lr = 0x8286B604;
	sub_82846FB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286b614
	if (ctx.cr0.eq) goto loc_8286B614;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_8286B614:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r4,20(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// bl 0x82846fb0
	ctx.lr = 0x8286B620;
	sub_82846FB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286b630
	if (ctx.cr0.eq) goto loc_8286B630;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_8286B630:
	// addi r28,r22,24
	ctx.r28.s64 = ctx.r22.s64 + 24;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_8286B638:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8286b684
	if (ctx.cr6.eq) goto loc_8286B684;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82846fb0
	ctx.lr = 0x8286B64C;
	sub_82846FB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286b684
	if (ctx.cr0.eq) goto loc_8286B684;
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332d50
	ctx.lr = 0x8286B670;
	sub_82332D50(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8286b684
	if (ctx.cr0.eq) goto loc_8286B684;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_8286B684:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x8286b638
	if (!ctx.cr0.eq) goto loc_8286B638;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r4,40(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 40);
	// bl 0x82846fb0
	ctx.lr = 0x8286B69C;
	sub_82846FB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286b6ac
	if (ctx.cr0.eq) goto loc_8286B6AC;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8286B6AC:
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,376
	ctx.r3.s64 = ctx.r11.s64 + 376;
	// bl 0x82816528
	ctx.lr = 0x8286B6B8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82846e98
	ctx.lr = 0x8286B6CC;
	sub_82846E98(ctx, base);
	// lwz r11,48(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// lwz r10,44(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 44);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8286b70c
	if (!ctx.cr6.gt) goto loc_8286B70C;
	// addi r27,r31,100
	ctx.r27.s64 = ctx.r31.s64 + 100;
loc_8286B6E8:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r30,68
	ctx.r30.s64 = ctx.r30.s64 + 68;
	// bl 0x82410060
	ctx.lr = 0x8286B6FC;
	sub_82410060(ctx, base);
	// lwz r11,44(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 44);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8286b6e8
	if (ctx.cr6.lt) goto loc_8286B6E8;
loc_8286B70C:
	// lis r4,21320
	ctx.r4.s64 = 1397227520;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// ori r4,r4,21570
	ctx.r4.u64 = ctx.r4.u64 | 21570;
	// bl 0x82846fb0
	ctx.lr = 0x8286B71C;
	sub_82846FB0(ctx, base);
	// lis r4,19785
	ctx.r4.s64 = 1296629760;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// ori r4,r4,18756
	ctx.r4.u64 = ctx.r4.u64 | 18756;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82846fb0
	ctx.lr = 0x8286B730;
	sub_82846FB0(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// bl 0x82a46740
	ctx.lr = 0x8286B740;
	sub_82A46740(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stb r29,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r29.u8);
	// addi r30,r31,132
	ctx.r30.s64 = ctx.r31.s64 + 132;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// stw r9,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// stw r9,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8286b8b4
	if (!ctx.cr6.gt) goto loc_8286B8B4;
	// addi r19,r31,12
	ctx.r19.s64 = ctx.r31.s64 + 12;
	// addi r18,r31,36
	ctx.r18.s64 = ctx.r31.s64 + 36;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
loc_8286B79C:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,12(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwzx r11,r25,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8286B7C4;
	sub_82410060(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwzx r11,r25,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82856570
	ctx.lr = 0x8286B7D8;
	sub_82856570(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286b7f4
	if (ctx.cr6.eq) goto loc_8286B7F4;
	// lwz r28,24(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// b 0x8286b7f8
	goto loc_8286B7F8;
loc_8286B7F4:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_8286B7F8:
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286b830
	if (ctx.cr6.eq) goto loc_8286B830;
loc_8286B804:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8286B818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// or r24,r3,r24
	ctx.r24.u64 = ctx.r3.u64 | ctx.r24.u64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8286b804
	if (ctx.cr6.lt) goto loc_8286B804;
loc_8286B830:
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286b844
	if (ctx.cr6.eq) goto loc_8286B844;
	// lwz r28,32(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// b 0x8286b848
	goto loc_8286B848;
loc_8286B844:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_8286B848:
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286b880
	if (ctx.cr6.eq) goto loc_8286B880;
loc_8286B854:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8286B868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// or r24,r3,r24
	ctx.r24.u64 = ctx.r3.u64 | ctx.r24.u64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8286b854
	if (ctx.cr6.lt) goto loc_8286B854;
loc_8286B880:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82410060
	ctx.lr = 0x8286B88C;
	sub_82410060(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r11,r25,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// bl 0x8287f600
	ctx.lr = 0x8286B8A0;
	sub_8287F600(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8286b79c
	if (ctx.cr6.lt) goto loc_8286B79C;
loc_8286B8B4:
	// lwz r11,56(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 56);
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
	// stw r24,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r24.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwz r11,60(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8286b940
	if (ctx.cr6.eq) goto loc_8286B940;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82333900
	ctx.lr = 0x8286B8D8;
	sub_82333900(ctx, base);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// lfs f0,64(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,68(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,72(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,76(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lwz r11,80(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 80);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lfs f0,84(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lfs f0,88(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f13,92(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
loc_8286B940:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82846f58
	ctx.lr = 0x8286B94C;
	sub_82846F58(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8286B954;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286b990
	if (ctx.cr0.eq) goto loc_8286B990;
	// lwz r11,12(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lwz r9,152(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 152);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r10,22084
	ctx.r10.s64 = ctx.r10.s64 + 22084;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,12(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x8286b994
	goto loc_8286B994;
loc_8286B990:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8286B994:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8286B99C;
	sub_8248C5F8(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82a4ea28
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286B9A8"))) PPC_WEAK_FUNC(sub_8286B9A8);
PPC_FUNC_IMPL(__imp__sub_8286B9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8286B9B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,44
	ctx.r3.s64 = 44;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82333900
	ctx.lr = 0x8286B9C4;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286ba10
	if (ctx.cr0.eq) goto loc_8286BA10;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,26684
	ctx.r8.s64 = ctx.r11.s64 + 26684;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x8286ba14
	goto loc_8286BA14;
loc_8286BA10:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8286BA14:
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8286ba44
	if (ctx.cr0.eq) goto loc_8286BA44;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82846fb0
	ctx.lr = 0x8286BA30;
	sub_82846FB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286ba78
	if (ctx.cr0.eq) goto loc_8286BA78;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// b 0x8286ba78
	goto loc_8286BA78;
loc_8286BA44:
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8286ba78
	if (ctx.cr0.eq) goto loc_8286BA78;
	// addi r30,r31,108
	ctx.r30.s64 = ctx.r31.s64 + 108;
	// addi r28,r29,16
	ctx.r28.s64 = ctx.r29.s64 + 16;
	// li r31,3
	ctx.r31.s64 = 3;
loc_8286BA58:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8286BA6C;
	sub_82410060(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8286ba58
	if (!ctx.cr0.eq) goto loc_8286BA58;
loc_8286BA78:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82846f58
	ctx.lr = 0x8286BA84;
	sub_82846F58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286BA90"))) PPC_WEAK_FUNC(sub_8286BA90);
PPC_FUNC_IMPL(__imp__sub_8286BA90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8286BA98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82816528
	ctx.lr = 0x8286BAB0;
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
	ctx.lr = 0x8286BAC4;
	sub_82846E98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82333900
	ctx.lr = 0x8286BAD0;
	sub_82333900(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8286bafc
	if (ctx.cr0.eq) goto loc_8286BAFC;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// addi r10,r8,26664
	ctx.r10.s64 = ctx.r8.s64 + 26664;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// b 0x8286bb00
	goto loc_8286BB00;
loc_8286BAFC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_8286BB00:
	// stw r31,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r31.u32);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// stw r11,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
	// stw r11,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r11.u32);
	// stw r11,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r11.u32);
	// stw r11,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286bb3c
	if (ctx.cr6.eq) goto loc_8286BB3C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
loc_8286BB3C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286bb54
	if (ctx.cr6.eq) goto loc_8286BB54;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
loc_8286BB54:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286bb6c
	if (ctx.cr6.eq) goto loc_8286BB6C;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
loc_8286BB6C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286bb84
	if (ctx.cr6.eq) goto loc_8286BB84;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
loc_8286BB84:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286bb9c
	if (ctx.cr6.eq) goto loc_8286BB9C;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
loc_8286BB9C:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286bbb4
	if (ctx.cr6.eq) goto loc_8286BBB4;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r11.u32);
loc_8286BBB4:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286bbcc
	if (ctx.cr6.eq) goto loc_8286BBCC;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r11.u32);
loc_8286BBCC:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286bbe4
	if (ctx.cr6.eq) goto loc_8286BBE4;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r11.u32);
loc_8286BBE4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82846f58
	ctx.lr = 0x8286BBEC;
	sub_82846F58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286BBF8"))) PPC_WEAK_FUNC(sub_8286BBF8);
PPC_FUNC_IMPL(__imp__sub_8286BBF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8286BC00;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r5,160(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// lwz r4,152(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// bl 0x82847bb0
	ctx.lr = 0x8286BC14;
	sub_82847BB0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,48(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8286bcb4
	if (!ctx.cr6.gt) goto loc_8286BCB4;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// addi r28,r11,772
	ctx.r28.s64 = ctx.r11.s64 + 772;
loc_8286BC38:
	// lwz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// lwzx r11,r11,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8286bca0
	if (ctx.cr0.eq) goto loc_8286BCA0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x8286BC54;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82846fb0
	ctx.lr = 0x8286BC60;
	sub_82846FB0(ctx, base);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,644(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 644);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8286bca0
	if (ctx.cr6.eq) goto loc_8286BCA0;
	// addi r3,r31,1536
	ctx.r3.s64 = ctx.r31.s64 + 1536;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x8286BC88;
	sub_82332D50(ctx, base);
	// lwz r10,1548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1548);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8286bca0
	if (ctx.cr0.eq) goto loc_8286BCA0;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8286BCA0:
	// lwz r11,48(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8286bc38
	if (ctx.cr6.lt) goto loc_8286BC38;
loc_8286BCB4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286BCC0"))) PPC_WEAK_FUNC(sub_8286BCC0);
PPC_FUNC_IMPL(__imp__sub_8286BCC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e8
	ctx.lr = 0x8286BCC8;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r5,160(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 160);
	// lwz r4,152(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 152);
	// bl 0x82847bb0
	ctx.lr = 0x8286BCE8;
	sub_82847BB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// bl 0x82816528
	ctx.lr = 0x8286BD00;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82846e98
	ctx.lr = 0x8286BD14;
	sub_82846E98(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r31,r11,772
	ctx.r31.s64 = ctx.r11.s64 + 772;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82816528
	ctx.lr = 0x8286BD28;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82846fb0
	ctx.lr = 0x8286BD34;
	sub_82846FB0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x8286be20
	if (!ctx.cr6.eq) goto loc_8286BE20;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82333900
	ctx.lr = 0x8286BD50;
	sub_82333900(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8286bd74
	if (ctx.cr0.eq) goto loc_8286BD74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82816528
	ctx.lr = 0x8286BD60;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8287f3e0
	ctx.lr = 0x8286BD6C;
	sub_8287F3E0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8286bd78
	goto loc_8286BD78;
loc_8286BD74:
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_8286BD78:
	// lwz r11,152(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 152);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r11.u32);
	// bl 0x82846f58
	ctx.lr = 0x8286BD8C;
	sub_82846F58(ctx, base);
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r7,12(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r6,16(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lfs f0,20(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r28,60
	ctx.r3.s64 = ctx.r28.s64 + 60;
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r11.u32);
	// stw r10,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r10.u32);
	// stw r9,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r9.u32);
	// stw r8,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r8.u32);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x8286BE20;
	sub_82A4EA80(ctx, base);
loc_8286BE20:
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// lwz r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8286be64
	if (ctx.cr6.gt) goto loc_8286BE64;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r3,r28,88
	ctx.r3.s64 = ctx.r28.s64 + 88;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x8286BE4C;
	sub_82332D50(ctx, base);
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// mulli r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 * 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a455d0
	ctx.lr = 0x8286BE64;
	sub_82A455D0(ctx, base);
loc_8286BE64:
	// lwz r9,24(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// lwz r10,100(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// mulli r9,r9,56
	ctx.r9.s64 = ctx.r9.s64 * 56;
	// add r25,r9,r10
	ctx.r25.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286be88
	if (ctx.cr6.eq) goto loc_8286BE88;
	// lwz r10,36(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// add r21,r10,r26
	ctx.r21.u64 = ctx.r10.u64 + ctx.r26.u64;
loc_8286BE88:
	// lwz r10,48(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// addi r31,r25,28
	ctx.r31.s64 = ctx.r25.s64 + 28;
	// stw r22,44(r25)
	PPC_STORE_U32(ctx.r25.u32 + 44, ctx.r22.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8286beb0
	if (ctx.cr6.eq) goto loc_8286BEB0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x8286BEB0;
	sub_82332C38(ctx, base);
loc_8286BEB0:
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r4,32(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x8286BEC4;
	sub_82332D50(ctx, base);
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r7,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r7.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x8286BF20;
	sub_82A4EA80(ctx, base);
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8286c0f8
	if (!ctx.cr6.gt) goto loc_8286C0F8;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
loc_8286BF34:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwzx r4,r26,r21
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r21.u32);
	// bl 0x82846fb0
	ctx.lr = 0x8286BF40;
	sub_82846FB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8286BF54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286bf80
	if (ctx.cr0.eq) goto loc_8286BF80;
	// bl 0x825415f0
	ctx.lr = 0x8286BF60;
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
	ctx.lr = 0x8286BF78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8286bf84
	if (!ctx.cr0.eq) goto loc_8286BF84;
loc_8286BF80:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_8286BF84:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8286c054
	if (!ctx.cr6.eq) goto loc_8286C054;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8286BFA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82416348
	ctx.lr = 0x8286BFA4;
	sub_82416348(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8286c004
	if (!ctx.cr0.eq) goto loc_8286C004;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8286BFC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8286bff0
	if (ctx.cr0.eq) goto loc_8286BFF0;
	// bl 0x8287bdd0
	ctx.lr = 0x8286BFCC;
	sub_8287BDD0(ctx, base);
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
	ctx.lr = 0x8286BFE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x8286bff4
	if (!ctx.cr0.eq) goto loc_8286BFF4;
loc_8286BFF0:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8286BFF4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286c054
	if (ctx.cr6.eq) goto loc_8286C054;
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x8286c054
	goto loc_8286C054;
loc_8286C004:
	// addi r4,r3,252
	ctx.r4.s64 = ctx.r3.s64 + 252;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82873b58
	ctx.lr = 0x8286C010;
	sub_82873B58(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8286c0f0
	if (!ctx.cr6.gt) goto loc_8286C0F0;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x825415f0
	ctx.lr = 0x8286C028;
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
	ctx.lr = 0x8286C040;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8286c04c
	if (!ctx.cr0.eq) goto loc_8286C04C;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_8286C04C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8239d768
	ctx.lr = 0x8286C054;
	sub_8239D768(ctx, base);
loc_8286C054:
	// addi r30,r31,368
	ctx.r30.s64 = ctx.r31.s64 + 368;
	// lfs f0,24(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x8286c078
	if (ctx.cr6.eq) goto loc_8286C078;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8287f158
	ctx.lr = 0x8286C074;
	sub_8287F158(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8286C078:
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x8286C084;
	sub_82A4EA80(ctx, base);
	// lfs f0,84(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne cr6,0x8286c09c
	if (!ctx.cr6.eq) goto loc_8286C09C;
	// addi r3,r28,60
	ctx.r3.s64 = ctx.r28.s64 + 60;
	// b 0x8286c0b4
	goto loc_8286C0B4;
loc_8286C09C:
	// addi r29,r28,60
	ctx.r29.s64 = ctx.r28.s64 + 60;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8287f158
	ctx.lr = 0x8286C0AC;
	sub_8287F158(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8286C0B4:
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x8286C0BC;
	sub_82A4EA80(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r11,152(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 152);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// stwx r31,r11,r26
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r31.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8286bf34
	if (ctx.cr6.lt) goto loc_8286BF34;
	// b 0x8286c0f8
	goto loc_8286C0F8;
loc_8286C0F0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8239d768
	ctx.lr = 0x8286C0F8;
	sub_8239D768(ctx, base);
loc_8286C0F8:
	// stw r22,52(r25)
	PPC_STORE_U32(ctx.r25.u32 + 52, ctx.r22.u32);
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8286c110
	if (!ctx.cr0.eq) goto loc_8286C110;
	// addi r11,r27,40
	ctx.r11.s64 = ctx.r27.s64 + 40;
	// stw r11,52(r25)
	PPC_STORE_U32(ctx.r25.u32 + 52, ctx.r11.u32);
loc_8286C110:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r20,32
	ctx.r3.s64 = ctx.r20.s64 + 32;
	// bl 0x824848f8
	ctx.lr = 0x8286C120;
	sub_824848F8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82a4ea38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286C130"))) PPC_WEAK_FUNC(sub_8286C130);
PPC_FUNC_IMPL(__imp__sub_8286C130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8286C138;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82816528
	ctx.lr = 0x8286C150;
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
	ctx.lr = 0x8286C164;
	sub_82846E98(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286c1bc
	if (ctx.cr6.eq) goto loc_8286C1BC;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82333900
	ctx.lr = 0x8286C17C;
	sub_82333900(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8286c1a4
	if (ctx.cr0.eq) goto loc_8286C1A4;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// addi r11,r9,26920
	ctx.r11.s64 = ctx.r9.s64 + 26920;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// b 0x8286c1a8
	goto loc_8286C1A8;
loc_8286C1A4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8286C1A8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// bl 0x82846f58
	ctx.lr = 0x8286C1BC;
	sub_82846F58(ctx, base);
loc_8286C1BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286C1C8"))) PPC_WEAK_FUNC(sub_8286C1C8);
PPC_FUNC_IMPL(__imp__sub_8286C1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8286C1D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82816528
	ctx.lr = 0x8286C1E8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82846e98
	ctx.lr = 0x8286C1FC;
	sub_82846E98(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8286c27c
	if (ctx.cr0.eq) goto loc_8286C27C;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8286c27c
	if (ctx.cr6.eq) goto loc_8286C27C;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r28,r9,r11
	ctx.r28.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r27,r8,r11
	ctx.r27.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bl 0x82333900
	ctx.lr = 0x8286C230;
	sub_82333900(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8286c270
	if (ctx.cr0.eq) goto loc_8286C270;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,1108
	ctx.r10.s64 = ctx.r10.s64 + 1108;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82767140
	ctx.lr = 0x8286C268;
	sub_82767140(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x8286c274
	goto loc_8286C274;
loc_8286C270:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8286C274:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82846f58
	ctx.lr = 0x8286C27C;
	sub_82846F58(ctx, base);
loc_8286C27C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286C288"))) PPC_WEAK_FUNC(sub_8286C288);
PPC_FUNC_IMPL(__imp__sub_8286C288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8286C290;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82816528
	ctx.lr = 0x8286C2A8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82846e98
	ctx.lr = 0x8286C2BC;
	sub_82846E98(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8286c338
	if (ctx.cr0.eq) goto loc_8286C338;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8286c338
	if (ctx.cr6.eq) goto loc_8286C338;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r29,r9,r11
	ctx.r29.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bl 0x82333900
	ctx.lr = 0x8286C2E8;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286c32c
	if (ctx.cr0.eq) goto loc_8286C32C;
	// lis r10,-31947
	ctx.r10.s64 = -2093678592;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r10,-3972
	ctx.r7.s64 = ctx.r10.s64 + -3972;
	// addi r8,r8,1128
	ctx.r8.s64 = ctx.r8.s64 + 1128;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,-3972(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3972, ctx.r11.u32);
	// stw r29,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r29.u32);
	// stw r30,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r30.u32);
	// b 0x8286c330
	goto loc_8286C330;
loc_8286C32C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8286C330:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82846f58
	ctx.lr = 0x8286C338;
	sub_82846F58(ctx, base);
loc_8286C338:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286C340"))) PPC_WEAK_FUNC(sub_8286C340);
PPC_FUNC_IMPL(__imp__sub_8286C340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8286C348;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82816528
	ctx.lr = 0x8286C360;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82846e98
	ctx.lr = 0x8286C374;
	sub_82846E98(ctx, base);
	// lis r30,-31954
	ctx.r30.s64 = -2094137344;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r10,r11,-8664
	ctx.r10.s64 = ctx.r11.s64 + -8664;
	// lwz r29,20(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// add r28,r9,r3
	ctx.r28.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r11,10276(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10276);
	// add r27,r8,r3
	ctx.r27.u64 = ctx.r8.u64 + ctx.r3.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x8286C3B4;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 * 12;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8286c3d0
	if (ctx.cr0.eq) goto loc_8286C3D0;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
loc_8286C3D0:
	// lwz r11,10276(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10276);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// stw r11,10276(r30)
	PPC_STORE_U32(ctx.r30.u32 + 10276, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286C3E8"))) PPC_WEAK_FUNC(sub_8286C3E8);
PPC_FUNC_IMPL(__imp__sub_8286C3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8286C3F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r29,r11,-8664
	ctx.r29.s64 = ctx.r11.s64 + -8664;
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// addi r31,r29,16
	ctx.r31.s64 = ctx.r29.s64 + 16;
	// lwz r30,84(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
loc_8286C40C:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82333900
	ctx.lr = 0x8286C414;
	sub_82333900(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8286c430
	if (ctx.cr0.eq) goto loc_8286C430;
	// lwz r11,1200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1200);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// b 0x8286c434
	goto loc_8286C434;
loc_8286C430:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8286C434:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r3,1196(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1196);
	// bl 0x8281abd8
	ctx.lr = 0x8286C450;
	sub_8281ABD8(ctx, base);
	// lwz r11,1152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1152);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// addi r10,r29,112
	ctx.r10.s64 = ctx.r29.s64 + 112;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// stw r11,1152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1152, ctx.r11.u32);
	// blt cr6,0x8286c40c
	if (ctx.cr6.lt) goto loc_8286C40C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829b9cf8
	ctx.lr = 0x8286C474;
	sub_829B9CF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286C480"))) PPC_WEAK_FUNC(sub_8286C480);
PPC_FUNC_IMPL(__imp__sub_8286C480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8286C488;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// lwz r5,160(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// lwz r4,152(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// bl 0x82847bb0
	ctx.lr = 0x8286C4A4;
	sub_82847BB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// bl 0x82816528
	ctx.lr = 0x8286C4B4;
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
	ctx.lr = 0x8286C4C8;
	sub_82846E98(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286c610
	if (ctx.cr6.eq) goto loc_8286C610;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8286C4E0;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286c50c
	if (ctx.cr0.eq) goto loc_8286C50C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,26840
	ctx.r10.s64 = ctx.r10.s64 + 26840;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x8286c510
	goto loc_8286C510;
loc_8286C50C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8286C510:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bl 0x82846f58
	ctx.lr = 0x8286C530;
	sub_82846F58(ctx, base);
	// lis r31,-31944
	ctx.r31.s64 = -2093481984;
	// lwz r11,19548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19548);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8286c554
	if (!ctx.cr6.eq) goto loc_8286C554;
	// li r3,200
	ctx.r3.s64 = 200;
	// bl 0x82333900
	ctx.lr = 0x8286C548;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286c554
	if (ctx.cr0.eq) goto loc_8286C554;
	// bl 0x829e1008
	ctx.lr = 0x8286C554;
	sub_829E1008(ctx, base);
loc_8286C554:
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,19548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19548);
	// addi r31,r11,76
	ctx.r31.s64 = ctx.r11.s64 + 76;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823928a0
	ctx.lr = 0x8286C570;
	sub_823928A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8286c5ac
	if (!ctx.cr0.eq) goto loc_8286C5AC;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82833108
	ctx.lr = 0x8286C580;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286c594
	if (ctx.cr0.eq) goto loc_8286C594;
	// bl 0x8288be28
	ctx.lr = 0x8286C58C;
	sub_8288BE28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8286c598
	goto loc_8286C598;
loc_8286C594:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8286C598:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x8286C5A4;
	sub_828D0CB0(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8286c5b0
	goto loc_8286C5B0;
loc_8286C5AC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8286C5B0:
	// lwz r11,152(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82333900
	ctx.lr = 0x8286C5C0;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286c5f8
	if (ctx.cr0.eq) goto loc_8286C5F8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lwz r9,152(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,22092
	ctx.r10.s64 = ctx.r10.s64 + 22092;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// b 0x8286c5fc
	goto loc_8286C5FC;
loc_8286C5F8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8286C5FC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8286C604;
	sub_8248C5F8(ctx, base);
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r3,r27,32
	ctx.r3.s64 = ctx.r27.s64 + 32;
	// bl 0x824848f8
	ctx.lr = 0x8286C610;
	sub_824848F8(ctx, base);
loc_8286C610:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286C618"))) PPC_WEAK_FUNC(sub_8286C618);
PPC_FUNC_IMPL(__imp__sub_8286C618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8286C620;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r5,160(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	// lwz r4,152(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// bl 0x82847bb0
	ctx.lr = 0x8286C634;
	sub_82847BB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8286c71c
	if (!ctx.cr6.gt) goto loc_8286C71C;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r23,1
	ctx.r23.s64 = 1;
	// lis r26,-31944
	ctx.r26.s64 = -2093481984;
loc_8286C654:
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r11,r11,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82846fb0
	ctx.lr = 0x8286C668;
	sub_82846FB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286c708
	if (ctx.cr0.eq) goto loc_8286C708;
	// lwz r3,19548(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19548);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x829e1748
	ctx.lr = 0x8286C684;
	sub_829E1748(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8286c708
	if (ctx.cr0.eq) goto loc_8286C708;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,19548(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19548);
	// addi r3,r30,76
	ctx.r3.s64 = ctx.r30.s64 + 76;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x823928a0
	ctx.lr = 0x8286C6A4;
	sub_823928A0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286c6fc
	if (ctx.cr0.eq) goto loc_8286C6FC;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8286c700
	if (!ctx.cr6.eq) goto loc_8286C700;
	// stw r23,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r23.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,44
	ctx.r3.s64 = ctx.r30.s64 + 44;
	// bl 0x823928a0
	ctx.lr = 0x8286C6C8;
	sub_823928A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286c6fc
	if (ctx.cr0.eq) goto loc_8286C6FC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8286c6f0
	if (ctx.cr6.eq) goto loc_8286C6F0;
	// bl 0x829e1ae0
	ctx.lr = 0x8286C6EC;
	sub_829E1AE0(ctx, base);
	// b 0x8286c6f4
	goto loc_8286C6F4;
loc_8286C6F0:
	// bl 0x829e19b0
	ctx.lr = 0x8286C6F4;
	sub_829E19B0(ctx, base);
loc_8286C6F4:
	// stw r23,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r23.u32);
	// b 0x8286c700
	goto loc_8286C700;
loc_8286C6FC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8286C700:
	// lwz r11,152(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8286C708:
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8286c654
	if (ctx.cr6.lt) goto loc_8286C654;
loc_8286C71C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286C728"))) PPC_WEAK_FUNC(sub_8286C728);
PPC_FUNC_IMPL(__imp__sub_8286C728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,26840
	ctx.r11.s64 = ctx.r11.s64 + 26840;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,19548(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19548);
	// bl 0x829e1560
	ctx.lr = 0x8286C758;
	sub_829E1560(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r11,r11,3664
	ctx.r11.s64 = ctx.r11.s64 + 3664;
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

__attribute__((alias("__imp__sub_8286C778"))) PPC_WEAK_FUNC(sub_8286C778);
PPC_FUNC_IMPL(__imp__sub_8286C778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82333900
	ctx.lr = 0x8286C79C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286c7c8
	if (ctx.cr0.eq) goto loc_8286C7C8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,26920
	ctx.r10.s64 = ctx.r10.s64 + 26920;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x8286c7cc
	goto loc_8286C7CC;
loc_8286C7C8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8286C7CC:
	// stw r31,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82846f58
	ctx.lr = 0x8286C7D8;
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

__attribute__((alias("__imp__sub_8286C7F0"))) PPC_WEAK_FUNC(sub_8286C7F0);
PPC_FUNC_IMPL(__imp__sub_8286C7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8286C7F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r11,328
	ctx.r3.s64 = ctx.r11.s64 + 328;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82816528
	ctx.lr = 0x8286C810;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82846e98
	ctx.lr = 0x8286C824;
	sub_82846E98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82846fb0
	ctx.lr = 0x8286C834;
	sub_82846FB0(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8286C83C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286c868
	if (ctx.cr0.eq) goto loc_8286C868;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,26880
	ctx.r10.s64 = ctx.r10.s64 + 26880;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x8286c86c
	goto loc_8286C86C;
loc_8286C868:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8286C86C:
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82333900
	ctx.lr = 0x8286C878;
	sub_82333900(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82b1fc38
	ctx.lr = 0x8286C894;
	sub_82B1FC38(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82b20198
	ctx.lr = 0x8286C8A4;
	sub_82B20198(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82846f58
	ctx.lr = 0x8286C8B0;
	sub_82846F58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286C8B8"))) PPC_WEAK_FUNC(sub_8286C8B8);
PPC_FUNC_IMPL(__imp__sub_8286C8B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8286C8C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r11,352
	ctx.r3.s64 = ctx.r11.s64 + 352;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82816528
	ctx.lr = 0x8286C8D8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82846e98
	ctx.lr = 0x8286C8EC;
	sub_82846E98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82846fb0
	ctx.lr = 0x8286C8FC;
	sub_82846FB0(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8286C904;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286c930
	if (ctx.cr0.eq) goto loc_8286C930;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,26880
	ctx.r10.s64 = ctx.r10.s64 + 26880;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x8286c934
	goto loc_8286C934;
loc_8286C930:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8286C934:
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82333900
	ctx.lr = 0x8286C940;
	sub_82333900(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r8,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r8.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8286c95c
	if (!ctx.cr6.eq) goto loc_8286C95C;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8286c968
	goto loc_8286C968;
loc_8286C95C:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8286c97c
	if (!ctx.cr6.eq) goto loc_8286C97C;
	// li r5,6
	ctx.r5.s64 = 6;
loc_8286C968:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82b1fcd0
	ctx.lr = 0x8286C97C;
	sub_82B1FCD0(ctx, base);
loc_8286C97C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82b20198
	ctx.lr = 0x8286C98C;
	sub_82B20198(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82846f58
	ctx.lr = 0x8286C998;
	sub_82846F58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286C9A0"))) PPC_WEAK_FUNC(sub_8286C9A0);
PPC_FUNC_IMPL(__imp__sub_8286C9A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8286C9A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82846e98
	ctx.lr = 0x8286C9D4;
	sub_82846E98(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8286C9DC;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286ca04
	if (ctx.cr0.eq) goto loc_8286CA04;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x8286ca08
	goto loc_8286CA08;
loc_8286CA04:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8286CA08:
	// lwz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// addi r3,r27,36
	ctx.r3.s64 = ctx.r27.s64 + 36;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286ca64
	if (ctx.cr6.eq) goto loc_8286CA64;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8286ca64
	if (!ctx.cr6.gt) goto loc_8286CA64;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 & ctx.r29.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8286ca64
	if (ctx.cr6.eq) goto loc_8286CA64;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_8286CA44:
	// mulli r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 * 12;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x8286ca7c
	if (ctx.cr6.eq) goto loc_8286CA7C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8286ca44
	if (!ctx.cr6.eq) goto loc_8286CA44;
loc_8286CA64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8286CA68:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8286ca8c
	if (!ctx.cr6.eq) goto loc_8286CA8C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8256e610
	ctx.lr = 0x8286CA78;
	sub_8256E610(ctx, base);
	// b 0x8286ca98
	goto loc_8286CA98;
loc_8286CA7C:
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8286ca68
	goto loc_8286CA68;
loc_8286CA8C:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r10.u32);
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
loc_8286CA98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286CAA0"))) PPC_WEAK_FUNC(sub_8286CAA0);
PPC_FUNC_IMPL(__imp__sub_8286CAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,36
	ctx.r3.s64 = 36;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82333900
	ctx.lr = 0x8286CAC4;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286cadc
	if (ctx.cr0.eq) goto loc_8286CADC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829973d0
	ctx.lr = 0x8286CAD4;
	sub_829973D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8286cae0
	goto loc_8286CAE0;
loc_8286CADC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8286CAE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82846f58
	ctx.lr = 0x8286CAE8;
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

__attribute__((alias("__imp__sub_8286CB00"))) PPC_WEAK_FUNC(sub_8286CB00);
PPC_FUNC_IMPL(__imp__sub_8286CB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e8
	ctx.lr = 0x8286CB08;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x82333900
	ctx.lr = 0x8286CB24;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r23,0
	ctx.r23.s64 = 0;
	// beq 0x8286cb80
	if (ctx.cr0.eq) goto loc_8286CB80;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,19785
	ctx.r10.s64 = 1296629760;
	// addi r11,r11,-6900
	ctx.r11.s64 = ctx.r11.s64 + -6900;
	// ori r10,r10,18756
	ctx.r10.u64 = ctx.r10.u64 | 18756;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r23,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r23.u32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r23,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r23.u32);
	// stw r23,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r23.u32);
	// stw r23,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r23.u32);
	// stw r23,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r23.u32);
	// stw r23,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r23.u32);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// b 0x8286cb84
	goto loc_8286CB84;
loc_8286CB80:
	// mr r20,r23
	ctx.r20.u64 = ctx.r23.u64;
loc_8286CB84:
	// lis r4,19797
	ctx.r4.s64 = 1297416192;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ori r4,r4,18761
	ctx.r4.u64 = ctx.r4.u64 | 18761;
	// bl 0x82846fb0
	ctx.lr = 0x8286CB94;
	sub_82846FB0(ctx, base);
	// lwz r11,208(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 208);
	// addi r30,r29,208
	ctx.r30.s64 = ctx.r29.s64 + 208;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8286CBB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82333900
	ctx.lr = 0x8286CBB8;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286cbe4
	if (ctx.cr0.eq) goto loc_8286CBE4;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r23,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r23.u32);
	// stw r23,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r23.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r23,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r23.u32);
	// stw r23,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r23.u32);
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// b 0x8286cbe8
	goto loc_8286CBE8;
loc_8286CBE4:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_8286CBE8:
	// lwz r11,152(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 152);
	// addi r3,r29,184
	ctx.r3.s64 = ctx.r29.s64 + 184;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82332d50
	ctx.lr = 0x8286CC04;
	sub_82332D50(ctx, base);
	// lwz r11,196(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8286cc18
	if (ctx.cr0.eq) goto loc_8286CC18;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_8286CC18:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8286CC2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,8(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// li r27,800
	ctx.r27.s64 = 800;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// divwu r10,r10,r27
	ctx.r10.u32 = ctx.r10.u32 / ctx.r27.u32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8286cc64
	if (!ctx.cr6.gt) goto loc_8286CC64;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x8286CC64;
	sub_82332C38(ctx, base);
loc_8286CC64:
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// divwu. r11,r11,r27
	ctx.r11.u32 = ctx.r11.u32 / ctx.r27.u32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8286cd48
	if (ctx.cr0.eq) goto loc_8286CD48;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r31,r26,12
	ctx.r31.s64 = ctx.r26.s64 + 12;
	// addi r25,r20,12
	ctx.r25.s64 = ctx.r20.s64 + 12;
	// addi r26,r11,-7548
	ctx.r26.s64 = ctx.r11.s64 + -7548;
loc_8286CC84:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8286CC8C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286ccc0
	if (ctx.cr0.eq) goto loc_8286CCC0;
	// lwz r11,152(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 152);
	// addi r10,r31,-12
	ctx.r10.s64 = ctx.r31.s64 + -12;
	// lwz r9,-4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// b 0x8286ccc4
	goto loc_8286CCC4;
loc_8286CCC0:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_8286CCC4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8286CCCC;
	sub_8248C5F8(ctx, base);
	// addi r30,r31,-12
	ctx.r30.s64 = ctx.r31.s64 + -12;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x8286CCE0;
	sub_828D0CB0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286cd00
	if (ctx.cr6.eq) goto loc_8286CD00;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,24(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8286CD00:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8286cd20
	if (ctx.cr6.eq) goto loc_8286CD20;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,24(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8286CD20:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82410060
	ctx.lr = 0x8286CD30;
	sub_82410060(ctx, base);
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// divwu r11,r11,r27
	ctx.r11.u32 = ctx.r11.u32 / ctx.r27.u32;
	// addi r31,r31,800
	ctx.r31.s64 = ctx.r31.s64 + 800;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8286cc84
	if (ctx.cr6.lt) goto loc_8286CC84;
loc_8286CD48:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82846f58
	ctx.lr = 0x8286CD54;
	sub_82846F58(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286CD60"))) PPC_WEAK_FUNC(sub_8286CD60);
PPC_FUNC_IMPL(__imp__sub_8286CD60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8286CD68;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82847af0
	ctx.lr = 0x8286CD78;
	sub_82847AF0(ctx, base);
	// lwz r11,208(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 208);
	// addi r23,r28,208
	ctx.r23.s64 = ctx.r28.s64 + 208;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8286CD98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,200(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 200);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8286cde0
	if (!ctx.cr6.gt) goto loc_8286CDE0;
	// lwz r8,196(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// lwz r7,152(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 152);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8286CDB4:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8286cdd8
	if (ctx.cr6.eq) goto loc_8286CDD8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8286cdb4
	if (ctx.cr6.lt) goto loc_8286CDB4;
	// b 0x8286cde0
	goto loc_8286CDE0;
loc_8286CDD8:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
loc_8286CDE0:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8286CDF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8286cf30
	if (ctx.cr6.eq) goto loc_8286CF30;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8286ce6c
	if (!ctx.cr6.gt) goto loc_8286CE6C;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
loc_8286CE14:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8286ce58
	if (ctx.cr0.eq) goto loc_8286CE58;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r7,152(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 152);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82848cc0
	ctx.lr = 0x8286CE48;
	sub_82848CC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8286ce58
	if (ctx.cr0.eq) goto loc_8286CE58;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_8286CE58:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8286ce14
	if (ctx.cr6.lt) goto loc_8286CE14;
loc_8286CE6C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r24,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r24.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8286ce94
	if (ctx.cr6.eq) goto loc_8286CE94;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x8286CE94;
	sub_82332C38(ctx, base);
loc_8286CE94:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8286CEA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,200(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 200);
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8286cf1c
	if (ctx.cr0.lt) goto loc_8286CF1C;
	// lwz r10,196(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,152(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 152);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8286CEC4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8286cee4
	if (ctx.cr6.eq) goto loc_8286CEE4;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bge 0x8286cec4
	if (!ctx.cr0.lt) goto loc_8286CEC4;
	// b 0x8286cf1c
	goto loc_8286CF1C;
loc_8286CEE4:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8286cf04
	if (ctx.cr6.eq) goto loc_8286CF04;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8239d768
	ctx.lr = 0x8286CEFC;
	sub_8239D768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332db8
	ctx.lr = 0x8286CF04;
	sub_82332DB8(ctx, base);
loc_8286CF04:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r28,184
	ctx.r3.s64 = ctx.r28.s64 + 184;
	// bl 0x82332ca8
	ctx.lr = 0x8286CF1C;
	sub_82332CA8(ctx, base);
loc_8286CF1C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8286CF30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8286CF30:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286CF38"))) PPC_WEAK_FUNC(sub_8286CF38);
PPC_FUNC_IMPL(__imp__sub_8286CF38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8286CF40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,20(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8286cf98
	if (!ctx.cr6.gt) goto loc_8286CF98;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_8286CF60:
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r7,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r7.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8286cf8c
	if (ctx.cr6.eq) goto loc_8286CF8C;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8286CF8C:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bne 0x8286cf60
	if (!ctx.cr0.eq) goto loc_8286CF60;
loc_8286CF98:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82333900
	ctx.lr = 0x8286CFA0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286d008
	if (ctx.cr0.eq) goto loc_8286D008;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lis r10,21320
	ctx.r10.s64 = 1397227520;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// addi r11,r11,-19992
	ctx.r11.s64 = ctx.r11.s64 + -19992;
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// ori r10,r10,19538
	ctx.r10.u64 = ctx.r10.u64 | 19538;
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r11,r9,65535
	ctx.r11.u64 = ctx.r9.u64 | 65535;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8286cfe8
	if (!ctx.cr6.gt) goto loc_8286CFE8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8286CFE8:
	// bl 0x82333900
	ctx.lr = 0x8286CFEC;
	sub_82333900(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82a455d0
	ctx.lr = 0x8286D000;
	sub_82A455D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x8286d00c
	goto loc_8286D00C;
loc_8286D008:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8286D00C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82846f58
	ctx.lr = 0x8286D014;
	sub_82846F58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286D020"))) PPC_WEAK_FUNC(sub_8286D020);
PPC_FUNC_IMPL(__imp__sub_8286D020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x8286D028;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r23,20(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82333900
	ctx.lr = 0x8286D040;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286d0a8
	if (ctx.cr0.eq) goto loc_8286D0A8;
	// lis r10,21320
	ctx.r10.s64 = 1397227520;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// ori r10,r10,21570
	ctx.r10.u64 = ctx.r10.u64 | 21570;
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r11,r11,1088
	ctx.r11.s64 = ctx.r11.s64 + 1088;
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r10,r9,65535
	ctx.r10.u64 = ctx.r9.u64 | 65535;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// rlwinm r3,r23,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r23,r10
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8286d080
	if (!ctx.cr6.gt) goto loc_8286D080;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8286D080:
	// bl 0x82333900
	ctx.lr = 0x8286D084;
	sub_82333900(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r23,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// bl 0x82a455d0
	ctx.lr = 0x8286D0A0;
	sub_82A455D0(ctx, base);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x8286d0b0
	goto loc_8286D0B0;
loc_8286D0A8:
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_8286D0B0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8286d174
	if (ctx.cr6.eq) goto loc_8286D174;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
loc_8286D0BC:
	// addi r24,r29,8
	ctx.r24.s64 = ctx.r29.s64 + 8;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r24,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r24.u32);
	// bl 0x82333900
	ctx.lr = 0x8286D0CC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286d140
	if (ctx.cr0.eq) goto loc_8286D140;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8286d144
	if (!ctx.cr6.gt) goto loc_8286D144;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_8286D110:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828d0cb0
	ctx.lr = 0x8286D128;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8286d110
	if (ctx.cr6.lt) goto loc_8286D110;
	// b 0x8286d144
	goto loc_8286D144;
loc_8286D140:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8286D144:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r24
	ctx.r29.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bne 0x8286d0bc
	if (!ctx.cr0.eq) goto loc_8286D0BC;
loc_8286D174:
	// lis r4,21320
	ctx.r4.s64 = 1397227520;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// ori r4,r4,19538
	ctx.r4.u64 = ctx.r4.u64 | 19538;
	// bl 0x82846fb0
	ctx.lr = 0x8286D184;
	sub_82846FB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8286d1b4
	if (ctx.cr6.eq) goto loc_8286D1B4;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_8286D198:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82996c80
	ctx.lr = 0x8286D1A8;
	sub_82996C80(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8286d198
	if (!ctx.cr0.eq) goto loc_8286D198;
loc_8286D1B4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82846f58
	ctx.lr = 0x8286D1C0;
	sub_82846F58(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r28,76(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// ble cr6,0x8286d204
	if (!ctx.cr6.gt) goto loc_8286D204;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_8286D1E0:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82996e78
	ctx.lr = 0x8286D1F0;
	sub_82996E78(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8286d1e0
	if (ctx.cr6.lt) goto loc_8286D1E0;
loc_8286D204:
	// li r3,156
	ctx.r3.s64 = 156;
	// bl 0x82333900
	ctx.lr = 0x8286D20C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286d244
	if (ctx.cr0.eq) goto loc_8286D244;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// li r10,14
	ctx.r10.s64 = 14;
	// stw r26,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r26.u32);
	// stw r26,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r26.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r26,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r26.u32);
	// lwz r11,13160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13160);
	// stw r26,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r26.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x8286d248
	goto loc_8286D248;
loc_8286D244:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8286D248:
	// stw r27,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r27.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r30,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,13156(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13156);
	// bl 0x8281abd8
	ctx.lr = 0x8286D260;
	sub_8281ABD8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286D268"))) PPC_WEAK_FUNC(sub_8286D268);
PPC_FUNC_IMPL(__imp__sub_8286D268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8286D270;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,21320
	ctx.r4.s64 = 1397227520;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,21570
	ctx.r4.u64 = ctx.r4.u64 | 21570;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82846fb0
	ctx.lr = 0x8286D28C;
	sub_82846FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r3,20
	ctx.r3.s64 = 20;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82333900
	ctx.lr = 0x8286D2A8;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286d2e0
	if (ctx.cr0.eq) goto loc_8286D2E0;
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,22100
	ctx.r10.s64 = ctx.r10.s64 + 22100;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// b 0x8286d2e4
	goto loc_8286D2E4;
loc_8286D2E0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8286D2E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8286D2EC;
	sub_8248C5F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286D2F8"))) PPC_WEAK_FUNC(sub_8286D2F8);
PPC_FUNC_IMPL(__imp__sub_8286D2F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8286d348
	ctx.lr = 0x8286D318;
	sub_8286D348(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8286d328
	if (ctx.cr0.eq) goto loc_8286D328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8286D328;
	sub_82332DB8(ctx, base);
loc_8286D328:
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

__attribute__((alias("__imp__sub_8286D348"))) PPC_WEAK_FUNC(sub_8286D348);
PPC_FUNC_IMPL(__imp__sub_8286D348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8286D350;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r11,r11,1148
	ctx.r11.s64 = ctx.r11.s64 + 1148;
	// lwz r29,12(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8286d3cc
	if (ctx.cr6.eq) goto loc_8286D3CC;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8286d384
	if (ctx.cr6.eq) goto loc_8286D384;
	// bl 0x82332db8
	ctx.lr = 0x8286D384;
	sub_82332DB8(ctx, base);
loc_8286D384:
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8286D3A8;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8286d3b8
	if (ctx.cr6.eq) goto loc_8286D3B8;
	// bl 0x82332db8
	ctx.lr = 0x8286D3B8;
	sub_82332DB8(ctx, base);
loc_8286D3B8:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x82332db8
	ctx.lr = 0x8286D3CC;
	sub_82332DB8(ctx, base);
loc_8286D3CC:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r11,r11,3664
	ctx.r11.s64 = ctx.r11.s64 + 3664;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286D3E0"))) PPC_WEAK_FUNC(sub_8286D3E0);
PPC_FUNC_IMPL(__imp__sub_8286D3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8286D3E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82816528
	ctx.lr = 0x8286D400;
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
	ctx.lr = 0x8286D414;
	sub_82846E98(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r28,r11,r3
	ctx.r28.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r27,r10,r3
	ctx.r27.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x8286d43c
	if (!ctx.cr6.gt) goto loc_8286D43C;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8286D43C:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82333900
	ctx.lr = 0x8286D444;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286d46c
	if (ctx.cr0.eq) goto loc_8286D46C;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r8,152(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829743f0
	ctx.lr = 0x8286D464;
	sub_829743F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8286d470
	goto loc_8286D470;
loc_8286D46C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8286D470:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82333900
	ctx.lr = 0x8286D478;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286d4a8
	if (ctx.cr0.eq) goto loc_8286D4A8;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// addi r10,r10,1148
	ctx.r10.s64 = ctx.r10.s64 + 1148;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x8286d4ac
	goto loc_8286D4AC;
loc_8286D4A8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8286D4AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82846f58
	ctx.lr = 0x8286D4B4;
	sub_82846F58(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8286D4BC;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286d4f4
	if (ctx.cr0.eq) goto loc_8286D4F4;
	// lwz r11,152(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r10,r10,22108
	ctx.r10.s64 = ctx.r10.s64 + 22108;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// b 0x8286d4f8
	goto loc_8286D4F8;
loc_8286D4F4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8286D4F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8286D500;
	sub_8248C5F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286D508"))) PPC_WEAK_FUNC(sub_8286D508);
PPC_FUNC_IMPL(__imp__sub_8286D508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8286D510;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82333900
	ctx.lr = 0x8286D524;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286d550
	if (ctx.cr0.eq) goto loc_8286D550;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,360
	ctx.r10.s64 = ctx.r10.s64 + 360;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x8286d554
	goto loc_8286D554;
loc_8286D550:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8286D554:
	// li r3,336
	ctx.r3.s64 = 336;
	// bl 0x82333900
	ctx.lr = 0x8286D55C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286d56c
	if (ctx.cr0.eq) goto loc_8286D56C;
	// bl 0x82a39cf0
	ctx.lr = 0x8286D568;
	sub_82A39CF0(ctx, base);
	// b 0x8286d570
	goto loc_8286D570;
loc_8286D56C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8286D570:
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// bl 0x82816528
	ctx.lr = 0x8286D580;
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
	ctx.lr = 0x8286D594;
	sub_82846E98(ctx, base);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a3a5a0
	ctx.lr = 0x8286D5B0;
	sub_82A3A5A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82846f58
	ctx.lr = 0x8286D5BC;
	sub_82846F58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286D5C8"))) PPC_WEAK_FUNC(sub_8286D5C8);
PPC_FUNC_IMPL(__imp__sub_8286D5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82333900
	ctx.lr = 0x8286D5EC;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286d624
	if (ctx.cr0.eq) goto loc_8286D624;
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r10,22116
	ctx.r10.s64 = ctx.r10.s64 + 22116;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// b 0x8286d628
	goto loc_8286D628;
loc_8286D624:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8286D628:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8286D630;
	sub_8248C5F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286D648"))) PPC_WEAK_FUNC(sub_8286D648);
PPC_FUNC_IMPL(__imp__sub_8286D648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8286D650;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lhz r11,138(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 138);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8286d69c
	if (ctx.cr0.eq) goto loc_8286D69C;
	// li r3,1488
	ctx.r3.s64 = 1488;
	// bl 0x82833108
	ctx.lr = 0x8286D67C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286d690
	if (ctx.cr0.eq) goto loc_8286D690;
	// bl 0x828fe3c8
	ctx.lr = 0x8286D688;
	sub_828FE3C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8286d694
	goto loc_8286D694;
loc_8286D690:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8286D694:
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x8286d768
	goto loc_8286D768;
loc_8286D69C:
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// addi r28,r30,184
	ctx.r28.s64 = ctx.r30.s64 + 184;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8286D6B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,232(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8286d704
	if (!ctx.cr6.gt) goto loc_8286D704;
	// lwz r9,228(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// lwz r7,152(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8286D6D0:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8286d6f0
	if (ctx.cr6.eq) goto loc_8286D6F0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8286d6d0
	if (ctx.cr6.lt) goto loc_8286D6D0;
	// b 0x8286d704
	goto loc_8286D704;
loc_8286D6F0:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8286d754
	if (!ctx.cr6.eq) goto loc_8286D754;
loc_8286D704:
	// li r3,1488
	ctx.r3.s64 = 1488;
	// bl 0x82833108
	ctx.lr = 0x8286D70C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286d720
	if (ctx.cr0.eq) goto loc_8286D720;
	// bl 0x828fe3c8
	ctx.lr = 0x8286D718;
	sub_828FE3C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8286d724
	goto loc_8286D724;
loc_8286D720:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8286D724:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,216
	ctx.r3.s64 = ctx.r30.s64 + 216;
	// bl 0x82332d50
	ctx.lr = 0x8286D738;
	sub_82332D50(ctx, base);
	// lwz r10,228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// lwz r9,152(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r10,228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
loc_8286D754:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8286D768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8286D768:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8286D788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8286d7c4
	if (ctx.cr6.eq) goto loc_8286D7C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8286D7AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b8ee8
	ctx.lr = 0x8286D7C4;
	sub_829B8EE8(ctx, base);
loc_8286D7C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286D7D0"))) PPC_WEAK_FUNC(sub_8286D7D0);
PPC_FUNC_IMPL(__imp__sub_8286D7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8286D7D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r28,r31,184
	ctx.r28.s64 = ctx.r31.s64 + 184;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8286D7FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,232(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8286d870
	if (!ctx.cr6.gt) goto loc_8286D870;
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r8,152(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8286D818:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8286d838
	if (ctx.cr6.eq) goto loc_8286D838;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8286d818
	if (ctx.cr6.lt) goto loc_8286D818;
	// b 0x8286d870
	goto loc_8286D870;
loc_8286D838:
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,5
	ctx.r5.s64 = 5;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,13024(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13024);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b8ee8
	ctx.lr = 0x8286D858;
	sub_829B8EE8(ctx, base);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// bl 0x82332ca8
	ctx.lr = 0x8286D870;
	sub_82332CA8(ctx, base);
loc_8286D870:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8286D884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286D890"))) PPC_WEAK_FUNC(sub_8286D890);
PPC_FUNC_IMPL(__imp__sub_8286D890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8286D898;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,160(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	// lwz r4,152(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	// bl 0x82847bb0
	ctx.lr = 0x8286D8A8;
	sub_82847BB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8286d94c
	if (!ctx.cr6.gt) goto loc_8286D94C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8286D8C0:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwzx r31,r11,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8286d8f8
	if (ctx.cr6.eq) goto loc_8286D8F8;
	// bl 0x824d4c88
	ctx.lr = 0x8286D8D4;
	sub_824D4C88(ctx, base);
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
	ctx.lr = 0x8286D8EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8286d8fc
	if (!ctx.cr0.eq) goto loc_8286D8FC;
loc_8286D8F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8286D8FC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8286D90C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286d938
	if (ctx.cr0.eq) goto loc_8286D938;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8286D930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_8286D938:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8286d8c0
	if (ctx.cr6.lt) goto loc_8286D8C0;
loc_8286D94C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8286D958"))) PPC_WEAK_FUNC(sub_8286D958);
PPC_FUNC_IMPL(__imp__sub_8286D958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8286d9a8
	ctx.lr = 0x8286D978;
	sub_8286D9A8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8286d988
	if (ctx.cr0.eq) goto loc_8286D988;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8286D988;
	sub_82332DB8(ctx, base);
loc_8286D988:
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

__attribute__((alias("__imp__sub_8286D9A8"))) PPC_WEAK_FUNC(sub_8286D9A8);
PPC_FUNC_IMPL(__imp__sub_8286D9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r10,r10,1108
	ctx.r10.s64 = ctx.r10.s64 + 1108;
	// addi r31,r11,-18588
	ctx.r31.s64 = ctx.r11.s64 + -18588;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-18588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18588);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8286D9E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r11,r11,-7204
	ctx.r11.s64 = ctx.r11.s64 + -7204;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8286da08
	if (ctx.cr6.eq) goto loc_8286DA08;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8286da28
	goto loc_8286DA28;
loc_8286DA08:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_8286DA28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8286DA34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r11,r11,3664
	ctx.r11.s64 = ctx.r11.s64 + 3664;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286DA58"))) PPC_WEAK_FUNC(sub_8286DA58);
PPC_FUNC_IMPL(__imp__sub_8286DA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-31947
	ctx.r8.s64 = -2093678592;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r8,-3972
	ctx.r6.s64 = ctx.r8.s64 + -3972;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r7,-32226
	ctx.r7.s64 = -2111963136;
	// stw r11,-3972(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3972, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r7,3664
	ctx.r11.s64 = ctx.r7.s64 + 3664;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// clrlwi. r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8286daa4
	if (ctx.cr0.eq) goto loc_8286DAA4;
	// bl 0x82332db8
	ctx.lr = 0x8286DAA4;
	sub_82332DB8(ctx, base);
loc_8286DAA4:
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

__attribute__((alias("__imp__sub_8286DAC0"))) PPC_WEAK_FUNC(sub_8286DAC0);
PPC_FUNC_IMPL(__imp__sub_8286DAC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-3216
	ctx.r11.s64 = ctx.r11.s64 + -3216;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8286daf8
	if (!ctx.cr6.eq) goto loc_8286DAF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8286db00
	goto loc_8286DB00;
loc_8286DAF8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82765d00
	ctx.lr = 0x8286DB00;
	sub_82765D00(ctx, base);
loc_8286DB00:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286DB30"))) PPC_WEAK_FUNC(sub_8286DB30);
PPC_FUNC_IMPL(__imp__sub_8286DB30) {
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
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82833108
	ctx.lr = 0x8286DB44;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8286db54
	if (ctx.cr0.eq) goto loc_8286DB54;
	// bl 0x82856778
	ctx.lr = 0x8286DB50;
	sub_82856778(ctx, base);
	// b 0x8286db58
	goto loc_8286DB58;
loc_8286DB54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8286DB58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286DB68"))) PPC_WEAK_FUNC(sub_8286DB68);
PPC_FUNC_IMPL(__imp__sub_8286DB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-23944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23944);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8286dba8
	if (!ctx.cr0.eq) goto loc_8286DBA8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-23944(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23944, ctx.r11.u32);
	// addi r3,r9,-4316
	ctx.r3.s64 = ctx.r9.s64 + -4316;
	// bl 0x82816528
	ctx.lr = 0x8286DBA0;
	sub_82816528(ctx, base);
	// stw r3,-23948(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23948, ctx.r3.u32);
	// b 0x8286dbac
	goto loc_8286DBAC;
loc_8286DBA8:
	// lwz r3,-23948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23948);
loc_8286DBAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286DBC0"))) PPC_WEAK_FUNC(sub_8286DBC0);
PPC_FUNC_IMPL(__imp__sub_8286DBC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8286dc10
	ctx.lr = 0x8286DBE0;
	sub_8286DC10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8286DBF4;
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

__attribute__((alias("__imp__sub_8286DC10"))) PPC_WEAK_FUNC(sub_8286DC10);
PPC_FUNC_IMPL(__imp__sub_8286DC10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,16324
	ctx.r31.s64 = ctx.r11.s64 + 16324;
	// lwz r11,16320(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16320);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8286dc58
	if (!ctx.cr0.eq) goto loc_8286DC58;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,1520
	ctx.r9.s64 = ctx.r9.s64 + 1520;
	// stw r11,16320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16320, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19496
	ctx.r3.s64 = ctx.r11.s64 + -19496;
	// bl 0x82a4c758
	ctx.lr = 0x8286DC58;
	sub_82A4C758(ctx, base);
loc_8286DC58:
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

__attribute__((alias("__imp__sub_8286DC70"))) PPC_WEAK_FUNC(sub_8286DC70);
PPC_FUNC_IMPL(__imp__sub_8286DC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82833108
	ctx.lr = 0x8286DC88;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286dcac
	if (ctx.cr0.eq) goto loc_8286DCAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82468f90
	ctx.lr = 0x8286DC98;
	sub_82468F90(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1544
	ctx.r11.s64 = ctx.r11.s64 + 1544;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8286dcb0
	goto loc_8286DCB0;
loc_8286DCAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8286DCB0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286DCC8"))) PPC_WEAK_FUNC(sub_8286DCC8);
PPC_FUNC_IMPL(__imp__sub_8286DCC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-23952(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23952);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8286dd08
	if (!ctx.cr0.eq) goto loc_8286DD08;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-23952(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23952, ctx.r11.u32);
	// addi r3,r9,-4296
	ctx.r3.s64 = ctx.r9.s64 + -4296;
	// bl 0x82816528
	ctx.lr = 0x8286DD00;
	sub_82816528(ctx, base);
	// stw r3,-23956(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23956, ctx.r3.u32);
	// b 0x8286dd0c
	goto loc_8286DD0C;
loc_8286DD08:
	// lwz r3,-23956(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23956);
loc_8286DD0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286DD20"))) PPC_WEAK_FUNC(sub_8286DD20);
PPC_FUNC_IMPL(__imp__sub_8286DD20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8286dd70
	ctx.lr = 0x8286DD40;
	sub_8286DD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8286DD54;
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

__attribute__((alias("__imp__sub_8286DD70"))) PPC_WEAK_FUNC(sub_8286DD70);
PPC_FUNC_IMPL(__imp__sub_8286DD70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,16332
	ctx.r31.s64 = ctx.r11.s64 + 16332;
	// lwz r11,16328(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16328);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8286ddb8
	if (!ctx.cr0.eq) goto loc_8286DDB8;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,1648
	ctx.r9.s64 = ctx.r9.s64 + 1648;
	// stw r11,16328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16328, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19520
	ctx.r3.s64 = ctx.r11.s64 + -19520;
	// bl 0x82a4c758
	ctx.lr = 0x8286DDB8;
	sub_82A4C758(ctx, base);
loc_8286DDB8:
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

__attribute__((alias("__imp__sub_8286DDD0"))) PPC_WEAK_FUNC(sub_8286DDD0);
PPC_FUNC_IMPL(__imp__sub_8286DDD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8286DDE8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286de0c
	if (ctx.cr0.eq) goto loc_8286DE0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82468f90
	ctx.lr = 0x8286DDF8;
	sub_82468F90(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1672
	ctx.r11.s64 = ctx.r11.s64 + 1672;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8286de10
	goto loc_8286DE10;
loc_8286DE0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8286DE10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286DE28"))) PPC_WEAK_FUNC(sub_8286DE28);
PPC_FUNC_IMPL(__imp__sub_8286DE28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-23960(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23960);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8286de68
	if (!ctx.cr0.eq) goto loc_8286DE68;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-23960(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23960, ctx.r11.u32);
	// addi r3,r9,-4280
	ctx.r3.s64 = ctx.r9.s64 + -4280;
	// bl 0x82816528
	ctx.lr = 0x8286DE60;
	sub_82816528(ctx, base);
	// stw r3,-23964(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23964, ctx.r3.u32);
	// b 0x8286de6c
	goto loc_8286DE6C;
loc_8286DE68:
	// lwz r3,-23964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23964);
loc_8286DE6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286DE80"))) PPC_WEAK_FUNC(sub_8286DE80);
PPC_FUNC_IMPL(__imp__sub_8286DE80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8286ded0
	ctx.lr = 0x8286DEA0;
	sub_8286DED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8286DEB4;
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

__attribute__((alias("__imp__sub_8286DED0"))) PPC_WEAK_FUNC(sub_8286DED0);
PPC_FUNC_IMPL(__imp__sub_8286DED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,16340
	ctx.r31.s64 = ctx.r11.s64 + 16340;
	// lwz r11,16336(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16336);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8286df18
	if (!ctx.cr0.eq) goto loc_8286DF18;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,1776
	ctx.r9.s64 = ctx.r9.s64 + 1776;
	// stw r11,16336(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16336, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19544
	ctx.r3.s64 = ctx.r11.s64 + -19544;
	// bl 0x82a4c758
	ctx.lr = 0x8286DF18;
	sub_82A4C758(ctx, base);
loc_8286DF18:
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

__attribute__((alias("__imp__sub_8286DF30"))) PPC_WEAK_FUNC(sub_8286DF30);
PPC_FUNC_IMPL(__imp__sub_8286DF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82833108
	ctx.lr = 0x8286DF48;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286df6c
	if (ctx.cr0.eq) goto loc_8286DF6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82468f90
	ctx.lr = 0x8286DF58;
	sub_82468F90(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1800
	ctx.r11.s64 = ctx.r11.s64 + 1800;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8286df70
	goto loc_8286DF70;
loc_8286DF6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8286DF70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286DF88"))) PPC_WEAK_FUNC(sub_8286DF88);
PPC_FUNC_IMPL(__imp__sub_8286DF88) {
	PPC_FUNC_PROLOGUE();
	// li r3,96
	ctx.r3.s64 = 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286DF90"))) PPC_WEAK_FUNC(sub_8286DF90);
PPC_FUNC_IMPL(__imp__sub_8286DF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-23968(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23968);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8286dfd0
	if (!ctx.cr0.eq) goto loc_8286DFD0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-23968(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23968, ctx.r11.u32);
	// addi r3,r9,-4264
	ctx.r3.s64 = ctx.r9.s64 + -4264;
	// bl 0x82816528
	ctx.lr = 0x8286DFC8;
	sub_82816528(ctx, base);
	// stw r3,-23972(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23972, ctx.r3.u32);
	// b 0x8286dfd4
	goto loc_8286DFD4;
loc_8286DFD0:
	// lwz r3,-23972(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23972);
loc_8286DFD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286DFE8"))) PPC_WEAK_FUNC(sub_8286DFE8);
PPC_FUNC_IMPL(__imp__sub_8286DFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8286e038
	ctx.lr = 0x8286E008;
	sub_8286E038(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8286E01C;
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

__attribute__((alias("__imp__sub_8286E038"))) PPC_WEAK_FUNC(sub_8286E038);
PPC_FUNC_IMPL(__imp__sub_8286E038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,16348
	ctx.r31.s64 = ctx.r11.s64 + 16348;
	// lwz r11,16344(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16344);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8286e080
	if (!ctx.cr0.eq) goto loc_8286E080;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,1904
	ctx.r9.s64 = ctx.r9.s64 + 1904;
	// stw r11,16344(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16344, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19568
	ctx.r3.s64 = ctx.r11.s64 + -19568;
	// bl 0x82a4c758
	ctx.lr = 0x8286E080;
	sub_82A4C758(ctx, base);
loc_8286E080:
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

__attribute__((alias("__imp__sub_8286E098"))) PPC_WEAK_FUNC(sub_8286E098);
PPC_FUNC_IMPL(__imp__sub_8286E098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82833108
	ctx.lr = 0x8286E0B0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286e0d4
	if (ctx.cr0.eq) goto loc_8286E0D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82468f90
	ctx.lr = 0x8286E0C0;
	sub_82468F90(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1928
	ctx.r11.s64 = ctx.r11.s64 + 1928;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8286e0d8
	goto loc_8286E0D8;
loc_8286E0D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8286E0D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286E0F0"))) PPC_WEAK_FUNC(sub_8286E0F0);
PPC_FUNC_IMPL(__imp__sub_8286E0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-23976(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23976);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8286e130
	if (!ctx.cr0.eq) goto loc_8286E130;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-23976(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23976, ctx.r11.u32);
	// addi r3,r9,-4248
	ctx.r3.s64 = ctx.r9.s64 + -4248;
	// bl 0x82816528
	ctx.lr = 0x8286E128;
	sub_82816528(ctx, base);
	// stw r3,-23980(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23980, ctx.r3.u32);
	// b 0x8286e134
	goto loc_8286E134;
loc_8286E130:
	// lwz r3,-23980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23980);
loc_8286E134:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286E148"))) PPC_WEAK_FUNC(sub_8286E148);
PPC_FUNC_IMPL(__imp__sub_8286E148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8286e198
	ctx.lr = 0x8286E168;
	sub_8286E198(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8286E17C;
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

__attribute__((alias("__imp__sub_8286E198"))) PPC_WEAK_FUNC(sub_8286E198);
PPC_FUNC_IMPL(__imp__sub_8286E198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,16356
	ctx.r31.s64 = ctx.r11.s64 + 16356;
	// lwz r11,16352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16352);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8286e1e0
	if (!ctx.cr0.eq) goto loc_8286E1E0;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,2032
	ctx.r9.s64 = ctx.r9.s64 + 2032;
	// stw r11,16352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16352, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19592
	ctx.r3.s64 = ctx.r11.s64 + -19592;
	// bl 0x82a4c758
	ctx.lr = 0x8286E1E0;
	sub_82A4C758(ctx, base);
loc_8286E1E0:
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

__attribute__((alias("__imp__sub_8286E1F8"))) PPC_WEAK_FUNC(sub_8286E1F8);
PPC_FUNC_IMPL(__imp__sub_8286E1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,200
	ctx.r3.s64 = 200;
	// bl 0x82833108
	ctx.lr = 0x8286E210;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286e234
	if (ctx.cr0.eq) goto loc_8286E234;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82468f90
	ctx.lr = 0x8286E220;
	sub_82468F90(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2056
	ctx.r11.s64 = ctx.r11.s64 + 2056;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8286e238
	goto loc_8286E238;
loc_8286E234:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8286E238:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286E250"))) PPC_WEAK_FUNC(sub_8286E250);
PPC_FUNC_IMPL(__imp__sub_8286E250) {
	PPC_FUNC_PROLOGUE();
	// li r3,200
	ctx.r3.s64 = 200;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286E258"))) PPC_WEAK_FUNC(sub_8286E258);
PPC_FUNC_IMPL(__imp__sub_8286E258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-23984(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23984);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8286e298
	if (!ctx.cr0.eq) goto loc_8286E298;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-23984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23984, ctx.r11.u32);
	// addi r3,r9,-4228
	ctx.r3.s64 = ctx.r9.s64 + -4228;
	// bl 0x82816528
	ctx.lr = 0x8286E290;
	sub_82816528(ctx, base);
	// stw r3,-23988(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23988, ctx.r3.u32);
	// b 0x8286e29c
	goto loc_8286E29C;
loc_8286E298:
	// lwz r3,-23988(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23988);
loc_8286E29C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286E2B0"))) PPC_WEAK_FUNC(sub_8286E2B0);
PPC_FUNC_IMPL(__imp__sub_8286E2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8286e300
	ctx.lr = 0x8286E2D0;
	sub_8286E300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8286E2E4;
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

__attribute__((alias("__imp__sub_8286E300"))) PPC_WEAK_FUNC(sub_8286E300);
PPC_FUNC_IMPL(__imp__sub_8286E300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,16364
	ctx.r31.s64 = ctx.r11.s64 + 16364;
	// lwz r11,16360(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16360);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8286e348
	if (!ctx.cr0.eq) goto loc_8286E348;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,2160
	ctx.r9.s64 = ctx.r9.s64 + 2160;
	// stw r11,16360(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16360, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19616
	ctx.r3.s64 = ctx.r11.s64 + -19616;
	// bl 0x82a4c758
	ctx.lr = 0x8286E348;
	sub_82A4C758(ctx, base);
loc_8286E348:
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

__attribute__((alias("__imp__sub_8286E360"))) PPC_WEAK_FUNC(sub_8286E360);
PPC_FUNC_IMPL(__imp__sub_8286E360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82833108
	ctx.lr = 0x8286E378;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286e39c
	if (ctx.cr0.eq) goto loc_8286E39C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82468f90
	ctx.lr = 0x8286E388;
	sub_82468F90(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2184
	ctx.r11.s64 = ctx.r11.s64 + 2184;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8286e3a0
	goto loc_8286E3A0;
loc_8286E39C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8286E3A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286E3B8"))) PPC_WEAK_FUNC(sub_8286E3B8);
PPC_FUNC_IMPL(__imp__sub_8286E3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-23992(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23992);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8286e3f8
	if (!ctx.cr0.eq) goto loc_8286E3F8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-23992(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23992, ctx.r11.u32);
	// addi r3,r9,-4208
	ctx.r3.s64 = ctx.r9.s64 + -4208;
	// bl 0x82816528
	ctx.lr = 0x8286E3F0;
	sub_82816528(ctx, base);
	// stw r3,-23996(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23996, ctx.r3.u32);
	// b 0x8286e3fc
	goto loc_8286E3FC;
loc_8286E3F8:
	// lwz r3,-23996(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23996);
loc_8286E3FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8286E410"))) PPC_WEAK_FUNC(sub_8286E410);
PPC_FUNC_IMPL(__imp__sub_8286E410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8286e460
	ctx.lr = 0x8286E430;
	sub_8286E460(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8286E444;
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

__attribute__((alias("__imp__sub_8286E460"))) PPC_WEAK_FUNC(sub_8286E460);
PPC_FUNC_IMPL(__imp__sub_8286E460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,16372
	ctx.r31.s64 = ctx.r11.s64 + 16372;
	// lwz r11,16368(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16368);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8286e4a8
	if (!ctx.cr0.eq) goto loc_8286E4A8;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,2288
	ctx.r9.s64 = ctx.r9.s64 + 2288;
	// stw r11,16368(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16368, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19640
	ctx.r3.s64 = ctx.r11.s64 + -19640;
	// bl 0x82a4c758
	ctx.lr = 0x8286E4A8;
	sub_82A4C758(ctx, base);
loc_8286E4A8:
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

__attribute__((alias("__imp__sub_8286E4C0"))) PPC_WEAK_FUNC(sub_8286E4C0);
PPC_FUNC_IMPL(__imp__sub_8286E4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82833108
	ctx.lr = 0x8286E4D8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8286e4fc
	if (ctx.cr0.eq) goto loc_8286E4FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82468f90
	ctx.lr = 0x8286E4E8;
	sub_82468F90(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2312
	ctx.r11.s64 = ctx.r11.s64 + 2312;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8286e500
	goto loc_8286E500;
loc_8286E4FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8286E500:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

