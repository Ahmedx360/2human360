#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82470E20"))) PPC_WEAK_FUNC(sub_82470E20);
PPC_FUNC_IMPL(__imp__sub_82470E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827175d0
	ctx.lr = 0x82470E40;
	sub_827175D0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82470e50
	if (ctx.cr0.eq) goto loc_82470E50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82470E50;
	sub_82332DB8(ctx, base);
loc_82470E50:
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

__attribute__((alias("__imp__sub_82470E70"))) PPC_WEAK_FUNC(sub_82470E70);
PPC_FUNC_IMPL(__imp__sub_82470E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,20776
	ctx.r3.s64 = ctx.r11.s64 + 20776;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82470E80"))) PPC_WEAK_FUNC(sub_82470E80);
PPC_FUNC_IMPL(__imp__sub_82470E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82470eb8
	if (ctx.cr6.eq) goto loc_82470EB8;
	// bl 0x82481aa0
	ctx.lr = 0x82470EA8;
	sub_82481AA0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82470eb8
	if (!ctx.cr6.eq) goto loc_82470EB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82470ec4
	goto loc_82470EC4;
loc_82470EB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823703e0
	ctx.lr = 0x82470EC4;
	sub_823703E0(ctx, base);
loc_82470EC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82470EE0"))) PPC_WEAK_FUNC(sub_82470EE0);
PPC_FUNC_IMPL(__imp__sub_82470EE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82481aa0
	sub_82481AA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82470EE8"))) PPC_WEAK_FUNC(sub_82470EE8);
PPC_FUNC_IMPL(__imp__sub_82470EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1872
	ctx.r3.s64 = 1872;
	// bl 0x82833108
	ctx.lr = 0x82470F08;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82470f58
	if (ctx.cr0.eq) goto loc_82470F58;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823704e0
	ctx.lr = 0x82470F1C;
	sub_823704E0(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r11,r11,-13824
	ctx.r11.s64 = ctx.r11.s64 + -13824;
	// addi r10,r10,-12768
	ctx.r10.s64 = ctx.r10.s64 + -12768;
	// addi r9,r9,-12716
	ctx.r9.s64 = ctx.r9.s64 + -12716;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1856(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1856);
	// stw r11,1856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1856, ctx.r11.u32);
	// lwz r11,1860(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1860);
	// stw r11,1860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1860, ctx.r11.u32);
	// b 0x82470f5c
	goto loc_82470F5C;
loc_82470F58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82470F5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82470F78"))) PPC_WEAK_FUNC(sub_82470F78);
PPC_FUNC_IMPL(__imp__sub_82470F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82481aa0
	ctx.lr = 0x82470F98;
	sub_82481AA0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82470fa8
	if (!ctx.cr6.eq) goto loc_82470FA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82470fc0
	goto loc_82470FC0;
loc_82470FA8:
	// bl 0x823bdb38
	ctx.lr = 0x82470FAC;
	sub_823BDB38(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82470fc0
	if (ctx.cr6.eq) goto loc_82470FC0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82370370
	ctx.lr = 0x82470FC0;
	sub_82370370(ctx, base);
loc_82470FC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82470FD8"))) PPC_WEAK_FUNC(sub_82470FD8);
PPC_FUNC_IMPL(__imp__sub_82470FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823705b8
	ctx.lr = 0x82470FF8;
	sub_823705B8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82471008
	if (ctx.cr0.eq) goto loc_82471008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82471008;
	sub_82332DB8(ctx, base);
loc_82471008:
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

__attribute__((alias("__imp__sub_82471028"))) PPC_WEAK_FUNC(sub_82471028);
PPC_FUNC_IMPL(__imp__sub_82471028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,20800
	ctx.r3.s64 = ctx.r11.s64 + 20800;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471038"))) PPC_WEAK_FUNC(sub_82471038);
PPC_FUNC_IMPL(__imp__sub_82471038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82471070
	if (ctx.cr6.eq) goto loc_82471070;
	// bl 0x82481c50
	ctx.lr = 0x82471060;
	sub_82481C50(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82471070
	if (!ctx.cr6.eq) goto loc_82471070;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8247107c
	goto loc_8247107C;
loc_82471070:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823703e0
	ctx.lr = 0x8247107C;
	sub_823703E0(ctx, base);
loc_8247107C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471098"))) PPC_WEAK_FUNC(sub_82471098);
PPC_FUNC_IMPL(__imp__sub_82471098) {
	PPC_FUNC_PROLOGUE();
	// b 0x82481c50
	sub_82481C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824710A0"))) PPC_WEAK_FUNC(sub_824710A0);
PPC_FUNC_IMPL(__imp__sub_824710A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1936
	ctx.r3.s64 = 1936;
	// bl 0x82833108
	ctx.lr = 0x824710BC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824710d0
	if (ctx.cr0.eq) goto loc_824710D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82471148
	ctx.lr = 0x824710CC;
	sub_82471148(ctx, base);
	// b 0x824710d4
	goto loc_824710D4;
loc_824710D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824710D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824710E8"))) PPC_WEAK_FUNC(sub_824710E8);
PPC_FUNC_IMPL(__imp__sub_824710E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82481c50
	ctx.lr = 0x82471108;
	sub_82481C50(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82471118
	if (!ctx.cr6.eq) goto loc_82471118;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82471130
	goto loc_82471130;
loc_82471118:
	// bl 0x823bdb38
	ctx.lr = 0x8247111C;
	sub_823BDB38(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82471130
	if (ctx.cr6.eq) goto loc_82471130;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82370370
	ctx.lr = 0x82471130;
	sub_82370370(ctx, base);
loc_82471130:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471148"))) PPC_WEAK_FUNC(sub_82471148);
PPC_FUNC_IMPL(__imp__sub_82471148) {
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
	// bl 0x823704e0
	ctx.lr = 0x82471168;
	sub_823704E0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r11,r11,25272
	ctx.r11.s64 = ctx.r11.s64 + 25272;
	// addi r10,r10,26328
	ctx.r10.s64 = ctx.r10.s64 + 26328;
	// addi r9,r9,26380
	ctx.r9.s64 = ctx.r9.s64 + 26380;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r3,r31,1884
	ctx.r3.s64 = ctx.r31.s64 + 1884;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r4,r30,1884
	ctx.r4.s64 = ctx.r30.s64 + 1884;
	// lwz r11,1856(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1856);
	// stw r11,1856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1856, ctx.r11.u32);
	// lwz r11,1860(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1860);
	// stw r11,1860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1860, ctx.r11.u32);
	// lwz r11,1864(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1864);
	// stw r11,1864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1864, ctx.r11.u32);
	// lwz r11,1868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1868);
	// stw r11,1868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1868, ctx.r11.u32);
	// lfs f0,1872(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1872);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1872(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1872, temp.u32);
	// lwz r11,1876(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1876);
	// stw r11,1876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1876, ctx.r11.u32);
	// lwz r11,1880(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1880);
	// stw r11,1880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1880, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x824711D0;
	sub_82873B58(ctx, base);
	// addi r3,r31,1908
	ctx.r3.s64 = ctx.r31.s64 + 1908;
	// addi r4,r30,1908
	ctx.r4.s64 = ctx.r30.s64 + 1908;
	// bl 0x82873b58
	ctx.lr = 0x824711DC;
	sub_82873B58(ctx, base);
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

__attribute__((alias("__imp__sub_824711F8"))) PPC_WEAK_FUNC(sub_824711F8);
PPC_FUNC_IMPL(__imp__sub_824711F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,1908
	ctx.r3.s64 = ctx.r31.s64 + 1908;
	// bl 0x8239d768
	ctx.lr = 0x8247121C;
	sub_8239D768(ctx, base);
	// addi r3,r31,1884
	ctx.r3.s64 = ctx.r31.s64 + 1884;
	// bl 0x8239d768
	ctx.lr = 0x82471224;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823705b8
	ctx.lr = 0x8247122C;
	sub_823705B8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247123c
	if (ctx.cr0.eq) goto loc_8247123C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8247123C;
	sub_82332DB8(ctx, base);
loc_8247123C:
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

__attribute__((alias("__imp__sub_82471258"))) PPC_WEAK_FUNC(sub_82471258);
PPC_FUNC_IMPL(__imp__sub_82471258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,20824
	ctx.r3.s64 = ctx.r11.s64 + 20824;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471268"))) PPC_WEAK_FUNC(sub_82471268);
PPC_FUNC_IMPL(__imp__sub_82471268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x824712a0
	if (ctx.cr6.eq) goto loc_824712A0;
	// bl 0x82481dc8
	ctx.lr = 0x82471290;
	sub_82481DC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x824712a0
	if (!ctx.cr6.eq) goto loc_824712A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824712ac
	goto loc_824712AC;
loc_824712A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82470368
	ctx.lr = 0x824712AC;
	sub_82470368(ctx, base);
loc_824712AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824712C8"))) PPC_WEAK_FUNC(sub_824712C8);
PPC_FUNC_IMPL(__imp__sub_824712C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82481dc8
	sub_82481DC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824712D0"))) PPC_WEAK_FUNC(sub_824712D0);
PPC_FUNC_IMPL(__imp__sub_824712D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1936
	ctx.r3.s64 = 1936;
	// bl 0x82833108
	ctx.lr = 0x824712F0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82471330
	if (ctx.cr0.eq) goto loc_82471330;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82470478
	ctx.lr = 0x82471304;
	sub_82470478(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r11,r11,-12648
	ctx.r11.s64 = ctx.r11.s64 + -12648;
	// addi r10,r10,-11592
	ctx.r10.s64 = ctx.r10.s64 + -11592;
	// addi r9,r9,-16196
	ctx.r9.s64 = ctx.r9.s64 + -16196;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x82471334
	goto loc_82471334;
loc_82471330:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82471334:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471350"))) PPC_WEAK_FUNC(sub_82471350);
PPC_FUNC_IMPL(__imp__sub_82471350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82481dc8
	ctx.lr = 0x82471370;
	sub_82481DC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82471384
	if (ctx.cr6.eq) goto loc_82471384;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82470418
	ctx.lr = 0x82471384;
	sub_82470418(ctx, base);
loc_82471384:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824713A0"))) PPC_WEAK_FUNC(sub_824713A0);
PPC_FUNC_IMPL(__imp__sub_824713A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,20848
	ctx.r3.s64 = ctx.r11.s64 + 20848;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824713B0"))) PPC_WEAK_FUNC(sub_824713B0);
PPC_FUNC_IMPL(__imp__sub_824713B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x824713e8
	if (ctx.cr6.eq) goto loc_824713E8;
	// bl 0x82481f40
	ctx.lr = 0x824713D8;
	sub_82481F40(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x824713e8
	if (!ctx.cr6.eq) goto loc_824713E8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824713f4
	goto loc_824713F4;
loc_824713E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370018
	ctx.lr = 0x824713F4;
	sub_82370018(ctx, base);
loc_824713F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471410"))) PPC_WEAK_FUNC(sub_82471410);
PPC_FUNC_IMPL(__imp__sub_82471410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1712
	ctx.r3.s64 = 1712;
	// bl 0x82833108
	ctx.lr = 0x82471430;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82471470
	if (ctx.cr0.eq) goto loc_82471470;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370118
	ctx.lr = 0x82471444;
	sub_82370118(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,-11520
	ctx.r11.s64 = ctx.r11.s64 + -11520;
	// addi r10,r10,-10464
	ctx.r10.s64 = ctx.r10.s64 + -10464;
	// addi r9,r9,29308
	ctx.r9.s64 = ctx.r9.s64 + 29308;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x82471474
	goto loc_82471474;
loc_82471470:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82471474:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471490"))) PPC_WEAK_FUNC(sub_82471490);
PPC_FUNC_IMPL(__imp__sub_82471490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82481f40
	ctx.lr = 0x824714B0;
	sub_82481F40(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x824714c0
	if (!ctx.cr6.eq) goto loc_824714C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x824714d8
	goto loc_824714D8;
loc_824714C0:
	// bl 0x823bd878
	ctx.lr = 0x824714C4;
	sub_823BD878(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x824714d8
	if (ctx.cr6.eq) goto loc_824714D8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8236fc08
	ctx.lr = 0x824714D8;
	sub_8236FC08(ctx, base);
loc_824714D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824714F0"))) PPC_WEAK_FUNC(sub_824714F0);
PPC_FUNC_IMPL(__imp__sub_824714F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,20860
	ctx.r3.s64 = ctx.r11.s64 + 20860;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471500"))) PPC_WEAK_FUNC(sub_82471500);
PPC_FUNC_IMPL(__imp__sub_82471500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82471538
	if (ctx.cr6.eq) goto loc_82471538;
	// bl 0x824820d8
	ctx.lr = 0x82471528;
	sub_824820D8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82471538
	if (!ctx.cr6.eq) goto loc_82471538;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82471544
	goto loc_82471544;
loc_82471538:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82470900
	ctx.lr = 0x82471544;
	sub_82470900(ctx, base);
loc_82471544:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471560"))) PPC_WEAK_FUNC(sub_82471560);
PPC_FUNC_IMPL(__imp__sub_82471560) {
	PPC_FUNC_PROLOGUE();
	// b 0x824820d8
	sub_824820D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82471568"))) PPC_WEAK_FUNC(sub_82471568);
PPC_FUNC_IMPL(__imp__sub_82471568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1760
	ctx.r3.s64 = 1760;
	// bl 0x82833108
	ctx.lr = 0x82471588;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82471600
	if (ctx.cr0.eq) goto loc_82471600;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370118
	ctx.lr = 0x8247159C;
	sub_82370118(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,22944
	ctx.r11.s64 = ctx.r11.s64 + 22944;
	// addi r10,r10,24016
	ctx.r10.s64 = ctx.r10.s64 + 24016;
	// addi r9,r9,29308
	ctx.r9.s64 = ctx.r9.s64 + 29308;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r6,-32233
	ctx.r6.s64 = -2112421888;
	// addi r11,r8,-10392
	ctx.r11.s64 = ctx.r8.s64 + -10392;
	// addi r10,r7,-9320
	ctx.r10.s64 = ctx.r7.s64 + -9320;
	// addi r9,r6,-9268
	ctx.r9.s64 = ctx.r6.s64 + -9268;
	// addi r4,r30,1728
	ctx.r4.s64 = ctx.r30.s64 + 1728;
	// addi r3,r31,1728
	ctx.r3.s64 = ctx.r31.s64 + 1728;
	// lwz r8,1712(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// stw r8,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r8.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x82873b58
	ctx.lr = 0x824715F8;
	sub_82873B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82471604
	goto loc_82471604;
loc_82471600:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82471604:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471620"))) PPC_WEAK_FUNC(sub_82471620);
PPC_FUNC_IMPL(__imp__sub_82471620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x824820d8
	ctx.lr = 0x82471640;
	sub_824820D8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82471654
	if (ctx.cr6.eq) goto loc_82471654;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824709e8
	ctx.lr = 0x82471654;
	sub_824709E8(ctx, base);
loc_82471654:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471670"))) PPC_WEAK_FUNC(sub_82471670);
PPC_FUNC_IMPL(__imp__sub_82471670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,1728
	ctx.r3.s64 = ctx.r31.s64 + 1728;
	// bl 0x8239d768
	ctx.lr = 0x82471694;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b5b88
	ctx.lr = 0x8247169C;
	sub_828B5B88(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824716ac
	if (ctx.cr0.eq) goto loc_824716AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x824716AC;
	sub_82332DB8(ctx, base);
loc_824716AC:
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

__attribute__((alias("__imp__sub_824716C8"))) PPC_WEAK_FUNC(sub_824716C8);
PPC_FUNC_IMPL(__imp__sub_824716C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,20880
	ctx.r3.s64 = ctx.r11.s64 + 20880;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824716D8"))) PPC_WEAK_FUNC(sub_824716D8);
PPC_FUNC_IMPL(__imp__sub_824716D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82471710
	if (ctx.cr6.eq) goto loc_82471710;
	// bl 0x82482270
	ctx.lr = 0x82471700;
	sub_82482270(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82471710
	if (!ctx.cr6.eq) goto loc_82471710;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8247171c
	goto loc_8247171C;
loc_82471710:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82470900
	ctx.lr = 0x8247171C;
	sub_82470900(ctx, base);
loc_8247171C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471738"))) PPC_WEAK_FUNC(sub_82471738);
PPC_FUNC_IMPL(__imp__sub_82471738) {
	PPC_FUNC_PROLOGUE();
	// b 0x82482270
	sub_82482270(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82471740"))) PPC_WEAK_FUNC(sub_82471740);
PPC_FUNC_IMPL(__imp__sub_82471740) {
	PPC_FUNC_PROLOGUE();
	// b 0x82481648
	sub_82481648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82471748"))) PPC_WEAK_FUNC(sub_82471748);
PPC_FUNC_IMPL(__imp__sub_82471748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1760
	ctx.r3.s64 = 1760;
	// bl 0x82833108
	ctx.lr = 0x82471768;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824717e0
	if (ctx.cr0.eq) goto loc_824717E0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370118
	ctx.lr = 0x8247177C;
	sub_82370118(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,22944
	ctx.r11.s64 = ctx.r11.s64 + 22944;
	// addi r10,r10,24016
	ctx.r10.s64 = ctx.r10.s64 + 24016;
	// addi r9,r9,29308
	ctx.r9.s64 = ctx.r9.s64 + 29308;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r6,-32233
	ctx.r6.s64 = -2112421888;
	// addi r11,r8,-9224
	ctx.r11.s64 = ctx.r8.s64 + -9224;
	// addi r10,r7,-8152
	ctx.r10.s64 = ctx.r7.s64 + -8152;
	// addi r9,r6,-9268
	ctx.r9.s64 = ctx.r6.s64 + -9268;
	// addi r4,r30,1728
	ctx.r4.s64 = ctx.r30.s64 + 1728;
	// addi r3,r31,1728
	ctx.r3.s64 = ctx.r31.s64 + 1728;
	// lwz r8,1712(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// stw r8,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r8.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x82873b58
	ctx.lr = 0x824717D8;
	sub_82873B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x824717e4
	goto loc_824717E4;
loc_824717E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824717E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471800"))) PPC_WEAK_FUNC(sub_82471800);
PPC_FUNC_IMPL(__imp__sub_82471800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82482270
	ctx.lr = 0x82471820;
	sub_82482270(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82471834
	if (ctx.cr6.eq) goto loc_82471834;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824709e8
	ctx.lr = 0x82471834;
	sub_824709E8(ctx, base);
loc_82471834:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471850"))) PPC_WEAK_FUNC(sub_82471850);
PPC_FUNC_IMPL(__imp__sub_82471850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,20920
	ctx.r3.s64 = ctx.r11.s64 + 20920;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471860"))) PPC_WEAK_FUNC(sub_82471860);
PPC_FUNC_IMPL(__imp__sub_82471860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82471898
	if (ctx.cr6.eq) goto loc_82471898;
	// bl 0x82482590
	ctx.lr = 0x82471888;
	sub_82482590(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82471898
	if (!ctx.cr6.eq) goto loc_82471898;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824718a4
	goto loc_824718A4;
loc_82471898:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370018
	ctx.lr = 0x824718A4;
	sub_82370018(ctx, base);
loc_824718A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824718C0"))) PPC_WEAK_FUNC(sub_824718C0);
PPC_FUNC_IMPL(__imp__sub_824718C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82482590
	sub_82482590(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824718C8"))) PPC_WEAK_FUNC(sub_824718C8);
PPC_FUNC_IMPL(__imp__sub_824718C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1744
	ctx.r3.s64 = 1744;
	// bl 0x82833108
	ctx.lr = 0x824718E8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247193c
	if (ctx.cr0.eq) goto loc_8247193C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370118
	ctx.lr = 0x824718FC;
	sub_82370118(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r11,r11,-8056
	ctx.r11.s64 = ctx.r11.s64 + -8056;
	// addi r10,r10,-6996
	ctx.r10.s64 = ctx.r10.s64 + -6996;
	// addi r9,r9,-6944
	ctx.r9.s64 = ctx.r9.s64 + -6944;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,1716
	ctx.r4.s64 = ctx.r30.s64 + 1716;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r31,1716
	ctx.r3.s64 = ctx.r31.s64 + 1716;
	// lbz r11,1712(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1712);
	// stb r11,1712(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1712, ctx.r11.u8);
	// bl 0x82873b58
	ctx.lr = 0x82471934;
	sub_82873B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82471940
	goto loc_82471940;
loc_8247193C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82471940:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471958"))) PPC_WEAK_FUNC(sub_82471958);
PPC_FUNC_IMPL(__imp__sub_82471958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82482590
	ctx.lr = 0x82471978;
	sub_82482590(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82471988
	if (!ctx.cr6.eq) goto loc_82471988;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x824719a0
	goto loc_824719A0;
loc_82471988:
	// bl 0x823bd878
	ctx.lr = 0x8247198C;
	sub_823BD878(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x824719a0
	if (ctx.cr6.eq) goto loc_824719A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8236fc08
	ctx.lr = 0x824719A0;
	sub_8236FC08(ctx, base);
loc_824719A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824719B8"))) PPC_WEAK_FUNC(sub_824719B8);
PPC_FUNC_IMPL(__imp__sub_824719B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,1716
	ctx.r3.s64 = ctx.r31.s64 + 1716;
	// bl 0x8239d768
	ctx.lr = 0x824719DC;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b5b88
	ctx.lr = 0x824719E4;
	sub_828B5B88(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824719f4
	if (ctx.cr0.eq) goto loc_824719F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x824719F4;
	sub_82332DB8(ctx, base);
loc_824719F4:
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

__attribute__((alias("__imp__sub_82471A10"))) PPC_WEAK_FUNC(sub_82471A10);
PPC_FUNC_IMPL(__imp__sub_82471A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,20960
	ctx.r3.s64 = ctx.r11.s64 + 20960;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471A20"))) PPC_WEAK_FUNC(sub_82471A20);
PPC_FUNC_IMPL(__imp__sub_82471A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82471a58
	if (ctx.cr6.eq) goto loc_82471A58;
	// bl 0x82482890
	ctx.lr = 0x82471A48;
	sub_82482890(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82471a58
	if (!ctx.cr6.eq) goto loc_82471A58;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82471a64
	goto loc_82471A64;
loc_82471A58:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370018
	ctx.lr = 0x82471A64;
	sub_82370018(ctx, base);
loc_82471A64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471A80"))) PPC_WEAK_FUNC(sub_82471A80);
PPC_FUNC_IMPL(__imp__sub_82471A80) {
	PPC_FUNC_PROLOGUE();
	// b 0x82482890
	sub_82482890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82471A88"))) PPC_WEAK_FUNC(sub_82471A88);
PPC_FUNC_IMPL(__imp__sub_82471A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	ctx.lr = 0x82471AA8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82471af0
	if (ctx.cr0.eq) goto loc_82471AF0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370118
	ctx.lr = 0x82471ABC;
	sub_82370118(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,-6880
	ctx.r11.s64 = ctx.r11.s64 + -6880;
	// addi r10,r10,-5824
	ctx.r10.s64 = ctx.r10.s64 + -5824;
	// addi r9,r9,29308
	ctx.r9.s64 = ctx.r9.s64 + 29308;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// stw r11,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r11.u32);
	// b 0x82471af4
	goto loc_82471AF4;
loc_82471AF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82471AF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471B10"))) PPC_WEAK_FUNC(sub_82471B10);
PPC_FUNC_IMPL(__imp__sub_82471B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82482890
	ctx.lr = 0x82471B30;
	sub_82482890(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82471b40
	if (!ctx.cr6.eq) goto loc_82471B40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82471b58
	goto loc_82471B58;
loc_82471B40:
	// bl 0x823bd878
	ctx.lr = 0x82471B44;
	sub_823BD878(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82471b58
	if (ctx.cr6.eq) goto loc_82471B58;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8236fc08
	ctx.lr = 0x82471B58;
	sub_8236FC08(ctx, base);
loc_82471B58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471B70"))) PPC_WEAK_FUNC(sub_82471B70);
PPC_FUNC_IMPL(__imp__sub_82471B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,21004
	ctx.r3.s64 = ctx.r11.s64 + 21004;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471B80"))) PPC_WEAK_FUNC(sub_82471B80);
PPC_FUNC_IMPL(__imp__sub_82471B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82471bb8
	if (ctx.cr6.eq) goto loc_82471BB8;
	// bl 0x82482b88
	ctx.lr = 0x82471BA8;
	sub_82482B88(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82471bb8
	if (!ctx.cr6.eq) goto loc_82471BB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82471bc4
	goto loc_82471BC4;
loc_82471BB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82469048
	ctx.lr = 0x82471BC4;
	sub_82469048(ctx, base);
loc_82471BC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471BE0"))) PPC_WEAK_FUNC(sub_82471BE0);
PPC_FUNC_IMPL(__imp__sub_82471BE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82482b88
	sub_82482B88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82471BE8"))) PPC_WEAK_FUNC(sub_82471BE8);
PPC_FUNC_IMPL(__imp__sub_82471BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	ctx.lr = 0x82471C08;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82471c74
	if (ctx.cr0.eq) goto loc_82471C74;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370118
	ctx.lr = 0x82471C1C;
	sub_82370118(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,29208
	ctx.r11.s64 = ctx.r11.s64 + 29208;
	// addi r10,r10,30264
	ctx.r10.s64 = ctx.r10.s64 + 30264;
	// addi r9,r9,29308
	ctx.r9.s64 = ctx.r9.s64 + 29308;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// addi r11,r8,-5728
	ctx.r11.s64 = ctx.r8.s64 + -5728;
	// addi r10,r7,-4672
	ctx.r10.s64 = ctx.r7.s64 + -4672;
	// addi r9,r6,29308
	ctx.r9.s64 = ctx.r6.s64 + 29308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,1712(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// stw r8,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r8.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x82471c78
	goto loc_82471C78;
loc_82471C74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82471C78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471C90"))) PPC_WEAK_FUNC(sub_82471C90);
PPC_FUNC_IMPL(__imp__sub_82471C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82482b88
	ctx.lr = 0x82471CB0;
	sub_82482B88(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82471cc4
	if (ctx.cr6.eq) goto loc_82471CC4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82469138
	ctx.lr = 0x82471CC4;
	sub_82469138(ctx, base);
loc_82471CC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471CE0"))) PPC_WEAK_FUNC(sub_82471CE0);
PPC_FUNC_IMPL(__imp__sub_82471CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,21024
	ctx.r3.s64 = ctx.r11.s64 + 21024;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471CF0"))) PPC_WEAK_FUNC(sub_82471CF0);
PPC_FUNC_IMPL(__imp__sub_82471CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82471d28
	if (ctx.cr6.eq) goto loc_82471D28;
	// bl 0x82482d00
	ctx.lr = 0x82471D18;
	sub_82482D00(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82471d28
	if (!ctx.cr6.eq) goto loc_82471D28;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82471d34
	goto loc_82471D34;
loc_82471D28:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824713b0
	ctx.lr = 0x82471D34;
	sub_824713B0(ctx, base);
loc_82471D34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471D50"))) PPC_WEAK_FUNC(sub_82471D50);
PPC_FUNC_IMPL(__imp__sub_82471D50) {
	PPC_FUNC_PROLOGUE();
	// b 0x82482d00
	sub_82482D00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82471D58"))) PPC_WEAK_FUNC(sub_82471D58);
PPC_FUNC_IMPL(__imp__sub_82471D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	ctx.lr = 0x82471D78;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82471dc0
	if (ctx.cr0.eq) goto loc_82471DC0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370118
	ctx.lr = 0x82471D8C;
	sub_82370118(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,24160
	ctx.r11.s64 = ctx.r11.s64 + 24160;
	// addi r10,r10,25216
	ctx.r10.s64 = ctx.r10.s64 + 25216;
	// addi r9,r9,29308
	ctx.r9.s64 = ctx.r9.s64 + 29308;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// stw r11,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r11.u32);
	// b 0x82471dc4
	goto loc_82471DC4;
loc_82471DC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82471DC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471DE0"))) PPC_WEAK_FUNC(sub_82471DE0);
PPC_FUNC_IMPL(__imp__sub_82471DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82482d00
	ctx.lr = 0x82471E00;
	sub_82482D00(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82471e14
	if (ctx.cr6.eq) goto loc_82471E14;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82471490
	ctx.lr = 0x82471E14;
	sub_82471490(ctx, base);
loc_82471E14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471E30"))) PPC_WEAK_FUNC(sub_82471E30);
PPC_FUNC_IMPL(__imp__sub_82471E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,21044
	ctx.r3.s64 = ctx.r11.s64 + 21044;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471E40"))) PPC_WEAK_FUNC(sub_82471E40);
PPC_FUNC_IMPL(__imp__sub_82471E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82471e78
	if (ctx.cr6.eq) goto loc_82471E78;
	// bl 0x82482e98
	ctx.lr = 0x82471E68;
	sub_82482E98(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82471e78
	if (!ctx.cr6.eq) goto loc_82471E78;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82471e84
	goto loc_82471E84;
loc_82471E78:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824713b0
	ctx.lr = 0x82471E84;
	sub_824713B0(ctx, base);
loc_82471E84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471EA0"))) PPC_WEAK_FUNC(sub_82471EA0);
PPC_FUNC_IMPL(__imp__sub_82471EA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82482e98
	sub_82482E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82471EA8"))) PPC_WEAK_FUNC(sub_82471EA8);
PPC_FUNC_IMPL(__imp__sub_82471EA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82481f40
	sub_82481F40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82471EB0"))) PPC_WEAK_FUNC(sub_82471EB0);
PPC_FUNC_IMPL(__imp__sub_82471EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1744
	ctx.r3.s64 = 1744;
	// bl 0x82833108
	ctx.lr = 0x82471ECC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82471ee0
	if (ctx.cr0.eq) goto loc_82471EE0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82471f48
	ctx.lr = 0x82471EDC;
	sub_82471F48(ctx, base);
	// b 0x82471ee4
	goto loc_82471EE4;
loc_82471EE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82471EE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471EF8"))) PPC_WEAK_FUNC(sub_82471EF8);
PPC_FUNC_IMPL(__imp__sub_82471EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82482e98
	ctx.lr = 0x82471F18;
	sub_82482E98(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82471f2c
	if (ctx.cr6.eq) goto loc_82471F2C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82471490
	ctx.lr = 0x82471F2C;
	sub_82471490(ctx, base);
loc_82471F2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82471F48"))) PPC_WEAK_FUNC(sub_82471F48);
PPC_FUNC_IMPL(__imp__sub_82471F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82471F50;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x82370118
	ctx.lr = 0x82471F60;
	sub_82370118(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// addi r11,r11,-4576
	ctx.r11.s64 = ctx.r11.s64 + -4576;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-3520
	ctx.r10.s64 = ctx.r10.s64 + -3520;
	// addi r9,r9,-3468
	ctx.r9.s64 = ctx.r9.s64 + -3468;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// addi r31,r28,1712
	ctx.r31.s64 = ctx.r28.s64 + 1712;
	// stw r9,396(r28)
	PPC_STORE_U32(ctx.r28.u32 + 396, ctx.r9.u32);
	// addi r29,r26,1712
	ctx.r29.s64 = ctx.r26.s64 + 1712;
	// stw r30,1720(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1720, ctx.r30.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r30,1724(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1724, ctx.r30.u32);
	// stw r30,1728(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1728, ctx.r30.u32);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// stw r11,1716(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1716, ctx.r11.u32);
	// stw r30,1732(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1732, ctx.r30.u32);
	// stw r30,1712(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1712, ctx.r30.u32);
	// beq cr6,0x82472050
	if (ctx.cr6.eq) goto loc_82472050;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82472050
	if (!ctx.cr6.gt) goto loc_82472050;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82471fe0
	if (ctx.cr0.eq) goto loc_82471FE0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x82471FE0;
	sub_82332C38(ctx, base);
loc_82471FE0:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82472050
	if (!ctx.cr6.gt) goto loc_82472050;
loc_82471FF0:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x82472004;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247203c
	if (ctx.cr0.eq) goto loc_8247203C;
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
loc_8247203C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82471ff0
	if (ctx.cr6.lt) goto loc_82471FF0;
loc_82472050:
	// lwz r11,1736(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1736);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,1736(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1736, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82472068"))) PPC_WEAK_FUNC(sub_82472068);
PPC_FUNC_IMPL(__imp__sub_82472068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82472070;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r30,1712
	ctx.r31.s64 = ctx.r30.s64 + 1712;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,1728(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1728);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82472098;
	sub_82332CA8(ctx, base);
	// lwz r3,1724(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1724);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824720a8
	if (ctx.cr6.eq) goto loc_824720A8;
	// bl 0x82332db8
	ctx.lr = 0x824720A8;
	sub_82332DB8(ctx, base);
loc_824720A8:
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
	// bl 0x828b5b88
	ctx.lr = 0x824720C0;
	sub_828B5B88(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824720d0
	if (ctx.cr0.eq) goto loc_824720D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332db8
	ctx.lr = 0x824720D0;
	sub_82332DB8(ctx, base);
loc_824720D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824720E0"))) PPC_WEAK_FUNC(sub_824720E0);
PPC_FUNC_IMPL(__imp__sub_824720E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,21060
	ctx.r3.s64 = ctx.r11.s64 + 21060;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824720F0"))) PPC_WEAK_FUNC(sub_824720F0);
PPC_FUNC_IMPL(__imp__sub_824720F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82472128
	if (ctx.cr6.eq) goto loc_82472128;
	// bl 0x82482fd8
	ctx.lr = 0x82472118;
	sub_82482FD8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82472128
	if (!ctx.cr6.eq) goto loc_82472128;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82472134
	goto loc_82472134;
loc_82472128:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248d170
	ctx.lr = 0x82472134;
	sub_8248D170(ctx, base);
loc_82472134:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472150"))) PPC_WEAK_FUNC(sub_82472150);
PPC_FUNC_IMPL(__imp__sub_82472150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8247216C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82472180
	if (ctx.cr0.eq) goto loc_82472180;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824721f8
	ctx.lr = 0x8247217C;
	sub_824721F8(ctx, base);
	// b 0x82472184
	goto loc_82472184;
loc_82472180:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82472184:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472198"))) PPC_WEAK_FUNC(sub_82472198);
PPC_FUNC_IMPL(__imp__sub_82472198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82482fd8
	ctx.lr = 0x824721B8;
	sub_82482FD8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x824721c8
	if (!ctx.cr6.eq) goto loc_824721C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x824721e0
	goto loc_824721E0;
loc_824721C8:
	// bl 0x8248d030
	ctx.lr = 0x824721CC;
	sub_8248D030(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x824721e0
	if (ctx.cr6.eq) goto loc_824721E0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8248ced0
	ctx.lr = 0x824721E0;
	sub_8248CED0(ctx, base);
loc_824721E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824721F8"))) PPC_WEAK_FUNC(sub_824721F8);
PPC_FUNC_IMPL(__imp__sub_824721F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8248cca0
	ctx.lr = 0x82472218;
	sub_8248CCA0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r11,r11,21832
	ctx.r11.s64 = ctx.r11.s64 + 21832;
	// addi r10,r10,22888
	ctx.r10.s64 = ctx.r10.s64 + 22888;
	// addi r9,r9,12092
	ctx.r9.s64 = ctx.r9.s64 + 12092;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,1728
	ctx.r4.s64 = ctx.r30.s64 + 1728;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r31,1728
	ctx.r3.s64 = ctx.r31.s64 + 1728;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x8247224C;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,1756
	ctx.r3.s64 = ctx.r31.s64 + 1756;
	// addi r4,r30,1756
	ctx.r4.s64 = ctx.r30.s64 + 1756;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x8247225C;
	sub_82A4EA80(ctx, base);
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

__attribute__((alias("__imp__sub_82472278"))) PPC_WEAK_FUNC(sub_82472278);
PPC_FUNC_IMPL(__imp__sub_82472278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,21076
	ctx.r3.s64 = ctx.r11.s64 + 21076;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472288"))) PPC_WEAK_FUNC(sub_82472288);
PPC_FUNC_IMPL(__imp__sub_82472288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x824722c0
	if (ctx.cr6.eq) goto loc_824722C0;
	// bl 0x82483150
	ctx.lr = 0x824722B0;
	sub_82483150(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x824722c0
	if (!ctx.cr6.eq) goto loc_824722C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824722cc
	goto loc_824722CC;
loc_824722C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824720f0
	ctx.lr = 0x824722CC;
	sub_824720F0(ctx, base);
loc_824722CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824722E8"))) PPC_WEAK_FUNC(sub_824722E8);
PPC_FUNC_IMPL(__imp__sub_824722E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82482fd8
	sub_82482FD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824722F0"))) PPC_WEAK_FUNC(sub_824722F0);
PPC_FUNC_IMPL(__imp__sub_824722F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	ctx.lr = 0x82472310;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82472350
	if (ctx.cr0.eq) goto loc_82472350;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824721f8
	ctx.lr = 0x82472324;
	sub_824721F8(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r11,r11,-3400
	ctx.r11.s64 = ctx.r11.s64 + -3400;
	// addi r10,r10,-2344
	ctx.r10.s64 = ctx.r10.s64 + -2344;
	// addi r9,r9,12092
	ctx.r9.s64 = ctx.r9.s64 + 12092;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x82472354
	goto loc_82472354;
loc_82472350:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82472354:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472370"))) PPC_WEAK_FUNC(sub_82472370);
PPC_FUNC_IMPL(__imp__sub_82472370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82483150
	ctx.lr = 0x82472390;
	sub_82483150(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x824723a4
	if (ctx.cr6.eq) goto loc_824723A4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82472198
	ctx.lr = 0x824723A4;
	sub_82472198(ctx, base);
loc_824723A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824723C0"))) PPC_WEAK_FUNC(sub_824723C0);
PPC_FUNC_IMPL(__imp__sub_824723C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,21096
	ctx.r3.s64 = ctx.r11.s64 + 21096;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824723D0"))) PPC_WEAK_FUNC(sub_824723D0);
PPC_FUNC_IMPL(__imp__sub_824723D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82472408
	if (ctx.cr6.eq) goto loc_82472408;
	// bl 0x824832c8
	ctx.lr = 0x824723F8;
	sub_824832C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82472408
	if (!ctx.cr6.eq) goto loc_82472408;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82472414
	goto loc_82472414;
loc_82472408:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824720f0
	ctx.lr = 0x82472414;
	sub_824720F0(ctx, base);
loc_82472414:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472430"))) PPC_WEAK_FUNC(sub_82472430);
PPC_FUNC_IMPL(__imp__sub_82472430) {
	PPC_FUNC_PROLOGUE();
	// b 0x824832c8
	sub_824832C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82472438"))) PPC_WEAK_FUNC(sub_82472438);
PPC_FUNC_IMPL(__imp__sub_82472438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	ctx.lr = 0x82472458;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82472498
	if (ctx.cr0.eq) goto loc_82472498;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824721f8
	ctx.lr = 0x8247246C;
	sub_824721F8(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r11,r11,-2272
	ctx.r11.s64 = ctx.r11.s64 + -2272;
	// addi r10,r10,-1216
	ctx.r10.s64 = ctx.r10.s64 + -1216;
	// addi r9,r9,12092
	ctx.r9.s64 = ctx.r9.s64 + 12092;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8247249c
	goto loc_8247249C;
loc_82472498:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247249C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824724B8"))) PPC_WEAK_FUNC(sub_824724B8);
PPC_FUNC_IMPL(__imp__sub_824724B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x824832c8
	ctx.lr = 0x824724D8;
	sub_824832C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x824724ec
	if (ctx.cr6.eq) goto loc_824724EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82472198
	ctx.lr = 0x824724EC;
	sub_82472198(ctx, base);
loc_824724EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472508"))) PPC_WEAK_FUNC(sub_82472508);
PPC_FUNC_IMPL(__imp__sub_82472508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,21116
	ctx.r3.s64 = ctx.r11.s64 + 21116;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472518"))) PPC_WEAK_FUNC(sub_82472518);
PPC_FUNC_IMPL(__imp__sub_82472518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82472550
	if (ctx.cr6.eq) goto loc_82472550;
	// bl 0x82483440
	ctx.lr = 0x82472540;
	sub_82483440(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82472550
	if (!ctx.cr6.eq) goto loc_82472550;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8247255c
	goto loc_8247255C;
loc_82472550:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824720f0
	ctx.lr = 0x8247255C;
	sub_824720F0(ctx, base);
loc_8247255C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472578"))) PPC_WEAK_FUNC(sub_82472578);
PPC_FUNC_IMPL(__imp__sub_82472578) {
	PPC_FUNC_PROLOGUE();
	// b 0x82483440
	sub_82483440(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82472580"))) PPC_WEAK_FUNC(sub_82472580);
PPC_FUNC_IMPL(__imp__sub_82472580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	ctx.lr = 0x824725A0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824725e0
	if (ctx.cr0.eq) goto loc_824725E0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824721f8
	ctx.lr = 0x824725B4;
	sub_824721F8(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r11,r11,-1144
	ctx.r11.s64 = ctx.r11.s64 + -1144;
	// addi r10,r10,-88
	ctx.r10.s64 = ctx.r10.s64 + -88;
	// addi r9,r9,12092
	ctx.r9.s64 = ctx.r9.s64 + 12092;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x824725e4
	goto loc_824725E4;
loc_824725E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824725E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472600"))) PPC_WEAK_FUNC(sub_82472600);
PPC_FUNC_IMPL(__imp__sub_82472600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82483440
	ctx.lr = 0x82472620;
	sub_82483440(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82472634
	if (ctx.cr6.eq) goto loc_82472634;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82472198
	ctx.lr = 0x82472634;
	sub_82472198(ctx, base);
loc_82472634:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472650"))) PPC_WEAK_FUNC(sub_82472650);
PPC_FUNC_IMPL(__imp__sub_82472650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,21140
	ctx.r3.s64 = ctx.r11.s64 + 21140;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472660"))) PPC_WEAK_FUNC(sub_82472660);
PPC_FUNC_IMPL(__imp__sub_82472660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82472698
	if (ctx.cr6.eq) goto loc_82472698;
	// bl 0x824835b8
	ctx.lr = 0x82472688;
	sub_824835B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82472698
	if (!ctx.cr6.eq) goto loc_82472698;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824726a4
	goto loc_824726A4;
loc_82472698:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82472518
	ctx.lr = 0x824726A4;
	sub_82472518(ctx, base);
loc_824726A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824726C0"))) PPC_WEAK_FUNC(sub_824726C0);
PPC_FUNC_IMPL(__imp__sub_824726C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x824835b8
	sub_824835B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824726C8"))) PPC_WEAK_FUNC(sub_824726C8);
PPC_FUNC_IMPL(__imp__sub_824726C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	ctx.lr = 0x824726E8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82472728
	if (ctx.cr0.eq) goto loc_82472728;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824721f8
	ctx.lr = 0x824726FC;
	sub_824721F8(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// addi r10,r10,1040
	ctx.r10.s64 = ctx.r10.s64 + 1040;
	// addi r9,r9,12092
	ctx.r9.s64 = ctx.r9.s64 + 12092;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8247272c
	goto loc_8247272C;
loc_82472728:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247272C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472748"))) PPC_WEAK_FUNC(sub_82472748);
PPC_FUNC_IMPL(__imp__sub_82472748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x824835b8
	ctx.lr = 0x82472768;
	sub_824835B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82472778
	if (!ctx.cr6.eq) goto loc_82472778;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82472790
	goto loc_82472790;
loc_82472778:
	// bl 0x82483440
	ctx.lr = 0x8247277C;
	sub_82483440(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82472790
	if (ctx.cr6.eq) goto loc_82472790;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82472198
	ctx.lr = 0x82472790;
	sub_82472198(ctx, base);
loc_82472790:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824727A8"))) PPC_WEAK_FUNC(sub_824727A8);
PPC_FUNC_IMPL(__imp__sub_824727A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,21164
	ctx.r3.s64 = ctx.r11.s64 + 21164;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824727B8"))) PPC_WEAK_FUNC(sub_824727B8);
PPC_FUNC_IMPL(__imp__sub_824727B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x824727f0
	if (ctx.cr6.eq) goto loc_824727F0;
	// bl 0x82483730
	ctx.lr = 0x824727E0;
	sub_82483730(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x824727f0
	if (!ctx.cr6.eq) goto loc_824727F0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824727fc
	goto loc_824727FC;
loc_824727F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82472288
	ctx.lr = 0x824727FC;
	sub_82472288(ctx, base);
loc_824727FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472818"))) PPC_WEAK_FUNC(sub_82472818);
PPC_FUNC_IMPL(__imp__sub_82472818) {
	PPC_FUNC_PROLOGUE();
	// b 0x82483730
	sub_82483730(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82472820"))) PPC_WEAK_FUNC(sub_82472820);
PPC_FUNC_IMPL(__imp__sub_82472820) {
	PPC_FUNC_PROLOGUE();
	// b 0x82483150
	sub_82483150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82472828"))) PPC_WEAK_FUNC(sub_82472828);
PPC_FUNC_IMPL(__imp__sub_82472828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	ctx.lr = 0x82472848;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82472888
	if (ctx.cr0.eq) goto loc_82472888;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824721f8
	ctx.lr = 0x8247285C;
	sub_824721F8(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r11,r11,1112
	ctx.r11.s64 = ctx.r11.s64 + 1112;
	// addi r10,r10,2168
	ctx.r10.s64 = ctx.r10.s64 + 2168;
	// addi r9,r9,12092
	ctx.r9.s64 = ctx.r9.s64 + 12092;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8247288c
	goto loc_8247288C;
loc_82472888:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247288C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824728A8"))) PPC_WEAK_FUNC(sub_824728A8);
PPC_FUNC_IMPL(__imp__sub_824728A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82483730
	ctx.lr = 0x824728C8;
	sub_82483730(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x824728d8
	if (!ctx.cr6.eq) goto loc_824728D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x824728f0
	goto loc_824728F0;
loc_824728D8:
	// bl 0x82483150
	ctx.lr = 0x824728DC;
	sub_82483150(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x824728f0
	if (ctx.cr6.eq) goto loc_824728F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82472198
	ctx.lr = 0x824728F0;
	sub_82472198(ctx, base);
loc_824728F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472908"))) PPC_WEAK_FUNC(sub_82472908);
PPC_FUNC_IMPL(__imp__sub_82472908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,21188
	ctx.r3.s64 = ctx.r11.s64 + 21188;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472918"))) PPC_WEAK_FUNC(sub_82472918);
PPC_FUNC_IMPL(__imp__sub_82472918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82472950
	if (ctx.cr6.eq) goto loc_82472950;
	// bl 0x824838a8
	ctx.lr = 0x82472940;
	sub_824838A8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82472950
	if (!ctx.cr6.eq) goto loc_82472950;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8247295c
	goto loc_8247295C;
loc_82472950:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824723d0
	ctx.lr = 0x8247295C;
	sub_824723D0(ctx, base);
loc_8247295C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472978"))) PPC_WEAK_FUNC(sub_82472978);
PPC_FUNC_IMPL(__imp__sub_82472978) {
	PPC_FUNC_PROLOGUE();
	// b 0x824838a8
	sub_824838A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82472980"))) PPC_WEAK_FUNC(sub_82472980);
PPC_FUNC_IMPL(__imp__sub_82472980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	ctx.lr = 0x824729A0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824729e0
	if (ctx.cr0.eq) goto loc_824729E0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824721f8
	ctx.lr = 0x824729B4;
	sub_824721F8(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r11,r11,2240
	ctx.r11.s64 = ctx.r11.s64 + 2240;
	// addi r10,r10,3296
	ctx.r10.s64 = ctx.r10.s64 + 3296;
	// addi r9,r9,12092
	ctx.r9.s64 = ctx.r9.s64 + 12092;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x824729e4
	goto loc_824729E4;
loc_824729E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824729E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472A00"))) PPC_WEAK_FUNC(sub_82472A00);
PPC_FUNC_IMPL(__imp__sub_82472A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x824838a8
	ctx.lr = 0x82472A20;
	sub_824838A8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82472a30
	if (!ctx.cr6.eq) goto loc_82472A30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82472a48
	goto loc_82472A48;
loc_82472A30:
	// bl 0x824832c8
	ctx.lr = 0x82472A34;
	sub_824832C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82472a48
	if (ctx.cr6.eq) goto loc_82472A48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82472198
	ctx.lr = 0x82472A48;
	sub_82472198(ctx, base);
loc_82472A48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472A60"))) PPC_WEAK_FUNC(sub_82472A60);
PPC_FUNC_IMPL(__imp__sub_82472A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,21212
	ctx.r3.s64 = ctx.r11.s64 + 21212;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472A70"))) PPC_WEAK_FUNC(sub_82472A70);
PPC_FUNC_IMPL(__imp__sub_82472A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82472aa8
	if (ctx.cr6.eq) goto loc_82472AA8;
	// bl 0x82483a20
	ctx.lr = 0x82472A98;
	sub_82483A20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82472aa8
	if (!ctx.cr6.eq) goto loc_82472AA8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82472ab4
	goto loc_82472AB4;
loc_82472AA8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8240aec0
	ctx.lr = 0x82472AB4;
	sub_8240AEC0(ctx, base);
loc_82472AB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472AD0"))) PPC_WEAK_FUNC(sub_82472AD0);
PPC_FUNC_IMPL(__imp__sub_82472AD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82483a20
	sub_82483A20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82472AD8"))) PPC_WEAK_FUNC(sub_82472AD8);
PPC_FUNC_IMPL(__imp__sub_82472AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1952
	ctx.r3.s64 = 1952;
	// bl 0x82833108
	ctx.lr = 0x82472AF8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82472b38
	if (ctx.cr0.eq) goto loc_82472B38;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8240afd0
	ctx.lr = 0x82472B0C;
	sub_8240AFD0(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r11,r11,3368
	ctx.r11.s64 = ctx.r11.s64 + 3368;
	// addi r10,r10,4488
	ctx.r10.s64 = ctx.r10.s64 + 4488;
	// addi r9,r9,14152
	ctx.r9.s64 = ctx.r9.s64 + 14152;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x82472b3c
	goto loc_82472B3C;
loc_82472B38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82472B3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472B58"))) PPC_WEAK_FUNC(sub_82472B58);
PPC_FUNC_IMPL(__imp__sub_82472B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82483a20
	ctx.lr = 0x82472B78;
	sub_82483A20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82472b8c
	if (ctx.cr6.eq) goto loc_82472B8C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8240af70
	ctx.lr = 0x82472B8C;
	sub_8240AF70(ctx, base);
loc_82472B8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472BA8"))) PPC_WEAK_FUNC(sub_82472BA8);
PPC_FUNC_IMPL(__imp__sub_82472BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8240b368
	ctx.lr = 0x82472BC8;
	sub_8240B368(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82472bd8
	if (ctx.cr0.eq) goto loc_82472BD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82472BD8;
	sub_82332DB8(ctx, base);
loc_82472BD8:
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

__attribute__((alias("__imp__sub_82472BF8"))) PPC_WEAK_FUNC(sub_82472BF8);
PPC_FUNC_IMPL(__imp__sub_82472BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,21240
	ctx.r3.s64 = ctx.r11.s64 + 21240;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472C08"))) PPC_WEAK_FUNC(sub_82472C08);
PPC_FUNC_IMPL(__imp__sub_82472C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82472c40
	if (ctx.cr6.eq) goto loc_82472C40;
	// bl 0x82483b98
	ctx.lr = 0x82472C30;
	sub_82483B98(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82472c40
	if (!ctx.cr6.eq) goto loc_82472C40;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82472c4c
	goto loc_82472C4C;
loc_82472C40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8240aec0
	ctx.lr = 0x82472C4C;
	sub_8240AEC0(ctx, base);
loc_82472C4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472C68"))) PPC_WEAK_FUNC(sub_82472C68);
PPC_FUNC_IMPL(__imp__sub_82472C68) {
	PPC_FUNC_PROLOGUE();
	// b 0x82483b98
	sub_82483B98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82472C70"))) PPC_WEAK_FUNC(sub_82472C70);
PPC_FUNC_IMPL(__imp__sub_82472C70) {
	PPC_FUNC_PROLOGUE();
	// b 0x82410578
	sub_82410578(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82472C78"))) PPC_WEAK_FUNC(sub_82472C78);
PPC_FUNC_IMPL(__imp__sub_82472C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1984
	ctx.r3.s64 = 1984;
	// bl 0x82833108
	ctx.lr = 0x82472C98;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82472d08
	if (ctx.cr0.eq) goto loc_82472D08;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8240afd0
	ctx.lr = 0x82472CAC;
	sub_8240AFD0(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r11,r11,4560
	ctx.r11.s64 = ctx.r11.s64 + 4560;
	// addi r10,r10,5680
	ctx.r10.s64 = ctx.r10.s64 + 5680;
	// addi r9,r9,14152
	ctx.r9.s64 = ctx.r9.s64 + 14152;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1952(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1952);
	// stw r11,1952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1952, ctx.r11.u32);
	// lwz r11,1956(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1956);
	// stw r11,1956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1956, ctx.r11.u32);
	// lwz r11,1960(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1960);
	// stw r11,1960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1960, ctx.r11.u32);
	// lwz r11,1964(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1964);
	// stw r11,1964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1964, ctx.r11.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// stw r11,1968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1968, ctx.r11.u32);
	// lwz r11,1972(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1972);
	// stw r11,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r11.u32);
	// b 0x82472d0c
	goto loc_82472D0C;
loc_82472D08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82472D0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472D28"))) PPC_WEAK_FUNC(sub_82472D28);
PPC_FUNC_IMPL(__imp__sub_82472D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82483b98
	ctx.lr = 0x82472D48;
	sub_82483B98(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82472d5c
	if (ctx.cr6.eq) goto loc_82472D5C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8240af70
	ctx.lr = 0x82472D5C;
	sub_8240AF70(ctx, base);
loc_82472D5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472D78"))) PPC_WEAK_FUNC(sub_82472D78);
PPC_FUNC_IMPL(__imp__sub_82472D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,21264
	ctx.r3.s64 = ctx.r11.s64 + 21264;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472D88"))) PPC_WEAK_FUNC(sub_82472D88);
PPC_FUNC_IMPL(__imp__sub_82472D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82472dc0
	if (ctx.cr6.eq) goto loc_82472DC0;
	// bl 0x82483d18
	ctx.lr = 0x82472DB0;
	sub_82483D18(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82472dc0
	if (!ctx.cr6.eq) goto loc_82472DC0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82472dcc
	goto loc_82472DCC;
loc_82472DC0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8240aec0
	ctx.lr = 0x82472DCC;
	sub_8240AEC0(ctx, base);
loc_82472DCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472DE8"))) PPC_WEAK_FUNC(sub_82472DE8);
PPC_FUNC_IMPL(__imp__sub_82472DE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82483d18
	sub_82483D18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82472DF0"))) PPC_WEAK_FUNC(sub_82472DF0);
PPC_FUNC_IMPL(__imp__sub_82472DF0) {
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
	// li r3,1968
	ctx.r3.s64 = 1968;
	// bl 0x82833108
	ctx.lr = 0x82472E10;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82472e60
	if (ctx.cr0.eq) goto loc_82472E60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8240afd0
	ctx.lr = 0x82472E24;
	sub_8240AFD0(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r11,r11,5752
	ctx.r11.s64 = ctx.r11.s64 + 5752;
	// addi r10,r10,6872
	ctx.r10.s64 = ctx.r10.s64 + 6872;
	// addi r9,r9,14152
	ctx.r9.s64 = ctx.r9.s64 + 14152;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
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
	// b 0x82472e64
	goto loc_82472E64;
loc_82472E60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82472E64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472E80"))) PPC_WEAK_FUNC(sub_82472E80);
PPC_FUNC_IMPL(__imp__sub_82472E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82483d18
	ctx.lr = 0x82472EA0;
	sub_82483D18(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82472eb4
	if (ctx.cr6.eq) goto loc_82472EB4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8240af70
	ctx.lr = 0x82472EB4;
	sub_8240AF70(ctx, base);
loc_82472EB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472ED0"))) PPC_WEAK_FUNC(sub_82472ED0);
PPC_FUNC_IMPL(__imp__sub_82472ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,21308
	ctx.r3.s64 = ctx.r11.s64 + 21308;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472EE0"))) PPC_WEAK_FUNC(sub_82472EE0);
PPC_FUNC_IMPL(__imp__sub_82472EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82472f18
	if (ctx.cr6.eq) goto loc_82472F18;
	// bl 0x82484020
	ctx.lr = 0x82472F08;
	sub_82484020(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82472f18
	if (!ctx.cr6.eq) goto loc_82472F18;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82472f24
	goto loc_82472F24;
loc_82472F18:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a28
	ctx.lr = 0x82472F24;
	sub_82338A28(ctx, base);
loc_82472F24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472F40"))) PPC_WEAK_FUNC(sub_82472F40);
PPC_FUNC_IMPL(__imp__sub_82472F40) {
	PPC_FUNC_PROLOGUE();
	// b 0x82484020
	sub_82484020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82472F48"))) PPC_WEAK_FUNC(sub_82472F48);
PPC_FUNC_IMPL(__imp__sub_82472F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1504
	ctx.r3.s64 = 1504;
	// bl 0x82833108
	ctx.lr = 0x82472F64;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82472f78
	if (ctx.cr0.eq) goto loc_82472F78;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82472ff0
	ctx.lr = 0x82472F74;
	sub_82472FF0(ctx, base);
	// b 0x82472f7c
	goto loc_82472F7C;
loc_82472F78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82472F7C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472F90"))) PPC_WEAK_FUNC(sub_82472F90);
PPC_FUNC_IMPL(__imp__sub_82472F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82484020
	ctx.lr = 0x82472FB0;
	sub_82484020(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82472fc0
	if (!ctx.cr6.eq) goto loc_82472FC0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82472fd8
	goto loc_82472FD8;
loc_82472FC0:
	// bl 0x82338750
	ctx.lr = 0x82472FC4;
	sub_82338750(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82472fd8
	if (ctx.cr6.eq) goto loc_82472FD8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x82472FD8;
	sub_82338858(ctx, base);
loc_82472FD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82472FF0"))) PPC_WEAK_FUNC(sub_82472FF0);
PPC_FUNC_IMPL(__imp__sub_82472FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82472FF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82338b88
	ctx.lr = 0x82473008;
	sub_82338B88(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r11,r11,6968
	ctx.r11.s64 = ctx.r11.s64 + 6968;
	// addi r10,r10,7980
	ctx.r10.s64 = ctx.r10.s64 + 7980;
	// addi r9,r9,8032
	ctx.r9.s64 = ctx.r9.s64 + 8032;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// addi r4,r29,1416
	ctx.r4.s64 = ctx.r29.s64 + 1416;
	// stw r9,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r9.u32);
	// addi r3,r30,1416
	ctx.r3.s64 = ctx.r30.s64 + 1416;
	// lwz r11,1408(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1408);
	// stw r11,1408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1408, ctx.r11.u32);
	// lwz r11,1412(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1412);
	// stw r11,1412(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1412, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x82473048;
	sub_82873B58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r30,1440
	ctx.r31.s64 = ctx.r30.s64 + 1440;
	// addi r28,r29,1440
	ctx.r28.s64 = ctx.r29.s64 + 1440;
	// stw r11,1448(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1448, ctx.r11.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,1452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1452, ctx.r11.u32);
	// stw r11,1456(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1456, ctx.r11.u32);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// stw r10,1444(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1444, ctx.r10.u32);
	// stw r11,1460(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1460, ctx.r11.u32);
	// stw r11,1440(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1440, ctx.r11.u32);
	// beq cr6,0x824730c0
	if (ctx.cr6.eq) goto loc_824730C0;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x824730c0
	if (!ctx.cr6.gt) goto loc_824730C0;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824730a4
	if (ctx.cr0.eq) goto loc_824730A4;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x824730A4;
	sub_82332C38(ctx, base);
loc_824730A4:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x824730B8;
	sub_82A45878(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_824730C0:
	// lwz r11,1464(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1464);
	// addi r4,r29,1468
	ctx.r4.s64 = ctx.r29.s64 + 1468;
	// addi r3,r30,1468
	ctx.r3.s64 = ctx.r30.s64 + 1468;
	// stw r11,1464(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1464, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x824730D4;
	sub_82873B58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824730E0"))) PPC_WEAK_FUNC(sub_824730E0);
PPC_FUNC_IMPL(__imp__sub_824730E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x824730E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r30,1468
	ctx.r3.s64 = ctx.r30.s64 + 1468;
	// bl 0x8239d768
	ctx.lr = 0x824730FC;
	sub_8239D768(ctx, base);
	// addi r31,r30,1440
	ctx.r31.s64 = ctx.r30.s64 + 1440;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,1456(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82473118;
	sub_82332CA8(ctx, base);
	// lwz r3,1452(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82473128
	if (ctx.cr6.eq) goto loc_82473128;
	// bl 0x82332db8
	ctx.lr = 0x82473128;
	sub_82332DB8(ctx, base);
loc_82473128:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r30,1416
	ctx.r3.s64 = ctx.r30.s64 + 1416;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8239d768
	ctx.lr = 0x82473140;
	sub_8239D768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829bc9e8
	ctx.lr = 0x82473148;
	sub_829BC9E8(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82473158
	if (ctx.cr0.eq) goto loc_82473158;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332db8
	ctx.lr = 0x82473158;
	sub_82332DB8(ctx, base);
loc_82473158:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82473168"))) PPC_WEAK_FUNC(sub_82473168);
PPC_FUNC_IMPL(__imp__sub_82473168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,21332
	ctx.r3.s64 = ctx.r11.s64 + 21332;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82473178"))) PPC_WEAK_FUNC(sub_82473178);
PPC_FUNC_IMPL(__imp__sub_82473178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x824731b0
	if (ctx.cr6.eq) goto loc_824731B0;
	// bl 0x824841c8
	ctx.lr = 0x824731A0;
	sub_824841C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x824731b0
	if (!ctx.cr6.eq) goto loc_824731B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824731bc
	goto loc_824731BC;
loc_824731B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,-4
	ctx.r3.s64 = ctx.r30.s64 + -4;
	// bl 0x8248c7d0
	ctx.lr = 0x824731BC;
	sub_8248C7D0(ctx, base);
loc_824731BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824731D8"))) PPC_WEAK_FUNC(sub_824731D8);
PPC_FUNC_IMPL(__imp__sub_824731D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x824841c8
	sub_824841C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824731E0"))) PPC_WEAK_FUNC(sub_824731E0);
PPC_FUNC_IMPL(__imp__sub_824731E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8248c6c8
	sub_8248C6C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824731E8"))) PPC_WEAK_FUNC(sub_824731E8);
PPC_FUNC_IMPL(__imp__sub_824731E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r11,0
	ctx.r11.s64 = 0;
	// bl 0x82833108
	ctx.lr = 0x82473208;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82473284
	if (ctx.cr0.eq) goto loc_82473284;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// addic. r11,r31,-8
	ctx.xer.ca = ctx.r31.u32 > 7;
	ctx.r11.s64 = ctx.r31.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,8152
	ctx.r10.s64 = ctx.r10.s64 + 8152;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bne 0x8247322c
	if (!ctx.cr0.eq) goto loc_8247322C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82473238
	goto loc_82473238;
loc_8247322C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82473238:
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// addi r9,r9,14104
	ctx.r9.s64 = ctx.r9.s64 + 14104;
	// addi r8,r8,10888
	ctx.r8.s64 = ctx.r8.s64 + 10888;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// addi r9,r9,8080
	ctx.r9.s64 = ctx.r9.s64 + 8080;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r8,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r8.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r9,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x82473288
	goto loc_82473288;
loc_82473284:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82473288:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82473298
	if (!ctx.cr6.eq) goto loc_82473298;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824732a4
	goto loc_824732A4;
loc_82473298:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_824732A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824732B8"))) PPC_WEAK_FUNC(sub_824732B8);
PPC_FUNC_IMPL(__imp__sub_824732B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x824841c8
	ctx.lr = 0x824732D8;
	sub_824841C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x824732e8
	if (!ctx.cr6.eq) goto loc_824732E8;
	// addi r3,r30,-8
	ctx.r3.s64 = ctx.r30.s64 + -8;
	// b 0x824732f4
	goto loc_824732F4;
loc_824732E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,-4
	ctx.r3.s64 = ctx.r30.s64 + -4;
	// bl 0x8248c658
	ctx.lr = 0x824732F4;
	sub_8248C658(ctx, base);
loc_824732F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82473310"))) PPC_WEAK_FUNC(sub_82473310);
PPC_FUNC_IMPL(__imp__sub_82473310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82833238
	ctx.lr = 0x82473330;
	sub_82833238(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82473340
	if (ctx.cr0.eq) goto loc_82473340;
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// bl 0x82332db8
	ctx.lr = 0x82473340;
	sub_82332DB8(ctx, base);
loc_82473340:
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82473360"))) PPC_WEAK_FUNC(sub_82473360);
PPC_FUNC_IMPL(__imp__sub_82473360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,21364
	ctx.r3.s64 = ctx.r11.s64 + 21364;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82473370"))) PPC_WEAK_FUNC(sub_82473370);
PPC_FUNC_IMPL(__imp__sub_82473370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x824733b0
	if (ctx.cr6.eq) goto loc_824733B0;
	// bl 0x82484328
	ctx.lr = 0x82473390;
	sub_82484328(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x824733a0
	if (!ctx.cr6.eq) goto loc_824733A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824733b4
	goto loc_824733B4;
loc_824733A0:
	// bl 0x82333d20
	ctx.lr = 0x824733A4;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x824733b4
	if (ctx.cr6.eq) goto loc_824733B4;
loc_824733B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824733B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824733C8"))) PPC_WEAK_FUNC(sub_824733C8);
PPC_FUNC_IMPL(__imp__sub_824733C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82484328
	sub_82484328(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824733D0"))) PPC_WEAK_FUNC(sub_824733D0);
PPC_FUNC_IMPL(__imp__sub_824733D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x824733EC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82473420
	if (ctx.cr0.eq) goto loc_82473420;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,8160
	ctx.r10.s64 = ctx.r10.s64 + 8160;
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
	// b 0x82473424
	goto loc_82473424;
loc_82473420:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82473424:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82473438"))) PPC_WEAK_FUNC(sub_82473438);
PPC_FUNC_IMPL(__imp__sub_82473438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82484328
	ctx.lr = 0x82473458;
	sub_82484328(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82473468
	if (!ctx.cr6.eq) goto loc_82473468;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8247347c
	goto loc_8247347C;
loc_82473468:
	// bl 0x82333d20
	ctx.lr = 0x8247346C;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8247347c
	if (ctx.cr6.eq) goto loc_8247347C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247347C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82473498"))) PPC_WEAK_FUNC(sub_82473498);
PPC_FUNC_IMPL(__imp__sub_82473498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82833238
	ctx.lr = 0x824734B8;
	sub_82833238(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824734c8
	if (ctx.cr0.eq) goto loc_824734C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x824734C8;
	sub_82332DB8(ctx, base);
loc_824734C8:
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

__attribute__((alias("__imp__sub_824734E8"))) PPC_WEAK_FUNC(sub_824734E8);
PPC_FUNC_IMPL(__imp__sub_824734E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,21420
	ctx.r3.s64 = ctx.r11.s64 + 21420;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824734F8"))) PPC_WEAK_FUNC(sub_824734F8);
PPC_FUNC_IMPL(__imp__sub_824734F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x82473538
	if (ctx.cr6.eq) goto loc_82473538;
	// bl 0x82484640
	ctx.lr = 0x82473518;
	sub_82484640(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82473528
	if (!ctx.cr6.eq) goto loc_82473528;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8247353c
	goto loc_8247353C;
loc_82473528:
	// bl 0x82333d20
	ctx.lr = 0x8247352C;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8247353c
	if (ctx.cr6.eq) goto loc_8247353C;
loc_82473538:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247353C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82473550"))) PPC_WEAK_FUNC(sub_82473550);
PPC_FUNC_IMPL(__imp__sub_82473550) {
	PPC_FUNC_PROLOGUE();
	// b 0x82484640
	sub_82484640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82473558"))) PPC_WEAK_FUNC(sub_82473558);
PPC_FUNC_IMPL(__imp__sub_82473558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x82833108
	ctx.lr = 0x82473574;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82473588
	if (ctx.cr0.eq) goto loc_82473588;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82473600
	ctx.lr = 0x82473584;
	sub_82473600(ctx, base);
	// b 0x8247358c
	goto loc_8247358C;
loc_82473588:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247358C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824735A0"))) PPC_WEAK_FUNC(sub_824735A0);
PPC_FUNC_IMPL(__imp__sub_824735A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82484640
	ctx.lr = 0x824735C0;
	sub_82484640(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x824735d0
	if (!ctx.cr6.eq) goto loc_824735D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x824735e4
	goto loc_824735E4;
loc_824735D0:
	// bl 0x82333d20
	ctx.lr = 0x824735D4;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x824735e4
	if (ctx.cr6.eq) goto loc_824735E4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_824735E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82473600"))) PPC_WEAK_FUNC(sub_82473600);
PPC_FUNC_IMPL(__imp__sub_82473600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82473608;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,24072
	ctx.r10.s64 = ctx.r10.s64 + 24072;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r26,8
	ctx.r31.s64 = ctx.r26.s64 + 8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// stw r30,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r30.u32);
	// stw r9,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r9.u32);
	// stw r30,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r30.u32);
	// stw r30,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r30.u32);
	// stw r30,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r30.u32);
	// stw r30,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r30.u32);
	// beq cr6,0x824736f4
	if (ctx.cr6.eq) goto loc_824736F4;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824736f4
	if (!ctx.cr6.gt) goto loc_824736F4;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82473690
	if (ctx.cr0.eq) goto loc_82473690;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x82473690;
	sub_82332C38(ctx, base);
loc_82473690:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824736f4
	if (!ctx.cr6.gt) goto loc_824736F4;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_824736A4:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x824736B8;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824736e0
	if (ctx.cr0.eq) goto loc_824736E0;
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
loc_824736E0:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824736a4
	if (ctx.cr6.lt) goto loc_824736A4;
loc_824736F4:
	// addi r3,r26,32
	ctx.r3.s64 = ctx.r26.s64 + 32;
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// li r5,160
	ctx.r5.s64 = 160;
	// bl 0x82a4ea80
	ctx.lr = 0x82473704;
	sub_82A4EA80(ctx, base);
	// addi r3,r26,192
	ctx.r3.s64 = ctx.r26.s64 + 192;
	// addi r4,r29,192
	ctx.r4.s64 = ctx.r29.s64 + 192;
	// li r5,160
	ctx.r5.s64 = 160;
	// bl 0x82a4ea80
	ctx.lr = 0x82473714;
	sub_82A4EA80(ctx, base);
	// lwz r10,352(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	// addi r31,r26,356
	ctx.r31.s64 = ctx.r26.s64 + 356;
	// addi r28,r29,356
	ctx.r28.s64 = ctx.r29.s64 + 356;
	// li r11,12
	ctx.r11.s64 = 12;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// stw r10,352(r26)
	PPC_STORE_U32(ctx.r26.u32 + 352, ctx.r10.u32);
	// stw r11,360(r26)
	PPC_STORE_U32(ctx.r26.u32 + 360, ctx.r11.u32);
	// stw r30,364(r26)
	PPC_STORE_U32(ctx.r26.u32 + 364, ctx.r30.u32);
	// stw r30,368(r26)
	PPC_STORE_U32(ctx.r26.u32 + 368, ctx.r30.u32);
	// stw r30,372(r26)
	PPC_STORE_U32(ctx.r26.u32 + 372, ctx.r30.u32);
	// stw r30,376(r26)
	PPC_STORE_U32(ctx.r26.u32 + 376, ctx.r30.u32);
	// stw r30,356(r26)
	PPC_STORE_U32(ctx.r26.u32 + 356, ctx.r30.u32);
	// beq cr6,0x824737dc
	if (ctx.cr6.eq) goto loc_824737DC;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824737dc
	if (!ctx.cr6.gt) goto loc_824737DC;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82473774
	if (ctx.cr0.eq) goto loc_82473774;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x82473774;
	sub_82332C38(ctx, base);
loc_82473774:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824737dc
	if (!ctx.cr6.gt) goto loc_824737DC;
loc_82473784:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x82473798;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 * 12;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824737c8
	if (ctx.cr0.eq) goto loc_824737C8;
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
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
loc_824737C8:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82473784
	if (ctx.cr6.lt) goto loc_82473784;
loc_824737DC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824737E8"))) PPC_WEAK_FUNC(sub_824737E8);
PPC_FUNC_IMPL(__imp__sub_824737E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x824c3b58
	ctx.lr = 0x82473808;
	sub_824C3B58(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82473818
	if (ctx.cr0.eq) goto loc_82473818;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82473818;
	sub_82332DB8(ctx, base);
loc_82473818:
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

__attribute__((alias("__imp__sub_82473838"))) PPC_WEAK_FUNC(sub_82473838);
PPC_FUNC_IMPL(__imp__sub_82473838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82473840;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x828479d0
	ctx.lr = 0x82473854;
	sub_828479D0(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82473904
	if (ctx.cr6.eq) goto loc_82473904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// bl 0x82847bb0
	ctx.lr = 0x82473870;
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824738b4
	if (ctx.cr6.eq) goto loc_824738B4;
	// bl 0x82484640
	ctx.lr = 0x82473894;
	sub_82484640(ctx, base);
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
	ctx.lr = 0x824738AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824738b8
	if (!ctx.cr0.eq) goto loc_824738B8;
loc_824738B4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_824738B8:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x824738C0;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824738f8
	if (ctx.cr0.eq) goto loc_824738F8;
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,8312
	ctx.r10.s64 = ctx.r10.s64 + 8312;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
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
	// b 0x824738fc
	goto loc_824738FC;
loc_824738F8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824738FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x82473904;
	sub_8248C5F8(ctx, base);
loc_82473904:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82473910"))) PPC_WEAK_FUNC(sub_82473910);
PPC_FUNC_IMPL(__imp__sub_82473910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9dc
	ctx.lr = 0x82473918;
	__savegprlr_17(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// lwz r5,160(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 160);
	// lwz r4,152(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 152);
	// bl 0x82847bb0
	ctx.lr = 0x8247392C;
	sub_82847BB0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r17,0
	ctx.r17.s64 = 0;
	// lwz r11,48(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82473aa0
	if (!ctx.cr6.gt) goto loc_82473AA0;
	// li r11,12
	ctx.r11.s64 = 12;
	// lwz r22,0(r13)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r21,r11,24
	ctx.r21.s64 = ctx.r11.s64 + 24;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lis r19,-31949
	ctx.r19.s64 = -2093809664;
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
	// addi r18,r11,-15412
	ctx.r18.s64 = ctx.r11.s64 + -15412;
loc_82473960:
	// lwz r10,44(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 44);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwzx r9,r21,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r22.u32);
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r30,152(r20)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r20.u32 + 152);
	// rlwinm. r9,r9,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r28,r10,r24
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// addi r31,r11,1268
	ctx.r31.s64 = ctx.r11.s64 + 1268;
	// lwz r29,8(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bne 0x82473990
	if (!ctx.cr0.eq) goto loc_82473990;
	// addi r3,r18,4
	ctx.r3.s64 = ctx.r18.s64 + 4;
	// bl 0x8312e74c
	ctx.lr = 0x82473990;
	sub_8312E74C(ctx, base);
loc_82473990:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82484f48
	ctx.lr = 0x8247399C;
	sub_82484F48(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828552a0
	ctx.lr = 0x824739B4;
	sub_828552A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824739d8
	if (ctx.cr0.eq) goto loc_824739D8;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x824739d4
	if (!ctx.cr6.gt) goto loc_824739D4;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x824739d8
	goto loc_824739D8;
loc_824739D4:
	// lwz r26,20(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
loc_824739D8:
	// lwzx r11,r21,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r22.u32);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824739ec
	if (!ctx.cr0.eq) goto loc_824739EC;
	// addi r3,r18,4
	ctx.r3.s64 = ctx.r18.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x824739EC;
	sub_8312E73C(ctx, base);
loc_824739EC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82473a8c
	if (ctx.cr6.eq) goto loc_82473A8C;
	// addi r27,r26,192
	ctx.r27.s64 = ctx.r26.s64 + 192;
	// addi r30,r28,212
	ctx.r30.s64 = ctx.r28.s64 + 212;
	// li r29,5
	ctx.r29.s64 = 5;
loc_82473A00:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82411dc0
	ctx.lr = 0x82473A24;
	sub_82411DC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82473a60
	if (ctx.cr0.eq) goto loc_82473A60;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82473a60
	if (ctx.cr6.eq) goto loc_82473A60;
	// bl 0x824852c0
	ctx.lr = 0x82473A3C;
	sub_824852C0(ctx, base);
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
	ctx.lr = 0x82473A54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x82473a64
	if (!ctx.cr0.eq) goto loc_82473A64;
loc_82473A60:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82473A64:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r27,r27,32
	ctx.r27.s64 = ctx.r27.s64 + 32;
	// bne 0x82473a00
	if (!ctx.cr0.eq) goto loc_82473A00;
	// lwz r11,10548(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 10548);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r3,r11,3616
	ctx.r3.s64 = ctx.r11.s64 + 3616;
	// bl 0x828d0cb0
	ctx.lr = 0x82473A8C;
	sub_828D0CB0(ctx, base);
loc_82473A8C:
	// lwz r11,48(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r17,r11
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82473960
	if (ctx.cr6.lt) goto loc_82473960;
loc_82473AA0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82473AA8"))) PPC_WEAK_FUNC(sub_82473AA8);
PPC_FUNC_IMPL(__imp__sub_82473AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82473AB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,9848(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9848);
	// bl 0x82462ab0
	ctx.lr = 0x82473AC8;
	sub_82462AB0(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82473AD0;
	sub_82333900(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r28,5
	ctx.r28.s64 = 5;
	// addi r27,r11,2984
	ctx.r27.s64 = ctx.r11.s64 + 2984;
	// beq 0x82473b14
	if (ctx.cr0.eq) goto loc_82473B14;
	// bl 0x823bb8f8
	ctx.lr = 0x82473AE8;
	sub_823BB8F8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,15452
	ctx.r4.s64 = ctx.r11.s64 + 15452;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82473B04;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r28,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r28.u32);
	// b 0x82473b18
	goto loc_82473B18;
loc_82473B14:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82473B18:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82473B20;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82473B28;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82473b58
	if (ctx.cr0.eq) goto loc_82473B58;
	// bl 0x8248bf70
	ctx.lr = 0x82473B34;
	sub_8248BF70(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,7452
	ctx.r4.s64 = ctx.r11.s64 + 7452;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82847920
	ctx.lr = 0x82473B50;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82473b5c
	goto loc_82473B5C;
loc_82473B58:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82473B5C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82473B64;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82473B6C;
	sub_82333900(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r11,29096
	ctx.r30.s64 = ctx.r11.s64 + 29096;
	// beq 0x82473ba8
	if (ctx.cr0.eq) goto loc_82473BA8;
	// bl 0x8248be68
	ctx.lr = 0x82473B80;
	sub_8248BE68(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11208
	ctx.r4.s64 = ctx.r11.s64 + 11208;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82473B9C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82473bac
	goto loc_82473BAC;
loc_82473BA8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82473BAC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82473BB4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82473BBC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82473bf0
	if (ctx.cr0.eq) goto loc_82473BF0;
	// bl 0x8248bce0
	ctx.lr = 0x82473BC8;
	sub_8248BCE0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11236
	ctx.r4.s64 = ctx.r11.s64 + 11236;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82473BE4;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82473bf4
	goto loc_82473BF4;
loc_82473BF0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82473BF4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82473BFC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82473C04;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82473c38
	if (ctx.cr0.eq) goto loc_82473C38;
	// bl 0x8248bba0
	ctx.lr = 0x82473C10;
	sub_8248BBA0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11268
	ctx.r4.s64 = ctx.r11.s64 + 11268;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82473C2C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82473c3c
	goto loc_82473C3C;
loc_82473C38:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82473C3C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82473C44;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82473C4C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82473c80
	if (ctx.cr0.eq) goto loc_82473C80;
	// bl 0x8248ba98
	ctx.lr = 0x82473C58;
	sub_8248BA98(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11304
	ctx.r4.s64 = ctx.r11.s64 + 11304;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82473C74;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82473c84
	goto loc_82473C84;
loc_82473C80:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82473C84:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82473C8C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82473C94;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82473cc8
	if (ctx.cr0.eq) goto loc_82473CC8;
	// bl 0x8248b958
	ctx.lr = 0x82473CA0;
	sub_8248B958(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11524
	ctx.r4.s64 = ctx.r11.s64 + 11524;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82473CBC;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82473ccc
	goto loc_82473CCC;
loc_82473CC8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82473CCC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82473CD4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82473CDC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82473d10
	if (ctx.cr0.eq) goto loc_82473D10;
	// bl 0x8248b7f0
	ctx.lr = 0x82473CE8;
	sub_8248B7F0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11588
	ctx.r4.s64 = ctx.r11.s64 + 11588;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82473D04;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82473d14
	goto loc_82473D14;
loc_82473D10:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82473D14:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82473D1C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82473D24;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82473d58
	if (ctx.cr0.eq) goto loc_82473D58;
	// bl 0x8248b6e8
	ctx.lr = 0x82473D30;
	sub_8248B6E8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11612
	ctx.r4.s64 = ctx.r11.s64 + 11612;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82473D4C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82473d5c
	goto loc_82473D5C;
loc_82473D58:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82473D5C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82473D64;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82473D6C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82473da0
	if (ctx.cr0.eq) goto loc_82473DA0;
	// bl 0x8248b5e0
	ctx.lr = 0x82473D78;
	sub_8248B5E0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11648
	ctx.r4.s64 = ctx.r11.s64 + 11648;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82473D94;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82473da4
	goto loc_82473DA4;
loc_82473DA0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82473DA4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82473DAC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82473DB4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82473de8
	if (ctx.cr0.eq) goto loc_82473DE8;
	// bl 0x8248b458
	ctx.lr = 0x82473DC0;
	sub_8248B458(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11716
	ctx.r4.s64 = ctx.r11.s64 + 11716;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82473DDC;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82473dec
	goto loc_82473DEC;
loc_82473DE8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82473DEC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82473DF4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82473DFC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82473e30
	if (ctx.cr0.eq) goto loc_82473E30;
	// bl 0x8248b2e0
	ctx.lr = 0x82473E08;
	sub_8248B2E0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11748
	ctx.r4.s64 = ctx.r11.s64 + 11748;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82473E24;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82473e34
	goto loc_82473E34;
loc_82473E30:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82473E34:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82473E3C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82473E44;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82473e78
	if (ctx.cr0.eq) goto loc_82473E78;
	// bl 0x8248b168
	ctx.lr = 0x82473E50;
	sub_8248B168(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11780
	ctx.r4.s64 = ctx.r11.s64 + 11780;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82473E6C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82473e7c
	goto loc_82473E7C;
loc_82473E78:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82473E7C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82473E84;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82473E8C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82473ec0
	if (ctx.cr0.eq) goto loc_82473EC0;
	// bl 0x8248b060
	ctx.lr = 0x82473E98;
	sub_8248B060(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11812
	ctx.r4.s64 = ctx.r11.s64 + 11812;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82473EB4;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82473ec4
	goto loc_82473EC4;
loc_82473EC0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82473EC4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82473ECC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82473ED4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82473f08
	if (ctx.cr0.eq) goto loc_82473F08;
	// bl 0x8248aec0
	ctx.lr = 0x82473EE0;
	sub_8248AEC0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11840
	ctx.r4.s64 = ctx.r11.s64 + 11840;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82473EFC;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82473f0c
	goto loc_82473F0C;
loc_82473F08:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82473F0C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82473F14;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82473F1C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82473f50
	if (ctx.cr0.eq) goto loc_82473F50;
	// bl 0x8248adb8
	ctx.lr = 0x82473F28;
	sub_8248ADB8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11900
	ctx.r4.s64 = ctx.r11.s64 + 11900;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82473F44;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82473f54
	goto loc_82473F54;
loc_82473F50:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82473F54:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82473F5C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82473F64;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82473f98
	if (ctx.cr0.eq) goto loc_82473F98;
	// bl 0x8248aca8
	ctx.lr = 0x82473F70;
	sub_8248ACA8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11936
	ctx.r4.s64 = ctx.r11.s64 + 11936;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82473F8C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82473f9c
	goto loc_82473F9C;
loc_82473F98:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82473F9C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82473FA4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82473FAC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82473fe0
	if (ctx.cr0.eq) goto loc_82473FE0;
	// bl 0x8248ab68
	ctx.lr = 0x82473FB8;
	sub_8248AB68(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11968
	ctx.r4.s64 = ctx.r11.s64 + 11968;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82473FD4;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82473fe4
	goto loc_82473FE4;
loc_82473FE0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82473FE4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82473FEC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82473FF4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474028
	if (ctx.cr0.eq) goto loc_82474028;
	// bl 0x8248aa00
	ctx.lr = 0x82474000;
	sub_8248AA00(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,12028
	ctx.r4.s64 = ctx.r11.s64 + 12028;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8247401C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8247402c
	goto loc_8247402C;
loc_82474028:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247402C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474034;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8247403C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474070
	if (ctx.cr0.eq) goto loc_82474070;
	// bl 0x8248a878
	ctx.lr = 0x82474048;
	sub_8248A878(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,12060
	ctx.r4.s64 = ctx.r11.s64 + 12060;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474064;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474074
	goto loc_82474074;
loc_82474070:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474074:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247407C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474084;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824740b8
	if (ctx.cr0.eq) goto loc_824740B8;
	// bl 0x8248a770
	ctx.lr = 0x82474090;
	sub_8248A770(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,12116
	ctx.r4.s64 = ctx.r11.s64 + 12116;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824740AC;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x824740bc
	goto loc_824740BC;
loc_824740B8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824740BC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824740C4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824740CC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474100
	if (ctx.cr0.eq) goto loc_82474100;
	// bl 0x8248a5f8
	ctx.lr = 0x824740D8;
	sub_8248A5F8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,12148
	ctx.r4.s64 = ctx.r11.s64 + 12148;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824740F4;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474104
	goto loc_82474104;
loc_82474100:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474104:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247410C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474114;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474148
	if (ctx.cr0.eq) goto loc_82474148;
	// bl 0x8248a4f0
	ctx.lr = 0x82474120;
	sub_8248A4F0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,12180
	ctx.r4.s64 = ctx.r11.s64 + 12180;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8247413C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8247414c
	goto loc_8247414C;
loc_82474148:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247414C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474154;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8247415C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474190
	if (ctx.cr0.eq) goto loc_82474190;
	// bl 0x8248a3e8
	ctx.lr = 0x82474168;
	sub_8248A3E8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,12212
	ctx.r4.s64 = ctx.r11.s64 + 12212;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474184;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474194
	goto loc_82474194;
loc_82474190:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474194:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247419C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824741A4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824741d8
	if (ctx.cr0.eq) goto loc_824741D8;
	// bl 0x8248a2e0
	ctx.lr = 0x824741B0;
	sub_8248A2E0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,12244
	ctx.r4.s64 = ctx.r11.s64 + 12244;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824741CC;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x824741dc
	goto loc_824741DC;
loc_824741D8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824741DC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824741E4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824741EC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474220
	if (ctx.cr0.eq) goto loc_82474220;
	// bl 0x8248a1d8
	ctx.lr = 0x824741F8;
	sub_8248A1D8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,12284
	ctx.r4.s64 = ctx.r11.s64 + 12284;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474214;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474224
	goto loc_82474224;
loc_82474220:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474224:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247422C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474234;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474268
	if (ctx.cr0.eq) goto loc_82474268;
	// bl 0x8248a070
	ctx.lr = 0x82474240;
	sub_8248A070(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,12324
	ctx.r4.s64 = ctx.r11.s64 + 12324;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8247425C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8247426c
	goto loc_8247426C;
loc_82474268:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247426C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474274;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8247427C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824742b0
	if (ctx.cr0.eq) goto loc_824742B0;
	// bl 0x82489ed0
	ctx.lr = 0x82474288;
	sub_82489ED0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,12356
	ctx.r4.s64 = ctx.r11.s64 + 12356;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824742A4;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x824742b4
	goto loc_824742B4;
loc_824742B0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824742B4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824742BC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824742C4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824742f8
	if (ctx.cr0.eq) goto loc_824742F8;
	// bl 0x82489dc8
	ctx.lr = 0x824742D0;
	sub_82489DC8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,12396
	ctx.r4.s64 = ctx.r11.s64 + 12396;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824742EC;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x824742fc
	goto loc_824742FC;
loc_824742F8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824742FC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474304;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8247430C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474340
	if (ctx.cr0.eq) goto loc_82474340;
	// bl 0x82489c58
	ctx.lr = 0x82474318;
	sub_82489C58(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,12428
	ctx.r4.s64 = ctx.r11.s64 + 12428;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474334;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474344
	goto loc_82474344;
loc_82474340:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474344:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247434C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474354;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474388
	if (ctx.cr0.eq) goto loc_82474388;
	// bl 0x82489ae8
	ctx.lr = 0x82474360;
	sub_82489AE8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,12464
	ctx.r4.s64 = ctx.r11.s64 + 12464;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8247437C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8247438c
	goto loc_8247438C;
loc_82474388:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247438C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474394;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8247439C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824743d0
	if (ctx.cr0.eq) goto loc_824743D0;
	// bl 0x82489950
	ctx.lr = 0x824743A8;
	sub_82489950(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,12504
	ctx.r4.s64 = ctx.r11.s64 + 12504;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824743C4;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x824743d4
	goto loc_824743D4;
loc_824743D0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824743D4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824743DC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824743E4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474418
	if (ctx.cr0.eq) goto loc_82474418;
	// bl 0x824897d8
	ctx.lr = 0x824743F0;
	sub_824897D8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,12540
	ctx.r4.s64 = ctx.r11.s64 + 12540;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8247440C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8247441c
	goto loc_8247441C;
loc_82474418:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247441C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474424;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8247442C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474460
	if (ctx.cr0.eq) goto loc_82474460;
	// bl 0x82489660
	ctx.lr = 0x82474438;
	sub_82489660(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,12580
	ctx.r4.s64 = ctx.r11.s64 + 12580;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474454;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474464
	goto loc_82474464;
loc_82474460:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474464:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247446C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474474;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824744a8
	if (ctx.cr0.eq) goto loc_824744A8;
	// bl 0x82489558
	ctx.lr = 0x82474480;
	sub_82489558(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,12616
	ctx.r4.s64 = ctx.r11.s64 + 12616;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8247449C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x824744ac
	goto loc_824744AC;
loc_824744A8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824744AC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824744B4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824744BC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824744f0
	if (ctx.cr0.eq) goto loc_824744F0;
	// bl 0x82489450
	ctx.lr = 0x824744C8;
	sub_82489450(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,13408
	ctx.r4.s64 = ctx.r11.s64 + 13408;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824744E4;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x824744f4
	goto loc_824744F4;
loc_824744F0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824744F4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824744FC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474504;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474538
	if (ctx.cr0.eq) goto loc_82474538;
	// bl 0x82489348
	ctx.lr = 0x82474510;
	sub_82489348(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,13440
	ctx.r4.s64 = ctx.r11.s64 + 13440;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8247452C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8247453c
	goto loc_8247453C;
loc_82474538:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247453C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474544;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8247454C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474580
	if (ctx.cr0.eq) goto loc_82474580;
	// bl 0x82489240
	ctx.lr = 0x82474558;
	sub_82489240(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,12688
	ctx.r4.s64 = ctx.r11.s64 + 12688;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474574;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474584
	goto loc_82474584;
loc_82474580:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474584:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247458C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474594;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824745c8
	if (ctx.cr0.eq) goto loc_824745C8;
	// bl 0x82489138
	ctx.lr = 0x824745A0;
	sub_82489138(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,12728
	ctx.r4.s64 = ctx.r11.s64 + 12728;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824745BC;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x824745cc
	goto loc_824745CC;
loc_824745C8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824745CC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824745D4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824745DC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474610
	if (ctx.cr0.eq) goto loc_82474610;
	// bl 0x82488ff8
	ctx.lr = 0x824745E8;
	sub_82488FF8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14352
	ctx.r4.s64 = ctx.r11.s64 + 14352;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474604;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474614
	goto loc_82474614;
loc_82474610:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474614:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247461C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474624;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474658
	if (ctx.cr0.eq) goto loc_82474658;
	// bl 0x82488ef0
	ctx.lr = 0x82474630;
	sub_82488EF0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,12768
	ctx.r4.s64 = ctx.r11.s64 + 12768;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8247464C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8247465c
	goto loc_8247465C;
loc_82474658:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247465C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474664;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8247466C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824746a0
	if (ctx.cr0.eq) goto loc_824746A0;
	// bl 0x82488d80
	ctx.lr = 0x82474678;
	sub_82488D80(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,12808
	ctx.r4.s64 = ctx.r11.s64 + 12808;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474694;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x824746a4
	goto loc_824746A4;
loc_824746A0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824746A4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824746AC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824746B4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824746e8
	if (ctx.cr0.eq) goto loc_824746E8;
	// bl 0x82488bd8
	ctx.lr = 0x824746C0;
	sub_82488BD8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,12840
	ctx.r4.s64 = ctx.r11.s64 + 12840;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824746DC;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x824746ec
	goto loc_824746EC;
loc_824746E8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824746EC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824746F4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824746FC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474730
	if (ctx.cr0.eq) goto loc_82474730;
	// bl 0x82488ad0
	ctx.lr = 0x82474708;
	sub_82488AD0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,12876
	ctx.r4.s64 = ctx.r11.s64 + 12876;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474724;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474734
	goto loc_82474734;
loc_82474730:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474734:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247473C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474744;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474778
	if (ctx.cr0.eq) goto loc_82474778;
	// bl 0x82488960
	ctx.lr = 0x82474750;
	sub_82488960(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,12912
	ctx.r4.s64 = ctx.r11.s64 + 12912;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8247476C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8247477c
	goto loc_8247477C;
loc_82474778:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247477C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474784;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8247478C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824747c0
	if (ctx.cr0.eq) goto loc_824747C0;
	// bl 0x82488858
	ctx.lr = 0x82474798;
	sub_82488858(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,12948
	ctx.r4.s64 = ctx.r11.s64 + 12948;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824747B4;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x824747c4
	goto loc_824747C4;
loc_824747C0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824747C4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824747CC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824747D4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474808
	if (ctx.cr0.eq) goto loc_82474808;
	// bl 0x82488750
	ctx.lr = 0x824747E0;
	sub_82488750(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,12984
	ctx.r4.s64 = ctx.r11.s64 + 12984;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824747FC;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8247480c
	goto loc_8247480C;
loc_82474808:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247480C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474814;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8247481C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474850
	if (ctx.cr0.eq) goto loc_82474850;
	// bl 0x824885c8
	ctx.lr = 0x82474828;
	sub_824885C8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,13016
	ctx.r4.s64 = ctx.r11.s64 + 13016;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474844;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474854
	goto loc_82474854;
loc_82474850:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474854:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247485C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474864;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474898
	if (ctx.cr0.eq) goto loc_82474898;
	// bl 0x824884c0
	ctx.lr = 0x82474870;
	sub_824884C0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,13056
	ctx.r4.s64 = ctx.r11.s64 + 13056;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8247488C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8247489c
	goto loc_8247489C;
loc_82474898:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247489C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824748A4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824748AC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824748e0
	if (ctx.cr0.eq) goto loc_824748E0;
	// bl 0x82488340
	ctx.lr = 0x824748B8;
	sub_82488340(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,12652
	ctx.r4.s64 = ctx.r11.s64 + 12652;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824748D4;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x824748e4
	goto loc_824748E4;
loc_824748E0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824748E4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824748EC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824748F4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474928
	if (ctx.cr0.eq) goto loc_82474928;
	// bl 0x82488238
	ctx.lr = 0x82474900;
	sub_82488238(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,13092
	ctx.r4.s64 = ctx.r11.s64 + 13092;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8247491C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8247492c
	goto loc_8247492C;
loc_82474928:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247492C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474934;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8247493C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474970
	if (ctx.cr0.eq) goto loc_82474970;
	// bl 0x824880b0
	ctx.lr = 0x82474948;
	sub_824880B0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,13120
	ctx.r4.s64 = ctx.r11.s64 + 13120;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474964;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474974
	goto loc_82474974;
loc_82474970:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474974:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247497C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474984;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824749b8
	if (ctx.cr0.eq) goto loc_824749B8;
	// bl 0x82487fa8
	ctx.lr = 0x82474990;
	sub_82487FA8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,13160
	ctx.r4.s64 = ctx.r11.s64 + 13160;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824749AC;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x824749bc
	goto loc_824749BC;
loc_824749B8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824749BC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824749C4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824749CC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474a00
	if (ctx.cr0.eq) goto loc_82474A00;
	// bl 0x82487ea0
	ctx.lr = 0x824749D8;
	sub_82487EA0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,13196
	ctx.r4.s64 = ctx.r11.s64 + 13196;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824749F4;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474a04
	goto loc_82474A04;
loc_82474A00:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474A04:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474A0C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474A14;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474a48
	if (ctx.cr0.eq) goto loc_82474A48;
	// bl 0x82487d40
	ctx.lr = 0x82474A20;
	sub_82487D40(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,13232
	ctx.r4.s64 = ctx.r11.s64 + 13232;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474A3C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474a4c
	goto loc_82474A4C;
loc_82474A48:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474A4C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474A54;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474A5C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474a90
	if (ctx.cr0.eq) goto loc_82474A90;
	// bl 0x82487c38
	ctx.lr = 0x82474A68;
	sub_82487C38(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,13276
	ctx.r4.s64 = ctx.r11.s64 + 13276;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474A84;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474a94
	goto loc_82474A94;
loc_82474A90:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474A94:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474A9C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474AA4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474ad8
	if (ctx.cr0.eq) goto loc_82474AD8;
	// bl 0x82487ad8
	ctx.lr = 0x82474AB0;
	sub_82487AD8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,13320
	ctx.r4.s64 = ctx.r11.s64 + 13320;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474ACC;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474adc
	goto loc_82474ADC;
loc_82474AD8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474ADC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474AE4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474AEC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474b20
	if (ctx.cr0.eq) goto loc_82474B20;
	// bl 0x82487978
	ctx.lr = 0x82474AF8;
	sub_82487978(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,13360
	ctx.r4.s64 = ctx.r11.s64 + 13360;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474B14;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474b24
	goto loc_82474B24;
loc_82474B20:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474B24:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474B2C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474B34;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474b68
	if (ctx.cr0.eq) goto loc_82474B68;
	// bl 0x824877e8
	ctx.lr = 0x82474B40;
	sub_824877E8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11340
	ctx.r4.s64 = ctx.r11.s64 + 11340;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474B5C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474b6c
	goto loc_82474B6C;
loc_82474B68:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474B6C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474B74;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474B7C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474bb0
	if (ctx.cr0.eq) goto loc_82474BB0;
	// bl 0x824876e0
	ctx.lr = 0x82474B88;
	sub_824876E0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11376
	ctx.r4.s64 = ctx.r11.s64 + 11376;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474BA4;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474bb4
	goto loc_82474BB4;
loc_82474BB0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474BB4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474BBC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474BC4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474bf8
	if (ctx.cr0.eq) goto loc_82474BF8;
	// bl 0x82487598
	ctx.lr = 0x82474BD0;
	sub_82487598(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11416
	ctx.r4.s64 = ctx.r11.s64 + 11416;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474BEC;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474bfc
	goto loc_82474BFC;
loc_82474BF8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474BFC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474C04;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474C0C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474c40
	if (ctx.cr0.eq) goto loc_82474C40;
	// bl 0x82487490
	ctx.lr = 0x82474C18;
	sub_82487490(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11452
	ctx.r4.s64 = ctx.r11.s64 + 11452;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474C34;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474c44
	goto loc_82474C44;
loc_82474C40:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474C44:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474C4C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474C54;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474c88
	if (ctx.cr0.eq) goto loc_82474C88;
	// bl 0x82487320
	ctx.lr = 0x82474C60;
	sub_82487320(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14460
	ctx.r4.s64 = ctx.r11.s64 + 14460;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474C7C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474c8c
	goto loc_82474C8C;
loc_82474C88:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474C8C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474C94;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474C9C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474cd0
	if (ctx.cr0.eq) goto loc_82474CD0;
	// bl 0x82487218
	ctx.lr = 0x82474CA8;
	sub_82487218(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14492
	ctx.r4.s64 = ctx.r11.s64 + 14492;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474CC4;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474cd4
	goto loc_82474CD4;
loc_82474CD0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474CD4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474CDC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474CE4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474d18
	if (ctx.cr0.eq) goto loc_82474D18;
	// bl 0x82487098
	ctx.lr = 0x82474CF0;
	sub_82487098(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14528
	ctx.r4.s64 = ctx.r11.s64 + 14528;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474D0C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474d1c
	goto loc_82474D1C;
loc_82474D18:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474D1C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474D24;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474D2C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474d60
	if (ctx.cr0.eq) goto loc_82474D60;
	// bl 0x82486f08
	ctx.lr = 0x82474D38;
	sub_82486F08(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14568
	ctx.r4.s64 = ctx.r11.s64 + 14568;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474D54;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474d64
	goto loc_82474D64;
loc_82474D60:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474D64:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474D6C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474D74;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474da8
	if (ctx.cr0.eq) goto loc_82474DA8;
	// bl 0x82486e00
	ctx.lr = 0x82474D80;
	sub_82486E00(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14604
	ctx.r4.s64 = ctx.r11.s64 + 14604;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474D9C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474dac
	goto loc_82474DAC;
loc_82474DA8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474DAC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474DB4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474DBC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474df0
	if (ctx.cr0.eq) goto loc_82474DF0;
	// bl 0x82486cf8
	ctx.lr = 0x82474DC8;
	sub_82486CF8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14664
	ctx.r4.s64 = ctx.r11.s64 + 14664;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474DE4;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474df4
	goto loc_82474DF4;
loc_82474DF0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474DF4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474DFC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474E04;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474e38
	if (ctx.cr0.eq) goto loc_82474E38;
	// bl 0x82486bb0
	ctx.lr = 0x82474E10;
	sub_82486BB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14280
	ctx.r4.s64 = ctx.r11.s64 + 14280;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474E2C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474e3c
	goto loc_82474E3C;
loc_82474E38:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474E3C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474E44;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474E4C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474e80
	if (ctx.cr0.eq) goto loc_82474E80;
	// bl 0x82486a48
	ctx.lr = 0x82474E58;
	sub_82486A48(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,12092
	ctx.r4.s64 = ctx.r11.s64 + 12092;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474E74;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474e84
	goto loc_82474E84;
loc_82474E80:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474E84:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474E8C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474E94;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474ec8
	if (ctx.cr0.eq) goto loc_82474EC8;
	// bl 0x824868e8
	ctx.lr = 0x82474EA0;
	sub_824868E8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,12000
	ctx.r4.s64 = ctx.r11.s64 + 12000;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474EBC;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474ecc
	goto loc_82474ECC;
loc_82474EC8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474ECC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474ED4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474EDC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474f10
	if (ctx.cr0.eq) goto loc_82474F10;
	// bl 0x82486788
	ctx.lr = 0x82474EE8;
	sub_82486788(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14384
	ctx.r4.s64 = ctx.r11.s64 + 14384;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474F04;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474f14
	goto loc_82474F14;
loc_82474F10:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474F14:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474F1C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474F24;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474f58
	if (ctx.cr0.eq) goto loc_82474F58;
	// bl 0x82486680
	ctx.lr = 0x82474F30;
	sub_82486680(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14424
	ctx.r4.s64 = ctx.r11.s64 + 14424;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474F4C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474f5c
	goto loc_82474F5C;
loc_82474F58:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474F5C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474F64;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474F6C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474fa0
	if (ctx.cr0.eq) goto loc_82474FA0;
	// bl 0x82486520
	ctx.lr = 0x82474F78;
	sub_82486520(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11872
	ctx.r4.s64 = ctx.r11.s64 + 11872;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474F94;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474fa4
	goto loc_82474FA4;
loc_82474FA0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474FA4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474FAC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474FB4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82474fe8
	if (ctx.cr0.eq) goto loc_82474FE8;
	// bl 0x82486398
	ctx.lr = 0x82474FC0;
	sub_82486398(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14636
	ctx.r4.s64 = ctx.r11.s64 + 14636;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82474FDC;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82474fec
	goto loc_82474FEC;
loc_82474FE8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82474FEC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82474FF4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82474FFC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475030
	if (ctx.cr0.eq) goto loc_82475030;
	// bl 0x82486230
	ctx.lr = 0x82475008;
	sub_82486230(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14700
	ctx.r4.s64 = ctx.r11.s64 + 14700;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82475024;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82475034
	goto loc_82475034;
loc_82475030:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475034:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247503C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82475044;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475078
	if (ctx.cr0.eq) goto loc_82475078;
	// bl 0x824860c8
	ctx.lr = 0x82475050;
	sub_824860C8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14740
	ctx.r4.s64 = ctx.r11.s64 + 14740;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8247506C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8247507c
	goto loc_8247507C;
loc_82475078:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247507C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475084;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8247508C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824750c0
	if (ctx.cr0.eq) goto loc_824750C0;
	// bl 0x82485f48
	ctx.lr = 0x82475098;
	sub_82485F48(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11680
	ctx.r4.s64 = ctx.r11.s64 + 11680;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824750B4;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x824750c4
	goto loc_824750C4;
loc_824750C0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824750C4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824750CC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824750D4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475108
	if (ctx.cr0.eq) goto loc_82475108;
	// bl 0x82485e40
	ctx.lr = 0x824750E0;
	sub_82485E40(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11556
	ctx.r4.s64 = ctx.r11.s64 + 11556;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824750FC;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8247510c
	goto loc_8247510C;
loc_82475108:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247510C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475114;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8247511C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475150
	if (ctx.cr0.eq) goto loc_82475150;
	// bl 0x82485d38
	ctx.lr = 0x82475128;
	sub_82485D38(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14312
	ctx.r4.s64 = ctx.r11.s64 + 14312;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82475144;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82475154
	goto loc_82475154;
loc_82475150:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475154:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247515C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82475164;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475198
	if (ctx.cr0.eq) goto loc_82475198;
	// bl 0x82485b90
	ctx.lr = 0x82475170;
	sub_82485B90(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11488
	ctx.r4.s64 = ctx.r11.s64 + 11488;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8247518C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8247519c
	goto loc_8247519C;
loc_82475198:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247519C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824751A4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824751AC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824751dc
	if (ctx.cr0.eq) goto loc_824751DC;
	// bl 0x8247bc50
	ctx.lr = 0x824751B8;
	sub_8247BC50(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,7476
	ctx.r4.s64 = ctx.r11.s64 + 7476;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x824751D4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824751e0
	goto loc_824751E0;
loc_824751DC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824751E0:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824751E8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824751F0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475220
	if (ctx.cr0.eq) goto loc_82475220;
	// bl 0x8247bdb0
	ctx.lr = 0x824751FC;
	sub_8247BDB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,7516
	ctx.r4.s64 = ctx.r11.s64 + 7516;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82475218;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82475224
	goto loc_82475224;
loc_82475220:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475224:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247522C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82475234;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475264
	if (ctx.cr0.eq) goto loc_82475264;
	// bl 0x8247b810
	ctx.lr = 0x82475240;
	sub_8247B810(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,7564
	ctx.r4.s64 = ctx.r11.s64 + 7564;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8247525C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82475268
	goto loc_82475268;
loc_82475264:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475268:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475270;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82475278;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824752a8
	if (ctx.cr0.eq) goto loc_824752A8;
	// bl 0x8247baf0
	ctx.lr = 0x82475284;
	sub_8247BAF0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,7600
	ctx.r4.s64 = ctx.r11.s64 + 7600;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x824752A0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824752ac
	goto loc_824752AC;
loc_824752A8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824752AC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824752B4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824752BC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824752ec
	if (ctx.cr0.eq) goto loc_824752EC;
	// bl 0x8247b970
	ctx.lr = 0x824752C8;
	sub_8247B970(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,7636
	ctx.r4.s64 = ctx.r11.s64 + 7636;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x824752E4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824752f0
	goto loc_824752F0;
loc_824752EC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824752F0:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824752F8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82475300;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475330
	if (ctx.cr0.eq) goto loc_82475330;
	// bl 0x8247bf10
	ctx.lr = 0x8247530C;
	sub_8247BF10(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,7672
	ctx.r4.s64 = ctx.r11.s64 + 7672;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82475328;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82475334
	goto loc_82475334;
loc_82475330:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475334:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247533C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82475344;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475374
	if (ctx.cr0.eq) goto loc_82475374;
	// bl 0x8247cd18
	ctx.lr = 0x82475350;
	sub_8247CD18(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,8140
	ctx.r4.s64 = ctx.r11.s64 + 8140;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8247536C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82475378
	goto loc_82475378;
loc_82475374:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475378:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475380;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82475388;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824753b8
	if (ctx.cr0.eq) goto loc_824753B8;
	// bl 0x8247c018
	ctx.lr = 0x82475394;
	sub_8247C018(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,7712
	ctx.r4.s64 = ctx.r11.s64 + 7712;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x824753B0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824753bc
	goto loc_824753BC;
loc_824753B8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824753BC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824753C4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824753CC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824753fc
	if (ctx.cr0.eq) goto loc_824753FC;
	// bl 0x8247c178
	ctx.lr = 0x824753D8;
	sub_8247C178(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,7736
	ctx.r4.s64 = ctx.r11.s64 + 7736;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x824753F4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82475400
	goto loc_82475400;
loc_824753FC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475400:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475408;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82475410;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475440
	if (ctx.cr0.eq) goto loc_82475440;
	// bl 0x8247c2f8
	ctx.lr = 0x8247541C;
	sub_8247C2F8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,7772
	ctx.r4.s64 = ctx.r11.s64 + 7772;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82475438;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82475444
	goto loc_82475444;
loc_82475440:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475444:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247544C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82475454;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475484
	if (ctx.cr0.eq) goto loc_82475484;
	// bl 0x8247c400
	ctx.lr = 0x82475460;
	sub_8247C400(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,7808
	ctx.r4.s64 = ctx.r11.s64 + 7808;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8247547C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82475488
	goto loc_82475488;
loc_82475484:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475488:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475490;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82475498;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824754c8
	if (ctx.cr0.eq) goto loc_824754C8;
	// bl 0x8247c580
	ctx.lr = 0x824754A4;
	sub_8247C580(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,7832
	ctx.r4.s64 = ctx.r11.s64 + 7832;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x824754C0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824754cc
	goto loc_824754CC;
loc_824754C8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824754CC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824754D4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824754DC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247550c
	if (ctx.cr0.eq) goto loc_8247550C;
	// bl 0x8247c700
	ctx.lr = 0x824754E8;
	sub_8247C700(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,7864
	ctx.r4.s64 = ctx.r11.s64 + 7864;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82475504;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82475510
	goto loc_82475510;
loc_8247550C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475510:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475518;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82475520;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475550
	if (ctx.cr0.eq) goto loc_82475550;
	// bl 0x8247c8b8
	ctx.lr = 0x8247552C;
	sub_8247C8B8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82475548;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82475554
	goto loc_82475554;
loc_82475550:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475554:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247555C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82475564;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475594
	if (ctx.cr0.eq) goto loc_82475594;
	// bl 0x8247ca38
	ctx.lr = 0x82475570;
	sub_8247CA38(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,7928
	ctx.r4.s64 = ctx.r11.s64 + 7928;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8247558C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82475598
	goto loc_82475598;
loc_82475594:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475598:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824755A0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824755A8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824755d8
	if (ctx.cr0.eq) goto loc_824755D8;
	// bl 0x8247cbb8
	ctx.lr = 0x824755B4;
	sub_8247CBB8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,7956
	ctx.r4.s64 = ctx.r11.s64 + 7956;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x824755D0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824755dc
	goto loc_824755DC;
loc_824755D8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824755DC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824755E4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824755EC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247561c
	if (ctx.cr0.eq) goto loc_8247561C;
	// bl 0x8247ce58
	ctx.lr = 0x824755F8;
	sub_8247CE58(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,7984
	ctx.r4.s64 = ctx.r11.s64 + 7984;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82475614;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82475620
	goto loc_82475620;
loc_8247561C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475620:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475628;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82475630;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475660
	if (ctx.cr0.eq) goto loc_82475660;
	// bl 0x8247cfb8
	ctx.lr = 0x8247563C;
	sub_8247CFB8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,8016
	ctx.r4.s64 = ctx.r11.s64 + 8016;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82475658;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82475664
	goto loc_82475664;
loc_82475660:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475664:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247566C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82475674;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824756a4
	if (ctx.cr0.eq) goto loc_824756A4;
	// bl 0x8247d118
	ctx.lr = 0x82475680;
	sub_8247D118(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,8060
	ctx.r4.s64 = ctx.r11.s64 + 8060;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8247569C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824756a8
	goto loc_824756A8;
loc_824756A4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824756A8:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824756B0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824756B8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824756e8
	if (ctx.cr0.eq) goto loc_824756E8;
	// bl 0x8247d278
	ctx.lr = 0x824756C4;
	sub_8247D278(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,8100
	ctx.r4.s64 = ctx.r11.s64 + 8100;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x824756E0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824756ec
	goto loc_824756EC;
loc_824756E8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824756EC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824756F4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824756FC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475734
	if (ctx.cr0.eq) goto loc_82475734;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,21436
	ctx.r4.s64 = ctx.r11.s64 + 21436;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82475720;
	sub_82847920(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,29084
	ctx.r11.s64 = ctx.r11.s64 + 29084;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82475738
	goto loc_82475738;
loc_82475734:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475738:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475740;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82475748;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475780
	if (ctx.cr0.eq) goto loc_82475780;
	// bl 0x82479630
	ctx.lr = 0x82475754;
	sub_82479630(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14068
	ctx.r4.s64 = ctx.r11.s64 + 14068;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82475770;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r28,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r28.u32);
	// b 0x82475784
	goto loc_82475784;
loc_82475780:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475784:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247578C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82475794;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824757cc
	if (ctx.cr0.eq) goto loc_824757CC;
	// bl 0x824794b8
	ctx.lr = 0x824757A0;
	sub_824794B8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14100
	ctx.r4.s64 = ctx.r11.s64 + 14100;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824757BC;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r28,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r28.u32);
	// b 0x824757d0
	goto loc_824757D0;
loc_824757CC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824757D0:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824757D8;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824757E0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475818
	if (ctx.cr0.eq) goto loc_82475818;
	// bl 0x824797c0
	ctx.lr = 0x824757EC;
	sub_824797C0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14136
	ctx.r4.s64 = ctx.r11.s64 + 14136;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82475808;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r28,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r28.u32);
	// b 0x8247581c
	goto loc_8247581C;
loc_82475818:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247581C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475824;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8247582C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475864
	if (ctx.cr0.eq) goto loc_82475864;
	// bl 0x82479940
	ctx.lr = 0x82475838;
	sub_82479940(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14168
	ctx.r4.s64 = ctx.r11.s64 + 14168;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82475854;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r28,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r28.u32);
	// b 0x82475868
	goto loc_82475868;
loc_82475864:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475868:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475870;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82475878;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824758b0
	if (ctx.cr0.eq) goto loc_824758B0;
	// bl 0x82479ac0
	ctx.lr = 0x82475884;
	sub_82479AC0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14200
	ctx.r4.s64 = ctx.r11.s64 + 14200;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824758A0;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r28,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r28.u32);
	// b 0x824758b4
	goto loc_824758B4;
loc_824758B0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824758B4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824758BC;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824758C4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r30,4
	ctx.r30.s64 = 4;
	// beq 0x82475900
	if (ctx.cr0.eq) goto loc_82475900;
	// bl 0x823b31e8
	ctx.lr = 0x824758D4;
	sub_823B31E8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,10952
	ctx.r4.s64 = ctx.r11.s64 + 10952;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824758F0;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82475904
	goto loc_82475904;
loc_82475900:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475904:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247590C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82475914;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247594c
	if (ctx.cr0.eq) goto loc_8247594C;
	// bl 0x823b3368
	ctx.lr = 0x82475920;
	sub_823B3368(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,21468
	ctx.r4.s64 = ctx.r11.s64 + 21468;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8247593C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82475950
	goto loc_82475950;
loc_8247594C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475950:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475958;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82475960;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475998
	if (ctx.cr0.eq) goto loc_82475998;
	// bl 0x823b3808
	ctx.lr = 0x8247596C;
	sub_823B3808(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,21508
	ctx.r4.s64 = ctx.r11.s64 + 21508;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82475988;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x8247599c
	goto loc_8247599C;
loc_82475998:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247599C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824759A4;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824759AC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824759e4
	if (ctx.cr0.eq) goto loc_824759E4;
	// bl 0x823b3f40
	ctx.lr = 0x824759B8;
	sub_823B3F40(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11060
	ctx.r4.s64 = ctx.r11.s64 + 11060;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824759D4;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x824759e8
	goto loc_824759E8;
loc_824759E4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824759E8:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824759F0;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824759F8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475a30
	if (ctx.cr0.eq) goto loc_82475A30;
	// bl 0x823b41d8
	ctx.lr = 0x82475A04;
	sub_823B41D8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11088
	ctx.r4.s64 = ctx.r11.s64 + 11088;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82475A20;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82475a34
	goto loc_82475A34;
loc_82475A30:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475A34:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475A3C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82475A44;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475a7c
	if (ctx.cr0.eq) goto loc_82475A7C;
	// bl 0x823b4478
	ctx.lr = 0x82475A50;
	sub_823B4478(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11120
	ctx.r4.s64 = ctx.r11.s64 + 11120;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82475A6C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82475a80
	goto loc_82475A80;
loc_82475A7C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475A80:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475A88;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82475A90;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475ac8
	if (ctx.cr0.eq) goto loc_82475AC8;
	// bl 0x8239fb50
	ctx.lr = 0x82475A9C;
	sub_8239FB50(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9356
	ctx.r4.s64 = ctx.r11.s64 + 9356;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82475AB8;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82475acc
	goto loc_82475ACC;
loc_82475AC8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475ACC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475AD4;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82475ADC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475b14
	if (ctx.cr0.eq) goto loc_82475B14;
	// bl 0x823aee10
	ctx.lr = 0x82475AE8;
	sub_823AEE10(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9864
	ctx.r4.s64 = ctx.r11.s64 + 9864;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82475B04;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82475b18
	goto loc_82475B18;
loc_82475B14:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475B18:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475B20;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82475B28;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475b60
	if (ctx.cr0.eq) goto loc_82475B60;
	// bl 0x823af4f0
	ctx.lr = 0x82475B34;
	sub_823AF4F0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9896
	ctx.r4.s64 = ctx.r11.s64 + 9896;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82475B50;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82475b64
	goto loc_82475B64;
loc_82475B60:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475B64:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475B6C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82475B74;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475bac
	if (ctx.cr0.eq) goto loc_82475BAC;
	// bl 0x823afba8
	ctx.lr = 0x82475B80;
	sub_823AFBA8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9928
	ctx.r4.s64 = ctx.r11.s64 + 9928;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82475B9C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82475bb0
	goto loc_82475BB0;
loc_82475BAC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475BB0:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475BB8;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82475BC0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475bf8
	if (ctx.cr0.eq) goto loc_82475BF8;
	// bl 0x823b00f0
	ctx.lr = 0x82475BCC;
	sub_823B00F0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9960
	ctx.r4.s64 = ctx.r11.s64 + 9960;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82475BE8;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82475bfc
	goto loc_82475BFC;
loc_82475BF8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475BFC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475C04;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82475C0C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475c44
	if (ctx.cr0.eq) goto loc_82475C44;
	// bl 0x823a4708
	ctx.lr = 0x82475C18;
	sub_823A4708(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,8268
	ctx.r4.s64 = ctx.r11.s64 + 8268;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82475C34;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82475c48
	goto loc_82475C48;
loc_82475C44:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475C48:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475C50;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82475C58;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475c90
	if (ctx.cr0.eq) goto loc_82475C90;
	// bl 0x823a49a0
	ctx.lr = 0x82475C64;
	sub_823A49A0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,8364
	ctx.r4.s64 = ctx.r11.s64 + 8364;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82475C80;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82475c94
	goto loc_82475C94;
loc_82475C90:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475C94:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475C9C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82475CA4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475cdc
	if (ctx.cr0.eq) goto loc_82475CDC;
	// bl 0x823a4ee8
	ctx.lr = 0x82475CB0;
	sub_823A4EE8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,8300
	ctx.r4.s64 = ctx.r11.s64 + 8300;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82475CCC;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82475ce0
	goto loc_82475CE0;
loc_82475CDC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475CE0:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475CE8;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82475CF0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475d28
	if (ctx.cr0.eq) goto loc_82475D28;
	// bl 0x823a5430
	ctx.lr = 0x82475CFC;
	sub_823A5430(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,8332
	ctx.r4.s64 = ctx.r11.s64 + 8332;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82475D18;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82475d2c
	goto loc_82475D2C;
loc_82475D28:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475D2C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475D34;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82475D3C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475d74
	if (ctx.cr0.eq) goto loc_82475D74;
	// bl 0x823a1238
	ctx.lr = 0x82475D48;
	sub_823A1238(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9384
	ctx.r4.s64 = ctx.r11.s64 + 9384;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82475D64;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82475d78
	goto loc_82475D78;
loc_82475D74:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475D78:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475D80;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82475D88;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475dc0
	if (ctx.cr0.eq) goto loc_82475DC0;
	// bl 0x823a1a18
	ctx.lr = 0x82475D94;
	sub_823A1A18(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9416
	ctx.r4.s64 = ctx.r11.s64 + 9416;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82475DB0;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82475dc4
	goto loc_82475DC4;
loc_82475DC0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475DC4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475DCC;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82475DD4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475e0c
	if (ctx.cr0.eq) goto loc_82475E0C;
	// bl 0x82479080
	ctx.lr = 0x82475DE0;
	sub_82479080(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9120
	ctx.r4.s64 = ctx.r11.s64 + 9120;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82475DFC;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82475e10
	goto loc_82475E10;
loc_82475E0C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475E10:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475E18;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82475E20;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475e58
	if (ctx.cr0.eq) goto loc_82475E58;
	// bl 0x8239b148
	ctx.lr = 0x82475E2C;
	sub_8239B148(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9172
	ctx.r4.s64 = ctx.r11.s64 + 9172;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82475E48;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82475e5c
	goto loc_82475E5C;
loc_82475E58:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475E5C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475E64;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82475E6C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475ea4
	if (ctx.cr0.eq) goto loc_82475EA4;
	// bl 0x8239b2d8
	ctx.lr = 0x82475E78;
	sub_8239B2D8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9200
	ctx.r4.s64 = ctx.r11.s64 + 9200;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82475E94;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82475ea8
	goto loc_82475EA8;
loc_82475EA4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475EA8:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475EB0;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82475EB8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475ef0
	if (ctx.cr0.eq) goto loc_82475EF0;
	// bl 0x8239bb58
	ctx.lr = 0x82475EC4;
	sub_8239BB58(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9228
	ctx.r4.s64 = ctx.r11.s64 + 9228;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82475EE0;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82475ef4
	goto loc_82475EF4;
loc_82475EF0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475EF4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475EFC;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82475F04;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475f3c
	if (ctx.cr0.eq) goto loc_82475F3C;
	// bl 0x8239b860
	ctx.lr = 0x82475F10;
	sub_8239B860(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9252
	ctx.r4.s64 = ctx.r11.s64 + 9252;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82475F2C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82475f40
	goto loc_82475F40;
loc_82475F3C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475F40:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475F48;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82475F50;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475f88
	if (ctx.cr0.eq) goto loc_82475F88;
	// bl 0x823c7c60
	ctx.lr = 0x82475F5C;
	sub_823C7C60(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9144
	ctx.r4.s64 = ctx.r11.s64 + 9144;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82475F78;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82475f8c
	goto loc_82475F8C;
loc_82475F88:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475F8C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475F94;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82475F9C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82475fd4
	if (ctx.cr0.eq) goto loc_82475FD4;
	// bl 0x8239c3a8
	ctx.lr = 0x82475FA8;
	sub_8239C3A8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,8192
	ctx.r4.s64 = ctx.r11.s64 + 8192;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82475FC4;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82475fd8
	goto loc_82475FD8;
loc_82475FD4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82475FD8:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82475FE0;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82475FE8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476020
	if (ctx.cr0.eq) goto loc_82476020;
	// bl 0x8239c4e8
	ctx.lr = 0x82475FF4;
	sub_8239C4E8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9280
	ctx.r4.s64 = ctx.r11.s64 + 9280;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476010;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476024
	goto loc_82476024;
loc_82476020:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476024:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247602C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476034;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247606c
	if (ctx.cr0.eq) goto loc_8247606C;
	// bl 0x823c7b20
	ctx.lr = 0x82476040;
	sub_823C7B20(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9304
	ctx.r4.s64 = ctx.r11.s64 + 9304;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8247605C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476070
	goto loc_82476070;
loc_8247606C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476070:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476078;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476080;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824760b8
	if (ctx.cr0.eq) goto loc_824760B8;
	// bl 0x823a8540
	ctx.lr = 0x8247608C;
	sub_823A8540(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,17160
	ctx.r4.s64 = ctx.r11.s64 + 17160;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824760A8;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x824760bc
	goto loc_824760BC;
loc_824760B8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824760BC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824760C4;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824760CC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476104
	if (ctx.cr0.eq) goto loc_82476104;
	// bl 0x823a86e8
	ctx.lr = 0x824760D8;
	sub_823A86E8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,17188
	ctx.r4.s64 = ctx.r11.s64 + 17188;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824760F4;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476108
	goto loc_82476108;
loc_82476104:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476108:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476110;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476118;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476150
	if (ctx.cr0.eq) goto loc_82476150;
	// bl 0x823a8890
	ctx.lr = 0x82476124;
	sub_823A8890(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,17228
	ctx.r4.s64 = ctx.r11.s64 + 17228;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476140;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476154
	goto loc_82476154;
loc_82476150:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476154:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247615C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476164;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247619c
	if (ctx.cr0.eq) goto loc_8247619C;
	// bl 0x8247a928
	ctx.lr = 0x82476170;
	sub_8247A928(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,17268
	ctx.r4.s64 = ctx.r11.s64 + 17268;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8247618C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x824761a0
	goto loc_824761A0;
loc_8247619C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824761A0:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824761A8;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824761B0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824761e8
	if (ctx.cr0.eq) goto loc_824761E8;
	// bl 0x823a8a38
	ctx.lr = 0x824761BC;
	sub_823A8A38(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,17304
	ctx.r4.s64 = ctx.r11.s64 + 17304;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824761D8;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x824761ec
	goto loc_824761EC;
loc_824761E8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824761EC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824761F4;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824761FC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476234
	if (ctx.cr0.eq) goto loc_82476234;
	// bl 0x823a8be0
	ctx.lr = 0x82476208;
	sub_823A8BE0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,17336
	ctx.r4.s64 = ctx.r11.s64 + 17336;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476224;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476238
	goto loc_82476238;
loc_82476234:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476238:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476240;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476248;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476280
	if (ctx.cr0.eq) goto loc_82476280;
	// bl 0x823a8d88
	ctx.lr = 0x82476254;
	sub_823A8D88(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,17368
	ctx.r4.s64 = ctx.r11.s64 + 17368;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476270;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476284
	goto loc_82476284;
loc_82476280:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476284:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247628C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476294;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824762cc
	if (ctx.cr0.eq) goto loc_824762CC;
	// bl 0x823a8f30
	ctx.lr = 0x824762A0;
	sub_823A8F30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,17400
	ctx.r4.s64 = ctx.r11.s64 + 17400;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824762BC;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x824762d0
	goto loc_824762D0;
loc_824762CC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824762D0:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824762D8;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824762E0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476318
	if (ctx.cr0.eq) goto loc_82476318;
	// bl 0x823a90d8
	ctx.lr = 0x824762EC;
	sub_823A90D8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,17436
	ctx.r4.s64 = ctx.r11.s64 + 17436;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476308;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x8247631c
	goto loc_8247631C;
loc_82476318:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247631C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476324;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8247632C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476364
	if (ctx.cr0.eq) goto loc_82476364;
	// bl 0x823a9280
	ctx.lr = 0x82476338;
	sub_823A9280(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,17472
	ctx.r4.s64 = ctx.r11.s64 + 17472;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476354;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476368
	goto loc_82476368;
loc_82476364:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476368:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476370;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476378;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824763b0
	if (ctx.cr0.eq) goto loc_824763B0;
	// bl 0x823a9428
	ctx.lr = 0x82476384;
	sub_823A9428(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,17536
	ctx.r4.s64 = ctx.r11.s64 + 17536;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824763A0;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x824763b4
	goto loc_824763B4;
loc_824763B0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824763B4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824763BC;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824763C4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824763fc
	if (ctx.cr0.eq) goto loc_824763FC;
	// bl 0x823a95e0
	ctx.lr = 0x824763D0;
	sub_823A95E0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,17568
	ctx.r4.s64 = ctx.r11.s64 + 17568;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824763EC;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476400
	goto loc_82476400;
loc_824763FC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476400:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476408;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476410;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476448
	if (ctx.cr0.eq) goto loc_82476448;
	// bl 0x823a9798
	ctx.lr = 0x8247641C;
	sub_823A9798(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,17600
	ctx.r4.s64 = ctx.r11.s64 + 17600;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476438;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x8247644c
	goto loc_8247644C;
loc_82476448:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247644C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476454;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8247645C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476494
	if (ctx.cr0.eq) goto loc_82476494;
	// bl 0x823a9930
	ctx.lr = 0x82476468;
	sub_823A9930(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,17504
	ctx.r4.s64 = ctx.r11.s64 + 17504;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476484;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476498
	goto loc_82476498;
loc_82476494:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476498:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824764A0;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824764A8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824764e0
	if (ctx.cr0.eq) goto loc_824764E0;
	// bl 0x823a9ac8
	ctx.lr = 0x824764B4;
	sub_823A9AC8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,17632
	ctx.r4.s64 = ctx.r11.s64 + 17632;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824764D0;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x824764e4
	goto loc_824764E4;
loc_824764E0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824764E4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824764EC;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824764F4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247652c
	if (ctx.cr0.eq) goto loc_8247652C;
	// bl 0x823a9c60
	ctx.lr = 0x82476500;
	sub_823A9C60(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,17664
	ctx.r4.s64 = ctx.r11.s64 + 17664;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8247651C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476530
	goto loc_82476530;
loc_8247652C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476530:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476538;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476540;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476578
	if (ctx.cr0.eq) goto loc_82476578;
	// bl 0x823a2830
	ctx.lr = 0x8247654C;
	sub_823A2830(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9472
	ctx.r4.s64 = ctx.r11.s64 + 9472;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476568;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x8247657c
	goto loc_8247657C;
loc_82476578:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247657C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476584;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8247658C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824765c4
	if (ctx.cr0.eq) goto loc_824765C4;
	// bl 0x823a2e38
	ctx.lr = 0x82476598;
	sub_823A2E38(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9508
	ctx.r4.s64 = ctx.r11.s64 + 9508;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824765B4;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x824765c8
	goto loc_824765C8;
loc_824765C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824765C8:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824765D0;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824765D8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476610
	if (ctx.cr0.eq) goto loc_82476610;
	// bl 0x823a2fd0
	ctx.lr = 0x824765E4;
	sub_823A2FD0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9548
	ctx.r4.s64 = ctx.r11.s64 + 9548;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476600;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476614
	goto loc_82476614;
loc_82476610:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476614:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247661C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476624;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247665c
	if (ctx.cr0.eq) goto loc_8247665C;
	// bl 0x823a3148
	ctx.lr = 0x82476630;
	sub_823A3148(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9584
	ctx.r4.s64 = ctx.r11.s64 + 9584;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8247664C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476660
	goto loc_82476660;
loc_8247665C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476660:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476668;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476670;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824766a8
	if (ctx.cr0.eq) goto loc_824766A8;
	// bl 0x823a32e0
	ctx.lr = 0x8247667C;
	sub_823A32E0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9624
	ctx.r4.s64 = ctx.r11.s64 + 9624;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476698;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x824766ac
	goto loc_824766AC;
loc_824766A8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824766AC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824766B4;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824766BC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824766f4
	if (ctx.cr0.eq) goto loc_824766F4;
	// bl 0x823a3a78
	ctx.lr = 0x824766C8;
	sub_823A3A78(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9664
	ctx.r4.s64 = ctx.r11.s64 + 9664;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824766E4;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x824766f8
	goto loc_824766F8;
loc_824766F4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824766F8:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476700;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476708;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476740
	if (ctx.cr0.eq) goto loc_82476740;
	// bl 0x823a3c10
	ctx.lr = 0x82476714;
	sub_823A3C10(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9704
	ctx.r4.s64 = ctx.r11.s64 + 9704;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476730;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476744
	goto loc_82476744;
loc_82476740:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476744:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247674C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476754;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247678c
	if (ctx.cr0.eq) goto loc_8247678C;
	// bl 0x823a3d90
	ctx.lr = 0x82476760;
	sub_823A3D90(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9740
	ctx.r4.s64 = ctx.r11.s64 + 9740;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x8247677C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476790
	goto loc_82476790;
loc_8247678C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476790:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476798;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824767A0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824767d8
	if (ctx.cr0.eq) goto loc_824767D8;
	// bl 0x823a3f10
	ctx.lr = 0x824767AC;
	sub_823A3F10(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9784
	ctx.r4.s64 = ctx.r11.s64 + 9784;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824767C8;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x824767dc
	goto loc_824767DC;
loc_824767D8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824767DC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824767E4;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824767EC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476824
	if (ctx.cr0.eq) goto loc_82476824;
	// bl 0x823a3460
	ctx.lr = 0x824767F8;
	sub_823A3460(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9824
	ctx.r4.s64 = ctx.r11.s64 + 9824;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476814;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476828
	goto loc_82476828;
loc_82476824:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476828:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476830;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476838;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476870
	if (ctx.cr0.eq) goto loc_82476870;
	// bl 0x823b0678
	ctx.lr = 0x82476844;
	sub_823B0678(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9988
	ctx.r4.s64 = ctx.r11.s64 + 9988;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476860;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476874
	goto loc_82476874;
loc_82476870:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476874:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247687C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476884;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824768bc
	if (ctx.cr0.eq) goto loc_824768BC;
	// bl 0x823b07f0
	ctx.lr = 0x82476890;
	sub_823B07F0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,10032
	ctx.r4.s64 = ctx.r11.s64 + 10032;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824768AC;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x824768c0
	goto loc_824768C0;
loc_824768BC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824768C0:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824768C8;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824768D0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476908
	if (ctx.cr0.eq) goto loc_82476908;
	// bl 0x823b0968
	ctx.lr = 0x824768DC;
	sub_823B0968(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,10076
	ctx.r4.s64 = ctx.r11.s64 + 10076;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824768F8;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x8247690c
	goto loc_8247690C;
loc_82476908:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247690C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476914;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8247691C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476954
	if (ctx.cr0.eq) goto loc_82476954;
	// bl 0x823b0ae0
	ctx.lr = 0x82476928;
	sub_823B0AE0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,10120
	ctx.r4.s64 = ctx.r11.s64 + 10120;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476944;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476958
	goto loc_82476958;
loc_82476954:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476958:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476960;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476968;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824769a0
	if (ctx.cr0.eq) goto loc_824769A0;
	// bl 0x823b0c60
	ctx.lr = 0x82476974;
	sub_823B0C60(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,10172
	ctx.r4.s64 = ctx.r11.s64 + 10172;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476990;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x824769a4
	goto loc_824769A4;
loc_824769A0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824769A4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824769AC;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824769B4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824769ec
	if (ctx.cr0.eq) goto loc_824769EC;
	// bl 0x823b0dd8
	ctx.lr = 0x824769C0;
	sub_823B0DD8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,10220
	ctx.r4.s64 = ctx.r11.s64 + 10220;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x824769DC;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x824769f0
	goto loc_824769F0;
loc_824769EC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824769F0:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824769F8;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476A00;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476a38
	if (ctx.cr0.eq) goto loc_82476A38;
	// bl 0x823b13d0
	ctx.lr = 0x82476A0C;
	sub_823B13D0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,10264
	ctx.r4.s64 = ctx.r11.s64 + 10264;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476A28;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476a3c
	goto loc_82476A3C;
loc_82476A38:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476A3C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476A44;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476A4C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476a84
	if (ctx.cr0.eq) goto loc_82476A84;
	// bl 0x823b1570
	ctx.lr = 0x82476A58;
	sub_823B1570(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,10300
	ctx.r4.s64 = ctx.r11.s64 + 10300;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476A74;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476a88
	goto loc_82476A88;
loc_82476A84:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476A88:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476A90;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476A98;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476ad0
	if (ctx.cr0.eq) goto loc_82476AD0;
	// bl 0x823b16e8
	ctx.lr = 0x82476AA4;
	sub_823B16E8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,10340
	ctx.r4.s64 = ctx.r11.s64 + 10340;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476AC0;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476ad4
	goto loc_82476AD4;
loc_82476AD0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476AD4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476ADC;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476AE4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476b1c
	if (ctx.cr0.eq) goto loc_82476B1C;
	// bl 0x823b1870
	ctx.lr = 0x82476AF0;
	sub_823B1870(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,10376
	ctx.r4.s64 = ctx.r11.s64 + 10376;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476B0C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476b20
	goto loc_82476B20;
loc_82476B1C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476B20:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476B28;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476B30;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476b68
	if (ctx.cr0.eq) goto loc_82476B68;
	// bl 0x823b19f8
	ctx.lr = 0x82476B3C;
	sub_823B19F8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,10420
	ctx.r4.s64 = ctx.r11.s64 + 10420;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476B58;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476b6c
	goto loc_82476B6C;
loc_82476B68:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476B6C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476B74;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476B7C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476bb4
	if (ctx.cr0.eq) goto loc_82476BB4;
	// bl 0x823b1b80
	ctx.lr = 0x82476B88;
	sub_823B1B80(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,10468
	ctx.r4.s64 = ctx.r11.s64 + 10468;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476BA4;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476bb8
	goto loc_82476BB8;
loc_82476BB4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476BB8:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476BC0;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476BC8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476c00
	if (ctx.cr0.eq) goto loc_82476C00;
	// bl 0x823b1d10
	ctx.lr = 0x82476BD4;
	sub_823B1D10(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,10516
	ctx.r4.s64 = ctx.r11.s64 + 10516;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476BF0;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476c04
	goto loc_82476C04;
loc_82476C00:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476C04:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476C0C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476C14;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476c4c
	if (ctx.cr0.eq) goto loc_82476C4C;
	// bl 0x823b1e88
	ctx.lr = 0x82476C20;
	sub_823B1E88(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,10564
	ctx.r4.s64 = ctx.r11.s64 + 10564;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476C3C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476c50
	goto loc_82476C50;
loc_82476C4C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476C50:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476C58;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476C60;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476c98
	if (ctx.cr0.eq) goto loc_82476C98;
	// bl 0x824791f8
	ctx.lr = 0x82476C6C;
	sub_824791F8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,10600
	ctx.r4.s64 = ctx.r11.s64 + 10600;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476C88;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476c9c
	goto loc_82476C9C;
loc_82476C98:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476C9C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476CA4;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476CAC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476ce4
	if (ctx.cr0.eq) goto loc_82476CE4;
	// bl 0x823b2000
	ctx.lr = 0x82476CB8;
	sub_823B2000(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,10636
	ctx.r4.s64 = ctx.r11.s64 + 10636;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476CD4;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476ce8
	goto loc_82476CE8;
loc_82476CE4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476CE8:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476CF0;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476CF8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476d30
	if (ctx.cr0.eq) goto loc_82476D30;
	// bl 0x823b2188
	ctx.lr = 0x82476D04;
	sub_823B2188(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,10676
	ctx.r4.s64 = ctx.r11.s64 + 10676;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476D20;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476d34
	goto loc_82476D34;
loc_82476D30:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476D34:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476D3C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476D44;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476d7c
	if (ctx.cr0.eq) goto loc_82476D7C;
	// bl 0x823b2310
	ctx.lr = 0x82476D50;
	sub_823B2310(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,10716
	ctx.r4.s64 = ctx.r11.s64 + 10716;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476D6C;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476d80
	goto loc_82476D80;
loc_82476D7C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476D80:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476D88;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476D90;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476dc8
	if (ctx.cr0.eq) goto loc_82476DC8;
	// bl 0x823b2968
	ctx.lr = 0x82476D9C;
	sub_823B2968(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,10756
	ctx.r4.s64 = ctx.r11.s64 + 10756;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476DB8;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476dcc
	goto loc_82476DCC;
loc_82476DC8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476DCC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476DD4;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476DDC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476e14
	if (ctx.cr0.eq) goto loc_82476E14;
	// bl 0x823b2af0
	ctx.lr = 0x82476DE8;
	sub_823B2AF0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,10796
	ctx.r4.s64 = ctx.r11.s64 + 10796;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476E04;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476e18
	goto loc_82476E18;
loc_82476E14:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476E18:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476E20;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476E28;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476e60
	if (ctx.cr0.eq) goto loc_82476E60;
	// bl 0x823b2c78
	ctx.lr = 0x82476E34;
	sub_823B2C78(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,10840
	ctx.r4.s64 = ctx.r11.s64 + 10840;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82476E50;
	sub_82847920(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// b 0x82476e64
	goto loc_82476E64;
loc_82476E60:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476E64:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476E6C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476E74;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476ea4
	if (ctx.cr0.eq) goto loc_82476EA4;
	// bl 0x823b2e08
	ctx.lr = 0x82476E80;
	sub_823B2E08(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,10884
	ctx.r4.s64 = ctx.r11.s64 + 10884;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x8286b380
	ctx.lr = 0x82476E9C;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82476ea8
	goto loc_82476EA8;
loc_82476EA4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476EA8:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476EB0;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476EB8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476ee8
	if (ctx.cr0.eq) goto loc_82476EE8;
	// bl 0x823a6010
	ctx.lr = 0x82476EC4;
	sub_823A6010(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,8396
	ctx.r4.s64 = ctx.r11.s64 + 8396;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x8286b380
	ctx.lr = 0x82476EE0;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82476eec
	goto loc_82476EEC;
loc_82476EE8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476EEC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476EF4;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476EFC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476f2c
	if (ctx.cr0.eq) goto loc_82476F2C;
	// bl 0x823a6190
	ctx.lr = 0x82476F08;
	sub_823A6190(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,8440
	ctx.r4.s64 = ctx.r11.s64 + 8440;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x8286b380
	ctx.lr = 0x82476F24;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82476f30
	goto loc_82476F30;
loc_82476F2C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476F30:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476F38;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476F40;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476f70
	if (ctx.cr0.eq) goto loc_82476F70;
	// bl 0x823a6318
	ctx.lr = 0x82476F4C;
	sub_823A6318(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,8484
	ctx.r4.s64 = ctx.r11.s64 + 8484;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x8286b380
	ctx.lr = 0x82476F68;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82476f74
	goto loc_82476F74;
loc_82476F70:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476F74:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476F7C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476F84;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476fb4
	if (ctx.cr0.eq) goto loc_82476FB4;
	// bl 0x823a6490
	ctx.lr = 0x82476F90;
	sub_823A6490(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,8528
	ctx.r4.s64 = ctx.r11.s64 + 8528;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x8286b380
	ctx.lr = 0x82476FAC;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82476fb8
	goto loc_82476FB8;
loc_82476FB4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476FB8:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82476FC0;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82476FC8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82476ff8
	if (ctx.cr0.eq) goto loc_82476FF8;
	// bl 0x823a6608
	ctx.lr = 0x82476FD4;
	sub_823A6608(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,8576
	ctx.r4.s64 = ctx.r11.s64 + 8576;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x8286b380
	ctx.lr = 0x82476FF0;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82476ffc
	goto loc_82476FFC;
loc_82476FF8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82476FFC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477004;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8247700C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247703c
	if (ctx.cr0.eq) goto loc_8247703C;
	// bl 0x823a6780
	ctx.lr = 0x82477018;
	sub_823A6780(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,8616
	ctx.r4.s64 = ctx.r11.s64 + 8616;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x8286b380
	ctx.lr = 0x82477034;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477040
	goto loc_82477040;
loc_8247703C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477040:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477048;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477050;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477080
	if (ctx.cr0.eq) goto loc_82477080;
	// bl 0x823a7520
	ctx.lr = 0x8247705C;
	sub_823A7520(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,8656
	ctx.r4.s64 = ctx.r11.s64 + 8656;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x8286b380
	ctx.lr = 0x82477078;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477084
	goto loc_82477084;
loc_82477080:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477084:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247708C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477094;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824770c4
	if (ctx.cr0.eq) goto loc_824770C4;
	// bl 0x823a7698
	ctx.lr = 0x824770A0;
	sub_823A7698(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,8704
	ctx.r4.s64 = ctx.r11.s64 + 8704;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x8286b380
	ctx.lr = 0x824770BC;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824770c8
	goto loc_824770C8;
loc_824770C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824770C8:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824770D0;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824770D8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477108
	if (ctx.cr0.eq) goto loc_82477108;
	// bl 0x823a7810
	ctx.lr = 0x824770E4;
	sub_823A7810(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,8748
	ctx.r4.s64 = ctx.r11.s64 + 8748;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x8286b380
	ctx.lr = 0x82477100;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8247710c
	goto loc_8247710C;
loc_82477108:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247710C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477114;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8247711C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247714c
	if (ctx.cr0.eq) goto loc_8247714C;
	// bl 0x823a6a88
	ctx.lr = 0x82477128;
	sub_823A6A88(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,8792
	ctx.r4.s64 = ctx.r11.s64 + 8792;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x8286b380
	ctx.lr = 0x82477144;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477150
	goto loc_82477150;
loc_8247714C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477150:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477158;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477160;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477190
	if (ctx.cr0.eq) goto loc_82477190;
	// bl 0x823a6c08
	ctx.lr = 0x8247716C;
	sub_823A6C08(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,8836
	ctx.r4.s64 = ctx.r11.s64 + 8836;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x8286b380
	ctx.lr = 0x82477188;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477194
	goto loc_82477194;
loc_82477190:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477194:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247719C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824771A4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824771d4
	if (ctx.cr0.eq) goto loc_824771D4;
	// bl 0x823a6d88
	ctx.lr = 0x824771B0;
	sub_823A6D88(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,8880
	ctx.r4.s64 = ctx.r11.s64 + 8880;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x8286b380
	ctx.lr = 0x824771CC;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824771d8
	goto loc_824771D8;
loc_824771D4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824771D8:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824771E0;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824771E8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477218
	if (ctx.cr0.eq) goto loc_82477218;
	// bl 0x823a7988
	ctx.lr = 0x824771F4;
	sub_823A7988(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,8924
	ctx.r4.s64 = ctx.r11.s64 + 8924;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x8286b380
	ctx.lr = 0x82477210;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8247721c
	goto loc_8247721C;
loc_82477218:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247721C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477224;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8247722C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247725c
	if (ctx.cr0.eq) goto loc_8247725C;
	// bl 0x823a7b00
	ctx.lr = 0x82477238;
	sub_823A7B00(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,8964
	ctx.r4.s64 = ctx.r11.s64 + 8964;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x8286b380
	ctx.lr = 0x82477254;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477260
	goto loc_82477260;
loc_8247725C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477260:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477268;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477270;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824772a0
	if (ctx.cr0.eq) goto loc_824772A0;
	// bl 0x823a7c88
	ctx.lr = 0x8247727C;
	sub_823A7C88(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9000
	ctx.r4.s64 = ctx.r11.s64 + 9000;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x8286b380
	ctx.lr = 0x82477298;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824772a4
	goto loc_824772A4;
loc_824772A0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824772A4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824772AC;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824772B4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824772e4
	if (ctx.cr0.eq) goto loc_824772E4;
	// bl 0x823a8280
	ctx.lr = 0x824772C0;
	sub_823A8280(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9040
	ctx.r4.s64 = ctx.r11.s64 + 9040;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x8286b380
	ctx.lr = 0x824772DC;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824772e8
	goto loc_824772E8;
loc_824772E4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824772E8:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824772F0;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824772F8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477328
	if (ctx.cr0.eq) goto loc_82477328;
	// bl 0x823a8400
	ctx.lr = 0x82477304;
	sub_823A8400(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9080
	ctx.r4.s64 = ctx.r11.s64 + 9080;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x8286b380
	ctx.lr = 0x82477320;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8247732c
	goto loc_8247732C;
loc_82477328:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247732C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477334;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8247733C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247736c
	if (ctx.cr0.eq) goto loc_8247736C;
	// bl 0x82410cb0
	ctx.lr = 0x82477348;
	sub_82410CB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11156
	ctx.r4.s64 = ctx.r11.s64 + 11156;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x8286b380
	ctx.lr = 0x82477364;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477370
	goto loc_82477370;
loc_8247736C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477370:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477378;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477380;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824773b0
	if (ctx.cr0.eq) goto loc_824773B0;
	// bl 0x823bac80
	ctx.lr = 0x8247738C;
	sub_823BAC80(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11180
	ctx.r4.s64 = ctx.r11.s64 + 11180;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x8286b380
	ctx.lr = 0x824773A8;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824773b4
	goto loc_824773B4;
loc_824773B0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824773B4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824773BC;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824773C4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824773f4
	if (ctx.cr0.eq) goto loc_824773F4;
	// bl 0x8247ac28
	ctx.lr = 0x824773D0;
	sub_8247AC28(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,13664
	ctx.r4.s64 = ctx.r11.s64 + 13664;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x824773EC;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824773f8
	goto loc_824773F8;
loc_824773F4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824773F8:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477400;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477408;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477438
	if (ctx.cr0.eq) goto loc_82477438;
	// bl 0x8247b540
	ctx.lr = 0x82477414;
	sub_8247B540(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,13688
	ctx.r4.s64 = ctx.r11.s64 + 13688;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82477430;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8247743c
	goto loc_8247743C;
loc_82477438:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247743C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477444;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8247744C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247747c
	if (ctx.cr0.eq) goto loc_8247747C;
	// bl 0x8247ada8
	ctx.lr = 0x82477458;
	sub_8247ADA8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,13644
	ctx.r4.s64 = ctx.r11.s64 + 13644;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82477474;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477480
	goto loc_82477480;
loc_8247747C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477480:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477488;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477490;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824774c0
	if (ctx.cr0.eq) goto loc_824774C0;
	// bl 0x8247af20
	ctx.lr = 0x8247749C;
	sub_8247AF20(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,13620
	ctx.r4.s64 = ctx.r11.s64 + 13620;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x824774B8;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824774c4
	goto loc_824774C4;
loc_824774C0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824774C4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824774CC;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824774D4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477504
	if (ctx.cr0.eq) goto loc_82477504;
	// bl 0x8247b218
	ctx.lr = 0x824774E0;
	sub_8247B218(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,13716
	ctx.r4.s64 = ctx.r11.s64 + 13716;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x824774FC;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477508
	goto loc_82477508;
loc_82477504:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477508:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477510;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477518;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477548
	if (ctx.cr0.eq) goto loc_82477548;
	// bl 0x8247b0a0
	ctx.lr = 0x82477524;
	sub_8247B0A0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,13740
	ctx.r4.s64 = ctx.r11.s64 + 13740;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82477540;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8247754c
	goto loc_8247754C;
loc_82477548:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247754C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477554;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8247755C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247758c
	if (ctx.cr0.eq) goto loc_8247758C;
	// bl 0x8247b3c0
	ctx.lr = 0x82477568;
	sub_8247B3C0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,13508
	ctx.r4.s64 = ctx.r11.s64 + 13508;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82477584;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477590
	goto loc_82477590;
loc_8247758C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477590:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477598;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824775A0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824775d0
	if (ctx.cr0.eq) goto loc_824775D0;
	// bl 0x824835b8
	ctx.lr = 0x824775AC;
	sub_824835B8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,13528
	ctx.r4.s64 = ctx.r11.s64 + 13528;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x824775C8;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824775d4
	goto loc_824775D4;
loc_824775D0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824775D4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824775DC;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824775E4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477614
	if (ctx.cr0.eq) goto loc_82477614;
	// bl 0x82483730
	ctx.lr = 0x824775F0;
	sub_82483730(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,13560
	ctx.r4.s64 = ctx.r11.s64 + 13560;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x8247760C;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477618
	goto loc_82477618;
loc_82477614:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477618:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477620;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477628;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477658
	if (ctx.cr0.eq) goto loc_82477658;
	// bl 0x824838a8
	ctx.lr = 0x82477634;
	sub_824838A8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,13592
	ctx.r4.s64 = ctx.r11.s64 + 13592;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82477650;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8247765c
	goto loc_8247765C;
loc_82477658:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247765C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477664;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8247766C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247769c
	if (ctx.cr0.eq) goto loc_8247769C;
	// bl 0x8247b6b0
	ctx.lr = 0x82477678;
	sub_8247B6B0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,16636
	ctx.r4.s64 = ctx.r11.s64 + 16636;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b238
	ctx.lr = 0x82477694;
	sub_8286B238(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824776a0
	goto loc_824776A0;
loc_8247769C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824776A0:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824776A8;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824776B0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824776e0
	if (ctx.cr0.eq) goto loc_824776E0;
	// bl 0x8247aaa8
	ctx.lr = 0x824776BC;
	sub_8247AAA8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,13476
	ctx.r4.s64 = ctx.r11.s64 + 13476;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x824776D8;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824776e4
	goto loc_824776E4;
loc_824776E0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824776E4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824776EC;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824776F4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477724
	if (ctx.cr0.eq) goto loc_82477724;
	// bl 0x824823f8
	ctx.lr = 0x82477700;
	sub_824823F8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,15148
	ctx.r4.s64 = ctx.r11.s64 + 15148;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x8247771C;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477728
	goto loc_82477728;
loc_82477724:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477728:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477730;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477738;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477768
	if (ctx.cr0.eq) goto loc_82477768;
	// bl 0x824817e0
	ctx.lr = 0x82477744;
	sub_824817E0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14772
	ctx.r4.s64 = ctx.r11.s64 + 14772;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82477760;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8247776c
	goto loc_8247776C;
loc_82477768:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247776C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477774;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8247777C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824777ac
	if (ctx.cr0.eq) goto loc_824777AC;
	// bl 0x823bdb38
	ctx.lr = 0x82477788;
	sub_823BDB38(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14880
	ctx.r4.s64 = ctx.r11.s64 + 14880;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x824777A4;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824777b0
	goto loc_824777B0;
loc_824777AC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824777B0:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824777B8;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824777C0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824777f0
	if (ctx.cr0.eq) goto loc_824777F0;
	// bl 0x82481920
	ctx.lr = 0x824777CC;
	sub_82481920(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,15124
	ctx.r4.s64 = ctx.r11.s64 + 15124;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x824777E8;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824777f4
	goto loc_824777F4;
loc_824777F0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824777F4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824777FC;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477804;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477834
	if (ctx.cr0.eq) goto loc_82477834;
	// bl 0x823bdcd0
	ctx.lr = 0x82477810;
	sub_823BDCD0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14908
	ctx.r4.s64 = ctx.r11.s64 + 14908;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x8247782C;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477838
	goto loc_82477838;
loc_82477834:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477838:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477840;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477848;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477878
	if (ctx.cr0.eq) goto loc_82477878;
	// bl 0x823bdea0
	ctx.lr = 0x82477854;
	sub_823BDEA0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14940
	ctx.r4.s64 = ctx.r11.s64 + 14940;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82477870;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8247787c
	goto loc_8247787C;
loc_82477878:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247787C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477884;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8247788C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824778bc
	if (ctx.cr0.eq) goto loc_824778BC;
	// bl 0x82481aa0
	ctx.lr = 0x82477898;
	sub_82481AA0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14976
	ctx.r4.s64 = ctx.r11.s64 + 14976;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x824778B4;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824778c0
	goto loc_824778C0;
loc_824778BC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824778C0:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824778C8;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824778D0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477900
	if (ctx.cr0.eq) goto loc_82477900;
	// bl 0x82481c50
	ctx.lr = 0x824778DC;
	sub_82481C50(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,15008
	ctx.r4.s64 = ctx.r11.s64 + 15008;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x824778F8;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477904
	goto loc_82477904;
loc_82477900:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477904:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247790C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477914;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477944
	if (ctx.cr0.eq) goto loc_82477944;
	// bl 0x82481dc8
	ctx.lr = 0x82477920;
	sub_82481DC8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,15204
	ctx.r4.s64 = ctx.r11.s64 + 15204;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x8247793C;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477948
	goto loc_82477948;
loc_82477944:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477948:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477950;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477958;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477988
	if (ctx.cr0.eq) goto loc_82477988;
	// bl 0x8247a650
	ctx.lr = 0x82477964;
	sub_8247A650(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,15236
	ctx.r4.s64 = ctx.r11.s64 + 15236;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82477980;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8247798c
	goto loc_8247798C;
loc_82477988:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247798C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477994;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x8247799C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824779cc
	if (ctx.cr0.eq) goto loc_824779CC;
	// bl 0x8247a4d8
	ctx.lr = 0x824779A8;
	sub_8247A4D8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,15276
	ctx.r4.s64 = ctx.r11.s64 + 15276;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x824779C4;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824779d0
	goto loc_824779D0;
loc_824779CC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824779D0:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824779D8;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x824779E0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477a10
	if (ctx.cr0.eq) goto loc_82477A10;
	// bl 0x8247a360
	ctx.lr = 0x824779EC;
	sub_8247A360(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,15312
	ctx.r4.s64 = ctx.r11.s64 + 15312;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82477A08;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477a14
	goto loc_82477A14;
loc_82477A10:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477A14:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477A1C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477A24;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477a54
	if (ctx.cr0.eq) goto loc_82477A54;
	// bl 0x8247a7e8
	ctx.lr = 0x82477A30;
	sub_8247A7E8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,15072
	ctx.r4.s64 = ctx.r11.s64 + 15072;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82477A4C;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477a58
	goto loc_82477A58;
loc_82477A54:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477A58:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477A60;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477A68;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477a98
	if (ctx.cr0.eq) goto loc_82477A98;
	// bl 0x82482590
	ctx.lr = 0x82477A74;
	sub_82482590(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,15176
	ctx.r4.s64 = ctx.r11.s64 + 15176;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82477A90;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477a9c
	goto loc_82477A9C;
loc_82477A98:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477A9C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477AA4;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477AAC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477adc
	if (ctx.cr0.eq) goto loc_82477ADC;
	// bl 0x8247a1e8
	ctx.lr = 0x82477AB8;
	sub_8247A1E8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,21544
	ctx.r4.s64 = ctx.r11.s64 + 21544;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82477AD4;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477ae0
	goto loc_82477AE0;
loc_82477ADC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477AE0:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477AE8;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477AF0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477b20
	if (ctx.cr0.eq) goto loc_82477B20;
	// bl 0x8247a068
	ctx.lr = 0x82477AFC;
	sub_8247A068(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,15040
	ctx.r4.s64 = ctx.r11.s64 + 15040;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82477B18;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477b24
	goto loc_82477B24;
loc_82477B20:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477B24:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477B2C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477B34;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477b64
	if (ctx.cr0.eq) goto loc_82477B64;
	// bl 0x82482718
	ctx.lr = 0x82477B40;
	sub_82482718(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14804
	ctx.r4.s64 = ctx.r11.s64 + 14804;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82477B5C;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477b68
	goto loc_82477B68;
loc_82477B64:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477B68:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477B70;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477B78;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477ba8
	if (ctx.cr0.eq) goto loc_82477BA8;
	// bl 0x82482890
	ctx.lr = 0x82477B84;
	sub_82482890(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14824
	ctx.r4.s64 = ctx.r11.s64 + 14824;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82477BA0;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477bac
	goto loc_82477BAC;
loc_82477BA8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477BAC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477BB4;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477BBC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477bec
	if (ctx.cr0.eq) goto loc_82477BEC;
	// bl 0x82482a10
	ctx.lr = 0x82477BC8;
	sub_82482A10(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14852
	ctx.r4.s64 = ctx.r11.s64 + 14852;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82477BE4;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477bf0
	goto loc_82477BF0;
loc_82477BEC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477BF0:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477BF8;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477C00;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477c30
	if (ctx.cr0.eq) goto loc_82477C30;
	// bl 0x824844a0
	ctx.lr = 0x82477C0C;
	sub_824844A0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,15344
	ctx.r4.s64 = ctx.r11.s64 + 15344;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82477C28;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477c34
	goto loc_82477C34;
loc_82477C30:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477C34:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477C3C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477C44;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477c74
	if (ctx.cr0.eq) goto loc_82477C74;
	// bl 0x823be030
	ctx.lr = 0x82477C50;
	sub_823BE030(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,15604
	ctx.r4.s64 = ctx.r11.s64 + 15604;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82477C6C;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477c78
	goto loc_82477C78;
loc_82477C74:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477C78:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477C80;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477C88;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477cb8
	if (ctx.cr0.eq) goto loc_82477CB8;
	// bl 0x82410320
	ctx.lr = 0x82477C94;
	sub_82410320(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,17084
	ctx.r4.s64 = ctx.r11.s64 + 17084;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82477CB0;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477cbc
	goto loc_82477CBC;
loc_82477CB8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477CBC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477CC4;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477CCC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477cfc
	if (ctx.cr0.eq) goto loc_82477CFC;
	// bl 0x82482d00
	ctx.lr = 0x82477CD8;
	sub_82482D00(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,15400
	ctx.r4.s64 = ctx.r11.s64 + 15400;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82477CF4;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477d00
	goto loc_82477D00;
loc_82477CFC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477D00:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477D08;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477D10;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477d40
	if (ctx.cr0.eq) goto loc_82477D40;
	// bl 0x82482e98
	ctx.lr = 0x82477D1C;
	sub_82482E98(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,15428
	ctx.r4.s64 = ctx.r11.s64 + 15428;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82477D38;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477d44
	goto loc_82477D44;
loc_82477D40:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477D44:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477D4C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477D54;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477d84
	if (ctx.cr0.eq) goto loc_82477D84;
	// bl 0x82481f40
	ctx.lr = 0x82477D60;
	sub_82481F40(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,15380
	ctx.r4.s64 = ctx.r11.s64 + 15380;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82477D7C;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477d88
	goto loc_82477D88;
loc_82477D84:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477D88:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477D90;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477D98;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477dc8
	if (ctx.cr0.eq) goto loc_82477DC8;
	// bl 0x824820d8
	ctx.lr = 0x82477DA4;
	sub_824820D8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,15548
	ctx.r4.s64 = ctx.r11.s64 + 15548;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82477DC0;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477dcc
	goto loc_82477DCC;
loc_82477DC8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477DCC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477DD4;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477DDC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477e0c
	if (ctx.cr0.eq) goto loc_82477E0C;
	// bl 0x82482270
	ctx.lr = 0x82477DE8;
	sub_82482270(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,15576
	ctx.r4.s64 = ctx.r11.s64 + 15576;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82477E04;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477e10
	goto loc_82477E10;
loc_82477E0C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477E10:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477E18;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477E20;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477e50
	if (ctx.cr0.eq) goto loc_82477E50;
	// bl 0x82483e58
	ctx.lr = 0x82477E2C;
	sub_82483E58(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,17700
	ctx.r4.s64 = ctx.r11.s64 + 17700;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82477E48;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477e54
	goto loc_82477E54;
loc_82477E50:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477E54:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477E5C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477E64;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477e94
	if (ctx.cr0.eq) goto loc_82477E94;
	// bl 0x82482b88
	ctx.lr = 0x82477E70;
	sub_82482B88(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,17112
	ctx.r4.s64 = ctx.r11.s64 + 17112;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82477E8C;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477e98
	goto loc_82477E98;
loc_82477E94:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477E98:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477EA0;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477EA8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477ed8
	if (ctx.cr0.eq) goto loc_82477ED8;
	// bl 0x824379b8
	ctx.lr = 0x82477EB4;
	sub_824379B8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,13984
	ctx.r4.s64 = ctx.r11.s64 + 13984;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82477ED0;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477edc
	goto loc_82477EDC;
loc_82477ED8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477EDC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477EE4;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477EEC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477f1c
	if (ctx.cr0.eq) goto loc_82477F1C;
	// bl 0x823c81b8
	ctx.lr = 0x82477EF8;
	sub_823C81B8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14012
	ctx.r4.s64 = ctx.r11.s64 + 14012;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82477F14;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477f20
	goto loc_82477F20;
loc_82477F1C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477F20:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477F28;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477F30;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477f60
	if (ctx.cr0.eq) goto loc_82477F60;
	// bl 0x823c8338
	ctx.lr = 0x82477F3C;
	sub_823C8338(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14032
	ctx.r4.s64 = ctx.r11.s64 + 14032;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82477F58;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477f64
	goto loc_82477F64;
loc_82477F60:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477F64:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477F6C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477F74;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82477fa4
	if (ctx.cr0.eq) goto loc_82477FA4;
	// bl 0x823aeb88
	ctx.lr = 0x82477F80;
	sub_823AEB88(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,15476
	ctx.r4.s64 = ctx.r11.s64 + 15476;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82477F9C;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477fa8
	goto loc_82477FA8;
loc_82477FA4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477FA8:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477FB0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82477FB8;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82477fd8
	if (ctx.cr0.eq) goto loc_82477FD8;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,21576
	ctx.r4.s64 = ctx.r11.s64 + 21576;
	// bl 0x82468ff0
	ctx.lr = 0x82477FD0;
	sub_82468FF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82477fdc
	goto loc_82477FDC;
loc_82477FD8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82477FDC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82477FE4;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82477FEC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247801c
	if (ctx.cr0.eq) goto loc_8247801C;
	// bl 0x823c9770
	ctx.lr = 0x82477FF8;
	sub_823C9770(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,15636
	ctx.r4.s64 = ctx.r11.s64 + 15636;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82478014;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478020
	goto loc_82478020;
loc_8247801C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478020:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478028;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82478030;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478060
	if (ctx.cr0.eq) goto loc_82478060;
	// bl 0x823c98e8
	ctx.lr = 0x8247803C;
	sub_823C98E8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,15672
	ctx.r4.s64 = ctx.r11.s64 + 15672;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82478058;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478064
	goto loc_82478064;
loc_82478060:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478064:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247806C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82478074;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824780a4
	if (ctx.cr0.eq) goto loc_824780A4;
	// bl 0x8247e470
	ctx.lr = 0x82478080;
	sub_8247E470(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,15880
	ctx.r4.s64 = ctx.r11.s64 + 15880;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8247809C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824780a8
	goto loc_824780A8;
loc_824780A4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824780A8:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824780B0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824780B8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824780e8
	if (ctx.cr0.eq) goto loc_824780E8;
	// bl 0x8247e5d0
	ctx.lr = 0x824780C4;
	sub_8247E5D0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,15920
	ctx.r4.s64 = ctx.r11.s64 + 15920;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x824780E0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824780ec
	goto loc_824780EC;
loc_824780E8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824780EC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824780F4;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824780FC;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247812c
	if (ctx.cr0.eq) goto loc_8247812C;
	// bl 0x8247e050
	ctx.lr = 0x82478108;
	sub_8247E050(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,15696
	ctx.r4.s64 = ctx.r11.s64 + 15696;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82478124;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478130
	goto loc_82478130;
loc_8247812C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478130:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478138;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82478140;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478170
	if (ctx.cr0.eq) goto loc_82478170;
	// bl 0x824801f8
	ctx.lr = 0x8247814C;
	sub_824801F8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,15764
	ctx.r4.s64 = ctx.r11.s64 + 15764;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82478168;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478174
	goto loc_82478174;
loc_82478170:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478174:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247817C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82478184;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824781b4
	if (ctx.cr0.eq) goto loc_824781B4;
	// bl 0x8247e1b0
	ctx.lr = 0x82478190;
	sub_8247E1B0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,15800
	ctx.r4.s64 = ctx.r11.s64 + 15800;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x824781AC;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824781b8
	goto loc_824781B8;
loc_824781B4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824781B8:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824781C0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824781C8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824781f8
	if (ctx.cr0.eq) goto loc_824781F8;
	// bl 0x8247e310
	ctx.lr = 0x824781D4;
	sub_8247E310(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,15836
	ctx.r4.s64 = ctx.r11.s64 + 15836;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x824781F0;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824781fc
	goto loc_824781FC;
loc_824781F8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824781FC:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478204;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8247820C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247823c
	if (ctx.cr0.eq) goto loc_8247823C;
	// bl 0x82480a50
	ctx.lr = 0x82478218;
	sub_82480A50(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,15952
	ctx.r4.s64 = ctx.r11.s64 + 15952;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82478234;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478240
	goto loc_82478240;
loc_8247823C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478240:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478248;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82478250;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478280
	if (ctx.cr0.eq) goto loc_82478280;
	// bl 0x8247e788
	ctx.lr = 0x8247825C;
	sub_8247E788(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,15988
	ctx.r4.s64 = ctx.r11.s64 + 15988;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82478278;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478284
	goto loc_82478284;
loc_82478280:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478284:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247828C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82478294;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824782c4
	if (ctx.cr0.eq) goto loc_824782C4;
	// bl 0x8247e8e8
	ctx.lr = 0x824782A0;
	sub_8247E8E8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,16440
	ctx.r4.s64 = ctx.r11.s64 + 16440;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x824782BC;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824782c8
	goto loc_824782C8;
loc_824782C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824782C8:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824782D0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824782D8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478308
	if (ctx.cr0.eq) goto loc_82478308;
	// bl 0x8247ea48
	ctx.lr = 0x824782E4;
	sub_8247EA48(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,16480
	ctx.r4.s64 = ctx.r11.s64 + 16480;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82478300;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8247830c
	goto loc_8247830C;
loc_82478308:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247830C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478314;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8247831C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247834c
	if (ctx.cr0.eq) goto loc_8247834C;
	// bl 0x8247eba8
	ctx.lr = 0x82478328;
	sub_8247EBA8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,16516
	ctx.r4.s64 = ctx.r11.s64 + 16516;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82478344;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478350
	goto loc_82478350;
loc_8247834C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478350:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478358;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82478360;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478390
	if (ctx.cr0.eq) goto loc_82478390;
	// bl 0x8247ed08
	ctx.lr = 0x8247836C;
	sub_8247ED08(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,16556
	ctx.r4.s64 = ctx.r11.s64 + 16556;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82478388;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478394
	goto loc_82478394;
loc_82478390:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478394:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x8247839C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824783A4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824783d4
	if (ctx.cr0.eq) goto loc_824783D4;
	// bl 0x82437710
	ctx.lr = 0x824783B0;
	sub_82437710(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,16600
	ctx.r4.s64 = ctx.r11.s64 + 16600;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x824783CC;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824783d8
	goto loc_824783D8;
loc_824783D4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824783D8:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824783E0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824783E8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478418
	if (ctx.cr0.eq) goto loc_82478418;
	// bl 0x8247ee68
	ctx.lr = 0x824783F4;
	sub_8247EE68(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,16024
	ctx.r4.s64 = ctx.r11.s64 + 16024;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82478410;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8247841c
	goto loc_8247841C;
loc_82478418:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247841C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478424;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8247842C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247845c
	if (ctx.cr0.eq) goto loc_8247845C;
	// bl 0x8247f6f0
	ctx.lr = 0x82478438;
	sub_8247F6F0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,16060
	ctx.r4.s64 = ctx.r11.s64 + 16060;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82478454;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478460
	goto loc_82478460;
loc_8247845C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478460:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478468;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82478470;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824784a0
	if (ctx.cr0.eq) goto loc_824784A0;
	// bl 0x8247f850
	ctx.lr = 0x8247847C;
	sub_8247F850(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,16128
	ctx.r4.s64 = ctx.r11.s64 + 16128;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82478498;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824784a4
	goto loc_824784A4;
loc_824784A0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824784A4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824784AC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824784B4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824784e4
	if (ctx.cr0.eq) goto loc_824784E4;
	// bl 0x82481058
	ctx.lr = 0x824784C0;
	sub_82481058(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,16168
	ctx.r4.s64 = ctx.r11.s64 + 16168;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x824784DC;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824784e8
	goto loc_824784E8;
loc_824784E4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824784E8:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824784F0;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824784F8;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478528
	if (ctx.cr0.eq) goto loc_82478528;
	// bl 0x824811f8
	ctx.lr = 0x82478504;
	sub_824811F8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,16200
	ctx.r4.s64 = ctx.r11.s64 + 16200;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82478520;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8247852c
	goto loc_8247852C;
loc_82478528:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247852C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478534;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8247853C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247856c
	if (ctx.cr0.eq) goto loc_8247856C;
	// bl 0x8247f9b0
	ctx.lr = 0x82478548;
	sub_8247F9B0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,16232
	ctx.r4.s64 = ctx.r11.s64 + 16232;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82478564;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478570
	goto loc_82478570;
loc_8247856C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478570:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478578;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82478580;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824785b0
	if (ctx.cr0.eq) goto loc_824785B0;
	// bl 0x82480bd0
	ctx.lr = 0x8247858C;
	sub_82480BD0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,18080
	ctx.r4.s64 = ctx.r11.s64 + 18080;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x824785A8;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824785b4
	goto loc_824785B4;
loc_824785B0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824785B4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824785BC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824785C4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824785f4
	if (ctx.cr0.eq) goto loc_824785F4;
	// bl 0x82480d30
	ctx.lr = 0x824785D0;
	sub_82480D30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,18116
	ctx.r4.s64 = ctx.r11.s64 + 18116;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x824785EC;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824785f8
	goto loc_824785F8;
loc_824785F4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824785F8:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478600;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82478608;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478638
	if (ctx.cr0.eq) goto loc_82478638;
	// bl 0x8247fb10
	ctx.lr = 0x82478614;
	sub_8247FB10(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,16268
	ctx.r4.s64 = ctx.r11.s64 + 16268;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82478630;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8247863c
	goto loc_8247863C;
loc_82478638:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247863C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478644;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8247864C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247867c
	if (ctx.cr0.eq) goto loc_8247867C;
	// bl 0x8247fc70
	ctx.lr = 0x82478658;
	sub_8247FC70(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,16328
	ctx.r4.s64 = ctx.r11.s64 + 16328;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82478674;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478680
	goto loc_82478680;
loc_8247867C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478680:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478688;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82478690;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824786c0
	if (ctx.cr0.eq) goto loc_824786C0;
	// bl 0x82480098
	ctx.lr = 0x8247869C;
	sub_82480098(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,16400
	ctx.r4.s64 = ctx.r11.s64 + 16400;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x824786B8;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824786c4
	goto loc_824786C4;
loc_824786C0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824786C4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824786CC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824786D4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478704
	if (ctx.cr0.eq) goto loc_82478704;
	// bl 0x8247fdd8
	ctx.lr = 0x824786E0;
	sub_8247FDD8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,16360
	ctx.r4.s64 = ctx.r11.s64 + 16360;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x824786FC;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478708
	goto loc_82478708;
loc_82478704:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478708:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478710;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82478718;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478748
	if (ctx.cr0.eq) goto loc_82478748;
	// bl 0x8247ff38
	ctx.lr = 0x82478724;
	sub_8247FF38(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,15728
	ctx.r4.s64 = ctx.r11.s64 + 15728;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82478740;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8247874c
	goto loc_8247874C;
loc_82478748:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247874C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478754;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8247875C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247878c
	if (ctx.cr0.eq) goto loc_8247878C;
	// bl 0x82480e90
	ctx.lr = 0x82478768;
	sub_82480E90(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,16300
	ctx.r4.s64 = ctx.r11.s64 + 16300;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82478784;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478790
	goto loc_82478790;
loc_8247878C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478790:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478798;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824787A0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824787d0
	if (ctx.cr0.eq) goto loc_824787D0;
	// bl 0x82480358
	ctx.lr = 0x824787AC;
	sub_82480358(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,17768
	ctx.r4.s64 = ctx.r11.s64 + 17768;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x824787C8;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824787d4
	goto loc_824787D4;
loc_824787D0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824787D4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824787DC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824787E4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478814
	if (ctx.cr0.eq) goto loc_82478814;
	// bl 0x824804b8
	ctx.lr = 0x824787F0;
	sub_824804B8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,17804
	ctx.r4.s64 = ctx.r11.s64 + 17804;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8247880C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478818
	goto loc_82478818;
loc_82478814:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478818:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478820;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82478828;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478858
	if (ctx.cr0.eq) goto loc_82478858;
	// bl 0x82480618
	ctx.lr = 0x82478834;
	sub_82480618(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,17832
	ctx.r4.s64 = ctx.r11.s64 + 17832;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82478850;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8247885c
	goto loc_8247885C;
loc_82478858:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247885C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478864;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8247886C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247889c
	if (ctx.cr0.eq) goto loc_8247889C;
	// bl 0x82480778
	ctx.lr = 0x82478878;
	sub_82480778(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,17864
	ctx.r4.s64 = ctx.r11.s64 + 17864;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82478894;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824788a0
	goto loc_824788A0;
loc_8247889C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824788A0:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824788A8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824788B0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824788e0
	if (ctx.cr0.eq) goto loc_824788E0;
	// bl 0x824808d8
	ctx.lr = 0x824788BC;
	sub_824808D8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,17896
	ctx.r4.s64 = ctx.r11.s64 + 17896;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x824788D8;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824788e4
	goto loc_824788E4;
loc_824788E0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824788E4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824788EC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824788F4;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478924
	if (ctx.cr0.eq) goto loc_82478924;
	// bl 0x8247efc8
	ctx.lr = 0x82478900;
	sub_8247EFC8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,16096
	ctx.r4.s64 = ctx.r11.s64 + 16096;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x8247891C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478928
	goto loc_82478928;
loc_82478924:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478928:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478930;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82478938;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478968
	if (ctx.cr0.eq) goto loc_82478968;
	// bl 0x8247f150
	ctx.lr = 0x82478944;
	sub_8247F150(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,18044
	ctx.r4.s64 = ctx.r11.s64 + 18044;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82478960;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8247896c
	goto loc_8247896C;
loc_82478968:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8247896C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478974;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x8247897C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824789ac
	if (ctx.cr0.eq) goto loc_824789AC;
	// bl 0x8247f2b0
	ctx.lr = 0x82478988;
	sub_8247F2B0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,18008
	ctx.r4.s64 = ctx.r11.s64 + 18008;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x824789A4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824789b0
	goto loc_824789B0;
loc_824789AC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824789B0:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824789B8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x824789C0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824789f0
	if (ctx.cr0.eq) goto loc_824789F0;
	// bl 0x8247f410
	ctx.lr = 0x824789CC;
	sub_8247F410(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,17968
	ctx.r4.s64 = ctx.r11.s64 + 17968;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x824789E8;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x824789f4
	goto loc_824789F4;
loc_824789F0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824789F4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x824789FC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82478A04;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478a34
	if (ctx.cr0.eq) goto loc_82478A34;
	// bl 0x8247f570
	ctx.lr = 0x82478A10;
	sub_8247F570(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,17932
	ctx.r4.s64 = ctx.r11.s64 + 17932;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82478A2C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478a38
	goto loc_82478A38;
loc_82478A34:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478A38:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478A40;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82478A48;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478a78
	if (ctx.cr0.eq) goto loc_82478A78;
	// bl 0x82485a50
	ctx.lr = 0x82478A54;
	sub_82485A50(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,13904
	ctx.r4.s64 = ctx.r11.s64 + 13904;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82478A70;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478a7c
	goto loc_82478A7C;
loc_82478A78:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478A7C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478A84;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82478A8C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478abc
	if (ctx.cr0.eq) goto loc_82478ABC;
	// bl 0x823354d0
	ctx.lr = 0x82478A98;
	sub_823354D0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,13928
	ctx.r4.s64 = ctx.r11.s64 + 13928;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82478AB4;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478ac0
	goto loc_82478AC0;
loc_82478ABC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478AC0:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478AC8;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82478AD0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478b00
	if (ctx.cr0.eq) goto loc_82478B00;
	// bl 0x823bc990
	ctx.lr = 0x82478ADC;
	sub_823BC990(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,13760
	ctx.r4.s64 = ctx.r11.s64 + 13760;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82478AF8;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478b04
	goto loc_82478B04;
loc_82478B00:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478B04:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478B0C;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82478B14;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478b44
	if (ctx.cr0.eq) goto loc_82478B44;
	// bl 0x823bcca0
	ctx.lr = 0x82478B20;
	sub_823BCCA0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,13812
	ctx.r4.s64 = ctx.r11.s64 + 13812;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82478B3C;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478b48
	goto loc_82478B48;
loc_82478B44:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478B48:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478B50;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82478B58;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478b88
	if (ctx.cr0.eq) goto loc_82478B88;
	// bl 0x823bce28
	ctx.lr = 0x82478B64;
	sub_823BCE28(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,13852
	ctx.r4.s64 = ctx.r11.s64 + 13852;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82478B80;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478b8c
	goto loc_82478B8C;
loc_82478B88:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478B8C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478B94;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82478B9C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478bcc
	if (ctx.cr0.eq) goto loc_82478BCC;
	// bl 0x824144b0
	ctx.lr = 0x82478BA8;
	sub_824144B0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,13952
	ctx.r4.s64 = ctx.r11.s64 + 13952;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82478BC4;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478bd0
	goto loc_82478BD0;
loc_82478BCC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478BD0:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478BD8;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82478BE0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478c18
	if (ctx.cr0.eq) goto loc_82478C18;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,16668
	ctx.r4.s64 = ctx.r11.s64 + 16668;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82478C04;
	sub_82847920(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,8320
	ctx.r11.s64 = ctx.r11.s64 + 8320;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82478c1c
	goto loc_82478C1C;
loc_82478C18:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478C1C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478C24;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82478C2C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478c68
	if (ctx.cr0.eq) goto loc_82478C68;
	// bl 0x82484640
	ctx.lr = 0x82478C38;
	sub_82484640(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,16756
	ctx.r4.s64 = ctx.r11.s64 + 16756;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82847920
	ctx.lr = 0x82478C54;
	sub_82847920(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,26404
	ctx.r11.s64 = ctx.r11.s64 + 26404;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82478c6c
	goto loc_82478C6C;
loc_82478C68:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478C6C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478C74;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82478C7C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478cac
	if (ctx.cr0.eq) goto loc_82478CAC;
	// bl 0x82410578
	ctx.lr = 0x82478C88;
	sub_82410578(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,16852
	ctx.r4.s64 = ctx.r11.s64 + 16852;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82478CA4;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478cb0
	goto loc_82478CB0;
loc_82478CAC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478CB0:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478CB8;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82478CC0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478cf0
	if (ctx.cr0.eq) goto loc_82478CF0;
	// bl 0x82410710
	ctx.lr = 0x82478CCC;
	sub_82410710(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,16880
	ctx.r4.s64 = ctx.r11.s64 + 16880;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82478CE8;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478cf4
	goto loc_82478CF4;
loc_82478CF0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478CF4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478CFC;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82478D04;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82478d24
	if (ctx.cr0.eq) goto loc_82478D24;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,7284
	ctx.r4.s64 = ctx.r11.s64 + 7284;
	// bl 0x82468ff0
	ctx.lr = 0x82478D1C;
	sub_82468FF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478d28
	goto loc_82478D28;
loc_82478D24:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478D28:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478D30;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82478D38;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478d68
	if (ctx.cr0.eq) goto loc_82478D68;
	// bl 0x824108a0
	ctx.lr = 0x82478D44;
	sub_824108A0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,16912
	ctx.r4.s64 = ctx.r11.s64 + 16912;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82478D60;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478d6c
	goto loc_82478D6C;
loc_82478D68:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478D6C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478D74;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82478D7C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478dac
	if (ctx.cr0.eq) goto loc_82478DAC;
	// bl 0x824109e0
	ctx.lr = 0x82478D88;
	sub_824109E0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,16948
	ctx.r4.s64 = ctx.r11.s64 + 16948;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82478DA4;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478db0
	goto loc_82478DB0;
loc_82478DAC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478DB0:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478DB8;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82478DC0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478df0
	if (ctx.cr0.eq) goto loc_82478DF0;
	// bl 0x82410b70
	ctx.lr = 0x82478DCC;
	sub_82410B70(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,16988
	ctx.r4.s64 = ctx.r11.s64 + 16988;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82478DE8;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478df4
	goto loc_82478DF4;
loc_82478DF0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478DF4:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478DFC;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82478E04;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478e34
	if (ctx.cr0.eq) goto loc_82478E34;
	// bl 0x82483a20
	ctx.lr = 0x82478E10;
	sub_82483A20(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,17020
	ctx.r4.s64 = ctx.r11.s64 + 17020;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82478E2C;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478e38
	goto loc_82478E38;
loc_82478E34:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478E38:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478E40;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82478E48;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478e78
	if (ctx.cr0.eq) goto loc_82478E78;
	// bl 0x82483b98
	ctx.lr = 0x82478E54;
	sub_82483B98(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,17056
	ctx.r4.s64 = ctx.r11.s64 + 17056;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82478E70;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478e7c
	goto loc_82478E7C;
loc_82478E78:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478E7C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478E84;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82478E8C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478ebc
	if (ctx.cr0.eq) goto loc_82478EBC;
	// bl 0x82483d18
	ctx.lr = 0x82478E98;
	sub_82483D18(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,17140
	ctx.r4.s64 = ctx.r11.s64 + 17140;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82478EB4;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478ec0
	goto loc_82478EC0;
loc_82478EBC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478EC0:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478EC8;
	sub_82843BF8(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82333900
	ctx.lr = 0x82478ED0;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478f00
	if (ctx.cr0.eq) goto loc_82478F00;
	// bl 0x82484020
	ctx.lr = 0x82478EDC;
	sub_82484020(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,17736
	ctx.r4.s64 = ctx.r11.s64 + 17736;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x8286b380
	ctx.lr = 0x82478EF8;
	sub_8286B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478f04
	goto loc_82478F04;
loc_82478F00:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478F04:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478F0C;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82478F14;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478f44
	if (ctx.cr0.eq) goto loc_82478F44;
	// bl 0x82484328
	ctx.lr = 0x82478F20;
	sub_82484328(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,18188
	ctx.r4.s64 = ctx.r11.s64 + 18188;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82478F3C;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478f48
	goto loc_82478F48;
loc_82478F44:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478F48:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478F50;
	sub_82843BF8(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82333900
	ctx.lr = 0x82478F58;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82478f88
	if (ctx.cr0.eq) goto loc_82478F88;
	// bl 0x824841c8
	ctx.lr = 0x82478F64;
	sub_824841C8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,18148
	ctx.r4.s64 = ctx.r11.s64 + 18148;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82847920
	ctx.lr = 0x82478F80;
	sub_82847920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82478f8c
	goto loc_82478F8C;
loc_82478F88:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82478F8C:
	// lwz r3,1000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1000);
	// bl 0x82843bf8
	ctx.lr = 0x82478F94;
	sub_82843BF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82478FA0"))) PPC_WEAK_FUNC(sub_82478FA0);
PPC_FUNC_IMPL(__imp__sub_82478FA0) {
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
	// li r3,6192
	ctx.r3.s64 = 6192;
	// bl 0x82833108
	ctx.lr = 0x82478FB4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82478fc4
	if (ctx.cr0.eq) goto loc_82478FC4;
	// bl 0x825904f8
	ctx.lr = 0x82478FC0;
	sub_825904F8(ctx, base);
	// b 0x82478fc8
	goto loc_82478FC8;
loc_82478FC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82478FC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82478FD8"))) PPC_WEAK_FUNC(sub_82478FD8);
PPC_FUNC_IMPL(__imp__sub_82478FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,28464(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28464);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82479018
	if (!ctx.cr0.eq) goto loc_82479018;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,28464(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28464, ctx.r11.u32);
	// addi r3,r9,18224
	ctx.r3.s64 = ctx.r9.s64 + 18224;
	// bl 0x82816528
	ctx.lr = 0x82479010;
	sub_82816528(ctx, base);
	// stw r3,28460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28460, ctx.r3.u32);
	// b 0x8247901c
	goto loc_8247901C;
loc_82479018:
	// lwz r3,28460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28460);
loc_8247901C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82479030"))) PPC_WEAK_FUNC(sub_82479030);
PPC_FUNC_IMPL(__imp__sub_82479030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82479080
	ctx.lr = 0x82479050;
	sub_82479080(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82479064;
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

__attribute__((alias("__imp__sub_82479080"))) PPC_WEAK_FUNC(sub_82479080);
PPC_FUNC_IMPL(__imp__sub_82479080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,10484
	ctx.r31.s64 = ctx.r11.s64 + 10484;
	// lwz r11,10480(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10480);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824790c8
	if (!ctx.cr0.eq) goto loc_824790C8;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,26416
	ctx.r9.s64 = ctx.r9.s64 + 26416;
	// stw r11,10480(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10480, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,12808
	ctx.r3.s64 = ctx.r11.s64 + 12808;
	// bl 0x82a4c758
	ctx.lr = 0x824790C8;
	sub_82A4C758(ctx, base);
loc_824790C8:
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

__attribute__((alias("__imp__sub_824790E0"))) PPC_WEAK_FUNC(sub_824790E0);
PPC_FUNC_IMPL(__imp__sub_824790E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,7040
	ctx.r3.s64 = 7040;
	// bl 0x82833108
	ctx.lr = 0x824790F8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82479134
	if (ctx.cr0.eq) goto loc_82479134;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b600
	ctx.lr = 0x82479108;
	sub_8253B600(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r11,r11,26440
	ctx.r11.s64 = ctx.r11.s64 + 26440;
	// addi r10,r10,28888
	ctx.r10.s64 = ctx.r10.s64 + 28888;
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
	// b 0x82479138
	goto loc_82479138;
loc_82479134:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82479138:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82479150"))) PPC_WEAK_FUNC(sub_82479150);
PPC_FUNC_IMPL(__imp__sub_82479150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,28456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28456);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82479190
	if (!ctx.cr0.eq) goto loc_82479190;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,28456(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28456, ctx.r11.u32);
	// addi r3,r9,18240
	ctx.r3.s64 = ctx.r9.s64 + 18240;
	// bl 0x82816528
	ctx.lr = 0x82479188;
	sub_82816528(ctx, base);
	// stw r3,28452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28452, ctx.r3.u32);
	// b 0x82479194
	goto loc_82479194;
loc_82479190:
	// lwz r3,28452(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28452);
loc_82479194:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824791A8"))) PPC_WEAK_FUNC(sub_824791A8);
PPC_FUNC_IMPL(__imp__sub_824791A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x824791f8
	ctx.lr = 0x824791C8;
	sub_824791F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824791DC;
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

__attribute__((alias("__imp__sub_824791F8"))) PPC_WEAK_FUNC(sub_824791F8);
PPC_FUNC_IMPL(__imp__sub_824791F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,10588
	ctx.r31.s64 = ctx.r11.s64 + 10588;
	// lwz r11,10584(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10584);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82479240
	if (!ctx.cr0.eq) goto loc_82479240;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,28940
	ctx.r9.s64 = ctx.r9.s64 + 28940;
	// stw r11,10584(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10584, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,12784
	ctx.r3.s64 = ctx.r11.s64 + 12784;
	// bl 0x82a4c758
	ctx.lr = 0x82479240;
	sub_82A4C758(ctx, base);
loc_82479240:
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

__attribute__((alias("__imp__sub_82479258"))) PPC_WEAK_FUNC(sub_82479258);
PPC_FUNC_IMPL(__imp__sub_82479258) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82833108
	ctx.lr = 0x8247926C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8247927c
	if (ctx.cr0.eq) goto loc_8247927C;
	// bl 0x82468f90
	ctx.lr = 0x82479278;
	sub_82468F90(ctx, base);
	// b 0x82479280
	goto loc_82479280;
loc_8247927C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82479280:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82479290"))) PPC_WEAK_FUNC(sub_82479290);
PPC_FUNC_IMPL(__imp__sub_82479290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,28448(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28448);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824792d0
	if (!ctx.cr0.eq) goto loc_824792D0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,28448(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28448, ctx.r11.u32);
	// addi r3,r9,18268
	ctx.r3.s64 = ctx.r9.s64 + 18268;
	// bl 0x82816528
	ctx.lr = 0x824792C8;
	sub_82816528(ctx, base);
	// stw r3,28444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28444, ctx.r3.u32);
	// b 0x824792d4
	goto loc_824792D4;
loc_824792D0:
	// lwz r3,28444(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28444);
loc_824792D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824792E8"))) PPC_WEAK_FUNC(sub_824792E8);
PPC_FUNC_IMPL(__imp__sub_824792E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82479338
	ctx.lr = 0x82479308;
	sub_82479338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247931C;
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

__attribute__((alias("__imp__sub_82479338"))) PPC_WEAK_FUNC(sub_82479338);
PPC_FUNC_IMPL(__imp__sub_82479338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,11396
	ctx.r31.s64 = ctx.r11.s64 + 11396;
	// lwz r11,11392(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11392);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82479380
	if (!ctx.cr0.eq) goto loc_82479380;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,29064
	ctx.r9.s64 = ctx.r9.s64 + 29064;
	// stw r11,11392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11392, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,12760
	ctx.r3.s64 = ctx.r11.s64 + 12760;
	// bl 0x82a4c758
	ctx.lr = 0x82479380;
	sub_82A4C758(ctx, base);
loc_82479380:
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

__attribute__((alias("__imp__sub_82479398"))) PPC_WEAK_FUNC(sub_82479398);
PPC_FUNC_IMPL(__imp__sub_82479398) {
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
	// li r3,1808
	ctx.r3.s64 = 1808;
	// bl 0x82833108
	ctx.lr = 0x824793B0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824793f8
	if (ctx.cr0.eq) goto loc_824793F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ecc18
	ctx.lr = 0x824793C0;
	sub_827ECC18(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// addi r10,r10,13592
	ctx.r10.s64 = ctx.r10.s64 + 13592;
	// lfs f0,16800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16800);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,14708
	ctx.r9.s64 = ctx.r9.s64 + 14708;
	// addi r11,r8,14760
	ctx.r11.s64 = ctx.r8.s64 + 14760;
	// stfs f0,1792(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1792, temp.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// b 0x824793fc
	goto loc_824793FC;
loc_824793F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824793FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82479410"))) PPC_WEAK_FUNC(sub_82479410);
PPC_FUNC_IMPL(__imp__sub_82479410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,28440(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28440);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82479450
	if (!ctx.cr0.eq) goto loc_82479450;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,28440(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28440, ctx.r11.u32);
	// addi r3,r9,18288
	ctx.r3.s64 = ctx.r9.s64 + 18288;
	// bl 0x82816528
	ctx.lr = 0x82479448;
	sub_82816528(ctx, base);
	// stw r3,28436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28436, ctx.r3.u32);
	// b 0x82479454
	goto loc_82479454;
loc_82479450:
	// lwz r3,28436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28436);
loc_82479454:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82479468"))) PPC_WEAK_FUNC(sub_82479468);
PPC_FUNC_IMPL(__imp__sub_82479468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x824794b8
	ctx.lr = 0x82479488;
	sub_824794B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247949C;
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

__attribute__((alias("__imp__sub_824794B8"))) PPC_WEAK_FUNC(sub_824794B8);
PPC_FUNC_IMPL(__imp__sub_824794B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,10660
	ctx.r31.s64 = ctx.r11.s64 + 10660;
	// lwz r11,10656(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10656);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82479500
	if (!ctx.cr0.eq) goto loc_82479500;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,29108
	ctx.r9.s64 = ctx.r9.s64 + 29108;
	// stw r11,10656(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10656, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,12736
	ctx.r3.s64 = ctx.r11.s64 + 12736;
	// bl 0x82a4c758
	ctx.lr = 0x82479500;
	sub_82A4C758(ctx, base);
loc_82479500:
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

__attribute__((alias("__imp__sub_82479518"))) PPC_WEAK_FUNC(sub_82479518);
PPC_FUNC_IMPL(__imp__sub_82479518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82479530;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247956c
	if (ctx.cr0.eq) goto loc_8247956C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ecc18
	ctx.lr = 0x82479540;
	sub_827ECC18(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,14784
	ctx.r11.s64 = ctx.r11.s64 + 14784;
	// addi r10,r10,15900
	ctx.r10.s64 = ctx.r10.s64 + 15900;
	// addi r9,r9,14760
	ctx.r9.s64 = ctx.r9.s64 + 14760;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x82479570
	goto loc_82479570;
loc_8247956C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82479570:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82479588"))) PPC_WEAK_FUNC(sub_82479588);
PPC_FUNC_IMPL(__imp__sub_82479588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,28432(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28432);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824795c8
	if (!ctx.cr0.eq) goto loc_824795C8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,28432(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28432, ctx.r11.u32);
	// addi r3,r9,18316
	ctx.r3.s64 = ctx.r9.s64 + 18316;
	// bl 0x82816528
	ctx.lr = 0x824795C0;
	sub_82816528(ctx, base);
	// stw r3,28428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28428, ctx.r3.u32);
	// b 0x824795cc
	goto loc_824795CC;
loc_824795C8:
	// lwz r3,28428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28428);
loc_824795CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824795E0"))) PPC_WEAK_FUNC(sub_824795E0);
PPC_FUNC_IMPL(__imp__sub_824795E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82479630
	ctx.lr = 0x82479600;
	sub_82479630(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82479614;
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

__attribute__((alias("__imp__sub_82479630"))) PPC_WEAK_FUNC(sub_82479630);
PPC_FUNC_IMPL(__imp__sub_82479630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,10668
	ctx.r31.s64 = ctx.r11.s64 + 10668;
	// lwz r11,10664(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10664);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82479678
	if (!ctx.cr0.eq) goto loc_82479678;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,29128
	ctx.r9.s64 = ctx.r9.s64 + 29128;
	// stw r11,10664(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10664, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,12712
	ctx.r3.s64 = ctx.r11.s64 + 12712;
	// bl 0x82a4c758
	ctx.lr = 0x82479678;
	sub_82A4C758(ctx, base);
loc_82479678:
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

__attribute__((alias("__imp__sub_82479690"))) PPC_WEAK_FUNC(sub_82479690);
PPC_FUNC_IMPL(__imp__sub_82479690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1760
	ctx.r3.s64 = 1760;
	// bl 0x82833108
	ctx.lr = 0x824796A8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824796fc
	if (ctx.cr0.eq) goto loc_824796FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e9fd8
	ctx.lr = 0x824796B8;
	sub_827E9FD8(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r11,r11,15952
	ctx.r11.s64 = ctx.r11.s64 + 15952;
	// addi r10,r10,17064
	ctx.r10.s64 = ctx.r10.s64 + 17064;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r9,11172
	ctx.r9.s64 = ctx.r9.s64 + 11172;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// lwz r10,1452(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// stw r11,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r11.u32);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// b 0x82479700
	goto loc_82479700;
loc_824796FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82479700:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82479718"))) PPC_WEAK_FUNC(sub_82479718);
PPC_FUNC_IMPL(__imp__sub_82479718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,28424(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28424);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82479758
	if (!ctx.cr0.eq) goto loc_82479758;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,28424(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28424, ctx.r11.u32);
	// addi r3,r9,18340
	ctx.r3.s64 = ctx.r9.s64 + 18340;
	// bl 0x82816528
	ctx.lr = 0x82479750;
	sub_82816528(ctx, base);
	// stw r3,28420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28420, ctx.r3.u32);
	// b 0x8247975c
	goto loc_8247975C;
loc_82479758:
	// lwz r3,28420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28420);
loc_8247975C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82479770"))) PPC_WEAK_FUNC(sub_82479770);
PPC_FUNC_IMPL(__imp__sub_82479770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x824797c0
	ctx.lr = 0x82479790;
	sub_824797C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824797A4;
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

__attribute__((alias("__imp__sub_824797C0"))) PPC_WEAK_FUNC(sub_824797C0);
PPC_FUNC_IMPL(__imp__sub_824797C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,10676
	ctx.r31.s64 = ctx.r11.s64 + 10676;
	// lwz r11,10672(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10672);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82479808
	if (!ctx.cr0.eq) goto loc_82479808;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,29148
	ctx.r9.s64 = ctx.r9.s64 + 29148;
	// stw r11,10672(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10672, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,12688
	ctx.r3.s64 = ctx.r11.s64 + 12688;
	// bl 0x82a4c758
	ctx.lr = 0x82479808;
	sub_82A4C758(ctx, base);
loc_82479808:
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

__attribute__((alias("__imp__sub_82479820"))) PPC_WEAK_FUNC(sub_82479820);
PPC_FUNC_IMPL(__imp__sub_82479820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82479838;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247987c
	if (ctx.cr0.eq) goto loc_8247987C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e83a8
	ctx.lr = 0x82479848;
	sub_827E83A8(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r11,r11,17120
	ctx.r11.s64 = ctx.r11.s64 + 17120;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,18232
	ctx.r10.s64 = ctx.r10.s64 + 18232;
	// addi r9,r9,18284
	ctx.r9.s64 = ctx.r9.s64 + 18284;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r11.u32);
	// b 0x82479880
	goto loc_82479880;
loc_8247987C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82479880:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82479898"))) PPC_WEAK_FUNC(sub_82479898);
PPC_FUNC_IMPL(__imp__sub_82479898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,28416(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28416);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824798d8
	if (!ctx.cr0.eq) goto loc_824798D8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,28416(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28416, ctx.r11.u32);
	// addi r3,r9,18364
	ctx.r3.s64 = ctx.r9.s64 + 18364;
	// bl 0x82816528
	ctx.lr = 0x824798D0;
	sub_82816528(ctx, base);
	// stw r3,28412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28412, ctx.r3.u32);
	// b 0x824798dc
	goto loc_824798DC;
loc_824798D8:
	// lwz r3,28412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28412);
loc_824798DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824798F0"))) PPC_WEAK_FUNC(sub_824798F0);
PPC_FUNC_IMPL(__imp__sub_824798F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82479940
	ctx.lr = 0x82479910;
	sub_82479940(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82479924;
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

__attribute__((alias("__imp__sub_82479940"))) PPC_WEAK_FUNC(sub_82479940);
PPC_FUNC_IMPL(__imp__sub_82479940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,10684
	ctx.r31.s64 = ctx.r11.s64 + 10684;
	// lwz r11,10680(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10680);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82479988
	if (!ctx.cr0.eq) goto loc_82479988;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,29168
	ctx.r9.s64 = ctx.r9.s64 + 29168;
	// stw r11,10680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10680, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,12664
	ctx.r3.s64 = ctx.r11.s64 + 12664;
	// bl 0x82a4c758
	ctx.lr = 0x82479988;
	sub_82A4C758(ctx, base);
loc_82479988:
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

__attribute__((alias("__imp__sub_824799A0"))) PPC_WEAK_FUNC(sub_824799A0);
PPC_FUNC_IMPL(__imp__sub_824799A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1936
	ctx.r3.s64 = 1936;
	// bl 0x82833108
	ctx.lr = 0x824799B8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824799f4
	if (ctx.cr0.eq) goto loc_824799F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e8d80
	ctx.lr = 0x824799C8;
	sub_827E8D80(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,18312
	ctx.r11.s64 = ctx.r11.s64 + 18312;
	// addi r10,r10,19424
	ctx.r10.s64 = ctx.r10.s64 + 19424;
	// addi r9,r9,13548
	ctx.r9.s64 = ctx.r9.s64 + 13548;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x824799f8
	goto loc_824799F8;
loc_824799F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824799F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82479A10"))) PPC_WEAK_FUNC(sub_82479A10);
PPC_FUNC_IMPL(__imp__sub_82479A10) {
	PPC_FUNC_PROLOGUE();
	// li r3,1936
	ctx.r3.s64 = 1936;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82479A18"))) PPC_WEAK_FUNC(sub_82479A18);
PPC_FUNC_IMPL(__imp__sub_82479A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,28408(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28408);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82479a58
	if (!ctx.cr0.eq) goto loc_82479A58;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,28408(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28408, ctx.r11.u32);
	// addi r3,r9,18388
	ctx.r3.s64 = ctx.r9.s64 + 18388;
	// bl 0x82816528
	ctx.lr = 0x82479A50;
	sub_82816528(ctx, base);
	// stw r3,28404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28404, ctx.r3.u32);
	// b 0x82479a5c
	goto loc_82479A5C;
loc_82479A58:
	// lwz r3,28404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28404);
loc_82479A5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82479A70"))) PPC_WEAK_FUNC(sub_82479A70);
PPC_FUNC_IMPL(__imp__sub_82479A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82479ac0
	ctx.lr = 0x82479A90;
	sub_82479AC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82479AA4;
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

__attribute__((alias("__imp__sub_82479AC0"))) PPC_WEAK_FUNC(sub_82479AC0);
PPC_FUNC_IMPL(__imp__sub_82479AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,10692
	ctx.r31.s64 = ctx.r11.s64 + 10692;
	// lwz r11,10688(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10688);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82479b08
	if (!ctx.cr0.eq) goto loc_82479B08;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,29188
	ctx.r9.s64 = ctx.r9.s64 + 29188;
	// stw r11,10688(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10688, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,12640
	ctx.r3.s64 = ctx.r11.s64 + 12640;
	// bl 0x82a4c758
	ctx.lr = 0x82479B08;
	sub_82A4C758(ctx, base);
loc_82479B08:
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

__attribute__((alias("__imp__sub_82479B20"))) PPC_WEAK_FUNC(sub_82479B20);
PPC_FUNC_IMPL(__imp__sub_82479B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1728
	ctx.r3.s64 = 1728;
	// bl 0x82833108
	ctx.lr = 0x82479B38;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82479b74
	if (ctx.cr0.eq) goto loc_82479B74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b5a60
	ctx.lr = 0x82479B48;
	sub_828B5A60(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,29208
	ctx.r11.s64 = ctx.r11.s64 + 29208;
	// addi r10,r10,30264
	ctx.r10.s64 = ctx.r10.s64 + 30264;
	// addi r9,r9,29308
	ctx.r9.s64 = ctx.r9.s64 + 29308;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x82479b78
	goto loc_82479B78;
loc_82479B74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82479B78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82479B90"))) PPC_WEAK_FUNC(sub_82479B90);
PPC_FUNC_IMPL(__imp__sub_82479B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,28400(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28400);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82479bd0
	if (!ctx.cr0.eq) goto loc_82479BD0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,28400(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28400, ctx.r11.u32);
	// addi r3,r9,18412
	ctx.r3.s64 = ctx.r9.s64 + 18412;
	// bl 0x82816528
	ctx.lr = 0x82479BC8;
	sub_82816528(ctx, base);
	// stw r3,28396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28396, ctx.r3.u32);
	// b 0x82479bd4
	goto loc_82479BD4;
loc_82479BD0:
	// lwz r3,28396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28396);
loc_82479BD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82479BE8"))) PPC_WEAK_FUNC(sub_82479BE8);
PPC_FUNC_IMPL(__imp__sub_82479BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82479c38
	ctx.lr = 0x82479C08;
	sub_82479C38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82479C1C;
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

__attribute__((alias("__imp__sub_82479C38"))) PPC_WEAK_FUNC(sub_82479C38);
PPC_FUNC_IMPL(__imp__sub_82479C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,11052
	ctx.r31.s64 = ctx.r11.s64 + 11052;
	// lwz r11,11048(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11048);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82479c80
	if (!ctx.cr0.eq) goto loc_82479C80;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,30316
	ctx.r9.s64 = ctx.r9.s64 + 30316;
	// stw r11,11048(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11048, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,12616
	ctx.r3.s64 = ctx.r11.s64 + 12616;
	// bl 0x82a4c758
	ctx.lr = 0x82479C80;
	sub_82A4C758(ctx, base);
loc_82479C80:
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

__attribute__((alias("__imp__sub_82479C98"))) PPC_WEAK_FUNC(sub_82479C98);
PPC_FUNC_IMPL(__imp__sub_82479C98) {
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
	// li r3,1840
	ctx.r3.s64 = 1840;
	// bl 0x82833108
	ctx.lr = 0x82479CAC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82479cbc
	if (ctx.cr0.eq) goto loc_82479CBC;
	// bl 0x827de5d8
	ctx.lr = 0x82479CB8;
	sub_827DE5D8(ctx, base);
	// b 0x82479cc0
	goto loc_82479CC0;
loc_82479CBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82479CC0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82479CD0"))) PPC_WEAK_FUNC(sub_82479CD0);
PPC_FUNC_IMPL(__imp__sub_82479CD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1840
	ctx.r3.s64 = 1840;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82479CD8"))) PPC_WEAK_FUNC(sub_82479CD8);
PPC_FUNC_IMPL(__imp__sub_82479CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,28392(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28392);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82479d18
	if (!ctx.cr0.eq) goto loc_82479D18;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,28392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28392, ctx.r11.u32);
	// addi r3,r9,18432
	ctx.r3.s64 = ctx.r9.s64 + 18432;
	// bl 0x82816528
	ctx.lr = 0x82479D10;
	sub_82816528(ctx, base);
	// stw r3,28388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28388, ctx.r3.u32);
	// b 0x82479d1c
	goto loc_82479D1C;
loc_82479D18:
	// lwz r3,28388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28388);
loc_82479D1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82479D30"))) PPC_WEAK_FUNC(sub_82479D30);
PPC_FUNC_IMPL(__imp__sub_82479D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82479d80
	ctx.lr = 0x82479D50;
	sub_82479D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82479D64;
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

__attribute__((alias("__imp__sub_82479D80"))) PPC_WEAK_FUNC(sub_82479D80);
PPC_FUNC_IMPL(__imp__sub_82479D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,10404
	ctx.r31.s64 = ctx.r11.s64 + 10404;
	// lwz r11,10400(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10400);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82479dc8
	if (!ctx.cr0.eq) goto loc_82479DC8;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,31472
	ctx.r9.s64 = ctx.r9.s64 + 31472;
	// stw r11,10400(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10400, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,12592
	ctx.r3.s64 = ctx.r11.s64 + 12592;
	// bl 0x82a4c758
	ctx.lr = 0x82479DC8;
	sub_82A4C758(ctx, base);
loc_82479DC8:
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

__attribute__((alias("__imp__sub_82479DE0"))) PPC_WEAK_FUNC(sub_82479DE0);
PPC_FUNC_IMPL(__imp__sub_82479DE0) {
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
	// li r3,1920
	ctx.r3.s64 = 1920;
	// bl 0x82833108
	ctx.lr = 0x82479DF4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82479e04
	if (ctx.cr0.eq) goto loc_82479E04;
	// bl 0x827df828
	ctx.lr = 0x82479E00;
	sub_827DF828(ctx, base);
	// b 0x82479e08
	goto loc_82479E08;
loc_82479E04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82479E08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82479E18"))) PPC_WEAK_FUNC(sub_82479E18);
PPC_FUNC_IMPL(__imp__sub_82479E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,28384(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28384);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82479e58
	if (!ctx.cr0.eq) goto loc_82479E58;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,28384(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28384, ctx.r11.u32);
	// addi r3,r9,18460
	ctx.r3.s64 = ctx.r9.s64 + 18460;
	// bl 0x82816528
	ctx.lr = 0x82479E50;
	sub_82816528(ctx, base);
	// stw r3,28380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28380, ctx.r3.u32);
	// b 0x82479e5c
	goto loc_82479E5C;
loc_82479E58:
	// lwz r3,28380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28380);
loc_82479E5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82479E70"))) PPC_WEAK_FUNC(sub_82479E70);
PPC_FUNC_IMPL(__imp__sub_82479E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82479ec0
	ctx.lr = 0x82479E90;
	sub_82479EC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82479EA4;
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

__attribute__((alias("__imp__sub_82479EC0"))) PPC_WEAK_FUNC(sub_82479EC0);
PPC_FUNC_IMPL(__imp__sub_82479EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,10412
	ctx.r31.s64 = ctx.r11.s64 + 10412;
	// lwz r11,10408(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10408);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82479f08
	if (!ctx.cr0.eq) goto loc_82479F08;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,32608
	ctx.r9.s64 = ctx.r9.s64 + 32608;
	// stw r11,10408(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10408, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,12568
	ctx.r3.s64 = ctx.r11.s64 + 12568;
	// bl 0x82a4c758
	ctx.lr = 0x82479F08;
	sub_82A4C758(ctx, base);
loc_82479F08:
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

__attribute__((alias("__imp__sub_82479F20"))) PPC_WEAK_FUNC(sub_82479F20);
PPC_FUNC_IMPL(__imp__sub_82479F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1728
	ctx.r3.s64 = 1728;
	// bl 0x82833108
	ctx.lr = 0x82479F38;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82479fa8
	if (ctx.cr0.eq) goto loc_82479FA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b5a60
	ctx.lr = 0x82479F48;
	sub_828B5A60(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r10,r10,26784
	ctx.r10.s64 = ctx.r10.s64 + 26784;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r10,100
	ctx.r10.s64 = 100;
	// addi r9,r9,27840
	ctx.r9.s64 = ctx.r9.s64 + 27840;
	// addi r8,r8,29308
	ctx.r8.s64 = ctx.r8.s64 + 29308;
	// stw r10,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r11.u32);
	// ori r9,r7,60000
	ctx.r9.u64 = ctx.r7.u64 | 60000;
	// stw r11,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,1724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1724, ctx.r8.u32);
	// stw r9,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r9.u32);
	// lwz r10,1716(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	// rlwimi r10,r11,30,0,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 30) & 0xF0000000) | (ctx.r10.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r10,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r10.u32);
	// b 0x82479fac
	goto loc_82479FAC;
loc_82479FA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82479FAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82479FC0"))) PPC_WEAK_FUNC(sub_82479FC0);
PPC_FUNC_IMPL(__imp__sub_82479FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,28376(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28376);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247a000
	if (!ctx.cr0.eq) goto loc_8247A000;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,28376(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28376, ctx.r11.u32);
	// addi r3,r9,18488
	ctx.r3.s64 = ctx.r9.s64 + 18488;
	// bl 0x82816528
	ctx.lr = 0x82479FF8;
	sub_82816528(ctx, base);
	// stw r3,28372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28372, ctx.r3.u32);
	// b 0x8247a004
	goto loc_8247A004;
loc_8247A000:
	// lwz r3,28372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28372);
loc_8247A004:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8247A018"))) PPC_WEAK_FUNC(sub_8247A018);
PPC_FUNC_IMPL(__imp__sub_8247A018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8247a068
	ctx.lr = 0x8247A038;
	sub_8247A068(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247A04C;
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

__attribute__((alias("__imp__sub_8247A068"))) PPC_WEAK_FUNC(sub_8247A068);
PPC_FUNC_IMPL(__imp__sub_8247A068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,10420
	ctx.r31.s64 = ctx.r11.s64 + 10420;
	// lwz r11,10416(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10416);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247a0b0
	if (!ctx.cr0.eq) goto loc_8247A0B0;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,32628
	ctx.r9.s64 = ctx.r9.s64 + 32628;
	// stw r11,10416(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10416, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,12544
	ctx.r3.s64 = ctx.r11.s64 + 12544;
	// bl 0x82a4c758
	ctx.lr = 0x8247A0B0;
	sub_82A4C758(ctx, base);
loc_8247A0B0:
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

__attribute__((alias("__imp__sub_8247A0C8"))) PPC_WEAK_FUNC(sub_8247A0C8);
PPC_FUNC_IMPL(__imp__sub_8247A0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1712
	ctx.r3.s64 = 1712;
	// bl 0x82833108
	ctx.lr = 0x8247A0E0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247a128
	if (ctx.cr0.eq) goto loc_8247A128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b5a60
	ctx.lr = 0x8247A0F0;
	sub_828B5A60(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,29544
	ctx.r10.s64 = ctx.r10.s64 + 29544;
	// addi r9,r9,30600
	ctx.r9.s64 = ctx.r9.s64 + 30600;
	// stw r11,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r11.u32);
	// addi r8,r8,29308
	ctx.r8.s64 = ctx.r8.s64 + 29308;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// stw r11,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r11.u32);
	// b 0x8247a12c
	goto loc_8247A12C;
loc_8247A128:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247A12C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8247A140"))) PPC_WEAK_FUNC(sub_8247A140);
PPC_FUNC_IMPL(__imp__sub_8247A140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,28368(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28368);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247a180
	if (!ctx.cr0.eq) goto loc_8247A180;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,28368(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28368, ctx.r11.u32);
	// addi r3,r9,18512
	ctx.r3.s64 = ctx.r9.s64 + 18512;
	// bl 0x82816528
	ctx.lr = 0x8247A178;
	sub_82816528(ctx, base);
	// stw r3,28364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28364, ctx.r3.u32);
	// b 0x8247a184
	goto loc_8247A184;
loc_8247A180:
	// lwz r3,28364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28364);
loc_8247A184:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8247A198"))) PPC_WEAK_FUNC(sub_8247A198);
PPC_FUNC_IMPL(__imp__sub_8247A198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8247a1e8
	ctx.lr = 0x8247A1B8;
	sub_8247A1E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247A1CC;
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

__attribute__((alias("__imp__sub_8247A1E8"))) PPC_WEAK_FUNC(sub_8247A1E8);
PPC_FUNC_IMPL(__imp__sub_8247A1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,10428
	ctx.r31.s64 = ctx.r11.s64 + 10428;
	// lwz r11,10424(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10424);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247a230
	if (!ctx.cr0.eq) goto loc_8247A230;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,32648
	ctx.r9.s64 = ctx.r9.s64 + 32648;
	// stw r11,10424(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10424, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,12520
	ctx.r3.s64 = ctx.r11.s64 + 12520;
	// bl 0x82a4c758
	ctx.lr = 0x8247A230;
	sub_82A4C758(ctx, base);
loc_8247A230:
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

__attribute__((alias("__imp__sub_8247A248"))) PPC_WEAK_FUNC(sub_8247A248);
PPC_FUNC_IMPL(__imp__sub_8247A248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8247A260;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247a29c
	if (ctx.cr0.eq) goto loc_8247A29C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f4190
	ctx.lr = 0x8247A270;
	sub_827F4190(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// addi r11,r11,-25632
	ctx.r11.s64 = ctx.r11.s64 + -25632;
	// addi r10,r10,-24572
	ctx.r10.s64 = ctx.r10.s64 + -24572;
	// addi r9,r9,-25680
	ctx.r9.s64 = ctx.r9.s64 + -25680;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8247a2a0
	goto loc_8247A2A0;
loc_8247A29C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247A2A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8247A2B8"))) PPC_WEAK_FUNC(sub_8247A2B8);
PPC_FUNC_IMPL(__imp__sub_8247A2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,28360(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28360);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247a2f8
	if (!ctx.cr0.eq) goto loc_8247A2F8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,28360(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28360, ctx.r11.u32);
	// addi r3,r9,18536
	ctx.r3.s64 = ctx.r9.s64 + 18536;
	// bl 0x82816528
	ctx.lr = 0x8247A2F0;
	sub_82816528(ctx, base);
	// stw r3,28356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28356, ctx.r3.u32);
	// b 0x8247a2fc
	goto loc_8247A2FC;
loc_8247A2F8:
	// lwz r3,28356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28356);
loc_8247A2FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8247A310"))) PPC_WEAK_FUNC(sub_8247A310);
PPC_FUNC_IMPL(__imp__sub_8247A310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8247a360
	ctx.lr = 0x8247A330;
	sub_8247A360(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247A344;
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

__attribute__((alias("__imp__sub_8247A360"))) PPC_WEAK_FUNC(sub_8247A360);
PPC_FUNC_IMPL(__imp__sub_8247A360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,10436
	ctx.r31.s64 = ctx.r11.s64 + 10436;
	// lwz r11,10432(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10432);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247a3a8
	if (!ctx.cr0.eq) goto loc_8247A3A8;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,32668
	ctx.r9.s64 = ctx.r9.s64 + 32668;
	// stw r11,10432(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10432, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,12496
	ctx.r3.s64 = ctx.r11.s64 + 12496;
	// bl 0x82a4c758
	ctx.lr = 0x8247A3A8;
	sub_82A4C758(ctx, base);
loc_8247A3A8:
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

__attribute__((alias("__imp__sub_8247A3C0"))) PPC_WEAK_FUNC(sub_8247A3C0);
PPC_FUNC_IMPL(__imp__sub_8247A3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1840
	ctx.r3.s64 = 1840;
	// bl 0x82833108
	ctx.lr = 0x8247A3D8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247a414
	if (ctx.cr0.eq) goto loc_8247A414;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827de5d8
	ctx.lr = 0x8247A3E8;
	sub_827DE5D8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r11,r11,32688
	ctx.r11.s64 = ctx.r11.s64 + 32688;
	// addi r10,r10,-31788
	ctx.r10.s64 = ctx.r10.s64 + -31788;
	// addi r9,r9,31448
	ctx.r9.s64 = ctx.r9.s64 + 31448;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8247a418
	goto loc_8247A418;
loc_8247A414:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247A418:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8247A430"))) PPC_WEAK_FUNC(sub_8247A430);
PPC_FUNC_IMPL(__imp__sub_8247A430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,28352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28352);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247a470
	if (!ctx.cr0.eq) goto loc_8247A470;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,28352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28352, ctx.r11.u32);
	// addi r3,r9,18560
	ctx.r3.s64 = ctx.r9.s64 + 18560;
	// bl 0x82816528
	ctx.lr = 0x8247A468;
	sub_82816528(ctx, base);
	// stw r3,28348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28348, ctx.r3.u32);
	// b 0x8247a474
	goto loc_8247A474;
loc_8247A470:
	// lwz r3,28348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28348);
loc_8247A474:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8247A488"))) PPC_WEAK_FUNC(sub_8247A488);
PPC_FUNC_IMPL(__imp__sub_8247A488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8247a4d8
	ctx.lr = 0x8247A4A8;
	sub_8247A4D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247A4BC;
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

__attribute__((alias("__imp__sub_8247A4D8"))) PPC_WEAK_FUNC(sub_8247A4D8);
PPC_FUNC_IMPL(__imp__sub_8247A4D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,10444
	ctx.r31.s64 = ctx.r11.s64 + 10444;
	// lwz r11,10440(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10440);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247a520
	if (!ctx.cr0.eq) goto loc_8247A520;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-31736
	ctx.r9.s64 = ctx.r9.s64 + -31736;
	// stw r11,10440(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10440, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,12472
	ctx.r3.s64 = ctx.r11.s64 + 12472;
	// bl 0x82a4c758
	ctx.lr = 0x8247A520;
	sub_82A4C758(ctx, base);
loc_8247A520:
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

__attribute__((alias("__imp__sub_8247A538"))) PPC_WEAK_FUNC(sub_8247A538);
PPC_FUNC_IMPL(__imp__sub_8247A538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8247A550;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247a58c
	if (ctx.cr0.eq) goto loc_8247A58C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827df828
	ctx.lr = 0x8247A560;
	sub_827DF828(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r11,r11,-31712
	ctx.r11.s64 = ctx.r11.s64 + -31712;
	// addi r10,r10,-30652
	ctx.r10.s64 = ctx.r10.s64 + -30652;
	// addi r9,r9,-30600
	ctx.r9.s64 = ctx.r9.s64 + -30600;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8247a590
	goto loc_8247A590;
loc_8247A58C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247A590:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8247A5A8"))) PPC_WEAK_FUNC(sub_8247A5A8);
PPC_FUNC_IMPL(__imp__sub_8247A5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,28344(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28344);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247a5e8
	if (!ctx.cr0.eq) goto loc_8247A5E8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,28344(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28344, ctx.r11.u32);
	// addi r3,r9,18588
	ctx.r3.s64 = ctx.r9.s64 + 18588;
	// bl 0x82816528
	ctx.lr = 0x8247A5E0;
	sub_82816528(ctx, base);
	// stw r3,28340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28340, ctx.r3.u32);
	// b 0x8247a5ec
	goto loc_8247A5EC;
loc_8247A5E8:
	// lwz r3,28340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28340);
loc_8247A5EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8247A600"))) PPC_WEAK_FUNC(sub_8247A600);
PPC_FUNC_IMPL(__imp__sub_8247A600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8247a650
	ctx.lr = 0x8247A620;
	sub_8247A650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247A634;
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

__attribute__((alias("__imp__sub_8247A650"))) PPC_WEAK_FUNC(sub_8247A650);
PPC_FUNC_IMPL(__imp__sub_8247A650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,10452
	ctx.r31.s64 = ctx.r11.s64 + 10452;
	// lwz r11,10448(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10448);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247a698
	if (!ctx.cr0.eq) goto loc_8247A698;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-30576
	ctx.r9.s64 = ctx.r9.s64 + -30576;
	// stw r11,10448(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10448, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,12448
	ctx.r3.s64 = ctx.r11.s64 + 12448;
	// bl 0x82a4c758
	ctx.lr = 0x8247A698;
	sub_82A4C758(ctx, base);
loc_8247A698:
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

__attribute__((alias("__imp__sub_8247A6B0"))) PPC_WEAK_FUNC(sub_8247A6B0);
PPC_FUNC_IMPL(__imp__sub_8247A6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1776
	ctx.r3.s64 = 1776;
	// bl 0x82833108
	ctx.lr = 0x8247A6C8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247a728
	if (ctx.cr0.eq) goto loc_8247A728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b5a60
	ctx.lr = 0x8247A6D8;
	sub_828B5A60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// stw r11,1684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1684, ctx.r11.u32);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r10,r10,-29440
	ctx.r10.s64 = ctx.r10.s64 + -29440;
	// stw r11,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r11.u32);
	// stw r11,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r11.u32);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r9,r9,-28384
	ctx.r9.s64 = ctx.r9.s64 + -28384;
	// addi r8,r8,29308
	ctx.r8.s64 = ctx.r8.s64 + 29308;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,1724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1724, ctx.r10.u32);
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// oris r11,r11,40960
	ctx.r11.u64 = ctx.r11.u64 | 2684354560;
	// stw r11,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r11.u32);
	// b 0x8247a72c
	goto loc_8247A72C;
loc_8247A728:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247A72C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8247A740"))) PPC_WEAK_FUNC(sub_8247A740);
PPC_FUNC_IMPL(__imp__sub_8247A740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,28336(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28336);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247a780
	if (!ctx.cr0.eq) goto loc_8247A780;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,28336(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28336, ctx.r11.u32);
	// addi r3,r9,18620
	ctx.r3.s64 = ctx.r9.s64 + 18620;
	// bl 0x82816528
	ctx.lr = 0x8247A778;
	sub_82816528(ctx, base);
	// stw r3,28332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28332, ctx.r3.u32);
	// b 0x8247a784
	goto loc_8247A784;
loc_8247A780:
	// lwz r3,28332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28332);
loc_8247A784:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8247A798"))) PPC_WEAK_FUNC(sub_8247A798);
PPC_FUNC_IMPL(__imp__sub_8247A798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8247a7e8
	ctx.lr = 0x8247A7B8;
	sub_8247A7E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247A7CC;
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

__attribute__((alias("__imp__sub_8247A7E8"))) PPC_WEAK_FUNC(sub_8247A7E8);
PPC_FUNC_IMPL(__imp__sub_8247A7E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,10460
	ctx.r31.s64 = ctx.r11.s64 + 10460;
	// lwz r11,10456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10456);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247a830
	if (!ctx.cr0.eq) goto loc_8247A830;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-30556
	ctx.r9.s64 = ctx.r9.s64 + -30556;
	// stw r11,10456(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10456, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,12424
	ctx.r3.s64 = ctx.r11.s64 + 12424;
	// bl 0x82a4c758
	ctx.lr = 0x8247A830;
	sub_82A4C758(ctx, base);
loc_8247A830:
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

__attribute__((alias("__imp__sub_8247A848"))) PPC_WEAK_FUNC(sub_8247A848);
PPC_FUNC_IMPL(__imp__sub_8247A848) {
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
	// li r3,6176
	ctx.r3.s64 = 6176;
	// bl 0x82833108
	ctx.lr = 0x8247A85C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8247a86c
	if (ctx.cr0.eq) goto loc_8247A86C;
	// bl 0x825b86c0
	ctx.lr = 0x8247A868;
	sub_825B86C0(ctx, base);
	// b 0x8247a870
	goto loc_8247A870;
loc_8247A86C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247A870:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8247A880"))) PPC_WEAK_FUNC(sub_8247A880);
PPC_FUNC_IMPL(__imp__sub_8247A880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,28328(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28328);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247a8c0
	if (!ctx.cr0.eq) goto loc_8247A8C0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,28328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28328, ctx.r11.u32);
	// addi r3,r9,18640
	ctx.r3.s64 = ctx.r9.s64 + 18640;
	// bl 0x82816528
	ctx.lr = 0x8247A8B8;
	sub_82816528(ctx, base);
	// stw r3,28324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28324, ctx.r3.u32);
	// b 0x8247a8c4
	goto loc_8247A8C4;
loc_8247A8C0:
	// lwz r3,28324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28324);
loc_8247A8C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8247A8D8"))) PPC_WEAK_FUNC(sub_8247A8D8);
PPC_FUNC_IMPL(__imp__sub_8247A8D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8247a928
	ctx.lr = 0x8247A8F8;
	sub_8247A928(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247A90C;
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

__attribute__((alias("__imp__sub_8247A928"))) PPC_WEAK_FUNC(sub_8247A928);
PPC_FUNC_IMPL(__imp__sub_8247A928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,10476
	ctx.r31.s64 = ctx.r11.s64 + 10476;
	// lwz r11,10472(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10472);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247a970
	if (!ctx.cr0.eq) goto loc_8247A970;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-30536
	ctx.r9.s64 = ctx.r9.s64 + -30536;
	// stw r11,10472(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10472, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,12400
	ctx.r3.s64 = ctx.r11.s64 + 12400;
	// bl 0x82a4c758
	ctx.lr = 0x8247A970;
	sub_82A4C758(ctx, base);
loc_8247A970:
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

__attribute__((alias("__imp__sub_8247A988"))) PPC_WEAK_FUNC(sub_8247A988);
PPC_FUNC_IMPL(__imp__sub_8247A988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1424
	ctx.r3.s64 = 1424;
	// bl 0x82833108
	ctx.lr = 0x8247A9A0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247a9e8
	if (ctx.cr0.eq) goto loc_8247A9E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bc540
	ctx.lr = 0x8247A9B0;
	sub_829BC540(ctx, base);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-30512
	ctx.r10.s64 = ctx.r10.s64 + -30512;
	// addi r9,r9,-29504
	ctx.r9.s64 = ctx.r9.s64 + -29504;
	// stw r11,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r11.u32);
	// addi r8,r8,14028
	ctx.r8.s64 = ctx.r8.s64 + 14028;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// b 0x8247a9ec
	goto loc_8247A9EC;
loc_8247A9E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247A9EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8247AA00"))) PPC_WEAK_FUNC(sub_8247AA00);
PPC_FUNC_IMPL(__imp__sub_8247AA00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,28320(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28320);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247aa40
	if (!ctx.cr0.eq) goto loc_8247AA40;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,28320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28320, ctx.r11.u32);
	// addi r3,r9,18668
	ctx.r3.s64 = ctx.r9.s64 + 18668;
	// bl 0x82816528
	ctx.lr = 0x8247AA38;
	sub_82816528(ctx, base);
	// stw r3,28316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28316, ctx.r3.u32);
	// b 0x8247aa44
	goto loc_8247AA44;
loc_8247AA40:
	// lwz r3,28316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28316);
loc_8247AA44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8247AA58"))) PPC_WEAK_FUNC(sub_8247AA58);
PPC_FUNC_IMPL(__imp__sub_8247AA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8247aaa8
	ctx.lr = 0x8247AA78;
	sub_8247AAA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247AA8C;
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

__attribute__((alias("__imp__sub_8247AAA8"))) PPC_WEAK_FUNC(sub_8247AAA8);
PPC_FUNC_IMPL(__imp__sub_8247AAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,10980
	ctx.r31.s64 = ctx.r11.s64 + 10980;
	// lwz r11,10976(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10976);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247aaf0
	if (!ctx.cr0.eq) goto loc_8247AAF0;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-29452
	ctx.r9.s64 = ctx.r9.s64 + -29452;
	// stw r11,10976(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10976, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,12376
	ctx.r3.s64 = ctx.r11.s64 + 12376;
	// bl 0x82a4c758
	ctx.lr = 0x8247AAF0;
	sub_82A4C758(ctx, base);
loc_8247AAF0:
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

__attribute__((alias("__imp__sub_8247AB08"))) PPC_WEAK_FUNC(sub_8247AB08);
PPC_FUNC_IMPL(__imp__sub_8247AB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1728
	ctx.r3.s64 = 1728;
	// bl 0x82833108
	ctx.lr = 0x8247AB20;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247ab64
	if (ctx.cr0.eq) goto loc_8247AB64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824855a0
	ctx.lr = 0x8247AB30;
	sub_824855A0(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// addi r11,r11,26872
	ctx.r11.s64 = ctx.r11.s64 + 26872;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,27924
	ctx.r10.s64 = ctx.r10.s64 + 27924;
	// addi r9,r9,12092
	ctx.r9.s64 = ctx.r9.s64 + 12092;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// b 0x8247ab68
	goto loc_8247AB68;
loc_8247AB64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247AB68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8247AB80"))) PPC_WEAK_FUNC(sub_8247AB80);
PPC_FUNC_IMPL(__imp__sub_8247AB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,28312(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28312);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247abc0
	if (!ctx.cr0.eq) goto loc_8247ABC0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,28312(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28312, ctx.r11.u32);
	// addi r3,r9,18692
	ctx.r3.s64 = ctx.r9.s64 + 18692;
	// bl 0x82816528
	ctx.lr = 0x8247ABB8;
	sub_82816528(ctx, base);
	// stw r3,28308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28308, ctx.r3.u32);
	// b 0x8247abc4
	goto loc_8247ABC4;
loc_8247ABC0:
	// lwz r3,28308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28308);
loc_8247ABC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8247ABD8"))) PPC_WEAK_FUNC(sub_8247ABD8);
PPC_FUNC_IMPL(__imp__sub_8247ABD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8247ac28
	ctx.lr = 0x8247ABF8;
	sub_8247AC28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247AC0C;
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

__attribute__((alias("__imp__sub_8247AC28"))) PPC_WEAK_FUNC(sub_8247AC28);
PPC_FUNC_IMPL(__imp__sub_8247AC28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,10988
	ctx.r31.s64 = ctx.r11.s64 + 10988;
	// lwz r11,10984(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10984);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247ac70
	if (!ctx.cr0.eq) goto loc_8247AC70;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-29432
	ctx.r9.s64 = ctx.r9.s64 + -29432;
	// stw r11,10984(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10984, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,12352
	ctx.r3.s64 = ctx.r11.s64 + 12352;
	// bl 0x82a4c758
	ctx.lr = 0x8247AC70;
	sub_82A4C758(ctx, base);
loc_8247AC70:
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

__attribute__((alias("__imp__sub_8247AC88"))) PPC_WEAK_FUNC(sub_8247AC88);
PPC_FUNC_IMPL(__imp__sub_8247AC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1728
	ctx.r3.s64 = 1728;
	// bl 0x82833108
	ctx.lr = 0x8247ACA0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247ace4
	if (ctx.cr0.eq) goto loc_8247ACE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824855a0
	ctx.lr = 0x8247ACB0;
	sub_824855A0(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// addi r11,r11,27976
	ctx.r11.s64 = ctx.r11.s64 + 27976;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,29028
	ctx.r10.s64 = ctx.r10.s64 + 29028;
	// addi r9,r9,12092
	ctx.r9.s64 = ctx.r9.s64 + 12092;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// b 0x8247ace8
	goto loc_8247ACE8;
loc_8247ACE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247ACE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8247AD00"))) PPC_WEAK_FUNC(sub_8247AD00);
PPC_FUNC_IMPL(__imp__sub_8247AD00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,28304(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28304);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247ad40
	if (!ctx.cr0.eq) goto loc_8247AD40;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,28304(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28304, ctx.r11.u32);
	// addi r3,r9,18708
	ctx.r3.s64 = ctx.r9.s64 + 18708;
	// bl 0x82816528
	ctx.lr = 0x8247AD38;
	sub_82816528(ctx, base);
	// stw r3,28300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28300, ctx.r3.u32);
	// b 0x8247ad44
	goto loc_8247AD44;
loc_8247AD40:
	// lwz r3,28300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28300);
loc_8247AD44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8247AD58"))) PPC_WEAK_FUNC(sub_8247AD58);
PPC_FUNC_IMPL(__imp__sub_8247AD58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8247ada8
	ctx.lr = 0x8247AD78;
	sub_8247ADA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247AD8C;
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

__attribute__((alias("__imp__sub_8247ADA8"))) PPC_WEAK_FUNC(sub_8247ADA8);
PPC_FUNC_IMPL(__imp__sub_8247ADA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,10996
	ctx.r31.s64 = ctx.r11.s64 + 10996;
	// lwz r11,10992(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10992);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247adf0
	if (!ctx.cr0.eq) goto loc_8247ADF0;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-29412
	ctx.r9.s64 = ctx.r9.s64 + -29412;
	// stw r11,10992(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10992, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,12328
	ctx.r3.s64 = ctx.r11.s64 + 12328;
	// bl 0x82a4c758
	ctx.lr = 0x8247ADF0;
	sub_82A4C758(ctx, base);
loc_8247ADF0:
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

__attribute__((alias("__imp__sub_8247AE08"))) PPC_WEAK_FUNC(sub_8247AE08);
PPC_FUNC_IMPL(__imp__sub_8247AE08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1728
	ctx.r3.s64 = 1728;
	// bl 0x82833108
	ctx.lr = 0x8247AE20;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247ae5c
	if (ctx.cr0.eq) goto loc_8247AE5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824855a0
	ctx.lr = 0x8247AE30;
	sub_824855A0(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r11,r11,-29392
	ctx.r11.s64 = ctx.r11.s64 + -29392;
	// addi r10,r10,-28340
	ctx.r10.s64 = ctx.r10.s64 + -28340;
	// addi r9,r9,12092
	ctx.r9.s64 = ctx.r9.s64 + 12092;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8247ae60
	goto loc_8247AE60;
loc_8247AE5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247AE60:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8247AE78"))) PPC_WEAK_FUNC(sub_8247AE78);
PPC_FUNC_IMPL(__imp__sub_8247AE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,28296(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28296);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247aeb8
	if (!ctx.cr0.eq) goto loc_8247AEB8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,28296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28296, ctx.r11.u32);
	// addi r3,r9,18724
	ctx.r3.s64 = ctx.r9.s64 + 18724;
	// bl 0x82816528
	ctx.lr = 0x8247AEB0;
	sub_82816528(ctx, base);
	// stw r3,28292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28292, ctx.r3.u32);
	// b 0x8247aebc
	goto loc_8247AEBC;
loc_8247AEB8:
	// lwz r3,28292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28292);
loc_8247AEBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8247AED0"))) PPC_WEAK_FUNC(sub_8247AED0);
PPC_FUNC_IMPL(__imp__sub_8247AED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8247af20
	ctx.lr = 0x8247AEF0;
	sub_8247AF20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247AF04;
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

__attribute__((alias("__imp__sub_8247AF20"))) PPC_WEAK_FUNC(sub_8247AF20);
PPC_FUNC_IMPL(__imp__sub_8247AF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,11004
	ctx.r31.s64 = ctx.r11.s64 + 11004;
	// lwz r11,11000(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11000);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247af68
	if (!ctx.cr0.eq) goto loc_8247AF68;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-28288
	ctx.r9.s64 = ctx.r9.s64 + -28288;
	// stw r11,11000(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11000, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,12304
	ctx.r3.s64 = ctx.r11.s64 + 12304;
	// bl 0x82a4c758
	ctx.lr = 0x8247AF68;
	sub_82A4C758(ctx, base);
loc_8247AF68:
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

__attribute__((alias("__imp__sub_8247AF80"))) PPC_WEAK_FUNC(sub_8247AF80);
PPC_FUNC_IMPL(__imp__sub_8247AF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1744
	ctx.r3.s64 = 1744;
	// bl 0x82833108
	ctx.lr = 0x8247AF98;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247afdc
	if (ctx.cr0.eq) goto loc_8247AFDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824855a0
	ctx.lr = 0x8247AFA8;
	sub_824855A0(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// addi r11,r11,-28264
	ctx.r11.s64 = ctx.r11.s64 + -28264;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-27212
	ctx.r10.s64 = ctx.r10.s64 + -27212;
	// addi r9,r9,12092
	ctx.r9.s64 = ctx.r9.s64 + 12092;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// b 0x8247afe0
	goto loc_8247AFE0;
loc_8247AFDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247AFE0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8247AFF8"))) PPC_WEAK_FUNC(sub_8247AFF8);
PPC_FUNC_IMPL(__imp__sub_8247AFF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,28288(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28288);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247b038
	if (!ctx.cr0.eq) goto loc_8247B038;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,28288(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28288, ctx.r11.u32);
	// addi r3,r9,18740
	ctx.r3.s64 = ctx.r9.s64 + 18740;
	// bl 0x82816528
	ctx.lr = 0x8247B030;
	sub_82816528(ctx, base);
	// stw r3,28284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28284, ctx.r3.u32);
	// b 0x8247b03c
	goto loc_8247B03C;
loc_8247B038:
	// lwz r3,28284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28284);
loc_8247B03C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8247B050"))) PPC_WEAK_FUNC(sub_8247B050);
PPC_FUNC_IMPL(__imp__sub_8247B050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8247b0a0
	ctx.lr = 0x8247B070;
	sub_8247B0A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247B084;
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

__attribute__((alias("__imp__sub_8247B0A0"))) PPC_WEAK_FUNC(sub_8247B0A0);
PPC_FUNC_IMPL(__imp__sub_8247B0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,11012
	ctx.r31.s64 = ctx.r11.s64 + 11012;
	// lwz r11,11008(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11008);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247b0e8
	if (!ctx.cr0.eq) goto loc_8247B0E8;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-27160
	ctx.r9.s64 = ctx.r9.s64 + -27160;
	// stw r11,11008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11008, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,12280
	ctx.r3.s64 = ctx.r11.s64 + 12280;
	// bl 0x82a4c758
	ctx.lr = 0x8247B0E8;
	sub_82A4C758(ctx, base);
loc_8247B0E8:
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

__attribute__((alias("__imp__sub_8247B100"))) PPC_WEAK_FUNC(sub_8247B100);
PPC_FUNC_IMPL(__imp__sub_8247B100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1728
	ctx.r3.s64 = 1728;
	// bl 0x82833108
	ctx.lr = 0x8247B118;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247b154
	if (ctx.cr0.eq) goto loc_8247B154;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824855a0
	ctx.lr = 0x8247B128;
	sub_824855A0(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r11,r11,-27136
	ctx.r11.s64 = ctx.r11.s64 + -27136;
	// addi r10,r10,-26084
	ctx.r10.s64 = ctx.r10.s64 + -26084;
	// addi r9,r9,12092
	ctx.r9.s64 = ctx.r9.s64 + 12092;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8247b158
	goto loc_8247B158;
loc_8247B154:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247B158:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8247B170"))) PPC_WEAK_FUNC(sub_8247B170);
PPC_FUNC_IMPL(__imp__sub_8247B170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,28280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28280);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247b1b0
	if (!ctx.cr0.eq) goto loc_8247B1B0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,28280(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28280, ctx.r11.u32);
	// addi r3,r9,18756
	ctx.r3.s64 = ctx.r9.s64 + 18756;
	// bl 0x82816528
	ctx.lr = 0x8247B1A8;
	sub_82816528(ctx, base);
	// stw r3,28276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28276, ctx.r3.u32);
	// b 0x8247b1b4
	goto loc_8247B1B4;
loc_8247B1B0:
	// lwz r3,28276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28276);
loc_8247B1B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8247B1C8"))) PPC_WEAK_FUNC(sub_8247B1C8);
PPC_FUNC_IMPL(__imp__sub_8247B1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8247b218
	ctx.lr = 0x8247B1E8;
	sub_8247B218(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247B1FC;
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

__attribute__((alias("__imp__sub_8247B218"))) PPC_WEAK_FUNC(sub_8247B218);
PPC_FUNC_IMPL(__imp__sub_8247B218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,11020
	ctx.r31.s64 = ctx.r11.s64 + 11020;
	// lwz r11,11016(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11016);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247b260
	if (!ctx.cr0.eq) goto loc_8247B260;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-26032
	ctx.r9.s64 = ctx.r9.s64 + -26032;
	// stw r11,11016(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11016, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,12256
	ctx.r3.s64 = ctx.r11.s64 + 12256;
	// bl 0x82a4c758
	ctx.lr = 0x8247B260;
	sub_82A4C758(ctx, base);
loc_8247B260:
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

__attribute__((alias("__imp__sub_8247B278"))) PPC_WEAK_FUNC(sub_8247B278);
PPC_FUNC_IMPL(__imp__sub_8247B278) {
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
	// li r3,1760
	ctx.r3.s64 = 1760;
	// bl 0x82833108
	ctx.lr = 0x8247B290;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247b300
	if (ctx.cr0.eq) goto loc_8247B300;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824855a0
	ctx.lr = 0x8247B2A0;
	sub_824855A0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// addi r10,r10,29080
	ctx.r10.s64 = ctx.r10.s64 + 29080;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r9,30132
	ctx.r11.s64 = ctx.r9.s64 + 30132;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r8,12092
	ctx.r8.s64 = ctx.r8.s64 + 12092;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// stw r6,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r6.u32);
	// stw r9,1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1736, ctx.r9.u32);
	// stw r5,1732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1732, ctx.r5.u32);
	// stw r7,1728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1728, ctx.r7.u32);
	// b 0x8247b304
	goto loc_8247B304;
loc_8247B300:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247B304:
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

__attribute__((alias("__imp__sub_8247B318"))) PPC_WEAK_FUNC(sub_8247B318);
PPC_FUNC_IMPL(__imp__sub_8247B318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,28272(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28272);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247b358
	if (!ctx.cr0.eq) goto loc_8247B358;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,28272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28272, ctx.r11.u32);
	// addi r3,r9,18772
	ctx.r3.s64 = ctx.r9.s64 + 18772;
	// bl 0x82816528
	ctx.lr = 0x8247B350;
	sub_82816528(ctx, base);
	// stw r3,28268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28268, ctx.r3.u32);
	// b 0x8247b35c
	goto loc_8247B35C;
loc_8247B358:
	// lwz r3,28268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28268);
loc_8247B35C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8247B370"))) PPC_WEAK_FUNC(sub_8247B370);
PPC_FUNC_IMPL(__imp__sub_8247B370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8247b3c0
	ctx.lr = 0x8247B390;
	sub_8247B3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247B3A4;
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

__attribute__((alias("__imp__sub_8247B3C0"))) PPC_WEAK_FUNC(sub_8247B3C0);
PPC_FUNC_IMPL(__imp__sub_8247B3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,11028
	ctx.r31.s64 = ctx.r11.s64 + 11028;
	// lwz r11,11024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11024);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247b408
	if (!ctx.cr0.eq) goto loc_8247B408;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-26012
	ctx.r9.s64 = ctx.r9.s64 + -26012;
	// stw r11,11024(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11024, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,12232
	ctx.r3.s64 = ctx.r11.s64 + 12232;
	// bl 0x82a4c758
	ctx.lr = 0x8247B408;
	sub_82A4C758(ctx, base);
loc_8247B408:
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

__attribute__((alias("__imp__sub_8247B420"))) PPC_WEAK_FUNC(sub_8247B420);
PPC_FUNC_IMPL(__imp__sub_8247B420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1744
	ctx.r3.s64 = 1744;
	// bl 0x82833108
	ctx.lr = 0x8247B438;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247b47c
	if (ctx.cr0.eq) goto loc_8247B47C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824855a0
	ctx.lr = 0x8247B448;
	sub_824855A0(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// addi r11,r11,30184
	ctx.r11.s64 = ctx.r11.s64 + 30184;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,31236
	ctx.r10.s64 = ctx.r10.s64 + 31236;
	// addi r9,r9,12092
	ctx.r9.s64 = ctx.r9.s64 + 12092;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// b 0x8247b480
	goto loc_8247B480;
loc_8247B47C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247B480:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8247B498"))) PPC_WEAK_FUNC(sub_8247B498);
PPC_FUNC_IMPL(__imp__sub_8247B498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,28264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28264);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247b4d8
	if (!ctx.cr0.eq) goto loc_8247B4D8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,28264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28264, ctx.r11.u32);
	// addi r3,r9,18788
	ctx.r3.s64 = ctx.r9.s64 + 18788;
	// bl 0x82816528
	ctx.lr = 0x8247B4D0;
	sub_82816528(ctx, base);
	// stw r3,28260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28260, ctx.r3.u32);
	// b 0x8247b4dc
	goto loc_8247B4DC;
loc_8247B4D8:
	// lwz r3,28260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28260);
loc_8247B4DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8247B4F0"))) PPC_WEAK_FUNC(sub_8247B4F0);
PPC_FUNC_IMPL(__imp__sub_8247B4F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8247b540
	ctx.lr = 0x8247B510;
	sub_8247B540(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247B524;
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

__attribute__((alias("__imp__sub_8247B540"))) PPC_WEAK_FUNC(sub_8247B540);
PPC_FUNC_IMPL(__imp__sub_8247B540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,11036
	ctx.r31.s64 = ctx.r11.s64 + 11036;
	// lwz r11,11032(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11032);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247b588
	if (!ctx.cr0.eq) goto loc_8247B588;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-25992
	ctx.r9.s64 = ctx.r9.s64 + -25992;
	// stw r11,11032(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11032, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,12208
	ctx.r3.s64 = ctx.r11.s64 + 12208;
	// bl 0x82a4c758
	ctx.lr = 0x8247B588;
	sub_82A4C758(ctx, base);
loc_8247B588:
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

__attribute__((alias("__imp__sub_8247B5A0"))) PPC_WEAK_FUNC(sub_8247B5A0);
PPC_FUNC_IMPL(__imp__sub_8247B5A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,460
	ctx.r3.s64 = 460;
	// bl 0x82833108
	ctx.lr = 0x8247B5B8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8247b5e8
	if (ctx.cr0.eq) goto loc_8247B5E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824854b0
	ctx.lr = 0x8247B5C8;
	sub_824854B0(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// addi r11,r11,-25968
	ctx.r11.s64 = ctx.r11.s64 + -25968;
	// addi r10,r10,-25684
	ctx.r10.s64 = ctx.r10.s64 + -25684;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x8247b5ec
	goto loc_8247B5EC;
loc_8247B5E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247B5EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8247B600"))) PPC_WEAK_FUNC(sub_8247B600);
PPC_FUNC_IMPL(__imp__sub_8247B600) {
	PPC_FUNC_PROLOGUE();
	// li r3,460
	ctx.r3.s64 = 460;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8247B608"))) PPC_WEAK_FUNC(sub_8247B608);
PPC_FUNC_IMPL(__imp__sub_8247B608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,28256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28256);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8247b648
	if (!ctx.cr0.eq) goto loc_8247B648;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,28256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28256, ctx.r11.u32);
	// addi r3,r9,18808
	ctx.r3.s64 = ctx.r9.s64 + 18808;
	// bl 0x82816528
	ctx.lr = 0x8247B640;
	sub_82816528(ctx, base);
	// stw r3,28252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28252, ctx.r3.u32);
	// b 0x8247b64c
	goto loc_8247B64C;
loc_8247B648:
	// lwz r3,28252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28252);
loc_8247B64C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

