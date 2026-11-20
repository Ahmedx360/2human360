#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823F4B40"))) PPC_WEAK_FUNC(sub_823F4B40);
PPC_FUNC_IMPL(__imp__sub_823F4B40) {
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
	// bl 0x823f1190
	ctx.lr = 0x823F4B58;
	sub_823F1190(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// li r7,27
	ctx.r7.s64 = 27;
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f0,19292(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19292);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r8,-25176
	ctx.r11.s64 = ctx.r8.s64 + -25176;
	// lfs f13,19288(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19288);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,19284(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19284);
	ctx.f0.f64 = double(temp.f32);
	// li r10,43
	ctx.r10.s64 = 43;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823f4be8
	if (ctx.cr6.eq) goto loc_823F4BE8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r5,r11,9680
	ctx.r5.s64 = ctx.r11.s64 + 9680;
	// addi r4,r10,9716
	ctx.r4.s64 = ctx.r10.s64 + 9716;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r31,252
	ctx.r6.s64 = ctx.r31.s64 + 252;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x828c5740
	ctx.lr = 0x823F4BE8;
	sub_828C5740(ctx, base);
loc_823F4BE8:
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

__attribute__((alias("__imp__sub_823F4C00"))) PPC_WEAK_FUNC(sub_823F4C00);
PPC_FUNC_IMPL(__imp__sub_823F4C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// addi r11,r11,-25176
	ctx.r11.s64 = ctx.r11.s64 + -25176;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82333960
	ctx.lr = 0x823F4C30;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833238
	ctx.lr = 0x823F4C38;
	sub_82833238(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f4c48
	if (ctx.cr0.eq) goto loc_823F4C48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x823F4C48;
	sub_82332DB8(ctx, base);
loc_823F4C48:
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

__attribute__((alias("__imp__sub_823F4C68"))) PPC_WEAK_FUNC(sub_823F4C68);
PPC_FUNC_IMPL(__imp__sub_823F4C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x823f4aa8
	ctx.lr = 0x823F4C88;
	sub_823F4AA8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x823f4c9c
	if (ctx.cr6.eq) goto loc_823F4C9C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f1260
	ctx.lr = 0x823F4C9C;
	sub_823F1260(ctx, base);
loc_823F4C9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F4CB8"))) PPC_WEAK_FUNC(sub_823F4CB8);
PPC_FUNC_IMPL(__imp__sub_823F4CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823f4cf0
	if (ctx.cr6.eq) goto loc_823F4CF0;
	// bl 0x823f4aa8
	ctx.lr = 0x823F4CE0;
	sub_823F4AA8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823f4cf0
	if (!ctx.cr6.eq) goto loc_823F4CF0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823f4cfc
	goto loc_823F4CFC;
loc_823F4CF0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f13d0
	ctx.lr = 0x823F4CFC;
	sub_823F13D0(ctx, base);
loc_823F4CFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F4D18"))) PPC_WEAK_FUNC(sub_823F4D18);
PPC_FUNC_IMPL(__imp__sub_823F4D18) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f4aa8
	sub_823F4AA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F4D20"))) PPC_WEAK_FUNC(sub_823F4D20);
PPC_FUNC_IMPL(__imp__sub_823F4D20) {
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
	ctx.lr = 0x823F4D40;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f4d70
	if (ctx.cr0.eq) goto loc_823F4D70;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f14e0
	ctx.lr = 0x823F4D54;
	sub_823F14E0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-25176
	ctx.r11.s64 = ctx.r11.s64 + -25176;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,252(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,252(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// b 0x823f4d74
	goto loc_823F4D74;
loc_823F4D70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F4D74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F4D90"))) PPC_WEAK_FUNC(sub_823F4D90);
PPC_FUNC_IMPL(__imp__sub_823F4D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,9656
	ctx.r3.s64 = ctx.r11.s64 + 9656;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F4DA0"))) PPC_WEAK_FUNC(sub_823F4DA0);
PPC_FUNC_IMPL(__imp__sub_823F4DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31412);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f4de0
	if (!ctx.cr0.eq) goto loc_823F4DE0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31412(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31412, ctx.r11.u32);
	// addi r3,r9,9656
	ctx.r3.s64 = ctx.r9.s64 + 9656;
	// bl 0x82816528
	ctx.lr = 0x823F4DD8;
	sub_82816528(ctx, base);
	// stw r3,31408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31408, ctx.r3.u32);
	// b 0x823f4de4
	goto loc_823F4DE4;
loc_823F4DE0:
	// lwz r3,31408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31408);
loc_823F4DE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F4DF8"))) PPC_WEAK_FUNC(sub_823F4DF8);
PPC_FUNC_IMPL(__imp__sub_823F4DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f4aa8
	ctx.lr = 0x823F4E18;
	sub_823F4AA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F4E2C;
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

__attribute__((alias("__imp__sub_823F4E48"))) PPC_WEAK_FUNC(sub_823F4E48);
PPC_FUNC_IMPL(__imp__sub_823F4E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-27964
	ctx.r31.s64 = ctx.r11.s64 + -27964;
	// lwz r11,-27856(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27856);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f4e90
	if (!ctx.cr0.eq) goto loc_823F4E90;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-26344
	ctx.r9.s64 = ctx.r9.s64 + -26344;
	// stw r11,-27856(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27856, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-11528
	ctx.r3.s64 = ctx.r11.s64 + -11528;
	// bl 0x82a4c758
	ctx.lr = 0x823F4E90;
	sub_82A4C758(ctx, base);
loc_823F4E90:
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

__attribute__((alias("__imp__sub_823F4EA8"))) PPC_WEAK_FUNC(sub_823F4EA8);
PPC_FUNC_IMPL(__imp__sub_823F4EA8) {
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
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x823F4EBC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f4ecc
	if (ctx.cr0.eq) goto loc_823F4ECC;
	// bl 0x823f4ee0
	ctx.lr = 0x823F4EC8;
	sub_823F4EE0(ctx, base);
	// b 0x823f4ed0
	goto loc_823F4ED0;
loc_823F4ECC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F4ED0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F4EE0"))) PPC_WEAK_FUNC(sub_823F4EE0);
PPC_FUNC_IMPL(__imp__sub_823F4EE0) {
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
	// bl 0x823f1190
	ctx.lr = 0x823F4EF8;
	sub_823F1190(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// li r9,25
	ctx.r9.s64 = 25;
	// addi r10,r10,-26424
	ctx.r10.s64 = ctx.r10.s64 + -26424;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// li r8,22
	ctx.r8.s64 = 22;
	// lfs f0,19260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19260);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r8,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_823F4F58"))) PPC_WEAK_FUNC(sub_823F4F58);
PPC_FUNC_IMPL(__imp__sub_823F4F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// addi r11,r11,-26424
	ctx.r11.s64 = ctx.r11.s64 + -26424;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82333960
	ctx.lr = 0x823F4F88;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833238
	ctx.lr = 0x823F4F90;
	sub_82833238(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f4fa0
	if (ctx.cr0.eq) goto loc_823F4FA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x823F4FA0;
	sub_82332DB8(ctx, base);
loc_823F4FA0:
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

__attribute__((alias("__imp__sub_823F4FC0"))) PPC_WEAK_FUNC(sub_823F4FC0);
PPC_FUNC_IMPL(__imp__sub_823F4FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x823f4e48
	ctx.lr = 0x823F4FE0;
	sub_823F4E48(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x823f4ff4
	if (ctx.cr6.eq) goto loc_823F4FF4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f1260
	ctx.lr = 0x823F4FF4;
	sub_823F1260(ctx, base);
loc_823F4FF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F5010"))) PPC_WEAK_FUNC(sub_823F5010);
PPC_FUNC_IMPL(__imp__sub_823F5010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823f5048
	if (ctx.cr6.eq) goto loc_823F5048;
	// bl 0x823f4e48
	ctx.lr = 0x823F5038;
	sub_823F4E48(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823f5048
	if (!ctx.cr6.eq) goto loc_823F5048;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823f5054
	goto loc_823F5054;
loc_823F5048:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f13d0
	ctx.lr = 0x823F5054;
	sub_823F13D0(ctx, base);
loc_823F5054:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F5070"))) PPC_WEAK_FUNC(sub_823F5070);
PPC_FUNC_IMPL(__imp__sub_823F5070) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f4e48
	sub_823F4E48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F5078"))) PPC_WEAK_FUNC(sub_823F5078);
PPC_FUNC_IMPL(__imp__sub_823F5078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,9336
	ctx.r3.s64 = ctx.r11.s64 + 9336;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F5088"))) PPC_WEAK_FUNC(sub_823F5088);
PPC_FUNC_IMPL(__imp__sub_823F5088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31404(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31404);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f50c8
	if (!ctx.cr0.eq) goto loc_823F50C8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31404(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31404, ctx.r11.u32);
	// addi r3,r9,9336
	ctx.r3.s64 = ctx.r9.s64 + 9336;
	// bl 0x82816528
	ctx.lr = 0x823F50C0;
	sub_82816528(ctx, base);
	// stw r3,31400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31400, ctx.r3.u32);
	// b 0x823f50cc
	goto loc_823F50CC;
loc_823F50C8:
	// lwz r3,31400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31400);
loc_823F50CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F50E0"))) PPC_WEAK_FUNC(sub_823F50E0);
PPC_FUNC_IMPL(__imp__sub_823F50E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f4e48
	ctx.lr = 0x823F5100;
	sub_823F4E48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F5114;
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

__attribute__((alias("__imp__sub_823F5130"))) PPC_WEAK_FUNC(sub_823F5130);
PPC_FUNC_IMPL(__imp__sub_823F5130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-27580
	ctx.r31.s64 = ctx.r11.s64 + -27580;
	// lwz r11,-28100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28100);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f5178
	if (!ctx.cr0.eq) goto loc_823F5178;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-25200
	ctx.r9.s64 = ctx.r9.s64 + -25200;
	// stw r11,-28100(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28100, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-11504
	ctx.r3.s64 = ctx.r11.s64 + -11504;
	// bl 0x82a4c758
	ctx.lr = 0x823F5178;
	sub_82A4C758(ctx, base);
loc_823F5178:
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

__attribute__((alias("__imp__sub_823F5190"))) PPC_WEAK_FUNC(sub_823F5190);
PPC_FUNC_IMPL(__imp__sub_823F5190) {
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
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x823F51A4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f51b4
	if (ctx.cr0.eq) goto loc_823F51B4;
	// bl 0x823f51c8
	ctx.lr = 0x823F51B0;
	sub_823F51C8(ctx, base);
	// b 0x823f51b8
	goto loc_823F51B8;
loc_823F51B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F51B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F51C8"))) PPC_WEAK_FUNC(sub_823F51C8);
PPC_FUNC_IMPL(__imp__sub_823F51C8) {
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
	// bl 0x823f1190
	ctx.lr = 0x823F51E0;
	sub_823F1190(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// li r7,24
	ctx.r7.s64 = 24;
	// lfs f0,19224(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19224);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r8,-25280
	ctx.r11.s64 = ctx.r8.s64 + -25280;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r8,35
	ctx.r8.s64 = 35;
	// lfs f13,19220(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19220);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,19216(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19216);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_823F5250"))) PPC_WEAK_FUNC(sub_823F5250);
PPC_FUNC_IMPL(__imp__sub_823F5250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// addi r11,r11,-25280
	ctx.r11.s64 = ctx.r11.s64 + -25280;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82333960
	ctx.lr = 0x823F5280;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833238
	ctx.lr = 0x823F5288;
	sub_82833238(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f5298
	if (ctx.cr0.eq) goto loc_823F5298;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x823F5298;
	sub_82332DB8(ctx, base);
loc_823F5298:
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

__attribute__((alias("__imp__sub_823F52B8"))) PPC_WEAK_FUNC(sub_823F52B8);
PPC_FUNC_IMPL(__imp__sub_823F52B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x823f5130
	ctx.lr = 0x823F52D8;
	sub_823F5130(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x823f52ec
	if (ctx.cr6.eq) goto loc_823F52EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f1260
	ctx.lr = 0x823F52EC;
	sub_823F1260(ctx, base);
loc_823F52EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F5308"))) PPC_WEAK_FUNC(sub_823F5308);
PPC_FUNC_IMPL(__imp__sub_823F5308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823f5340
	if (ctx.cr6.eq) goto loc_823F5340;
	// bl 0x823f5130
	ctx.lr = 0x823F5330;
	sub_823F5130(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823f5340
	if (!ctx.cr6.eq) goto loc_823F5340;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823f534c
	goto loc_823F534C;
loc_823F5340:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f13d0
	ctx.lr = 0x823F534C;
	sub_823F13D0(ctx, base);
loc_823F534C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F5368"))) PPC_WEAK_FUNC(sub_823F5368);
PPC_FUNC_IMPL(__imp__sub_823F5368) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f5130
	sub_823F5130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F5370"))) PPC_WEAK_FUNC(sub_823F5370);
PPC_FUNC_IMPL(__imp__sub_823F5370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x823F5390;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f53b8
	if (ctx.cr0.eq) goto loc_823F53B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f14e0
	ctx.lr = 0x823F53A4;
	sub_823F14E0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-25280
	ctx.r11.s64 = ctx.r11.s64 + -25280;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x823f53bc
	goto loc_823F53BC;
loc_823F53B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F53BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F53D8"))) PPC_WEAK_FUNC(sub_823F53D8);
PPC_FUNC_IMPL(__imp__sub_823F53D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,9632
	ctx.r3.s64 = ctx.r11.s64 + 9632;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F53E8"))) PPC_WEAK_FUNC(sub_823F53E8);
PPC_FUNC_IMPL(__imp__sub_823F53E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31396(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31396);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f5428
	if (!ctx.cr0.eq) goto loc_823F5428;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31396(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31396, ctx.r11.u32);
	// addi r3,r9,9632
	ctx.r3.s64 = ctx.r9.s64 + 9632;
	// bl 0x82816528
	ctx.lr = 0x823F5420;
	sub_82816528(ctx, base);
	// stw r3,31392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31392, ctx.r3.u32);
	// b 0x823f542c
	goto loc_823F542C;
loc_823F5428:
	// lwz r3,31392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31392);
loc_823F542C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F5440"))) PPC_WEAK_FUNC(sub_823F5440);
PPC_FUNC_IMPL(__imp__sub_823F5440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f5130
	ctx.lr = 0x823F5460;
	sub_823F5130(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F5474;
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

__attribute__((alias("__imp__sub_823F5490"))) PPC_WEAK_FUNC(sub_823F5490);
PPC_FUNC_IMPL(__imp__sub_823F5490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-27572
	ctx.r31.s64 = ctx.r11.s64 + -27572;
	// lwz r11,-27764(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27764);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f54d8
	if (!ctx.cr0.eq) goto loc_823F54D8;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-25304
	ctx.r9.s64 = ctx.r9.s64 + -25304;
	// stw r11,-27764(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27764, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-11480
	ctx.r3.s64 = ctx.r11.s64 + -11480;
	// bl 0x82a4c758
	ctx.lr = 0x823F54D8;
	sub_82A4C758(ctx, base);
loc_823F54D8:
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

__attribute__((alias("__imp__sub_823F54F0"))) PPC_WEAK_FUNC(sub_823F54F0);
PPC_FUNC_IMPL(__imp__sub_823F54F0) {
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
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x823F5504;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5514
	if (ctx.cr0.eq) goto loc_823F5514;
	// bl 0x823f5528
	ctx.lr = 0x823F5510;
	sub_823F5528(ctx, base);
	// b 0x823f5518
	goto loc_823F5518;
loc_823F5514:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F5518:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F5528"))) PPC_WEAK_FUNC(sub_823F5528);
PPC_FUNC_IMPL(__imp__sub_823F5528) {
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
	// bl 0x823f1190
	ctx.lr = 0x823F5540;
	sub_823F1190(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32235
	ctx.r7.s64 = -2112552960;
	// li r11,23
	ctx.r11.s64 = 23;
	// lfs f0,19280(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19280);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r7,-25384
	ctx.r10.s64 = ctx.r7.s64 + -25384;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f13,19276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19276);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lfs f0,19272(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19272);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_823F55B0"))) PPC_WEAK_FUNC(sub_823F55B0);
PPC_FUNC_IMPL(__imp__sub_823F55B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// addi r11,r11,-25384
	ctx.r11.s64 = ctx.r11.s64 + -25384;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82333960
	ctx.lr = 0x823F55E0;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833238
	ctx.lr = 0x823F55E8;
	sub_82833238(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f55f8
	if (ctx.cr0.eq) goto loc_823F55F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x823F55F8;
	sub_82332DB8(ctx, base);
loc_823F55F8:
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

__attribute__((alias("__imp__sub_823F5618"))) PPC_WEAK_FUNC(sub_823F5618);
PPC_FUNC_IMPL(__imp__sub_823F5618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x823f5490
	ctx.lr = 0x823F5638;
	sub_823F5490(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x823f564c
	if (ctx.cr6.eq) goto loc_823F564C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f1260
	ctx.lr = 0x823F564C;
	sub_823F1260(ctx, base);
loc_823F564C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F5668"))) PPC_WEAK_FUNC(sub_823F5668);
PPC_FUNC_IMPL(__imp__sub_823F5668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823f56a0
	if (ctx.cr6.eq) goto loc_823F56A0;
	// bl 0x823f5490
	ctx.lr = 0x823F5690;
	sub_823F5490(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823f56a0
	if (!ctx.cr6.eq) goto loc_823F56A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823f56ac
	goto loc_823F56AC;
loc_823F56A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f13d0
	ctx.lr = 0x823F56AC;
	sub_823F13D0(ctx, base);
loc_823F56AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F56C8"))) PPC_WEAK_FUNC(sub_823F56C8);
PPC_FUNC_IMPL(__imp__sub_823F56C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f5490
	sub_823F5490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F56D0"))) PPC_WEAK_FUNC(sub_823F56D0);
PPC_FUNC_IMPL(__imp__sub_823F56D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x823F56F0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f5718
	if (ctx.cr0.eq) goto loc_823F5718;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f14e0
	ctx.lr = 0x823F5704;
	sub_823F14E0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-25384
	ctx.r11.s64 = ctx.r11.s64 + -25384;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x823f571c
	goto loc_823F571C;
loc_823F5718:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F571C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F5738"))) PPC_WEAK_FUNC(sub_823F5738);
PPC_FUNC_IMPL(__imp__sub_823F5738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,9604
	ctx.r3.s64 = ctx.r11.s64 + 9604;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F5748"))) PPC_WEAK_FUNC(sub_823F5748);
PPC_FUNC_IMPL(__imp__sub_823F5748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31388(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31388);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f5788
	if (!ctx.cr0.eq) goto loc_823F5788;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31388(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31388, ctx.r11.u32);
	// addi r3,r9,9604
	ctx.r3.s64 = ctx.r9.s64 + 9604;
	// bl 0x82816528
	ctx.lr = 0x823F5780;
	sub_82816528(ctx, base);
	// stw r3,31384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31384, ctx.r3.u32);
	// b 0x823f578c
	goto loc_823F578C;
loc_823F5788:
	// lwz r3,31384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31384);
loc_823F578C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F57A0"))) PPC_WEAK_FUNC(sub_823F57A0);
PPC_FUNC_IMPL(__imp__sub_823F57A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f5490
	ctx.lr = 0x823F57C0;
	sub_823F5490(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F57D4;
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

__attribute__((alias("__imp__sub_823F57F0"))) PPC_WEAK_FUNC(sub_823F57F0);
PPC_FUNC_IMPL(__imp__sub_823F57F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-27660
	ctx.r31.s64 = ctx.r11.s64 + -27660;
	// lwz r11,-27900(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27900);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f5838
	if (!ctx.cr0.eq) goto loc_823F5838;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-25408
	ctx.r9.s64 = ctx.r9.s64 + -25408;
	// stw r11,-27900(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27900, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-11456
	ctx.r3.s64 = ctx.r11.s64 + -11456;
	// bl 0x82a4c758
	ctx.lr = 0x823F5838;
	sub_82A4C758(ctx, base);
loc_823F5838:
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

__attribute__((alias("__imp__sub_823F5850"))) PPC_WEAK_FUNC(sub_823F5850);
PPC_FUNC_IMPL(__imp__sub_823F5850) {
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
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x823F5864;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5874
	if (ctx.cr0.eq) goto loc_823F5874;
	// bl 0x823f5888
	ctx.lr = 0x823F5870;
	sub_823F5888(ctx, base);
	// b 0x823f5878
	goto loc_823F5878;
loc_823F5874:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F5878:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F5888"))) PPC_WEAK_FUNC(sub_823F5888);
PPC_FUNC_IMPL(__imp__sub_823F5888) {
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
	// bl 0x823f1190
	ctx.lr = 0x823F58A0;
	sub_823F1190(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// li r7,21
	ctx.r7.s64 = 21;
	// lfs f0,19248(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19248);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r8,-25488
	ctx.r11.s64 = ctx.r8.s64 + -25488;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r8,30
	ctx.r8.s64 = 30;
	// lfs f13,19256(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19256);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,19252(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19252);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_823F5910"))) PPC_WEAK_FUNC(sub_823F5910);
PPC_FUNC_IMPL(__imp__sub_823F5910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// addi r11,r11,-25488
	ctx.r11.s64 = ctx.r11.s64 + -25488;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82333960
	ctx.lr = 0x823F5940;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833238
	ctx.lr = 0x823F5948;
	sub_82833238(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f5958
	if (ctx.cr0.eq) goto loc_823F5958;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x823F5958;
	sub_82332DB8(ctx, base);
loc_823F5958:
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

__attribute__((alias("__imp__sub_823F5978"))) PPC_WEAK_FUNC(sub_823F5978);
PPC_FUNC_IMPL(__imp__sub_823F5978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x823f57f0
	ctx.lr = 0x823F5998;
	sub_823F57F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x823f59ac
	if (ctx.cr6.eq) goto loc_823F59AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f1260
	ctx.lr = 0x823F59AC;
	sub_823F1260(ctx, base);
loc_823F59AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F59C8"))) PPC_WEAK_FUNC(sub_823F59C8);
PPC_FUNC_IMPL(__imp__sub_823F59C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823f5a00
	if (ctx.cr6.eq) goto loc_823F5A00;
	// bl 0x823f57f0
	ctx.lr = 0x823F59F0;
	sub_823F57F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823f5a00
	if (!ctx.cr6.eq) goto loc_823F5A00;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823f5a0c
	goto loc_823F5A0C;
loc_823F5A00:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f13d0
	ctx.lr = 0x823F5A0C;
	sub_823F13D0(ctx, base);
loc_823F5A0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F5A28"))) PPC_WEAK_FUNC(sub_823F5A28);
PPC_FUNC_IMPL(__imp__sub_823F5A28) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f57f0
	sub_823F57F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F5A30"))) PPC_WEAK_FUNC(sub_823F5A30);
PPC_FUNC_IMPL(__imp__sub_823F5A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x823F5A50;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f5a78
	if (ctx.cr0.eq) goto loc_823F5A78;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f14e0
	ctx.lr = 0x823F5A64;
	sub_823F14E0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-25488
	ctx.r11.s64 = ctx.r11.s64 + -25488;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x823f5a7c
	goto loc_823F5A7C;
loc_823F5A78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F5A7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F5A98"))) PPC_WEAK_FUNC(sub_823F5A98);
PPC_FUNC_IMPL(__imp__sub_823F5A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,9580
	ctx.r3.s64 = ctx.r11.s64 + 9580;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F5AA8"))) PPC_WEAK_FUNC(sub_823F5AA8);
PPC_FUNC_IMPL(__imp__sub_823F5AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31380(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31380);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f5ae8
	if (!ctx.cr0.eq) goto loc_823F5AE8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31380(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31380, ctx.r11.u32);
	// addi r3,r9,9580
	ctx.r3.s64 = ctx.r9.s64 + 9580;
	// bl 0x82816528
	ctx.lr = 0x823F5AE0;
	sub_82816528(ctx, base);
	// stw r3,31376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31376, ctx.r3.u32);
	// b 0x823f5aec
	goto loc_823F5AEC;
loc_823F5AE8:
	// lwz r3,31376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31376);
loc_823F5AEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F5B00"))) PPC_WEAK_FUNC(sub_823F5B00);
PPC_FUNC_IMPL(__imp__sub_823F5B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f57f0
	ctx.lr = 0x823F5B20;
	sub_823F57F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F5B34;
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

__attribute__((alias("__imp__sub_823F5B50"))) PPC_WEAK_FUNC(sub_823F5B50);
PPC_FUNC_IMPL(__imp__sub_823F5B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-27692
	ctx.r31.s64 = ctx.r11.s64 + -27692;
	// lwz r11,-27684(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27684);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f5b98
	if (!ctx.cr0.eq) goto loc_823F5B98;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-25512
	ctx.r9.s64 = ctx.r9.s64 + -25512;
	// stw r11,-27684(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27684, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-11432
	ctx.r3.s64 = ctx.r11.s64 + -11432;
	// bl 0x82a4c758
	ctx.lr = 0x823F5B98;
	sub_82A4C758(ctx, base);
loc_823F5B98:
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

__attribute__((alias("__imp__sub_823F5BB0"))) PPC_WEAK_FUNC(sub_823F5BB0);
PPC_FUNC_IMPL(__imp__sub_823F5BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x823F5BC8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f5bfc
	if (ctx.cr0.eq) goto loc_823F5BFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f1190
	ctx.lr = 0x823F5BD8;
	sub_823F1190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r10,26
	ctx.r10.s64 = 26;
	// addi r11,r11,-25592
	ctx.r11.s64 = ctx.r11.s64 + -25592;
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// b 0x823f5c00
	goto loc_823F5C00;
loc_823F5BFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F5C00:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F5C18"))) PPC_WEAK_FUNC(sub_823F5C18);
PPC_FUNC_IMPL(__imp__sub_823F5C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// addi r11,r11,-25592
	ctx.r11.s64 = ctx.r11.s64 + -25592;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82333960
	ctx.lr = 0x823F5C48;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833238
	ctx.lr = 0x823F5C50;
	sub_82833238(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f5c60
	if (ctx.cr0.eq) goto loc_823F5C60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x823F5C60;
	sub_82332DB8(ctx, base);
loc_823F5C60:
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

__attribute__((alias("__imp__sub_823F5C80"))) PPC_WEAK_FUNC(sub_823F5C80);
PPC_FUNC_IMPL(__imp__sub_823F5C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,9552
	ctx.r3.s64 = ctx.r11.s64 + 9552;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F5C90"))) PPC_WEAK_FUNC(sub_823F5C90);
PPC_FUNC_IMPL(__imp__sub_823F5C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x823f5b50
	ctx.lr = 0x823F5CB0;
	sub_823F5B50(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x823f5cc4
	if (ctx.cr6.eq) goto loc_823F5CC4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f1260
	ctx.lr = 0x823F5CC4;
	sub_823F1260(ctx, base);
loc_823F5CC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F5CE0"))) PPC_WEAK_FUNC(sub_823F5CE0);
PPC_FUNC_IMPL(__imp__sub_823F5CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823f5d18
	if (ctx.cr6.eq) goto loc_823F5D18;
	// bl 0x823f5b50
	ctx.lr = 0x823F5D08;
	sub_823F5B50(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823f5d18
	if (!ctx.cr6.eq) goto loc_823F5D18;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823f5d24
	goto loc_823F5D24;
loc_823F5D18:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f13d0
	ctx.lr = 0x823F5D24;
	sub_823F13D0(ctx, base);
loc_823F5D24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F5D40"))) PPC_WEAK_FUNC(sub_823F5D40);
PPC_FUNC_IMPL(__imp__sub_823F5D40) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f5b50
	sub_823F5B50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F5D48"))) PPC_WEAK_FUNC(sub_823F5D48);
PPC_FUNC_IMPL(__imp__sub_823F5D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x823F5D68;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f5d90
	if (ctx.cr0.eq) goto loc_823F5D90;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f14e0
	ctx.lr = 0x823F5D7C;
	sub_823F14E0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-25592
	ctx.r11.s64 = ctx.r11.s64 + -25592;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x823f5d94
	goto loc_823F5D94;
loc_823F5D90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F5D94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F5DB0"))) PPC_WEAK_FUNC(sub_823F5DB0);
PPC_FUNC_IMPL(__imp__sub_823F5DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31372(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31372);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f5df0
	if (!ctx.cr0.eq) goto loc_823F5DF0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31372(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31372, ctx.r11.u32);
	// addi r3,r9,9552
	ctx.r3.s64 = ctx.r9.s64 + 9552;
	// bl 0x82816528
	ctx.lr = 0x823F5DE8;
	sub_82816528(ctx, base);
	// stw r3,31368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31368, ctx.r3.u32);
	// b 0x823f5df4
	goto loc_823F5DF4;
loc_823F5DF0:
	// lwz r3,31368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31368);
loc_823F5DF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F5E08"))) PPC_WEAK_FUNC(sub_823F5E08);
PPC_FUNC_IMPL(__imp__sub_823F5E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f5b50
	ctx.lr = 0x823F5E28;
	sub_823F5B50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F5E3C;
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

__attribute__((alias("__imp__sub_823F5E58"))) PPC_WEAK_FUNC(sub_823F5E58);
PPC_FUNC_IMPL(__imp__sub_823F5E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-27920
	ctx.r31.s64 = ctx.r11.s64 + -27920;
	// lwz r11,-28104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28104);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f5ea0
	if (!ctx.cr0.eq) goto loc_823F5EA0;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-25616
	ctx.r9.s64 = ctx.r9.s64 + -25616;
	// stw r11,-28104(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28104, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-11408
	ctx.r3.s64 = ctx.r11.s64 + -11408;
	// bl 0x82a4c758
	ctx.lr = 0x823F5EA0;
	sub_82A4C758(ctx, base);
loc_823F5EA0:
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

__attribute__((alias("__imp__sub_823F5EB8"))) PPC_WEAK_FUNC(sub_823F5EB8);
PPC_FUNC_IMPL(__imp__sub_823F5EB8) {
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
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x823F5ECC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5edc
	if (ctx.cr0.eq) goto loc_823F5EDC;
	// bl 0x823f5ef0
	ctx.lr = 0x823F5ED8;
	sub_823F5EF0(ctx, base);
	// b 0x823f5ee0
	goto loc_823F5EE0;
loc_823F5EDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F5EE0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F5EF0"))) PPC_WEAK_FUNC(sub_823F5EF0);
PPC_FUNC_IMPL(__imp__sub_823F5EF0) {
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
	// bl 0x823f1190
	ctx.lr = 0x823F5F08;
	sub_823F1190(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// li r7,22
	ctx.r7.s64 = 22;
	// lfs f0,19248(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19248);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r8,-25696
	ctx.r11.s64 = ctx.r8.s64 + -25696;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r8,31
	ctx.r8.s64 = 31;
	// lfs f13,19244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19244);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,19240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19240);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_823F5F78"))) PPC_WEAK_FUNC(sub_823F5F78);
PPC_FUNC_IMPL(__imp__sub_823F5F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// addi r11,r11,-25696
	ctx.r11.s64 = ctx.r11.s64 + -25696;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82333960
	ctx.lr = 0x823F5FA8;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833238
	ctx.lr = 0x823F5FB0;
	sub_82833238(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f5fc0
	if (ctx.cr0.eq) goto loc_823F5FC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x823F5FC0;
	sub_82332DB8(ctx, base);
loc_823F5FC0:
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

__attribute__((alias("__imp__sub_823F5FE0"))) PPC_WEAK_FUNC(sub_823F5FE0);
PPC_FUNC_IMPL(__imp__sub_823F5FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x823f5e58
	ctx.lr = 0x823F6000;
	sub_823F5E58(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x823f6014
	if (ctx.cr6.eq) goto loc_823F6014;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f1260
	ctx.lr = 0x823F6014;
	sub_823F1260(ctx, base);
loc_823F6014:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F6030"))) PPC_WEAK_FUNC(sub_823F6030);
PPC_FUNC_IMPL(__imp__sub_823F6030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823f6068
	if (ctx.cr6.eq) goto loc_823F6068;
	// bl 0x823f5e58
	ctx.lr = 0x823F6058;
	sub_823F5E58(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823f6068
	if (!ctx.cr6.eq) goto loc_823F6068;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823f6074
	goto loc_823F6074;
loc_823F6068:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f13d0
	ctx.lr = 0x823F6074;
	sub_823F13D0(ctx, base);
loc_823F6074:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F6090"))) PPC_WEAK_FUNC(sub_823F6090);
PPC_FUNC_IMPL(__imp__sub_823F6090) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f5e58
	sub_823F5E58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F6098"))) PPC_WEAK_FUNC(sub_823F6098);
PPC_FUNC_IMPL(__imp__sub_823F6098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x823F60B8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f60e0
	if (ctx.cr0.eq) goto loc_823F60E0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f14e0
	ctx.lr = 0x823F60CC;
	sub_823F14E0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-25696
	ctx.r11.s64 = ctx.r11.s64 + -25696;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x823f60e4
	goto loc_823F60E4;
loc_823F60E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F60E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F6100"))) PPC_WEAK_FUNC(sub_823F6100);
PPC_FUNC_IMPL(__imp__sub_823F6100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,9528
	ctx.r3.s64 = ctx.r11.s64 + 9528;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F6110"))) PPC_WEAK_FUNC(sub_823F6110);
PPC_FUNC_IMPL(__imp__sub_823F6110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31364(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31364);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f6150
	if (!ctx.cr0.eq) goto loc_823F6150;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31364(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31364, ctx.r11.u32);
	// addi r3,r9,9528
	ctx.r3.s64 = ctx.r9.s64 + 9528;
	// bl 0x82816528
	ctx.lr = 0x823F6148;
	sub_82816528(ctx, base);
	// stw r3,31360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31360, ctx.r3.u32);
	// b 0x823f6154
	goto loc_823F6154;
loc_823F6150:
	// lwz r3,31360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31360);
loc_823F6154:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F6168"))) PPC_WEAK_FUNC(sub_823F6168);
PPC_FUNC_IMPL(__imp__sub_823F6168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f5e58
	ctx.lr = 0x823F6188;
	sub_823F5E58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F619C;
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

__attribute__((alias("__imp__sub_823F61B8"))) PPC_WEAK_FUNC(sub_823F61B8);
PPC_FUNC_IMPL(__imp__sub_823F61B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-25780
	ctx.r31.s64 = ctx.r11.s64 + -25780;
	// lwz r11,-25776(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25776);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f6200
	if (!ctx.cr0.eq) goto loc_823F6200;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-22032
	ctx.r9.s64 = ctx.r9.s64 + -22032;
	// stw r11,-25776(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25776, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-11384
	ctx.r3.s64 = ctx.r11.s64 + -11384;
	// bl 0x82a4c758
	ctx.lr = 0x823F6200;
	sub_82A4C758(ctx, base);
loc_823F6200:
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

__attribute__((alias("__imp__sub_823F6218"))) PPC_WEAK_FUNC(sub_823F6218);
PPC_FUNC_IMPL(__imp__sub_823F6218) {
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
	// li r3,1552
	ctx.r3.s64 = 1552;
	// bl 0x82833108
	ctx.lr = 0x823F622C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f6240
	if (ctx.cr0.eq) goto loc_823F6240;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8270b320
	ctx.lr = 0x823F623C;
	sub_8270B320(ctx, base);
	// b 0x823f6244
	goto loc_823F6244;
loc_823F6240:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F6244:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F6258"))) PPC_WEAK_FUNC(sub_823F6258);
PPC_FUNC_IMPL(__imp__sub_823F6258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31356(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31356);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f6298
	if (!ctx.cr0.eq) goto loc_823F6298;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31356(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31356, ctx.r11.u32);
	// addi r3,r9,10092
	ctx.r3.s64 = ctx.r9.s64 + 10092;
	// bl 0x82816528
	ctx.lr = 0x823F6290;
	sub_82816528(ctx, base);
	// stw r3,31352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31352, ctx.r3.u32);
	// b 0x823f629c
	goto loc_823F629C;
loc_823F6298:
	// lwz r3,31352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31352);
loc_823F629C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F62B0"))) PPC_WEAK_FUNC(sub_823F62B0);
PPC_FUNC_IMPL(__imp__sub_823F62B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f61b8
	ctx.lr = 0x823F62D0;
	sub_823F61B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F62E4;
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

__attribute__((alias("__imp__sub_823F6300"))) PPC_WEAK_FUNC(sub_823F6300);
PPC_FUNC_IMPL(__imp__sub_823F6300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-26588
	ctx.r31.s64 = ctx.r11.s64 + -26588;
	// lwz r11,-26584(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26584);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f6348
	if (!ctx.cr0.eq) goto loc_823F6348;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-22052
	ctx.r9.s64 = ctx.r9.s64 + -22052;
	// stw r11,-26584(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26584, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-11360
	ctx.r3.s64 = ctx.r11.s64 + -11360;
	// bl 0x82a4c758
	ctx.lr = 0x823F6348;
	sub_82A4C758(ctx, base);
loc_823F6348:
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

__attribute__((alias("__imp__sub_823F6360"))) PPC_WEAK_FUNC(sub_823F6360);
PPC_FUNC_IMPL(__imp__sub_823F6360) {
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
	// li r3,1440
	ctx.r3.s64 = 1440;
	// bl 0x82833108
	ctx.lr = 0x823F6374;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f6388
	if (ctx.cr0.eq) goto loc_823F6388;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82708208
	ctx.lr = 0x823F6384;
	sub_82708208(ctx, base);
	// b 0x823f638c
	goto loc_823F638C;
loc_823F6388:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F638C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F63A0"))) PPC_WEAK_FUNC(sub_823F63A0);
PPC_FUNC_IMPL(__imp__sub_823F63A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1440
	ctx.r3.s64 = 1440;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F63A8"))) PPC_WEAK_FUNC(sub_823F63A8);
PPC_FUNC_IMPL(__imp__sub_823F63A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31348(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31348);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f63e8
	if (!ctx.cr0.eq) goto loc_823F63E8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31348, ctx.r11.u32);
	// addi r3,r9,10080
	ctx.r3.s64 = ctx.r9.s64 + 10080;
	// bl 0x82816528
	ctx.lr = 0x823F63E0;
	sub_82816528(ctx, base);
	// stw r3,31344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31344, ctx.r3.u32);
	// b 0x823f63ec
	goto loc_823F63EC;
loc_823F63E8:
	// lwz r3,31344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31344);
loc_823F63EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F6400"))) PPC_WEAK_FUNC(sub_823F6400);
PPC_FUNC_IMPL(__imp__sub_823F6400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f6300
	ctx.lr = 0x823F6420;
	sub_823F6300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F6434;
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

__attribute__((alias("__imp__sub_823F6450"))) PPC_WEAK_FUNC(sub_823F6450);
PPC_FUNC_IMPL(__imp__sub_823F6450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-28092
	ctx.r31.s64 = ctx.r11.s64 + -28092;
	// lwz r11,-27864(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27864);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f6498
	if (!ctx.cr0.eq) goto loc_823F6498;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,808
	ctx.r9.s64 = ctx.r9.s64 + 808;
	// stw r11,-27864(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27864, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-11336
	ctx.r3.s64 = ctx.r11.s64 + -11336;
	// bl 0x82a4c758
	ctx.lr = 0x823F6498;
	sub_82A4C758(ctx, base);
loc_823F6498:
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

__attribute__((alias("__imp__sub_823F64B0"))) PPC_WEAK_FUNC(sub_823F64B0);
PPC_FUNC_IMPL(__imp__sub_823F64B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1488
	ctx.r3.s64 = 1488;
	// bl 0x82833108
	ctx.lr = 0x823F64C8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f651c
	if (ctx.cr0.eq) goto loc_823F651C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8284c630
	ctx.lr = 0x823F64D8;
	sub_8284C630(ctx, base);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r10,r10,-31896
	ctx.r10.s64 = ctx.r10.s64 + -31896;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-30808
	ctx.r9.s64 = ctx.r9.s64 + -30808;
	// addi r8,r8,8296
	ctx.r8.s64 = ctx.r8.s64 + 8296;
	// stw r11,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// b 0x823f6520
	goto loc_823F6520;
loc_823F651C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F6520:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F6538"))) PPC_WEAK_FUNC(sub_823F6538);
PPC_FUNC_IMPL(__imp__sub_823F6538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31340(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31340);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f6578
	if (!ctx.cr0.eq) goto loc_823F6578;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31340(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31340, ctx.r11.u32);
	// addi r3,r9,10720
	ctx.r3.s64 = ctx.r9.s64 + 10720;
	// bl 0x82816528
	ctx.lr = 0x823F6570;
	sub_82816528(ctx, base);
	// stw r3,31336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31336, ctx.r3.u32);
	// b 0x823f657c
	goto loc_823F657C;
loc_823F6578:
	// lwz r3,31336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31336);
loc_823F657C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F6590"))) PPC_WEAK_FUNC(sub_823F6590);
PPC_FUNC_IMPL(__imp__sub_823F6590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f6450
	ctx.lr = 0x823F65B0;
	sub_823F6450(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F65C4;
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

__attribute__((alias("__imp__sub_823F65E0"))) PPC_WEAK_FUNC(sub_823F65E0);
PPC_FUNC_IMPL(__imp__sub_823F65E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-28080
	ctx.r31.s64 = ctx.r11.s64 + -28080;
	// lwz r11,-27936(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27936);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f6628
	if (!ctx.cr0.eq) goto loc_823F6628;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,788
	ctx.r9.s64 = ctx.r9.s64 + 788;
	// stw r11,-27936(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27936, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-11288
	ctx.r3.s64 = ctx.r11.s64 + -11288;
	// bl 0x82a4c758
	ctx.lr = 0x823F6628;
	sub_82A4C758(ctx, base);
loc_823F6628:
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

__attribute__((alias("__imp__sub_823F6640"))) PPC_WEAK_FUNC(sub_823F6640);
PPC_FUNC_IMPL(__imp__sub_823F6640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1808
	ctx.r3.s64 = 1808;
	// bl 0x82833108
	ctx.lr = 0x823F6658;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f6694
	if (ctx.cr0.eq) goto loc_823F6694;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b3760
	ctx.lr = 0x823F6668;
	sub_828B3760(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r11,r11,-456
	ctx.r11.s64 = ctx.r11.s64 + -456;
	// addi r10,r10,712
	ctx.r10.s64 = ctx.r10.s64 + 712;
	// addi r9,r9,764
	ctx.r9.s64 = ctx.r9.s64 + 764;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x823f6698
	goto loc_823F6698;
loc_823F6694:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F6698:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F66B0"))) PPC_WEAK_FUNC(sub_823F66B0);
PPC_FUNC_IMPL(__imp__sub_823F66B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x823f65e0
	ctx.lr = 0x823F66D0;
	sub_823F65E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x823f66e4
	if (ctx.cr6.eq) goto loc_823F66E4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f6700
	ctx.lr = 0x823F66E4;
	sub_823F6700(ctx, base);
loc_823F66E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F6700"))) PPC_WEAK_FUNC(sub_823F6700);
PPC_FUNC_IMPL(__imp__sub_823F6700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x823f6760
	ctx.lr = 0x823F6720;
	sub_823F6760(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823f6730
	if (!ctx.cr6.eq) goto loc_823F6730;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x823f6748
	goto loc_823F6748;
loc_823F6730:
	// bl 0x82338750
	ctx.lr = 0x823F6734;
	sub_82338750(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x823f6748
	if (ctx.cr6.eq) goto loc_823F6748;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x823F6748;
	sub_82338858(ctx, base);
loc_823F6748:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F6760"))) PPC_WEAK_FUNC(sub_823F6760);
PPC_FUNC_IMPL(__imp__sub_823F6760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-27064
	ctx.r31.s64 = ctx.r11.s64 + -27064;
	// lwz r11,-27060(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27060);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f67a8
	if (!ctx.cr0.eq) goto loc_823F67A8;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-21992
	ctx.r9.s64 = ctx.r9.s64 + -21992;
	// stw r11,-27060(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27060, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-11312
	ctx.r3.s64 = ctx.r11.s64 + -11312;
	// bl 0x82a4c758
	ctx.lr = 0x823F67A8;
	sub_82A4C758(ctx, base);
loc_823F67A8:
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

__attribute__((alias("__imp__sub_823F67C0"))) PPC_WEAK_FUNC(sub_823F67C0);
PPC_FUNC_IMPL(__imp__sub_823F67C0) {
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
	// li r3,1792
	ctx.r3.s64 = 1792;
	// bl 0x82833108
	ctx.lr = 0x823F67D4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f67e4
	if (ctx.cr0.eq) goto loc_823F67E4;
	// bl 0x828b3760
	ctx.lr = 0x823F67E0;
	sub_828B3760(ctx, base);
	// b 0x823f67e8
	goto loc_823F67E8;
loc_823F67E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F67E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F67F8"))) PPC_WEAK_FUNC(sub_823F67F8);
PPC_FUNC_IMPL(__imp__sub_823F67F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1792
	ctx.r3.s64 = 1792;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F6800"))) PPC_WEAK_FUNC(sub_823F6800);
PPC_FUNC_IMPL(__imp__sub_823F6800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31332(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31332);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f6840
	if (!ctx.cr0.eq) goto loc_823F6840;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31332(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31332, ctx.r11.u32);
	// addi r3,r9,10128
	ctx.r3.s64 = ctx.r9.s64 + 10128;
	// bl 0x82816528
	ctx.lr = 0x823F6838;
	sub_82816528(ctx, base);
	// stw r3,31328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31328, ctx.r3.u32);
	// b 0x823f6844
	goto loc_823F6844;
loc_823F6840:
	// lwz r3,31328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31328);
loc_823F6844:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F6858"))) PPC_WEAK_FUNC(sub_823F6858);
PPC_FUNC_IMPL(__imp__sub_823F6858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f6760
	ctx.lr = 0x823F6878;
	sub_823F6760(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F688C;
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

__attribute__((alias("__imp__sub_823F68A8"))) PPC_WEAK_FUNC(sub_823F68A8);
PPC_FUNC_IMPL(__imp__sub_823F68A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823f68e0
	if (ctx.cr6.eq) goto loc_823F68E0;
	// bl 0x823f65e0
	ctx.lr = 0x823F68D0;
	sub_823F65E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823f68e0
	if (!ctx.cr6.eq) goto loc_823F68E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823f68ec
	goto loc_823F68EC;
loc_823F68E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f6908
	ctx.lr = 0x823F68EC;
	sub_823F6908(ctx, base);
loc_823F68EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F6908"))) PPC_WEAK_FUNC(sub_823F6908);
PPC_FUNC_IMPL(__imp__sub_823F6908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823f6940
	if (ctx.cr6.eq) goto loc_823F6940;
	// bl 0x823f6760
	ctx.lr = 0x823F6930;
	sub_823F6760(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823f6940
	if (!ctx.cr6.eq) goto loc_823F6940;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823f694c
	goto loc_823F694C;
loc_823F6940:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a28
	ctx.lr = 0x823F694C;
	sub_82338A28(ctx, base);
loc_823F694C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F6968"))) PPC_WEAK_FUNC(sub_823F6968);
PPC_FUNC_IMPL(__imp__sub_823F6968) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f65e0
	sub_823F65E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F6970"))) PPC_WEAK_FUNC(sub_823F6970);
PPC_FUNC_IMPL(__imp__sub_823F6970) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f6760
	sub_823F6760(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F6978"))) PPC_WEAK_FUNC(sub_823F6978);
PPC_FUNC_IMPL(__imp__sub_823F6978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1808
	ctx.r3.s64 = 1808;
	// bl 0x82833108
	ctx.lr = 0x823F6998;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f69e0
	if (ctx.cr0.eq) goto loc_823F69E0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f6a00
	ctx.lr = 0x823F69AC;
	sub_823F6A00(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r11,r11,-456
	ctx.r11.s64 = ctx.r11.s64 + -456;
	// addi r10,r10,712
	ctx.r10.s64 = ctx.r10.s64 + 712;
	// addi r9,r9,764
	ctx.r9.s64 = ctx.r9.s64 + 764;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1792(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1792);
	// stw r11,1792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1792, ctx.r11.u32);
	// b 0x823f69e4
	goto loc_823F69E4;
loc_823F69E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F69E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F6A00"))) PPC_WEAK_FUNC(sub_823F6A00);
PPC_FUNC_IMPL(__imp__sub_823F6A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x823F6A08;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82338b88
	ctx.lr = 0x823F6A18;
	sub_82338B88(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r11,r11,23504
	ctx.r11.s64 = ctx.r11.s64 + 23504;
	// addi r10,r10,24672
	ctx.r10.s64 = ctx.r10.s64 + 24672;
	// addi r9,r9,764
	ctx.r9.s64 = ctx.r9.s64 + 764;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,1424
	ctx.r4.s64 = ctx.r30.s64 + 1424;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r31,1424
	ctx.r3.s64 = ctx.r31.s64 + 1424;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r11,1408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// stw r11,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x823F6A54;
	sub_82A4EA80(ctx, base);
	// lwz r11,1488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	// addi r4,r30,1500
	ctx.r4.s64 = ctx.r30.s64 + 1500;
	// addi r3,r31,1500
	ctx.r3.s64 = ctx.r31.s64 + 1500;
	// stw r11,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r11.u32);
	// lwz r11,1492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1492);
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// lwz r11,1496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1496);
	// stw r11,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x823F6A78;
	sub_823339B8(ctx, base);
	// lwz r11,1524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1524);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r31,1588
	ctx.r28.s64 = ctx.r31.s64 + 1588;
	// li r26,4
	ctx.r26.s64 = 4;
	// addi r27,r30,1588
	ctx.r27.s64 = ctx.r30.s64 + 1588;
	// stw r11,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r11.u32);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// lwz r11,1528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1528);
	// stw r11,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r11.u32);
	// lwz r11,1532(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1532);
	// stw r11,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r11.u32);
	// lwz r11,1536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1536);
	// stw r11,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r11.u32);
	// lwz r11,1540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1540);
	// stw r11,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r11.u32);
	// lwz r11,1544(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1544);
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// lwz r11,1548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1548);
	// stw r11,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r11.u32);
	// lwz r11,1552(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1552);
	// stw r11,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r11.u32);
	// lfs f0,1556(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1556);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1556(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1556, temp.u32);
	// lwz r11,1560(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1560);
	// stw r11,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r11.u32);
	// lwz r11,1564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1564);
	// stw r11,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r11.u32);
	// lwz r11,1568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1568);
	// stw r11,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r11.u32);
	// lwz r11,1572(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1572);
	// stw r11,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r11.u32);
	// lwz r11,1576(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1576);
	// stw r11,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r11.u32);
	// lwz r11,1580(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1580);
	// stw r11,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r11.u32);
	// lwz r11,1584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// stw r11,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r11.u32);
	// stw r26,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r26.u32);
	// stw r29,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r29.u32);
	// stw r29,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r29.u32);
	// stw r29,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r29.u32);
	// stw r29,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r29.u32);
	// stw r29,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r29.u32);
	// beq cr6,0x823f6b70
	if (ctx.cr6.eq) goto loc_823F6B70;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823f6b70
	if (!ctx.cr6.gt) goto loc_823F6B70;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f6b54
	if (ctx.cr0.eq) goto loc_823F6B54;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x823F6B54;
	sub_82332C38(ctx, base);
loc_823F6B54:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x823F6B68;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
loc_823F6B70:
	// addi r28,r31,1612
	ctx.r28.s64 = ctx.r31.s64 + 1612;
	// stw r26,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r26.u32);
	// addi r27,r30,1612
	ctx.r27.s64 = ctx.r30.s64 + 1612;
	// stw r29,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r29.u32);
	// stw r29,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r29.u32);
	// stw r29,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r29.u32);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// stw r29,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r29.u32);
	// stw r29,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r29.u32);
	// beq cr6,0x823f6be0
	if (ctx.cr6.eq) goto loc_823F6BE0;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823f6be0
	if (!ctx.cr6.gt) goto loc_823F6BE0;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f6bc4
	if (ctx.cr0.eq) goto loc_823F6BC4;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x823F6BC4;
	sub_82332C38(ctx, base);
loc_823F6BC4:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x823F6BD8;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
loc_823F6BE0:
	// addi r4,r30,1636
	ctx.r4.s64 = ctx.r30.s64 + 1636;
	// addi r3,r31,1636
	ctx.r3.s64 = ctx.r31.s64 + 1636;
	// bl 0x82873b58
	ctx.lr = 0x823F6BEC;
	sub_82873B58(ctx, base);
	// addi r28,r31,1660
	ctx.r28.s64 = ctx.r31.s64 + 1660;
	// li r26,12
	ctx.r26.s64 = 12;
	// stw r29,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r29.u32);
	// addi r27,r30,1660
	ctx.r27.s64 = ctx.r30.s64 + 1660;
	// stw r29,1672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1672, ctx.r29.u32);
	// stw r26,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r26.u32);
	// stw r29,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r29.u32);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// stw r29,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r29.u32);
	// stw r29,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r29.u32);
	// beq cr6,0x823f6c60
	if (ctx.cr6.eq) goto loc_823F6C60;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823f6c60
	if (!ctx.cr6.gt) goto loc_823F6C60;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f6c44
	if (ctx.cr0.eq) goto loc_823F6C44;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x823F6C44;
	sub_82332C38(ctx, base);
loc_823F6C44:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mulli r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 * 12;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x823F6C58;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
loc_823F6C60:
	// stw r29,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// stw r11,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r11.u32);
	// bl 0x823f6de0
	ctx.lr = 0x823F6C74;
	sub_823F6DE0(ctx, base);
	// addi r28,r31,1692
	ctx.r28.s64 = ctx.r31.s64 + 1692;
	// addi r27,r30,1692
	ctx.r27.s64 = ctx.r30.s64 + 1692;
	// stw r26,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r26.u32);
	// stw r29,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r29.u32);
	// stw r29,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r29.u32);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// stw r29,1708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1708, ctx.r29.u32);
	// stw r29,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r29.u32);
	// stw r29,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r29.u32);
	// beq cr6,0x823f6ce4
	if (ctx.cr6.eq) goto loc_823F6CE4;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823f6ce4
	if (!ctx.cr6.gt) goto loc_823F6CE4;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f6cc8
	if (ctx.cr0.eq) goto loc_823F6CC8;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x823F6CC8;
	sub_82332C38(ctx, base);
loc_823F6CC8:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mulli r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 * 12;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x823F6CDC;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
loc_823F6CE4:
	// stw r29,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// stw r11,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r11.u32);
	// bl 0x823f6de0
	ctx.lr = 0x823F6CF8;
	sub_823F6DE0(ctx, base);
	// addi r4,r30,1724
	ctx.r4.s64 = ctx.r30.s64 + 1724;
	// addi r3,r31,1724
	ctx.r3.s64 = ctx.r31.s64 + 1724;
	// bl 0x823339b8
	ctx.lr = 0x823F6D04;
	sub_823339B8(ctx, base);
	// lwz r11,1748(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1748);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r11.u32);
	// lwz r11,1752(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1752);
	// stw r11,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r11.u32);
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
	// lwz r11,1768(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1768);
	// stw r11,1768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1768, ctx.r11.u32);
	// lwz r11,1772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1772);
	// stw r11,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r11.u32);
	// lwz r11,1776(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1776);
	// stw r11,1776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1776, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F6D50"))) PPC_WEAK_FUNC(sub_823F6D50);
PPC_FUNC_IMPL(__imp__sub_823F6D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,10128
	ctx.r3.s64 = ctx.r11.s64 + 10128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F6D60"))) PPC_WEAK_FUNC(sub_823F6D60);
PPC_FUNC_IMPL(__imp__sub_823F6D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1792
	ctx.r3.s64 = 1792;
	// bl 0x82833108
	ctx.lr = 0x823F6D7C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f6d90
	if (ctx.cr0.eq) goto loc_823F6D90;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f6a00
	ctx.lr = 0x823F6D8C;
	sub_823F6A00(ctx, base);
	// b 0x823f6d94
	goto loc_823F6D94;
loc_823F6D90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F6D94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F6DA8"))) PPC_WEAK_FUNC(sub_823F6DA8);
PPC_FUNC_IMPL(__imp__sub_823F6DA8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r5,1580(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1580);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r3,1584(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// stw r10,1488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1488, ctx.r10.u32);
	// stw r10,1752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1752, ctx.r10.u32);
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// stb r11,556(r5)
	PPC_STORE_U8(ctx.r5.u32 + 556, ctx.r11.u8);
	// b 0x8277e630
	sub_8277E630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F6DD8"))) PPC_WEAK_FUNC(sub_823F6DD8);
PPC_FUNC_IMPL(__imp__sub_823F6DD8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823f6700
	sub_823F6700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F6DE0"))) PPC_WEAK_FUNC(sub_823F6DE0);
PPC_FUNC_IMPL(__imp__sub_823F6DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x823f6e14
	if (!ctx.cr6.gt) goto loc_823F6E14;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_823F6E14:
	// bl 0x82333900
	ctx.lr = 0x823F6E18;
	sub_82333900(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823f6e4c
	if (!ctx.cr6.gt) goto loc_823F6E4C;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_823F6E30:
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823f6e30
	if (ctx.cr6.lt) goto loc_823F6E30;
loc_823F6E4C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823f6e9c
	if (!ctx.cr6.gt) goto loc_823F6E9C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823F6E60:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// and r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ctx.r8.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stwx r11,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823f6e60
	if (ctx.cr6.lt) goto loc_823F6E60;
loc_823F6E9C:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6eac
	if (ctx.cr6.eq) goto loc_823F6EAC;
	// bl 0x82332db8
	ctx.lr = 0x823F6EAC;
	sub_82332DB8(ctx, base);
loc_823F6EAC:
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F6EC8"))) PPC_WEAK_FUNC(sub_823F6EC8);
PPC_FUNC_IMPL(__imp__sub_823F6EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,10700
	ctx.r3.s64 = ctx.r11.s64 + 10700;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F6ED8"))) PPC_WEAK_FUNC(sub_823F6ED8);
PPC_FUNC_IMPL(__imp__sub_823F6ED8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1488(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1488);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F6EE0"))) PPC_WEAK_FUNC(sub_823F6EE0);
PPC_FUNC_IMPL(__imp__sub_823F6EE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823f66b0
	sub_823F66B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F6EE8"))) PPC_WEAK_FUNC(sub_823F6EE8);
PPC_FUNC_IMPL(__imp__sub_823F6EE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1808
	ctx.r3.s64 = 1808;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F6EF0"))) PPC_WEAK_FUNC(sub_823F6EF0);
PPC_FUNC_IMPL(__imp__sub_823F6EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31324(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31324);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f6f30
	if (!ctx.cr0.eq) goto loc_823F6F30;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31324, ctx.r11.u32);
	// addi r3,r9,10700
	ctx.r3.s64 = ctx.r9.s64 + 10700;
	// bl 0x82816528
	ctx.lr = 0x823F6F28;
	sub_82816528(ctx, base);
	// stw r3,31320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31320, ctx.r3.u32);
	// b 0x823f6f34
	goto loc_823F6F34;
loc_823F6F30:
	// lwz r3,31320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31320);
loc_823F6F34:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F6F48"))) PPC_WEAK_FUNC(sub_823F6F48);
PPC_FUNC_IMPL(__imp__sub_823F6F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f65e0
	ctx.lr = 0x823F6F68;
	sub_823F65E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F6F7C;
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

__attribute__((alias("__imp__sub_823F6F98"))) PPC_WEAK_FUNC(sub_823F6F98);
PPC_FUNC_IMPL(__imp__sub_823F6F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-27556
	ctx.r31.s64 = ctx.r11.s64 + -27556;
	// lwz r11,-27800(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27800);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f6fe0
	if (!ctx.cr0.eq) goto loc_823F6FE0;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-476
	ctx.r9.s64 = ctx.r9.s64 + -476;
	// stw r11,-27800(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27800, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-11264
	ctx.r3.s64 = ctx.r11.s64 + -11264;
	// bl 0x82a4c758
	ctx.lr = 0x823F6FE0;
	sub_82A4C758(ctx, base);
loc_823F6FE0:
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

__attribute__((alias("__imp__sub_823F6FF8"))) PPC_WEAK_FUNC(sub_823F6FF8);
PPC_FUNC_IMPL(__imp__sub_823F6FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1808
	ctx.r3.s64 = 1808;
	// bl 0x82833108
	ctx.lr = 0x823F7010;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f704c
	if (ctx.cr0.eq) goto loc_823F704C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b3760
	ctx.lr = 0x823F7020;
	sub_828B3760(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r11,r11,-1696
	ctx.r11.s64 = ctx.r11.s64 + -1696;
	// addi r10,r10,-528
	ctx.r10.s64 = ctx.r10.s64 + -528;
	// addi r9,r9,764
	ctx.r9.s64 = ctx.r9.s64 + 764;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x823f7050
	goto loc_823F7050;
loc_823F704C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F7050:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F7068"))) PPC_WEAK_FUNC(sub_823F7068);
PPC_FUNC_IMPL(__imp__sub_823F7068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,10672
	ctx.r3.s64 = ctx.r11.s64 + 10672;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F7078"))) PPC_WEAK_FUNC(sub_823F7078);
PPC_FUNC_IMPL(__imp__sub_823F7078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x823f6f98
	ctx.lr = 0x823F7098;
	sub_823F6F98(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x823f70ac
	if (ctx.cr6.eq) goto loc_823F70AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f6700
	ctx.lr = 0x823F70AC;
	sub_823F6700(ctx, base);
loc_823F70AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F70C8"))) PPC_WEAK_FUNC(sub_823F70C8);
PPC_FUNC_IMPL(__imp__sub_823F70C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823f7100
	if (ctx.cr6.eq) goto loc_823F7100;
	// bl 0x823f6f98
	ctx.lr = 0x823F70F0;
	sub_823F6F98(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823f7100
	if (!ctx.cr6.eq) goto loc_823F7100;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823f710c
	goto loc_823F710C;
loc_823F7100:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f6908
	ctx.lr = 0x823F710C;
	sub_823F6908(ctx, base);
loc_823F710C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F7128"))) PPC_WEAK_FUNC(sub_823F7128);
PPC_FUNC_IMPL(__imp__sub_823F7128) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f6f98
	sub_823F6F98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F7130"))) PPC_WEAK_FUNC(sub_823F7130);
PPC_FUNC_IMPL(__imp__sub_823F7130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1808
	ctx.r3.s64 = 1808;
	// bl 0x82833108
	ctx.lr = 0x823F7150;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f7198
	if (ctx.cr0.eq) goto loc_823F7198;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f6a00
	ctx.lr = 0x823F7164;
	sub_823F6A00(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r11,r11,-1696
	ctx.r11.s64 = ctx.r11.s64 + -1696;
	// addi r10,r10,-528
	ctx.r10.s64 = ctx.r10.s64 + -528;
	// addi r9,r9,764
	ctx.r9.s64 = ctx.r9.s64 + 764;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1792(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1792);
	// stw r11,1792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1792, ctx.r11.u32);
	// b 0x823f719c
	goto loc_823F719C;
loc_823F7198:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F719C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F71B8"))) PPC_WEAK_FUNC(sub_823F71B8);
PPC_FUNC_IMPL(__imp__sub_823F71B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823f7078
	sub_823F7078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F71C0"))) PPC_WEAK_FUNC(sub_823F71C0);
PPC_FUNC_IMPL(__imp__sub_823F71C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31316(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31316);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f7200
	if (!ctx.cr0.eq) goto loc_823F7200;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31316(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31316, ctx.r11.u32);
	// addi r3,r9,10672
	ctx.r3.s64 = ctx.r9.s64 + 10672;
	// bl 0x82816528
	ctx.lr = 0x823F71F8;
	sub_82816528(ctx, base);
	// stw r3,31312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31312, ctx.r3.u32);
	// b 0x823f7204
	goto loc_823F7204;
loc_823F7200:
	// lwz r3,31312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31312);
loc_823F7204:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F7218"))) PPC_WEAK_FUNC(sub_823F7218);
PPC_FUNC_IMPL(__imp__sub_823F7218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f6f98
	ctx.lr = 0x823F7238;
	sub_823F6F98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F724C;
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

__attribute__((alias("__imp__sub_823F7268"))) PPC_WEAK_FUNC(sub_823F7268);
PPC_FUNC_IMPL(__imp__sub_823F7268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-27080
	ctx.r31.s64 = ctx.r11.s64 + -27080;
	// lwz r11,-27076(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27076);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f72b0
	if (!ctx.cr0.eq) goto loc_823F72B0;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-1720
	ctx.r9.s64 = ctx.r9.s64 + -1720;
	// stw r11,-27076(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27076, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-11240
	ctx.r3.s64 = ctx.r11.s64 + -11240;
	// bl 0x82a4c758
	ctx.lr = 0x823F72B0;
	sub_82A4C758(ctx, base);
loc_823F72B0:
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

__attribute__((alias("__imp__sub_823F72C8"))) PPC_WEAK_FUNC(sub_823F72C8);
PPC_FUNC_IMPL(__imp__sub_823F72C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x823F72D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,5712
	ctx.r3.s64 = 5712;
	// bl 0x82833108
	ctx.lr = 0x823F72DC;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f7360
	if (ctx.cr0.eq) goto loc_823F7360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b3760
	ctx.lr = 0x823F72EC;
	sub_828B3760(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r11,r11,-12416
	ctx.r11.s64 = ctx.r11.s64 + -12416;
	// addi r10,r10,-11248
	ctx.r10.s64 = ctx.r10.s64 + -11248;
	// addi r9,r9,764
	ctx.r9.s64 = ctx.r9.s64 + 764;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,-16896
	ctx.r29.s64 = ctx.r11.s64 + -16896;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828166e0
	ctx.lr = 0x823F7324;
	sub_828166E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82816528
	ctx.lr = 0x823F732C;
	sub_82816528(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,5640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5640, ctx.r3.u32);
	// stw r11,5632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5632, ctx.r11.u32);
	// addi r3,r31,5648
	ctx.r3.s64 = ctx.r31.s64 + 5648;
	// stw r30,5636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5636, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,5644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5644, ctx.r11.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82a4e530
	ctx.lr = 0x823F7354;
	sub_82A4E530(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,5711(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5711, ctx.r30.u8);
	// b 0x823f7364
	goto loc_823F7364;
loc_823F7360:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F7364:
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F7370"))) PPC_WEAK_FUNC(sub_823F7370);
PPC_FUNC_IMPL(__imp__sub_823F7370) {
	PPC_FUNC_PROLOGUE();
	// li r3,5712
	ctx.r3.s64 = 5712;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F7378"))) PPC_WEAK_FUNC(sub_823F7378);
PPC_FUNC_IMPL(__imp__sub_823F7378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31308(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31308);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f73b8
	if (!ctx.cr0.eq) goto loc_823F73B8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31308, ctx.r11.u32);
	// addi r3,r9,10648
	ctx.r3.s64 = ctx.r9.s64 + 10648;
	// bl 0x82816528
	ctx.lr = 0x823F73B0;
	sub_82816528(ctx, base);
	// stw r3,31304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31304, ctx.r3.u32);
	// b 0x823f73bc
	goto loc_823F73BC;
loc_823F73B8:
	// lwz r3,31304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31304);
loc_823F73BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F73D0"))) PPC_WEAK_FUNC(sub_823F73D0);
PPC_FUNC_IMPL(__imp__sub_823F73D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f7268
	ctx.lr = 0x823F73F0;
	sub_823F7268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F7404;
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

__attribute__((alias("__imp__sub_823F7420"))) PPC_WEAK_FUNC(sub_823F7420);
PPC_FUNC_IMPL(__imp__sub_823F7420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-27588
	ctx.r31.s64 = ctx.r11.s64 + -27588;
	// lwz r11,-27620(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27620);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f7468
	if (!ctx.cr0.eq) goto loc_823F7468;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-1740
	ctx.r9.s64 = ctx.r9.s64 + -1740;
	// stw r11,-27620(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27620, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-11216
	ctx.r3.s64 = ctx.r11.s64 + -11216;
	// bl 0x82a4c758
	ctx.lr = 0x823F7468;
	sub_82A4C758(ctx, base);
loc_823F7468:
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

__attribute__((alias("__imp__sub_823F7480"))) PPC_WEAK_FUNC(sub_823F7480);
PPC_FUNC_IMPL(__imp__sub_823F7480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1792
	ctx.r3.s64 = 1792;
	// bl 0x82833108
	ctx.lr = 0x823F7498;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f74d4
	if (ctx.cr0.eq) goto loc_823F74D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b3760
	ctx.lr = 0x823F74A8;
	sub_828B3760(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r11,r11,-2960
	ctx.r11.s64 = ctx.r11.s64 + -2960;
	// addi r10,r10,-1792
	ctx.r10.s64 = ctx.r10.s64 + -1792;
	// addi r9,r9,764
	ctx.r9.s64 = ctx.r9.s64 + 764;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x823f74d8
	goto loc_823F74D8;
loc_823F74D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F74D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F74F0"))) PPC_WEAK_FUNC(sub_823F74F0);
PPC_FUNC_IMPL(__imp__sub_823F74F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,10624
	ctx.r3.s64 = ctx.r11.s64 + 10624;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F7500"))) PPC_WEAK_FUNC(sub_823F7500);
PPC_FUNC_IMPL(__imp__sub_823F7500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x823f7420
	ctx.lr = 0x823F7520;
	sub_823F7420(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x823f7534
	if (ctx.cr6.eq) goto loc_823F7534;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f6700
	ctx.lr = 0x823F7534;
	sub_823F6700(ctx, base);
loc_823F7534:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F7550"))) PPC_WEAK_FUNC(sub_823F7550);
PPC_FUNC_IMPL(__imp__sub_823F7550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823f7588
	if (ctx.cr6.eq) goto loc_823F7588;
	// bl 0x823f7420
	ctx.lr = 0x823F7578;
	sub_823F7420(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823f7588
	if (!ctx.cr6.eq) goto loc_823F7588;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823f7594
	goto loc_823F7594;
loc_823F7588:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f6908
	ctx.lr = 0x823F7594;
	sub_823F6908(ctx, base);
loc_823F7594:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F75B0"))) PPC_WEAK_FUNC(sub_823F75B0);
PPC_FUNC_IMPL(__imp__sub_823F75B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f7420
	sub_823F7420(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F75B8"))) PPC_WEAK_FUNC(sub_823F75B8);
PPC_FUNC_IMPL(__imp__sub_823F75B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1792
	ctx.r3.s64 = 1792;
	// bl 0x82833108
	ctx.lr = 0x823F75D8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f7618
	if (ctx.cr0.eq) goto loc_823F7618;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f6a00
	ctx.lr = 0x823F75EC;
	sub_823F6A00(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r11,r11,-2960
	ctx.r11.s64 = ctx.r11.s64 + -2960;
	// addi r10,r10,-1792
	ctx.r10.s64 = ctx.r10.s64 + -1792;
	// addi r9,r9,764
	ctx.r9.s64 = ctx.r9.s64 + 764;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x823f761c
	goto loc_823F761C;
loc_823F7618:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F761C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F7638"))) PPC_WEAK_FUNC(sub_823F7638);
PPC_FUNC_IMPL(__imp__sub_823F7638) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823faab0
	sub_823FAAB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F7640"))) PPC_WEAK_FUNC(sub_823F7640);
PPC_FUNC_IMPL(__imp__sub_823F7640) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823f7500
	sub_823F7500(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F7648"))) PPC_WEAK_FUNC(sub_823F7648);
PPC_FUNC_IMPL(__imp__sub_823F7648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31300(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31300);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f7688
	if (!ctx.cr0.eq) goto loc_823F7688;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31300, ctx.r11.u32);
	// addi r3,r9,10624
	ctx.r3.s64 = ctx.r9.s64 + 10624;
	// bl 0x82816528
	ctx.lr = 0x823F7680;
	sub_82816528(ctx, base);
	// stw r3,31296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31296, ctx.r3.u32);
	// b 0x823f768c
	goto loc_823F768C;
loc_823F7688:
	// lwz r3,31296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31296);
loc_823F768C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F76A0"))) PPC_WEAK_FUNC(sub_823F76A0);
PPC_FUNC_IMPL(__imp__sub_823F76A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f7420
	ctx.lr = 0x823F76C0;
	sub_823F7420(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F76D4;
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

__attribute__((alias("__imp__sub_823F76F0"))) PPC_WEAK_FUNC(sub_823F76F0);
PPC_FUNC_IMPL(__imp__sub_823F76F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-27096
	ctx.r31.s64 = ctx.r11.s64 + -27096;
	// lwz r11,-27092(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27092);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f7738
	if (!ctx.cr0.eq) goto loc_823F7738;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-2980
	ctx.r9.s64 = ctx.r9.s64 + -2980;
	// stw r11,-27092(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27092, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-11192
	ctx.r3.s64 = ctx.r11.s64 + -11192;
	// bl 0x82a4c758
	ctx.lr = 0x823F7738;
	sub_82A4C758(ctx, base);
loc_823F7738:
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

__attribute__((alias("__imp__sub_823F7750"))) PPC_WEAK_FUNC(sub_823F7750);
PPC_FUNC_IMPL(__imp__sub_823F7750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1920
	ctx.r3.s64 = 1920;
	// bl 0x82833108
	ctx.lr = 0x823F7768;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f77d8
	if (ctx.cr0.eq) goto loc_823F77D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b3760
	ctx.lr = 0x823F7778;
	sub_828B3760(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r11,r11,-4224
	ctx.r11.s64 = ctx.r11.s64 + -4224;
	// addi r10,r10,-3056
	ctx.r10.s64 = ctx.r10.s64 + -3056;
	// addi r9,r9,-3004
	ctx.r9.s64 = ctx.r9.s64 + -3004;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r11,r31,1804
	ctx.r11.s64 = ctx.r31.s64 + 1804;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823F77A8:
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bge 0x823f77a8
	if (!ctx.cr0.lt) goto loc_823F77A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823f77dc
	goto loc_823F77DC;
loc_823F77D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F77DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F77F0"))) PPC_WEAK_FUNC(sub_823F77F0);
PPC_FUNC_IMPL(__imp__sub_823F77F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x823F77F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r31,r29,1900
	ctx.r31.s64 = ctx.r29.s64 + 1900;
	// li r30,3
	ctx.r30.s64 = 3;
loc_823F780C:
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239d768
	ctx.lr = 0x823F7818;
	sub_8239D768(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x823f780c
	if (!ctx.cr0.lt) goto loc_823F780C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828b39e8
	ctx.lr = 0x823F7828;
	sub_828B39E8(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f7838
	if (ctx.cr0.eq) goto loc_823F7838;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332db8
	ctx.lr = 0x823F7838;
	sub_82332DB8(ctx, base);
loc_823F7838:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F7848"))) PPC_WEAK_FUNC(sub_823F7848);
PPC_FUNC_IMPL(__imp__sub_823F7848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,10604
	ctx.r3.s64 = ctx.r11.s64 + 10604;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F7858"))) PPC_WEAK_FUNC(sub_823F7858);
PPC_FUNC_IMPL(__imp__sub_823F7858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x823f76f0
	ctx.lr = 0x823F7878;
	sub_823F76F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x823f788c
	if (ctx.cr6.eq) goto loc_823F788C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f6700
	ctx.lr = 0x823F788C;
	sub_823F6700(ctx, base);
loc_823F788C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F78A8"))) PPC_WEAK_FUNC(sub_823F78A8);
PPC_FUNC_IMPL(__imp__sub_823F78A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823f78e0
	if (ctx.cr6.eq) goto loc_823F78E0;
	// bl 0x823f76f0
	ctx.lr = 0x823F78D0;
	sub_823F76F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823f78e0
	if (!ctx.cr6.eq) goto loc_823F78E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823f78ec
	goto loc_823F78EC;
loc_823F78E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f6908
	ctx.lr = 0x823F78EC;
	sub_823F6908(ctx, base);
loc_823F78EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F7908"))) PPC_WEAK_FUNC(sub_823F7908);
PPC_FUNC_IMPL(__imp__sub_823F7908) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f76f0
	sub_823F76F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F7910"))) PPC_WEAK_FUNC(sub_823F7910);
PPC_FUNC_IMPL(__imp__sub_823F7910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x823F7918;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1920
	ctx.r3.s64 = 1920;
	// bl 0x82833108
	ctx.lr = 0x823F7928;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f79bc
	if (ctx.cr0.eq) goto loc_823F79BC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f6a00
	ctx.lr = 0x823F793C;
	sub_823F6A00(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r11,r11,-4224
	ctx.r11.s64 = ctx.r11.s64 + -4224;
	// addi r10,r10,-3056
	ctx.r10.s64 = ctx.r10.s64 + -3056;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r11,r30,1804
	ctx.r11.s64 = ctx.r30.s64 + 1804;
	// addi r9,r9,-3004
	ctx.r9.s64 = ctx.r9.s64 + -3004;
	// addi r10,r31,1804
	ctx.r10.s64 = ctx.r31.s64 + 1804;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// subf r27,r11,r10
	ctx.r27.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r28,3
	ctx.r28.s64 = 3;
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
loc_823F798C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r27,r29
	ctx.r3.u64 = ctx.r27.u64 + ctx.r29.u64;
	// bl 0x82873b58
	ctx.lr = 0x823F7998;
	sub_82873B58(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// bge 0x823f798c
	if (!ctx.cr0.lt) goto loc_823F798C;
	// lwz r11,1900(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1900);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1900, ctx.r11.u32);
	// lwz r11,1904(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1904);
	// stw r11,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r11.u32);
	// b 0x823f79c0
	goto loc_823F79C0;
loc_823F79BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F79C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F79C8"))) PPC_WEAK_FUNC(sub_823F79C8);
PPC_FUNC_IMPL(__imp__sub_823F79C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823f77f0
	sub_823F77F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F79D0"))) PPC_WEAK_FUNC(sub_823F79D0);
PPC_FUNC_IMPL(__imp__sub_823F79D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823f7858
	sub_823F7858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F79D8"))) PPC_WEAK_FUNC(sub_823F79D8);
PPC_FUNC_IMPL(__imp__sub_823F79D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x823f77f0
	sub_823F77F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F79E0"))) PPC_WEAK_FUNC(sub_823F79E0);
PPC_FUNC_IMPL(__imp__sub_823F79E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31292);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f7a20
	if (!ctx.cr0.eq) goto loc_823F7A20;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31292, ctx.r11.u32);
	// addi r3,r9,10604
	ctx.r3.s64 = ctx.r9.s64 + 10604;
	// bl 0x82816528
	ctx.lr = 0x823F7A18;
	sub_82816528(ctx, base);
	// stw r3,31288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31288, ctx.r3.u32);
	// b 0x823f7a24
	goto loc_823F7A24;
loc_823F7A20:
	// lwz r3,31288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31288);
loc_823F7A24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F7A38"))) PPC_WEAK_FUNC(sub_823F7A38);
PPC_FUNC_IMPL(__imp__sub_823F7A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f76f0
	ctx.lr = 0x823F7A58;
	sub_823F76F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F7A6C;
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

__attribute__((alias("__imp__sub_823F7A88"))) PPC_WEAK_FUNC(sub_823F7A88);
PPC_FUNC_IMPL(__imp__sub_823F7A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-27824
	ctx.r31.s64 = ctx.r11.s64 + -27824;
	// lwz r11,-27848(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27848);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f7ad0
	if (!ctx.cr0.eq) goto loc_823F7AD0;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-11760
	ctx.r9.s64 = ctx.r9.s64 + -11760;
	// stw r11,-27848(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27848, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-11072
	ctx.r3.s64 = ctx.r11.s64 + -11072;
	// bl 0x82a4c758
	ctx.lr = 0x823F7AD0;
	sub_82A4C758(ctx, base);
loc_823F7AD0:
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

__attribute__((alias("__imp__sub_823F7AE8"))) PPC_WEAK_FUNC(sub_823F7AE8);
PPC_FUNC_IMPL(__imp__sub_823F7AE8) {
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
	// li r3,3536
	ctx.r3.s64 = 3536;
	// bl 0x82833108
	ctx.lr = 0x823F7AFC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f7b0c
	if (ctx.cr0.eq) goto loc_823F7B0C;
	// bl 0x823f7b20
	ctx.lr = 0x823F7B08;
	sub_823F7B20(ctx, base);
	// b 0x823f7b10
	goto loc_823F7B10;
loc_823F7B0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F7B10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F7B20"))) PPC_WEAK_FUNC(sub_823F7B20);
PPC_FUNC_IMPL(__imp__sub_823F7B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x826da9a8
	ctx.lr = 0x823F7B38;
	sub_826DA9A8(ctx, base);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r10,r10,-13216
	ctx.r10.s64 = ctx.r10.s64 + -13216;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-11836
	ctx.r9.s64 = ctx.r9.s64 + -11836;
	// addi r8,r8,-11784
	ctx.r8.s64 = ctx.r8.s64 + -11784;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,3252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3252, ctx.r10.u32);
	// stw r11,3256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3256, ctx.r11.u32);
	// stw r11,3260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3260, ctx.r11.u32);
	// stw r11,3264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3264, ctx.r11.u32);
	// stw r11,3268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3268, ctx.r11.u32);
	// stw r11,3248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3248, ctx.r11.u32);
	// stw r10,3276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3276, ctx.r10.u32);
	// stw r11,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r11.u32);
	// stw r11,3284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3284, ctx.r11.u32);
	// stw r11,3288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3288, ctx.r11.u32);
	// stw r11,3292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3292, ctx.r11.u32);
	// stw r11,3272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3272, ctx.r11.u32);
	// stw r10,3300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3300, ctx.r10.u32);
	// stw r11,3304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3304, ctx.r11.u32);
	// stw r11,3308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3308, ctx.r11.u32);
	// stw r11,3312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3312, ctx.r11.u32);
	// stw r11,3316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3316, ctx.r11.u32);
	// stw r11,3296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3296, ctx.r11.u32);
	// stw r10,3324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3324, ctx.r10.u32);
	// stw r11,3328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3328, ctx.r11.u32);
	// stw r11,3332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3332, ctx.r11.u32);
	// stw r11,3336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3336, ctx.r11.u32);
	// stw r11,3340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3340, ctx.r11.u32);
	// stw r11,3320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3320, ctx.r11.u32);
	// stw r10,3348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3348, ctx.r10.u32);
	// stw r11,3352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3352, ctx.r11.u32);
	// stw r11,3356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3356, ctx.r11.u32);
	// stw r11,3360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3360, ctx.r11.u32);
	// stw r11,3364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3364, ctx.r11.u32);
	// stw r11,3344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3344, ctx.r11.u32);
	// stw r10,3372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3372, ctx.r10.u32);
	// stw r11,3376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3376, ctx.r11.u32);
	// stw r11,3380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3380, ctx.r11.u32);
	// stw r11,3384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3384, ctx.r11.u32);
	// stw r11,3388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3388, ctx.r11.u32);
	// stw r11,3368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3368, ctx.r11.u32);
	// stw r10,3396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3396, ctx.r10.u32);
	// stw r11,3400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3400, ctx.r11.u32);
	// stw r11,3404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3404, ctx.r11.u32);
	// stw r11,3408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3408, ctx.r11.u32);
	// stw r11,3412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3412, ctx.r11.u32);
	// stw r11,3392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3392, ctx.r11.u32);
	// stw r10,3420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3420, ctx.r10.u32);
	// stw r11,3424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3424, ctx.r11.u32);
	// stw r11,3428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3428, ctx.r11.u32);
	// stw r11,3432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3432, ctx.r11.u32);
	// stw r11,3436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3436, ctx.r11.u32);
	// stw r11,3416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3416, ctx.r11.u32);
	// stw r10,3444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3444, ctx.r10.u32);
	// stw r11,3448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3448, ctx.r11.u32);
	// stw r11,3452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3452, ctx.r11.u32);
	// stw r11,3456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3456, ctx.r11.u32);
	// stw r11,3460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3460, ctx.r11.u32);
	// stw r11,3440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3440, ctx.r11.u32);
	// stw r10,3468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3468, ctx.r10.u32);
	// stw r11,3472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3472, ctx.r11.u32);
	// stw r11,3476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3476, ctx.r11.u32);
	// stw r11,3480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3480, ctx.r11.u32);
	// stw r11,3484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3484, ctx.r11.u32);
	// stw r11,3464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3464, ctx.r11.u32);
	// stw r10,3492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3492, ctx.r10.u32);
	// stw r11,3496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3496, ctx.r11.u32);
	// stw r11,3500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3500, ctx.r11.u32);
	// stw r11,3504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3504, ctx.r11.u32);
	// stw r11,3508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3508, ctx.r11.u32);
	// stw r11,3488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3488, ctx.r11.u32);
	// stw r9,2288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2288, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_823F7C90"))) PPC_WEAK_FUNC(sub_823F7C90);
PPC_FUNC_IMPL(__imp__sub_823F7C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826dac50
	ctx.lr = 0x823F7CB0;
	sub_826DAC50(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f7cc0
	if (ctx.cr0.eq) goto loc_823F7CC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x823F7CC0;
	sub_82332DB8(ctx, base);
loc_823F7CC0:
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

__attribute__((alias("__imp__sub_823F7CE0"))) PPC_WEAK_FUNC(sub_823F7CE0);
PPC_FUNC_IMPL(__imp__sub_823F7CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,10324
	ctx.r3.s64 = ctx.r11.s64 + 10324;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F7CF0"))) PPC_WEAK_FUNC(sub_823F7CF0);
PPC_FUNC_IMPL(__imp__sub_823F7CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x823f7d40
	ctx.lr = 0x823F7D10;
	sub_823F7D40(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x823f7d24
	if (ctx.cr6.eq) goto loc_823F7D24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f7e50
	ctx.lr = 0x823F7D24;
	sub_823F7E50(ctx, base);
loc_823F7D24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F7D40"))) PPC_WEAK_FUNC(sub_823F7D40);
PPC_FUNC_IMPL(__imp__sub_823F7D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-27960
	ctx.r31.s64 = ctx.r11.s64 + -27960;
	// lwz r11,-27756(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27756);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f7d88
	if (!ctx.cr0.eq) goto loc_823F7D88;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-14720
	ctx.r9.s64 = ctx.r9.s64 + -14720;
	// stw r11,-27756(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27756, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-11168
	ctx.r3.s64 = ctx.r11.s64 + -11168;
	// bl 0x82a4c758
	ctx.lr = 0x823F7D88;
	sub_82A4C758(ctx, base);
loc_823F7D88:
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

__attribute__((alias("__imp__sub_823F7DA0"))) PPC_WEAK_FUNC(sub_823F7DA0);
PPC_FUNC_IMPL(__imp__sub_823F7DA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3248
	ctx.r3.s64 = 3248;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F7DA8"))) PPC_WEAK_FUNC(sub_823F7DA8);
PPC_FUNC_IMPL(__imp__sub_823F7DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31284(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31284);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f7de8
	if (!ctx.cr0.eq) goto loc_823F7DE8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31284(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31284, ctx.r11.u32);
	// addi r3,r9,10324
	ctx.r3.s64 = ctx.r9.s64 + 10324;
	// bl 0x82816528
	ctx.lr = 0x823F7DE0;
	sub_82816528(ctx, base);
	// stw r3,31280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31280, ctx.r3.u32);
	// b 0x823f7dec
	goto loc_823F7DEC;
loc_823F7DE8:
	// lwz r3,31280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31280);
loc_823F7DEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F7E00"))) PPC_WEAK_FUNC(sub_823F7E00);
PPC_FUNC_IMPL(__imp__sub_823F7E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f7d40
	ctx.lr = 0x823F7E20;
	sub_823F7D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F7E34;
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

__attribute__((alias("__imp__sub_823F7E50"))) PPC_WEAK_FUNC(sub_823F7E50);
PPC_FUNC_IMPL(__imp__sub_823F7E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x823fb5f0
	ctx.lr = 0x823F7E70;
	sub_823FB5F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823f7e80
	if (!ctx.cr6.eq) goto loc_823F7E80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x823f7e98
	goto loc_823F7E98;
loc_823F7E80:
	// bl 0x823f7f00
	ctx.lr = 0x823F7E84;
	sub_823F7F00(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x823f7e98
	if (ctx.cr6.eq) goto loc_823F7E98;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f8e68
	ctx.lr = 0x823F7E98;
	sub_823F8E68(ctx, base);
loc_823F7E98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F7EB0"))) PPC_WEAK_FUNC(sub_823F7EB0);
PPC_FUNC_IMPL(__imp__sub_823F7EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x823f7f00
	ctx.lr = 0x823F7ED0;
	sub_823F7F00(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x823f7ee4
	if (ctx.cr6.eq) goto loc_823F7EE4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f8e68
	ctx.lr = 0x823F7EE4;
	sub_823F8E68(ctx, base);
loc_823F7EE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F7F00"))) PPC_WEAK_FUNC(sub_823F7F00);
PPC_FUNC_IMPL(__imp__sub_823F7F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-27548
	ctx.r31.s64 = ctx.r11.s64 + -27548;
	// lwz r11,-27948(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27948);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f7f48
	if (!ctx.cr0.eq) goto loc_823F7F48;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-19056
	ctx.r9.s64 = ctx.r9.s64 + -19056;
	// stw r11,-27948(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27948, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-11096
	ctx.r3.s64 = ctx.r11.s64 + -11096;
	// bl 0x82a4c758
	ctx.lr = 0x823F7F48;
	sub_82A4C758(ctx, base);
loc_823F7F48:
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

__attribute__((alias("__imp__sub_823F7F60"))) PPC_WEAK_FUNC(sub_823F7F60);
PPC_FUNC_IMPL(__imp__sub_823F7F60) {
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
	// li r3,2624
	ctx.r3.s64 = 2624;
	// bl 0x82833108
	ctx.lr = 0x823F7F74;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f7f84
	if (ctx.cr0.eq) goto loc_823F7F84;
	// bl 0x823f7f98
	ctx.lr = 0x823F7F80;
	sub_823F7F98(ctx, base);
	// b 0x823f7f88
	goto loc_823F7F88;
loc_823F7F84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F7F88:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F7F98"))) PPC_WEAK_FUNC(sub_823F7F98);
PPC_FUNC_IMPL(__imp__sub_823F7F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x826da490
	ctx.lr = 0x823F7FB0;
	sub_826DA490(ctx, base);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r10,r10,-20472
	ctx.r10.s64 = ctx.r10.s64 + -20472;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-19132
	ctx.r9.s64 = ctx.r9.s64 + -19132;
	// addi r8,r8,-19080
	ctx.r8.s64 = ctx.r8.s64 + -19080;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,2340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2340, ctx.r10.u32);
	// stw r11,2344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2344, ctx.r11.u32);
	// stw r11,2348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2348, ctx.r11.u32);
	// stw r11,2352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2352, ctx.r11.u32);
	// stw r11,2356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2356, ctx.r11.u32);
	// stw r11,2336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2336, ctx.r11.u32);
	// stw r10,2364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2364, ctx.r10.u32);
	// stw r11,2368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2368, ctx.r11.u32);
	// stw r11,2372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2372, ctx.r11.u32);
	// stw r11,2376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2376, ctx.r11.u32);
	// stw r11,2380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2380, ctx.r11.u32);
	// stw r11,2360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2360, ctx.r11.u32);
	// stw r10,2388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2388, ctx.r10.u32);
	// stw r11,2392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2392, ctx.r11.u32);
	// stw r11,2396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2396, ctx.r11.u32);
	// stw r11,2400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2400, ctx.r11.u32);
	// stw r11,2404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2404, ctx.r11.u32);
	// stw r11,2384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2384, ctx.r11.u32);
	// stw r10,2412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2412, ctx.r10.u32);
	// stw r11,2416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2416, ctx.r11.u32);
	// stw r11,2420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2420, ctx.r11.u32);
	// stw r11,2424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2424, ctx.r11.u32);
	// stw r11,2428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2428, ctx.r11.u32);
	// stw r11,2408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2408, ctx.r11.u32);
	// stw r10,2436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2436, ctx.r10.u32);
	// stw r11,2440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2440, ctx.r11.u32);
	// stw r11,2444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2444, ctx.r11.u32);
	// stw r11,2448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2448, ctx.r11.u32);
	// stw r11,2452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2452, ctx.r11.u32);
	// stw r11,2432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2432, ctx.r11.u32);
	// stw r10,2460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2460, ctx.r10.u32);
	// stw r11,2464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2464, ctx.r11.u32);
	// stw r11,2468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2468, ctx.r11.u32);
	// stw r11,2472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2472, ctx.r11.u32);
	// stw r11,2476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2476, ctx.r11.u32);
	// stw r11,2456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2456, ctx.r11.u32);
	// stw r10,2484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2484, ctx.r10.u32);
	// stw r11,2488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2488, ctx.r11.u32);
	// stw r11,2492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2492, ctx.r11.u32);
	// stw r11,2496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2496, ctx.r11.u32);
	// stw r11,2500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2500, ctx.r11.u32);
	// stw r11,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r11.u32);
	// stw r10,2508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2508, ctx.r10.u32);
	// stw r11,2512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2512, ctx.r11.u32);
	// stw r11,2516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2516, ctx.r11.u32);
	// stw r11,2520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2520, ctx.r11.u32);
	// stw r11,2524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2524, ctx.r11.u32);
	// stw r11,2504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2504, ctx.r11.u32);
	// stw r10,2532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2532, ctx.r10.u32);
	// stw r11,2536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2536, ctx.r11.u32);
	// stw r11,2540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2540, ctx.r11.u32);
	// stw r11,2544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2544, ctx.r11.u32);
	// stw r11,2548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2548, ctx.r11.u32);
	// stw r11,2528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2528, ctx.r11.u32);
	// stw r10,2556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2556, ctx.r10.u32);
	// stw r11,2560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2560, ctx.r11.u32);
	// stw r11,2564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2564, ctx.r11.u32);
	// stw r11,2568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2568, ctx.r11.u32);
	// stw r11,2572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2572, ctx.r11.u32);
	// stw r11,2552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2552, ctx.r11.u32);
	// stw r10,2580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2580, ctx.r10.u32);
	// stw r11,2584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2584, ctx.r11.u32);
	// stw r11,2588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2588, ctx.r11.u32);
	// stw r11,2592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2592, ctx.r11.u32);
	// stw r11,2596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2596, ctx.r11.u32);
	// stw r11,2576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2576, ctx.r11.u32);
	// stw r9,2288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2288, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_823F8108"))) PPC_WEAK_FUNC(sub_823F8108);
PPC_FUNC_IMPL(__imp__sub_823F8108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r11,r11,-21912
	ctx.r11.s64 = ctx.r11.s64 + -21912;
	// addi r10,r10,-20572
	ctx.r10.s64 = ctx.r10.s64 + -20572;
	// addi r9,r9,-20520
	ctx.r9.s64 = ctx.r9.s64 + -20520;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r11,r31,2224
	ctx.r11.s64 = ctx.r31.s64 + 2224;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8239d768
	ctx.lr = 0x823F814C;
	sub_8239D768(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r31,2072
	ctx.r3.s64 = ctx.r31.s64 + 2072;
	// addi r11,r11,10980
	ctx.r11.s64 = ctx.r11.s64 + 10980;
	// stw r11,2224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2224, ctx.r11.u32);
	// bl 0x82400f38
	ctx.lr = 0x823F8160;
	sub_82400F38(ctx, base);
	// addi r3,r31,1896
	ctx.r3.s64 = ctx.r31.s64 + 1896;
	// bl 0x8239d768
	ctx.lr = 0x823F8168;
	sub_8239D768(ctx, base);
	// addi r3,r31,1872
	ctx.r3.s64 = ctx.r31.s64 + 1872;
	// bl 0x8239d768
	ctx.lr = 0x823F8170;
	sub_8239D768(ctx, base);
	// addi r3,r31,1848
	ctx.r3.s64 = ctx.r31.s64 + 1848;
	// bl 0x8239d768
	ctx.lr = 0x823F8178;
	sub_8239D768(ctx, base);
	// addi r3,r31,1824
	ctx.r3.s64 = ctx.r31.s64 + 1824;
	// bl 0x8239d768
	ctx.lr = 0x823F8180;
	sub_8239D768(ctx, base);
	// addi r3,r31,1800
	ctx.r3.s64 = ctx.r31.s64 + 1800;
	// bl 0x8239d768
	ctx.lr = 0x823F8188;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b39e8
	ctx.lr = 0x823F8190;
	sub_828B39E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F81A8"))) PPC_WEAK_FUNC(sub_823F81A8);
PPC_FUNC_IMPL(__imp__sub_823F81A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f8108
	ctx.lr = 0x823F81C8;
	sub_823F8108(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f81d8
	if (ctx.cr0.eq) goto loc_823F81D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x823F81D8;
	sub_82332DB8(ctx, base);
loc_823F81D8:
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

__attribute__((alias("__imp__sub_823F81F8"))) PPC_WEAK_FUNC(sub_823F81F8);
PPC_FUNC_IMPL(__imp__sub_823F81F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,10220
	ctx.r3.s64 = ctx.r11.s64 + 10220;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F8208"))) PPC_WEAK_FUNC(sub_823F8208);
PPC_FUNC_IMPL(__imp__sub_823F8208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823f8240
	if (ctx.cr6.eq) goto loc_823F8240;
	// bl 0x823f8268
	ctx.lr = 0x823F8230;
	sub_823F8268(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823f8240
	if (!ctx.cr6.eq) goto loc_823F8240;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823f824c
	goto loc_823F824C;
loc_823F8240:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f83b0
	ctx.lr = 0x823F824C;
	sub_823F83B0(ctx, base);
loc_823F824C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F8268"))) PPC_WEAK_FUNC(sub_823F8268);
PPC_FUNC_IMPL(__imp__sub_823F8268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-27088
	ctx.r31.s64 = ctx.r11.s64 + -27088;
	// lwz r11,-27084(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27084);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f82b0
	if (!ctx.cr0.eq) goto loc_823F82B0;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-20496
	ctx.r9.s64 = ctx.r9.s64 + -20496;
	// stw r11,-27084(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27084, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-11144
	ctx.r3.s64 = ctx.r11.s64 + -11144;
	// bl 0x82a4c758
	ctx.lr = 0x823F82B0;
	sub_82A4C758(ctx, base);
loc_823F82B0:
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

__attribute__((alias("__imp__sub_823F82C8"))) PPC_WEAK_FUNC(sub_823F82C8);
PPC_FUNC_IMPL(__imp__sub_823F82C8) {
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
	// li r3,2336
	ctx.r3.s64 = 2336;
	// bl 0x82833108
	ctx.lr = 0x823F82DC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f82ec
	if (ctx.cr0.eq) goto loc_823F82EC;
	// bl 0x826da490
	ctx.lr = 0x823F82E8;
	sub_826DA490(ctx, base);
	// b 0x823f82f0
	goto loc_823F82F0;
loc_823F82EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F82F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F8300"))) PPC_WEAK_FUNC(sub_823F8300);
PPC_FUNC_IMPL(__imp__sub_823F8300) {
	PPC_FUNC_PROLOGUE();
	// li r3,2336
	ctx.r3.s64 = 2336;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F8308"))) PPC_WEAK_FUNC(sub_823F8308);
PPC_FUNC_IMPL(__imp__sub_823F8308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31276(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31276);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f8348
	if (!ctx.cr0.eq) goto loc_823F8348;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31276(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31276, ctx.r11.u32);
	// addi r3,r9,10220
	ctx.r3.s64 = ctx.r9.s64 + 10220;
	// bl 0x82816528
	ctx.lr = 0x823F8340;
	sub_82816528(ctx, base);
	// stw r3,31272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31272, ctx.r3.u32);
	// b 0x823f834c
	goto loc_823F834C;
loc_823F8348:
	// lwz r3,31272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31272);
loc_823F834C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F8360"))) PPC_WEAK_FUNC(sub_823F8360);
PPC_FUNC_IMPL(__imp__sub_823F8360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f8268
	ctx.lr = 0x823F8380;
	sub_823F8268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F8394;
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

__attribute__((alias("__imp__sub_823F83B0"))) PPC_WEAK_FUNC(sub_823F83B0);
PPC_FUNC_IMPL(__imp__sub_823F83B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823f83e8
	if (ctx.cr6.eq) goto loc_823F83E8;
	// bl 0x823f8410
	ctx.lr = 0x823F83D8;
	sub_823F8410(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823f83e8
	if (!ctx.cr6.eq) goto loc_823F83E8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823f83f4
	goto loc_823F83F4;
loc_823F83E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f6908
	ctx.lr = 0x823F83F4;
	sub_823F6908(ctx, base);
loc_823F83F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F8410"))) PPC_WEAK_FUNC(sub_823F8410);
PPC_FUNC_IMPL(__imp__sub_823F8410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-27520
	ctx.r31.s64 = ctx.r11.s64 + -27520;
	// lwz r11,-27832(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27832);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f8458
	if (!ctx.cr0.eq) goto loc_823F8458;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-21932
	ctx.r9.s64 = ctx.r9.s64 + -21932;
	// stw r11,-27832(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27832, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-11120
	ctx.r3.s64 = ctx.r11.s64 + -11120;
	// bl 0x82a4c758
	ctx.lr = 0x823F8458;
	sub_82A4C758(ctx, base);
loc_823F8458:
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

__attribute__((alias("__imp__sub_823F8470"))) PPC_WEAK_FUNC(sub_823F8470);
PPC_FUNC_IMPL(__imp__sub_823F8470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31268(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31268);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f84b0
	if (!ctx.cr0.eq) goto loc_823F84B0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31268, ctx.r11.u32);
	// addi r3,r9,10188
	ctx.r3.s64 = ctx.r9.s64 + 10188;
	// bl 0x82816528
	ctx.lr = 0x823F84A8;
	sub_82816528(ctx, base);
	// stw r3,31264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31264, ctx.r3.u32);
	// b 0x823f84b4
	goto loc_823F84B4;
loc_823F84B0:
	// lwz r3,31264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31264);
loc_823F84B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F84C8"))) PPC_WEAK_FUNC(sub_823F84C8);
PPC_FUNC_IMPL(__imp__sub_823F84C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f8410
	ctx.lr = 0x823F84E8;
	sub_823F8410(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F84FC;
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

__attribute__((alias("__imp__sub_823F8518"))) PPC_WEAK_FUNC(sub_823F8518);
PPC_FUNC_IMPL(__imp__sub_823F8518) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f8410
	sub_823F8410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F8520"))) PPC_WEAK_FUNC(sub_823F8520);
PPC_FUNC_IMPL(__imp__sub_823F8520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,2336
	ctx.r3.s64 = 2336;
	// bl 0x82833108
	ctx.lr = 0x823F853C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f8550
	if (ctx.cr0.eq) goto loc_823F8550;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f8568
	ctx.lr = 0x823F854C;
	sub_823F8568(ctx, base);
	// b 0x823f8554
	goto loc_823F8554;
loc_823F8550:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F8554:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F8568"))) PPC_WEAK_FUNC(sub_823F8568);
PPC_FUNC_IMPL(__imp__sub_823F8568) {
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
	// bl 0x823f6a00
	ctx.lr = 0x823F8588;
	sub_823F6A00(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r11,r11,-21912
	ctx.r11.s64 = ctx.r11.s64 + -21912;
	// addi r10,r10,-20572
	ctx.r10.s64 = ctx.r10.s64 + -20572;
	// addi r9,r9,-20520
	ctx.r9.s64 = ctx.r9.s64 + -20520;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,1800
	ctx.r4.s64 = ctx.r30.s64 + 1800;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r31,1800
	ctx.r3.s64 = ctx.r31.s64 + 1800;
	// lwz r11,1792(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1792);
	// stw r11,1792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1792, ctx.r11.u32);
	// lwz r11,1796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1796);
	// stw r11,1796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1796, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x823F85C8;
	sub_82873B58(ctx, base);
	// addi r4,r30,1824
	ctx.r4.s64 = ctx.r30.s64 + 1824;
	// addi r3,r31,1824
	ctx.r3.s64 = ctx.r31.s64 + 1824;
	// bl 0x82873b58
	ctx.lr = 0x823F85D4;
	sub_82873B58(ctx, base);
	// addi r4,r30,1848
	ctx.r4.s64 = ctx.r30.s64 + 1848;
	// addi r3,r31,1848
	ctx.r3.s64 = ctx.r31.s64 + 1848;
	// bl 0x82873b58
	ctx.lr = 0x823F85E0;
	sub_82873B58(ctx, base);
	// addi r4,r30,1872
	ctx.r4.s64 = ctx.r30.s64 + 1872;
	// addi r3,r31,1872
	ctx.r3.s64 = ctx.r31.s64 + 1872;
	// bl 0x82873b58
	ctx.lr = 0x823F85EC;
	sub_82873B58(ctx, base);
	// addi r4,r30,1896
	ctx.r4.s64 = ctx.r30.s64 + 1896;
	// addi r3,r31,1896
	ctx.r3.s64 = ctx.r31.s64 + 1896;
	// bl 0x82873b58
	ctx.lr = 0x823F85F8;
	sub_82873B58(ctx, base);
	// ld r11,1920(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1920);
	// addi r4,r30,2072
	ctx.r4.s64 = ctx.r30.s64 + 2072;
	// std r11,1920(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1920, ctx.r11.u64);
	// lwz r11,1928(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1928);
	// stw r11,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r11.u32);
	// lwz r11,1932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1932);
	// stw r11,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r11.u32);
	// lwz r11,1936(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1936);
	// stw r11,1936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1936, ctx.r11.u32);
	// lwz r11,1940(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1940);
	// stw r11,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r11.u32);
	// lwz r11,1944(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1944);
	// stw r11,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r11.u32);
	// lwz r11,1948(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1948);
	// stw r11,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r11.u32);
	// lwz r11,1952(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1952);
	// stw r11,1952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1952, ctx.r11.u32);
	// lfs f0,1956(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1956);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1956(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1956, temp.u32);
	// lfs f0,1960(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1960);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1960(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1960, temp.u32);
	// lfs f0,1964(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1964);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1964(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1964, temp.u32);
	// lfs f0,1968(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1968(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1968, temp.u32);
	// lfs f0,1972(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1972);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1972(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1972, temp.u32);
	// lwz r11,1976(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1976);
	// stw r11,1976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1976, ctx.r11.u32);
	// lwz r11,1980(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1980);
	// stw r11,1980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1980, ctx.r11.u32);
	// lwz r11,1984(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1984);
	// stw r11,1984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1984, ctx.r11.u32);
	// lwz r11,1988(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1988);
	// stw r11,1988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1988, ctx.r11.u32);
	// lwz r11,1992(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1992);
	// stw r11,1992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1992, ctx.r11.u32);
	// lwz r11,1996(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1996);
	// stw r11,1996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1996, ctx.r11.u32);
	// lwz r11,2000(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2000);
	// stw r11,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r11.u32);
	// lwz r11,2004(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2004);
	// stw r11,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r11.u32);
	// lwz r11,2008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2008);
	// stw r11,2008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2008, ctx.r11.u32);
	// lwz r11,2012(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2012);
	// stw r11,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r11.u32);
	// lwz r11,2016(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2016);
	// stw r11,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r11.u32);
	// lwz r11,2020(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2020);
	// stw r11,2020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2020, ctx.r11.u32);
	// addi r3,r31,2072
	ctx.r3.s64 = ctx.r31.s64 + 2072;
	// lwz r11,2024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2024);
	// stw r11,2024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2024, ctx.r11.u32);
	// lwz r11,2028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2028);
	// stw r11,2028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2028, ctx.r11.u32);
	// lwz r11,2032(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2032);
	// stw r11,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r11.u32);
	// lwz r11,2036(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2036);
	// stw r11,2036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2036, ctx.r11.u32);
	// lwz r11,2040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2040);
	// stw r11,2040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2040, ctx.r11.u32);
	// lwz r11,2044(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2044);
	// stw r11,2044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2044, ctx.r11.u32);
	// lwz r11,2048(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2048);
	// stw r11,2048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2048, ctx.r11.u32);
	// lwz r11,2052(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2052);
	// stw r11,2052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2052, ctx.r11.u32);
	// lwz r11,2056(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2056);
	// stw r11,2056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2056, ctx.r11.u32);
	// lwz r11,2060(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2060);
	// stw r11,2060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2060, ctx.r11.u32);
	// lwz r11,2064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2064);
	// stw r11,2064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2064, ctx.r11.u32);
	// lwz r11,2068(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2068);
	// stw r11,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r11.u32);
	// bl 0x8282f630
	ctx.lr = 0x823F872C;
	sub_8282F630(ctx, base);
	// addi r11,r31,2224
	ctx.r11.s64 = ctx.r31.s64 + 2224;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,10804
	ctx.r10.s64 = ctx.r10.s64 + 10804;
	// addi r4,r30,2228
	ctx.r4.s64 = ctx.r30.s64 + 2228;
	// lwz r11,2096(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2096);
	// stw r11,2096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2096, ctx.r11.u32);
	// lwz r11,2100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2100);
	// stw r11,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r11.u32);
	// lwz r11,2104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2104);
	// stw r11,2104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2104, ctx.r11.u32);
	// lwz r11,2108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2108);
	// stw r11,2108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2108, ctx.r11.u32);
	// lwz r11,2112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2112);
	// stw r11,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r11.u32);
	// lwz r11,2116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2116);
	// stw r11,2116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2116, ctx.r11.u32);
	// lwz r11,2120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2120);
	// stw r11,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r11.u32);
	// lwz r11,2124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2124);
	// stw r11,2124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2124, ctx.r11.u32);
	// lwz r11,2128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2128);
	// stw r11,2128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2128, ctx.r11.u32);
	// lwz r11,2132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2132);
	// stw r11,2132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2132, ctx.r11.u32);
	// lwz r11,2136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2136);
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
	// lwz r11,2140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2140);
	// stw r11,2140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2140, ctx.r11.u32);
	// lwz r11,2144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2144);
	// stw r11,2144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2144, ctx.r11.u32);
	// lwz r11,2148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2148);
	// stw r11,2148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2148, ctx.r11.u32);
	// lwz r11,2152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2152);
	// stw r11,2152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2152, ctx.r11.u32);
	// lwz r11,2156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2156);
	// stw r11,2156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2156, ctx.r11.u32);
	// lwz r11,2160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2160);
	// stw r11,2160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2160, ctx.r11.u32);
	// lwz r11,2164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2164);
	// stw r11,2164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2164, ctx.r11.u32);
	// lwz r11,2168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2168);
	// stw r11,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r11.u32);
	// lwz r11,2172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2172);
	// stw r11,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r11.u32);
	// lwz r11,2176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2176);
	// stw r11,2176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2176, ctx.r11.u32);
	// lwz r11,2180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2180);
	// stw r11,2180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2180, ctx.r11.u32);
	// lwz r11,2184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2184);
	// stw r11,2184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2184, ctx.r11.u32);
	// lwz r11,2188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2188);
	// stw r11,2188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2188, ctx.r11.u32);
	// lwz r11,2192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2192);
	// stw r11,2192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2192, ctx.r11.u32);
	// lwz r11,2196(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2196);
	// stw r11,2196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2196, ctx.r11.u32);
	// lwz r11,2200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2200);
	// stw r11,2200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2200, ctx.r11.u32);
	// lwz r11,2204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2204);
	// stw r11,2204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2204, ctx.r11.u32);
	// lwz r11,2208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2208);
	// stw r11,2208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2208, ctx.r11.u32);
	// lwz r11,2212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2212);
	// stw r11,2212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2212, ctx.r11.u32);
	// lwz r11,2216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2216);
	// stw r11,2216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2216, ctx.r11.u32);
	// lwz r11,2220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2220);
	// stw r11,2220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2220, ctx.r11.u32);
	// stw r10,2224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2224, ctx.r10.u32);
	// bl 0x82873b58
	ctx.lr = 0x823F8848;
	sub_82873B58(ctx, base);
	// lwz r11,2252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2252);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,2252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2252, ctx.r11.u32);
	// lwz r11,2256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2256);
	// stw r11,2256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2256, ctx.r11.u32);
	// lwz r11,2260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2260);
	// stw r11,2260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2260, ctx.r11.u32);
	// lwz r11,2264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2264);
	// stw r11,2264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2264, ctx.r11.u32);
	// lwz r11,2268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2268);
	// stw r11,2268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2268, ctx.r11.u32);
	// lwz r11,2272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2272);
	// stw r11,2272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2272, ctx.r11.u32);
	// lwz r11,2276(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2276);
	// stw r11,2276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2276, ctx.r11.u32);
	// lwz r11,2280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2280);
	// stw r11,2280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2280, ctx.r11.u32);
	// lwz r11,2284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2284);
	// stw r11,2284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2284, ctx.r11.u32);
	// lwz r11,2288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2288);
	// stw r11,2288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2288, ctx.r11.u32);
	// lwz r11,2292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2292);
	// stw r11,2292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2292, ctx.r11.u32);
	// lwz r11,2296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2296);
	// stw r11,2296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2296, ctx.r11.u32);
	// lwz r11,2300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2300);
	// stw r11,2300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2300, ctx.r11.u32);
	// lwz r11,2304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2304);
	// stw r11,2304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2304, ctx.r11.u32);
	// lwz r11,2308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2308);
	// stw r11,2308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2308, ctx.r11.u32);
	// lwz r11,2312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2312);
	// stw r11,2312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2312, ctx.r11.u32);
	// lwz r11,2316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2316);
	// stw r11,2316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2316, ctx.r11.u32);
	// lwz r11,2320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2320);
	// stw r11,2320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2320, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F88F8"))) PPC_WEAK_FUNC(sub_823F88F8);
PPC_FUNC_IMPL(__imp__sub_823F88F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8239d768
	ctx.lr = 0x823F891C;
	sub_8239D768(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,10980
	ctx.r11.s64 = ctx.r11.s64 + 10980;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x823f8938
	if (ctx.cr0.eq) goto loc_823F8938;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x823F8938;
	sub_82332DB8(ctx, base);
loc_823F8938:
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

__attribute__((alias("__imp__sub_823F8958"))) PPC_WEAK_FUNC(sub_823F8958);
PPC_FUNC_IMPL(__imp__sub_823F8958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x823F8960;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823f89ec
	if (ctx.cr6.eq) goto loc_823F89EC;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823f89a8
	if (ctx.cr6.eq) goto loc_823F89A8;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x823F89A8;
	sub_82332C38(ctx, base);
loc_823F89A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F89C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f8a44
	if (ctx.cr6.eq) goto loc_823F8A44;
	// rlwinm. r4,r5,3,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFE0;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble 0x823f89e4
	if (!ctx.cr0.gt) goto loc_823F89E4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f8a50
	ctx.lr = 0x823F89E0;
	sub_823F8A50(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823F89E4:
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// b 0x823f8a30
	goto loc_823F8A30;
loc_823F89EC:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823f8a04
	if (!ctx.cr6.gt) goto loc_823F8A04;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_823F8A04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F8A20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f8a44
	if (ctx.cr6.eq) goto loc_823F8A44;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_823F8A30:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F8A44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F8A44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F8A50"))) PPC_WEAK_FUNC(sub_823F8A50);
PPC_FUNC_IMPL(__imp__sub_823F8A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r10,r4,31
	ctx.r10.s64 = ctx.r4.s64 + 31;
	// srawi r10,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 5;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x823f8aac
	if (!ctx.cr6.gt) goto loc_823F8AAC;
	// subf r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82332d50
	ctx.lr = 0x823F8A94;
	sub_82332D50(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a455d0
	ctx.lr = 0x823F8AAC;
	sub_82A455D0(ctx, base);
loc_823F8AAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F8AC8"))) PPC_WEAK_FUNC(sub_823F8AC8);
PPC_FUNC_IMPL(__imp__sub_823F8AC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823f81a8
	sub_823F81A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F8AD0"))) PPC_WEAK_FUNC(sub_823F8AD0);
PPC_FUNC_IMPL(__imp__sub_823F8AD0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823f8e68
	sub_823F8E68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F8AD8"))) PPC_WEAK_FUNC(sub_823F8AD8);
PPC_FUNC_IMPL(__imp__sub_823F8AD8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x823f81a8
	sub_823F81A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F8AE0"))) PPC_WEAK_FUNC(sub_823F8AE0);
PPC_FUNC_IMPL(__imp__sub_823F8AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f8b30
	ctx.lr = 0x823F8B00;
	sub_823F8B30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f8b10
	if (ctx.cr0.eq) goto loc_823F8B10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x823F8B10;
	sub_82332DB8(ctx, base);
loc_823F8B10:
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

__attribute__((alias("__imp__sub_823F8B30"))) PPC_WEAK_FUNC(sub_823F8B30);
PPC_FUNC_IMPL(__imp__sub_823F8B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r11,r11,-20472
	ctx.r11.s64 = ctx.r11.s64 + -20472;
	// addi r10,r10,-19132
	ctx.r10.s64 = ctx.r10.s64 + -19132;
	// addi r9,r9,-19080
	ctx.r9.s64 = ctx.r9.s64 + -19080;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r3,r31,2576
	ctx.r3.s64 = ctx.r31.s64 + 2576;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x8239d768
	ctx.lr = 0x823F8B70;
	sub_8239D768(ctx, base);
	// addi r3,r31,2552
	ctx.r3.s64 = ctx.r31.s64 + 2552;
	// bl 0x8239d768
	ctx.lr = 0x823F8B78;
	sub_8239D768(ctx, base);
	// addi r3,r31,2528
	ctx.r3.s64 = ctx.r31.s64 + 2528;
	// bl 0x8239d768
	ctx.lr = 0x823F8B80;
	sub_8239D768(ctx, base);
	// addi r3,r31,2504
	ctx.r3.s64 = ctx.r31.s64 + 2504;
	// bl 0x8239d768
	ctx.lr = 0x823F8B88;
	sub_8239D768(ctx, base);
	// addi r3,r31,2480
	ctx.r3.s64 = ctx.r31.s64 + 2480;
	// bl 0x8239d768
	ctx.lr = 0x823F8B90;
	sub_8239D768(ctx, base);
	// addi r3,r31,2456
	ctx.r3.s64 = ctx.r31.s64 + 2456;
	// bl 0x8239d768
	ctx.lr = 0x823F8B98;
	sub_8239D768(ctx, base);
	// addi r3,r31,2432
	ctx.r3.s64 = ctx.r31.s64 + 2432;
	// bl 0x8239d768
	ctx.lr = 0x823F8BA0;
	sub_8239D768(ctx, base);
	// addi r3,r31,2408
	ctx.r3.s64 = ctx.r31.s64 + 2408;
	// bl 0x8239d768
	ctx.lr = 0x823F8BA8;
	sub_8239D768(ctx, base);
	// addi r3,r31,2384
	ctx.r3.s64 = ctx.r31.s64 + 2384;
	// bl 0x8239d768
	ctx.lr = 0x823F8BB0;
	sub_8239D768(ctx, base);
	// addi r3,r31,2360
	ctx.r3.s64 = ctx.r31.s64 + 2360;
	// bl 0x8239d768
	ctx.lr = 0x823F8BB8;
	sub_8239D768(ctx, base);
	// addi r3,r31,2336
	ctx.r3.s64 = ctx.r31.s64 + 2336;
	// bl 0x8239d768
	ctx.lr = 0x823F8BC0;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f8108
	ctx.lr = 0x823F8BC8;
	sub_823F8108(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F8BE0"))) PPC_WEAK_FUNC(sub_823F8BE0);
PPC_FUNC_IMPL(__imp__sub_823F8BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,10252
	ctx.r3.s64 = ctx.r11.s64 + 10252;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F8BF0"))) PPC_WEAK_FUNC(sub_823F8BF0);
PPC_FUNC_IMPL(__imp__sub_823F8BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823f8c28
	if (ctx.cr6.eq) goto loc_823F8C28;
	// bl 0x823f7f00
	ctx.lr = 0x823F8C18;
	sub_823F7F00(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823f8c28
	if (!ctx.cr6.eq) goto loc_823F8C28;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823f8c34
	goto loc_823F8C34;
loc_823F8C28:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f8208
	ctx.lr = 0x823F8C34;
	sub_823F8208(ctx, base);
loc_823F8C34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F8C50"))) PPC_WEAK_FUNC(sub_823F8C50);
PPC_FUNC_IMPL(__imp__sub_823F8C50) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f7f00
	sub_823F7F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F8C58"))) PPC_WEAK_FUNC(sub_823F8C58);
PPC_FUNC_IMPL(__imp__sub_823F8C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,2624
	ctx.r3.s64 = 2624;
	// bl 0x82833108
	ctx.lr = 0x823F8C74;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f8c88
	if (ctx.cr0.eq) goto loc_823F8C88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f8ca0
	ctx.lr = 0x823F8C84;
	sub_823F8CA0(ctx, base);
	// b 0x823f8c8c
	goto loc_823F8C8C;
loc_823F8C88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F8C8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F8CA0"))) PPC_WEAK_FUNC(sub_823F8CA0);
PPC_FUNC_IMPL(__imp__sub_823F8CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f8568
	ctx.lr = 0x823F8CC0;
	sub_823F8568(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r11,r11,-20472
	ctx.r11.s64 = ctx.r11.s64 + -20472;
	// addi r10,r10,-19132
	ctx.r10.s64 = ctx.r10.s64 + -19132;
	// addi r9,r9,-19080
	ctx.r9.s64 = ctx.r9.s64 + -19080;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r3,r31,2336
	ctx.r3.s64 = ctx.r31.s64 + 2336;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r4,r30,2336
	ctx.r4.s64 = ctx.r30.s64 + 2336;
	// bl 0x82873b58
	ctx.lr = 0x823F8CF0;
	sub_82873B58(ctx, base);
	// addi r3,r31,2360
	ctx.r3.s64 = ctx.r31.s64 + 2360;
	// addi r4,r30,2360
	ctx.r4.s64 = ctx.r30.s64 + 2360;
	// bl 0x82873b58
	ctx.lr = 0x823F8CFC;
	sub_82873B58(ctx, base);
	// addi r3,r31,2384
	ctx.r3.s64 = ctx.r31.s64 + 2384;
	// addi r4,r30,2384
	ctx.r4.s64 = ctx.r30.s64 + 2384;
	// bl 0x82873b58
	ctx.lr = 0x823F8D08;
	sub_82873B58(ctx, base);
	// addi r3,r31,2408
	ctx.r3.s64 = ctx.r31.s64 + 2408;
	// addi r4,r30,2408
	ctx.r4.s64 = ctx.r30.s64 + 2408;
	// bl 0x82873b58
	ctx.lr = 0x823F8D14;
	sub_82873B58(ctx, base);
	// addi r3,r31,2432
	ctx.r3.s64 = ctx.r31.s64 + 2432;
	// addi r4,r30,2432
	ctx.r4.s64 = ctx.r30.s64 + 2432;
	// bl 0x82873b58
	ctx.lr = 0x823F8D20;
	sub_82873B58(ctx, base);
	// addi r3,r31,2456
	ctx.r3.s64 = ctx.r31.s64 + 2456;
	// addi r4,r30,2456
	ctx.r4.s64 = ctx.r30.s64 + 2456;
	// bl 0x82873b58
	ctx.lr = 0x823F8D2C;
	sub_82873B58(ctx, base);
	// addi r3,r31,2480
	ctx.r3.s64 = ctx.r31.s64 + 2480;
	// addi r4,r30,2480
	ctx.r4.s64 = ctx.r30.s64 + 2480;
	// bl 0x82873b58
	ctx.lr = 0x823F8D38;
	sub_82873B58(ctx, base);
	// addi r3,r31,2504
	ctx.r3.s64 = ctx.r31.s64 + 2504;
	// addi r4,r30,2504
	ctx.r4.s64 = ctx.r30.s64 + 2504;
	// bl 0x82873b58
	ctx.lr = 0x823F8D44;
	sub_82873B58(ctx, base);
	// addi r3,r31,2528
	ctx.r3.s64 = ctx.r31.s64 + 2528;
	// addi r4,r30,2528
	ctx.r4.s64 = ctx.r30.s64 + 2528;
	// bl 0x82873b58
	ctx.lr = 0x823F8D50;
	sub_82873B58(ctx, base);
	// addi r3,r31,2552
	ctx.r3.s64 = ctx.r31.s64 + 2552;
	// addi r4,r30,2552
	ctx.r4.s64 = ctx.r30.s64 + 2552;
	// bl 0x82873b58
	ctx.lr = 0x823F8D5C;
	sub_82873B58(ctx, base);
	// addi r3,r31,2576
	ctx.r3.s64 = ctx.r31.s64 + 2576;
	// addi r4,r30,2576
	ctx.r4.s64 = ctx.r30.s64 + 2576;
	// bl 0x82873b58
	ctx.lr = 0x823F8D68;
	sub_82873B58(ctx, base);
	// lwz r11,2600(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2600);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,2600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2600, ctx.r11.u32);
	// lwz r11,2604(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2604);
	// stw r11,2604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2604, ctx.r11.u32);
	// lwz r11,2608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2608);
	// stw r11,2608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2608, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F8DA0"))) PPC_WEAK_FUNC(sub_823F8DA0);
PPC_FUNC_IMPL(__imp__sub_823F8DA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823f8ae0
	sub_823F8AE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F8DA8"))) PPC_WEAK_FUNC(sub_823F8DA8);
PPC_FUNC_IMPL(__imp__sub_823F8DA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823f7eb0
	sub_823F7EB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F8DB0"))) PPC_WEAK_FUNC(sub_823F8DB0);
PPC_FUNC_IMPL(__imp__sub_823F8DB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x823f8ae0
	sub_823F8AE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F8DB8"))) PPC_WEAK_FUNC(sub_823F8DB8);
PPC_FUNC_IMPL(__imp__sub_823F8DB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,2624
	ctx.r3.s64 = 2624;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F8DC0"))) PPC_WEAK_FUNC(sub_823F8DC0);
PPC_FUNC_IMPL(__imp__sub_823F8DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31260(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31260);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f8e00
	if (!ctx.cr0.eq) goto loc_823F8E00;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31260, ctx.r11.u32);
	// addi r3,r9,10252
	ctx.r3.s64 = ctx.r9.s64 + 10252;
	// bl 0x82816528
	ctx.lr = 0x823F8DF8;
	sub_82816528(ctx, base);
	// stw r3,31256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31256, ctx.r3.u32);
	// b 0x823f8e04
	goto loc_823F8E04;
loc_823F8E00:
	// lwz r3,31256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31256);
loc_823F8E04:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F8E18"))) PPC_WEAK_FUNC(sub_823F8E18);
PPC_FUNC_IMPL(__imp__sub_823F8E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f7f00
	ctx.lr = 0x823F8E38;
	sub_823F7F00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F8E4C;
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

__attribute__((alias("__imp__sub_823F8E68"))) PPC_WEAK_FUNC(sub_823F8E68);
PPC_FUNC_IMPL(__imp__sub_823F8E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x823f8268
	ctx.lr = 0x823F8E88;
	sub_823F8268(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823f8e98
	if (!ctx.cr6.eq) goto loc_823F8E98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x823f8eb0
	goto loc_823F8EB0;
loc_823F8E98:
	// bl 0x823f8410
	ctx.lr = 0x823F8E9C;
	sub_823F8410(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x823f8eb0
	if (ctx.cr6.eq) goto loc_823F8EB0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f6700
	ctx.lr = 0x823F8EB0;
	sub_823F6700(ctx, base);
loc_823F8EB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F8EC8"))) PPC_WEAK_FUNC(sub_823F8EC8);
PPC_FUNC_IMPL(__imp__sub_823F8EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823f8f00
	if (ctx.cr6.eq) goto loc_823F8F00;
	// bl 0x823f7d40
	ctx.lr = 0x823F8EF0;
	sub_823F7D40(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823f8f00
	if (!ctx.cr6.eq) goto loc_823F8F00;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823f8f0c
	goto loc_823F8F0C;
loc_823F8F00:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f8f28
	ctx.lr = 0x823F8F0C;
	sub_823F8F28(ctx, base);
loc_823F8F0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F8F28"))) PPC_WEAK_FUNC(sub_823F8F28);
PPC_FUNC_IMPL(__imp__sub_823F8F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823f8f60
	if (ctx.cr6.eq) goto loc_823F8F60;
	// bl 0x823fb5f0
	ctx.lr = 0x823F8F50;
	sub_823FB5F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823f8f60
	if (!ctx.cr6.eq) goto loc_823F8F60;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823f8f6c
	goto loc_823F8F6C;
loc_823F8F60:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f8bf0
	ctx.lr = 0x823F8F6C;
	sub_823F8BF0(ctx, base);
loc_823F8F6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F8F88"))) PPC_WEAK_FUNC(sub_823F8F88);
PPC_FUNC_IMPL(__imp__sub_823F8F88) {
	PPC_FUNC_PROLOGUE();
	// b 0x823fb5f0
	sub_823FB5F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F8F90"))) PPC_WEAK_FUNC(sub_823F8F90);
PPC_FUNC_IMPL(__imp__sub_823F8F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,3232
	ctx.r3.s64 = 3232;
	// bl 0x82833108
	ctx.lr = 0x823F8FAC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f8fc0
	if (ctx.cr0.eq) goto loc_823F8FC0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f8fd8
	ctx.lr = 0x823F8FBC;
	sub_823F8FD8(ctx, base);
	// b 0x823f8fc4
	goto loc_823F8FC4;
loc_823F8FC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F8FC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F8FD8"))) PPC_WEAK_FUNC(sub_823F8FD8);
PPC_FUNC_IMPL(__imp__sub_823F8FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f8ca0
	ctx.lr = 0x823F8FF8;
	sub_823F8CA0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r11,r11,-19032
	ctx.r11.s64 = ctx.r11.s64 + -19032;
	// addi r10,r10,-17668
	ctx.r10.s64 = ctx.r10.s64 + -17668;
	// addi r9,r9,-14744
	ctx.r9.s64 = ctx.r9.s64 + -14744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,2624
	ctx.r4.s64 = ctx.r30.s64 + 2624;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r31,2624
	ctx.r3.s64 = ctx.r31.s64 + 2624;
	// bl 0x82873b58
	ctx.lr = 0x823F9028;
	sub_82873B58(ctx, base);
	// addi r4,r30,2648
	ctx.r4.s64 = ctx.r30.s64 + 2648;
	// addi r3,r31,2648
	ctx.r3.s64 = ctx.r31.s64 + 2648;
	// bl 0x82873b58
	ctx.lr = 0x823F9034;
	sub_82873B58(ctx, base);
	// addi r4,r30,2672
	ctx.r4.s64 = ctx.r30.s64 + 2672;
	// addi r3,r31,2672
	ctx.r3.s64 = ctx.r31.s64 + 2672;
	// bl 0x82873b58
	ctx.lr = 0x823F9040;
	sub_82873B58(ctx, base);
	// addi r4,r30,2696
	ctx.r4.s64 = ctx.r30.s64 + 2696;
	// addi r3,r31,2696
	ctx.r3.s64 = ctx.r31.s64 + 2696;
	// bl 0x82873b58
	ctx.lr = 0x823F904C;
	sub_82873B58(ctx, base);
	// addi r4,r30,2720
	ctx.r4.s64 = ctx.r30.s64 + 2720;
	// addi r3,r31,2720
	ctx.r3.s64 = ctx.r31.s64 + 2720;
	// bl 0x82873b58
	ctx.lr = 0x823F9058;
	sub_82873B58(ctx, base);
	// addi r4,r30,2744
	ctx.r4.s64 = ctx.r30.s64 + 2744;
	// addi r3,r31,2744
	ctx.r3.s64 = ctx.r31.s64 + 2744;
	// bl 0x82873b58
	ctx.lr = 0x823F9064;
	sub_82873B58(ctx, base);
	// addi r4,r30,2768
	ctx.r4.s64 = ctx.r30.s64 + 2768;
	// addi r3,r31,2768
	ctx.r3.s64 = ctx.r31.s64 + 2768;
	// bl 0x82873b58
	ctx.lr = 0x823F9070;
	sub_82873B58(ctx, base);
	// addi r4,r30,2792
	ctx.r4.s64 = ctx.r30.s64 + 2792;
	// addi r3,r31,2792
	ctx.r3.s64 = ctx.r31.s64 + 2792;
	// bl 0x82873b58
	ctx.lr = 0x823F907C;
	sub_82873B58(ctx, base);
	// addi r4,r30,2816
	ctx.r4.s64 = ctx.r30.s64 + 2816;
	// addi r3,r31,2816
	ctx.r3.s64 = ctx.r31.s64 + 2816;
	// bl 0x82873b58
	ctx.lr = 0x823F9088;
	sub_82873B58(ctx, base);
	// addi r4,r30,2840
	ctx.r4.s64 = ctx.r30.s64 + 2840;
	// addi r3,r31,2840
	ctx.r3.s64 = ctx.r31.s64 + 2840;
	// bl 0x82873b58
	ctx.lr = 0x823F9094;
	sub_82873B58(ctx, base);
	// addi r4,r30,2864
	ctx.r4.s64 = ctx.r30.s64 + 2864;
	// addi r3,r31,2864
	ctx.r3.s64 = ctx.r31.s64 + 2864;
	// bl 0x82873b58
	ctx.lr = 0x823F90A0;
	sub_82873B58(ctx, base);
	// addi r4,r30,2888
	ctx.r4.s64 = ctx.r30.s64 + 2888;
	// addi r3,r31,2888
	ctx.r3.s64 = ctx.r31.s64 + 2888;
	// bl 0x82873b58
	ctx.lr = 0x823F90AC;
	sub_82873B58(ctx, base);
	// addi r4,r30,2912
	ctx.r4.s64 = ctx.r30.s64 + 2912;
	// addi r3,r31,2912
	ctx.r3.s64 = ctx.r31.s64 + 2912;
	// bl 0x82873b58
	ctx.lr = 0x823F90B8;
	sub_82873B58(ctx, base);
	// addi r4,r30,2936
	ctx.r4.s64 = ctx.r30.s64 + 2936;
	// addi r3,r31,2936
	ctx.r3.s64 = ctx.r31.s64 + 2936;
	// bl 0x82873b58
	ctx.lr = 0x823F90C4;
	sub_82873B58(ctx, base);
	// addi r4,r30,2960
	ctx.r4.s64 = ctx.r30.s64 + 2960;
	// addi r3,r31,2960
	ctx.r3.s64 = ctx.r31.s64 + 2960;
	// bl 0x82873b58
	ctx.lr = 0x823F90D0;
	sub_82873B58(ctx, base);
	// addi r4,r30,2984
	ctx.r4.s64 = ctx.r30.s64 + 2984;
	// addi r3,r31,2984
	ctx.r3.s64 = ctx.r31.s64 + 2984;
	// bl 0x82873b58
	ctx.lr = 0x823F90DC;
	sub_82873B58(ctx, base);
	// addi r4,r30,3008
	ctx.r4.s64 = ctx.r30.s64 + 3008;
	// addi r3,r31,3008
	ctx.r3.s64 = ctx.r31.s64 + 3008;
	// bl 0x82873b58
	ctx.lr = 0x823F90E8;
	sub_82873B58(ctx, base);
	// addi r4,r30,3032
	ctx.r4.s64 = ctx.r30.s64 + 3032;
	// addi r3,r31,3032
	ctx.r3.s64 = ctx.r31.s64 + 3032;
	// bl 0x82873b58
	ctx.lr = 0x823F90F4;
	sub_82873B58(ctx, base);
	// addi r4,r30,3056
	ctx.r4.s64 = ctx.r30.s64 + 3056;
	// addi r3,r31,3056
	ctx.r3.s64 = ctx.r31.s64 + 3056;
	// bl 0x82873b58
	ctx.lr = 0x823F9100;
	sub_82873B58(ctx, base);
	// addi r4,r30,3080
	ctx.r4.s64 = ctx.r30.s64 + 3080;
	// addi r3,r31,3080
	ctx.r3.s64 = ctx.r31.s64 + 3080;
	// bl 0x82873b58
	ctx.lr = 0x823F910C;
	sub_82873B58(ctx, base);
	// addi r4,r30,3104
	ctx.r4.s64 = ctx.r30.s64 + 3104;
	// addi r3,r31,3104
	ctx.r3.s64 = ctx.r31.s64 + 3104;
	// bl 0x82873b58
	ctx.lr = 0x823F9118;
	sub_82873B58(ctx, base);
	// addi r4,r30,3128
	ctx.r4.s64 = ctx.r30.s64 + 3128;
	// addi r3,r31,3128
	ctx.r3.s64 = ctx.r31.s64 + 3128;
	// bl 0x82873b58
	ctx.lr = 0x823F9124;
	sub_82873B58(ctx, base);
	// addi r4,r30,3152
	ctx.r4.s64 = ctx.r30.s64 + 3152;
	// addi r3,r31,3152
	ctx.r3.s64 = ctx.r31.s64 + 3152;
	// bl 0x82873b58
	ctx.lr = 0x823F9130;
	sub_82873B58(ctx, base);
	// addi r3,r31,3176
	ctx.r3.s64 = ctx.r31.s64 + 3176;
	// addi r4,r30,3176
	ctx.r4.s64 = ctx.r30.s64 + 3176;
	// bl 0x82873b58
	ctx.lr = 0x823F913C;
	sub_82873B58(ctx, base);
	// lwz r11,3200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3200);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,3200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3200, ctx.r11.u32);
	// lwz r11,3204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3204);
	// stw r11,3204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3204, ctx.r11.u32);
	// lwz r11,3208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3208);
	// stw r11,3208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3208, ctx.r11.u32);
	// lwz r11,3212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3212);
	// stw r11,3212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3212, ctx.r11.u32);
	// lwz r11,3216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3216);
	// stw r11,3216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3216, ctx.r11.u32);
	// lwz r11,3220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3220);
	// stw r11,3220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3220, ctx.r11.u32);
	// lwz r11,3224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3224);
	// stw r11,3224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3224, ctx.r11.u32);
	// lwz r11,3228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3228);
	// stw r11,3228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3228, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F9198"))) PPC_WEAK_FUNC(sub_823F9198);
PPC_FUNC_IMPL(__imp__sub_823F9198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,10276
	ctx.r3.s64 = ctx.r11.s64 + 10276;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F91A8"))) PPC_WEAK_FUNC(sub_823F91A8);
PPC_FUNC_IMPL(__imp__sub_823F91A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823f7e50
	sub_823F7E50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F91B0"))) PPC_WEAK_FUNC(sub_823F91B0);
PPC_FUNC_IMPL(__imp__sub_823F91B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3224(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3224);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F91B8"))) PPC_WEAK_FUNC(sub_823F91B8);
PPC_FUNC_IMPL(__imp__sub_823F91B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x826db5d8
	sub_826DB5D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F91C0"))) PPC_WEAK_FUNC(sub_823F91C0);
PPC_FUNC_IMPL(__imp__sub_823F91C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823f7c90
	sub_823F7C90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F91C8"))) PPC_WEAK_FUNC(sub_823F91C8);
PPC_FUNC_IMPL(__imp__sub_823F91C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823f7cf0
	sub_823F7CF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F91D0"))) PPC_WEAK_FUNC(sub_823F91D0);
PPC_FUNC_IMPL(__imp__sub_823F91D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x823f7c90
	sub_823F7C90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F91D8"))) PPC_WEAK_FUNC(sub_823F91D8);
PPC_FUNC_IMPL(__imp__sub_823F91D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,3488
	ctx.r3.s64 = ctx.r31.s64 + 3488;
	// bl 0x8239d768
	ctx.lr = 0x823F91FC;
	sub_8239D768(ctx, base);
	// addi r3,r31,3464
	ctx.r3.s64 = ctx.r31.s64 + 3464;
	// bl 0x8239d768
	ctx.lr = 0x823F9204;
	sub_8239D768(ctx, base);
	// addi r3,r31,3440
	ctx.r3.s64 = ctx.r31.s64 + 3440;
	// bl 0x8239d768
	ctx.lr = 0x823F920C;
	sub_8239D768(ctx, base);
	// addi r3,r31,3416
	ctx.r3.s64 = ctx.r31.s64 + 3416;
	// bl 0x8239d768
	ctx.lr = 0x823F9214;
	sub_8239D768(ctx, base);
	// addi r3,r31,3392
	ctx.r3.s64 = ctx.r31.s64 + 3392;
	// bl 0x8239d768
	ctx.lr = 0x823F921C;
	sub_8239D768(ctx, base);
	// addi r3,r31,3368
	ctx.r3.s64 = ctx.r31.s64 + 3368;
	// bl 0x8239d768
	ctx.lr = 0x823F9224;
	sub_8239D768(ctx, base);
	// addi r3,r31,3344
	ctx.r3.s64 = ctx.r31.s64 + 3344;
	// bl 0x8239d768
	ctx.lr = 0x823F922C;
	sub_8239D768(ctx, base);
	// addi r3,r31,3320
	ctx.r3.s64 = ctx.r31.s64 + 3320;
	// bl 0x8239d768
	ctx.lr = 0x823F9234;
	sub_8239D768(ctx, base);
	// addi r3,r31,3296
	ctx.r3.s64 = ctx.r31.s64 + 3296;
	// bl 0x8239d768
	ctx.lr = 0x823F923C;
	sub_8239D768(ctx, base);
	// addi r3,r31,3272
	ctx.r3.s64 = ctx.r31.s64 + 3272;
	// bl 0x8239d768
	ctx.lr = 0x823F9244;
	sub_8239D768(ctx, base);
	// addi r3,r31,3248
	ctx.r3.s64 = ctx.r31.s64 + 3248;
	// bl 0x8239d768
	ctx.lr = 0x823F924C;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826dac50
	ctx.lr = 0x823F9254;
	sub_826DAC50(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f9264
	if (ctx.cr0.eq) goto loc_823F9264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x823F9264;
	sub_82332DB8(ctx, base);
loc_823F9264:
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

__attribute__((alias("__imp__sub_823F9280"))) PPC_WEAK_FUNC(sub_823F9280);
PPC_FUNC_IMPL(__imp__sub_823F9280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,10368
	ctx.r3.s64 = ctx.r11.s64 + 10368;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F9290"))) PPC_WEAK_FUNC(sub_823F9290);
PPC_FUNC_IMPL(__imp__sub_823F9290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x823f7a88
	ctx.lr = 0x823F92B0;
	sub_823F7A88(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823f92c0
	if (!ctx.cr6.eq) goto loc_823F92C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x823f92d8
	goto loc_823F92D8;
loc_823F92C0:
	// bl 0x823f7d40
	ctx.lr = 0x823F92C4;
	sub_823F7D40(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x823f92d8
	if (ctx.cr6.eq) goto loc_823F92D8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f7e50
	ctx.lr = 0x823F92D8;
	sub_823F7E50(ctx, base);
loc_823F92D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F92F0"))) PPC_WEAK_FUNC(sub_823F92F0);
PPC_FUNC_IMPL(__imp__sub_823F92F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823f9328
	if (ctx.cr6.eq) goto loc_823F9328;
	// bl 0x823f7a88
	ctx.lr = 0x823F9318;
	sub_823F7A88(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823f9328
	if (!ctx.cr6.eq) goto loc_823F9328;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823f9334
	goto loc_823F9334;
loc_823F9328:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f8ec8
	ctx.lr = 0x823F9334;
	sub_823F8EC8(ctx, base);
loc_823F9334:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F9350"))) PPC_WEAK_FUNC(sub_823F9350);
PPC_FUNC_IMPL(__imp__sub_823F9350) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f7a88
	sub_823F7A88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F9358"))) PPC_WEAK_FUNC(sub_823F9358);
PPC_FUNC_IMPL(__imp__sub_823F9358) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f7d40
	sub_823F7D40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F9360"))) PPC_WEAK_FUNC(sub_823F9360);
PPC_FUNC_IMPL(__imp__sub_823F9360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,3536
	ctx.r3.s64 = 3536;
	// bl 0x82833108
	ctx.lr = 0x823F937C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f9390
	if (ctx.cr0.eq) goto loc_823F9390;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f93a8
	ctx.lr = 0x823F938C;
	sub_823F93A8(ctx, base);
	// b 0x823f9394
	goto loc_823F9394;
loc_823F9390:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F9394:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F93A8"))) PPC_WEAK_FUNC(sub_823F93A8);
PPC_FUNC_IMPL(__imp__sub_823F93A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f8fd8
	ctx.lr = 0x823F93C8;
	sub_823F8FD8(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r11,r11,-16176
	ctx.r11.s64 = ctx.r11.s64 + -16176;
	// addi r10,r10,-14796
	ctx.r10.s64 = ctx.r10.s64 + -14796;
	// addi r9,r9,-14744
	ctx.r9.s64 = ctx.r9.s64 + -14744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lwz r8,3232(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3232);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r8,3232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3232, ctx.r8.u32);
	// addi r11,r11,-13216
	ctx.r11.s64 = ctx.r11.s64 + -13216;
	// lwz r8,3236(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3236);
	// addi r10,r10,-11836
	ctx.r10.s64 = ctx.r10.s64 + -11836;
	// stw r8,3236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3236, ctx.r8.u32);
	// addi r9,r9,-11784
	ctx.r9.s64 = ctx.r9.s64 + -11784;
	// lwz r8,3240(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3240);
	// addi r3,r31,3248
	ctx.r3.s64 = ctx.r31.s64 + 3248;
	// stw r8,3240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3240, ctx.r8.u32);
	// addi r4,r30,3248
	ctx.r4.s64 = ctx.r30.s64 + 3248;
	// lwz r8,3244(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3244);
	// stw r8,3244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3244, ctx.r8.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x82873b58
	ctx.lr = 0x823F943C;
	sub_82873B58(ctx, base);
	// addi r3,r31,3272
	ctx.r3.s64 = ctx.r31.s64 + 3272;
	// addi r4,r30,3272
	ctx.r4.s64 = ctx.r30.s64 + 3272;
	// bl 0x82873b58
	ctx.lr = 0x823F9448;
	sub_82873B58(ctx, base);
	// addi r3,r31,3296
	ctx.r3.s64 = ctx.r31.s64 + 3296;
	// addi r4,r30,3296
	ctx.r4.s64 = ctx.r30.s64 + 3296;
	// bl 0x82873b58
	ctx.lr = 0x823F9454;
	sub_82873B58(ctx, base);
	// addi r3,r31,3320
	ctx.r3.s64 = ctx.r31.s64 + 3320;
	// addi r4,r30,3320
	ctx.r4.s64 = ctx.r30.s64 + 3320;
	// bl 0x82873b58
	ctx.lr = 0x823F9460;
	sub_82873B58(ctx, base);
	// addi r3,r31,3344
	ctx.r3.s64 = ctx.r31.s64 + 3344;
	// addi r4,r30,3344
	ctx.r4.s64 = ctx.r30.s64 + 3344;
	// bl 0x82873b58
	ctx.lr = 0x823F946C;
	sub_82873B58(ctx, base);
	// addi r3,r31,3368
	ctx.r3.s64 = ctx.r31.s64 + 3368;
	// addi r4,r30,3368
	ctx.r4.s64 = ctx.r30.s64 + 3368;
	// bl 0x82873b58
	ctx.lr = 0x823F9478;
	sub_82873B58(ctx, base);
	// addi r3,r31,3392
	ctx.r3.s64 = ctx.r31.s64 + 3392;
	// addi r4,r30,3392
	ctx.r4.s64 = ctx.r30.s64 + 3392;
	// bl 0x82873b58
	ctx.lr = 0x823F9484;
	sub_82873B58(ctx, base);
	// addi r3,r31,3416
	ctx.r3.s64 = ctx.r31.s64 + 3416;
	// addi r4,r30,3416
	ctx.r4.s64 = ctx.r30.s64 + 3416;
	// bl 0x82873b58
	ctx.lr = 0x823F9490;
	sub_82873B58(ctx, base);
	// addi r3,r31,3440
	ctx.r3.s64 = ctx.r31.s64 + 3440;
	// addi r4,r30,3440
	ctx.r4.s64 = ctx.r30.s64 + 3440;
	// bl 0x82873b58
	ctx.lr = 0x823F949C;
	sub_82873B58(ctx, base);
	// addi r3,r31,3464
	ctx.r3.s64 = ctx.r31.s64 + 3464;
	// addi r4,r30,3464
	ctx.r4.s64 = ctx.r30.s64 + 3464;
	// bl 0x82873b58
	ctx.lr = 0x823F94A8;
	sub_82873B58(ctx, base);
	// addi r3,r31,3488
	ctx.r3.s64 = ctx.r31.s64 + 3488;
	// addi r4,r30,3488
	ctx.r4.s64 = ctx.r30.s64 + 3488;
	// bl 0x82873b58
	ctx.lr = 0x823F94B4;
	sub_82873B58(ctx, base);
	// lwz r11,3512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3512);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,3512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3512, ctx.r11.u32);
	// lwz r11,3516(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3516);
	// stw r11,3516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3516, ctx.r11.u32);
	// lwz r11,3520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3520);
	// stw r11,3520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3520, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F94E8"))) PPC_WEAK_FUNC(sub_823F94E8);
PPC_FUNC_IMPL(__imp__sub_823F94E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823f91d8
	sub_823F91D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F94F0"))) PPC_WEAK_FUNC(sub_823F94F0);
PPC_FUNC_IMPL(__imp__sub_823F94F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823f9290
	sub_823F9290(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F94F8"))) PPC_WEAK_FUNC(sub_823F94F8);
PPC_FUNC_IMPL(__imp__sub_823F94F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x823f91d8
	sub_823F91D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F9500"))) PPC_WEAK_FUNC(sub_823F9500);
PPC_FUNC_IMPL(__imp__sub_823F9500) {
	PPC_FUNC_PROLOGUE();
	// li r3,3536
	ctx.r3.s64 = 3536;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F9508"))) PPC_WEAK_FUNC(sub_823F9508);
PPC_FUNC_IMPL(__imp__sub_823F9508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31252(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31252);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f9548
	if (!ctx.cr0.eq) goto loc_823F9548;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31252(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31252, ctx.r11.u32);
	// addi r3,r9,10368
	ctx.r3.s64 = ctx.r9.s64 + 10368;
	// bl 0x82816528
	ctx.lr = 0x823F9540;
	sub_82816528(ctx, base);
	// stw r3,31248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31248, ctx.r3.u32);
	// b 0x823f954c
	goto loc_823F954C;
loc_823F9548:
	// lwz r3,31248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31248);
loc_823F954C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F9560"))) PPC_WEAK_FUNC(sub_823F9560);
PPC_FUNC_IMPL(__imp__sub_823F9560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f7a88
	ctx.lr = 0x823F9580;
	sub_823F7A88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F9594;
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

__attribute__((alias("__imp__sub_823F95B0"))) PPC_WEAK_FUNC(sub_823F95B0);
PPC_FUNC_IMPL(__imp__sub_823F95B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-28076
	ctx.r31.s64 = ctx.r11.s64 + -28076;
	// lwz r11,-28004(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28004);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f95f8
	if (!ctx.cr0.eq) goto loc_823F95F8;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-13240
	ctx.r9.s64 = ctx.r9.s64 + -13240;
	// stw r11,-28004(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28004, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-11048
	ctx.r3.s64 = ctx.r11.s64 + -11048;
	// bl 0x82a4c758
	ctx.lr = 0x823F95F8;
	sub_82A4C758(ctx, base);
loc_823F95F8:
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

__attribute__((alias("__imp__sub_823F9610"))) PPC_WEAK_FUNC(sub_823F9610);
PPC_FUNC_IMPL(__imp__sub_823F9610) {
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
	// li r3,3600
	ctx.r3.s64 = 3600;
	// bl 0x82833108
	ctx.lr = 0x823F9624;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f9634
	if (ctx.cr0.eq) goto loc_823F9634;
	// bl 0x823f9648
	ctx.lr = 0x823F9630;
	sub_823F9648(ctx, base);
	// b 0x823f9638
	goto loc_823F9638;
loc_823F9634:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F9638:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F9648"))) PPC_WEAK_FUNC(sub_823F9648);
PPC_FUNC_IMPL(__imp__sub_823F9648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x826da9a8
	ctx.lr = 0x823F9660;
	sub_826DA9A8(ctx, base);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r10,r10,-14696
	ctx.r10.s64 = ctx.r10.s64 + -14696;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-13316
	ctx.r9.s64 = ctx.r9.s64 + -13316;
	// addi r8,r8,-13264
	ctx.r8.s64 = ctx.r8.s64 + -13264;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// stw r10,3252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3252, ctx.r10.u32);
	// stw r11,3256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3256, ctx.r11.u32);
	// stw r11,3260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3260, ctx.r11.u32);
	// stw r11,3264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3264, ctx.r11.u32);
	// stw r11,3268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3268, ctx.r11.u32);
	// stw r11,3248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3248, ctx.r11.u32);
	// stw r10,3276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3276, ctx.r10.u32);
	// stw r11,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r11.u32);
	// stw r11,3284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3284, ctx.r11.u32);
	// stw r11,3288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3288, ctx.r11.u32);
	// stw r11,3292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3292, ctx.r11.u32);
	// stw r11,3272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3272, ctx.r11.u32);
	// stw r10,3300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3300, ctx.r10.u32);
	// stw r11,3304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3304, ctx.r11.u32);
	// stw r11,3308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3308, ctx.r11.u32);
	// stw r11,3312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3312, ctx.r11.u32);
	// stw r11,3316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3316, ctx.r11.u32);
	// stw r11,3296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3296, ctx.r11.u32);
	// stw r10,3324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3324, ctx.r10.u32);
	// stw r11,3328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3328, ctx.r11.u32);
	// stw r11,3332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3332, ctx.r11.u32);
	// stw r11,3336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3336, ctx.r11.u32);
	// stw r11,3340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3340, ctx.r11.u32);
	// stw r11,3320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3320, ctx.r11.u32);
	// stw r10,3348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3348, ctx.r10.u32);
	// stw r11,3352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3352, ctx.r11.u32);
	// stw r11,3356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3356, ctx.r11.u32);
	// stw r11,3360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3360, ctx.r11.u32);
	// stw r11,3364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3364, ctx.r11.u32);
	// stw r11,3344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3344, ctx.r11.u32);
	// stw r10,3372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3372, ctx.r10.u32);
	// stw r11,3376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3376, ctx.r11.u32);
	// stw r11,3380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3380, ctx.r11.u32);
	// stw r11,3384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3384, ctx.r11.u32);
	// stw r11,3388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3388, ctx.r11.u32);
	// stw r11,3368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3368, ctx.r11.u32);
	// stw r10,3396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3396, ctx.r10.u32);
	// stw r11,3400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3400, ctx.r11.u32);
	// stw r11,3404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3404, ctx.r11.u32);
	// stw r11,3408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3408, ctx.r11.u32);
	// stw r11,3412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3412, ctx.r11.u32);
	// stw r11,3392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3392, ctx.r11.u32);
	// stw r10,3420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3420, ctx.r10.u32);
	// stw r11,3424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3424, ctx.r11.u32);
	// stw r11,3428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3428, ctx.r11.u32);
	// stw r11,3432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3432, ctx.r11.u32);
	// stw r11,3436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3436, ctx.r11.u32);
	// stw r11,3416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3416, ctx.r11.u32);
	// stw r10,3444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3444, ctx.r10.u32);
	// stw r11,3448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3448, ctx.r11.u32);
	// stw r11,3452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3452, ctx.r11.u32);
	// stw r11,3456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3456, ctx.r11.u32);
	// stw r11,3460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3460, ctx.r11.u32);
	// stw r11,3440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3440, ctx.r11.u32);
	// stw r10,3468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3468, ctx.r10.u32);
	// stw r11,3472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3472, ctx.r11.u32);
	// stw r11,3476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3476, ctx.r11.u32);
	// stw r11,3480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3480, ctx.r11.u32);
	// stw r11,3484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3484, ctx.r11.u32);
	// stw r11,3464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3464, ctx.r11.u32);
	// stw r10,3492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3492, ctx.r10.u32);
	// stw r11,3496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3496, ctx.r11.u32);
	// stw r11,3500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3500, ctx.r11.u32);
	// stw r11,3504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3504, ctx.r11.u32);
	// stw r11,3508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3508, ctx.r11.u32);
	// stw r11,3488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3488, ctx.r11.u32);
	// stw r10,3516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3516, ctx.r10.u32);
	// stw r11,3520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3520, ctx.r11.u32);
	// stw r11,3524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3524, ctx.r11.u32);
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r11,3528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3528, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,3532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3532, ctx.r11.u32);
	// stw r11,3512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3512, ctx.r11.u32);
	// stw r10,3540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3540, ctx.r10.u32);
	// stw r11,3544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3544, ctx.r11.u32);
	// stw r11,3548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3548, ctx.r11.u32);
	// stw r11,3552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3552, ctx.r11.u32);
	// stw r11,3556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3556, ctx.r11.u32);
	// stw r11,3536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3536, ctx.r11.u32);
	// stw r10,3564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3564, ctx.r10.u32);
	// stw r11,3568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3568, ctx.r11.u32);
	// stw r11,3572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3572, ctx.r11.u32);
	// stw r11,3576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3576, ctx.r11.u32);
	// stw r11,3580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3580, ctx.r11.u32);
	// stw r11,3560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3560, ctx.r11.u32);
	// stw r9,2288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2288, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F9800"))) PPC_WEAK_FUNC(sub_823F9800);
PPC_FUNC_IMPL(__imp__sub_823F9800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,3560
	ctx.r3.s64 = ctx.r31.s64 + 3560;
	// bl 0x8239d768
	ctx.lr = 0x823F9824;
	sub_8239D768(ctx, base);
	// addi r3,r31,3536
	ctx.r3.s64 = ctx.r31.s64 + 3536;
	// bl 0x8239d768
	ctx.lr = 0x823F982C;
	sub_8239D768(ctx, base);
	// addi r3,r31,3512
	ctx.r3.s64 = ctx.r31.s64 + 3512;
	// bl 0x8239d768
	ctx.lr = 0x823F9834;
	sub_8239D768(ctx, base);
	// addi r3,r31,3488
	ctx.r3.s64 = ctx.r31.s64 + 3488;
	// bl 0x8239d768
	ctx.lr = 0x823F983C;
	sub_8239D768(ctx, base);
	// addi r3,r31,3464
	ctx.r3.s64 = ctx.r31.s64 + 3464;
	// bl 0x8239d768
	ctx.lr = 0x823F9844;
	sub_8239D768(ctx, base);
	// addi r3,r31,3440
	ctx.r3.s64 = ctx.r31.s64 + 3440;
	// bl 0x8239d768
	ctx.lr = 0x823F984C;
	sub_8239D768(ctx, base);
	// addi r3,r31,3416
	ctx.r3.s64 = ctx.r31.s64 + 3416;
	// bl 0x8239d768
	ctx.lr = 0x823F9854;
	sub_8239D768(ctx, base);
	// addi r3,r31,3392
	ctx.r3.s64 = ctx.r31.s64 + 3392;
	// bl 0x8239d768
	ctx.lr = 0x823F985C;
	sub_8239D768(ctx, base);
	// addi r3,r31,3368
	ctx.r3.s64 = ctx.r31.s64 + 3368;
	// bl 0x8239d768
	ctx.lr = 0x823F9864;
	sub_8239D768(ctx, base);
	// addi r3,r31,3344
	ctx.r3.s64 = ctx.r31.s64 + 3344;
	// bl 0x8239d768
	ctx.lr = 0x823F986C;
	sub_8239D768(ctx, base);
	// addi r3,r31,3320
	ctx.r3.s64 = ctx.r31.s64 + 3320;
	// bl 0x8239d768
	ctx.lr = 0x823F9874;
	sub_8239D768(ctx, base);
	// addi r3,r31,3296
	ctx.r3.s64 = ctx.r31.s64 + 3296;
	// bl 0x8239d768
	ctx.lr = 0x823F987C;
	sub_8239D768(ctx, base);
	// addi r3,r31,3272
	ctx.r3.s64 = ctx.r31.s64 + 3272;
	// bl 0x8239d768
	ctx.lr = 0x823F9884;
	sub_8239D768(ctx, base);
	// addi r3,r31,3248
	ctx.r3.s64 = ctx.r31.s64 + 3248;
	// bl 0x8239d768
	ctx.lr = 0x823F988C;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826dac50
	ctx.lr = 0x823F9894;
	sub_826DAC50(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f98a4
	if (ctx.cr0.eq) goto loc_823F98A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x823F98A4;
	sub_82332DB8(ctx, base);
loc_823F98A4:
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

__attribute__((alias("__imp__sub_823F98C0"))) PPC_WEAK_FUNC(sub_823F98C0);
PPC_FUNC_IMPL(__imp__sub_823F98C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,10344
	ctx.r3.s64 = ctx.r11.s64 + 10344;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F98D0"))) PPC_WEAK_FUNC(sub_823F98D0);
PPC_FUNC_IMPL(__imp__sub_823F98D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x823f95b0
	ctx.lr = 0x823F98F0;
	sub_823F95B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823f9900
	if (!ctx.cr6.eq) goto loc_823F9900;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x823f9918
	goto loc_823F9918;
loc_823F9900:
	// bl 0x823f7d40
	ctx.lr = 0x823F9904;
	sub_823F7D40(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x823f9918
	if (ctx.cr6.eq) goto loc_823F9918;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f7e50
	ctx.lr = 0x823F9918;
	sub_823F7E50(ctx, base);
loc_823F9918:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F9930"))) PPC_WEAK_FUNC(sub_823F9930);
PPC_FUNC_IMPL(__imp__sub_823F9930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823f9968
	if (ctx.cr6.eq) goto loc_823F9968;
	// bl 0x823f95b0
	ctx.lr = 0x823F9958;
	sub_823F95B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823f9968
	if (!ctx.cr6.eq) goto loc_823F9968;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823f9974
	goto loc_823F9974;
loc_823F9968:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f8ec8
	ctx.lr = 0x823F9974;
	sub_823F8EC8(ctx, base);
loc_823F9974:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F9990"))) PPC_WEAK_FUNC(sub_823F9990);
PPC_FUNC_IMPL(__imp__sub_823F9990) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f95b0
	sub_823F95B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F9998"))) PPC_WEAK_FUNC(sub_823F9998);
PPC_FUNC_IMPL(__imp__sub_823F9998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,3600
	ctx.r3.s64 = 3600;
	// bl 0x82833108
	ctx.lr = 0x823F99B4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f99c8
	if (ctx.cr0.eq) goto loc_823F99C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f99e0
	ctx.lr = 0x823F99C4;
	sub_823F99E0(ctx, base);
	// b 0x823f99cc
	goto loc_823F99CC;
loc_823F99C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F99CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F99E0"))) PPC_WEAK_FUNC(sub_823F99E0);
PPC_FUNC_IMPL(__imp__sub_823F99E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f8fd8
	ctx.lr = 0x823F9A00;
	sub_823F8FD8(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r11,r11,-16176
	ctx.r11.s64 = ctx.r11.s64 + -16176;
	// addi r10,r10,-14796
	ctx.r10.s64 = ctx.r10.s64 + -14796;
	// addi r9,r9,-14744
	ctx.r9.s64 = ctx.r9.s64 + -14744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lwz r8,3232(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3232);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r8,3232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3232, ctx.r8.u32);
	// addi r11,r11,-14696
	ctx.r11.s64 = ctx.r11.s64 + -14696;
	// lwz r8,3236(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3236);
	// addi r10,r10,-13316
	ctx.r10.s64 = ctx.r10.s64 + -13316;
	// stw r8,3236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3236, ctx.r8.u32);
	// addi r9,r9,-13264
	ctx.r9.s64 = ctx.r9.s64 + -13264;
	// lwz r8,3240(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3240);
	// addi r3,r31,3248
	ctx.r3.s64 = ctx.r31.s64 + 3248;
	// stw r8,3240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3240, ctx.r8.u32);
	// addi r4,r30,3248
	ctx.r4.s64 = ctx.r30.s64 + 3248;
	// lwz r8,3244(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3244);
	// stw r8,3244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3244, ctx.r8.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x82873b58
	ctx.lr = 0x823F9A74;
	sub_82873B58(ctx, base);
	// addi r3,r31,3272
	ctx.r3.s64 = ctx.r31.s64 + 3272;
	// addi r4,r30,3272
	ctx.r4.s64 = ctx.r30.s64 + 3272;
	// bl 0x82873b58
	ctx.lr = 0x823F9A80;
	sub_82873B58(ctx, base);
	// addi r3,r31,3296
	ctx.r3.s64 = ctx.r31.s64 + 3296;
	// addi r4,r30,3296
	ctx.r4.s64 = ctx.r30.s64 + 3296;
	// bl 0x82873b58
	ctx.lr = 0x823F9A8C;
	sub_82873B58(ctx, base);
	// addi r3,r31,3320
	ctx.r3.s64 = ctx.r31.s64 + 3320;
	// addi r4,r30,3320
	ctx.r4.s64 = ctx.r30.s64 + 3320;
	// bl 0x82873b58
	ctx.lr = 0x823F9A98;
	sub_82873B58(ctx, base);
	// addi r3,r31,3344
	ctx.r3.s64 = ctx.r31.s64 + 3344;
	// addi r4,r30,3344
	ctx.r4.s64 = ctx.r30.s64 + 3344;
	// bl 0x82873b58
	ctx.lr = 0x823F9AA4;
	sub_82873B58(ctx, base);
	// addi r3,r31,3368
	ctx.r3.s64 = ctx.r31.s64 + 3368;
	// addi r4,r30,3368
	ctx.r4.s64 = ctx.r30.s64 + 3368;
	// bl 0x82873b58
	ctx.lr = 0x823F9AB0;
	sub_82873B58(ctx, base);
	// addi r3,r31,3392
	ctx.r3.s64 = ctx.r31.s64 + 3392;
	// addi r4,r30,3392
	ctx.r4.s64 = ctx.r30.s64 + 3392;
	// bl 0x82873b58
	ctx.lr = 0x823F9ABC;
	sub_82873B58(ctx, base);
	// addi r3,r31,3416
	ctx.r3.s64 = ctx.r31.s64 + 3416;
	// addi r4,r30,3416
	ctx.r4.s64 = ctx.r30.s64 + 3416;
	// bl 0x82873b58
	ctx.lr = 0x823F9AC8;
	sub_82873B58(ctx, base);
	// addi r3,r31,3440
	ctx.r3.s64 = ctx.r31.s64 + 3440;
	// addi r4,r30,3440
	ctx.r4.s64 = ctx.r30.s64 + 3440;
	// bl 0x82873b58
	ctx.lr = 0x823F9AD4;
	sub_82873B58(ctx, base);
	// addi r3,r31,3464
	ctx.r3.s64 = ctx.r31.s64 + 3464;
	// addi r4,r30,3464
	ctx.r4.s64 = ctx.r30.s64 + 3464;
	// bl 0x82873b58
	ctx.lr = 0x823F9AE0;
	sub_82873B58(ctx, base);
	// addi r3,r31,3488
	ctx.r3.s64 = ctx.r31.s64 + 3488;
	// addi r4,r30,3488
	ctx.r4.s64 = ctx.r30.s64 + 3488;
	// bl 0x82873b58
	ctx.lr = 0x823F9AEC;
	sub_82873B58(ctx, base);
	// addi r3,r31,3512
	ctx.r3.s64 = ctx.r31.s64 + 3512;
	// addi r4,r30,3512
	ctx.r4.s64 = ctx.r30.s64 + 3512;
	// bl 0x82873b58
	ctx.lr = 0x823F9AF8;
	sub_82873B58(ctx, base);
	// addi r3,r31,3536
	ctx.r3.s64 = ctx.r31.s64 + 3536;
	// addi r4,r30,3536
	ctx.r4.s64 = ctx.r30.s64 + 3536;
	// bl 0x82873b58
	ctx.lr = 0x823F9B04;
	sub_82873B58(ctx, base);
	// addi r3,r31,3560
	ctx.r3.s64 = ctx.r31.s64 + 3560;
	// addi r4,r30,3560
	ctx.r4.s64 = ctx.r30.s64 + 3560;
	// bl 0x82873b58
	ctx.lr = 0x823F9B10;
	sub_82873B58(ctx, base);
	// lwz r11,3584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3584);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,3584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3584, ctx.r11.u32);
	// lwz r11,3588(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3588);
	// stw r11,3588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3588, ctx.r11.u32);
	// lwz r11,3592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3592);
	// stw r11,3592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3592, ctx.r11.u32);
	// lwz r11,3596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3596);
	// stw r11,3596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3596, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F9B50"))) PPC_WEAK_FUNC(sub_823F9B50);
PPC_FUNC_IMPL(__imp__sub_823F9B50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823f9800
	sub_823F9800(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F9B58"))) PPC_WEAK_FUNC(sub_823F9B58);
PPC_FUNC_IMPL(__imp__sub_823F9B58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823f98d0
	sub_823F98D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F9B60"))) PPC_WEAK_FUNC(sub_823F9B60);
PPC_FUNC_IMPL(__imp__sub_823F9B60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x823f9800
	sub_823F9800(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F9B68"))) PPC_WEAK_FUNC(sub_823F9B68);
PPC_FUNC_IMPL(__imp__sub_823F9B68) {
	PPC_FUNC_PROLOGUE();
	// li r3,3600
	ctx.r3.s64 = 3600;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F9B70"))) PPC_WEAK_FUNC(sub_823F9B70);
PPC_FUNC_IMPL(__imp__sub_823F9B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31244(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31244);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f9bb0
	if (!ctx.cr0.eq) goto loc_823F9BB0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31244, ctx.r11.u32);
	// addi r3,r9,10344
	ctx.r3.s64 = ctx.r9.s64 + 10344;
	// bl 0x82816528
	ctx.lr = 0x823F9BA8;
	sub_82816528(ctx, base);
	// stw r3,31240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31240, ctx.r3.u32);
	// b 0x823f9bb4
	goto loc_823F9BB4;
loc_823F9BB0:
	// lwz r3,31240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31240);
loc_823F9BB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F9BC8"))) PPC_WEAK_FUNC(sub_823F9BC8);
PPC_FUNC_IMPL(__imp__sub_823F9BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f95b0
	ctx.lr = 0x823F9BE8;
	sub_823F95B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F9BFC;
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

__attribute__((alias("__imp__sub_823F9C18"))) PPC_WEAK_FUNC(sub_823F9C18);
PPC_FUNC_IMPL(__imp__sub_823F9C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-27104
	ctx.r31.s64 = ctx.r11.s64 + -27104;
	// lwz r11,-27100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27100);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f9c60
	if (!ctx.cr0.eq) goto loc_823F9C60;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-4248
	ctx.r9.s64 = ctx.r9.s64 + -4248;
	// stw r11,-27100(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27100, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-11024
	ctx.r3.s64 = ctx.r11.s64 + -11024;
	// bl 0x82a4c758
	ctx.lr = 0x823F9C60;
	sub_82A4C758(ctx, base);
loc_823F9C60:
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

__attribute__((alias("__imp__sub_823F9C78"))) PPC_WEAK_FUNC(sub_823F9C78);
PPC_FUNC_IMPL(__imp__sub_823F9C78) {
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
	// li r3,3712
	ctx.r3.s64 = 3712;
	// bl 0x82833108
	ctx.lr = 0x823F9C8C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f9c9c
	if (ctx.cr0.eq) goto loc_823F9C9C;
	// bl 0x827005b0
	ctx.lr = 0x823F9C98;
	sub_827005B0(ctx, base);
	// b 0x823f9ca0
	goto loc_823F9CA0;
loc_823F9C9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F9CA0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F9CB0"))) PPC_WEAK_FUNC(sub_823F9CB0);
PPC_FUNC_IMPL(__imp__sub_823F9CB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3712
	ctx.r3.s64 = 3712;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F9CB8"))) PPC_WEAK_FUNC(sub_823F9CB8);
PPC_FUNC_IMPL(__imp__sub_823F9CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31236);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f9cf8
	if (!ctx.cr0.eq) goto loc_823F9CF8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31236(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31236, ctx.r11.u32);
	// addi r3,r9,10580
	ctx.r3.s64 = ctx.r9.s64 + 10580;
	// bl 0x82816528
	ctx.lr = 0x823F9CF0;
	sub_82816528(ctx, base);
	// stw r3,31232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31232, ctx.r3.u32);
	// b 0x823f9cfc
	goto loc_823F9CFC;
loc_823F9CF8:
	// lwz r3,31232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31232);
loc_823F9CFC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F9D10"))) PPC_WEAK_FUNC(sub_823F9D10);
PPC_FUNC_IMPL(__imp__sub_823F9D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f9c18
	ctx.lr = 0x823F9D30;
	sub_823F9C18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F9D44;
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

__attribute__((alias("__imp__sub_823F9D60"))) PPC_WEAK_FUNC(sub_823F9D60);
PPC_FUNC_IMPL(__imp__sub_823F9D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-27524
	ctx.r31.s64 = ctx.r11.s64 + -27524;
	// lwz r11,-28068(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28068);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f9da8
	if (!ctx.cr0.eq) goto loc_823F9DA8;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-4268
	ctx.r9.s64 = ctx.r9.s64 + -4268;
	// stw r11,-28068(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28068, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-11000
	ctx.r3.s64 = ctx.r11.s64 + -11000;
	// bl 0x82a4c758
	ctx.lr = 0x823F9DA8;
	sub_82A4C758(ctx, base);
loc_823F9DA8:
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

__attribute__((alias("__imp__sub_823F9DC0"))) PPC_WEAK_FUNC(sub_823F9DC0);
PPC_FUNC_IMPL(__imp__sub_823F9DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1792
	ctx.r3.s64 = 1792;
	// bl 0x82833108
	ctx.lr = 0x823F9DD8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f9e14
	if (ctx.cr0.eq) goto loc_823F9E14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b3760
	ctx.lr = 0x823F9DE8;
	sub_828B3760(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r11,r11,-5488
	ctx.r11.s64 = ctx.r11.s64 + -5488;
	// addi r10,r10,-4320
	ctx.r10.s64 = ctx.r10.s64 + -4320;
	// addi r9,r9,764
	ctx.r9.s64 = ctx.r9.s64 + 764;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x823f9e18
	goto loc_823F9E18;
loc_823F9E14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F9E18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F9E30"))) PPC_WEAK_FUNC(sub_823F9E30);
PPC_FUNC_IMPL(__imp__sub_823F9E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,10556
	ctx.r3.s64 = ctx.r11.s64 + 10556;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F9E40"))) PPC_WEAK_FUNC(sub_823F9E40);
PPC_FUNC_IMPL(__imp__sub_823F9E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x823f9d60
	ctx.lr = 0x823F9E60;
	sub_823F9D60(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x823f9e74
	if (ctx.cr6.eq) goto loc_823F9E74;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f6700
	ctx.lr = 0x823F9E74;
	sub_823F6700(ctx, base);
loc_823F9E74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F9E90"))) PPC_WEAK_FUNC(sub_823F9E90);
PPC_FUNC_IMPL(__imp__sub_823F9E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x823f9ec8
	if (ctx.cr6.eq) goto loc_823F9EC8;
	// bl 0x823f9d60
	ctx.lr = 0x823F9EB8;
	sub_823F9D60(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823f9ec8
	if (!ctx.cr6.eq) goto loc_823F9EC8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823f9ed4
	goto loc_823F9ED4;
loc_823F9EC8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f6908
	ctx.lr = 0x823F9ED4;
	sub_823F6908(ctx, base);
loc_823F9ED4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F9EF0"))) PPC_WEAK_FUNC(sub_823F9EF0);
PPC_FUNC_IMPL(__imp__sub_823F9EF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f9d60
	sub_823F9D60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F9EF8"))) PPC_WEAK_FUNC(sub_823F9EF8);
PPC_FUNC_IMPL(__imp__sub_823F9EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1792
	ctx.r3.s64 = 1792;
	// bl 0x82833108
	ctx.lr = 0x823F9F18;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f9f58
	if (ctx.cr0.eq) goto loc_823F9F58;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f6a00
	ctx.lr = 0x823F9F2C;
	sub_823F6A00(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r11,r11,-5488
	ctx.r11.s64 = ctx.r11.s64 + -5488;
	// addi r10,r10,-4320
	ctx.r10.s64 = ctx.r10.s64 + -4320;
	// addi r9,r9,764
	ctx.r9.s64 = ctx.r9.s64 + 764;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x823f9f5c
	goto loc_823F9F5C;
loc_823F9F58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F9F5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

