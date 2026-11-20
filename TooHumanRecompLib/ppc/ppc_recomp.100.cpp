#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_826AA790"))) PPC_WEAK_FUNC(sub_826AA790);
PPC_FUNC_IMPL(__imp__sub_826AA790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826aa7e0
	ctx.lr = 0x826AA7B0;
	sub_826AA7E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AA7C4;
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

__attribute__((alias("__imp__sub_826AA7E0"))) PPC_WEAK_FUNC(sub_826AA7E0);
PPC_FUNC_IMPL(__imp__sub_826AA7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13676
	ctx.r31.s64 = ctx.r11.s64 + 13676;
	// lwz r11,13672(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13672);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826aa828
	if (!ctx.cr0.eq) goto loc_826AA828;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-27068
	ctx.r9.s64 = ctx.r9.s64 + -27068;
	// stw r11,13672(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13672, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28024
	ctx.r3.s64 = ctx.r11.s64 + 28024;
	// bl 0x82a4c758
	ctx.lr = 0x826AA828;
	sub_82A4C758(ctx, base);
loc_826AA828:
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

__attribute__((alias("__imp__sub_826AA840"))) PPC_WEAK_FUNC(sub_826AA840);
PPC_FUNC_IMPL(__imp__sub_826AA840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24240(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24240);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826aa880
	if (!ctx.cr0.eq) goto loc_826AA880;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,24240(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24240, ctx.r11.u32);
	// addi r3,r9,-27236
	ctx.r3.s64 = ctx.r9.s64 + -27236;
	// bl 0x82816528
	ctx.lr = 0x826AA878;
	sub_82816528(ctx, base);
	// stw r3,24236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24236, ctx.r3.u32);
	// b 0x826aa884
	goto loc_826AA884;
loc_826AA880:
	// lwz r3,24236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24236);
loc_826AA884:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AA898"))) PPC_WEAK_FUNC(sub_826AA898);
PPC_FUNC_IMPL(__imp__sub_826AA898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826aa8e8
	ctx.lr = 0x826AA8B8;
	sub_826AA8E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AA8CC;
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

__attribute__((alias("__imp__sub_826AA8E8"))) PPC_WEAK_FUNC(sub_826AA8E8);
PPC_FUNC_IMPL(__imp__sub_826AA8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,24252
	ctx.r31.s64 = ctx.r11.s64 + 24252;
	// lwz r11,24256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24256);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826aa930
	if (!ctx.cr0.eq) goto loc_826AA930;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-26924
	ctx.r9.s64 = ctx.r9.s64 + -26924;
	// stw r11,24256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24256, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28000
	ctx.r3.s64 = ctx.r11.s64 + 28000;
	// bl 0x82a4c758
	ctx.lr = 0x826AA930;
	sub_82A4C758(ctx, base);
loc_826AA930:
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

__attribute__((alias("__imp__sub_826AA948"))) PPC_WEAK_FUNC(sub_826AA948);
PPC_FUNC_IMPL(__imp__sub_826AA948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-26904
	ctx.r3.s64 = ctx.r11.s64 + -26904;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AA958"))) PPC_WEAK_FUNC(sub_826AA958);
PPC_FUNC_IMPL(__imp__sub_826AA958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826aa990
	if (ctx.cr6.eq) goto loc_826AA990;
	// bl 0x826ab028
	ctx.lr = 0x826AA980;
	sub_826AB028(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826aa990
	if (!ctx.cr6.eq) goto loc_826AA990;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826aa99c
	goto loc_826AA99C;
loc_826AA990:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826aa1d0
	ctx.lr = 0x826AA99C;
	sub_826AA1D0(ctx, base);
loc_826AA99C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AA9B8"))) PPC_WEAK_FUNC(sub_826AA9B8);
PPC_FUNC_IMPL(__imp__sub_826AA9B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x826AA9D4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826aa9e8
	if (ctx.cr0.eq) goto loc_826AA9E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826aaa50
	ctx.lr = 0x826AA9E4;
	sub_826AAA50(ctx, base);
	// b 0x826aa9ec
	goto loc_826AA9EC;
loc_826AA9E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AA9EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AAA00"))) PPC_WEAK_FUNC(sub_826AAA00);
PPC_FUNC_IMPL(__imp__sub_826AAA00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826ab028
	ctx.lr = 0x826AAA20;
	sub_826AB028(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826aaa34
	if (ctx.cr6.eq) goto loc_826AAA34;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826aa238
	ctx.lr = 0x826AAA34;
	sub_826AA238(ctx, base);
loc_826AAA34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AAA50"))) PPC_WEAK_FUNC(sub_826AAA50);
PPC_FUNC_IMPL(__imp__sub_826AAA50) {
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
	// bl 0x826aa470
	ctx.lr = 0x826AAA70;
	sub_826AA470(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-26840
	ctx.r11.s64 = ctx.r11.s64 + -26840;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lfs f0,96(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lfs f0,100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lfs f0,116(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// lfs f0,120(r30)
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
	// lfs f0,132(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lfs f0,136(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// lfs f0,140(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// lfs f0,144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// lfs f0,148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// lfs f0,152(r30)
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
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AAB38"))) PPC_WEAK_FUNC(sub_826AAB38);
PPC_FUNC_IMPL(__imp__sub_826AAB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-26876
	ctx.r3.s64 = ctx.r11.s64 + -26876;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AAB48"))) PPC_WEAK_FUNC(sub_826AAB48);
PPC_FUNC_IMPL(__imp__sub_826AAB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826aab80
	if (ctx.cr6.eq) goto loc_826AAB80;
	// bl 0x826ab130
	ctx.lr = 0x826AAB70;
	sub_826AB130(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826aab80
	if (!ctx.cr6.eq) goto loc_826AAB80;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826aab8c
	goto loc_826AAB8C;
loc_826AAB80:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826aa958
	ctx.lr = 0x826AAB8C;
	sub_826AA958(ctx, base);
loc_826AAB8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AABA8"))) PPC_WEAK_FUNC(sub_826AABA8);
PPC_FUNC_IMPL(__imp__sub_826AABA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x826ab130
	sub_826AB130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AABB0"))) PPC_WEAK_FUNC(sub_826AABB0);
PPC_FUNC_IMPL(__imp__sub_826AABB0) {
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
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82833108
	ctx.lr = 0x826AABD0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826aac00
	if (ctx.cr0.eq) goto loc_826AAC00;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826aaa50
	ctx.lr = 0x826AABE4;
	sub_826AAA50(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-26696
	ctx.r11.s64 = ctx.r11.s64 + -26696;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,172(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// b 0x826aac04
	goto loc_826AAC04;
loc_826AAC00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AAC04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AAC20"))) PPC_WEAK_FUNC(sub_826AAC20);
PPC_FUNC_IMPL(__imp__sub_826AAC20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826ab130
	ctx.lr = 0x826AAC40;
	sub_826AB130(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826aac50
	if (!ctx.cr6.eq) goto loc_826AAC50;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826aac68
	goto loc_826AAC68;
loc_826AAC50:
	// bl 0x826ab028
	ctx.lr = 0x826AAC54;
	sub_826AB028(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826aac68
	if (ctx.cr6.eq) goto loc_826AAC68;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826aa238
	ctx.lr = 0x826AAC68;
	sub_826AA238(ctx, base);
loc_826AAC68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AAC80"))) PPC_WEAK_FUNC(sub_826AAC80);
PPC_FUNC_IMPL(__imp__sub_826AAC80) {
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
	// bl 0x826adc48
	ctx.lr = 0x826AAC98;
	sub_826ADC48(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,-11424
	ctx.r9.s64 = ctx.r11.s64 + -11424;
	// addi r8,r10,-32516
	ctx.r8.s64 = ctx.r10.s64 + -32516;
	// lis r7,-31963
	ctx.r7.s64 = -2094727168;
	// lfs f10,-11424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11424);
	ctx.f10.f64 = double(temp.f32);
	// lis r6,-32221
	ctx.r6.s64 = -2111635456;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lfs f8,-32516(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32516);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r6,-26696
	ctx.r10.s64 = ctx.r6.s64 + -26696;
	// lfs f0,-15904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-29388(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29388);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r11,-20876
	ctx.r9.s64 = ctx.r11.s64 + -20876;
	// lfs f12,-248(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -248);
	ctx.f12.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lfs f11,24036(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24036);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// stfs f13,92(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// stfs f12,100(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// stfs f11,96(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// lis r4,-32215
	ctx.r4.s64 = -2111242240;
	// lfs f13,-31124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31124);
	ctx.f13.f64 = double(temp.f32);
	// li r10,5
	ctx.r10.s64 = 5;
	// lfs f11,23968(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23968);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,30996(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 30996);
	ctx.f9.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f12,904(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,-20876(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20876);
	// lfs f0,908(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lfs f7,912(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 912);
	ctx.f7.f64 = double(temp.f32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stfs f13,156(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// stfs f13,152(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// stfs f10,164(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stfs f11,116(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f9,120(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f12,124(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stfs f8,128(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stfs f12,140(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stfs f7,144(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AAD80"))) PPC_WEAK_FUNC(sub_826AAD80);
PPC_FUNC_IMPL(__imp__sub_826AAD80) {
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
	ctx.lr = 0x826AAD98;
	__savefpr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x826add70
	ctx.lr = 0x826AADA8;
	sub_826ADD70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826aaf5c
	if (ctx.cr0.eq) goto loc_826AAF5C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f13,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,23784(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23784);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82a4e118
	ctx.lr = 0x826AADC4;
	sub_82A4E118(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// bl 0x827e81c8
	ctx.lr = 0x826AADD0;
	sub_827E81C8(ctx, base);
	// addi r11,r3,620
	ctx.r11.s64 = ctx.r3.s64 + 620;
	// lfs f0,1492(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1492);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,1496(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1496);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1500(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f30,f10,f13
	ctx.f30.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f29,f0,f12
	ctx.f29.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x827e81c8
	ctx.lr = 0x826AAE0C;
	sub_827E81C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e8210
	ctx.lr = 0x826AAE18;
	sub_827E8210(ctx, base);
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// addi r11,r3,620
	ctx.r11.s64 = ctx.r3.s64 + 620;
	// lfs f13,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f12,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f10,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f11,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fmadds f0,f30,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f0.f64));
	// lfs f8,16668(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16668);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r11,r11,904
	ctx.r11.s64 = ctx.r11.s64 + 904;
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bne cr6,0x826aaea8
	if (!ctx.cr6.eq) goto loc_826AAEA8;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bne cr6,0x826aaed4
	if (!ctx.cr6.eq) goto loc_826AAED4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f31,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f30,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f30.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// b 0x826aaed8
	goto loc_826AAED8;
loc_826AAEA8:
	// fcmpu cr6,f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x826aaec0
	if (!ctx.cr6.lt) goto loc_826AAEC0;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// b 0x826aaed4
	goto loc_826AAED4;
loc_826AAEC0:
	// fsqrts f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f10,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fmuls f31,f10,f31
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f30,f10,f30
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
loc_826AAED4:
	// fmr f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f0.f64;
loc_826AAED8:
	// fmuls f10,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f10,f12,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bne cr6,0x826aaf18
	if (!ctx.cr6.eq) goto loc_826AAF18;
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bne cr6,0x826aaf3c
	if (!ctx.cr6.eq) goto loc_826AAF3C;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// b 0x826aaf3c
	goto loc_826AAF3C;
loc_826AAF18:
	// fcmpu cr6,f10,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// bge cr6,0x826aaf2c
	if (!ctx.cr6.lt) goto loc_826AAF2C;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// b 0x826aaf3c
	goto loc_826AAF3C;
loc_826AAF2C:
	// fsqrts f10,f10
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
loc_826AAF3C:
	// fmuls f12,f12,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// fmadds f0,f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 + ctx.f12.f64));
	// fmadds f0,f13,f31,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bgt cr6,0x826aaf5c
	if (ctx.cr6.gt) goto loc_826AAF5C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_826AAF5C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82a61794
	ctx.lr = 0x826AAF68;
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

__attribute__((alias("__imp__sub_826AAF80"))) PPC_WEAK_FUNC(sub_826AAF80);
PPC_FUNC_IMPL(__imp__sub_826AAF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24232(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24232);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826aafc0
	if (!ctx.cr0.eq) goto loc_826AAFC0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,24232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24232, ctx.r11.u32);
	// addi r3,r9,-26904
	ctx.r3.s64 = ctx.r9.s64 + -26904;
	// bl 0x82816528
	ctx.lr = 0x826AAFB8;
	sub_82816528(ctx, base);
	// stw r3,24228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24228, ctx.r3.u32);
	// b 0x826aafc4
	goto loc_826AAFC4;
loc_826AAFC0:
	// lwz r3,24228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24228);
loc_826AAFC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AAFD8"))) PPC_WEAK_FUNC(sub_826AAFD8);
PPC_FUNC_IMPL(__imp__sub_826AAFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826ab028
	ctx.lr = 0x826AAFF8;
	sub_826AB028(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AB00C;
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

__attribute__((alias("__imp__sub_826AB028"))) PPC_WEAK_FUNC(sub_826AB028);
PPC_FUNC_IMPL(__imp__sub_826AB028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13684
	ctx.r31.s64 = ctx.r11.s64 + 13684;
	// lwz r11,13680(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13680);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826ab070
	if (!ctx.cr0.eq) goto loc_826AB070;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-26716
	ctx.r9.s64 = ctx.r9.s64 + -26716;
	// stw r11,13680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13680, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28072
	ctx.r3.s64 = ctx.r11.s64 + 28072;
	// bl 0x82a4c758
	ctx.lr = 0x826AB070;
	sub_82A4C758(ctx, base);
loc_826AB070:
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

__attribute__((alias("__imp__sub_826AB088"))) PPC_WEAK_FUNC(sub_826AB088);
PPC_FUNC_IMPL(__imp__sub_826AB088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24224(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24224);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826ab0c8
	if (!ctx.cr0.eq) goto loc_826AB0C8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,24224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24224, ctx.r11.u32);
	// addi r3,r9,-26876
	ctx.r3.s64 = ctx.r9.s64 + -26876;
	// bl 0x82816528
	ctx.lr = 0x826AB0C0;
	sub_82816528(ctx, base);
	// stw r3,24220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24220, ctx.r3.u32);
	// b 0x826ab0cc
	goto loc_826AB0CC;
loc_826AB0C8:
	// lwz r3,24220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24220);
loc_826AB0CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AB0E0"))) PPC_WEAK_FUNC(sub_826AB0E0);
PPC_FUNC_IMPL(__imp__sub_826AB0E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826ab130
	ctx.lr = 0x826AB100;
	sub_826AB130(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AB114;
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

__attribute__((alias("__imp__sub_826AB130"))) PPC_WEAK_FUNC(sub_826AB130);
PPC_FUNC_IMPL(__imp__sub_826AB130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13692
	ctx.r31.s64 = ctx.r11.s64 + 13692;
	// lwz r11,13688(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13688);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826ab178
	if (!ctx.cr0.eq) goto loc_826AB178;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-26572
	ctx.r9.s64 = ctx.r9.s64 + -26572;
	// stw r11,13688(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13688, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28048
	ctx.r3.s64 = ctx.r11.s64 + 28048;
	// bl 0x82a4c758
	ctx.lr = 0x826AB178;
	sub_82A4C758(ctx, base);
loc_826AB178:
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

__attribute__((alias("__imp__sub_826AB190"))) PPC_WEAK_FUNC(sub_826AB190);
PPC_FUNC_IMPL(__imp__sub_826AB190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826AB198;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82a61728
	ctx.lr = 0x826AB1A0;
	__savefpr_20(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r31,816(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 816);
	// addi r5,r31,3296
	ctx.r5.s64 = ctx.r31.s64 + 3296;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r30,r31,3080
	ctx.r30.s64 = ctx.r31.s64 + 3080;
	// bl 0x827e4018
	ctx.lr = 0x826AB1C0;
	sub_827E4018(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,2892(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2892);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f12,3084(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,2896(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2896);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,3088(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3088);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,2888(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2888);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f10,3080(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3080);
	ctx.f10.f64 = double(temp.f32);
	// lfs f20,16668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f20.f64 = double(temp.f32);
	// fmr f1,f20
	ctx.f1.f64 = ctx.f20.f64;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f12,f11,f10
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f24,f0
	ctx.f24.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x82332e18
	ctx.lr = 0x826AB230;
	sub_82332E18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817280
	ctx.lr = 0x826AB23C;
	sub_82817280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f22,-24640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24640);
	ctx.f22.f64 = double(temp.f32);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// lfs f21,-12104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12104);
	ctx.f21.f64 = double(temp.f32);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lfs f31,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lfs f23,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f23.f64 = double(temp.f32);
loc_826AB268:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// addi r11,r11,800
	ctx.r11.s64 = ctx.r11.s64 + 800;
	// addi r28,r28,800
	ctx.r28.s64 = ctx.r28.s64 + 800;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82648440
	ctx.lr = 0x826AB284;
	sub_82648440(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82817bb8
	ctx.lr = 0x826AB2AC;
	sub_82817BB8(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f10,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f11,f11
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f0,f10,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmadds f0,f9,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// bne cr6,0x826ab30c
	if (!ctx.cr6.eq) goto loc_826AB30C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// b 0x826ab338
	goto loc_826AB338;
loc_826AB30C:
	// fcmpu cr6,f0,f20
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f20.f64);
	// bge cr6,0x826ab324
	if (!ctx.cr6.lt) goto loc_826AB324;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// b 0x826ab338
	goto loc_826AB338;
loc_826AB324:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f12,f23,f0
	ctx.f12.f64 = double(float(ctx.f23.f64 / ctx.f0.f64));
	// fmuls f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
loc_826AB338:
	// fmuls f9,f9,f24
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f24.f64));
	// lfs f8,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f11,f11,f24
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f24.f64));
	// lfs f7,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f10,f10,f24
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f24.f64));
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lwz r3,816(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 816);
	// fneg f27,f0
	ctx.f27.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f26,f13
	ctx.f26.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f25,f12
	ctx.f25.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fadds f30,f8,f9
	ctx.f30.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fadds f29,f11,f7
	ctx.f29.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fadds f28,f10,f6
	ctx.f28.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// bl 0x827ebf48
	ctx.lr = 0x826AB370;
	sub_827EBF48(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826ab458
	if (ctx.cr0.eq) goto loc_826AB458;
	// fmuls f0,f27,f21
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f21.f64));
	// stfs f22,160(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmuls f13,f26,f21
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f21.f64));
	// stfs f22,164(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmuls f12,f25,f21
	ctx.f12.f64 = double(float(ctx.f25.f64 * ctx.f21.f64));
	// stfs f22,168(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lwz r3,13024(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// li r26,-1
	ctx.r26.s64 = -1;
	// lwz r5,1412(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ori r8,r8,8326
	ctx.r8.u64 = ctx.r8.u64 | 8326;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fadds f11,f0,f30
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f11,f13,f29
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fsubs f0,f29,f13
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f13.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f11,f12,f28
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f28.f64));
	// stfs f11,152(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fsubs f0,f28,f12
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f12.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stw r26,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r26.u32);
	// stfs f31,204(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
	// stfs f31,208(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stfs f23,212(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r31.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stw r31,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r31.u32);
	// bl 0x82825330
	ctx.lr = 0x826AB434;
	sub_82825330(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826ab458
	if (ctx.cr0.eq) goto loc_826AB458;
	// cmplwi cr6,r28,65535
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 65535, ctx.xer);
	// blt cr6,0x826ab268
	if (ctx.cr6.lt) goto loc_826AB268;
	// li r3,1
	ctx.r3.s64 = 1;
loc_826AB448:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82a61774
	ctx.lr = 0x826AB454;
	__restfpr_20(ctx, base);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
loc_826AB458:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826ab448
	goto loc_826AB448;
}

__attribute__((alias("__imp__sub_826AB460"))) PPC_WEAK_FUNC(sub_826AB460);
PPC_FUNC_IMPL(__imp__sub_826AB460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826AB468;
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
	// bl 0x827e8210
	ctx.lr = 0x826AB47C;
	sub_827E8210(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x826ab55c
	if (ctx.cr0.eq) goto loc_826AB55C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82643c20
	ctx.lr = 0x826AB48C;
	sub_82643C20(ctx, base);
	// lwz r11,1776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1776);
	// lwz r3,1664(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1664);
	// bl 0x826ab190
	ctx.lr = 0x826AB498;
	sub_826AB190(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826ab55c
	if (ctx.cr0.eq) goto loc_826AB55C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e7cc0
	ctx.lr = 0x826AB4B0;
	sub_827E7CC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826ab55c
	if (ctx.cr0.eq) goto loc_826AB55C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e81c8
	ctx.lr = 0x826AB4C0;
	sub_827E81C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ab4e4
	if (ctx.cr0.eq) goto loc_826AB4E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e81c8
	ctx.lr = 0x826AB4D0;
	sub_827E81C8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AB4E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826ab4e8
	goto loc_826AB4E8;
loc_826AB4E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AB4E8:
	// lfs f13,620(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
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
	// lfs f13,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,624(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f13,-11424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11424);
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
	// bgt cr6,0x826ab55c
	if (ctx.cr6.gt) goto loc_826AB55C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x826ab55c
	if (ctx.cr6.lt) goto loc_826AB55C;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f1,24020(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24020);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824f04c8
	ctx.lr = 0x826AB54C;
	sub_824F04C8(ctx, base);
	// subfic r11,r3,100
	ctx.xer.ca = ctx.r3.u32 <= 100;
	ctx.r11.s64 = 100 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// b 0x826ab560
	goto loc_826AB560;
loc_826AB55C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AB560:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AB568"))) PPC_WEAK_FUNC(sub_826AB568);
PPC_FUNC_IMPL(__imp__sub_826AB568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826AB570;
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
	// bl 0x827e81c8
	ctx.lr = 0x826AB584;
	sub_827E81C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ab5a8
	if (ctx.cr0.eq) goto loc_826AB5A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e81c8
	ctx.lr = 0x826AB594;
	sub_827E81C8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AB5A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826ab5ac
	goto loc_826AB5AC;
loc_826AB5A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AB5AC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826ab5bc
	if (ctx.cr6.eq) goto loc_826AB5BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2180, ctx.r11.u32);
loc_826AB5BC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e7d40
	ctx.lr = 0x826AB5CC;
	sub_827E7D40(ctx, base);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,10572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10572, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AB5E0"))) PPC_WEAK_FUNC(sub_826AB5E0);
PPC_FUNC_IMPL(__imp__sub_826AB5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826AB5E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// bl 0x827e81c8
	ctx.lr = 0x826AB600;
	sub_827E81C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ab624
	if (ctx.cr0.eq) goto loc_826AB624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e81c8
	ctx.lr = 0x826AB610;
	sub_827E81C8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AB620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826ab628
	goto loc_826AB628;
loc_826AB624:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AB628:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826ab638
	if (ctx.cr6.eq) goto loc_826AB638;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2180, ctx.r11.u32);
loc_826AB638:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e7dd8
	ctx.lr = 0x826AB64C;
	sub_827E7DD8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AB658"))) PPC_WEAK_FUNC(sub_826AB658);
PPC_FUNC_IMPL(__imp__sub_826AB658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-26552
	ctx.r3.s64 = ctx.r11.s64 + -26552;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AB668"))) PPC_WEAK_FUNC(sub_826AB668);
PPC_FUNC_IMPL(__imp__sub_826AB668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826ab6a0
	if (ctx.cr6.eq) goto loc_826AB6A0;
	// bl 0x826aba20
	ctx.lr = 0x826AB690;
	sub_826ABA20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826ab6a0
	if (!ctx.cr6.eq) goto loc_826AB6A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826ab6ac
	goto loc_826AB6AC;
loc_826AB6A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826aa1d0
	ctx.lr = 0x826AB6AC;
	sub_826AA1D0(ctx, base);
loc_826AB6AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AB6C8"))) PPC_WEAK_FUNC(sub_826AB6C8);
PPC_FUNC_IMPL(__imp__sub_826AB6C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x826aba20
	sub_826ABA20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AB6D0"))) PPC_WEAK_FUNC(sub_826AB6D0);
PPC_FUNC_IMPL(__imp__sub_826AB6D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x82833108
	ctx.lr = 0x826AB6F0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826ab718
	if (ctx.cr0.eq) goto loc_826AB718;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826aa470
	ctx.lr = 0x826AB704;
	sub_826AA470(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-26512
	ctx.r11.s64 = ctx.r11.s64 + -26512;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x826ab71c
	goto loc_826AB71C;
loc_826AB718:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AB71C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AB738"))) PPC_WEAK_FUNC(sub_826AB738);
PPC_FUNC_IMPL(__imp__sub_826AB738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826aba20
	ctx.lr = 0x826AB758;
	sub_826ABA20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826ab76c
	if (ctx.cr6.eq) goto loc_826AB76C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826aa238
	ctx.lr = 0x826AB76C;
	sub_826AA238(ctx, base);
loc_826AB76C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AB788"))) PPC_WEAK_FUNC(sub_826AB788);
PPC_FUNC_IMPL(__imp__sub_826AB788) {
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
	// bl 0x827f1c68
	ctx.lr = 0x826AB7A0;
	sub_827F1C68(ctx, base);
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lis r7,-31963
	ctx.r7.s64 = -2094727168;
	// lis r6,-31963
	ctx.r6.s64 = -2094727168;
	// lis r5,-31949
	ctx.r5.s64 = -2093809664;
	// lwz r10,10580(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10580);
	// lis r4,-32221
	ctx.r4.s64 = -2111635456;
	// lfs f13,24724(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24724);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r8,r4,-26512
	ctx.r8.s64 = ctx.r4.s64 + -26512;
	// lfs f12,23988(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 23988);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f0,24000(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,10576(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 10576);
	ctx.f11.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r10,10580(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10580, ctx.r10.u32);
	// stfs f12,52(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f11,56(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// beq cr6,0x826ab820
	if (ctx.cr6.eq) goto loc_826AB820;
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f12,44(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f11,48(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
loc_826AB820:
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

__attribute__((alias("__imp__sub_826AB838"))) PPC_WEAK_FUNC(sub_826AB838);
PPC_FUNC_IMPL(__imp__sub_826AB838) {
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
	// bl 0x827f1cc8
	ctx.lr = 0x826AB848;
	sub_827F1CC8(ctx, base);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,10580(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10580, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AB868"))) PPC_WEAK_FUNC(sub_826AB868);
PPC_FUNC_IMPL(__imp__sub_826AB868) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,10580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10580);
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bge cr6,0x826ab898
	if (!ctx.cr6.lt) goto loc_826AB898;
loc_826AB890:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826ab960
	goto loc_826AB960;
loc_826AB898:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827e81c8
	ctx.lr = 0x826AB8A0;
	sub_827E81C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ab8c8
	if (ctx.cr0.eq) goto loc_826AB8C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827e81c8
	ctx.lr = 0x826AB8B0;
	sub_827E81C8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AB8C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x826ab8cc
	goto loc_826AB8CC;
loc_826AB8C8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_826AB8CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827e8210
	ctx.lr = 0x826AB8D4;
	sub_827E8210(ctx, base);
	// addi r11,r3,620
	ctx.r11.s64 = ctx.r3.s64 + 620;
	// lfs f0,628(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lfs f13,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f0,24008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24008);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f13,f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x826ab890
	if (ctx.cr6.gt) goto loc_826AB890;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// addi r6,r9,-18048
	ctx.r6.s64 = ctx.r9.s64 + -18048;
	// addi r7,r10,-18036
	ctx.r7.s64 = ctx.r10.s64 + -18036;
	// lfs f1,-11424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11424);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r8,13804
	ctx.r5.s64 = ctx.r8.s64 + 13804;
	// li r9,1
	ctx.r9.s64 = 1;
	// bl 0x827f2dd0
	ctx.lr = 0x826AB94C;
	sub_827F2DD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826ab890
	if (ctx.cr0.eq) goto loc_826AB890;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,2180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2180, ctx.r11.u32);
loc_826AB960:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AB978"))) PPC_WEAK_FUNC(sub_826AB978);
PPC_FUNC_IMPL(__imp__sub_826AB978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24208(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24208);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826ab9b8
	if (!ctx.cr0.eq) goto loc_826AB9B8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,24208(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24208, ctx.r11.u32);
	// addi r3,r9,-26552
	ctx.r3.s64 = ctx.r9.s64 + -26552;
	// bl 0x82816528
	ctx.lr = 0x826AB9B0;
	sub_82816528(ctx, base);
	// stw r3,24204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24204, ctx.r3.u32);
	// b 0x826ab9bc
	goto loc_826AB9BC;
loc_826AB9B8:
	// lwz r3,24204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24204);
loc_826AB9BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AB9D0"))) PPC_WEAK_FUNC(sub_826AB9D0);
PPC_FUNC_IMPL(__imp__sub_826AB9D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826aba20
	ctx.lr = 0x826AB9F0;
	sub_826ABA20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826ABA04;
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

__attribute__((alias("__imp__sub_826ABA20"))) PPC_WEAK_FUNC(sub_826ABA20);
PPC_FUNC_IMPL(__imp__sub_826ABA20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,24212
	ctx.r31.s64 = ctx.r11.s64 + 24212;
	// lwz r11,24216(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24216);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826aba68
	if (!ctx.cr0.eq) goto loc_826ABA68;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-26388
	ctx.r9.s64 = ctx.r9.s64 + -26388;
	// stw r11,24216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24216, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28096
	ctx.r3.s64 = ctx.r11.s64 + 28096;
	// bl 0x82a4c758
	ctx.lr = 0x826ABA68;
	sub_82A4C758(ctx, base);
loc_826ABA68:
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

__attribute__((alias("__imp__sub_826ABA80"))) PPC_WEAK_FUNC(sub_826ABA80);
PPC_FUNC_IMPL(__imp__sub_826ABA80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826ABA88"))) PPC_WEAK_FUNC(sub_826ABA88);
PPC_FUNC_IMPL(__imp__sub_826ABA88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826abac0
	if (ctx.cr6.eq) goto loc_826ABAC0;
	// bl 0x826abc90
	ctx.lr = 0x826ABAB0;
	sub_826ABC90(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826abac0
	if (!ctx.cr6.eq) goto loc_826ABAC0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826abacc
	goto loc_826ABACC;
loc_826ABAC0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825da4b0
	ctx.lr = 0x826ABACC;
	sub_825DA4B0(ctx, base);
loc_826ABACC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826ABAE8"))) PPC_WEAK_FUNC(sub_826ABAE8);
PPC_FUNC_IMPL(__imp__sub_826ABAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826abc90
	ctx.lr = 0x826ABB08;
	sub_826ABC90(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826abb18
	if (!ctx.cr6.eq) goto loc_826ABB18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826abb30
	goto loc_826ABB30;
loc_826ABB18:
	// bl 0x82611218
	ctx.lr = 0x826ABB1C;
	sub_82611218(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826abb30
	if (ctx.cr6.eq) goto loc_826ABB30;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x826ABB30;
	sub_82333B08(ctx, base);
loc_826ABB30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826ABB48"))) PPC_WEAK_FUNC(sub_826ABB48);
PPC_FUNC_IMPL(__imp__sub_826ABB48) {
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
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82333900
	ctx.lr = 0x826ABB5C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826abbd0
	if (ctx.cr0.eq) goto loc_826ABBD0;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lfs f12,23968(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23968);
	ctx.f12.f64 = double(temp.f32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lfs f0,30996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lfs f11,16800(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16800);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-27804(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27804);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,-26348
	ctx.r10.s64 = ctx.r10.s64 + -26348;
	// lfs f13,904(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,912(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 912);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-32516(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32516);
	ctx.f8.f64 = double(temp.f32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f9,28(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f8,32(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// b 0x826abbd4
	goto loc_826ABBD4;
loc_826ABBD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826ABBD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826ABBE8"))) PPC_WEAK_FUNC(sub_826ABBE8);
PPC_FUNC_IMPL(__imp__sub_826ABBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24200);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826abc28
	if (!ctx.cr0.eq) goto loc_826ABC28;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,24200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24200, ctx.r11.u32);
	// addi r3,r9,-26368
	ctx.r3.s64 = ctx.r9.s64 + -26368;
	// bl 0x82816528
	ctx.lr = 0x826ABC20;
	sub_82816528(ctx, base);
	// stw r3,24196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24196, ctx.r3.u32);
	// b 0x826abc2c
	goto loc_826ABC2C;
loc_826ABC28:
	// lwz r3,24196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24196);
loc_826ABC2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826ABC40"))) PPC_WEAK_FUNC(sub_826ABC40);
PPC_FUNC_IMPL(__imp__sub_826ABC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826abc90
	ctx.lr = 0x826ABC60;
	sub_826ABC90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826ABC74;
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

__attribute__((alias("__imp__sub_826ABC90"))) PPC_WEAK_FUNC(sub_826ABC90);
PPC_FUNC_IMPL(__imp__sub_826ABC90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13700
	ctx.r31.s64 = ctx.r11.s64 + 13700;
	// lwz r11,13696(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13696);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826abcd8
	if (!ctx.cr0.eq) goto loc_826ABCD8;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-26340
	ctx.r9.s64 = ctx.r9.s64 + -26340;
	// stw r11,13696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13696, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28120
	ctx.r3.s64 = ctx.r11.s64 + 28120;
	// bl 0x82a4c758
	ctx.lr = 0x826ABCD8;
	sub_82A4C758(ctx, base);
loc_826ABCD8:
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

__attribute__((alias("__imp__sub_826ABCF0"))) PPC_WEAK_FUNC(sub_826ABCF0);
PPC_FUNC_IMPL(__imp__sub_826ABCF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-26320
	ctx.r3.s64 = ctx.r11.s64 + -26320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826ABD00"))) PPC_WEAK_FUNC(sub_826ABD00);
PPC_FUNC_IMPL(__imp__sub_826ABD00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826abd38
	if (ctx.cr6.eq) goto loc_826ABD38;
	// bl 0x826ac3a0
	ctx.lr = 0x826ABD28;
	sub_826AC3A0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826abd38
	if (!ctx.cr6.eq) goto loc_826ABD38;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826abd44
	goto loc_826ABD44;
loc_826ABD38:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826aa1d0
	ctx.lr = 0x826ABD44;
	sub_826AA1D0(ctx, base);
loc_826ABD44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826ABD60"))) PPC_WEAK_FUNC(sub_826ABD60);
PPC_FUNC_IMPL(__imp__sub_826ABD60) {
	PPC_FUNC_PROLOGUE();
	// b 0x826ac3a0
	sub_826AC3A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826ABD68"))) PPC_WEAK_FUNC(sub_826ABD68);
PPC_FUNC_IMPL(__imp__sub_826ABD68) {
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
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82833108
	ctx.lr = 0x826ABD88;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826abde0
	if (ctx.cr0.eq) goto loc_826ABDE0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826aa470
	ctx.lr = 0x826ABD9C;
	sub_826AA470(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-26296
	ctx.r11.s64 = ctx.r11.s64 + -26296;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lfs f0,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// b 0x826abde4
	goto loc_826ABDE4;
loc_826ABDE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826ABDE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826ABE00"))) PPC_WEAK_FUNC(sub_826ABE00);
PPC_FUNC_IMPL(__imp__sub_826ABE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826ac3a0
	ctx.lr = 0x826ABE20;
	sub_826AC3A0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826abe34
	if (ctx.cr6.eq) goto loc_826ABE34;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826aa238
	ctx.lr = 0x826ABE34;
	sub_826AA238(ctx, base);
loc_826ABE34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826ABE50"))) PPC_WEAK_FUNC(sub_826ABE50);
PPC_FUNC_IMPL(__imp__sub_826ABE50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826ABE58;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82a6173c
	ctx.lr = 0x826ABE60;
	__savefpr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r4,92(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x826ABE7C;
	sub_829B98F8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x826abe8c
	if (!ctx.cr0.eq) goto loc_826ABE8C;
loc_826ABE84:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826ac0f8
	goto loc_826AC0F8;
loc_826ABE8C:
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826abf04
	if (ctx.cr6.eq) goto loc_826ABF04;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826abeb8
	if (ctx.cr6.eq) goto loc_826ABEB8;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x826ABEB0;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x826ABEB4;
	sub_82409C40(ctx, base);
	// b 0x826abebc
	goto loc_826ABEBC;
loc_826ABEB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826ABEBC:
	// bl 0x82438430
	ctx.lr = 0x826ABEC0;
	sub_82438430(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262a5d0
	ctx.lr = 0x826ABED0;
	sub_8262A5D0(ctx, base);
	// bl 0x8281d960
	ctx.lr = 0x826ABED4;
	sub_8281D960(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826abe84
	if (ctx.cr0.eq) goto loc_826ABE84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827e8210
	ctx.lr = 0x826ABEE4;
	sub_827E8210(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826abef4
	if (ctx.cr0.eq) goto loc_826ABEF4;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x826abef8
	goto loc_826ABEF8;
loc_826ABEF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826ABEF8:
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x826abe84
	if (!ctx.cr6.eq) goto loc_826ABE84;
loc_826ABF04:
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ac0d8
	if (ctx.cr6.eq) goto loc_826AC0D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827e8210
	ctx.lr = 0x826ABF18;
	sub_827E8210(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826abe84
	if (ctx.cr0.eq) goto loc_826ABE84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827e81c8
	ctx.lr = 0x826ABF28;
	sub_827E81C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826abe84
	if (ctx.cr0.eq) goto loc_826ABE84;
	// lfs f13,620(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,624(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,628(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f29,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f29.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f25,16668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f25.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r11,904
	ctx.r11.s64 = ctx.r11.s64 + 904;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f12,f13,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f12,f29
	ctx.cr6.compare(ctx.f12.f64, ctx.f29.f64);
	// bne cr6,0x826abfc8
	if (!ctx.cr6.eq) goto loc_826ABFC8;
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bne cr6,0x826abfbc
	if (!ctx.cr6.eq) goto loc_826ABFBC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f27,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f27.f64 = double(temp.f32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f26,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f26.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f28,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f28.f64 = double(temp.f32);
	// b 0x826abff0
	goto loc_826ABFF0;
loc_826ABFBC:
	// fmr f27,f0
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f0.f64;
	// fmr f26,f13
	ctx.f26.f64 = ctx.f13.f64;
	// b 0x826abfec
	goto loc_826ABFEC;
loc_826ABFC8:
	// fcmpu cr6,f12,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f25.f64);
	// bge cr6,0x826abfdc
	if (!ctx.cr6.lt) goto loc_826ABFDC;
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// fmr f26,f31
	ctx.f26.f64 = ctx.f31.f64;
	// b 0x826abfec
	goto loc_826ABFEC;
loc_826ABFDC:
	// fsqrts f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f12,f29,f12
	ctx.f12.f64 = double(float(ctx.f29.f64 / ctx.f12.f64));
	// fmuls f27,f12,f0
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f26,f12,f13
	ctx.f26.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
loc_826ABFEC:
	// fmr f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f31.f64;
loc_826ABFF0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82587458
	ctx.lr = 0x826ABFF8;
	sub_82587458(ctx, base);
	// addi r11,r3,656
	ctx.r11.s64 = ctx.r3.s64 + 656;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82817bb8
	ctx.lr = 0x826AC020;
	sub_82817BB8(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f30,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f0,f30,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bne cr6,0x826ac074
	if (!ctx.cr6.eq) goto loc_826AC074;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x826ac06c
	if (!ctx.cr6.eq) goto loc_826AC06C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f31,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f30,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// b 0x826ac09c
	goto loc_826AC09C;
loc_826AC06C:
	// lfs f29,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// b 0x826ac09c
	goto loc_826AC09C;
loc_826AC074:
	// fcmpu cr6,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bge cr6,0x826ac088
	if (!ctx.cr6.lt) goto loc_826AC088;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// b 0x826ac09c
	goto loc_826AC09C;
loc_826AC088:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 / ctx.f0.f64));
	// fmuls f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmuls f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_826AC09C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f1,18296(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 18296);
	// bl 0x82a4e118
	ctx.lr = 0x826AC0A8;
	sub_82A4E118(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// frsp f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = double(float(ctx.f1.f64));
	// lfd f1,18288(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 18288);
	// bl 0x82a4e118
	ctx.lr = 0x826AC0B8;
	sub_82A4E118(ctx, base);
	// fmuls f0,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f28.f64));
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmadds f0,f29,f26,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f26.f64 + ctx.f0.f64));
	// fmadds f0,f30,f27,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f27.f64 + ctx.f0.f64));
	// fcmpu cr6,f25,f0
	ctx.cr6.compare(ctx.f25.f64, ctx.f0.f64);
	// bgt cr6,0x826abe84
	if (ctx.cr6.gt) goto loc_826ABE84;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x826abe84
	if (ctx.cr6.lt) goto loc_826ABE84;
loc_826AC0D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827e81c8
	ctx.lr = 0x826AC0E0;
	sub_827E81C8(ctx, base);
	// bl 0x824a0b58
	ctx.lr = 0x826AC0E4;
	sub_824A0B58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ac0f4
	if (ctx.cr0.eq) goto loc_826AC0F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2180, ctx.r11.u32);
loc_826AC0F4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_826AC0F8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82a61788
	ctx.lr = 0x826AC104;
	__restfpr_25(ctx, base);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AC108"))) PPC_WEAK_FUNC(sub_826AC108);
PPC_FUNC_IMPL(__imp__sub_826AC108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826AC110;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// oris r9,r9,49152
	ctx.r9.u64 = ctx.r9.u64 | 3221225472;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f13,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// std r9,84(r30)
	PPC_STORE_U64(ctx.r30.u32 + 84, ctx.r9.u64);
	// stw r10,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r10.u32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f0,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f0,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f0,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f0,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lwz r9,68(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lfs f0,-27300(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27300);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// lwz r4,92(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x826AC1B8;
	sub_829B98F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ac1ec
	if (ctx.cr0.eq) goto loc_826AC1EC;
	// bl 0x82587458
	ctx.lr = 0x826AC1C4;
	sub_82587458(ctx, base);
	// lfs f0,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bl 0x827e81c8
	ctx.lr = 0x826AC1E4;
	sub_827E81C8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
loc_826AC1EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AC1F8"))) PPC_WEAK_FUNC(sub_826AC1F8);
PPC_FUNC_IMPL(__imp__sub_826AC1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826AC200;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x827f1d68
	ctx.lr = 0x826AC20C;
	sub_827F1D68(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82833108
	ctx.lr = 0x826AC214;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// beq 0x826ac25c
	if (ctx.cr0.eq) goto loc_826AC25C;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AC238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333a80
	ctx.lr = 0x826AC248;
	sub_82333A80(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,1280
	ctx.r11.s64 = ctx.r11.s64 + 1280;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x826ac260
	goto loc_826AC260;
loc_826AC25C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_826AC260:
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x826AC26C;
	sub_82833A30(ctx, base);
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ac2d0
	if (ctx.cr6.eq) goto loc_826AC2D0;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r4,104(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x826AC288;
	sub_829B9720(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826ac2d0
	if (ctx.cr0.eq) goto loc_826AC2D0;
	// bl 0x824844a0
	ctx.lr = 0x826AC294;
	sub_824844A0(ctx, base);
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
	ctx.lr = 0x826AC2AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x826ac2bc
	if (!ctx.cr0.eq) goto loc_826AC2BC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AC2BC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1052);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AC2D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826AC2D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827e81c8
	ctx.lr = 0x826AC2D8;
	sub_827E81C8(ctx, base);
	// bl 0x824a0b58
	ctx.lr = 0x826AC2DC;
	sub_824A0B58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ac2ec
	if (ctx.cr0.eq) goto loc_826AC2EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2180, ctx.r11.u32);
loc_826AC2EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AC2F8"))) PPC_WEAK_FUNC(sub_826AC2F8);
PPC_FUNC_IMPL(__imp__sub_826AC2F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24184(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24184);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826ac338
	if (!ctx.cr0.eq) goto loc_826AC338;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,24184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24184, ctx.r11.u32);
	// addi r3,r9,-26320
	ctx.r3.s64 = ctx.r9.s64 + -26320;
	// bl 0x82816528
	ctx.lr = 0x826AC330;
	sub_82816528(ctx, base);
	// stw r3,24180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24180, ctx.r3.u32);
	// b 0x826ac33c
	goto loc_826AC33C;
loc_826AC338:
	// lwz r3,24180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24180);
loc_826AC33C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AC350"))) PPC_WEAK_FUNC(sub_826AC350);
PPC_FUNC_IMPL(__imp__sub_826AC350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826ac3a0
	ctx.lr = 0x826AC370;
	sub_826AC3A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AC384;
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

__attribute__((alias("__imp__sub_826AC3A0"))) PPC_WEAK_FUNC(sub_826AC3A0);
PPC_FUNC_IMPL(__imp__sub_826AC3A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,24188
	ctx.r31.s64 = ctx.r11.s64 + 24188;
	// lwz r11,24192(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826ac3e8
	if (!ctx.cr0.eq) goto loc_826AC3E8;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-26172
	ctx.r9.s64 = ctx.r9.s64 + -26172;
	// stw r11,24192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24192, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28144
	ctx.r3.s64 = ctx.r11.s64 + 28144;
	// bl 0x82a4c758
	ctx.lr = 0x826AC3E8;
	sub_82A4C758(ctx, base);
loc_826AC3E8:
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

__attribute__((alias("__imp__sub_826AC400"))) PPC_WEAK_FUNC(sub_826AC400);
PPC_FUNC_IMPL(__imp__sub_826AC400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-26152
	ctx.r3.s64 = ctx.r11.s64 + -26152;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AC410"))) PPC_WEAK_FUNC(sub_826AC410);
PPC_FUNC_IMPL(__imp__sub_826AC410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826ac448
	if (ctx.cr6.eq) goto loc_826AC448;
	// bl 0x826acc00
	ctx.lr = 0x826AC438;
	sub_826ACC00(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826ac448
	if (!ctx.cr6.eq) goto loc_826AC448;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826ac454
	goto loc_826AC454;
loc_826AC448:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826aa1d0
	ctx.lr = 0x826AC454;
	sub_826AA1D0(ctx, base);
loc_826AC454:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AC470"))) PPC_WEAK_FUNC(sub_826AC470);
PPC_FUNC_IMPL(__imp__sub_826AC470) {
	PPC_FUNC_PROLOGUE();
	// b 0x826acc00
	sub_826ACC00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AC478"))) PPC_WEAK_FUNC(sub_826AC478);
PPC_FUNC_IMPL(__imp__sub_826AC478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x82833108
	ctx.lr = 0x826AC498;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826ac4c0
	if (ctx.cr0.eq) goto loc_826AC4C0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826aa470
	ctx.lr = 0x826AC4AC;
	sub_826AA470(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-26128
	ctx.r11.s64 = ctx.r11.s64 + -26128;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x826ac4c4
	goto loc_826AC4C4;
loc_826AC4C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AC4C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AC4E0"))) PPC_WEAK_FUNC(sub_826AC4E0);
PPC_FUNC_IMPL(__imp__sub_826AC4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826acc00
	ctx.lr = 0x826AC500;
	sub_826ACC00(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826ac514
	if (ctx.cr6.eq) goto loc_826AC514;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826aa238
	ctx.lr = 0x826AC514;
	sub_826AA238(ctx, base);
loc_826AC514:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AC530"))) PPC_WEAK_FUNC(sub_826AC530);
PPC_FUNC_IMPL(__imp__sub_826AC530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826AC538;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61710
	ctx.lr = 0x826AC540;
	__savefpr_14(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f0,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f0,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f0,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f0,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lwz r8,68(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lfs f0,24000(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r28,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r28.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x826AC5C8;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ac5dc
	if (ctx.cr0.eq) goto loc_826AC5DC;
	// bl 0x824a0a48
	ctx.lr = 0x826AC5D4;
	sub_824A0A48(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x826ac5e0
	goto loc_826AC5E0;
loc_826AC5DC:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_826AC5E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827e81c8
	ctx.lr = 0x826AC5E8;
	sub_827E81C8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f0,620(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,620(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,620
	ctx.r11.s64 = ctx.r3.s64 + 620;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f31,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// lfs f24,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f24.f64 = double(temp.f32);
	// bne cr6,0x826ac654
	if (!ctx.cr6.eq) goto loc_826AC654;
	// lfs f0,624(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x826ac654
	if (!ctx.cr6.eq) goto loc_826AC654;
	// lfs f0,628(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x826ac654
	if (!ctx.cr6.eq) goto loc_826AC654;
	// stfs f24,140(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stfs f24,136(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// b 0x826ac69c
	goto loc_826AC69C;
loc_826AC654:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,620(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lfs f0,624(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f0,628(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
loc_826AC69C:
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lwz r10,13024(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lfs f30,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f28.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,30996(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,96(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// fmuls f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f29,f0
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// fadds f27,f13,f12
	ctx.f27.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f27,168(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fadds f26,f11,f10
	ctx.f26.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f26,172(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fadds f25,f9,f0
	ctx.f25.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f25,176(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AC6F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826ac70c
	if (ctx.cr6.eq) goto loc_826AC70C;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x826ac710
	goto loc_826AC710;
loc_826AC70C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_826AC710:
	// lfs f0,1412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// fsubs f0,f26,f0
	ctx.f0.f64 = double(float(ctx.f26.f64 - ctx.f0.f64));
	// lfs f12,1416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1416);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,1408(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f25,f12
	ctx.f11.f64 = double(float(ctx.f25.f64 - ctx.f12.f64));
	// fsubs f13,f27,f13
	ctx.f13.f64 = double(float(ctx.f27.f64 - ctx.f13.f64));
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f1,16668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f0,f12,f12
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x826ac794
	if (!ctx.cr6.eq) goto loc_826AC794;
	// fcmpu cr6,f11,f24
	ctx.cr6.compare(ctx.f11.f64, ctx.f24.f64);
	// bne cr6,0x826ac7b8
	if (!ctx.cr6.eq) goto loc_826AC7B8;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// b 0x826ac7bc
	goto loc_826AC7BC;
loc_826AC794:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x826ac7a8
	if (!ctx.cr6.lt) goto loc_826AC7A8;
	// fmr f13,f24
	ctx.f13.f64 = ctx.f24.f64;
	// fmr f12,f24
	ctx.f12.f64 = ctx.f24.f64;
	// b 0x826ac7b8
	goto loc_826AC7B8;
loc_826AC7A8:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f11,f31,f0
	ctx.f11.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
loc_826AC7B8:
	// fmr f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f24.f64;
loc_826AC7BC:
	// fmuls f11,f12,f29
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// lis r30,-32242
	ctx.r30.s64 = -2113011712;
	// fmuls f10,f29,f29
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f29.f64));
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lfs f31,-32516(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -32516);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f9,f13,f31
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f7,f0,f31
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f8,f12,f31
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmadds f11,f13,f30,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f11.f64));
	// fmadds f10,f30,f30,f10
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f10.f64));
	// fadds f19,f9,f27
	ctx.f19.f64 = double(float(ctx.f9.f64 + ctx.f27.f64));
	// fadds f17,f7,f25
	ctx.f17.f64 = double(float(ctx.f7.f64 + ctx.f25.f64));
	// fadds f18,f8,f26
	ctx.f18.f64 = double(float(ctx.f8.f64 + ctx.f26.f64));
	// fmadds f11,f0,f28,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f11.f64));
	// fmadds f10,f28,f28,f10
	ctx.f10.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 + ctx.f10.f64));
	// fdivs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fmuls f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fmuls f9,f29,f11
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f11.f64));
	// fmuls f11,f28,f11
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f11.f64));
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x82332e18
	ctx.lr = 0x826AC824;
	sub_82332E18(ctx, base);
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// fadds f16,f0,f27
	ctx.f16.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// fadds f15,f13,f26
	ctx.f15.f64 = double(float(ctx.f13.f64 + ctx.f26.f64));
	// fadds f14,f12,f25
	ctx.f14.f64 = double(float(ctx.f12.f64 + ctx.f25.f64));
	// fsubs f0,f27,f16
	ctx.f0.f64 = double(float(ctx.f27.f64 - ctx.f16.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fsubs f0,f26,f15
	ctx.f0.f64 = double(float(ctx.f26.f64 - ctx.f15.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fsubs f0,f25,f14
	ctx.f0.f64 = double(float(ctx.f25.f64 - ctx.f14.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x826AC86C;
	sub_82817280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x824f97d8
	ctx.lr = 0x826AC878;
	sub_824F97D8(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r10,r11,-20840
	ctx.r10.s64 = ctx.r11.s64 + -20840;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lfs f12,-20840(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20840);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f28,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f11,f28,f0
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// lfs f26,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f10,f27,f0
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// fmuls f0,f26,f0
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// lfs f25,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f23.f64 = double(temp.f32);
	// lfs f22,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f21.f64 = double(temp.f32);
	// lfs f20,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f20.f64 = double(temp.f32);
	// lfs f31,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f11,f25,f13,f11
	ctx.f11.f64 = double(float(ctx.f25.f64 * ctx.f13.f64 + ctx.f11.f64));
	// lfs f29,264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f10,f24,f13,f10
	ctx.f10.f64 = double(float(ctx.f24.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f0,f23,f13,f0
	ctx.f0.f64 = double(float(ctx.f23.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f13,f22,f12,f11
	ctx.f13.f64 = double(float(ctx.f22.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f11,f21,f12,f10
	ctx.f11.f64 = double(float(ctx.f21.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f0,f20,f12,f0
	ctx.f0.f64 = double(float(ctx.f20.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// fadds f12,f11,f30
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f30.f64));
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// fadds f16,f13,f16
	ctx.f16.f64 = double(float(ctx.f13.f64 + ctx.f16.f64));
	// fadds f15,f12,f15
	ctx.f15.f64 = double(float(ctx.f12.f64 + ctx.f15.f64));
	// fadds f14,f0,f14
	ctx.f14.f64 = double(float(ctx.f0.f64 + ctx.f14.f64));
	// bl 0x82817280
	ctx.lr = 0x826AC904;
	sub_82817280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x824f97d8
	ctx.lr = 0x826AC910;
	sub_824F97D8(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// fsubs f1,f15,f18
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f15.f64 - ctx.f18.f64));
	// lfs f10,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r11,-20828
	ctx.r10.s64 = ctx.r11.s64 + -20828;
	// fsubs f18,f14,f17
	ctx.f18.f64 = double(float(ctx.f14.f64 - ctx.f17.f64));
	// lfs f9,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f2,f16,f19
	ctx.f2.f64 = double(float(ctx.f16.f64 - ctx.f19.f64));
	// lfs f8,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// li r3,1808
	ctx.r3.s64 = 1808;
	// lfs f12,-20828(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20828);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f26,f26,f0
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f28,f28,f0
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// lfs f11,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f27,f0
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// lfs f6,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f27,f2,f11
	ctx.f27.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// lfs f3,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f26,f23,f13,f26
	ctx.f26.f64 = double(float(ctx.f23.f64 * ctx.f13.f64 + ctx.f26.f64));
	// fmadds f28,f25,f13,f28
	ctx.f28.f64 = double(float(ctx.f25.f64 * ctx.f13.f64 + ctx.f28.f64));
	// fmadds f25,f24,f13,f0
	ctx.f25.f64 = double(float(ctx.f24.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f13,264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f24,f18,f13
	ctx.f24.f64 = double(float(ctx.f18.f64 - ctx.f13.f64));
	// lfs f2,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f26,f20,f12,f26
	ctx.f26.f64 = double(float(ctx.f20.f64 * ctx.f12.f64 + ctx.f26.f64));
	// fmadds f28,f22,f12,f28
	ctx.f28.f64 = double(float(ctx.f22.f64 * ctx.f12.f64 + ctx.f28.f64));
	// fmadds f12,f21,f12,f25
	ctx.f12.f64 = double(float(ctx.f21.f64 * ctx.f12.f64 + ctx.f25.f64));
	// fmuls f25,f10,f1
	ctx.f25.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f23,f9,f1
	ctx.f23.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f1,f8,f1
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fadds f29,f26,f29
	ctx.f29.f64 = double(float(ctx.f26.f64 + ctx.f29.f64));
	// fadds f31,f28,f31
	ctx.f31.f64 = double(float(ctx.f28.f64 + ctx.f31.f64));
	// fadds f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// fmadds f30,f7,f24,f25
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f24.f64 + ctx.f25.f64));
	// fmadds f28,f6,f24,f23
	ctx.f28.f64 = double(float(ctx.f6.f64 * ctx.f24.f64 + ctx.f23.f64));
	// fmadds f1,f5,f24,f1
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f24.f64 + ctx.f1.f64));
	// fsubs f13,f29,f13
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f13.f64));
	// fsubs f11,f31,f11
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmadds f12,f4,f27,f30
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f27.f64 + ctx.f30.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmadds f12,f3,f27,f28
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f27.f64 + ctx.f28.f64));
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmadds f12,f2,f27,f1
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f27.f64 + ctx.f1.f64));
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f12,f7,f13
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f7,f6,f13
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmadds f12,f11,f4,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f4.f64 + ctx.f12.f64));
	// fmadds f7,f3,f11,f7
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fmadds f13,f2,f11,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fmadds f12,f10,f0,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmadds f12,f9,f0,f7
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f7.f64));
	// stfs f12,156(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmadds f0,f8,f0,f13
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bl 0x82833108
	ctx.lr = 0x826ACA10;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826aca50
	if (ctx.cr0.eq) goto loc_826ACA50;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f5,-32516(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -32516);
	ctx.f5.f64 = double(temp.f32);
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// lfs f2,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f2.f64 = double(temp.f32);
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f4,23968(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23968);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x826b1720
	ctx.lr = 0x826ACA4C;
	sub_826B1720(ctx, base);
	// b 0x826aca54
	goto loc_826ACA54;
loc_826ACA50:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_826ACA54:
	// lfs f0,-32516(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -32516);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// stfs f0,1784(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1784, temp.u32);
	// stw r28,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r28.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a6175c
	ctx.lr = 0x826ACA74;
	__restfpr_14(ctx, base);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826ACA78"))) PPC_WEAK_FUNC(sub_826ACA78);
PPC_FUNC_IMPL(__imp__sub_826ACA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826ACA80;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x826ACA9C;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826acaac
	if (ctx.cr0.eq) goto loc_826ACAAC;
	// bl 0x824a0a48
	ctx.lr = 0x826ACAA8;
	sub_824A0A48(ctx, base);
	// b 0x826acab0
	goto loc_826ACAB0;
loc_826ACAAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826ACAB0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826acac4
	if (!ctx.cr6.eq) goto loc_826ACAC4;
loc_826ACAB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826ACABC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
loc_826ACAC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e81c8
	ctx.lr = 0x826ACACC;
	sub_827E81C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826acab8
	if (ctx.cr0.eq) goto loc_826ACAB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e81c8
	ctx.lr = 0x826ACADC;
	sub_827E81C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,1172
	ctx.r4.s64 = ctx.r11.s64 + 1172;
	// bl 0x823399c8
	ctx.lr = 0x826ACAEC;
	sub_823399C8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x826acb38
	if (!ctx.cr6.gt) goto loc_826ACB38;
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_826ACB00:
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82483e58
	ctx.lr = 0x826ACB08;
	sub_82483E58(ctx, base);
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
	ctx.lr = 0x826ACB20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826acb40
	if (!ctx.cr0.eq) goto loc_826ACB40;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x826acb00
	if (ctx.cr6.lt) goto loc_826ACB00;
loc_826ACB38:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x826acb44
	goto loc_826ACB44;
loc_826ACB40:
	// li r31,0
	ctx.r31.s64 = 0;
loc_826ACB44:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8284aff8
	ctx.lr = 0x826ACB4C;
	sub_8284AFF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x826acabc
	goto loc_826ACABC;
}

__attribute__((alias("__imp__sub_826ACB58"))) PPC_WEAK_FUNC(sub_826ACB58);
PPC_FUNC_IMPL(__imp__sub_826ACB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24168);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826acb98
	if (!ctx.cr0.eq) goto loc_826ACB98;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,24168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24168, ctx.r11.u32);
	// addi r3,r9,-26152
	ctx.r3.s64 = ctx.r9.s64 + -26152;
	// bl 0x82816528
	ctx.lr = 0x826ACB90;
	sub_82816528(ctx, base);
	// stw r3,24164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24164, ctx.r3.u32);
	// b 0x826acb9c
	goto loc_826ACB9C;
loc_826ACB98:
	// lwz r3,24164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24164);
loc_826ACB9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826ACBB0"))) PPC_WEAK_FUNC(sub_826ACBB0);
PPC_FUNC_IMPL(__imp__sub_826ACBB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826acc00
	ctx.lr = 0x826ACBD0;
	sub_826ACC00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826ACBE4;
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

__attribute__((alias("__imp__sub_826ACC00"))) PPC_WEAK_FUNC(sub_826ACC00);
PPC_FUNC_IMPL(__imp__sub_826ACC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,24172
	ctx.r31.s64 = ctx.r11.s64 + 24172;
	// lwz r11,24176(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24176);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826acc48
	if (!ctx.cr0.eq) goto loc_826ACC48;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-26004
	ctx.r9.s64 = ctx.r9.s64 + -26004;
	// stw r11,24176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24176, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28168
	ctx.r3.s64 = ctx.r11.s64 + 28168;
	// bl 0x82a4c758
	ctx.lr = 0x826ACC48;
	sub_82A4C758(ctx, base);
loc_826ACC48:
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

__attribute__((alias("__imp__sub_826ACC60"))) PPC_WEAK_FUNC(sub_826ACC60);
PPC_FUNC_IMPL(__imp__sub_826ACC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-25984
	ctx.r3.s64 = ctx.r11.s64 + -25984;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826ACC70"))) PPC_WEAK_FUNC(sub_826ACC70);
PPC_FUNC_IMPL(__imp__sub_826ACC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826acca8
	if (ctx.cr6.eq) goto loc_826ACCA8;
	// bl 0x826ad188
	ctx.lr = 0x826ACC98;
	sub_826AD188(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826acca8
	if (!ctx.cr6.eq) goto loc_826ACCA8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826accb4
	goto loc_826ACCB4;
loc_826ACCA8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826aba88
	ctx.lr = 0x826ACCB4;
	sub_826ABA88(ctx, base);
loc_826ACCB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826ACCD0"))) PPC_WEAK_FUNC(sub_826ACCD0);
PPC_FUNC_IMPL(__imp__sub_826ACCD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x826ad188
	sub_826AD188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826ACCD8"))) PPC_WEAK_FUNC(sub_826ACCD8);
PPC_FUNC_IMPL(__imp__sub_826ACCD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82833108
	ctx.lr = 0x826ACCF8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826acd28
	if (ctx.cr0.eq) goto loc_826ACD28;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825da6c0
	ctx.lr = 0x826ACD0C;
	sub_825DA6C0(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-25824
	ctx.r11.s64 = ctx.r11.s64 + -25824;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x826acd2c
	goto loc_826ACD2C;
loc_826ACD28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826ACD2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826ACD48"))) PPC_WEAK_FUNC(sub_826ACD48);
PPC_FUNC_IMPL(__imp__sub_826ACD48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826ad188
	ctx.lr = 0x826ACD68;
	sub_826AD188(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826acd7c
	if (ctx.cr6.eq) goto loc_826ACD7C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826abae8
	ctx.lr = 0x826ACD7C;
	sub_826ABAE8(ctx, base);
loc_826ACD7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826ACD98"))) PPC_WEAK_FUNC(sub_826ACD98);
PPC_FUNC_IMPL(__imp__sub_826ACD98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826ACDA0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// li r26,0
	ctx.r26.s64 = 0;
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r11,-27300
	ctx.r27.s64 = ctx.r11.s64 + -27300;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lfs f0,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f0,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f0,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f0,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lwz r9,68(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lfs f31,24000(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24000);
	ctx.f31.f64 = double(temp.f32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// lfs f0,-27300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f0.f64 = double(temp.f32);
	// stw r26,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r26.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
	// stfs f31,92(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f31,96(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x826aceec
	if (ctx.cr6.lt) goto loc_826ACEEC;
	// beq cr6,0x826aceb4
	if (ctx.cr6.eq) goto loc_826ACEB4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x826ace7c
	if (ctx.cr6.lt) goto loc_826ACE7C;
	// bne cr6,0x826acf28
	if (!ctx.cr6.eq) goto loc_826ACF28;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-25948
	ctx.r3.s64 = ctx.r11.s64 + -25948;
	// bl 0x82816528
	ctx.lr = 0x826ACE50;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824cacf0
	ctx.lr = 0x826ACE60;
	sub_824CACF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6604
	ctx.r3.s64 = ctx.r11.s64 + -6604;
	// bl 0x82816528
	ctx.lr = 0x826ACE6C;
	sub_82816528(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-25844
	ctx.r3.s64 = ctx.r11.s64 + -25844;
	// b 0x826acf20
	goto loc_826ACF20;
loc_826ACE7C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-25948
	ctx.r3.s64 = ctx.r11.s64 + -25948;
	// bl 0x82816528
	ctx.lr = 0x826ACE88;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824cacf0
	ctx.lr = 0x826ACE98;
	sub_824CACF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6624
	ctx.r3.s64 = ctx.r11.s64 + -6624;
	// bl 0x82816528
	ctx.lr = 0x826ACEA4;
	sub_82816528(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-25856
	ctx.r3.s64 = ctx.r11.s64 + -25856;
	// b 0x826acf20
	goto loc_826ACF20;
loc_826ACEB4:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-25948
	ctx.r3.s64 = ctx.r11.s64 + -25948;
	// bl 0x82816528
	ctx.lr = 0x826ACEC0;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824cacf0
	ctx.lr = 0x826ACED0;
	sub_824CACF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6644
	ctx.r3.s64 = ctx.r11.s64 + -6644;
	// bl 0x82816528
	ctx.lr = 0x826ACEDC;
	sub_82816528(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-25868
	ctx.r3.s64 = ctx.r11.s64 + -25868;
	// b 0x826acf20
	goto loc_826ACF20;
loc_826ACEEC:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-25948
	ctx.r3.s64 = ctx.r11.s64 + -25948;
	// bl 0x82816528
	ctx.lr = 0x826ACEF8;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824cacf0
	ctx.lr = 0x826ACF08;
	sub_824CACF0(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-25900
	ctx.r3.s64 = ctx.r11.s64 + -25900;
	// bl 0x82816528
	ctx.lr = 0x826ACF14;
	sub_82816528(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-25880
	ctx.r3.s64 = ctx.r11.s64 + -25880;
loc_826ACF20:
	// bl 0x82816528
	ctx.lr = 0x826ACF24;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_826ACF28:
	// lfs f0,15844(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 15844);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// bl 0x827e8210
	ctx.lr = 0x826ACF38;
	sub_827E8210(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826acf48
	if (ctx.cr0.eq) goto loc_826ACF48;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x826acf4c
	goto loc_826ACF4C;
loc_826ACF48:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_826ACF4C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lfs f0,-17820(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -17820);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// lfs f13,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// stfs f31,52(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// stfs f31,60(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// stfs f13,56(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// stfs f31,64(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826acfb4
	if (ctx.cr6.eq) goto loc_826ACFB4;
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stfs f31,44(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stfs f13,48(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stfs f31,56(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
loc_826ACFB4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826ACFC0"))) PPC_WEAK_FUNC(sub_826ACFC0);
PPC_FUNC_IMPL(__imp__sub_826ACFC0) {
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
	// bl 0x827f3268
	ctx.lr = 0x826ACFD8;
	sub_827F3268(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826ACFF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r4,512
	ctx.r4.s64 = 512;
	// lfs f2,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-10424(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -10424);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829badb0
	ctx.lr = 0x826AD014;
	sub_829BADB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e8210
	ctx.lr = 0x826AD01C;
	sub_827E8210(ctx, base);
	// bl 0x824f65f8
	ctx.lr = 0x826AD020;
	sub_824F65F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ad030
	if (ctx.cr0.eq) goto loc_826AD030;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8255afe0
	ctx.lr = 0x826AD030;
	sub_8255AFE0(ctx, base);
loc_826AD030:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82438430
	ctx.lr = 0x826AD038;
	sub_82438430(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ad044
	if (ctx.cr0.eq) goto loc_826AD044;
	// bl 0x82628f68
	ctx.lr = 0x826AD044;
	sub_82628F68(ctx, base);
loc_826AD044:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AD058"))) PPC_WEAK_FUNC(sub_826AD058);
PPC_FUNC_IMPL(__imp__sub_826AD058) {
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
	// bl 0x827f32e8
	ctx.lr = 0x826AD070;
	sub_827F32E8(ctx, base);
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
	ctx.lr = 0x826AD088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r4,512
	ctx.r4.s64 = 512;
	// lfs f2,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829badb0
	ctx.lr = 0x826AD0AC;
	sub_829BADB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e8210
	ctx.lr = 0x826AD0B4;
	sub_827E8210(ctx, base);
	// bl 0x824f65f8
	ctx.lr = 0x826AD0B8;
	sub_824F65F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ad0c8
	if (ctx.cr0.eq) goto loc_826AD0C8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8255afe0
	ctx.lr = 0x826AD0C8;
	sub_8255AFE0(ctx, base);
loc_826AD0C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AD0E0"))) PPC_WEAK_FUNC(sub_826AD0E0);
PPC_FUNC_IMPL(__imp__sub_826AD0E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24152(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24152);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826ad120
	if (!ctx.cr0.eq) goto loc_826AD120;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,24152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24152, ctx.r11.u32);
	// addi r3,r9,-25984
	ctx.r3.s64 = ctx.r9.s64 + -25984;
	// bl 0x82816528
	ctx.lr = 0x826AD118;
	sub_82816528(ctx, base);
	// stw r3,24148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24148, ctx.r3.u32);
	// b 0x826ad124
	goto loc_826AD124;
loc_826AD120:
	// lwz r3,24148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24148);
loc_826AD124:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AD138"))) PPC_WEAK_FUNC(sub_826AD138);
PPC_FUNC_IMPL(__imp__sub_826AD138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826ad188
	ctx.lr = 0x826AD158;
	sub_826AD188(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AD16C;
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

__attribute__((alias("__imp__sub_826AD188"))) PPC_WEAK_FUNC(sub_826AD188);
PPC_FUNC_IMPL(__imp__sub_826AD188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,24156
	ctx.r31.s64 = ctx.r11.s64 + 24156;
	// lwz r11,24160(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24160);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826ad1d0
	if (!ctx.cr0.eq) goto loc_826AD1D0;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-25700
	ctx.r9.s64 = ctx.r9.s64 + -25700;
	// stw r11,24160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24160, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28192
	ctx.r3.s64 = ctx.r11.s64 + 28192;
	// bl 0x82a4c758
	ctx.lr = 0x826AD1D0;
	sub_82A4C758(ctx, base);
loc_826AD1D0:
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

__attribute__((alias("__imp__sub_826AD1E8"))) PPC_WEAK_FUNC(sub_826AD1E8);
PPC_FUNC_IMPL(__imp__sub_826AD1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-25680
	ctx.r3.s64 = ctx.r11.s64 + -25680;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AD1F8"))) PPC_WEAK_FUNC(sub_826AD1F8);
PPC_FUNC_IMPL(__imp__sub_826AD1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826ad230
	if (ctx.cr6.eq) goto loc_826AD230;
	// bl 0x826ad6f8
	ctx.lr = 0x826AD220;
	sub_826AD6F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826ad230
	if (!ctx.cr6.eq) goto loc_826AD230;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826ad23c
	goto loc_826AD23C;
loc_826AD230:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826aba88
	ctx.lr = 0x826AD23C;
	sub_826ABA88(ctx, base);
loc_826AD23C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AD258"))) PPC_WEAK_FUNC(sub_826AD258);
PPC_FUNC_IMPL(__imp__sub_826AD258) {
	PPC_FUNC_PROLOGUE();
	// b 0x826ad6f8
	sub_826AD6F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AD260"))) PPC_WEAK_FUNC(sub_826AD260);
PPC_FUNC_IMPL(__imp__sub_826AD260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82833108
	ctx.lr = 0x826AD280;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826ad2b0
	if (ctx.cr0.eq) goto loc_826AD2B0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825da6c0
	ctx.lr = 0x826AD294;
	sub_825DA6C0(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-25640
	ctx.r11.s64 = ctx.r11.s64 + -25640;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x826ad2b4
	goto loc_826AD2B4;
loc_826AD2B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AD2B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AD2D0"))) PPC_WEAK_FUNC(sub_826AD2D0);
PPC_FUNC_IMPL(__imp__sub_826AD2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826ad6f8
	ctx.lr = 0x826AD2F0;
	sub_826AD6F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826ad304
	if (ctx.cr6.eq) goto loc_826AD304;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826abae8
	ctx.lr = 0x826AD304;
	sub_826ABAE8(ctx, base);
loc_826AD304:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AD320"))) PPC_WEAK_FUNC(sub_826AD320);
PPC_FUNC_IMPL(__imp__sub_826AD320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826AD328;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// addi r28,r11,-27300
	ctx.r28.s64 = ctx.r11.s64 + -27300;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f0,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f0,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f0,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f0,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lwz r9,68(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lfs f31,24000(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24000);
	ctx.f31.f64 = double(temp.f32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// lfs f0,-27300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f0.f64 = double(temp.f32);
	// stw r27,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// stfs f31,92(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f31,96(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x826ad474
	if (ctx.cr6.lt) goto loc_826AD474;
	// beq cr6,0x826ad43c
	if (ctx.cr6.eq) goto loc_826AD43C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x826ad404
	if (ctx.cr6.lt) goto loc_826AD404;
	// bne cr6,0x826ad4ac
	if (!ctx.cr6.eq) goto loc_826AD4AC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-25948
	ctx.r3.s64 = ctx.r11.s64 + -25948;
	// bl 0x82816528
	ctx.lr = 0x826AD3D8;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824cacf0
	ctx.lr = 0x826AD3E8;
	sub_824CACF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6716
	ctx.r3.s64 = ctx.r11.s64 + -6716;
	// bl 0x82816528
	ctx.lr = 0x826AD3F4;
	sub_82816528(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-25844
	ctx.r3.s64 = ctx.r11.s64 + -25844;
	// b 0x826ad4a8
	goto loc_826AD4A8;
loc_826AD404:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-25948
	ctx.r3.s64 = ctx.r11.s64 + -25948;
	// bl 0x82816528
	ctx.lr = 0x826AD410;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824cacf0
	ctx.lr = 0x826AD420;
	sub_824CACF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6704
	ctx.r3.s64 = ctx.r11.s64 + -6704;
	// bl 0x82816528
	ctx.lr = 0x826AD42C;
	sub_82816528(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-25856
	ctx.r3.s64 = ctx.r11.s64 + -25856;
	// b 0x826ad4a8
	goto loc_826AD4A8;
loc_826AD43C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-25948
	ctx.r3.s64 = ctx.r11.s64 + -25948;
	// bl 0x82816528
	ctx.lr = 0x826AD448;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824cacf0
	ctx.lr = 0x826AD458;
	sub_824CACF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6680
	ctx.r3.s64 = ctx.r11.s64 + -6680;
	// bl 0x82816528
	ctx.lr = 0x826AD464;
	sub_82816528(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-25868
	ctx.r3.s64 = ctx.r11.s64 + -25868;
	// b 0x826ad4a8
	goto loc_826AD4A8;
loc_826AD474:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-25948
	ctx.r3.s64 = ctx.r11.s64 + -25948;
	// bl 0x82816528
	ctx.lr = 0x826AD480;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824cacf0
	ctx.lr = 0x826AD490;
	sub_824CACF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6692
	ctx.r3.s64 = ctx.r11.s64 + -6692;
	// bl 0x82816528
	ctx.lr = 0x826AD49C;
	sub_82816528(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-25880
	ctx.r3.s64 = ctx.r11.s64 + -25880;
loc_826AD4A8:
	// bl 0x82816528
	ctx.lr = 0x826AD4AC;
	sub_82816528(ctx, base);
loc_826AD4AC:
	// lfs f0,15844(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 15844);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// lfs f0,-17820(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -17820);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// lfs f13,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stfs f31,52(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// stfs f13,56(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f31,60(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// stfs f31,64(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// beq cr6,0x826ad520
	if (ctx.cr6.eq) goto loc_826AD520;
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stfs f31,44(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stfs f13,48(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stfs f31,56(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
loc_826AD520:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AD530"))) PPC_WEAK_FUNC(sub_826AD530);
PPC_FUNC_IMPL(__imp__sub_826AD530) {
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
	// bl 0x827f3268
	ctx.lr = 0x826AD548;
	sub_827F3268(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AD560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r4,512
	ctx.r4.s64 = 512;
	// lfs f2,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-10424(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -10424);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829badb0
	ctx.lr = 0x826AD584;
	sub_829BADB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e8210
	ctx.lr = 0x826AD58C;
	sub_827E8210(ctx, base);
	// bl 0x82551d80
	ctx.lr = 0x826AD590;
	sub_82551D80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ad5a0
	if (ctx.cr0.eq) goto loc_826AD5A0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8255afe0
	ctx.lr = 0x826AD5A0;
	sub_8255AFE0(ctx, base);
loc_826AD5A0:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82438430
	ctx.lr = 0x826AD5A8;
	sub_82438430(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ad5b4
	if (ctx.cr0.eq) goto loc_826AD5B4;
	// bl 0x82628f68
	ctx.lr = 0x826AD5B4;
	sub_82628F68(ctx, base);
loc_826AD5B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AD5C8"))) PPC_WEAK_FUNC(sub_826AD5C8);
PPC_FUNC_IMPL(__imp__sub_826AD5C8) {
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
	// bl 0x827f32e8
	ctx.lr = 0x826AD5E0;
	sub_827F32E8(ctx, base);
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
	ctx.lr = 0x826AD5F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r4,512
	ctx.r4.s64 = 512;
	// lfs f2,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829badb0
	ctx.lr = 0x826AD61C;
	sub_829BADB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e8210
	ctx.lr = 0x826AD624;
	sub_827E8210(ctx, base);
	// bl 0x82551d80
	ctx.lr = 0x826AD628;
	sub_82551D80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ad638
	if (ctx.cr0.eq) goto loc_826AD638;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8255afe0
	ctx.lr = 0x826AD638;
	sub_8255AFE0(ctx, base);
loc_826AD638:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AD650"))) PPC_WEAK_FUNC(sub_826AD650);
PPC_FUNC_IMPL(__imp__sub_826AD650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24136(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24136);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826ad690
	if (!ctx.cr0.eq) goto loc_826AD690;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,24136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24136, ctx.r11.u32);
	// addi r3,r9,-25680
	ctx.r3.s64 = ctx.r9.s64 + -25680;
	// bl 0x82816528
	ctx.lr = 0x826AD688;
	sub_82816528(ctx, base);
	// stw r3,24132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24132, ctx.r3.u32);
	// b 0x826ad694
	goto loc_826AD694;
loc_826AD690:
	// lwz r3,24132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24132);
loc_826AD694:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AD6A8"))) PPC_WEAK_FUNC(sub_826AD6A8);
PPC_FUNC_IMPL(__imp__sub_826AD6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826ad6f8
	ctx.lr = 0x826AD6C8;
	sub_826AD6F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AD6DC;
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

__attribute__((alias("__imp__sub_826AD6F8"))) PPC_WEAK_FUNC(sub_826AD6F8);
PPC_FUNC_IMPL(__imp__sub_826AD6F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,24140
	ctx.r31.s64 = ctx.r11.s64 + 24140;
	// lwz r11,24144(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24144);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826ad740
	if (!ctx.cr0.eq) goto loc_826AD740;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-25516
	ctx.r9.s64 = ctx.r9.s64 + -25516;
	// stw r11,24144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24144, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28216
	ctx.r3.s64 = ctx.r11.s64 + 28216;
	// bl 0x82a4c758
	ctx.lr = 0x826AD740;
	sub_82A4C758(ctx, base);
loc_826AD740:
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

__attribute__((alias("__imp__sub_826AD758"))) PPC_WEAK_FUNC(sub_826AD758);
PPC_FUNC_IMPL(__imp__sub_826AD758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-25496
	ctx.r3.s64 = ctx.r11.s64 + -25496;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AD768"))) PPC_WEAK_FUNC(sub_826AD768);
PPC_FUNC_IMPL(__imp__sub_826AD768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826ad7a0
	if (ctx.cr6.eq) goto loc_826AD7A0;
	// bl 0x826adbe8
	ctx.lr = 0x826AD790;
	sub_826ADBE8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826ad7a0
	if (!ctx.cr6.eq) goto loc_826AD7A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826ad7ac
	goto loc_826AD7AC;
loc_826AD7A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826aba88
	ctx.lr = 0x826AD7AC;
	sub_826ABA88(ctx, base);
loc_826AD7AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AD7C8"))) PPC_WEAK_FUNC(sub_826AD7C8);
PPC_FUNC_IMPL(__imp__sub_826AD7C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x826adbe8
	sub_826ADBE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AD7D0"))) PPC_WEAK_FUNC(sub_826AD7D0);
PPC_FUNC_IMPL(__imp__sub_826AD7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82833108
	ctx.lr = 0x826AD7F0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826ad818
	if (ctx.cr0.eq) goto loc_826AD818;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825da6c0
	ctx.lr = 0x826AD804;
	sub_825DA6C0(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-25448
	ctx.r11.s64 = ctx.r11.s64 + -25448;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x826ad81c
	goto loc_826AD81C;
loc_826AD818:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AD81C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AD838"))) PPC_WEAK_FUNC(sub_826AD838);
PPC_FUNC_IMPL(__imp__sub_826AD838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826adbe8
	ctx.lr = 0x826AD858;
	sub_826ADBE8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826ad86c
	if (ctx.cr6.eq) goto loc_826AD86C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826abae8
	ctx.lr = 0x826AD86C;
	sub_826ABAE8(ctx, base);
loc_826AD86C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AD888"))) PPC_WEAK_FUNC(sub_826AD888);
PPC_FUNC_IMPL(__imp__sub_826AD888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826AD890;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r9,-25948
	ctx.r3.s64 = ctx.r9.s64 + -25948;
	// lfs f0,56(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f0,60(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lfs f0,64(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f0,48(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f0,52(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f0,72(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f0,76(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lwz r9,68(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// lfs f0,24000(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// lfs f13,-27300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stfs f13,100(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x826AD914;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824cacf0
	ctx.lr = 0x826AD924;
	sub_824CACF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-23940
	ctx.r3.s64 = ctx.r11.s64 + -23940;
	// bl 0x82816528
	ctx.lr = 0x826AD930;
	sub_82816528(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-25464
	ctx.r3.s64 = ctx.r11.s64 + -25464;
	// bl 0x82816528
	ctx.lr = 0x826AD940;
	sub_82816528(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f0,23940(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23940);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// bl 0x827e8210
	ctx.lr = 0x826AD958;
	sub_827E8210(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ad968
	if (ctx.cr0.eq) goto loc_826AD968;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x826ad96c
	goto loc_826AD96C;
loc_826AD968:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_826AD96C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AD990"))) PPC_WEAK_FUNC(sub_826AD990);
PPC_FUNC_IMPL(__imp__sub_826AD990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827f3268
	ctx.lr = 0x826AD9AC;
	sub_827F3268(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AD9C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e8210
	ctx.lr = 0x826AD9CC;
	sub_827E8210(ctx, base);
	// bl 0x824f65f8
	ctx.lr = 0x826AD9D0;
	sub_824F65F8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x826ad9fc
	if (ctx.cr0.eq) goto loc_826AD9FC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255afe0
	ctx.lr = 0x826AD9E4;
	sub_8255AFE0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AD9FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826AD9FC:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82438430
	ctx.lr = 0x826ADA04;
	sub_82438430(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826ada40
	if (ctx.cr0.eq) goto loc_826ADA40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82628f68
	ctx.lr = 0x826ADA14;
	sub_82628F68(ctx, base);
	// lwz r10,1968(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1516(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1516, ctx.r11.u32);
	// lwz r10,1968(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r11,1504(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1504, ctx.r11.u32);
	// lwz r10,1968(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r11,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r11.u32);
	// lwz r10,1968(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r11,1532(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1532, ctx.r11.u32);
	// lwz r10,1968(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r11,1524(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1524, ctx.r11.u32);
loc_826ADA40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826ADA58"))) PPC_WEAK_FUNC(sub_826ADA58);
PPC_FUNC_IMPL(__imp__sub_826ADA58) {
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
	// bl 0x827f32e8
	ctx.lr = 0x826ADA74;
	sub_827F32E8(ctx, base);
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
	ctx.lr = 0x826ADA8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r4,512
	ctx.r4.s64 = 512;
	// lfs f2,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829badb0
	ctx.lr = 0x826ADAB0;
	sub_829BADB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e8210
	ctx.lr = 0x826ADAB8;
	sub_827E8210(ctx, base);
	// bl 0x824f65f8
	ctx.lr = 0x826ADABC;
	sub_824F65F8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x826adae8
	if (ctx.cr0.eq) goto loc_826ADAE8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255afe0
	ctx.lr = 0x826ADAD0;
	sub_8255AFE0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826ADAE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826ADAE8:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82438430
	ctx.lr = 0x826ADAF0;
	sub_82438430(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826adb24
	if (ctx.cr0.eq) goto loc_826ADB24;
	// lwz r10,1968(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1968);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1516(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1516, ctx.r11.u32);
	// lwz r10,1968(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1968);
	// stw r11,1504(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1504, ctx.r11.u32);
	// lwz r10,1968(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1968);
	// stw r11,1508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1508, ctx.r11.u32);
	// lwz r10,1968(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1968);
	// stw r11,1532(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1532, ctx.r11.u32);
	// lwz r10,1968(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1968);
	// stw r11,1524(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1524, ctx.r11.u32);
loc_826ADB24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826ADB40"))) PPC_WEAK_FUNC(sub_826ADB40);
PPC_FUNC_IMPL(__imp__sub_826ADB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24120);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826adb80
	if (!ctx.cr0.eq) goto loc_826ADB80;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,24120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24120, ctx.r11.u32);
	// addi r3,r9,-25496
	ctx.r3.s64 = ctx.r9.s64 + -25496;
	// bl 0x82816528
	ctx.lr = 0x826ADB78;
	sub_82816528(ctx, base);
	// stw r3,24116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24116, ctx.r3.u32);
	// b 0x826adb84
	goto loc_826ADB84;
loc_826ADB80:
	// lwz r3,24116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24116);
loc_826ADB84:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826ADB98"))) PPC_WEAK_FUNC(sub_826ADB98);
PPC_FUNC_IMPL(__imp__sub_826ADB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826adbe8
	ctx.lr = 0x826ADBB8;
	sub_826ADBE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826ADBCC;
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

__attribute__((alias("__imp__sub_826ADBE8"))) PPC_WEAK_FUNC(sub_826ADBE8);
PPC_FUNC_IMPL(__imp__sub_826ADBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,24124
	ctx.r31.s64 = ctx.r11.s64 + 24124;
	// lwz r11,24128(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24128);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826adc30
	if (!ctx.cr0.eq) goto loc_826ADC30;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-25324
	ctx.r9.s64 = ctx.r9.s64 + -25324;
	// stw r11,24128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24128, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28240
	ctx.r3.s64 = ctx.r11.s64 + 28240;
	// bl 0x82a4c758
	ctx.lr = 0x826ADC30;
	sub_82A4C758(ctx, base);
loc_826ADC30:
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

__attribute__((alias("__imp__sub_826ADC48"))) PPC_WEAK_FUNC(sub_826ADC48);
PPC_FUNC_IMPL(__imp__sub_826ADC48) {
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
	// bl 0x827f1c68
	ctx.lr = 0x826ADC60;
	sub_827F1C68(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// addi r9,r11,-27804
	ctx.r9.s64 = ctx.r11.s64 + -27804;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r6,-31962
	ctx.r6.s64 = -2094661632;
	// lfs f6,-27804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27804);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r7,-26840
	ctx.r11.s64 = ctx.r7.s64 + -26840;
	// addi r8,r10,-32516
	ctx.r8.s64 = ctx.r10.s64 + -32516;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f0,-13008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -13008);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-31963
	ctx.r7.s64 = -2094727168;
	// lfs f13,16348(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16348);
	ctx.f13.f64 = double(temp.f32);
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lis r4,-32215
	ctx.r4.s64 = -2111242240;
	// lfs f12,-248(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -248);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lfs f11,23968(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23968);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,116
	ctx.r11.s64 = ctx.r31.s64 + 116;
	// stfs f13,96(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lis r3,-32215
	ctx.r3.s64 = -2111242240;
	// stfs f12,100(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lfs f9,-32516(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32516);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r6,-20744
	ctx.r10.s64 = ctx.r6.s64 + -20744;
	// lfs f5,16380(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16380);
	ctx.f5.f64 = double(temp.f32);
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lfs f13,30996(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 30996);
	ctx.f13.f64 = double(temp.f32);
	// li r8,5
	ctx.r8.s64 = 5;
	// lfs f0,904(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-20744(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20744);
	// lfs f10,912(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 912);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lfs f7,16800(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16800);
	ctx.f7.f64 = double(temp.f32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f12,908(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 908);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lfs f8,-31124(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31124);
	ctx.f8.f64 = double(temp.f32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stfs f11,116(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f13,120(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f7,124(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stfs f6,128(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f13,136(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stfs f10,140(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stfs f9,144(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stw r8,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r8.u32);
	// stfs f8,152(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f8,156(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// stfs f5,164(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stfs f11,116(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f13,120(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stfs f9,128(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f12,132(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f12,136(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stfs f10,144(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f12,148(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826ADD70"))) PPC_WEAK_FUNC(sub_826ADD70);
PPC_FUNC_IMPL(__imp__sub_826ADD70) {
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
	// bl 0x827e81c8
	ctx.lr = 0x826ADD8C;
	sub_827E81C8(ctx, base);
	// bl 0x824395b8
	ctx.lr = 0x826ADD90;
	sub_824395B8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x826addc4
	if (ctx.cr0.eq) goto loc_826ADDC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e8210
	ctx.lr = 0x826ADDA0;
	sub_827E8210(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824f04c8
	ctx.lr = 0x826ADDB0;
	sub_824F04C8(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// subfc r11,r3,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// b 0x826addc8
	goto loc_826ADDC8;
loc_826ADDC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826ADDC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826ADDE0"))) PPC_WEAK_FUNC(sub_826ADDE0);
PPC_FUNC_IMPL(__imp__sub_826ADDE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826ADDE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lfs f0,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// lfs f0,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// lfs f0,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// lfs f0,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// lfs f0,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// lfs f0,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lfs f0,-27300(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27300);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r8.u32);
	// stfs f0,84(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
	// stw r28,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r28.u32);
	// stw r28,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r28.u32);
	// stw r28,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r28.u32);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826ade80
	if (ctx.cr6.eq) goto loc_826ADE80;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x826ADE78;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x826ADE7C;
	sub_82409C40(ctx, base);
	// b 0x826ade84
	goto loc_826ADE84;
loc_826ADE80:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_826ADE84:
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// bl 0x8251a260
	ctx.lr = 0x826ADE8C;
	sub_8251A260(ctx, base);
	// lwz r6,13024(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,96(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 96);
	// bl 0x827da008
	ctx.lr = 0x826ADEA0;
	sub_827DA008(ctx, base);
	// lwz r4,1312(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x826adec0
	if (ctx.cr6.eq) goto loc_826ADEC0;
	// lwz r3,84(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x826ADEB8;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x826ADEBC;
	sub_82409C40(ctx, base);
	// b 0x826adec4
	goto loc_826ADEC4;
loc_826ADEC0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_826ADEC4:
	// lwz r11,1412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// lfs f0,1496(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1496);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1500(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1500);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lfs f12,1492(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1492);
	ctx.f12.f64 = double(temp.f32);
	// li r3,1808
	ctx.r3.s64 = 1808;
	// lfs f11,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfs f0,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f0,24000(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f13,f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fsubs f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f12,140(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f13,124(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stfs f0,84(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// bl 0x82833108
	ctx.lr = 0x826ADF28;
	sub_82833108(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x826adf6c
	if (ctx.cr0.eq) goto loc_826ADF6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e8210
	ctx.lr = 0x826ADF38;
	sub_827E8210(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826adf48
	if (ctx.cr0.eq) goto loc_826ADF48;
	// lwz r9,80(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x826adf4c
	goto loc_826ADF4C;
loc_826ADF48:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_826ADF4C:
	// addi r8,r31,104
	ctx.r8.s64 = ctx.r31.s64 + 104;
	// lfs f3,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// addi r4,r31,116
	ctx.r4.s64 = ctx.r31.s64 + 116;
	// lfs f2,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x827f3870
	ctx.lr = 0x826ADF68;
	sub_827F3870(ctx, base);
	// b 0x826adf70
	goto loc_826ADF70;
loc_826ADF6C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_826ADF70:
	// stw r3,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r3.u32);
	// stw r28,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r28.u32);
	// stw r28,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826ADF88"))) PPC_WEAK_FUNC(sub_826ADF88);
PPC_FUNC_IMPL(__imp__sub_826ADF88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-25304
	ctx.r3.s64 = ctx.r11.s64 + -25304;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826ADF98"))) PPC_WEAK_FUNC(sub_826ADF98);
PPC_FUNC_IMPL(__imp__sub_826ADF98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826adfd0
	if (ctx.cr6.eq) goto loc_826ADFD0;
	// bl 0x826ae3f0
	ctx.lr = 0x826ADFC0;
	sub_826AE3F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826adfd0
	if (!ctx.cr6.eq) goto loc_826ADFD0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826adfdc
	goto loc_826ADFDC;
loc_826ADFD0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826aa1d0
	ctx.lr = 0x826ADFDC;
	sub_826AA1D0(ctx, base);
loc_826ADFDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826ADFF8"))) PPC_WEAK_FUNC(sub_826ADFF8);
PPC_FUNC_IMPL(__imp__sub_826ADFF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x826ae3f0
	sub_826AE3F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AE000"))) PPC_WEAK_FUNC(sub_826AE000);
PPC_FUNC_IMPL(__imp__sub_826AE000) {
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
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82833108
	ctx.lr = 0x826AE020;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826ae070
	if (ctx.cr0.eq) goto loc_826AE070;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826aa470
	ctx.lr = 0x826AE034;
	sub_826AA470(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-25256
	ctx.r11.s64 = ctx.r11.s64 + -25256;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lfs f0,100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lfs f0,104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lfs f0,108(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// b 0x826ae074
	goto loc_826AE074;
loc_826AE070:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AE074:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AE090"))) PPC_WEAK_FUNC(sub_826AE090);
PPC_FUNC_IMPL(__imp__sub_826AE090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826ae3f0
	ctx.lr = 0x826AE0B0;
	sub_826AE3F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826ae0c4
	if (ctx.cr6.eq) goto loc_826AE0C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826aa238
	ctx.lr = 0x826AE0C4;
	sub_826AA238(ctx, base);
loc_826AE0C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AE0E0"))) PPC_WEAK_FUNC(sub_826AE0E0);
PPC_FUNC_IMPL(__imp__sub_826AE0E0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x827f1c68
	ctx.lr = 0x826AE100;
	sub_827F1C68(ctx, base);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r6,-32221
	ctx.r6.s64 = -2111635456;
	// lfs f11,24088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24088);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r6,-25256
	ctx.r10.s64 = ctx.r6.s64 + -25256;
	// lfs f13,30356(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30356);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,24000(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,904(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f11,92(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f12,56(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// beq cr6,0x826ae174
	if (ctx.cr6.eq) goto loc_826AE174;
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f12,48(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
loc_826AE174:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AE188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,32708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32708);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16620(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16620);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-12104(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f13,104(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f12,108(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AE1D0"))) PPC_WEAK_FUNC(sub_826AE1D0);
PPC_FUNC_IMPL(__imp__sub_826AE1D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826AE1D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1888
	ctx.r3.s64 = 1888;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f0,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f0,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f0,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f0,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lwz r9,68(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lfs f0,24000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// bl 0x82833108
	ctx.lr = 0x826AE250;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ae278
	if (ctx.cr0.eq) goto loc_826AE278;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826ae26c
	if (ctx.cr6.eq) goto loc_826AE26C;
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x826ae270
	goto loc_826AE270;
loc_826AE26C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_826AE270:
	// bl 0x827f23a0
	ctx.lr = 0x826AE274;
	sub_827F23A0(ctx, base);
	// b 0x826ae27c
	goto loc_826AE27C;
loc_826AE278:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_826AE27C:
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AE298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826ae538
	ctx.lr = 0x826AE2A0;
	sub_826AE538(ctx, base);
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
	ctx.lr = 0x826AE2B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x826ae2c8
	if (!ctx.cr0.eq) goto loc_826AE2C8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_826AE2C8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f3,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,1116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AE2E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AE2F0"))) PPC_WEAK_FUNC(sub_826AE2F0);
PPC_FUNC_IMPL(__imp__sub_826AE2F0) {
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
	// lwz r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// addi r6,r9,-18048
	ctx.r6.s64 = ctx.r9.s64 + -18048;
	// addi r7,r10,-18036
	ctx.r7.s64 = ctx.r10.s64 + -18036;
	// lfs f1,-11424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11424);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r8,13804
	ctx.r5.s64 = ctx.r8.s64 + 13804;
	// li r9,1
	ctx.r9.s64 = 1;
	// bl 0x827f2dd0
	ctx.lr = 0x826AE32C;
	sub_827F2DD0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AE348"))) PPC_WEAK_FUNC(sub_826AE348);
PPC_FUNC_IMPL(__imp__sub_826AE348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24104);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826ae388
	if (!ctx.cr0.eq) goto loc_826AE388;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,24104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24104, ctx.r11.u32);
	// addi r3,r9,-25304
	ctx.r3.s64 = ctx.r9.s64 + -25304;
	// bl 0x82816528
	ctx.lr = 0x826AE380;
	sub_82816528(ctx, base);
	// stw r3,24100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24100, ctx.r3.u32);
	// b 0x826ae38c
	goto loc_826AE38C;
loc_826AE388:
	// lwz r3,24100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24100);
loc_826AE38C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AE3A0"))) PPC_WEAK_FUNC(sub_826AE3A0);
PPC_FUNC_IMPL(__imp__sub_826AE3A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826ae3f0
	ctx.lr = 0x826AE3C0;
	sub_826AE3F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AE3D4;
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

__attribute__((alias("__imp__sub_826AE3F0"))) PPC_WEAK_FUNC(sub_826AE3F0);
PPC_FUNC_IMPL(__imp__sub_826AE3F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,24108
	ctx.r31.s64 = ctx.r11.s64 + 24108;
	// lwz r11,24112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24112);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826ae438
	if (!ctx.cr0.eq) goto loc_826AE438;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-25132
	ctx.r9.s64 = ctx.r9.s64 + -25132;
	// stw r11,24112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24112, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28288
	ctx.r3.s64 = ctx.r11.s64 + 28288;
	// bl 0x82a4c758
	ctx.lr = 0x826AE438;
	sub_82A4C758(ctx, base);
loc_826AE438:
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

__attribute__((alias("__imp__sub_826AE450"))) PPC_WEAK_FUNC(sub_826AE450);
PPC_FUNC_IMPL(__imp__sub_826AE450) {
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
	ctx.lr = 0x826AE464;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ae478
	if (ctx.cr0.eq) goto loc_826AE478;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827f23a0
	ctx.lr = 0x826AE474;
	sub_827F23A0(ctx, base);
	// b 0x826ae47c
	goto loc_826AE47C;
loc_826AE478:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AE47C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AE490"))) PPC_WEAK_FUNC(sub_826AE490);
PPC_FUNC_IMPL(__imp__sub_826AE490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24096(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24096);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826ae4d0
	if (!ctx.cr0.eq) goto loc_826AE4D0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,24096(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24096, ctx.r11.u32);
	// addi r3,r9,-25280
	ctx.r3.s64 = ctx.r9.s64 + -25280;
	// bl 0x82816528
	ctx.lr = 0x826AE4C8;
	sub_82816528(ctx, base);
	// stw r3,24092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24092, ctx.r3.u32);
	// b 0x826ae4d4
	goto loc_826AE4D4;
loc_826AE4D0:
	// lwz r3,24092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24092);
loc_826AE4D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AE4E8"))) PPC_WEAK_FUNC(sub_826AE4E8);
PPC_FUNC_IMPL(__imp__sub_826AE4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826ae538
	ctx.lr = 0x826AE508;
	sub_826AE538(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AE51C;
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

__attribute__((alias("__imp__sub_826AE538"))) PPC_WEAK_FUNC(sub_826AE538);
PPC_FUNC_IMPL(__imp__sub_826AE538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13708
	ctx.r31.s64 = ctx.r11.s64 + 13708;
	// lwz r11,13704(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13704);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826ae580
	if (!ctx.cr0.eq) goto loc_826AE580;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-25112
	ctx.r9.s64 = ctx.r9.s64 + -25112;
	// stw r11,13704(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13704, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28264
	ctx.r3.s64 = ctx.r11.s64 + 28264;
	// bl 0x82a4c758
	ctx.lr = 0x826AE580;
	sub_82A4C758(ctx, base);
loc_826AE580:
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

__attribute__((alias("__imp__sub_826AE598"))) PPC_WEAK_FUNC(sub_826AE598);
PPC_FUNC_IMPL(__imp__sub_826AE598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-25092
	ctx.r3.s64 = ctx.r11.s64 + -25092;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AE5A8"))) PPC_WEAK_FUNC(sub_826AE5A8);
PPC_FUNC_IMPL(__imp__sub_826AE5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826ae5e0
	if (ctx.cr6.eq) goto loc_826AE5E0;
	// bl 0x826ae980
	ctx.lr = 0x826AE5D0;
	sub_826AE980(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826ae5e0
	if (!ctx.cr6.eq) goto loc_826AE5E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826ae5ec
	goto loc_826AE5EC;
loc_826AE5E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826aa958
	ctx.lr = 0x826AE5EC;
	sub_826AA958(ctx, base);
loc_826AE5EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AE608"))) PPC_WEAK_FUNC(sub_826AE608);
PPC_FUNC_IMPL(__imp__sub_826AE608) {
	PPC_FUNC_PROLOGUE();
	// b 0x826ae980
	sub_826AE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AE610"))) PPC_WEAK_FUNC(sub_826AE610);
PPC_FUNC_IMPL(__imp__sub_826AE610) {
	PPC_FUNC_PROLOGUE();
	// b 0x826ab028
	sub_826AB028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AE618"))) PPC_WEAK_FUNC(sub_826AE618);
PPC_FUNC_IMPL(__imp__sub_826AE618) {
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
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82833108
	ctx.lr = 0x826AE638;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826ae668
	if (ctx.cr0.eq) goto loc_826AE668;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826aaa50
	ctx.lr = 0x826AE64C;
	sub_826AAA50(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-25064
	ctx.r11.s64 = ctx.r11.s64 + -25064;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,172(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// b 0x826ae66c
	goto loc_826AE66C;
loc_826AE668:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AE66C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AE688"))) PPC_WEAK_FUNC(sub_826AE688);
PPC_FUNC_IMPL(__imp__sub_826AE688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826ae980
	ctx.lr = 0x826AE6A8;
	sub_826AE980(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826ae6b8
	if (!ctx.cr6.eq) goto loc_826AE6B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826ae6d0
	goto loc_826AE6D0;
loc_826AE6B8:
	// bl 0x826ab028
	ctx.lr = 0x826AE6BC;
	sub_826AB028(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826ae6d0
	if (ctx.cr6.eq) goto loc_826AE6D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826aa238
	ctx.lr = 0x826AE6D0;
	sub_826AA238(ctx, base);
loc_826AE6D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AE6E8"))) PPC_WEAK_FUNC(sub_826AE6E8);
PPC_FUNC_IMPL(__imp__sub_826AE6E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826AE6F0;
	__savegprlr_29(ctx, base);
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
	// bl 0x826adc48
	ctx.lr = 0x826AE704;
	sub_826ADC48(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,-11424
	ctx.r11.s64 = ctx.r11.s64 + -11424;
	// addi r10,r10,-25064
	ctx.r10.s64 = ctx.r10.s64 + -25064;
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lfs f0,-15904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-29388(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29388);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// stfs f13,92(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lwz r8,624(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lfs f13,24088(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24088);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,1412(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1412);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,628(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r8,624(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 624);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lwz r8,620(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 620);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,620(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,628(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 628);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x826ae7ac
	if (!ctx.cr6.gt) goto loc_826AE7AC;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,20044(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20044);
	ctx.f0.f64 = double(temp.f32);
	// b 0x826ae7c4
	goto loc_826AE7C4;
loc_826AE7AC:
	// fsubs f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lfs f0,16356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16356);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-12104(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12104);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
loc_826AE7C4:
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// stfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lfs f0,-15876(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15876);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// addi r8,r10,-20732
	ctx.r8.s64 = ctx.r10.s64 + -20732;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r7,50
	ctx.r7.s64 = 50;
	// lwz r10,-20732(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20732);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// lfs f13,-31124(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31124);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stfs f13,156(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// stfs f13,152(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stw r7,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r7.u32);
	// stfs f12,164(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AE848"))) PPC_WEAK_FUNC(sub_826AE848);
PPC_FUNC_IMPL(__imp__sub_826AE848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x827f1cc8
	ctx.lr = 0x826AE860;
	sub_827F1CC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e81c8
	ctx.lr = 0x826AE868;
	sub_827E81C8(ctx, base);
	// bl 0x824a0b58
	ctx.lr = 0x826AE86C;
	sub_824A0B58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ae87c
	if (ctx.cr0.eq) goto loc_826AE87C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2180, ctx.r11.u32);
loc_826AE87C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AE890"))) PPC_WEAK_FUNC(sub_826AE890);
PPC_FUNC_IMPL(__imp__sub_826AE890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x827f1d68
	ctx.lr = 0x826AE8A8;
	sub_827F1D68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e81c8
	ctx.lr = 0x826AE8B0;
	sub_827E81C8(ctx, base);
	// bl 0x824a0b58
	ctx.lr = 0x826AE8B4;
	sub_824A0B58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ae8c4
	if (ctx.cr0.eq) goto loc_826AE8C4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2180, ctx.r11.u32);
loc_826AE8C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AE8D8"))) PPC_WEAK_FUNC(sub_826AE8D8);
PPC_FUNC_IMPL(__imp__sub_826AE8D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24080(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24080);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826ae918
	if (!ctx.cr0.eq) goto loc_826AE918;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,24080(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24080, ctx.r11.u32);
	// addi r3,r9,-25092
	ctx.r3.s64 = ctx.r9.s64 + -25092;
	// bl 0x82816528
	ctx.lr = 0x826AE910;
	sub_82816528(ctx, base);
	// stw r3,24076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24076, ctx.r3.u32);
	// b 0x826ae91c
	goto loc_826AE91C;
loc_826AE918:
	// lwz r3,24076(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24076);
loc_826AE91C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AE930"))) PPC_WEAK_FUNC(sub_826AE930);
PPC_FUNC_IMPL(__imp__sub_826AE930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826ae980
	ctx.lr = 0x826AE950;
	sub_826AE980(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AE964;
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

__attribute__((alias("__imp__sub_826AE980"))) PPC_WEAK_FUNC(sub_826AE980);
PPC_FUNC_IMPL(__imp__sub_826AE980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,24084
	ctx.r31.s64 = ctx.r11.s64 + 24084;
	// lwz r11,24088(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24088);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826ae9c8
	if (!ctx.cr0.eq) goto loc_826AE9C8;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-24940
	ctx.r9.s64 = ctx.r9.s64 + -24940;
	// stw r11,24088(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24088, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28312
	ctx.r3.s64 = ctx.r11.s64 + 28312;
	// bl 0x82a4c758
	ctx.lr = 0x826AE9C8;
	sub_82A4C758(ctx, base);
loc_826AE9C8:
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

__attribute__((alias("__imp__sub_826AE9E0"))) PPC_WEAK_FUNC(sub_826AE9E0);
PPC_FUNC_IMPL(__imp__sub_826AE9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-24920
	ctx.r3.s64 = ctx.r11.s64 + -24920;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AE9F0"))) PPC_WEAK_FUNC(sub_826AE9F0);
PPC_FUNC_IMPL(__imp__sub_826AE9F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826aea28
	if (ctx.cr6.eq) goto loc_826AEA28;
	// bl 0x826af090
	ctx.lr = 0x826AEA18;
	sub_826AF090(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826aea28
	if (!ctx.cr6.eq) goto loc_826AEA28;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826aea34
	goto loc_826AEA34;
loc_826AEA28:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826aa1d0
	ctx.lr = 0x826AEA34;
	sub_826AA1D0(ctx, base);
loc_826AEA34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AEA50"))) PPC_WEAK_FUNC(sub_826AEA50);
PPC_FUNC_IMPL(__imp__sub_826AEA50) {
	PPC_FUNC_PROLOGUE();
	// b 0x826af090
	sub_826AF090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AEA58"))) PPC_WEAK_FUNC(sub_826AEA58);
PPC_FUNC_IMPL(__imp__sub_826AEA58) {
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
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x82833108
	ctx.lr = 0x826AEA78;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826aeae0
	if (ctx.cr0.eq) goto loc_826AEAE0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826aa470
	ctx.lr = 0x826AEA8C;
	sub_826AA470(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24888
	ctx.r11.s64 = ctx.r11.s64 + -24888;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lfs f0,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
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
	// b 0x826aeae4
	goto loc_826AEAE4;
loc_826AEAE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AEAE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AEB00"))) PPC_WEAK_FUNC(sub_826AEB00);
PPC_FUNC_IMPL(__imp__sub_826AEB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826af090
	ctx.lr = 0x826AEB20;
	sub_826AF090(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826aeb34
	if (ctx.cr6.eq) goto loc_826AEB34;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826aa238
	ctx.lr = 0x826AEB34;
	sub_826AA238(ctx, base);
loc_826AEB34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AEB50"))) PPC_WEAK_FUNC(sub_826AEB50);
PPC_FUNC_IMPL(__imp__sub_826AEB50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826AEB58;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,24724
	ctx.r28.s64 = ctx.r11.s64 + 24724;
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// li r27,1
	ctx.r27.s64 = 1;
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// li r3,1616
	ctx.r3.s64 = 1616;
	// lfs f0,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// lfs f0,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// lfs f0,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// lfs f0,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// lfs f0,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// lfs f0,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lfs f0,13512(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 13512);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
	// stfs f0,84(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// stw r27,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r27.u32);
	// stw r29,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r29.u32);
	// stw r29,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r29.u32);
	// stw r29,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r29.u32);
	// lfs f0,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// bl 0x82833108
	ctx.lr = 0x826AEBDC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826aebec
	if (ctx.cr0.eq) goto loc_826AEBEC;
	// bl 0x827d73c0
	ctx.lr = 0x826AEBE8;
	sub_827D73C0(ctx, base);
	// b 0x826aebf0
	goto loc_826AEBF0;
loc_826AEBEC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_826AEBF0:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// stw r3,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r3.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lfs f13,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r11,1448(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1448, ctx.r11.u32);
	// lfs f0,24000(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,904(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f12,56(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// std r10,84(r31)
	PPC_STORE_U64(ctx.r31.u32 + 84, ctx.r10.u64);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// beq cr6,0x826aec7c
	if (ctx.cr6.eq) goto loc_826AEC7C;
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f12,48(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
loc_826AEC7C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AEC88"))) PPC_WEAK_FUNC(sub_826AEC88);
PPC_FUNC_IMPL(__imp__sub_826AEC88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826AEC90;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82a61740
	ctx.lr = 0x826AEC98;
	__savefpr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827f1cc8
	ctx.lr = 0x826AECA4;
	sub_827F1CC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,36(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x827e81c8
	ctx.lr = 0x826AECB0;
	sub_827E81C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e8210
	ctx.lr = 0x826AECBC;
	sub_827E8210(ctx, base);
	// addi r11,r3,620
	ctx.r11.s64 = ctx.r3.s64 + 620;
	// lfs f0,620(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,624(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,628(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f29,f0,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f13,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f29,100(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f0,f31,f31
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fmadds f0,f29,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x826aed40
	if (!ctx.cr6.eq) goto loc_826AED40;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// bne cr6,0x826aed78
	if (!ctx.cr6.eq) goto loc_826AED78;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfs f31,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f31.f64 = double(temp.f32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lfs f29,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f29.f64 = double(temp.f32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lfs f30,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f30.f64 = double(temp.f32);
	// b 0x826aed78
	goto loc_826AED78;
loc_826AED40:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,16668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x826aed64
	if (!ctx.cr6.lt) goto loc_826AED64;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// b 0x826aed78
	goto loc_826AED78;
loc_826AED64:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f30,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
loc_826AED78:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,32748(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32748);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f28,f31,f0
	ctx.f28.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f27,f29,f0
	ctx.f27.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmuls f26,f30,f0
	ctx.f26.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// bl 0x827e8210
	ctx.lr = 0x826AED94;
	sub_827E8210(ctx, base);
	// addi r11,r3,620
	ctx.r11.s64 = ctx.r3.s64 + 620;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f26.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f27.f64));
	// fadds f12,f28,f12
	ctx.f12.f64 = double(float(ctx.f28.f64 + ctx.f12.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AEDD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fneg f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fneg f13,f29
	ctx.f13.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// fneg f0,f30
	ctx.f0.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82817280
	ctx.lr = 0x826AEE00;
	sub_82817280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r11,316(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AEE14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e8210
	ctx.lr = 0x826AEE1C;
	sub_827E8210(ctx, base);
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// lwz r11,620(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lwz r11,624(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lwz r11,628(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lfs f11,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f11,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f10,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82a6178c
	ctx.lr = 0x826AEE8C;
	__restfpr_26(ctx, base);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AEE90"))) PPC_WEAK_FUNC(sub_826AEE90);
PPC_FUNC_IMPL(__imp__sub_826AEE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826AEE98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x827f1d68
	ctx.lr = 0x826AEEA8;
	sub_827F1D68(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82833108
	ctx.lr = 0x826AEEB0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826aeee4
	if (ctx.cr0.eq) goto loc_826AEEE4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827e81c8
	ctx.lr = 0x826AEEC0;
	sub_827E81C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333a80
	ctx.lr = 0x826AEED0;
	sub_82333A80(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,1280
	ctx.r11.s64 = ctx.r11.s64 + 1280;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x826aeee8
	goto loc_826AEEE8;
loc_826AEEE4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_826AEEE8:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x826AEEF8;
	sub_82833A30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AEF00"))) PPC_WEAK_FUNC(sub_826AEF00);
PPC_FUNC_IMPL(__imp__sub_826AEF00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826AEF08;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827e8210
	ctx.lr = 0x826AEF14;
	sub_827E8210(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x826aefdc
	if (ctx.cr0.eq) goto loc_826AEFDC;
	// lwz r10,624(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// lfs f11,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r9,628(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// lfs f13,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// addi r29,r30,620
	ctx.r29.s64 = ctx.r30.s64 + 620;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AEF80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lfs f0,620(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lfs f12,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f11,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f10,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f11,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x826AEFC8;
	sub_82817280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r11,316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AEFDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826AEFDC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AEFE8"))) PPC_WEAK_FUNC(sub_826AEFE8);
PPC_FUNC_IMPL(__imp__sub_826AEFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24064(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24064);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826af028
	if (!ctx.cr0.eq) goto loc_826AF028;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,24064(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24064, ctx.r11.u32);
	// addi r3,r9,-24920
	ctx.r3.s64 = ctx.r9.s64 + -24920;
	// bl 0x82816528
	ctx.lr = 0x826AF020;
	sub_82816528(ctx, base);
	// stw r3,24060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24060, ctx.r3.u32);
	// b 0x826af02c
	goto loc_826AF02C;
loc_826AF028:
	// lwz r3,24060(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24060);
loc_826AF02C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AF040"))) PPC_WEAK_FUNC(sub_826AF040);
PPC_FUNC_IMPL(__imp__sub_826AF040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826af090
	ctx.lr = 0x826AF060;
	sub_826AF090(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AF074;
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

__attribute__((alias("__imp__sub_826AF090"))) PPC_WEAK_FUNC(sub_826AF090);
PPC_FUNC_IMPL(__imp__sub_826AF090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,24068
	ctx.r31.s64 = ctx.r11.s64 + 24068;
	// lwz r11,24072(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24072);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826af0d8
	if (!ctx.cr0.eq) goto loc_826AF0D8;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-24764
	ctx.r9.s64 = ctx.r9.s64 + -24764;
	// stw r11,24072(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24072, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28336
	ctx.r3.s64 = ctx.r11.s64 + 28336;
	// bl 0x82a4c758
	ctx.lr = 0x826AF0D8;
	sub_82A4C758(ctx, base);
loc_826AF0D8:
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

__attribute__((alias("__imp__sub_826AF0F0"))) PPC_WEAK_FUNC(sub_826AF0F0);
PPC_FUNC_IMPL(__imp__sub_826AF0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-24744
	ctx.r3.s64 = ctx.r11.s64 + -24744;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AF100"))) PPC_WEAK_FUNC(sub_826AF100);
PPC_FUNC_IMPL(__imp__sub_826AF100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826af138
	if (ctx.cr6.eq) goto loc_826AF138;
	// bl 0x826af5e0
	ctx.lr = 0x826AF128;
	sub_826AF5E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826af138
	if (!ctx.cr6.eq) goto loc_826AF138;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826af144
	goto loc_826AF144;
loc_826AF138:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826aba88
	ctx.lr = 0x826AF144;
	sub_826ABA88(ctx, base);
loc_826AF144:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AF160"))) PPC_WEAK_FUNC(sub_826AF160);
PPC_FUNC_IMPL(__imp__sub_826AF160) {
	PPC_FUNC_PROLOGUE();
	// b 0x826af5e0
	sub_826AF5E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AF168"))) PPC_WEAK_FUNC(sub_826AF168);
PPC_FUNC_IMPL(__imp__sub_826AF168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82833108
	ctx.lr = 0x826AF188;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826af1b8
	if (ctx.cr0.eq) goto loc_826AF1B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825da6c0
	ctx.lr = 0x826AF19C;
	sub_825DA6C0(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24712
	ctx.r11.s64 = ctx.r11.s64 + -24712;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x826af1bc
	goto loc_826AF1BC;
loc_826AF1B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AF1BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AF1D8"))) PPC_WEAK_FUNC(sub_826AF1D8);
PPC_FUNC_IMPL(__imp__sub_826AF1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826af5e0
	ctx.lr = 0x826AF1F8;
	sub_826AF5E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826af20c
	if (ctx.cr6.eq) goto loc_826AF20C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826abae8
	ctx.lr = 0x826AF20C;
	sub_826ABAE8(ctx, base);
loc_826AF20C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AF228"))) PPC_WEAK_FUNC(sub_826AF228);
PPC_FUNC_IMPL(__imp__sub_826AF228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826AF230;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x827e8210
	ctx.lr = 0x826AF23C;
	sub_827E8210(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826af3e0
	if (ctx.cr0.eq) goto loc_826AF3E0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827e81c8
	ctx.lr = 0x826AF24C;
	sub_827E81C8(ctx, base);
	// bl 0x824a0b58
	ctx.lr = 0x826AF250;
	sub_824A0B58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827e8210
	ctx.lr = 0x826AF25C;
	sub_827E8210(ctx, base);
	// bl 0x824395b8
	ctx.lr = 0x826AF260;
	sub_824395B8(ctx, base);
	// addi r30,r3,620
	ctx.r30.s64 = ctx.r3.s64 + 620;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827e81c8
	ctx.lr = 0x826AF26C;
	sub_827E81C8(ctx, base);
	// addi r11,r3,620
	ctx.r11.s64 = ctx.r3.s64 + 620;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f13,32748(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32748);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x826af3e0
	if (ctx.cr6.gt) goto loc_826AF3E0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x826af3e0
	if (ctx.cr6.lt) goto loc_826AF3E0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r11,-27328
	ctx.r29.s64 = ctx.r11.s64 + -27328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,-476(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -476);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824f04c8
	ctx.lr = 0x826AF2DC;
	sub_824F04C8(ctx, base);
	// cmplwi cr6,r3,100
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 100, ctx.xer);
	// bgt cr6,0x826af3e0
	if (ctx.cr6.gt) goto loc_826AF3E0;
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r31,5964
	ctx.r5.s64 = ctx.r31.s64 + 5964;
	// lfs f0,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x8284e158
	ctx.lr = 0x826AF324;
	sub_8284E158(ctx, base);
	// stw r3,80(r28)
	PPC_STORE_U32(ctx.r28.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826af3e0
	if (ctx.cr0.lt) goto loc_826AF3E0;
	// lwz r10,5976(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5976);
	// mulli r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 * 12;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r3,4(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// bl 0x827d1fe0
	ctx.lr = 0x826AF348;
	sub_827D1FE0(ctx, base);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lfs f0,904(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f0,16540(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16540);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// beq 0x826af3d8
	if (ctx.cr0.eq) goto loc_826AF3D8;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r7,1428(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827d2bb8
	ctx.lr = 0x826AF3D8;
	sub_827D2BB8(ctx, base);
loc_826AF3D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826af3e4
	goto loc_826AF3E4;
loc_826AF3E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AF3E4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AF3F0"))) PPC_WEAK_FUNC(sub_826AF3F0);
PPC_FUNC_IMPL(__imp__sub_826AF3F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826AF3F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f0,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r11,-27300
	ctx.r29.s64 = ctx.r11.s64 + -27300;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f0,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f0,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f0,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f0,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lfs f0,24000(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lfs f13,-27300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f13.f64 = double(temp.f32);
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// stfs f13,100(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// bl 0x827e81c8
	ctx.lr = 0x826AF474;
	sub_827E81C8(ctx, base);
	// bl 0x824a0b58
	ctx.lr = 0x826AF478;
	sub_824A0B58(ctx, base);
	// lfs f0,24000(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,15844(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 15844);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stfs f13,100(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// beq 0x826af49c
	if (ctx.cr0.eq) goto loc_826AF49C;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x826af4a0
	goto loc_826AF4A0;
loc_826AF49C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_826AF4A0:
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r11,5976(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5976);
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// lfs f13,-13512(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -13512);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32668(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32668);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,23664(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23664);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stfs f13,48(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stfs f12,52(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// stfs f11,56(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f0,60(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// stfs f0,64(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// beq cr6,0x826af52c
	if (ctx.cr6.eq) goto loc_826AF52C;
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stfs f12,44(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stfs f11,48(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
loc_826AF52C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AF538"))) PPC_WEAK_FUNC(sub_826AF538);
PPC_FUNC_IMPL(__imp__sub_826AF538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24048(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24048);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826af578
	if (!ctx.cr0.eq) goto loc_826AF578;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,24048(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24048, ctx.r11.u32);
	// addi r3,r9,-24744
	ctx.r3.s64 = ctx.r9.s64 + -24744;
	// bl 0x82816528
	ctx.lr = 0x826AF570;
	sub_82816528(ctx, base);
	// stw r3,24044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24044, ctx.r3.u32);
	// b 0x826af57c
	goto loc_826AF57C;
loc_826AF578:
	// lwz r3,24044(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24044);
loc_826AF57C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AF590"))) PPC_WEAK_FUNC(sub_826AF590);
PPC_FUNC_IMPL(__imp__sub_826AF590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826af5e0
	ctx.lr = 0x826AF5B0;
	sub_826AF5E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AF5C4;
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

__attribute__((alias("__imp__sub_826AF5E0"))) PPC_WEAK_FUNC(sub_826AF5E0);
PPC_FUNC_IMPL(__imp__sub_826AF5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,24052
	ctx.r31.s64 = ctx.r11.s64 + 24052;
	// lwz r11,24056(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24056);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826af628
	if (!ctx.cr0.eq) goto loc_826AF628;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-24588
	ctx.r9.s64 = ctx.r9.s64 + -24588;
	// stw r11,24056(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24056, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28360
	ctx.r3.s64 = ctx.r11.s64 + 28360;
	// bl 0x82a4c758
	ctx.lr = 0x826AF628;
	sub_82A4C758(ctx, base);
loc_826AF628:
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

__attribute__((alias("__imp__sub_826AF640"))) PPC_WEAK_FUNC(sub_826AF640);
PPC_FUNC_IMPL(__imp__sub_826AF640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-24568
	ctx.r3.s64 = ctx.r11.s64 + -24568;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AF650"))) PPC_WEAK_FUNC(sub_826AF650);
PPC_FUNC_IMPL(__imp__sub_826AF650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826af688
	if (ctx.cr6.eq) goto loc_826AF688;
	// bl 0x826afb58
	ctx.lr = 0x826AF678;
	sub_826AFB58(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826af688
	if (!ctx.cr6.eq) goto loc_826AF688;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826af694
	goto loc_826AF694;
loc_826AF688:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826aba88
	ctx.lr = 0x826AF694;
	sub_826ABA88(ctx, base);
loc_826AF694:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AF6B0"))) PPC_WEAK_FUNC(sub_826AF6B0);
PPC_FUNC_IMPL(__imp__sub_826AF6B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x826afb58
	sub_826AFB58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AF6B8"))) PPC_WEAK_FUNC(sub_826AF6B8);
PPC_FUNC_IMPL(__imp__sub_826AF6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82833108
	ctx.lr = 0x826AF6D8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826af710
	if (ctx.cr0.eq) goto loc_826AF710;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825da6c0
	ctx.lr = 0x826AF6EC;
	sub_825DA6C0(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24536
	ctx.r11.s64 = ctx.r11.s64 + -24536;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x826af714
	goto loc_826AF714;
loc_826AF710:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AF714:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AF730"))) PPC_WEAK_FUNC(sub_826AF730);
PPC_FUNC_IMPL(__imp__sub_826AF730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826afb58
	ctx.lr = 0x826AF750;
	sub_826AFB58(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826af764
	if (ctx.cr6.eq) goto loc_826AF764;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826abae8
	ctx.lr = 0x826AF764;
	sub_826ABAE8(ctx, base);
loc_826AF764:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AF780"))) PPC_WEAK_FUNC(sub_826AF780);
PPC_FUNC_IMPL(__imp__sub_826AF780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e4
	ctx.lr = 0x826AF788;
	__savegprlr_19(ctx, base);
	// stfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x827e81c8
	ctx.lr = 0x826AF79C;
	sub_827E81C8(ctx, base);
	// bl 0x824a0b58
	ctx.lr = 0x826AF7A0;
	sub_824A0B58(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,656(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 656);
	// lwz r10,660(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 660);
	// lwz r9,664(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 664);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82817bb8
	ctx.lr = 0x826AF7C8;
	sub_82817BB8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lfs f1,-27804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27804);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824f04c8
	ctx.lr = 0x826AF7DC;
	sub_824F04C8(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bgt cr6,0x826af944
	if (ctx.cr6.gt) goto loc_826AF944;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// addi r21,r11,2308
	ctx.r21.s64 = ctx.r11.s64 + 2308;
	// lwz r11,2324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2324);
	// addic. r26,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r26.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt 0x826af944
	if (ctx.cr0.lt) goto loc_826AF944;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// rlwinm r25,r26,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r24,-31963
	ctx.r24.s64 = -2094727168;
	// addi r22,r11,-32516
	ctx.r22.s64 = ctx.r11.s64 + -32516;
	// lfs f30,16668(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f30.f64 = double(temp.f32);
loc_826AF814:
	// lwz r11,12(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// lwzx r28,r11,r25
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x826af938
	if (ctx.cr6.eq) goto loc_826AF938;
	// lwz r11,1528(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1528);
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x826af938
	if (ctx.cr0.lt) goto loc_826AF938;
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_826AF834:
	// lwz r11,1524(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1524);
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826af92c
	if (ctx.cr6.eq) goto loc_826AF92C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826af92c
	if (!ctx.cr0.eq) goto loc_826AF92C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x827e81c8
	ctx.lr = 0x826AF858;
	sub_827E81C8(ctx, base);
	// addi r11,r3,620
	ctx.r11.s64 = ctx.r3.s64 + 620;
	// lfs f0,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lfs f12,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f31,f0
	ctx.f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x82332e18
	ctx.lr = 0x826AF8A8;
	sub_82332E18(ctx, base);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,23772(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 23772);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmadds f13,f12,f9,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fmadds f13,f11,f8,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x826af92c
	if (ctx.cr6.gt) goto loc_826AF92C;
	// lfs f0,-272(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -272);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x826af92c
	if (ctx.cr6.gt) goto loc_826AF92C;
	// lfs f0,0(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x826af92c
	if (ctx.cr6.lt) goto loc_826AF92C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r20,r23,5964
	ctx.r20.s64 = ctx.r23.s64 + 5964;
	// addi r19,r1,80
	ctx.r19.s64 = ctx.r1.s64 + 80;
	// bl 0x827e81c8
	ctx.lr = 0x826AF90C;
	sub_827E81C8(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bl 0x8284e158
	ctx.lr = 0x826AF918;
	sub_8284E158(ctx, base);
	// stw r3,80(r27)
	PPC_STORE_U32(ctx.r27.u32 + 80, ctx.r3.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,84(r27)
	PPC_STORE_U32(ctx.r27.u32 + 84, ctx.r11.u32);
	// bge 0x826af958
	if (!ctx.cr0.lt) goto loc_826AF958;
loc_826AF92C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bge 0x826af834
	if (!ctx.cr0.lt) goto loc_826AF834;
loc_826AF938:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r25,r25,-4
	ctx.r25.s64 = ctx.r25.s64 + -4;
	// bge 0x826af814
	if (!ctx.cr0.lt) goto loc_826AF814;
loc_826AF944:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AF948:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x82a4ea34
	__restgprlr_19(ctx, base);
	return;
loc_826AF958:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826af948
	goto loc_826AF948;
}

__attribute__((alias("__imp__sub_826AF960"))) PPC_WEAK_FUNC(sub_826AF960);
PPC_FUNC_IMPL(__imp__sub_826AF960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826AF968;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// addi r9,r11,-27300
	ctx.r9.s64 = ctx.r11.s64 + -27300;
	// lfs f0,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lis r7,-31949
	ctx.r7.s64 = -2093809664;
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f0,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f0,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f0,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f0,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lwz r6,68(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lfs f0,24000(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// lfs f13,-27300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f13.f64 = double(temp.f32);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// stfs f13,100(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lfs f12,-17820(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17820);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f13,32716(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32716);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,10652(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 10652);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,48(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// stfs f13,52(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// stfs f11,56(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// stfs f0,60(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// stfs f0,64(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// beq cr6,0x826afa38
	if (ctx.cr6.eq) goto loc_826AFA38;
	// stfs f12,40(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stfs f13,44(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stfs f11,48(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
loc_826AFA38:
	// stfs f13,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// bl 0x827e81c8
	ctx.lr = 0x826AFA4C;
	sub_827E81C8(ctx, base);
	// bl 0x824a0b58
	ctx.lr = 0x826AFA50;
	sub_824A0B58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lwz r11,5976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5976);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x827e81c8
	ctx.lr = 0x826AFA84;
	sub_827E81C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826afa94
	if (ctx.cr0.eq) goto loc_826AFA94;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x826afa98
	goto loc_826AFA98;
loc_826AFA94:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_826AFA98:
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AFAB0"))) PPC_WEAK_FUNC(sub_826AFAB0);
PPC_FUNC_IMPL(__imp__sub_826AFAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24032(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24032);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826afaf0
	if (!ctx.cr0.eq) goto loc_826AFAF0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,24032(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24032, ctx.r11.u32);
	// addi r3,r9,-24568
	ctx.r3.s64 = ctx.r9.s64 + -24568;
	// bl 0x82816528
	ctx.lr = 0x826AFAE8;
	sub_82816528(ctx, base);
	// stw r3,24028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24028, ctx.r3.u32);
	// b 0x826afaf4
	goto loc_826AFAF4;
loc_826AFAF0:
	// lwz r3,24028(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
loc_826AFAF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AFB08"))) PPC_WEAK_FUNC(sub_826AFB08);
PPC_FUNC_IMPL(__imp__sub_826AFB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826afb58
	ctx.lr = 0x826AFB28;
	sub_826AFB58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AFB3C;
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

__attribute__((alias("__imp__sub_826AFB58"))) PPC_WEAK_FUNC(sub_826AFB58);
PPC_FUNC_IMPL(__imp__sub_826AFB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,24036
	ctx.r31.s64 = ctx.r11.s64 + 24036;
	// lwz r11,24040(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24040);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826afba0
	if (!ctx.cr0.eq) goto loc_826AFBA0;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-24412
	ctx.r9.s64 = ctx.r9.s64 + -24412;
	// stw r11,24040(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24040, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28384
	ctx.r3.s64 = ctx.r11.s64 + 28384;
	// bl 0x82a4c758
	ctx.lr = 0x826AFBA0;
	sub_82A4C758(ctx, base);
loc_826AFBA0:
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

__attribute__((alias("__imp__sub_826AFBB8"))) PPC_WEAK_FUNC(sub_826AFBB8);
PPC_FUNC_IMPL(__imp__sub_826AFBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-24392
	ctx.r3.s64 = ctx.r11.s64 + -24392;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AFBC8"))) PPC_WEAK_FUNC(sub_826AFBC8);
PPC_FUNC_IMPL(__imp__sub_826AFBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826afc00
	if (ctx.cr6.eq) goto loc_826AFC00;
	// bl 0x826b03a0
	ctx.lr = 0x826AFBF0;
	sub_826B03A0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826afc00
	if (!ctx.cr6.eq) goto loc_826AFC00;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826afc0c
	goto loc_826AFC0C;
loc_826AFC00:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826aa1d0
	ctx.lr = 0x826AFC0C;
	sub_826AA1D0(ctx, base);
loc_826AFC0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AFC28"))) PPC_WEAK_FUNC(sub_826AFC28);
PPC_FUNC_IMPL(__imp__sub_826AFC28) {
	PPC_FUNC_PROLOGUE();
	// b 0x826b03a0
	sub_826B03A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AFC30"))) PPC_WEAK_FUNC(sub_826AFC30);
PPC_FUNC_IMPL(__imp__sub_826AFC30) {
	PPC_FUNC_PROLOGUE();
	// b 0x826aa7e0
	sub_826AA7E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AFC38"))) PPC_WEAK_FUNC(sub_826AFC38);
PPC_FUNC_IMPL(__imp__sub_826AFC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x82833108
	ctx.lr = 0x826AFC58;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826afc80
	if (ctx.cr0.eq) goto loc_826AFC80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826aa470
	ctx.lr = 0x826AFC6C;
	sub_826AA470(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24296
	ctx.r11.s64 = ctx.r11.s64 + -24296;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x826afc84
	goto loc_826AFC84;
loc_826AFC80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AFC84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AFCA0"))) PPC_WEAK_FUNC(sub_826AFCA0);
PPC_FUNC_IMPL(__imp__sub_826AFCA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826b03a0
	ctx.lr = 0x826AFCC0;
	sub_826B03A0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826afcd4
	if (ctx.cr6.eq) goto loc_826AFCD4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826aa238
	ctx.lr = 0x826AFCD4;
	sub_826AA238(ctx, base);
loc_826AFCD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AFCF0"))) PPC_WEAK_FUNC(sub_826AFCF0);
PPC_FUNC_IMPL(__imp__sub_826AFCF0) {
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
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r31,r11,-20720
	ctx.r31.s64 = ctx.r11.s64 + -20720;
	// lwz r11,10656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10656);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826aff58
	if (!ctx.cr6.eq) goto loc_826AFF58;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// addi r4,r11,-24364
	ctx.r4.s64 = ctx.r11.s64 + -24364;
	// bl 0x8233a258
	ctx.lr = 0x826AFD34;
	sub_8233A258(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lfs f30,17960(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17960);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,18524(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18524);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,18520(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18520);
	ctx.f13.f64 = double(temp.f32);
	// stfs f30,488(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 488, temp.u32);
	// stfs f31,492(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 492, temp.u32);
	// stfs f0,496(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 496, temp.u32);
	// stfs f31,500(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 500, temp.u32);
	// stfs f31,504(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 504, temp.u32);
	// stfs f13,508(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 508, temp.u32);
	// bl 0x823a1a18
	ctx.lr = 0x826AFD70;
	sub_823A1A18(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r3,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r3.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,-24348
	ctx.r4.s64 = ctx.r11.s64 + -24348;
	// bl 0x8233a258
	ctx.lr = 0x826AFD84;
	sub_8233A258(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f31,364(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// stfs f31,368(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// stfs f31,372(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// stfs f31,376(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// lfs f0,18516(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18516);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,360(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// stfs f30,380(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// bl 0x8239f8b8
	ctx.lr = 0x826AFDA8;
	sub_8239F8B8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r3,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r3.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-24340
	ctx.r4.s64 = ctx.r11.s64 + -24340;
	// bl 0x8233a258
	ctx.lr = 0x826AFDBC;
	sub_8233A258(ctx, base);
	// stfs f31,232(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f31,236(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f31,240(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f31,244(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f31,248(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f31,252(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// bl 0x823aecd0
	ctx.lr = 0x826AFDD8;
	sub_823AECD0(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r3,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24332
	ctx.r4.s64 = ctx.r11.s64 + -24332;
	// bl 0x8233a258
	ctx.lr = 0x826AFDEC;
	sub_8233A258(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lis r9,-31961
	ctx.r9.s64 = -2094596096;
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f0,912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,-23376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23376);
	ctx.f30.f64 = double(temp.f32);
	// lfs f13,-28800(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28800);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x823b4478
	ctx.lr = 0x826AFE20;
	sub_823B4478(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,-24320
	ctx.r4.s64 = ctx.r11.s64 + -24320;
	// bl 0x8233a258
	ctx.lr = 0x826AFE34;
	sub_8233A258(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f31,296(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f31,300(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// stfs f31,304(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// stfs f31,308(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// lfs f0,17848(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17848);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,312(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// stfs f0,316(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// bl 0x823b2f50
	ctx.lr = 0x826AFE58;
	sub_823B2F50(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r3,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r3.u32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r11,-24312
	ctx.r4.s64 = ctx.r11.s64 + -24312;
	// bl 0x8233a258
	ctx.lr = 0x826AFE6C;
	sub_8233A258(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// stfs f30,424(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// stfs f31,428(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 428, temp.u32);
	// stfs f31,436(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// stfs f31,440(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// lfs f0,-28788(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28788);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,432(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// stfs f30,444(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 444, temp.u32);
	// bl 0x823a4470
	ctx.lr = 0x826AFE90;
	sub_823A4470(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// stw r3,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r3.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,31560
	ctx.r4.s64 = ctx.r11.s64 + 31560;
	// bl 0x8233a258
	ctx.lr = 0x826AFEA4;
	sub_8233A258(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// bl 0x826b0268
	ctx.lr = 0x826AFED0;
	sub_826B0268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// bl 0x826b0268
	ctx.lr = 0x826AFEDC;
	sub_826B0268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// bl 0x826b0268
	ctx.lr = 0x826AFEE8;
	sub_826B0268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826b0268
	ctx.lr = 0x826AFEF4;
	sub_826B0268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x826b0268
	ctx.lr = 0x826AFF00;
	sub_826B0268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// bl 0x826b0268
	ctx.lr = 0x826AFF0C;
	sub_826B0268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x826b0268
	ctx.lr = 0x826AFF18;
	sub_826B0268(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,10656(r30)
	PPC_STORE_U32(ctx.r30.u32 + 10656, ctx.r11.u32);
	// bl 0x82333960
	ctx.lr = 0x826AFF28;
	sub_82333960(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82333960
	ctx.lr = 0x826AFF30;
	sub_82333960(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82333960
	ctx.lr = 0x826AFF38;
	sub_82333960(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x826AFF40;
	sub_82333960(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82333960
	ctx.lr = 0x826AFF48;
	sub_82333960(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82333960
	ctx.lr = 0x826AFF50;
	sub_82333960(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82333960
	ctx.lr = 0x826AFF58;
	sub_82333960(ctx, base);
loc_826AFF58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
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

__attribute__((alias("__imp__sub_826AFF80"))) PPC_WEAK_FUNC(sub_826AFF80);
PPC_FUNC_IMPL(__imp__sub_826AFF80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x826AFF88;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lis r22,-31949
	ctx.r22.s64 = -2093809664;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f0,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f0,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f0,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f0,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lwz r8,68(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lfs f0,24000(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// stw r24,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r24.u32);
	// stw r24,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r24.u32);
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x826B000C;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b0020
	if (ctx.cr0.eq) goto loc_826B0020;
	// bl 0x824a0a48
	ctx.lr = 0x826B0018;
	sub_824A0A48(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x826b0024
	goto loc_826B0024;
loc_826B0020:
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
loc_826B0024:
	// bl 0x826afcf0
	ctx.lr = 0x826B0028;
	sub_826AFCF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// lwz r26,16(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addic. r25,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r25.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble 0x826b0078
	if (!ctx.cr0.gt) goto loc_826B0078;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_826B0040:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r4,48(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B0060;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826b00b8
	if (!ctx.cr0.eq) goto loc_826B00B8;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,52
	ctx.r28.s64 = ctx.r28.s64 + 52;
	// cmpw cr6,r27,r25
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x826b0040
	if (ctx.cr6.lt) goto loc_826B0040;
loc_826B0078:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mulli r11,r26,52
	ctx.r11.s64 = ctx.r26.s64 * 52;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r11,-52
	ctx.r29.s64 = ctx.r11.s64 + -52;
loc_826B0088:
	// li r3,1808
	ctx.r3.s64 = 1808;
	// bl 0x82833108
	ctx.lr = 0x826B0090;
	sub_82833108(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x826b0114
	if (ctx.cr0.eq) goto loc_826B0114;
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x826B00A8;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b00c8
	if (ctx.cr0.eq) goto loc_826B00C8;
	// bl 0x824a0a48
	ctx.lr = 0x826B00B4;
	sub_824A0A48(ctx, base);
	// b 0x826b00cc
	goto loc_826B00CC;
loc_826B00B8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mulli r10,r27,52
	ctx.r10.s64 = ctx.r27.s64 * 52;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x826b0088
	goto loc_826B0088;
loc_826B00C8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_826B00CC:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// addi r8,r10,-11456
	ctx.r8.s64 = ctx.r10.s64 + -11456;
	// addi r4,r3,620
	ctx.r4.s64 = ctx.r3.s64 + 620;
	// lfs f3,30996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r29,36
	ctx.r11.s64 = ctx.r29.s64 + 36;
	// lfs f2,-11456(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11456);
	ctx.f2.f64 = double(temp.f32);
	// addi r10,r29,24
	ctx.r10.s64 = ctx.r29.s64 + 24;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f5,23752(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23752);
	ctx.f5.f64 = double(temp.f32);
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// lfs f4,-29356(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29356);
	ctx.f4.f64 = double(temp.f32);
	// bl 0x826b1720
	ctx.lr = 0x826B0110;
	sub_826B1720(ctx, base);
	// b 0x826b0118
	goto loc_826B0118;
loc_826B0114:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_826B0118:
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// stw r24,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r24.u32);
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B0130"))) PPC_WEAK_FUNC(sub_826B0130);
PPC_FUNC_IMPL(__imp__sub_826B0130) {
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
	// bl 0x827e81c8
	ctx.lr = 0x826B014C;
	sub_827E81C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b0174
	if (ctx.cr0.eq) goto loc_826B0174;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e81c8
	ctx.lr = 0x826B015C;
	sub_827E81C8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B016C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x826b0178
	goto loc_826B0178;
loc_826B0174:
	// li r30,0
	ctx.r30.s64 = 0;
loc_826B0178:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x826B018C;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b019c
	if (ctx.cr0.eq) goto loc_826B019C;
	// bl 0x824a0a48
	ctx.lr = 0x826B0198;
	sub_824A0A48(ctx, base);
	// b 0x826b01a0
	goto loc_826B01A0;
loc_826B019C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B01A0:
	// bl 0x82333a20
	ctx.lr = 0x826B01A4;
	sub_82333A20(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,24088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24088);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824f03c8
	ctx.lr = 0x826B01B8;
	sub_824F03C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826b01c8
	if (ctx.cr0.eq) goto loc_826B01C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826b01d4
	goto loc_826B01D4;
loc_826B01C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,2180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2180, ctx.r11.u32);
loc_826B01D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B01F0"))) PPC_WEAK_FUNC(sub_826B01F0);
PPC_FUNC_IMPL(__imp__sub_826B01F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826B01F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// bl 0x827e81c8
	ctx.lr = 0x826B0210;
	sub_827E81C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b0234
	if (ctx.cr0.eq) goto loc_826B0234;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e81c8
	ctx.lr = 0x826B0220;
	sub_827E81C8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B0230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826b0238
	goto loc_826B0238;
loc_826B0234:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B0238:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b0248
	if (ctx.cr6.eq) goto loc_826B0248;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2180, ctx.r11.u32);
loc_826B0248:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f1d68
	ctx.lr = 0x826B025C;
	sub_827F1D68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B0268"))) PPC_WEAK_FUNC(sub_826B0268);
PPC_FUNC_IMPL(__imp__sub_826B0268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826B0270;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r11,-20720
	ctx.r29.s64 = ctx.r11.s64 + -20720;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x826B0294;
	sub_82332D50(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mulli r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 * 52;
	// add. r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826b02e8
	if (ctx.cr0.eq) goto loc_826B02E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823339b8
	ctx.lr = 0x826B02B0;
	sub_823339B8(ctx, base);
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
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_826B02E8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B02F8"))) PPC_WEAK_FUNC(sub_826B02F8);
PPC_FUNC_IMPL(__imp__sub_826B02F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24016(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24016);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826b0338
	if (!ctx.cr0.eq) goto loc_826B0338;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,24016(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24016, ctx.r11.u32);
	// addi r3,r9,-24392
	ctx.r3.s64 = ctx.r9.s64 + -24392;
	// bl 0x82816528
	ctx.lr = 0x826B0330;
	sub_82816528(ctx, base);
	// stw r3,24012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24012, ctx.r3.u32);
	// b 0x826b033c
	goto loc_826B033C;
loc_826B0338:
	// lwz r3,24012(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24012);
loc_826B033C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B0350"))) PPC_WEAK_FUNC(sub_826B0350);
PPC_FUNC_IMPL(__imp__sub_826B0350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826b03a0
	ctx.lr = 0x826B0370;
	sub_826B03A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B0384;
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

__attribute__((alias("__imp__sub_826B03A0"))) PPC_WEAK_FUNC(sub_826B03A0);
PPC_FUNC_IMPL(__imp__sub_826B03A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,24020
	ctx.r31.s64 = ctx.r11.s64 + 24020;
	// lwz r11,24024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24024);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826b03e8
	if (!ctx.cr0.eq) goto loc_826B03E8;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-24172
	ctx.r9.s64 = ctx.r9.s64 + -24172;
	// stw r11,24024(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24024, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// bl 0x82a4c758
	ctx.lr = 0x826B03E8;
	sub_82A4C758(ctx, base);
loc_826B03E8:
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

__attribute__((alias("__imp__sub_826B0400"))) PPC_WEAK_FUNC(sub_826B0400);
PPC_FUNC_IMPL(__imp__sub_826B0400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-24152
	ctx.r3.s64 = ctx.r11.s64 + -24152;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B0410"))) PPC_WEAK_FUNC(sub_826B0410);
PPC_FUNC_IMPL(__imp__sub_826B0410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826b0448
	if (ctx.cr6.eq) goto loc_826B0448;
	// bl 0x826b07c0
	ctx.lr = 0x826B0438;
	sub_826B07C0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826b0448
	if (!ctx.cr6.eq) goto loc_826B0448;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826b0454
	goto loc_826B0454;
loc_826B0448:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826aa1d0
	ctx.lr = 0x826B0454;
	sub_826AA1D0(ctx, base);
loc_826B0454:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B0470"))) PPC_WEAK_FUNC(sub_826B0470);
PPC_FUNC_IMPL(__imp__sub_826B0470) {
	PPC_FUNC_PROLOGUE();
	// b 0x826b07c0
	sub_826B07C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B0478"))) PPC_WEAK_FUNC(sub_826B0478);
PPC_FUNC_IMPL(__imp__sub_826B0478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82833108
	ctx.lr = 0x826B0498;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826b04d8
	if (ctx.cr0.eq) goto loc_826B04D8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826aa470
	ctx.lr = 0x826B04AC;
	sub_826AA470(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24112
	ctx.r11.s64 = ctx.r11.s64 + -24112;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x826b04dc
	goto loc_826B04DC;
loc_826B04D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B04DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B04F8"))) PPC_WEAK_FUNC(sub_826B04F8);
PPC_FUNC_IMPL(__imp__sub_826B04F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826b07c0
	ctx.lr = 0x826B0518;
	sub_826B07C0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826b052c
	if (ctx.cr6.eq) goto loc_826B052C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826aa238
	ctx.lr = 0x826B052C;
	sub_826AA238(ctx, base);
loc_826B052C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B0548"))) PPC_WEAK_FUNC(sub_826B0548);
PPC_FUNC_IMPL(__imp__sub_826B0548) {
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
	// bl 0x827f1c68
	ctx.lr = 0x826B0568;
	sub_827F1C68(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// addi r10,r10,-24112
	ctx.r10.s64 = ctx.r10.s64 + -24112;
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f13,20416(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20416);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,24000(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,904(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stfs f12,56(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// beq cr6,0x826b05e8
	if (ctx.cr6.eq) goto loc_826B05E8;
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f12,48(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
loc_826B05E8:
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

__attribute__((alias("__imp__sub_826B0608"))) PPC_WEAK_FUNC(sub_826B0608);
PPC_FUNC_IMPL(__imp__sub_826B0608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826B0610;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// lfs f0,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1808
	ctx.r3.s64 = 1808;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f0,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f0,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f0,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f0,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lfs f0,24000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// bl 0x82833108
	ctx.lr = 0x826B0688;
	sub_82833108(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x826b06e4
	if (ctx.cr0.eq) goto loc_826B06E4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827e8210
	ctx.lr = 0x826B0698;
	sub_827E8210(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r8,-31962
	ctx.r8.s64 = -2094661632;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r7,-31962
	ctx.r7.s64 = -2094661632;
	// lfs f4,30996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r8,-20684
	ctx.r11.s64 = ctx.r8.s64 + -20684;
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f5,23720(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23720);
	ctx.f5.f64 = double(temp.f32);
	// addi r10,r7,-20696
	ctx.r10.s64 = ctx.r7.s64 + -20696;
	// lfs f2,-25080(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25080);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x826b1720
	ctx.lr = 0x826B06E0;
	sub_826B1720(ctx, base);
	// b 0x826b06e8
	goto loc_826B06E8;
loc_826B06E4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_826B06E8:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r27,1772(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1772, ctx.r27.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r11,10660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10660);
	// lfs f0,32752(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32752);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1776(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1776, temp.u32);
	// stw r11,1780(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1780, ctx.r11.u32);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B0718"))) PPC_WEAK_FUNC(sub_826B0718);
PPC_FUNC_IMPL(__imp__sub_826B0718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24000(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24000);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826b0758
	if (!ctx.cr0.eq) goto loc_826B0758;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,24000(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24000, ctx.r11.u32);
	// addi r3,r9,-24152
	ctx.r3.s64 = ctx.r9.s64 + -24152;
	// bl 0x82816528
	ctx.lr = 0x826B0750;
	sub_82816528(ctx, base);
	// stw r3,23996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23996, ctx.r3.u32);
	// b 0x826b075c
	goto loc_826B075C;
loc_826B0758:
	// lwz r3,23996(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23996);
loc_826B075C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B0770"))) PPC_WEAK_FUNC(sub_826B0770);
PPC_FUNC_IMPL(__imp__sub_826B0770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826b07c0
	ctx.lr = 0x826B0790;
	sub_826B07C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B07A4;
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

__attribute__((alias("__imp__sub_826B07C0"))) PPC_WEAK_FUNC(sub_826B07C0);
PPC_FUNC_IMPL(__imp__sub_826B07C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,24004
	ctx.r31.s64 = ctx.r11.s64 + 24004;
	// lwz r11,24008(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24008);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826b0808
	if (!ctx.cr0.eq) goto loc_826B0808;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-23988
	ctx.r9.s64 = ctx.r9.s64 + -23988;
	// stw r11,24008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24008, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28568
	ctx.r3.s64 = ctx.r11.s64 + 28568;
	// bl 0x82a4c758
	ctx.lr = 0x826B0808;
	sub_82A4C758(ctx, base);
loc_826B0808:
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

__attribute__((alias("__imp__sub_826B0820"))) PPC_WEAK_FUNC(sub_826B0820);
PPC_FUNC_IMPL(__imp__sub_826B0820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-23968
	ctx.r3.s64 = ctx.r11.s64 + -23968;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B0830"))) PPC_WEAK_FUNC(sub_826B0830);
PPC_FUNC_IMPL(__imp__sub_826B0830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826b0868
	if (ctx.cr6.eq) goto loc_826B0868;
	// bl 0x826b0e18
	ctx.lr = 0x826B0858;
	sub_826B0E18(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826b0868
	if (!ctx.cr6.eq) goto loc_826B0868;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826b0874
	goto loc_826B0874;
loc_826B0868:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826aba88
	ctx.lr = 0x826B0874;
	sub_826ABA88(ctx, base);
loc_826B0874:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B0890"))) PPC_WEAK_FUNC(sub_826B0890);
PPC_FUNC_IMPL(__imp__sub_826B0890) {
	PPC_FUNC_PROLOGUE();
	// b 0x826b0e18
	sub_826B0E18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B0898"))) PPC_WEAK_FUNC(sub_826B0898);
PPC_FUNC_IMPL(__imp__sub_826B0898) {
	PPC_FUNC_PROLOGUE();
	// b 0x826abc90
	sub_826ABC90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B08A0"))) PPC_WEAK_FUNC(sub_826B08A0);
PPC_FUNC_IMPL(__imp__sub_826B08A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82833108
	ctx.lr = 0x826B08C0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826b08f0
	if (ctx.cr0.eq) goto loc_826B08F0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825da6c0
	ctx.lr = 0x826B08D4;
	sub_825DA6C0(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-23928
	ctx.r11.s64 = ctx.r11.s64 + -23928;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x826b08f4
	goto loc_826B08F4;
loc_826B08F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B08F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B0910"))) PPC_WEAK_FUNC(sub_826B0910);
PPC_FUNC_IMPL(__imp__sub_826B0910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826b0e18
	ctx.lr = 0x826B0930;
	sub_826B0E18(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826b0944
	if (ctx.cr6.eq) goto loc_826B0944;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826abae8
	ctx.lr = 0x826B0944;
	sub_826ABAE8(ctx, base);
loc_826B0944:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B0960"))) PPC_WEAK_FUNC(sub_826B0960);
PPC_FUNC_IMPL(__imp__sub_826B0960) {
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
	// bl 0x827e8098
	ctx.lr = 0x826B0978;
	sub_827E8098(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r9,r9,-23928
	ctx.r9.s64 = ctx.r9.s64 + -23928;
	// lfs f11,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f11.f64 = double(temp.f32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lbz r11,10668(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10668);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826b09a4
	if (!ctx.cr0.eq) goto loc_826B09A4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f11,24724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24724);
	ctx.f11.f64 = double(temp.f32);
loc_826B09A4:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// stfs f11,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f13,32668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32668);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,23664(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23664);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,24000(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f12,56(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// beq cr6,0x826b0a00
	if (ctx.cr6.eq) goto loc_826B0A00;
	// stfs f11,40(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f13,44(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f12,48(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
loc_826B0A00:
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

__attribute__((alias("__imp__sub_826B0A18"))) PPC_WEAK_FUNC(sub_826B0A18);
PPC_FUNC_IMPL(__imp__sub_826B0A18) {
	PPC_FUNC_PROLOGUE();
	// b 0x827f3268
	sub_827F3268(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B0A20"))) PPC_WEAK_FUNC(sub_826B0A20);
PPC_FUNC_IMPL(__imp__sub_826B0A20) {
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
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// lfs f0,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// lfs f0,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// lfs f0,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// lfs f0,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// lfs f0,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// lfs f0,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lfs f0,24000(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// lfs f13,-11456(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11456);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// stfs f13,100(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 100, temp.u32);
	// stw r8,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r8.u32);
	// stfs f0,92(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 92, temp.u32);
	// stfs f0,96(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 96, temp.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// stw r11,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// bl 0x827e8210
	ctx.lr = 0x826B0AB4;
	sub_827E8210(ctx, base);
	// bl 0x824a0aa0
	ctx.lr = 0x826B0AB8;
	sub_824A0AA0(ctx, base);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,5976(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5976);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B0AF8"))) PPC_WEAK_FUNC(sub_826B0AF8);
PPC_FUNC_IMPL(__imp__sub_826B0AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826B0B00;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x827e8210
	ctx.lr = 0x826B0B1C;
	sub_827E8210(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x826b0b2c
	if (!ctx.cr0.eq) goto loc_826B0B2C;
loc_826B0B24:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826b0d5c
	goto loc_826B0D5C;
loc_826B0B2C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824a0aa0
	ctx.lr = 0x826B0B34;
	sub_824A0AA0(ctx, base);
	// lwz r11,5480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5480);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x826b0b24
	if (!ctx.cr6.eq) goto loc_826B0B24;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,-27328
	ctx.r28.s64 = ctx.r11.s64 + -27328;
	// lfs f0,-27328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27328);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16540(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16540);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x827dbeb0
	ctx.lr = 0x826B0B68;
	sub_827DBEB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827e81c8
	ctx.lr = 0x826B0B70;
	sub_827E81C8(ctx, base);
	// addi r11,r3,620
	ctx.r11.s64 = ctx.r3.s64 + 620;
	// lfs f0,620(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,624(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r29,620
	ctx.r31.s64 = ctx.r29.s64 + 620;
	// lfs f12,628(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x827e81c8
	ctx.lr = 0x826B0BB0;
	sub_827E81C8(ctx, base);
	// addi r11,r3,620
	ctx.r11.s64 = ctx.r3.s64 + 620;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f31,16668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82332e18
	ctx.lr = 0x826B0BF8;
	sub_82332E18(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82332e18
	ctx.lr = 0x826B0C04;
	sub_82332E18(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lfs f12,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,10664(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10664);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f10,f9,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x826b0b24
	if (ctx.cr6.gt) goto loc_826B0B24;
	// lwz r11,656(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 656);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,660(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 660);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,664(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 664);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x82817bb8
	ctx.lr = 0x826B0C6C;
	sub_82817BB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,23700(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23700);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f31,f11,f13
	ctx.f31.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fadds f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// bl 0x827e81c8
	ctx.lr = 0x826B0CA0;
	sub_827E81C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f29,628(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x827e81c8
	ctx.lr = 0x826B0CB0;
	sub_827E81C8(ctx, base);
	// addi r11,r3,620
	ctx.r11.s64 = ctx.r3.s64 + 620;
	// lfs f0,2684(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 2684);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x826b0b24
	if (ctx.cr6.gt) goto loc_826B0B24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827e81c8
	ctx.lr = 0x826B0CF0;
	sub_827E81C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b0d14
	if (ctx.cr0.eq) goto loc_826B0D14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827e81c8
	ctx.lr = 0x826B0D00;
	sub_827E81C8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B0D10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826b0d18
	goto loc_826B0D18;
loc_826B0D14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B0D18:
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,-476(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -476);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824f04c8
	ctx.lr = 0x826B0D24;
	sub_824F04C8(ctx, base);
	// cmplwi cr6,r3,100
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 100, ctx.xer);
	// bgt cr6,0x826b0b24
	if (ctx.cr6.gt) goto loc_826B0B24;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lbz r11,10668(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10668);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x826b0d44
	if (!ctx.cr0.eq) goto loc_826B0D44;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826B0D44:
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_826B0D5C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B0D70"))) PPC_WEAK_FUNC(sub_826B0D70);
PPC_FUNC_IMPL(__imp__sub_826B0D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,23984(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23984);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826b0db0
	if (!ctx.cr0.eq) goto loc_826B0DB0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,23984(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23984, ctx.r11.u32);
	// addi r3,r9,-23968
	ctx.r3.s64 = ctx.r9.s64 + -23968;
	// bl 0x82816528
	ctx.lr = 0x826B0DA8;
	sub_82816528(ctx, base);
	// stw r3,23980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23980, ctx.r3.u32);
	// b 0x826b0db4
	goto loc_826B0DB4;
loc_826B0DB0:
	// lwz r3,23980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23980);
loc_826B0DB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B0DC8"))) PPC_WEAK_FUNC(sub_826B0DC8);
PPC_FUNC_IMPL(__imp__sub_826B0DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826b0e18
	ctx.lr = 0x826B0DE8;
	sub_826B0E18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B0DFC;
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

__attribute__((alias("__imp__sub_826B0E18"))) PPC_WEAK_FUNC(sub_826B0E18);
PPC_FUNC_IMPL(__imp__sub_826B0E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,23988
	ctx.r31.s64 = ctx.r11.s64 + 23988;
	// lwz r11,23992(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23992);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826b0e60
	if (!ctx.cr0.eq) goto loc_826B0E60;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-23804
	ctx.r9.s64 = ctx.r9.s64 + -23804;
	// stw r11,23992(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23992, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28592
	ctx.r3.s64 = ctx.r11.s64 + 28592;
	// bl 0x82a4c758
	ctx.lr = 0x826B0E60;
	sub_82A4C758(ctx, base);
loc_826B0E60:
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

__attribute__((alias("__imp__sub_826B0E78"))) PPC_WEAK_FUNC(sub_826B0E78);
PPC_FUNC_IMPL(__imp__sub_826B0E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-23784
	ctx.r3.s64 = ctx.r11.s64 + -23784;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B0E88"))) PPC_WEAK_FUNC(sub_826B0E88);
PPC_FUNC_IMPL(__imp__sub_826B0E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826b0ec0
	if (ctx.cr6.eq) goto loc_826B0EC0;
	// bl 0x826b1328
	ctx.lr = 0x826B0EB0;
	sub_826B1328(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826b0ec0
	if (!ctx.cr6.eq) goto loc_826B0EC0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826b0ecc
	goto loc_826B0ECC;
loc_826B0EC0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826aa1d0
	ctx.lr = 0x826B0ECC;
	sub_826AA1D0(ctx, base);
loc_826B0ECC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B0EE8"))) PPC_WEAK_FUNC(sub_826B0EE8);
PPC_FUNC_IMPL(__imp__sub_826B0EE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x826b1328
	sub_826B1328(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B0EF0"))) PPC_WEAK_FUNC(sub_826B0EF0);
PPC_FUNC_IMPL(__imp__sub_826B0EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x82833108
	ctx.lr = 0x826B0F10;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826b0f38
	if (ctx.cr0.eq) goto loc_826B0F38;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826aa470
	ctx.lr = 0x826B0F24;
	sub_826AA470(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-23752
	ctx.r11.s64 = ctx.r11.s64 + -23752;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x826b0f3c
	goto loc_826B0F3C;
loc_826B0F38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B0F3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B0F58"))) PPC_WEAK_FUNC(sub_826B0F58);
PPC_FUNC_IMPL(__imp__sub_826B0F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826b1328
	ctx.lr = 0x826B0F78;
	sub_826B1328(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826b0f8c
	if (ctx.cr6.eq) goto loc_826B0F8C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826aa238
	ctx.lr = 0x826B0F8C;
	sub_826AA238(ctx, base);
loc_826B0F8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B0FA8"))) PPC_WEAK_FUNC(sub_826B0FA8);
PPC_FUNC_IMPL(__imp__sub_826B0FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x826B0FB0;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// lfs f0,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1808
	ctx.r3.s64 = 1808;
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// lfs f0,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// lfs f0,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// lfs f0,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// lfs f0,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// lfs f0,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// lfs f0,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lfs f31,24000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f31.f64 = double(temp.f32);
	// stw r10,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r10.u32);
	// stfs f31,84(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// stw r26,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r26.u32);
	// stw r29,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r29.u32);
	// stw r29,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r29.u32);
	// stw r29,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r29.u32);
	// bl 0x82833108
	ctx.lr = 0x826B102C;
	sub_82833108(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r27,r11,20416
	ctx.r27.s64 = ctx.r11.s64 + 20416;
	// beq 0x826b1088
	if (ctx.cr0.eq) goto loc_826B1088;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r25,r11,-20648
	ctx.r25.s64 = ctx.r11.s64 + -20648;
	// addi r24,r10,13744
	ctx.r24.s64 = ctx.r10.s64 + 13744;
	// bl 0x827e8210
	ctx.lr = 0x826B1054;
	sub_827E8210(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f2,20040(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 20040);
	ctx.f2.f64 = double(temp.f32);
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lfs f4,30996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,23752(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23752);
	ctx.f5.f64 = double(temp.f32);
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// bl 0x826b1848
	ctx.lr = 0x826B1084;
	sub_826B1848(ctx, base);
	// b 0x826b108c
	goto loc_826B108C;
loc_826B1088:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_826B108C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r26,1772(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1772, ctx.r26.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r11,10672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10672);
	// lfs f13,32752(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32752);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1776(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1776, temp.u32);
	// lfs f13,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,1780(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1780, ctx.r11.u32);
	// stw r29,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r29.u32);
	// stw r3,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r3.u32);
	// stw r29,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r29.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f31,52(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f31,60(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f31,64(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// beq cr6,0x826b1104
	if (ctx.cr6.eq) goto loc_826B1104;
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f31,44(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f13,48(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f31,56(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
loc_826B1104:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B1110"))) PPC_WEAK_FUNC(sub_826B1110);
PPC_FUNC_IMPL(__imp__sub_826B1110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826B1118;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,1408(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1408);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,16
	ctx.r11.s64 = 16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lfs f31,468(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 468);
	ctx.f31.f64 = double(temp.f32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// lfs f30,472(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 472);
	ctx.f30.f64 = double(temp.f32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// bl 0x827dbf38
	ctx.lr = 0x826B1178;
	sub_827DBF38(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lfs f3,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82819050
	ctx.lr = 0x826B1194;
	sub_82819050(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8281a5a8
	ctx.lr = 0x826B11A0;
	sub_8281A5A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827e8210
	ctx.lr = 0x826B11A8;
	sub_827E8210(ctx, base);
	// bl 0x829bed50
	ctx.lr = 0x826B11AC;
	sub_829BED50(ctx, base);
	// addi r4,r3,368
	ctx.r4.s64 = ctx.r3.s64 + 368;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826b1388
	ctx.lr = 0x826B11B8;
	sub_826B1388(ctx, base);
	// lfs f10,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f8,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f9,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f12,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f9,f8
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// lfs f13,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fadds f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f0,30996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmuls f12,f7,f0
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmuls f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f10,f8,f0
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x8281a320
	ctx.lr = 0x826B1248;
	sub_8281A320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826b1274
	if (!ctx.cr0.eq) goto loc_826B1274;
loc_826B1250:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8243c0d0
	ctx.lr = 0x826B1258;
	sub_8243C0D0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8243c0d0
	ctx.lr = 0x826B1260;
	sub_8243C0D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
loc_826B1274:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x826b1250
	goto loc_826B1250;
}

__attribute__((alias("__imp__sub_826B1280"))) PPC_WEAK_FUNC(sub_826B1280);
PPC_FUNC_IMPL(__imp__sub_826B1280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,23968(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23968);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826b12c0
	if (!ctx.cr0.eq) goto loc_826B12C0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,23968(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23968, ctx.r11.u32);
	// addi r3,r9,-23784
	ctx.r3.s64 = ctx.r9.s64 + -23784;
	// bl 0x82816528
	ctx.lr = 0x826B12B8;
	sub_82816528(ctx, base);
	// stw r3,23964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23964, ctx.r3.u32);
	// b 0x826b12c4
	goto loc_826B12C4;
loc_826B12C0:
	// lwz r3,23964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23964);
loc_826B12C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B12D8"))) PPC_WEAK_FUNC(sub_826B12D8);
PPC_FUNC_IMPL(__imp__sub_826B12D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826b1328
	ctx.lr = 0x826B12F8;
	sub_826B1328(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B130C;
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

__attribute__((alias("__imp__sub_826B1328"))) PPC_WEAK_FUNC(sub_826B1328);
PPC_FUNC_IMPL(__imp__sub_826B1328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,23972
	ctx.r31.s64 = ctx.r11.s64 + 23972;
	// lwz r11,23976(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23976);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826b1370
	if (!ctx.cr0.eq) goto loc_826B1370;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-23628
	ctx.r9.s64 = ctx.r9.s64 + -23628;
	// stw r11,23976(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23976, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28616
	ctx.r3.s64 = ctx.r11.s64 + 28616;
	// bl 0x82a4c758
	ctx.lr = 0x826B1370;
	sub_82A4C758(ctx, base);
loc_826B1370:
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

__attribute__((alias("__imp__sub_826B1388"))) PPC_WEAK_FUNC(sub_826B1388);
PPC_FUNC_IMPL(__imp__sub_826B1388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f10,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f7,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fadds f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fsubs f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fsubs f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stb r9,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, ctx.r9.u8);
	// lfs f9,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lwz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lfs f8,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fadds f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f11,-8(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f10,-32(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lwz r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stfs f9,-28(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// lwz r9,-32(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stfs f12,-24(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// lwz r8,-28(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r7,-24(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// lwz r5,-12(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// stw r7,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B1420"))) PPC_WEAK_FUNC(sub_826B1420);
PPC_FUNC_IMPL(__imp__sub_826B1420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-23608
	ctx.r3.s64 = ctx.r11.s64 + -23608;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B1430"))) PPC_WEAK_FUNC(sub_826B1430);
PPC_FUNC_IMPL(__imp__sub_826B1430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826b1468
	if (ctx.cr6.eq) goto loc_826B1468;
	// bl 0x826b2518
	ctx.lr = 0x826B1458;
	sub_826B2518(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826b1468
	if (!ctx.cr6.eq) goto loc_826B1468;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826b1474
	goto loc_826B1474;
loc_826B1468:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82699840
	ctx.lr = 0x826B1474;
	sub_82699840(ctx, base);
loc_826B1474:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B1490"))) PPC_WEAK_FUNC(sub_826B1490);
PPC_FUNC_IMPL(__imp__sub_826B1490) {
	PPC_FUNC_PROLOGUE();
	// b 0x826b2518
	sub_826B2518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B1498"))) PPC_WEAK_FUNC(sub_826B1498);
PPC_FUNC_IMPL(__imp__sub_826B1498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1808
	ctx.r3.s64 = 1808;
	// bl 0x82833108
	ctx.lr = 0x826B14B4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b14c8
	if (ctx.cr0.eq) goto loc_826B14C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826b1540
	ctx.lr = 0x826B14C4;
	sub_826B1540(ctx, base);
	// b 0x826b14cc
	goto loc_826B14CC;
loc_826B14C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B14CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B14E0"))) PPC_WEAK_FUNC(sub_826B14E0);
PPC_FUNC_IMPL(__imp__sub_826B14E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826b2518
	ctx.lr = 0x826B1500;
	sub_826B2518(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826b1510
	if (!ctx.cr6.eq) goto loc_826B1510;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826b1528
	goto loc_826B1528;
loc_826B1510:
	// bl 0x825873f8
	ctx.lr = 0x826B1514;
	sub_825873F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826b1528
	if (ctx.cr6.eq) goto loc_826B1528;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826997d0
	ctx.lr = 0x826B1528;
	sub_826997D0(ctx, base);
loc_826B1528:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B1540"))) PPC_WEAK_FUNC(sub_826B1540);
PPC_FUNC_IMPL(__imp__sub_826B1540) {
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
	// bl 0x82699938
	ctx.lr = 0x826B1560;
	sub_82699938(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// addi r11,r11,-23576
	ctx.r11.s64 = ctx.r11.s64 + -23576;
	// addi r10,r10,-22464
	ctx.r10.s64 = ctx.r10.s64 + -22464;
	// addi r9,r9,8616
	ctx.r9.s64 = ctx.r9.s64 + 8616;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1616);
	// stw r11,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r11.u32);
	// lfs f0,1620(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1620);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1620(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1620, temp.u32);
	// lfs f0,1624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1624);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1624(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1624, temp.u32);
	// lfs f0,1628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1628);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1628, temp.u32);
	// lfs f0,1632(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1632);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1632(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1632, temp.u32);
	// lfs f0,1636(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1636);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1636(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1636, temp.u32);
	// lfs f0,1640(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1640);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1640(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1640, temp.u32);
	// lfs f0,1644(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1644);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1644(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1644, temp.u32);
	// lwz r11,1648(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1648);
	// stw r11,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r11.u32);
	// lwz r11,1652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1652);
	// stw r11,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r11.u32);
	// lwz r11,1656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1656);
	// stw r11,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r11.u32);
	// lwz r11,1660(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1660);
	// stw r11,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r11.u32);
	// lwz r11,1664(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1664);
	// stw r11,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r11.u32);
	// lwz r11,1668(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1668);
	// stw r11,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r11.u32);
	// lwz r11,1672(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1672);
	// stw r11,1672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1672, ctx.r11.u32);
	// lwz r11,1676(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1676);
	// stw r11,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r11.u32);
	// lwz r11,1680(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1680);
	// stw r11,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r11.u32);
	// lwz r11,1684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1684);
	// stw r11,1684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1684, ctx.r11.u32);
	// lwz r11,1688(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1688);
	// stw r11,1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1688, ctx.r11.u32);
	// lwz r11,1692(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1692);
	// stw r11,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r11.u32);
	// lwz r11,1696(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1696);
	// stw r11,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r11.u32);
	// lwz r11,1700(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1700);
	// stw r11,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r11.u32);
	// lwz r11,1704(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1704);
	// stw r11,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r11.u32);
	// lwz r11,1708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1708);
	// stw r11,1708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1708, ctx.r11.u32);
	// lwz r11,1712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// stw r11,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r11.u32);
	// lwz r11,1716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1716);
	// stw r11,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r11.u32);
	// lwz r11,1720(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1720);
	// stw r11,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r11.u32);
	// lwz r11,1724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1724);
	// stw r11,1724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1724, ctx.r11.u32);
	// lwz r11,1728(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1728);
	// stw r11,1728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1728, ctx.r11.u32);
	// lwz r11,1732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1732);
	// stw r11,1732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1732, ctx.r11.u32);
	// lwz r11,1736(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1736);
	// stw r11,1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1736, ctx.r11.u32);
	// lwz r11,1740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// stw r11,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r11.u32);
	// lwz r11,1744(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1744);
	// stw r11,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r11.u32);
	// lwz r11,1748(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1748);
	// stw r11,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r11.u32);
	// lwz r11,1752(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1752);
	// stw r11,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1756(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1756);
	// stw r11,1756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1756, ctx.r11.u32);
	// lwz r11,1760(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1760);
	// stw r11,1760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1760, ctx.r11.u32);
	// lwz r11,1764(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1764);
	// stw r11,1764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1764, ctx.r11.u32);
	// lfs f0,1768(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1768);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1768(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1768, temp.u32);
	// lwz r11,1772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1772);
	// stw r11,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r11.u32);
	// lfs f0,1776(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1776);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1776(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1776, temp.u32);
	// lwz r11,1780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1780);
	// stw r11,1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1780, ctx.r11.u32);
	// lfs f0,1784(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1784);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1784(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1784, temp.u32);
	// lwz r11,1788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1788);
	// stw r11,1788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1788, ctx.r11.u32);
	// lwz r11,1792(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1792);
	// stw r11,1792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1792, ctx.r11.u32);
	// lwz r11,1796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1796);
	// stw r11,1796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1796, ctx.r11.u32);
	// lwz r11,1800(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1800);
	// stw r11,1800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1800, ctx.r11.u32);
	// lwz r11,1804(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1804);
	// stw r11,1804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1804, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B1720"))) PPC_WEAK_FUNC(sub_826B1720);
PPC_FUNC_IMPL(__imp__sub_826B1720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826B1728;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82a61744
	ctx.lr = 0x826B1730;
	__savefpr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// fmr f27,f5
	ctx.f27.f64 = ctx.f5.f64;
	// bl 0x827d73c0
	ctx.lr = 0x826B1758;
	sub_827D73C0(ctx, base);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stfs f31,1632(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1632, temp.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f30,1636(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1636, temp.u32);
	// addi r9,r9,-23576
	ctx.r9.s64 = ctx.r9.s64 + -23576;
	// stfs f29,1640(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1640, temp.u32);
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// stfs f28,1644(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1644, temp.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-32218
	ctx.r7.s64 = -2111438848;
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// lwz r3,260(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r8,-22464
	ctx.r11.s64 = ctx.r8.s64 + -22464;
	// addi r8,r7,8616
	ctx.r8.s64 = ctx.r7.s64 + 8616;
	// stfs f0,1620(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1620, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,1624(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1624, temp.u32);
	// stfs f0,1628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1628, temp.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// lfs f0,24000(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r10.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r7,252(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r9,1672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1672, ctx.r9.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r9,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r9.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r9,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,1684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1684, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1688, ctx.r9.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stfs f27,1768(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1768, temp.u32);
	// stfs f0,1784(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1784, temp.u32);
	// stw r11,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r11.u32);
	// stw r10,1708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1708, ctx.r10.u32);
	// stw r7,1788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1788, ctx.r7.u32);
	// stw r3,1792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1792, ctx.r3.u32);
	// stw r8,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r8.u32);
	// beq cr6,0x826b1830
	if (ctx.cr6.eq) goto loc_826B1830;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x829bd3a8
	ctx.lr = 0x826B1830;
	sub_829BD3A8(ctx, base);
loc_826B1830:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82a61790
	ctx.lr = 0x826B1840;
	__restfpr_27(ctx, base);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B1848"))) PPC_WEAK_FUNC(sub_826B1848);
PPC_FUNC_IMPL(__imp__sub_826B1848) {
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
	// bl 0x827d73c0
	ctx.lr = 0x826B1868;
	sub_827D73C0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32218
	ctx.r6.s64 = -2111438848;
	// lfs f13,30996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lfs f12,-25080(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25080);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r8,-23576
	ctx.r10.s64 = ctx.r8.s64 + -23576;
	// addi r9,r7,-22464
	ctx.r9.s64 = ctx.r7.s64 + -22464;
	// stfs f13,1632(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1632, temp.u32);
	// addi r8,r6,8616
	ctx.r8.s64 = ctx.r6.s64 + 8616;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f12,1636(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1636, temp.u32);
	// stfs f13,1640(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1640, temp.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stfs f13,1644(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1644, temp.u32);
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// stw r7,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r7.u32);
	// stfs f0,1620(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1620, temp.u32);
	// stfs f0,1624(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1624, temp.u32);
	// addi r10,r11,13744
	ctx.r10.s64 = ctx.r11.s64 + 13744;
	// stfs f0,1628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1628, temp.u32);
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// addi r7,r9,-20648
	ctx.r7.s64 = ctx.r9.s64 + -20648;
	// lis r6,-31963
	ctx.r6.s64 = -2094727168;
	// lwz r11,13744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13744);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r11,1672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1672, ctx.r11.u32);
	// addi r11,r31,1696
	ctx.r11.s64 = ctx.r31.s64 + 1696;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f13,23752(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23752);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r11.u32);
	// lfs f12,24000(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24000);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r11.u32);
	// lwz r11,-20648(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -20648);
	// stw r11,1684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1684, ctx.r11.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1688, ctx.r11.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r11.u32);
	// stfs f0,1696(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1696, temp.u32);
	// stfs f0,1700(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1700, temp.u32);
	// stfs f0,1704(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1704, temp.u32);
	// stw r30,1708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1708, ctx.r30.u32);
	// stfs f13,1768(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1768, temp.u32);
	// stw r5,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r5.u32);
	// stfs f12,1784(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1784, temp.u32);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x829bd3a8
	ctx.lr = 0x826B1948;
	sub_829BD3A8(ctx, base);
	// lwz r11,1708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// lwz r10,620(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r10.u32);
	// lwz r10,624(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// stw r10,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r10.u32);
	// lwz r11,628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// stw r11,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B1980"))) PPC_WEAK_FUNC(sub_826B1980);
PPC_FUNC_IMPL(__imp__sub_826B1980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826B1988;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r11,1708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b19c0
	if (ctx.cr6.eq) goto loc_826B19C0;
	// lwz r10,620(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// stw r10,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r10.u32);
	// lwz r10,624(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// stw r10,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r10.u32);
	// lwz r11,628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// stw r11,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r11.u32);
loc_826B19C0:
	// lwz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x826b1de4
	if (ctx.cr6.lt) goto loc_826B1DE4;
	// beq cr6,0x826b1b74
	if (ctx.cr6.eq) goto loc_826B1B74;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x826b1a70
	if (ctx.cr6.lt) goto loc_826B1A70;
	// bne cr6,0x826b203c
	if (!ctx.cr6.eq) goto loc_826B203C;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x826B19E4;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// beq 0x826b1a44
	if (ctx.cr0.eq) goto loc_826B1A44;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826b1a18
	if (ctx.cr6.eq) goto loc_826B1A18;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x826B1A08;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x826B1A0C;
	sub_82409C40(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x826b1a1c
	goto loc_826B1A1C;
loc_826B1A18:
	// li r4,0
	ctx.r4.s64 = 0;
loc_826B1A1C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,96(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x82333a80
	ctx.lr = 0x826B1A28;
	sub_82333A80(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,3888
	ctx.r11.s64 = ctx.r11.s64 + 3888;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x826b1a48
	goto loc_826B1A48;
loc_826B1A44:
	// li r4,0
	ctx.r4.s64 = 0;
loc_826B1A48:
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x826B1A54;
	sub_82833A30(ctx, base);
	// lwz r11,1772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b203c
	if (ctx.cr6.eq) goto loc_826B203C;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lfs f2,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// b 0x826b202c
	goto loc_826B202C;
loc_826B1A70:
	// lfs f0,1640(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,1644(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// fdivs f12,f31,f12
	ctx.f12.f64 = double(float(ctx.f31.f64 / ctx.f12.f64));
	// lfs f13,1620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,1624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	ctx.f11.f64 = double(temp.f32);
	// lfs f31,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,1620(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1620, temp.u32);
	// lfs f10,1660(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f9,1648(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,1664(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1652(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,1668(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,1656(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f7,f7,f8
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fsubs f9,f9,f10
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// stfs f0,1624(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1624, temp.u32);
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fadds f11,f8,f7
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r11.u32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fadds f11,f10,f9
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r11.u32);
	// stw r10,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r10.u32);
	// ble cr6,0x826b1b0c
	if (!ctx.cr6.gt) goto loc_826B1B0C;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_826B1B0C:
	// stfs f0,1624(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1624, temp.u32);
	// addi r5,r31,1736
	ctx.r5.s64 = ctx.r31.s64 + 1736;
	// addi r4,r31,1752
	ctx.r4.s64 = ctx.r31.s64 + 1752;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8269cbe0
	ctx.lr = 0x826B1B24;
	sub_8269CBE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82817b48
	ctx.lr = 0x826B1B30;
	sub_82817B48(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,1620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// stw r11,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r11.u32);
	// blt cr6,0x826b203c
	if (ctx.cr6.lt) goto loc_826B203C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r10.u32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1620(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1620, temp.u32);
	// stfs f0,1624(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1624, temp.u32);
	// stfs f0,1628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1628, temp.u32);
	// b 0x826b203c
	goto loc_826B203C;
loc_826B1B74:
	// lfs f13,1696(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,1724(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1724);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,1728(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1728);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,1700(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1700);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r31,1660
	ctx.r30.s64 = ctx.r31.s64 + 1660;
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f11,1732(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,1704(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1704);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f11,1660(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1664(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,1668(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x826B1BCC;
	sub_82817280(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r31,656
	ctx.r4.s64 = ctx.r31.s64 + 656;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r11.u32);
	// bl 0x824f97d8
	ctx.lr = 0x826B1BF4;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82817f30
	ctx.lr = 0x826B1C00;
	sub_82817F30(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,1788(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,1756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1756, ctx.r9.u32);
	// stw r8,1760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1760, ctx.r8.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r10.u32);
	// stw r11,1764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1764, ctx.r11.u32);
	// beq cr6,0x826b1c90
	if (ctx.cr6.eq) goto loc_826B1C90;
	// lwz r11,1792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b1c90
	if (ctx.cr6.eq) goto loc_826B1C90;
	// lfs f0,624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1800(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1800);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f13,1796(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1796);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f13,1804(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1804);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r10.u32);
	// fadds f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r11,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_826B1C90:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,1628(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1636(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// stfs f13,1628(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1628, temp.u32);
	// lfs f12,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x826b1cf0
	if (!ctx.cr6.gt) goto loc_826B1CF0;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x826b203c
	if (ctx.cr6.lt) goto loc_826B203C;
	// lwz r11,1772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	// li r10,2
	ctx.r10.s64 = 2;
	// stfs f12,1620(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1620, temp.u32);
	// stfs f12,1624(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1624, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfs f12,1628(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1628, temp.u32);
	// stw r10,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r10.u32);
	// beq cr6,0x826b203c
	if (ctx.cr6.eq) goto loc_826B203C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lfs f2,1640(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	ctx.f2.f64 = double(temp.f32);
	// lwz r5,1780(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1780);
	// lfs f1,1776(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// b 0x826b2034
	goto loc_826B2034;
loc_826B1CF0:
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826b1d14
	if (ctx.cr6.eq) goto loc_826B1D14;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x826B1D0C;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x826B1D10;
	sub_82409C40(ctx, base);
	// b 0x826b1d18
	goto loc_826B1D18;
loc_826B1D14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B1D18:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b1d6c
	if (ctx.cr6.eq) goto loc_826B1D6C;
	// lwz r11,1412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b1d6c
	if (ctx.cr6.eq) goto loc_826B1D6C;
	// lfs f13,1696(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1724(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1724);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,1700(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1700);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,1728(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1728);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f12,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,1784(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1784);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x826b203c
	if (ctx.cr6.lt) goto loc_826B203C;
loc_826B1D6C:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x826B1D74;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x826b1dd0
	if (ctx.cr0.eq) goto loc_826B1DD0;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826b1da4
	if (ctx.cr6.eq) goto loc_826B1DA4;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x826B1D94;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x826B1D98;
	sub_82409C40(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x826b1da8
	goto loc_826B1DA8;
loc_826B1DA4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_826B1DA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,96(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x82333a80
	ctx.lr = 0x826B1DB4;
	sub_82333A80(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,3888
	ctx.r11.s64 = ctx.r11.s64 + 3888;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x826b1dd4
	goto loc_826B1DD4;
loc_826B1DD0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_826B1DD4:
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x826B1DE0;
	sub_82833A30(ctx, base);
	// b 0x826b203c
	goto loc_826B203C;
loc_826B1DE4:
	// lfs f0,1632(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lfs f13,1620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r31,1660
	ctx.r30.s64 = ctx.r31.s64 + 1660;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,1620(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1620, temp.u32);
	// lfs f13,1652(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,1648(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,1660(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,1656(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,1668(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f12,1664(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f11,f9,f10
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r11.u32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fadds f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r10.u32);
	// stw r11,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r11.u32);
	// lfs f13,1696(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1704(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1704);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1732(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,1664(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,1660(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,1668(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,1700(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1700);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,1728(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1728);
	ctx.f6.f64 = double(temp.f32);
	// fadds f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// lfs f0,1724(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1724);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fsubs f13,f7,f9
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f13,f12,f8
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x826B1EB0;
	sub_82817280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x824f97d8
	ctx.lr = 0x826B1EBC;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82817f30
	ctx.lr = 0x826B1EC8;
	sub_82817F30(ctx, base);
	// lfs f0,1644(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,1624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r29,r31,1752
	ctx.r29.s64 = ctx.r31.s64 + 1752;
	// lfs f31,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,1624(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1624, temp.u32);
	// stw r9,1756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1756, ctx.r9.u32);
	// stw r8,1760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1760, ctx.r8.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// stw r10,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r10.u32);
	// stw r11,1764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1764, ctx.r11.u32);
	// ble cr6,0x826b1f18
	if (!ctx.cr6.gt) goto loc_826B1F18;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_826B1F18:
	// stfs f0,1624(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1624, temp.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,1736
	ctx.r4.s64 = ctx.r31.s64 + 1736;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8269cbe0
	ctx.lr = 0x826B1F30;
	sub_8269CBE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82817b48
	ctx.lr = 0x826B1F3C;
	sub_82817B48(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,1620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// stw r11,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r11.u32);
	// blt cr6,0x826b203c
	if (ctx.cr6.lt) goto loc_826B203C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r11.u32);
	// stw r10,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r10.u32);
	// stw r9,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r9.u32);
	// bl 0x82817b48
	ctx.lr = 0x826B1F84;
	sub_82817B48(ctx, base);
	// lwz r11,1788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r11.u32);
	// beq cr6,0x826b1ffc
	if (ctx.cr6.eq) goto loc_826B1FFC;
	// lwz r11,1792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b1ffc
	if (ctx.cr6.eq) goto loc_826B1FFC;
	// lfs f13,624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,1800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1800, ctx.r11.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,1796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1796, ctx.r9.u32);
	// stw r10,1804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1804, ctx.r10.u32);
loc_826B1FFC:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,1772(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r9.u32);
	// lfs f2,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,1620(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1620, temp.u32);
	// stfs f2,1624(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1624, temp.u32);
	// stfs f2,1628(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1628, temp.u32);
	// beq cr6,0x826b203c
	if (ctx.cr6.eq) goto loc_826B203C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
loc_826B202C:
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f2.f64;
loc_826B2034:
	// lwz r3,1384(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1384);
	// bl 0x829737e0
	ctx.lr = 0x826B203C;
	sub_829737E0(ctx, base);
loc_826B203C:
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// lwz r11,660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lfs f0,1440(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 24, temp.u32);
	// lfs f0,1444(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 28, temp.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B2088"))) PPC_WEAK_FUNC(sub_826B2088);
PPC_FUNC_IMPL(__imp__sub_826B2088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826B2090;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82a6173c
	ctx.lr = 0x826B2098;
	__savefpr_25(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// bl 0x827ebf48
	ctx.lr = 0x826B20B0;
	sub_827EBF48(ctx, base);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x827da008
	ctx.lr = 0x826B20C8;
	sub_827DA008(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b211c
	if (ctx.cr6.eq) goto loc_826B211C;
	// addi r4,r11,1492
	ctx.r4.s64 = ctx.r11.s64 + 1492;
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82a4ea80
	ctx.lr = 0x826B20E4;
	sub_82A4EA80(ctx, base);
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// lwz r10,1412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// lfs f0,1432(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,1416(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// stfs f0,1440(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1440, temp.u32);
	// lwz r8,1420(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// lwz r7,1424(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// lwz r6,1428(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// stw r11,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r11.u32);
	// stw r10,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r10.u32);
	// stw r9,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r9.u32);
	// stw r8,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r8.u32);
	// stw r7,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r7.u32);
	// stw r6,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r6.u32);
loc_826B211C:
	// lfs f13,1696(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,656(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,1700(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1700);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,660(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r8,664(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// lfs f12,1704(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1704);
	ctx.f12.f64 = double(temp.f32);
	// addi r29,r31,620
	ctx.r29.s64 = ctx.r31.s64 + 620;
	// lfs f11,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// addi r30,r31,1696
	ctx.r30.s64 = ctx.r31.s64 + 1696;
	// fsubs f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f12,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// fneg f31,f0
	ctx.f31.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f13,f31,f31
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fmadds f13,f0,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x826b21dc
	if (!ctx.cr6.eq) goto loc_826B21DC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f11,f30
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// bne cr6,0x826b21d4
	if (!ctx.cr6.eq) goto loc_826B21D4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f31,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f29,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f30,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// b 0x826b2214
	goto loc_826B2214;
loc_826B21D4:
	// fmr f29,f0
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f0.f64;
	// b 0x826b2214
	goto loc_826B2214;
loc_826B21DC:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f11,16668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x826b2200
	if (!ctx.cr6.lt) goto loc_826B2200;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// b 0x826b2214
	goto loc_826B2214;
loc_826B2200:
	// fsqrts f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// lfs f30,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmuls f31,f13,f31
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f29,f0,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_826B2214:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82817280
	ctx.lr = 0x826B2220;
	sub_82817280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824f97d8
	ctx.lr = 0x826B222C;
	sub_824F97D8(ctx, base);
	// lfs f0,1688(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1688);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r31,1724
	ctx.r11.s64 = ctx.r31.s64 + 1724;
	// lfs f9,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f11,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f28,f11,f0
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f2,1692(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1692);
	ctx.f2.f64 = double(temp.f32);
	// lfs f7,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r31,1712
	ctx.r11.s64 = ctx.r31.s64 + 1712;
	// lfs f6,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r31,1660
	ctx.r11.s64 = ctx.r31.s64 + 1660;
	// lfs f8,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f8.f64 = double(temp.f32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f1,1684(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1684);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lfs f4,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f4.f64 = double(temp.f32);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lfs f3,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f3.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f13,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// fmadds f27,f7,f2,f12
	ctx.f27.f64 = double(float(ctx.f7.f64 * ctx.f2.f64 + ctx.f12.f64));
	// lfs f25,1768(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	ctx.f25.f64 = double(temp.f32);
	// fmadds f26,f6,f2,f5
	ctx.f26.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f5.f64));
	// fmadds f2,f8,f2,f28
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f2.f64 + ctx.f28.f64));
	// fmuls f31,f25,f31
	ctx.f31.f64 = double(float(ctx.f25.f64 * ctx.f31.f64));
	// fmuls f29,f29,f25
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f25.f64));
	// fmuls f30,f30,f25
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f25.f64));
	// lfs f5,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f5.f64 = double(temp.f32);
	// lfs f12,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f28,f4,f1,f27
	ctx.f28.f64 = double(float(ctx.f4.f64 * ctx.f1.f64 + ctx.f27.f64));
	// lfs f0,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f27,f3,f1,f26
	ctx.f27.f64 = double(float(ctx.f3.f64 * ctx.f1.f64 + ctx.f26.f64));
	// fmadds f2,f5,f1,f2
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 + ctx.f2.f64));
	// fadds f1,f28,f13
	ctx.f1.f64 = double(float(ctx.f28.f64 + ctx.f13.f64));
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f1,f27,f12
	ctx.f1.f64 = double(float(ctx.f27.f64 + ctx.f12.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,1728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1728, ctx.r11.u32);
	// stw r6,1724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1724, ctx.r6.u32);
	// stw r7,1732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1732, ctx.r7.u32);
	// lfs f2,1676(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f11,f2,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// lfs f1,1680(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1680);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f10,f2,f10
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// lfs f28,1672(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f9,f2,f9
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// stw r10,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r10.u32);
	// fmadds f11,f1,f8,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 + ctx.f11.f64));
	// stw r9,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r9.u32);
	// fmadds f10,f1,f7,f10
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f7.f64 + ctx.f10.f64));
	// stw r8,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r8.u32);
	// fmadds f9,f1,f6,f9
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f6.f64 + ctx.f9.f64));
	// fmadds f11,f28,f5,f11
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f5.f64 + ctx.f11.f64));
	// fmadds f10,f4,f28,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f28.f64 + ctx.f10.f64));
	// fmadds f9,f3,f28,f9
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f28.f64 + ctx.f9.f64));
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
	// fadds f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r11.u32);
	// stw r10,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r10.u32);
	// stw r9,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r9.u32);
	// lfs f9,1732(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// lfs f0,1724(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1724);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,1728(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1728);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f12,f10,f30
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f30.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stw r11,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r11.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fadds f0,f13,f29
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r10.u32);
	// stw r11,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r11.u32);
	// lfs f0,1668(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1712(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1660(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,1660(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1660, temp.u32);
	// lfs f12,1716(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,1664(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,1664(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1664, temp.u32);
	// lfs f13,1720(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,1668(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1668, temp.u32);
	// bl 0x824f97d8
	ctx.lr = 0x826B23E0;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82817f30
	ctx.lr = 0x826B23EC;
	sub_82817F30(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r10,1772(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r9.u32);
	// stw r8,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r8.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1736, ctx.r10.u32);
	// stw r11,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r11.u32);
	// beq cr6,0x826b2434
	if (ctx.cr6.eq) goto loc_826B2434;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lfs f2,1632(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	ctx.f2.f64 = double(temp.f32);
	// lwz r5,1780(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1780);
	// lfs f1,1776(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,1384(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1384);
	// bl 0x829737e0
	ctx.lr = 0x826B2434;
	sub_829737E0(ctx, base);
loc_826B2434:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82a61788
	ctx.lr = 0x826B2440;
	__restfpr_25(ctx, base);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B2448"))) PPC_WEAK_FUNC(sub_826B2448);
PPC_FUNC_IMPL(__imp__sub_826B2448) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,1708(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1708);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826b245c
	if (!ctx.cr6.eq) goto loc_826B245C;
	// stw r11,1708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1708, ctx.r11.u32);
loc_826B245C:
	// lwz r10,1792(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1792);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r11,1792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1792, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B2470"))) PPC_WEAK_FUNC(sub_826B2470);
PPC_FUNC_IMPL(__imp__sub_826B2470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,23952(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23952);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826b24b0
	if (!ctx.cr0.eq) goto loc_826B24B0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,23952(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23952, ctx.r11.u32);
	// addi r3,r9,-23608
	ctx.r3.s64 = ctx.r9.s64 + -23608;
	// bl 0x82816528
	ctx.lr = 0x826B24A8;
	sub_82816528(ctx, base);
	// stw r3,23948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23948, ctx.r3.u32);
	// b 0x826b24b4
	goto loc_826B24B4;
loc_826B24B0:
	// lwz r3,23948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23948);
loc_826B24B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B24C8"))) PPC_WEAK_FUNC(sub_826B24C8);
PPC_FUNC_IMPL(__imp__sub_826B24C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826b2518
	ctx.lr = 0x826B24E8;
	sub_826B2518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B24FC;
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

__attribute__((alias("__imp__sub_826B2518"))) PPC_WEAK_FUNC(sub_826B2518);
PPC_FUNC_IMPL(__imp__sub_826B2518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,23956
	ctx.r31.s64 = ctx.r11.s64 + 23956;
	// lwz r11,23960(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23960);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826b2560
	if (!ctx.cr0.eq) goto loc_826B2560;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-22412
	ctx.r9.s64 = ctx.r9.s64 + -22412;
	// stw r11,23960(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23960, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28640
	ctx.r3.s64 = ctx.r11.s64 + 28640;
	// bl 0x82a4c758
	ctx.lr = 0x826B2560;
	sub_82A4C758(ctx, base);
loc_826B2560:
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

__attribute__((alias("__imp__sub_826B2578"))) PPC_WEAK_FUNC(sub_826B2578);
PPC_FUNC_IMPL(__imp__sub_826B2578) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826b14e0
	sub_826B14E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B2580"))) PPC_WEAK_FUNC(sub_826B2580);
PPC_FUNC_IMPL(__imp__sub_826B2580) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, ctx.r4.u32);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826B2598"))) PPC_WEAK_FUNC(sub_826B2598);
PPC_FUNC_IMPL(__imp__sub_826B2598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B25A8"))) PPC_WEAK_FUNC(sub_826B25A8);
PPC_FUNC_IMPL(__imp__sub_826B25A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d0
	ctx.lr = 0x826B25B0;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82a61744
	ctx.lr = 0x826B25B8;
	__savefpr_27(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// stw r16,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, ctx.r16.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B25D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,840(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 840);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r17,r16,824
	ctx.r17.s64 = ctx.r16.s64 + 824;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826b2614
	if (!ctx.cr6.gt) goto loc_826B2614;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_826B25F4:
	// lwz r11,12(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82333960
	ctx.lr = 0x826B2600;
	sub_82333960(ctx, base);
	// lwz r11,16(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,80
	ctx.r30.s64 = ctx.r30.s64 + 80;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826b25f4
	if (ctx.cr6.lt) goto loc_826B25F4;
loc_826B2614:
	// lwz r11,20(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20);
	// stw r28,16(r17)
	PPC_STORE_U32(ctx.r17.u32 + 16, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b2638
	if (ctx.cr6.eq) goto loc_826B2638;
	// stw r28,20(r17)
	PPC_STORE_U32(ctx.r17.u32 + 20, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82332c38
	ctx.lr = 0x826B2638;
	sub_82332C38(ctx, base);
loc_826B2638:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-31963
	ctx.r7.s64 = -2094727168;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lfs f29,-32760(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32760);
	ctx.f29.f64 = double(temp.f32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lfs f27,18008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18008);
	ctx.f27.f64 = double(temp.f32);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lfs f30,912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 912);
	ctx.f30.f64 = double(temp.f32);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lfs f28,16800(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16800);
	ctx.f28.f64 = double(temp.f32);
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lfs f31,904(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// lis r6,-32221
	ctx.r6.s64 = -2111635456;
	// lis r5,-32221
	ctx.r5.s64 = -2111635456;
	// lis r4,-32221
	ctx.r4.s64 = -2111635456;
	// lis r3,-32221
	ctx.r3.s64 = -2111635456;
	// lis r31,-32221
	ctx.r31.s64 = -2111635456;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// addi r25,r11,-22044
	ctx.r25.s64 = ctx.r11.s64 + -22044;
	// addi r24,r10,-22088
	ctx.r24.s64 = ctx.r10.s64 + -22088;
	// addi r23,r9,-22136
	ctx.r23.s64 = ctx.r9.s64 + -22136;
	// addi r20,r8,-22180
	ctx.r20.s64 = ctx.r8.s64 + -22180;
	// addi r22,r7,-22216
	ctx.r22.s64 = ctx.r7.s64 + -22216;
	// addi r19,r6,-22260
	ctx.r19.s64 = ctx.r6.s64 + -22260;
	// addi r18,r5,-22304
	ctx.r18.s64 = ctx.r5.s64 + -22304;
	// addi r21,r4,-22328
	ctx.r21.s64 = ctx.r4.s64 + -22328;
	// addi r27,r3,-22356
	ctx.r27.s64 = ctx.r3.s64 + -22356;
	// addi r26,r31,-22392
	ctx.r26.s64 = ctx.r31.s64 + -22392;
loc_826B26B4:
	// stfs f29,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stfs f28,124(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r5,848(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 848);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bl 0x82816b80
	ctx.lr = 0x826B26FC;
	sub_82816B80(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82414568
	ctx.lr = 0x826B2708;
	sub_82414568(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r31,840(r16)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r16.u32 + 840);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82816b80
	ctx.lr = 0x826B2720;
	sub_82816B80(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x826b2ba8
	ctx.lr = 0x826B2740;
	sub_826B2BA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826b274c
	if (ctx.cr0.eq) goto loc_826B274C;
	// li r28,1
	ctx.r28.s64 = 1;
loc_826B274C:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82816b80
	ctx.lr = 0x826B275C;
	sub_82816B80(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq 0x826b2788
	if (ctx.cr0.eq) goto loc_826B2788;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828c5740
	ctx.lr = 0x826B2784;
	sub_828C5740(ctx, base);
	// b 0x826b278c
	goto loc_826B278C;
loc_826B2788:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B278C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826b2798
	if (ctx.cr6.eq) goto loc_826B2798;
	// li r28,1
	ctx.r28.s64 = 1;
loc_826B2798:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82816b80
	ctx.lr = 0x826B27A8;
	sub_82816B80(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x826b2c28
	ctx.lr = 0x826B27C8;
	sub_826B2C28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826b27d4
	if (ctx.cr0.eq) goto loc_826B27D4;
	// li r28,1
	ctx.r28.s64 = 1;
loc_826B27D4:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82816b80
	ctx.lr = 0x826B27E4;
	sub_82816B80(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x826b2c28
	ctx.lr = 0x826B2804;
	sub_826B2C28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826b2810
	if (ctx.cr0.eq) goto loc_826B2810;
	// li r28,1
	ctx.r28.s64 = 1;
loc_826B2810:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82816b80
	ctx.lr = 0x826B2820;
	sub_82816B80(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq 0x826b284c
	if (ctx.cr0.eq) goto loc_826B284C;
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828c5740
	ctx.lr = 0x826B2848;
	sub_828C5740(ctx, base);
	// b 0x826b2850
	goto loc_826B2850;
loc_826B284C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B2850:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826b285c
	if (ctx.cr6.eq) goto loc_826B285C;
	// li r28,1
	ctx.r28.s64 = 1;
loc_826B285C:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82816b80
	ctx.lr = 0x826B286C;
	sub_82816B80(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x826b2c28
	ctx.lr = 0x826B288C;
	sub_826B2C28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826b2898
	if (ctx.cr0.eq) goto loc_826B2898;
	// li r28,1
	ctx.r28.s64 = 1;
loc_826B2898:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82816b80
	ctx.lr = 0x826B28A8;
	sub_82816B80(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq 0x826b28d4
	if (ctx.cr0.eq) goto loc_826B28D4;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828c5740
	ctx.lr = 0x826B28D0;
	sub_828C5740(ctx, base);
	// b 0x826b28d8
	goto loc_826B28D8;
loc_826B28D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B28D8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826b28e4
	if (ctx.cr6.eq) goto loc_826B28E4;
	// li r28,1
	ctx.r28.s64 = 1;
loc_826B28E4:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82816b80
	ctx.lr = 0x826B28F4;
	sub_82816B80(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq 0x826b2920
	if (ctx.cr0.eq) goto loc_826B2920;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828c5740
	ctx.lr = 0x826B291C;
	sub_828C5740(ctx, base);
	// b 0x826b2924
	goto loc_826B2924;
loc_826B2920:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B2924:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826b2930
	if (ctx.cr6.eq) goto loc_826B2930;
	// li r28,1
	ctx.r28.s64 = 1;
loc_826B2930:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82816b80
	ctx.lr = 0x826B2940;
	sub_82816B80(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq 0x826b296c
	if (ctx.cr0.eq) goto loc_826B296C;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828c5740
	ctx.lr = 0x826B2968;
	sub_828C5740(ctx, base);
	// b 0x826b2970
	goto loc_826B2970;
loc_826B296C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B2970:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826b297c
	if (ctx.cr6.eq) goto loc_826B297C;
	// li r28,1
	ctx.r28.s64 = 1;
loc_826B297C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x826b2a38
	if (ctx.cr6.eq) goto loc_826B2A38;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823339b8
	ctx.lr = 0x826B2990;
	sub_823339B8(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r5,80
	ctx.r5.s64 = 80;
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r7,172(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r31,176(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lwz r16,152(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lfs f13,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lwz r15,156(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lwz r14,160(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stw r10,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
	// stfs f13,244(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stw r9,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
	// stfs f12,260(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stw r8,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r8.u32);
	// stfs f11,264(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stw r7,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r7.u32);
	// stfs f10,268(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stw r16,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r16.u32);
	// stw r15,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r15.u32);
	// stw r14,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r14.u32);
	// bl 0x82332d50
	ctx.lr = 0x826B2A14;
	sub_82332D50(ctx, base);
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// mulli r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 * 80;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826b2a2c
	if (ctx.cr0.eq) goto loc_826B2A2C;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x826a1550
	ctx.lr = 0x826B2A2C;
	sub_826A1550(ctx, base);
loc_826B2A2C:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x826B2A34;
	sub_82333960(ctx, base);
	// lwz r16,772(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 772);
loc_826B2A38:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82333960
	ctx.lr = 0x826B2A40;
	sub_82333960(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x826b26b4
	if (!ctx.cr6.eq) goto loc_826B26B4;
	// lwz r11,840(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 840);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826b2ad8
	if (!ctx.cr6.eq) goto loc_826B2AD8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-22000
	ctx.r4.s64 = ctx.r11.s64 + -22000;
	// bl 0x8233a258
	ctx.lr = 0x826B2A64;
	sub_8233A258(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r6,8
	ctx.r6.s64 = 8;
	// stfs f29,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// li r5,80
	ctx.r5.s64 = 80;
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stfs f30,228(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// lfs f0,16540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16540);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,232(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f31,236(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f28,244(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f31,248(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f31,252(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f30,256(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f30,260(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f31,264(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f27,268(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// bl 0x82332d50
	ctx.lr = 0x826B2AB8;
	sub_82332D50(ctx, base);
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// mulli r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 * 80;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826b2ad0
	if (ctx.cr0.eq) goto loc_826B2AD0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x826a1550
	ctx.lr = 0x826B2AD0;
	sub_826A1550(ctx, base);
loc_826B2AD0:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x826B2AD8;
	sub_82333960(ctx, base);
loc_826B2AD8:
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82a61790
	ctx.lr = 0x826B2AE4;
	__restfpr_27(ctx, base);
	// b 0x82a4ea20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B2AE8"))) PPC_WEAK_FUNC(sub_826B2AE8);
PPC_FUNC_IMPL(__imp__sub_826B2AE8) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r9,848(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// lwz r10,836(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 836);
	// mulli r9,r9,80
	ctx.r9.s64 = ctx.r9.s64 * 80;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// lwz r31,96(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lfs f31,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x826b2b44
	if (ctx.cr6.eq) goto loc_826B2B44;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x826B2B3C;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x826B2B40;
	sub_82409C40(ctx, base);
	// b 0x826b2b48
	goto loc_826B2B48;
loc_826B2B44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B2B48:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// lwz r11,496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B2B5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x827da2a8
	ctx.lr = 0x826B2B6C;
	sub_827DA2A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826b2b84
	if (ctx.cr0.eq) goto loc_826B2B84;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,1776(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1776);
	// stfs f31,4700(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4700, temp.u32);
	// stfs f30,4704(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4704, temp.u32);
loc_826B2B84:
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

__attribute__((alias("__imp__sub_826B2BA8"))) PPC_WEAK_FUNC(sub_826B2BA8);
PPC_FUNC_IMPL(__imp__sub_826B2BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826B2BB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b2c18
	if (ctx.cr6.eq) goto loc_826B2C18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B2BF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826b2c10
	if (!ctx.cr0.eq) goto loc_826B2C10;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c5800
	ctx.lr = 0x826B2C0C;
	sub_828C5800(ctx, base);
	// b 0x826b2c1c
	goto loc_826B2C1C;
loc_826B2C10:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826b2c1c
	goto loc_826B2C1C;
loc_826B2C18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B2C1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B2C28"))) PPC_WEAK_FUNC(sub_826B2C28);
PPC_FUNC_IMPL(__imp__sub_826B2C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826B2C30;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r31,108(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826b2d00
	if (ctx.cr6.eq) goto loc_826B2D00;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B2CA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826b2cd4
	if (ctx.cr0.eq) goto loc_826B2CD4;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b2cbc
	if (ctx.cr6.eq) goto loc_826B2CBC;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x826b2cc4
	goto loc_826B2CC4;
loc_826B2CBC:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_826B2CC4:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c5d40
	ctx.lr = 0x826B2CD0;
	sub_828C5D40(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_826B2CD4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x826B2CDC;
	sub_82333960(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x826b2cf8
	if (!ctx.cr6.eq) goto loc_826B2CF8;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828c5800
	ctx.lr = 0x826B2CF4;
	sub_828C5800(ctx, base);
	// b 0x826b2d04
	goto loc_826B2D04;
loc_826B2CF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826b2d04
	goto loc_826B2D04;
loc_826B2D00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B2D04:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B2D10"))) PPC_WEAK_FUNC(sub_826B2D10);
PPC_FUNC_IMPL(__imp__sub_826B2D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,30868
	ctx.r3.s64 = ctx.r11.s64 + 30868;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B2D20"))) PPC_WEAK_FUNC(sub_826B2D20);
PPC_FUNC_IMPL(__imp__sub_826B2D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826b2d58
	if (ctx.cr6.eq) goto loc_826B2D58;
	// bl 0x826a81b0
	ctx.lr = 0x826B2D48;
	sub_826A81B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826b2d58
	if (!ctx.cr6.eq) goto loc_826B2D58;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826b2d64
	goto loc_826B2D64;
loc_826B2D58:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8269fd40
	ctx.lr = 0x826B2D64;
	sub_8269FD40(ctx, base);
loc_826B2D64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B2D80"))) PPC_WEAK_FUNC(sub_826B2D80);
PPC_FUNC_IMPL(__imp__sub_826B2D80) {
	PPC_FUNC_PROLOGUE();
	// b 0x826a81b0
	sub_826A81B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B2D88"))) PPC_WEAK_FUNC(sub_826B2D88);
PPC_FUNC_IMPL(__imp__sub_826B2D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,4720
	ctx.r3.s64 = 4720;
	// bl 0x82833108
	ctx.lr = 0x826B2DA4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b2db8
	if (ctx.cr0.eq) goto loc_826B2DB8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826b2e30
	ctx.lr = 0x826B2DB4;
	sub_826B2E30(ctx, base);
	// b 0x826b2dbc
	goto loc_826B2DBC;
loc_826B2DB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B2DBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B2DD0"))) PPC_WEAK_FUNC(sub_826B2DD0);
PPC_FUNC_IMPL(__imp__sub_826B2DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826a81b0
	ctx.lr = 0x826B2DF0;
	sub_826A81B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826b2e00
	if (!ctx.cr6.eq) goto loc_826B2E00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826b2e18
	goto loc_826B2E18;
loc_826B2E00:
	// bl 0x826a0df0
	ctx.lr = 0x826B2E04;
	sub_826A0DF0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826b2e18
	if (ctx.cr6.eq) goto loc_826B2E18;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269f5d0
	ctx.lr = 0x826B2E18;
	sub_8269F5D0(ctx, base);
loc_826B2E18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B2E30"))) PPC_WEAK_FUNC(sub_826B2E30);
PPC_FUNC_IMPL(__imp__sub_826B2E30) {
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
	// bl 0x8269f630
	ctx.lr = 0x826B2E50;
	sub_8269F630(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,23800
	ctx.r11.s64 = ctx.r11.s64 + 23800;
	// addi r10,r10,24988
	ctx.r10.s64 = ctx.r10.s64 + 24988;
	// addi r9,r9,25040
	ctx.r9.s64 = ctx.r9.s64 + 25040;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lwz r8,4576(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4576);
	// stw r8,4576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4576, ctx.r8.u32);
	// addi r11,r11,-21800
	ctx.r11.s64 = ctx.r11.s64 + -21800;
	// addi r10,r10,-20612
	ctx.r10.s64 = ctx.r10.s64 + -20612;
	// lwz r8,4580(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4580);
	// addi r9,r9,-20560
	ctx.r9.s64 = ctx.r9.s64 + -20560;
	// stw r8,4580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4580, ctx.r8.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,4592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4592);
	// stw r11,4592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4592, ctx.r11.u32);
	// lwz r11,4596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4596);
	// stw r11,4596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4596, ctx.r11.u32);
	// lwz r11,4600(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4600);
	// stw r11,4600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4600, ctx.r11.u32);
	// lwz r11,4604(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4604);
	// stw r11,4604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4604, ctx.r11.u32);
	// lwz r11,4608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4608);
	// stw r11,4608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4608, ctx.r11.u32);
	// lwz r11,4612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4612);
	// stw r11,4612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4612, ctx.r11.u32);
	// lwz r11,4616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4616);
	// stw r11,4616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4616, ctx.r11.u32);
	// lwz r11,4620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4620);
	// stw r11,4620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4620, ctx.r11.u32);
	// lbz r11,4624(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4624);
	// stb r11,4624(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4624, ctx.r11.u8);
	// lfs f0,4628(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4628);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4628, temp.u32);
	// lfs f0,4632(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4632);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4632(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4632, temp.u32);
	// lfs f0,4636(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4636);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4636(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4636, temp.u32);
	// lfs f0,4640(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4640);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4640(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4640, temp.u32);
	// lfs f0,4644(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4644);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4644(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4644, temp.u32);
	// lfs f0,4648(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4648);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4648(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4648, temp.u32);
	// lfs f0,4652(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4652);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4652(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4652, temp.u32);
	// lfs f0,4656(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4656);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4656(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4656, temp.u32);
	// lfs f0,4660(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4660);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4660(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4660, temp.u32);
	// lfs f0,4664(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4664);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4664(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4664, temp.u32);
	// lfs f0,4668(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4668);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4668(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4668, temp.u32);
	// lfs f0,4672(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4672);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4672(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4672, temp.u32);
	// lfs f0,4676(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4676);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4676(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4676, temp.u32);
	// lfs f0,4680(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4680);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4680(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4680, temp.u32);
	// lfs f0,4684(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4684);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4684(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4684, temp.u32);
	// lfs f0,4688(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4688);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4688(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4688, temp.u32);
	// lfs f0,4692(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4692);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4692(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4692, temp.u32);
	// lfs f0,4696(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4696);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4696(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4696, temp.u32);
	// lfs f0,4700(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4700);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4700(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4700, temp.u32);
	// lfs f0,4704(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4704);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,4704(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4704, temp.u32);
	// lwz r11,4708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4708);
	// stw r11,4708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4708, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B2FB8"))) PPC_WEAK_FUNC(sub_826B2FB8);
PPC_FUNC_IMPL(__imp__sub_826B2FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,23800
	ctx.r10.s64 = ctx.r10.s64 + 23800;
	// addi r9,r9,24988
	ctx.r9.s64 = ctx.r9.s64 + 24988;
	// stw r11,4604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4604, ctx.r11.u32);
	// addi r8,r8,25040
	ctx.r8.s64 = ctx.r8.s64 + 25040;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// stw r11,4608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4608, ctx.r11.u32);
	// stw r11,4612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4612, ctx.r11.u32);
	// bl 0x827e1358
	ctx.lr = 0x826B300C;
	sub_827E1358(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b301c
	if (ctx.cr0.eq) goto loc_826B301C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x826B301C;
	sub_82332DB8(ctx, base);
loc_826B301C:
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

__attribute__((alias("__imp__sub_826B3038"))) PPC_WEAK_FUNC(sub_826B3038);
PPC_FUNC_IMPL(__imp__sub_826B3038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-21984
	ctx.r3.s64 = ctx.r11.s64 + -21984;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B3048"))) PPC_WEAK_FUNC(sub_826B3048);
PPC_FUNC_IMPL(__imp__sub_826B3048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826b3080
	if (ctx.cr6.eq) goto loc_826B3080;
	// bl 0x826b3fe8
	ctx.lr = 0x826B3070;
	sub_826B3FE8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826b3080
	if (!ctx.cr6.eq) goto loc_826B3080;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826b308c
	goto loc_826B308C;
loc_826B3080:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8269fa70
	ctx.lr = 0x826B308C;
	sub_8269FA70(ctx, base);
loc_826B308C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B30A8"))) PPC_WEAK_FUNC(sub_826B30A8);
PPC_FUNC_IMPL(__imp__sub_826B30A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x826b3fe8
	sub_826B3FE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B30B0"))) PPC_WEAK_FUNC(sub_826B30B0);
PPC_FUNC_IMPL(__imp__sub_826B30B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x826a0b20
	sub_826A0B20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B30B8"))) PPC_WEAK_FUNC(sub_826B30B8);
PPC_FUNC_IMPL(__imp__sub_826B30B8) {
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
	// li r3,832
	ctx.r3.s64 = 832;
	// bl 0x82833108
	ctx.lr = 0x826B30D8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826b3110
	if (ctx.cr0.eq) goto loc_826B3110;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8269fcb8
	ctx.lr = 0x826B30EC;
	sub_8269FCB8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-20536
	ctx.r11.s64 = ctx.r11.s64 + -20536;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,824(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 824);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,824(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 824, temp.u32);
	// lfs f0,828(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 828);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,828(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 828, temp.u32);
	// b 0x826b3114
	goto loc_826B3114;
loc_826B3110:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B3114:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B3130"))) PPC_WEAK_FUNC(sub_826B3130);
PPC_FUNC_IMPL(__imp__sub_826B3130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826b3fe8
	ctx.lr = 0x826B3150;
	sub_826B3FE8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826b3164
	if (ctx.cr6.eq) goto loc_826B3164;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269fac8
	ctx.lr = 0x826B3164;
	sub_8269FAC8(ctx, base);
loc_826B3164:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B3180"))) PPC_WEAK_FUNC(sub_826B3180);
PPC_FUNC_IMPL(__imp__sub_826B3180) {
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
	// lfs f0,824(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 824);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x826b325c
	if (ctx.cr6.lt) goto loc_826B325C;
	// lfs f13,828(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 828);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// stfs f13,828(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 828, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x826b325c
	if (!ctx.cr6.gt) goto loc_826B325C;
	// lwz r11,816(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 816);
	// lwz r11,4564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4564);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x826b3248
	if (!ctx.cr6.eq) goto loc_826B3248;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x826B31D4;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// beq 0x826b3234
	if (ctx.cr0.eq) goto loc_826B3234;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826b3208
	if (ctx.cr6.eq) goto loc_826B3208;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x826B31F8;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x826B31FC;
	sub_82409C40(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x826b320c
	goto loc_826B320C;
loc_826B3208:
	// li r4,0
	ctx.r4.s64 = 0;
loc_826B320C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,96(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x82333a80
	ctx.lr = 0x826B3218;
	sub_82333A80(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,3888
	ctx.r11.s64 = ctx.r11.s64 + 3888;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x826b3238
	goto loc_826B3238;
loc_826B3234:
	// li r4,0
	ctx.r4.s64 = 0;
loc_826B3238:
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x826B3244;
	sub_82833A30(ctx, base);
	// b 0x826b325c
	goto loc_826B325C;
loc_826B3248:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B325C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B325C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B3278"))) PPC_WEAK_FUNC(sub_826B3278);
PPC_FUNC_IMPL(__imp__sub_826B3278) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r4,820(r31)
	PPC_STORE_U8(ctx.r31.u32 + 820, ctx.r4.u8);
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r4,3935
	ctx.r4.s64 = 3935;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// beq 0x826b32d0
	if (ctx.cr0.eq) goto loc_826B32D0;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r10,r10,30264
	ctx.r10.s64 = ctx.r10.s64 + 30264;
	// lfs f31,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lfs f1,-9848(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9848);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x829badb0
	ctx.lr = 0x826B32C8;
	sub_829BADB0(ctx, base);
	// stfs f31,828(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 828, temp.u32);
	// b 0x826b32e0
	goto loc_826B32E0;
loc_826B32D0:
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f2,30264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30264);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x829badb0
	ctx.lr = 0x826B32E0;
	sub_829BADB0(ctx, base);
loc_826B32E0:
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

__attribute__((alias("__imp__sub_826B32F8"))) PPC_WEAK_FUNC(sub_826B32F8);
PPC_FUNC_IMPL(__imp__sub_826B32F8) {
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
	// bl 0x827e0e20
	ctx.lr = 0x826B3310;
	sub_827E0E20(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r11,-32516
	ctx.r9.s64 = ctx.r11.s64 + -32516;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lis r6,-32221
	ctx.r6.s64 = -2111635456;
	// lfs f8,-32516(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32516);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f7,-24644(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24644);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r10,-24644
	ctx.r10.s64 = ctx.r10.s64 + -24644;
	// lfs f0,-272(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -272);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// stfs f0,2600(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2600, temp.u32);
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// lis r4,-32215
	ctx.r4.s64 = -2111242240;
	// lfs f12,23968(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23968);
	ctx.f12.f64 = double(temp.f32);
	// lis r3,-32215
	ctx.r3.s64 = -2111242240;
	// lfs f10,-3160(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3160);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,16800(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16800);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r8,-21800
	ctx.r11.s64 = ctx.r8.s64 + -21800;
	// addi r9,r6,-20560
	ctx.r9.s64 = ctx.r6.s64 + -20560;
	// addi r8,r7,-20612
	ctx.r8.s64 = ctx.r7.s64 + -20612;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lfs f0,30996(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lfs f13,904(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,912(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 912);
	ctx.f9.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,10
	ctx.r10.s64 = 10;
	// stfs f12,4628(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4628, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f0,4632(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4632, temp.u32);
	// stfs f11,4636(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4636, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f10,4640(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4640, temp.u32);
	// stfs f13,4644(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4644, temp.u32);
	// stfs f0,4648(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4648, temp.u32);
	// stfs f9,4652(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4652, temp.u32);
	// stfs f8,4656(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4656, temp.u32);
	// stfs f13,4660(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4660, temp.u32);
	// stfs f12,4664(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4664, temp.u32);
	// stfs f0,4668(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4668, temp.u32);
	// stfs f11,4672(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4672, temp.u32);
	// stfs f10,4676(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4676, temp.u32);
	// stfs f13,4680(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4680, temp.u32);
	// stfs f0,4684(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4684, temp.u32);
	// stfs f9,4688(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4688, temp.u32);
	// stfs f8,4692(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4692, temp.u32);
	// stfs f13,4696(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4696, temp.u32);
	// stw r10,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r10.u32);
	// stfs f7,4460(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4460, temp.u32);
	// stw r9,2020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2020, ctx.r9.u32);
	// stw r11,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r11.u32);
	// stw r11,4464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4464, ctx.r11.u32);
	// bl 0x826b3408
	ctx.lr = 0x826B33F0;
	sub_826B3408(ctx, base);
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

__attribute__((alias("__imp__sub_826B3408"))) PPC_WEAK_FUNC(sub_826B3408);
PPC_FUNC_IMPL(__imp__sub_826B3408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826B3410;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lfs f0,23968(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23968);
	ctx.f0.f64 = double(temp.f32);
	// addi r28,r31,1932
	ctx.r28.s64 = ctx.r31.s64 + 1932;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r29,r10,-21924
	ctx.r29.s64 = ctx.r10.s64 + -21924;
	// lfs f13,-32456(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -32456);
	ctx.f13.f64 = double(temp.f32);
	// addi r27,r31,1936
	ctx.r27.s64 = ctx.r31.s64 + 1936;
	// lfs f0,17660(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17660);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,1932(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1932, temp.u32);
	// stfs f0,1936(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1936, temp.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b3484
	if (ctx.cr6.eq) goto loc_826B3484;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-21952
	ctx.r5.s64 = ctx.r11.s64 + -21952;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828c5740
	ctx.lr = 0x826B3480;
	sub_828C5740(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
loc_826B3484:
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b34b4
	if (ctx.cr6.eq) goto loc_826B34B4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-21872
	ctx.r5.s64 = ctx.r11.s64 + -21872;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828c5740
	ctx.lr = 0x826B34B0;
	sub_828C5740(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
loc_826B34B4:
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b34e0
	if (ctx.cr6.eq) goto loc_826B34E0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-21844
	ctx.r5.s64 = ctx.r11.s64 + -21844;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828c5740
	ctx.lr = 0x826B34E0;
	sub_828C5740(ctx, base);
loc_826B34E0:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r31,2028
	ctx.r4.s64 = ctx.r31.s64 + 2028;
	// stfs f0,2704(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2704, temp.u32);
	// addi r3,r31,3644
	ctx.r3.s64 = ctx.r31.s64 + 3644;
	// stfs f0,2708(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2708, temp.u32);
	// li r5,808
	ctx.r5.s64 = 808;
	// stfs f0,2712(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2712, temp.u32);
	// stfs f0,2700(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2700, temp.u32);
	// stfs f0,2716(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2716, temp.u32);
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2768(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2768, temp.u32);
	// stfs f0,2756(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2756, temp.u32);
	// stfs f0,2772(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2772, temp.u32);
	// stfs f0,2760(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2760, temp.u32);
	// stfs f0,2764(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2764, temp.u32);
	// lfs f0,2700(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2700);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2756(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2756);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,2032(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2032, temp.u32);
	// stfs f0,2028(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2028, temp.u32);
	// stfs f12,2136(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2136, temp.u32);
	// stfs f13,2140(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2140, temp.u32);
	// stfs f0,2436(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2436, temp.u32);
	// stfs f13,2440(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2440, temp.u32);
	// stfs f0,2328(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2328, temp.u32);
	// stfs f13,2332(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2332, temp.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x826B354C;
	sub_82A4EA80(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B3558"))) PPC_WEAK_FUNC(sub_826B3558);
PPC_FUNC_IMPL(__imp__sub_826B3558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826B3560;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8269ff00
	ctx.lr = 0x826B356C;
	sub_8269FF00(ctx, base);
	// li r3,1044
	ctx.r3.s64 = 1044;
	// bl 0x82833108
	ctx.lr = 0x826B3574;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b3588
	if (ctx.cr0.eq) goto loc_826B3588;
	// bl 0x826b6ce8
	ctx.lr = 0x826B3580;
	sub_826B6CE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x826b358c
	goto loc_826B358C;
loc_826B3588:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826B358C:
	// stw r11,4604(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4604, ctx.r11.u32);
	// li r3,1012
	ctx.r3.s64 = 1012;
	// bl 0x82833108
	ctx.lr = 0x826B3598;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b35ac
	if (ctx.cr0.eq) goto loc_826B35AC;
	// bl 0x826b44d0
	ctx.lr = 0x826B35A4;
	sub_826B44D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x826b35b0
	goto loc_826B35B0;
loc_826B35AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826B35B0:
	// stw r11,4608(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4608, ctx.r11.u32);
	// li r3,832
	ctx.r3.s64 = 832;
	// bl 0x82833108
	ctx.lr = 0x826B35BC;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826b35f8
	if (ctx.cr0.eq) goto loc_826B35F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ee8f8
	ctx.lr = 0x826B35CC;
	sub_827EE8F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// addi r9,r9,-20536
	ctx.r9.s64 = ctx.r9.s64 + -20536;
	// lfs f0,-27300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stfs f0,824(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 824, temp.u32);
	// stfs f13,828(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 828, temp.u32);
	// b 0x826b35fc
	goto loc_826B35FC;
loc_826B35F8:
	// li r27,0
	ctx.r27.s64 = 0;
loc_826B35FC:
	// lwz r9,1656(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1656);
	// stw r27,4612(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4612, ctx.r27.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826b3650
	if (!ctx.cr6.eq) goto loc_826B3650;
	// lwz r11,4604(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4604);
	// addi r31,r29,1616
	ctx.r31.s64 = ctx.r29.s64 + 1616;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x826B3624;
	sub_82410060(ctx, base);
	// lwz r11,4608(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4608);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x826B3638;
	sub_82410060(ctx, base);
	// lwz r11,4612(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4612);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x826B364C;
	sub_82410060(ctx, base);
	// b 0x826b370c
	goto loc_826B370C;
loc_826B3650:
	// lwz r10,1632(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1632);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826b370c
	if (!ctx.cr6.gt) goto loc_826B370C;
	// lwz r11,1628(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1628);
loc_826B3664:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x826b3684
	if (ctx.cr6.eq) goto loc_826B3684;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826b3664
	if (ctx.cr6.lt) goto loc_826B3664;
	// b 0x826b370c
	goto loc_826B370C;
loc_826B3684:
	// addi r31,r29,1616
	ctx.r31.s64 = ctx.r29.s64 + 1616;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823327e0
	ctx.lr = 0x826B36A0;
	sub_823327E0(ctx, base);
	// lwz r11,1628(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1628);
	// rlwinm r28,r30,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b36b4
	if (ctx.cr0.eq) goto loc_826B36B4;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_826B36B4:
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r27,4608(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4608);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823327e0
	ctx.lr = 0x826B36D0;
	sub_823327E0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b36e0
	if (ctx.cr0.eq) goto loc_826B36E0;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_826B36E0:
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r29,4604(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4604);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823327e0
	ctx.lr = 0x826B36FC;
	sub_823327E0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b370c
	if (ctx.cr0.eq) goto loc_826B370C;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_826B370C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B3718"))) PPC_WEAK_FUNC(sub_826B3718);
PPC_FUNC_IMPL(__imp__sub_826B3718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x826b3758
	if (ctx.cr6.eq) goto loc_826B3758;
	// addi r4,r31,4628
	ctx.r4.s64 = ctx.r31.s64 + 4628;
	// bl 0x826b3880
	ctx.lr = 0x826B373C;
	sub_826B3880(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r31,4664
	ctx.r3.s64 = ctx.r31.s64 + 4664;
	// li r5,36
	ctx.r5.s64 = 36;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// addi r4,r11,1652
	ctx.r4.s64 = ctx.r11.s64 + 1652;
	// bl 0x82a4ea80
	ctx.lr = 0x826B3758;
	sub_82A4EA80(ctx, base);
loc_826B3758:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B3770"))) PPC_WEAK_FUNC(sub_826B3770);
PPC_FUNC_IMPL(__imp__sub_826B3770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x826b3814
	if (ctx.cr6.eq) goto loc_826B3814;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x826b37f4
	if (ctx.cr6.eq) goto loc_826B37F4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,14928
	ctx.r4.s64 = ctx.r11.s64 + 14928;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B37B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4608);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B37D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4604);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B37E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1664(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x826b3850
	goto loc_826B3850;
loc_826B37F4:
	// lwz r3,4608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4608);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B380C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x826b384c
	goto loc_826B384C;
loc_826B3814:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,14928
	ctx.r4.s64 = ctx.r11.s64 + 14928;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B3830;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4608);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B3848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
loc_826B384C:
	// lwz r3,4604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4604);
loc_826B3850:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B3860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,4620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4620, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B3880"))) PPC_WEAK_FUNC(sub_826B3880);
PPC_FUNC_IMPL(__imp__sub_826B3880) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,4620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4620);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826b38cc
	if (ctx.cr6.eq) goto loc_826B38CC;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// addi r4,r11,1700
	ctx.r4.s64 = ctx.r11.s64 + 1700;
	// bl 0x82a4ea80
	ctx.lr = 0x826B38C8;
	sub_82A4EA80(ctx, base);
	// b 0x826b3964
	goto loc_826B3964;
loc_826B38CC:
	// lwz r11,4592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4592);
	// lfs f0,2060(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2060);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2056(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2056);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,4596(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4596);
	// lfs f12,2064(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2064);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f11,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f11,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1448);
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
	ctx.lr = 0x826B3918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,4700(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4700);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,-27804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27804);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4704(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4704);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fsubs f13,f31,f1
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fadds f12,f1,f31
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x826b3964
	if (!ctx.cr6.lt) goto loc_826B3964;
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
loc_826B3964:
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

__attribute__((alias("__imp__sub_826B3980"))) PPC_WEAK_FUNC(sub_826B3980);
PPC_FUNC_IMPL(__imp__sub_826B3980) {
	PPC_FUNC_PROLOGUE();
	// b 0x827e2578
	sub_827E2578(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B3988"))) PPC_WEAK_FUNC(sub_826B3988);
PPC_FUNC_IMPL(__imp__sub_826B3988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4664(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4664);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4668(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4668);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4672(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4672);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4676(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4676);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4680(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4680);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4684(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4684);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4688(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4688);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4692(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4692);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4696(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4696);
	ctx.f6.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f7,28(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f6,32(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B39D8"))) PPC_WEAK_FUNC(sub_826B39D8);
PPC_FUNC_IMPL(__imp__sub_826B39D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4620(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4620);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x826b3a20
	if (ctx.cr6.eq) goto loc_826B3A20;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826b3a08
	if (ctx.cr6.eq) goto loc_826B3A08;
	// bl 0x826a0100
	ctx.lr = 0x826B3A04;
	sub_826A0100(ctx, base);
	// b 0x826b3a38
	goto loc_826B3A38;
loc_826B3A08:
	// lwz r11,4608(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4608);
	// lwz r10,848(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 848);
	// lwz r11,836(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 836);
	// mulli r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 * 80;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x826b3a34
	goto loc_826B3A34;
loc_826B3A20:
	// lwz r11,4604(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4604);
	// lwz r9,848(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 848);
	// lwz r10,836(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 836);
	// mulli r11,r9,80
	ctx.r11.s64 = ctx.r9.s64 * 80;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_826B3A34:
	// bl 0x823339b8
	ctx.lr = 0x826B3A38;
	sub_823339B8(ctx, base);
loc_826B3A38:
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

__attribute__((alias("__imp__sub_826B3A50"))) PPC_WEAK_FUNC(sub_826B3A50);
PPC_FUNC_IMPL(__imp__sub_826B3A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826b3a8c
	if (ctx.cr6.eq) goto loc_826B3A8C;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x826B3A88;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x826B3A8C;
	sub_82409C40(ctx, base);
loc_826B3A8C:
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x8251a260
	ctx.lr = 0x826B3A94;
	sub_8251A260(ctx, base);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x827da008
	ctx.lr = 0x826B3AA8;
	sub_827DA008(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b3afc
	if (ctx.cr6.eq) goto loc_826B3AFC;
	// bl 0x82643c20
	ctx.lr = 0x826B3AB8;
	sub_82643C20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b3afc
	if (ctx.cr0.eq) goto loc_826B3AFC;
	// lwz r31,1776(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1776);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4608);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B3ADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4604);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B3AF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4620, ctx.r11.u32);
loc_826B3AFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B3B18"))) PPC_WEAK_FUNC(sub_826B3B18);
PPC_FUNC_IMPL(__imp__sub_826B3B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x826B3B20;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// stfs f31,268(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// bl 0x827ebf48
	ctx.lr = 0x826B3B44;
	sub_827EBF48(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x826b3d04
	if (ctx.cr0.eq) goto loc_826B3D04;
	// lwz r11,4616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4616);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826b3c70
	if (!ctx.cr6.eq) goto loc_826B3C70;
	// lwz r11,1900(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1900);
	// lwz r11,928(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 928);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b3c70
	if (ctx.cr0.eq) goto loc_826B3C70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B3B84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4608);
	// stw r27,4616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4616, ctx.r27.u32);
	// lbz r11,820(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 820);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826b3c30
	if (ctx.cr0.eq) goto loc_826B3C30;
	// lwz r10,4604(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4604);
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,14928
	ctx.r4.s64 = ctx.r11.s64 + 14928;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,1036(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1036, ctx.r29.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4604(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4604);
	// lfs f0,1016(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1016);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1012(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1012, temp.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B3BCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4608);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B3BE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4604);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B3BFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,4620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4620, ctx.r27.u32);
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r10,14928
	ctx.r10.s64 = ctx.r10.s64 + 14928;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f1,32716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32716);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826b4048
	ctx.lr = 0x826B3C2C;
	sub_826B4048(ctx, base);
	// b 0x826b3c70
	goto loc_826B3C70;
loc_826B3C30:
	// lwz r11,4604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4604);
	// lbz r11,820(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 820);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826b3c70
	if (ctx.cr0.eq) goto loc_826B3C70;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,14928
	ctx.r4.s64 = ctx.r11.s64 + 14928;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B3C5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4604);
	// stw r29,1036(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1036, ctx.r29.u32);
	// lwz r11,4604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4604);
	// lfs f0,1016(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1016);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1012(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1012, temp.u32);
loc_826B3C70:
	// lwz r11,1900(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1900);
	// lwz r11,928(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 928);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826b3c84
	if (!ctx.cr0.eq) goto loc_826B3C84;
	// stw r29,4616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4616, ctx.r29.u32);
loc_826B3C84:
	// lwz r11,1412(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b3d04
	if (ctx.cr6.eq) goto loc_826B3D04;
	// lwz r11,924(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 924);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826b3cac
	if (ctx.cr6.eq) goto loc_826B3CAC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x826b3cac
	if (ctx.cr6.eq) goto loc_826B3CAC;
	// stb r29,4624(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4624, ctx.r29.u8);
	// b 0x826b3cb0
	goto loc_826B3CB0;
loc_826B3CAC:
	// stb r27,4624(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4624, ctx.r27.u8);
loc_826B3CB0:
	// addi r29,r31,4628
	ctx.r29.s64 = ctx.r31.s64 + 4628;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x826b3880
	ctx.lr = 0x826B3CC0;
	sub_826B3880(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x826b3cf4
	if (!ctx.cr6.lt) goto loc_826B3CF4;
	// addi r30,r31,4664
	ctx.r30.s64 = ctx.r31.s64 + 4664;
	// addi r6,r1,268
	ctx.r6.s64 = ctx.r1.s64 + 268;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826b4118
	ctx.lr = 0x826B3CE8;
	sub_826B4118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826b3cfc
	goto loc_826B3CFC;
loc_826B3CF4:
	// addi r3,r31,4664
	ctx.r3.s64 = ctx.r31.s64 + 4664;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_826B3CFC:
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82a4ea80
	ctx.lr = 0x826B3D04;
	sub_82A4EA80(ctx, base);
loc_826B3D04:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e2e00
	ctx.lr = 0x826B3D1C;
	sub_827E2E00(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

