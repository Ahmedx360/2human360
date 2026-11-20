#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82879618"))) PPC_WEAK_FUNC(sub_82879618);
PPC_FUNC_IMPL(__imp__sub_82879618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-24984(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24984);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82879658
	if (!ctx.cr0.eq) goto loc_82879658;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-24984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24984, ctx.r11.u32);
	// addi r3,r9,-440
	ctx.r3.s64 = ctx.r9.s64 + -440;
	// bl 0x82816528
	ctx.lr = 0x82879650;
	sub_82816528(ctx, base);
	// stw r3,-24988(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24988, ctx.r3.u32);
	// b 0x8287965c
	goto loc_8287965C;
loc_82879658:
	// lwz r3,-24988(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24988);
loc_8287965C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82879670"))) PPC_WEAK_FUNC(sub_82879670);
PPC_FUNC_IMPL(__imp__sub_82879670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828796c0
	ctx.lr = 0x82879690;
	sub_828796C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828796A4;
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

__attribute__((alias("__imp__sub_828796C0"))) PPC_WEAK_FUNC(sub_828796C0);
PPC_FUNC_IMPL(__imp__sub_828796C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,17208
	ctx.r31.s64 = ctx.r11.s64 + 17208;
	// lwz r11,17204(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17204);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82879708
	if (!ctx.cr0.eq) goto loc_82879708;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,19252
	ctx.r9.s64 = ctx.r9.s64 + 19252;
	// stw r11,17204(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17204, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22616
	ctx.r3.s64 = ctx.r11.s64 + -22616;
	// bl 0x82a4c758
	ctx.lr = 0x82879708;
	sub_82A4C758(ctx, base);
loc_82879708:
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

__attribute__((alias("__imp__sub_82879720"))) PPC_WEAK_FUNC(sub_82879720);
PPC_FUNC_IMPL(__imp__sub_82879720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x82833108
	ctx.lr = 0x82879738;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8287975c
	if (ctx.cr0.eq) goto loc_8287975C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823340f0
	ctx.lr = 0x82879748;
	sub_823340F0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19272
	ctx.r11.s64 = ctx.r11.s64 + 19272;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82879760
	goto loc_82879760;
loc_8287975C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82879760:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82879778"))) PPC_WEAK_FUNC(sub_82879778);
PPC_FUNC_IMPL(__imp__sub_82879778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-24992(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24992);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828797b8
	if (!ctx.cr0.eq) goto loc_828797B8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-24992(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24992, ctx.r11.u32);
	// addi r3,r9,-416
	ctx.r3.s64 = ctx.r9.s64 + -416;
	// bl 0x82816528
	ctx.lr = 0x828797B0;
	sub_82816528(ctx, base);
	// stw r3,-24996(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24996, ctx.r3.u32);
	// b 0x828797bc
	goto loc_828797BC;
loc_828797B8:
	// lwz r3,-24996(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24996);
loc_828797BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828797D0"))) PPC_WEAK_FUNC(sub_828797D0);
PPC_FUNC_IMPL(__imp__sub_828797D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82879820
	ctx.lr = 0x828797F0;
	sub_82879820(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82879804;
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

__attribute__((alias("__imp__sub_82879820"))) PPC_WEAK_FUNC(sub_82879820);
PPC_FUNC_IMPL(__imp__sub_82879820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,17216
	ctx.r31.s64 = ctx.r11.s64 + 17216;
	// lwz r11,17212(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17212);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82879868
	if (!ctx.cr0.eq) goto loc_82879868;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,19364
	ctx.r9.s64 = ctx.r9.s64 + 19364;
	// stw r11,17212(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17212, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22640
	ctx.r3.s64 = ctx.r11.s64 + -22640;
	// bl 0x82a4c758
	ctx.lr = 0x82879868;
	sub_82A4C758(ctx, base);
loc_82879868:
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

__attribute__((alias("__imp__sub_82879880"))) PPC_WEAK_FUNC(sub_82879880);
PPC_FUNC_IMPL(__imp__sub_82879880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x82833108
	ctx.lr = 0x82879898;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828798bc
	if (ctx.cr0.eq) goto loc_828798BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823340f0
	ctx.lr = 0x828798A8;
	sub_823340F0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19384
	ctx.r11.s64 = ctx.r11.s64 + 19384;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x828798c0
	goto loc_828798C0;
loc_828798BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828798C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828798D8"))) PPC_WEAK_FUNC(sub_828798D8);
PPC_FUNC_IMPL(__imp__sub_828798D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25000(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25000);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82879918
	if (!ctx.cr0.eq) goto loc_82879918;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25000(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25000, ctx.r11.u32);
	// addi r3,r9,-392
	ctx.r3.s64 = ctx.r9.s64 + -392;
	// bl 0x82816528
	ctx.lr = 0x82879910;
	sub_82816528(ctx, base);
	// stw r3,-25004(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25004, ctx.r3.u32);
	// b 0x8287991c
	goto loc_8287991C;
loc_82879918:
	// lwz r3,-25004(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25004);
loc_8287991C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82879930"))) PPC_WEAK_FUNC(sub_82879930);
PPC_FUNC_IMPL(__imp__sub_82879930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82879980
	ctx.lr = 0x82879950;
	sub_82879980(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82879964;
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

__attribute__((alias("__imp__sub_82879980"))) PPC_WEAK_FUNC(sub_82879980);
PPC_FUNC_IMPL(__imp__sub_82879980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,17224
	ctx.r31.s64 = ctx.r11.s64 + 17224;
	// lwz r11,17220(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17220);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828799c8
	if (!ctx.cr0.eq) goto loc_828799C8;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,19476
	ctx.r9.s64 = ctx.r9.s64 + 19476;
	// stw r11,17220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17220, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22664
	ctx.r3.s64 = ctx.r11.s64 + -22664;
	// bl 0x82a4c758
	ctx.lr = 0x828799C8;
	sub_82A4C758(ctx, base);
loc_828799C8:
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

__attribute__((alias("__imp__sub_828799E0"))) PPC_WEAK_FUNC(sub_828799E0);
PPC_FUNC_IMPL(__imp__sub_828799E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x828799F8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82879a1c
	if (ctx.cr0.eq) goto loc_82879A1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823340f0
	ctx.lr = 0x82879A08;
	sub_823340F0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,19496
	ctx.r11.s64 = ctx.r11.s64 + 19496;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82879a20
	goto loc_82879A20;
loc_82879A1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82879A20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82879A38"))) PPC_WEAK_FUNC(sub_82879A38);
PPC_FUNC_IMPL(__imp__sub_82879A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25008(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25008);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82879a78
	if (!ctx.cr0.eq) goto loc_82879A78;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25008(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25008, ctx.r11.u32);
	// addi r3,r9,-372
	ctx.r3.s64 = ctx.r9.s64 + -372;
	// bl 0x82816528
	ctx.lr = 0x82879A70;
	sub_82816528(ctx, base);
	// stw r3,-25012(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25012, ctx.r3.u32);
	// b 0x82879a7c
	goto loc_82879A7C;
loc_82879A78:
	// lwz r3,-25012(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25012);
loc_82879A7C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82879A90"))) PPC_WEAK_FUNC(sub_82879A90);
PPC_FUNC_IMPL(__imp__sub_82879A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82879ae0
	ctx.lr = 0x82879AB0;
	sub_82879AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82879AC4;
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

__attribute__((alias("__imp__sub_82879AE0"))) PPC_WEAK_FUNC(sub_82879AE0);
PPC_FUNC_IMPL(__imp__sub_82879AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,17232
	ctx.r31.s64 = ctx.r11.s64 + 17232;
	// lwz r11,17228(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17228);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82879b28
	if (!ctx.cr0.eq) goto loc_82879B28;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,19588
	ctx.r9.s64 = ctx.r9.s64 + 19588;
	// stw r11,17228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17228, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22688
	ctx.r3.s64 = ctx.r11.s64 + -22688;
	// bl 0x82a4c758
	ctx.lr = 0x82879B28;
	sub_82A4C758(ctx, base);
loc_82879B28:
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

__attribute__((alias("__imp__sub_82879B40"))) PPC_WEAK_FUNC(sub_82879B40);
PPC_FUNC_IMPL(__imp__sub_82879B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82833108
	ctx.lr = 0x82879B58;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82879ba0
	if (ctx.cr0.eq) goto loc_82879BA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x82879B68;
	sub_82833180(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,12192
	ctx.r10.s64 = ctx.r10.s64 + 12192;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x82879ba4
	goto loc_82879BA4;
loc_82879BA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82879BA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82879BB8"))) PPC_WEAK_FUNC(sub_82879BB8);
PPC_FUNC_IMPL(__imp__sub_82879BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25016(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25016);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82879bf8
	if (!ctx.cr0.eq) goto loc_82879BF8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25016(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25016, ctx.r11.u32);
	// addi r3,r9,-348
	ctx.r3.s64 = ctx.r9.s64 + -348;
	// bl 0x82816528
	ctx.lr = 0x82879BF0;
	sub_82816528(ctx, base);
	// stw r3,-25020(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25020, ctx.r3.u32);
	// b 0x82879bfc
	goto loc_82879BFC;
loc_82879BF8:
	// lwz r3,-25020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25020);
loc_82879BFC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82879C10"))) PPC_WEAK_FUNC(sub_82879C10);
PPC_FUNC_IMPL(__imp__sub_82879C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82879c60
	ctx.lr = 0x82879C30;
	sub_82879C60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82879C44;
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

__attribute__((alias("__imp__sub_82879C60"))) PPC_WEAK_FUNC(sub_82879C60);
PPC_FUNC_IMPL(__imp__sub_82879C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,16548
	ctx.r31.s64 = ctx.r11.s64 + 16548;
	// lwz r11,16544(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16544);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82879ca8
	if (!ctx.cr0.eq) goto loc_82879CA8;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,19608
	ctx.r9.s64 = ctx.r9.s64 + 19608;
	// stw r11,16544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16544, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22712
	ctx.r3.s64 = ctx.r11.s64 + -22712;
	// bl 0x82a4c758
	ctx.lr = 0x82879CA8;
	sub_82A4C758(ctx, base);
loc_82879CA8:
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

__attribute__((alias("__imp__sub_82879CC0"))) PPC_WEAK_FUNC(sub_82879CC0);
PPC_FUNC_IMPL(__imp__sub_82879CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,320
	ctx.r3.s64 = 320;
	// bl 0x82833108
	ctx.lr = 0x82879CD8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82879d1c
	if (ctx.cr0.eq) goto loc_82879D1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246cf18
	ctx.lr = 0x82879CE8;
	sub_8246CF18(ctx, base);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,816
	ctx.r10.s64 = ctx.r10.s64 + 816;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
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
	// b 0x82879d20
	goto loc_82879D20;
loc_82879D1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82879D20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82879D38"))) PPC_WEAK_FUNC(sub_82879D38);
PPC_FUNC_IMPL(__imp__sub_82879D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25024);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82879d78
	if (!ctx.cr0.eq) goto loc_82879D78;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25024(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25024, ctx.r11.u32);
	// addi r3,r9,-336
	ctx.r3.s64 = ctx.r9.s64 + -336;
	// bl 0x82816528
	ctx.lr = 0x82879D70;
	sub_82816528(ctx, base);
	// stw r3,-25028(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25028, ctx.r3.u32);
	// b 0x82879d7c
	goto loc_82879D7C;
loc_82879D78:
	// lwz r3,-25028(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25028);
loc_82879D7C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82879D90"))) PPC_WEAK_FUNC(sub_82879D90);
PPC_FUNC_IMPL(__imp__sub_82879D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82879de0
	ctx.lr = 0x82879DB0;
	sub_82879DE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82879DC4;
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

__attribute__((alias("__imp__sub_82879DE0"))) PPC_WEAK_FUNC(sub_82879DE0);
PPC_FUNC_IMPL(__imp__sub_82879DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,16556
	ctx.r31.s64 = ctx.r11.s64 + 16556;
	// lwz r11,16552(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16552);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82879e28
	if (!ctx.cr0.eq) goto loc_82879E28;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,19628
	ctx.r9.s64 = ctx.r9.s64 + 19628;
	// stw r11,16552(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16552, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22736
	ctx.r3.s64 = ctx.r11.s64 + -22736;
	// bl 0x82a4c758
	ctx.lr = 0x82879E28;
	sub_82A4C758(ctx, base);
loc_82879E28:
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

__attribute__((alias("__imp__sub_82879E40"))) PPC_WEAK_FUNC(sub_82879E40);
PPC_FUNC_IMPL(__imp__sub_82879E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1568
	ctx.r3.s64 = 1568;
	// bl 0x82833108
	ctx.lr = 0x82879E58;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82879ea4
	if (ctx.cr0.eq) goto loc_82879EA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bc540
	ctx.lr = 0x82879E68;
	sub_829BC540(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,16272
	ctx.r11.s64 = ctx.r11.s64 + 16272;
	// addi r10,r10,17284
	ctx.r10.s64 = ctx.r10.s64 + 17284;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r9,14028
	ctx.r9.s64 = ctx.r9.s64 + 14028;
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r11,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r11.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// b 0x82879ea8
	goto loc_82879EA8;
loc_82879EA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82879EA8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82879EC0"))) PPC_WEAK_FUNC(sub_82879EC0);
PPC_FUNC_IMPL(__imp__sub_82879EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25032(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25032);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82879f00
	if (!ctx.cr0.eq) goto loc_82879F00;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25032(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25032, ctx.r11.u32);
	// addi r3,r9,-320
	ctx.r3.s64 = ctx.r9.s64 + -320;
	// bl 0x82816528
	ctx.lr = 0x82879EF8;
	sub_82816528(ctx, base);
	// stw r3,-25036(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25036, ctx.r3.u32);
	// b 0x82879f04
	goto loc_82879F04;
loc_82879F00:
	// lwz r3,-25036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25036);
loc_82879F04:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82879F18"))) PPC_WEAK_FUNC(sub_82879F18);
PPC_FUNC_IMPL(__imp__sub_82879F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82879f68
	ctx.lr = 0x82879F38;
	sub_82879F68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82879F4C;
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

__attribute__((alias("__imp__sub_82879F68"))) PPC_WEAK_FUNC(sub_82879F68);
PPC_FUNC_IMPL(__imp__sub_82879F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,16572
	ctx.r31.s64 = ctx.r11.s64 + 16572;
	// lwz r11,16568(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16568);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82879fb0
	if (!ctx.cr0.eq) goto loc_82879FB0;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,19648
	ctx.r9.s64 = ctx.r9.s64 + 19648;
	// stw r11,16568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16568, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22760
	ctx.r3.s64 = ctx.r11.s64 + -22760;
	// bl 0x82a4c758
	ctx.lr = 0x82879FB0;
	sub_82A4C758(ctx, base);
loc_82879FB0:
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

__attribute__((alias("__imp__sub_82879FC8"))) PPC_WEAK_FUNC(sub_82879FC8);
PPC_FUNC_IMPL(__imp__sub_82879FC8) {
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
	// li r3,1472
	ctx.r3.s64 = 1472;
	// bl 0x82833108
	ctx.lr = 0x82879FDC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82879fec
	if (ctx.cr0.eq) goto loc_82879FEC;
	// bl 0x8291f570
	ctx.lr = 0x82879FE8;
	sub_8291F570(ctx, base);
	// b 0x82879ff0
	goto loc_82879FF0;
loc_82879FEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82879FF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287A000"))) PPC_WEAK_FUNC(sub_8287A000);
PPC_FUNC_IMPL(__imp__sub_8287A000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25040(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25040);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287a040
	if (!ctx.cr0.eq) goto loc_8287A040;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25040(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25040, ctx.r11.u32);
	// addi r3,r9,-312
	ctx.r3.s64 = ctx.r9.s64 + -312;
	// bl 0x82816528
	ctx.lr = 0x8287A038;
	sub_82816528(ctx, base);
	// stw r3,-25044(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25044, ctx.r3.u32);
	// b 0x8287a044
	goto loc_8287A044;
loc_8287A040:
	// lwz r3,-25044(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25044);
loc_8287A044:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287A058"))) PPC_WEAK_FUNC(sub_8287A058);
PPC_FUNC_IMPL(__imp__sub_8287A058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287a0a8
	ctx.lr = 0x8287A078;
	sub_8287A0A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287A08C;
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

__attribute__((alias("__imp__sub_8287A0A8"))) PPC_WEAK_FUNC(sub_8287A0A8);
PPC_FUNC_IMPL(__imp__sub_8287A0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,16564
	ctx.r31.s64 = ctx.r11.s64 + 16564;
	// lwz r11,16560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16560);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287a0f0
	if (!ctx.cr0.eq) goto loc_8287A0F0;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,19668
	ctx.r9.s64 = ctx.r9.s64 + 19668;
	// stw r11,16560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16560, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22784
	ctx.r3.s64 = ctx.r11.s64 + -22784;
	// bl 0x82a4c758
	ctx.lr = 0x8287A0F0;
	sub_82A4C758(ctx, base);
loc_8287A0F0:
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

__attribute__((alias("__imp__sub_8287A108"))) PPC_WEAK_FUNC(sub_8287A108);
PPC_FUNC_IMPL(__imp__sub_8287A108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1408
	ctx.r3.s64 = 1408;
	// bl 0x82833108
	ctx.lr = 0x8287A120;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8287a15c
	if (ctx.cr0.eq) goto loc_8287A15C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bc540
	ctx.lr = 0x8287A130;
	sub_829BC540(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r11,r11,20344
	ctx.r11.s64 = ctx.r11.s64 + 20344;
	// addi r10,r10,21352
	ctx.r10.s64 = ctx.r10.s64 + 21352;
	// addi r9,r9,21404
	ctx.r9.s64 = ctx.r9.s64 + 21404;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8287a160
	goto loc_8287A160;
loc_8287A15C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287A160:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287A178"))) PPC_WEAK_FUNC(sub_8287A178);
PPC_FUNC_IMPL(__imp__sub_8287A178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25048(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25048);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287a1b8
	if (!ctx.cr0.eq) goto loc_8287A1B8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25048(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25048, ctx.r11.u32);
	// addi r3,r9,-284
	ctx.r3.s64 = ctx.r9.s64 + -284;
	// bl 0x82816528
	ctx.lr = 0x8287A1B0;
	sub_82816528(ctx, base);
	// stw r3,-25052(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25052, ctx.r3.u32);
	// b 0x8287a1bc
	goto loc_8287A1BC;
loc_8287A1B8:
	// lwz r3,-25052(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25052);
loc_8287A1BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287A1D0"))) PPC_WEAK_FUNC(sub_8287A1D0);
PPC_FUNC_IMPL(__imp__sub_8287A1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287a220
	ctx.lr = 0x8287A1F0;
	sub_8287A220(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287A204;
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

__attribute__((alias("__imp__sub_8287A220"))) PPC_WEAK_FUNC(sub_8287A220);
PPC_FUNC_IMPL(__imp__sub_8287A220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,15368
	ctx.r31.s64 = ctx.r11.s64 + 15368;
	// lwz r11,15364(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15364);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287a268
	if (!ctx.cr0.eq) goto loc_8287A268;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,19688
	ctx.r9.s64 = ctx.r9.s64 + 19688;
	// stw r11,15364(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15364, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22808
	ctx.r3.s64 = ctx.r11.s64 + -22808;
	// bl 0x82a4c758
	ctx.lr = 0x8287A268;
	sub_82A4C758(ctx, base);
loc_8287A268:
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

__attribute__((alias("__imp__sub_8287A280"))) PPC_WEAK_FUNC(sub_8287A280);
PPC_FUNC_IMPL(__imp__sub_8287A280) {
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
	// li r3,1680
	ctx.r3.s64 = 1680;
	// bl 0x82833108
	ctx.lr = 0x8287A294;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287a2a4
	if (ctx.cr0.eq) goto loc_8287A2A4;
	// bl 0x829483b8
	ctx.lr = 0x8287A2A0;
	sub_829483B8(ctx, base);
	// b 0x8287a2a8
	goto loc_8287A2A8;
loc_8287A2A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287A2A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287A2B8"))) PPC_WEAK_FUNC(sub_8287A2B8);
PPC_FUNC_IMPL(__imp__sub_8287A2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25056(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25056);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287a2f8
	if (!ctx.cr0.eq) goto loc_8287A2F8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25056(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25056, ctx.r11.u32);
	// addi r3,r9,-252
	ctx.r3.s64 = ctx.r9.s64 + -252;
	// bl 0x82816528
	ctx.lr = 0x8287A2F0;
	sub_82816528(ctx, base);
	// stw r3,-25060(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25060, ctx.r3.u32);
	// b 0x8287a2fc
	goto loc_8287A2FC;
loc_8287A2F8:
	// lwz r3,-25060(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25060);
loc_8287A2FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287A310"))) PPC_WEAK_FUNC(sub_8287A310);
PPC_FUNC_IMPL(__imp__sub_8287A310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287a360
	ctx.lr = 0x8287A330;
	sub_8287A360(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287A344;
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

__attribute__((alias("__imp__sub_8287A360"))) PPC_WEAK_FUNC(sub_8287A360);
PPC_FUNC_IMPL(__imp__sub_8287A360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,15360
	ctx.r31.s64 = ctx.r11.s64 + 15360;
	// lwz r11,15356(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15356);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287a3a8
	if (!ctx.cr0.eq) goto loc_8287A3A8;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,19708
	ctx.r9.s64 = ctx.r9.s64 + 19708;
	// stw r11,15356(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15356, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22832
	ctx.r3.s64 = ctx.r11.s64 + -22832;
	// bl 0x82a4c758
	ctx.lr = 0x8287A3A8;
	sub_82A4C758(ctx, base);
loc_8287A3A8:
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

__attribute__((alias("__imp__sub_8287A3C0"))) PPC_WEAK_FUNC(sub_8287A3C0);
PPC_FUNC_IMPL(__imp__sub_8287A3C0) {
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
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82833108
	ctx.lr = 0x8287A3D4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287a3e4
	if (ctx.cr0.eq) goto loc_8287A3E4;
	// bl 0x82a33ac8
	ctx.lr = 0x8287A3E0;
	sub_82A33AC8(ctx, base);
	// b 0x8287a3e8
	goto loc_8287A3E8;
loc_8287A3E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287A3E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287A3F8"))) PPC_WEAK_FUNC(sub_8287A3F8);
PPC_FUNC_IMPL(__imp__sub_8287A3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25064(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25064);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287a438
	if (!ctx.cr0.eq) goto loc_8287A438;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25064(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25064, ctx.r11.u32);
	// addi r3,r9,-236
	ctx.r3.s64 = ctx.r9.s64 + -236;
	// bl 0x82816528
	ctx.lr = 0x8287A430;
	sub_82816528(ctx, base);
	// stw r3,-25068(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25068, ctx.r3.u32);
	// b 0x8287a43c
	goto loc_8287A43C;
loc_8287A438:
	// lwz r3,-25068(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25068);
loc_8287A43C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287A450"))) PPC_WEAK_FUNC(sub_8287A450);
PPC_FUNC_IMPL(__imp__sub_8287A450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287a4a0
	ctx.lr = 0x8287A470;
	sub_8287A4A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287A484;
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

__attribute__((alias("__imp__sub_8287A4A0"))) PPC_WEAK_FUNC(sub_8287A4A0);
PPC_FUNC_IMPL(__imp__sub_8287A4A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,17240
	ctx.r31.s64 = ctx.r11.s64 + 17240;
	// lwz r11,17236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17236);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287a4e8
	if (!ctx.cr0.eq) goto loc_8287A4E8;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,19728
	ctx.r9.s64 = ctx.r9.s64 + 19728;
	// stw r11,17236(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17236, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22856
	ctx.r3.s64 = ctx.r11.s64 + -22856;
	// bl 0x82a4c758
	ctx.lr = 0x8287A4E8;
	sub_82A4C758(ctx, base);
loc_8287A4E8:
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

__attribute__((alias("__imp__sub_8287A500"))) PPC_WEAK_FUNC(sub_8287A500);
PPC_FUNC_IMPL(__imp__sub_8287A500) {
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
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82833108
	ctx.lr = 0x8287A518;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8287a55c
	if (ctx.cr0.eq) goto loc_8287A55C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a33ac8
	ctx.lr = 0x8287A528;
	sub_82A33AC8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r11,8720
	ctx.r11.s64 = ctx.r11.s64 + 8720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// b 0x8287a560
	goto loc_8287A560;
loc_8287A55C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287A560:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287A578"))) PPC_WEAK_FUNC(sub_8287A578);
PPC_FUNC_IMPL(__imp__sub_8287A578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25072(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25072);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287a5b8
	if (!ctx.cr0.eq) goto loc_8287A5B8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25072(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25072, ctx.r11.u32);
	// addi r3,r9,-212
	ctx.r3.s64 = ctx.r9.s64 + -212;
	// bl 0x82816528
	ctx.lr = 0x8287A5B0;
	sub_82816528(ctx, base);
	// stw r3,-25076(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25076, ctx.r3.u32);
	// b 0x8287a5bc
	goto loc_8287A5BC;
loc_8287A5B8:
	// lwz r3,-25076(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25076);
loc_8287A5BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287A5D0"))) PPC_WEAK_FUNC(sub_8287A5D0);
PPC_FUNC_IMPL(__imp__sub_8287A5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287a620
	ctx.lr = 0x8287A5F0;
	sub_8287A620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287A604;
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

__attribute__((alias("__imp__sub_8287A620"))) PPC_WEAK_FUNC(sub_8287A620);
PPC_FUNC_IMPL(__imp__sub_8287A620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,17248
	ctx.r31.s64 = ctx.r11.s64 + 17248;
	// lwz r11,17244(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17244);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287a668
	if (!ctx.cr0.eq) goto loc_8287A668;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,19748
	ctx.r9.s64 = ctx.r9.s64 + 19748;
	// stw r11,17244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17244, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22880
	ctx.r3.s64 = ctx.r11.s64 + -22880;
	// bl 0x82a4c758
	ctx.lr = 0x8287A668;
	sub_82A4C758(ctx, base);
loc_8287A668:
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

__attribute__((alias("__imp__sub_8287A680"))) PPC_WEAK_FUNC(sub_8287A680);
PPC_FUNC_IMPL(__imp__sub_8287A680) {
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
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82833108
	ctx.lr = 0x8287A698;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8287a728
	if (ctx.cr0.eq) goto loc_8287A728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x8287A6A8;
	sub_82833180(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r8,r8,19848
	ctx.r8.s64 = ctx.r8.s64 + 19848;
	// lfs f0,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,30996(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30996);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
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
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x82a4cd78
	ctx.lr = 0x8287A6F0;
	sub_82A4CD78(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r11,-1
	ctx.r11.s64 = -1;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,16388(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16388);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// b 0x8287a72c
	goto loc_8287A72C;
loc_8287A728:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287A72C:
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

__attribute__((alias("__imp__sub_8287A740"))) PPC_WEAK_FUNC(sub_8287A740);
PPC_FUNC_IMPL(__imp__sub_8287A740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25080(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25080);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287a780
	if (!ctx.cr0.eq) goto loc_8287A780;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25080(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25080, ctx.r11.u32);
	// addi r3,r9,-184
	ctx.r3.s64 = ctx.r9.s64 + -184;
	// bl 0x82816528
	ctx.lr = 0x8287A778;
	sub_82816528(ctx, base);
	// stw r3,-25084(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25084, ctx.r3.u32);
	// b 0x8287a784
	goto loc_8287A784;
loc_8287A780:
	// lwz r3,-25084(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25084);
loc_8287A784:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287A798"))) PPC_WEAK_FUNC(sub_8287A798);
PPC_FUNC_IMPL(__imp__sub_8287A798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287a7e8
	ctx.lr = 0x8287A7B8;
	sub_8287A7E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287A7CC;
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

__attribute__((alias("__imp__sub_8287A7E8"))) PPC_WEAK_FUNC(sub_8287A7E8);
PPC_FUNC_IMPL(__imp__sub_8287A7E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,17256
	ctx.r31.s64 = ctx.r11.s64 + 17256;
	// lwz r11,17252(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17252);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287a830
	if (!ctx.cr0.eq) goto loc_8287A830;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,19924
	ctx.r9.s64 = ctx.r9.s64 + 19924;
	// stw r11,17252(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17252, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22904
	ctx.r3.s64 = ctx.r11.s64 + -22904;
	// bl 0x82a4c758
	ctx.lr = 0x8287A830;
	sub_82A4C758(ctx, base);
loc_8287A830:
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

__attribute__((alias("__imp__sub_8287A848"))) PPC_WEAK_FUNC(sub_8287A848);
PPC_FUNC_IMPL(__imp__sub_8287A848) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82833108
	ctx.lr = 0x8287A860;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8287a8bc
	if (ctx.cr0.eq) goto loc_8287A8BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x8287A870;
	sub_82833180(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r8,r8,19944
	ctx.r8.s64 = ctx.r8.s64 + 19944;
	// lfs f0,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// b 0x8287a8c0
	goto loc_8287A8C0;
loc_8287A8BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287A8C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287A8D8"))) PPC_WEAK_FUNC(sub_8287A8D8);
PPC_FUNC_IMPL(__imp__sub_8287A8D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25088(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25088);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287a918
	if (!ctx.cr0.eq) goto loc_8287A918;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25088(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25088, ctx.r11.u32);
	// addi r3,r9,-164
	ctx.r3.s64 = ctx.r9.s64 + -164;
	// bl 0x82816528
	ctx.lr = 0x8287A910;
	sub_82816528(ctx, base);
	// stw r3,-25092(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25092, ctx.r3.u32);
	// b 0x8287a91c
	goto loc_8287A91C;
loc_8287A918:
	// lwz r3,-25092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25092);
loc_8287A91C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287A930"))) PPC_WEAK_FUNC(sub_8287A930);
PPC_FUNC_IMPL(__imp__sub_8287A930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287a980
	ctx.lr = 0x8287A950;
	sub_8287A980(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287A964;
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

__attribute__((alias("__imp__sub_8287A980"))) PPC_WEAK_FUNC(sub_8287A980);
PPC_FUNC_IMPL(__imp__sub_8287A980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,17264
	ctx.r31.s64 = ctx.r11.s64 + 17264;
	// lwz r11,17260(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17260);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287a9c8
	if (!ctx.cr0.eq) goto loc_8287A9C8;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,20020
	ctx.r9.s64 = ctx.r9.s64 + 20020;
	// stw r11,17260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17260, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22928
	ctx.r3.s64 = ctx.r11.s64 + -22928;
	// bl 0x82a4c758
	ctx.lr = 0x8287A9C8;
	sub_82A4C758(ctx, base);
loc_8287A9C8:
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

__attribute__((alias("__imp__sub_8287A9E0"))) PPC_WEAK_FUNC(sub_8287A9E0);
PPC_FUNC_IMPL(__imp__sub_8287A9E0) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82833108
	ctx.lr = 0x8287A9F8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8287aa54
	if (ctx.cr0.eq) goto loc_8287AA54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x8287AA08;
	sub_82833180(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r8,r8,20040
	ctx.r8.s64 = ctx.r8.s64 + 20040;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// b 0x8287aa58
	goto loc_8287AA58;
loc_8287AA54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287AA58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287AA70"))) PPC_WEAK_FUNC(sub_8287AA70);
PPC_FUNC_IMPL(__imp__sub_8287AA70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25096(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25096);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287aab0
	if (!ctx.cr0.eq) goto loc_8287AAB0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25096(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25096, ctx.r11.u32);
	// addi r3,r9,-144
	ctx.r3.s64 = ctx.r9.s64 + -144;
	// bl 0x82816528
	ctx.lr = 0x8287AAA8;
	sub_82816528(ctx, base);
	// stw r3,-25100(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25100, ctx.r3.u32);
	// b 0x8287aab4
	goto loc_8287AAB4;
loc_8287AAB0:
	// lwz r3,-25100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25100);
loc_8287AAB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287AAC8"))) PPC_WEAK_FUNC(sub_8287AAC8);
PPC_FUNC_IMPL(__imp__sub_8287AAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287ab18
	ctx.lr = 0x8287AAE8;
	sub_8287AB18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287AAFC;
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

__attribute__((alias("__imp__sub_8287AB18"))) PPC_WEAK_FUNC(sub_8287AB18);
PPC_FUNC_IMPL(__imp__sub_8287AB18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,17272
	ctx.r31.s64 = ctx.r11.s64 + 17272;
	// lwz r11,17268(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17268);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287ab60
	if (!ctx.cr0.eq) goto loc_8287AB60;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,20116
	ctx.r9.s64 = ctx.r9.s64 + 20116;
	// stw r11,17268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17268, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22952
	ctx.r3.s64 = ctx.r11.s64 + -22952;
	// bl 0x82a4c758
	ctx.lr = 0x8287AB60;
	sub_82A4C758(ctx, base);
loc_8287AB60:
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

__attribute__((alias("__imp__sub_8287AB78"))) PPC_WEAK_FUNC(sub_8287AB78);
PPC_FUNC_IMPL(__imp__sub_8287AB78) {
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
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x82833108
	ctx.lr = 0x8287AB8C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287ab9c
	if (ctx.cr0.eq) goto loc_8287AB9C;
	// bl 0x82a333b0
	ctx.lr = 0x8287AB98;
	sub_82A333B0(ctx, base);
	// b 0x8287aba0
	goto loc_8287ABA0;
loc_8287AB9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287ABA0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287ABB0"))) PPC_WEAK_FUNC(sub_8287ABB0);
PPC_FUNC_IMPL(__imp__sub_8287ABB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25104);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287abf0
	if (!ctx.cr0.eq) goto loc_8287ABF0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25104(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25104, ctx.r11.u32);
	// addi r3,r9,-124
	ctx.r3.s64 = ctx.r9.s64 + -124;
	// bl 0x82816528
	ctx.lr = 0x8287ABE8;
	sub_82816528(ctx, base);
	// stw r3,-25108(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25108, ctx.r3.u32);
	// b 0x8287abf4
	goto loc_8287ABF4;
loc_8287ABF0:
	// lwz r3,-25108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25108);
loc_8287ABF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287AC08"))) PPC_WEAK_FUNC(sub_8287AC08);
PPC_FUNC_IMPL(__imp__sub_8287AC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287ac58
	ctx.lr = 0x8287AC28;
	sub_8287AC58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287AC3C;
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

__attribute__((alias("__imp__sub_8287AC58"))) PPC_WEAK_FUNC(sub_8287AC58);
PPC_FUNC_IMPL(__imp__sub_8287AC58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,15296
	ctx.r31.s64 = ctx.r11.s64 + 15296;
	// lwz r11,15300(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15300);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287aca0
	if (!ctx.cr0.eq) goto loc_8287ACA0;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,20136
	ctx.r9.s64 = ctx.r9.s64 + 20136;
	// stw r11,15300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15300, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22976
	ctx.r3.s64 = ctx.r11.s64 + -22976;
	// bl 0x82a4c758
	ctx.lr = 0x8287ACA0;
	sub_82A4C758(ctx, base);
loc_8287ACA0:
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

__attribute__((alias("__imp__sub_8287ACB8"))) PPC_WEAK_FUNC(sub_8287ACB8);
PPC_FUNC_IMPL(__imp__sub_8287ACB8) {
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
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82833108
	ctx.lr = 0x8287ACD0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8287ad40
	if (ctx.cr0.eq) goto loc_8287AD40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x8287ACE0;
	sub_82833180(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r10,8448
	ctx.r10.s64 = ctx.r10.s64 + 8448;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// clrlwi r10,r8,1
	ctx.r10.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// clrlwi r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x8287ad44
	goto loc_8287AD44;
loc_8287AD40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287AD44:
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

__attribute__((alias("__imp__sub_8287AD58"))) PPC_WEAK_FUNC(sub_8287AD58);
PPC_FUNC_IMPL(__imp__sub_8287AD58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25112);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287ad98
	if (!ctx.cr0.eq) goto loc_8287AD98;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25112(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25112, ctx.r11.u32);
	// addi r3,r9,-108
	ctx.r3.s64 = ctx.r9.s64 + -108;
	// bl 0x82816528
	ctx.lr = 0x8287AD90;
	sub_82816528(ctx, base);
	// stw r3,-25116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25116, ctx.r3.u32);
	// b 0x8287ad9c
	goto loc_8287AD9C;
loc_8287AD98:
	// lwz r3,-25116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25116);
loc_8287AD9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287ADB0"))) PPC_WEAK_FUNC(sub_8287ADB0);
PPC_FUNC_IMPL(__imp__sub_8287ADB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287ae00
	ctx.lr = 0x8287ADD0;
	sub_8287AE00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287ADE4;
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

__attribute__((alias("__imp__sub_8287AE00"))) PPC_WEAK_FUNC(sub_8287AE00);
PPC_FUNC_IMPL(__imp__sub_8287AE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,15288
	ctx.r31.s64 = ctx.r11.s64 + 15288;
	// lwz r11,15292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15292);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287ae48
	if (!ctx.cr0.eq) goto loc_8287AE48;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,20156
	ctx.r9.s64 = ctx.r9.s64 + 20156;
	// stw r11,15292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15292, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23000
	ctx.r3.s64 = ctx.r11.s64 + -23000;
	// bl 0x82a4c758
	ctx.lr = 0x8287AE48;
	sub_82A4C758(ctx, base);
loc_8287AE48:
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

__attribute__((alias("__imp__sub_8287AE60"))) PPC_WEAK_FUNC(sub_8287AE60);
PPC_FUNC_IMPL(__imp__sub_8287AE60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,204
	ctx.r3.s64 = 204;
	// bl 0x82833108
	ctx.lr = 0x8287AE78;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8287aeb8
	if (ctx.cr0.eq) goto loc_8287AEB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x8287AE88;
	sub_82833180(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r5,192
	ctx.r5.s64 = 192;
	// addi r11,r11,8608
	ctx.r11.s64 = ctx.r11.s64 + 8608;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82a455d0
	ctx.lr = 0x8287AEB0;
	sub_82A455D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8287aebc
	goto loc_8287AEBC;
loc_8287AEB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287AEBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287AED0"))) PPC_WEAK_FUNC(sub_8287AED0);
PPC_FUNC_IMPL(__imp__sub_8287AED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25120);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287af10
	if (!ctx.cr0.eq) goto loc_8287AF10;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25120(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25120, ctx.r11.u32);
	// addi r3,r9,-88
	ctx.r3.s64 = ctx.r9.s64 + -88;
	// bl 0x82816528
	ctx.lr = 0x8287AF08;
	sub_82816528(ctx, base);
	// stw r3,-25124(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25124, ctx.r3.u32);
	// b 0x8287af14
	goto loc_8287AF14;
loc_8287AF10:
	// lwz r3,-25124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25124);
loc_8287AF14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287AF28"))) PPC_WEAK_FUNC(sub_8287AF28);
PPC_FUNC_IMPL(__imp__sub_8287AF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287af78
	ctx.lr = 0x8287AF48;
	sub_8287AF78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287AF5C;
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

__attribute__((alias("__imp__sub_8287AF78"))) PPC_WEAK_FUNC(sub_8287AF78);
PPC_FUNC_IMPL(__imp__sub_8287AF78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,15280
	ctx.r31.s64 = ctx.r11.s64 + 15280;
	// lwz r11,15284(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15284);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287afc0
	if (!ctx.cr0.eq) goto loc_8287AFC0;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,20176
	ctx.r9.s64 = ctx.r9.s64 + 20176;
	// stw r11,15284(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15284, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23024
	ctx.r3.s64 = ctx.r11.s64 + -23024;
	// bl 0x82a4c758
	ctx.lr = 0x8287AFC0;
	sub_82A4C758(ctx, base);
loc_8287AFC0:
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

__attribute__((alias("__imp__sub_8287AFD8"))) PPC_WEAK_FUNC(sub_8287AFD8);
PPC_FUNC_IMPL(__imp__sub_8287AFD8) {
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
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82833108
	ctx.lr = 0x8287AFF0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8287b04c
	if (ctx.cr0.eq) goto loc_8287B04C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x8287B000;
	sub_82833180(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r10,8800
	ctx.r10.s64 = ctx.r10.s64 + 8800;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// clrlwi r10,r9,1
	ctx.r10.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x8287b050
	goto loc_8287B050;
loc_8287B04C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287B050:
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

__attribute__((alias("__imp__sub_8287B068"))) PPC_WEAK_FUNC(sub_8287B068);
PPC_FUNC_IMPL(__imp__sub_8287B068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25128(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25128);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287b0a8
	if (!ctx.cr0.eq) goto loc_8287B0A8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25128(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25128, ctx.r11.u32);
	// addi r3,r9,-72
	ctx.r3.s64 = ctx.r9.s64 + -72;
	// bl 0x82816528
	ctx.lr = 0x8287B0A0;
	sub_82816528(ctx, base);
	// stw r3,-25132(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25132, ctx.r3.u32);
	// b 0x8287b0ac
	goto loc_8287B0AC;
loc_8287B0A8:
	// lwz r3,-25132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25132);
loc_8287B0AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287B0C0"))) PPC_WEAK_FUNC(sub_8287B0C0);
PPC_FUNC_IMPL(__imp__sub_8287B0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287b110
	ctx.lr = 0x8287B0E0;
	sub_8287B110(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287B0F4;
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

__attribute__((alias("__imp__sub_8287B110"))) PPC_WEAK_FUNC(sub_8287B110);
PPC_FUNC_IMPL(__imp__sub_8287B110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,15272
	ctx.r31.s64 = ctx.r11.s64 + 15272;
	// lwz r11,15276(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15276);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287b158
	if (!ctx.cr0.eq) goto loc_8287B158;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,20196
	ctx.r9.s64 = ctx.r9.s64 + 20196;
	// stw r11,15276(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15276, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23048
	ctx.r3.s64 = ctx.r11.s64 + -23048;
	// bl 0x82a4c758
	ctx.lr = 0x8287B158;
	sub_82A4C758(ctx, base);
loc_8287B158:
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

__attribute__((alias("__imp__sub_8287B170"))) PPC_WEAK_FUNC(sub_8287B170);
PPC_FUNC_IMPL(__imp__sub_8287B170) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82833108
	ctx.lr = 0x8287B188;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8287b1f4
	if (ctx.cr0.eq) goto loc_8287B1F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x8287B198;
	sub_82833180(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r10,8880
	ctx.r10.s64 = ctx.r10.s64 + 8880;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// clrlwi r10,r8,1
	ctx.r10.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// clrlwi r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x8287b1f8
	goto loc_8287B1F8;
loc_8287B1F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287B1F8:
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

__attribute__((alias("__imp__sub_8287B210"))) PPC_WEAK_FUNC(sub_8287B210);
PPC_FUNC_IMPL(__imp__sub_8287B210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25136(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25136);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287b250
	if (!ctx.cr0.eq) goto loc_8287B250;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25136(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25136, ctx.r11.u32);
	// addi r3,r9,-56
	ctx.r3.s64 = ctx.r9.s64 + -56;
	// bl 0x82816528
	ctx.lr = 0x8287B248;
	sub_82816528(ctx, base);
	// stw r3,-25140(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25140, ctx.r3.u32);
	// b 0x8287b254
	goto loc_8287B254;
loc_8287B250:
	// lwz r3,-25140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25140);
loc_8287B254:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287B268"))) PPC_WEAK_FUNC(sub_8287B268);
PPC_FUNC_IMPL(__imp__sub_8287B268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287b2b8
	ctx.lr = 0x8287B288;
	sub_8287B2B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287B29C;
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

__attribute__((alias("__imp__sub_8287B2B8"))) PPC_WEAK_FUNC(sub_8287B2B8);
PPC_FUNC_IMPL(__imp__sub_8287B2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,15264
	ctx.r31.s64 = ctx.r11.s64 + 15264;
	// lwz r11,15268(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15268);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287b300
	if (!ctx.cr0.eq) goto loc_8287B300;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,20216
	ctx.r9.s64 = ctx.r9.s64 + 20216;
	// stw r11,15268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15268, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23072
	ctx.r3.s64 = ctx.r11.s64 + -23072;
	// bl 0x82a4c758
	ctx.lr = 0x8287B300;
	sub_82A4C758(ctx, base);
loc_8287B300:
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

__attribute__((alias("__imp__sub_8287B318"))) PPC_WEAK_FUNC(sub_8287B318);
PPC_FUNC_IMPL(__imp__sub_8287B318) {
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
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82833108
	ctx.lr = 0x8287B330;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8287b384
	if (ctx.cr0.eq) goto loc_8287B384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x8287B340;
	sub_82833180(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,16816(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16816);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,8984
	ctx.r8.s64 = ctx.r8.s64 + 8984;
	// lfs f13,912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-32516(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32516);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f12,32(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8287b388
	goto loc_8287B388;
loc_8287B384:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287B388:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287B3A0"))) PPC_WEAK_FUNC(sub_8287B3A0);
PPC_FUNC_IMPL(__imp__sub_8287B3A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25144(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25144);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287b3e0
	if (!ctx.cr0.eq) goto loc_8287B3E0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25144(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25144, ctx.r11.u32);
	// addi r3,r9,-36
	ctx.r3.s64 = ctx.r9.s64 + -36;
	// bl 0x82816528
	ctx.lr = 0x8287B3D8;
	sub_82816528(ctx, base);
	// stw r3,-25148(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25148, ctx.r3.u32);
	// b 0x8287b3e4
	goto loc_8287B3E4;
loc_8287B3E0:
	// lwz r3,-25148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25148);
loc_8287B3E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287B3F8"))) PPC_WEAK_FUNC(sub_8287B3F8);
PPC_FUNC_IMPL(__imp__sub_8287B3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287b448
	ctx.lr = 0x8287B418;
	sub_8287B448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287B42C;
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

__attribute__((alias("__imp__sub_8287B448"))) PPC_WEAK_FUNC(sub_8287B448);
PPC_FUNC_IMPL(__imp__sub_8287B448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,15240
	ctx.r31.s64 = ctx.r11.s64 + 15240;
	// lwz r11,15244(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15244);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287b490
	if (!ctx.cr0.eq) goto loc_8287B490;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,20236
	ctx.r9.s64 = ctx.r9.s64 + 20236;
	// stw r11,15244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15244, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23096
	ctx.r3.s64 = ctx.r11.s64 + -23096;
	// bl 0x82a4c758
	ctx.lr = 0x8287B490;
	sub_82A4C758(ctx, base);
loc_8287B490:
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

__attribute__((alias("__imp__sub_8287B4A8"))) PPC_WEAK_FUNC(sub_8287B4A8);
PPC_FUNC_IMPL(__imp__sub_8287B4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8287B4C0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8287b4e4
	if (ctx.cr0.eq) goto loc_8287B4E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246c3d8
	ctx.lr = 0x8287B4D0;
	sub_8246C3D8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,20256
	ctx.r11.s64 = ctx.r11.s64 + 20256;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8287b4e8
	goto loc_8287B4E8;
loc_8287B4E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287B4E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287B500"))) PPC_WEAK_FUNC(sub_8287B500);
PPC_FUNC_IMPL(__imp__sub_8287B500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25152(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25152);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287b540
	if (!ctx.cr0.eq) goto loc_8287B540;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25152(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25152, ctx.r11.u32);
	// addi r3,r9,-20
	ctx.r3.s64 = ctx.r9.s64 + -20;
	// bl 0x82816528
	ctx.lr = 0x8287B538;
	sub_82816528(ctx, base);
	// stw r3,-25156(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25156, ctx.r3.u32);
	// b 0x8287b544
	goto loc_8287B544;
loc_8287B540:
	// lwz r3,-25156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25156);
loc_8287B544:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287B558"))) PPC_WEAK_FUNC(sub_8287B558);
PPC_FUNC_IMPL(__imp__sub_8287B558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287b5a8
	ctx.lr = 0x8287B578;
	sub_8287B5A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287B58C;
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

__attribute__((alias("__imp__sub_8287B5A8"))) PPC_WEAK_FUNC(sub_8287B5A8);
PPC_FUNC_IMPL(__imp__sub_8287B5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,15252
	ctx.r31.s64 = ctx.r11.s64 + 15252;
	// lwz r11,15248(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15248);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287b5f0
	if (!ctx.cr0.eq) goto loc_8287B5F0;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,20352
	ctx.r9.s64 = ctx.r9.s64 + 20352;
	// stw r11,15248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15248, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23120
	ctx.r3.s64 = ctx.r11.s64 + -23120;
	// bl 0x82a4c758
	ctx.lr = 0x8287B5F0;
	sub_82A4C758(ctx, base);
loc_8287B5F0:
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

__attribute__((alias("__imp__sub_8287B608"))) PPC_WEAK_FUNC(sub_8287B608);
PPC_FUNC_IMPL(__imp__sub_8287B608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x82833108
	ctx.lr = 0x8287B620;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8287b65c
	if (ctx.cr0.eq) goto loc_8287B65C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246c3d8
	ctx.lr = 0x8287B630;
	sub_8246C3D8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r11,r11,20376
	ctx.r11.s64 = ctx.r11.s64 + 20376;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x827dff88
	ctx.lr = 0x8287B644;
	sub_827DFF88(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x828165a8
	ctx.lr = 0x8287B650;
	sub_828165A8(ctx, base);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8287b660
	goto loc_8287B660;
loc_8287B65C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287B660:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287B678"))) PPC_WEAK_FUNC(sub_8287B678);
PPC_FUNC_IMPL(__imp__sub_8287B678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25160(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25160);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287b6b8
	if (!ctx.cr0.eq) goto loc_8287B6B8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25160(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25160, ctx.r11.u32);
	// addi r3,r9,12
	ctx.r3.s64 = ctx.r9.s64 + 12;
	// bl 0x82816528
	ctx.lr = 0x8287B6B0;
	sub_82816528(ctx, base);
	// stw r3,-25164(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25164, ctx.r3.u32);
	// b 0x8287b6bc
	goto loc_8287B6BC;
loc_8287B6B8:
	// lwz r3,-25164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25164);
loc_8287B6BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287B6D0"))) PPC_WEAK_FUNC(sub_8287B6D0);
PPC_FUNC_IMPL(__imp__sub_8287B6D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287b720
	ctx.lr = 0x8287B6F0;
	sub_8287B720(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287B704;
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

__attribute__((alias("__imp__sub_8287B720"))) PPC_WEAK_FUNC(sub_8287B720);
PPC_FUNC_IMPL(__imp__sub_8287B720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,15260
	ctx.r31.s64 = ctx.r11.s64 + 15260;
	// lwz r11,15256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15256);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287b768
	if (!ctx.cr0.eq) goto loc_8287B768;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,20472
	ctx.r9.s64 = ctx.r9.s64 + 20472;
	// stw r11,15256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15256, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23144
	ctx.r3.s64 = ctx.r11.s64 + -23144;
	// bl 0x82a4c758
	ctx.lr = 0x8287B768;
	sub_82A4C758(ctx, base);
loc_8287B768:
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

__attribute__((alias("__imp__sub_8287B780"))) PPC_WEAK_FUNC(sub_8287B780);
PPC_FUNC_IMPL(__imp__sub_8287B780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,468
	ctx.r3.s64 = 468;
	// bl 0x82833108
	ctx.lr = 0x8287B798;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8287b7e4
	if (ctx.cr0.eq) goto loc_8287B7E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bc368
	ctx.lr = 0x8287B7A8;
	sub_829BC368(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r11,-18784
	ctx.r11.s64 = ctx.r11.s64 + -18784;
	// addi r10,r10,-18516
	ctx.r10.s64 = ctx.r10.s64 + -18516;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r9.u32);
	// lwz r11,408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// rlwinm r11,r11,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// b 0x8287b7e8
	goto loc_8287B7E8;
loc_8287B7E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287B7E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287B800"))) PPC_WEAK_FUNC(sub_8287B800);
PPC_FUNC_IMPL(__imp__sub_8287B800) {
	PPC_FUNC_PROLOGUE();
	// li r3,468
	ctx.r3.s64 = 468;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287B808"))) PPC_WEAK_FUNC(sub_8287B808);
PPC_FUNC_IMPL(__imp__sub_8287B808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25168(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25168);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287b848
	if (!ctx.cr0.eq) goto loc_8287B848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25168(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25168, ctx.r11.u32);
	// addi r3,r9,60
	ctx.r3.s64 = ctx.r9.s64 + 60;
	// bl 0x82816528
	ctx.lr = 0x8287B840;
	sub_82816528(ctx, base);
	// stw r3,-25172(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25172, ctx.r3.u32);
	// b 0x8287b84c
	goto loc_8287B84C;
loc_8287B848:
	// lwz r3,-25172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25172);
loc_8287B84C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287B860"))) PPC_WEAK_FUNC(sub_8287B860);
PPC_FUNC_IMPL(__imp__sub_8287B860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287b8b0
	ctx.lr = 0x8287B880;
	sub_8287B8B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287B894;
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

__attribute__((alias("__imp__sub_8287B8B0"))) PPC_WEAK_FUNC(sub_8287B8B0);
PPC_FUNC_IMPL(__imp__sub_8287B8B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,16116
	ctx.r31.s64 = ctx.r11.s64 + 16116;
	// lwz r11,16112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16112);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287b8f8
	if (!ctx.cr0.eq) goto loc_8287B8F8;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,20492
	ctx.r9.s64 = ctx.r9.s64 + 20492;
	// stw r11,16112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16112, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23168
	ctx.r3.s64 = ctx.r11.s64 + -23168;
	// bl 0x82a4c758
	ctx.lr = 0x8287B8F8;
	sub_82A4C758(ctx, base);
loc_8287B8F8:
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

__attribute__((alias("__imp__sub_8287B910"))) PPC_WEAK_FUNC(sub_8287B910);
PPC_FUNC_IMPL(__imp__sub_8287B910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8287B928;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8287b964
	if (ctx.cr0.eq) goto loc_8287B964;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b5a60
	ctx.lr = 0x8287B938;
	sub_828B5A60(ctx, base);
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
	// b 0x8287b968
	goto loc_8287B968;
loc_8287B964:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287B968:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287B980"))) PPC_WEAK_FUNC(sub_8287B980);
PPC_FUNC_IMPL(__imp__sub_8287B980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25176(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25176);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287b9c0
	if (!ctx.cr0.eq) goto loc_8287B9C0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25176(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25176, ctx.r11.u32);
	// addi r3,r9,80
	ctx.r3.s64 = ctx.r9.s64 + 80;
	// bl 0x82816528
	ctx.lr = 0x8287B9B8;
	sub_82816528(ctx, base);
	// stw r3,-25180(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25180, ctx.r3.u32);
	// b 0x8287b9c4
	goto loc_8287B9C4;
loc_8287B9C0:
	// lwz r3,-25180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25180);
loc_8287B9C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287B9D8"))) PPC_WEAK_FUNC(sub_8287B9D8);
PPC_FUNC_IMPL(__imp__sub_8287B9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287ba28
	ctx.lr = 0x8287B9F8;
	sub_8287BA28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287BA0C;
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

__attribute__((alias("__imp__sub_8287BA28"))) PPC_WEAK_FUNC(sub_8287BA28);
PPC_FUNC_IMPL(__imp__sub_8287BA28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,15376
	ctx.r31.s64 = ctx.r11.s64 + 15376;
	// lwz r11,15372(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15372);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287ba70
	if (!ctx.cr0.eq) goto loc_8287BA70;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,21644
	ctx.r9.s64 = ctx.r9.s64 + 21644;
	// stw r11,15372(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15372, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23192
	ctx.r3.s64 = ctx.r11.s64 + -23192;
	// bl 0x82a4c758
	ctx.lr = 0x8287BA70;
	sub_82A4C758(ctx, base);
loc_8287BA70:
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

__attribute__((alias("__imp__sub_8287BA88"))) PPC_WEAK_FUNC(sub_8287BA88);
PPC_FUNC_IMPL(__imp__sub_8287BA88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8287BAA0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8287bac4
	if (ctx.cr0.eq) goto loc_8287BAC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x8287BAB0;
	sub_82833180(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,21664
	ctx.r11.s64 = ctx.r11.s64 + 21664;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8287bac8
	goto loc_8287BAC8;
loc_8287BAC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287BAC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287BAE0"))) PPC_WEAK_FUNC(sub_8287BAE0);
PPC_FUNC_IMPL(__imp__sub_8287BAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25184(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25184);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287bb20
	if (!ctx.cr0.eq) goto loc_8287BB20;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25184(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25184, ctx.r11.u32);
	// addi r3,r9,104
	ctx.r3.s64 = ctx.r9.s64 + 104;
	// bl 0x82816528
	ctx.lr = 0x8287BB18;
	sub_82816528(ctx, base);
	// stw r3,-25188(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25188, ctx.r3.u32);
	// b 0x8287bb24
	goto loc_8287BB24;
loc_8287BB20:
	// lwz r3,-25188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25188);
loc_8287BB24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287BB38"))) PPC_WEAK_FUNC(sub_8287BB38);
PPC_FUNC_IMPL(__imp__sub_8287BB38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287bb88
	ctx.lr = 0x8287BB58;
	sub_8287BB88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287BB6C;
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

__attribute__((alias("__imp__sub_8287BB88"))) PPC_WEAK_FUNC(sub_8287BB88);
PPC_FUNC_IMPL(__imp__sub_8287BB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,16436
	ctx.r31.s64 = ctx.r11.s64 + 16436;
	// lwz r11,16432(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16432);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287bbd0
	if (!ctx.cr0.eq) goto loc_8287BBD0;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,21736
	ctx.r9.s64 = ctx.r9.s64 + 21736;
	// stw r11,16432(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16432, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23216
	ctx.r3.s64 = ctx.r11.s64 + -23216;
	// bl 0x82a4c758
	ctx.lr = 0x8287BBD0;
	sub_82A4C758(ctx, base);
loc_8287BBD0:
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

__attribute__((alias("__imp__sub_8287BBE8"))) PPC_WEAK_FUNC(sub_8287BBE8);
PPC_FUNC_IMPL(__imp__sub_8287BBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25192(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25192);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287bc28
	if (!ctx.cr0.eq) goto loc_8287BC28;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25192(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25192, ctx.r11.u32);
	// addi r3,r9,132
	ctx.r3.s64 = ctx.r9.s64 + 132;
	// bl 0x82816528
	ctx.lr = 0x8287BC20;
	sub_82816528(ctx, base);
	// stw r3,-25196(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25196, ctx.r3.u32);
	// b 0x8287bc2c
	goto loc_8287BC2C;
loc_8287BC28:
	// lwz r3,-25196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25196);
loc_8287BC2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287BC40"))) PPC_WEAK_FUNC(sub_8287BC40);
PPC_FUNC_IMPL(__imp__sub_8287BC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,16100
	ctx.r31.s64 = ctx.r11.s64 + 16100;
	// lwz r11,16096(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16096);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287bc90
	if (!ctx.cr0.eq) goto loc_8287BC90;
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
	ctx.lr = 0x8287BC90;
	sub_82A4C758(ctx, base);
loc_8287BC90:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287BCA8;
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

__attribute__((alias("__imp__sub_8287BCC0"))) PPC_WEAK_FUNC(sub_8287BCC0);
PPC_FUNC_IMPL(__imp__sub_8287BCC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x8287BCD8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8287bd0c
	if (ctx.cr0.eq) goto loc_8287BD0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x8287BCE8;
	sub_82833180(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,10272
	ctx.r10.s64 = ctx.r10.s64 + 10272;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x8287bd10
	goto loc_8287BD10;
loc_8287BD0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287BD10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287BD28"))) PPC_WEAK_FUNC(sub_8287BD28);
PPC_FUNC_IMPL(__imp__sub_8287BD28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25200);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287bd68
	if (!ctx.cr0.eq) goto loc_8287BD68;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25200(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25200, ctx.r11.u32);
	// addi r3,r9,148
	ctx.r3.s64 = ctx.r9.s64 + 148;
	// bl 0x82816528
	ctx.lr = 0x8287BD60;
	sub_82816528(ctx, base);
	// stw r3,-25204(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25204, ctx.r3.u32);
	// b 0x8287bd6c
	goto loc_8287BD6C;
loc_8287BD68:
	// lwz r3,-25204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25204);
loc_8287BD6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287BD80"))) PPC_WEAK_FUNC(sub_8287BD80);
PPC_FUNC_IMPL(__imp__sub_8287BD80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287bdd0
	ctx.lr = 0x8287BDA0;
	sub_8287BDD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287BDB4;
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

__attribute__((alias("__imp__sub_8287BDD0"))) PPC_WEAK_FUNC(sub_8287BDD0);
PPC_FUNC_IMPL(__imp__sub_8287BDD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,15320
	ctx.r31.s64 = ctx.r11.s64 + 15320;
	// lwz r11,15316(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15316);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287be18
	if (!ctx.cr0.eq) goto loc_8287BE18;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,21776
	ctx.r9.s64 = ctx.r9.s64 + 21776;
	// stw r11,15316(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15316, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23264
	ctx.r3.s64 = ctx.r11.s64 + -23264;
	// bl 0x82a4c758
	ctx.lr = 0x8287BE18;
	sub_82A4C758(ctx, base);
loc_8287BE18:
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

__attribute__((alias("__imp__sub_8287BE30"))) PPC_WEAK_FUNC(sub_8287BE30);
PPC_FUNC_IMPL(__imp__sub_8287BE30) {
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
	// li r3,1952
	ctx.r3.s64 = 1952;
	// bl 0x82833108
	ctx.lr = 0x8287BE44;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287be54
	if (ctx.cr0.eq) goto loc_8287BE54;
	// bl 0x8293fca0
	ctx.lr = 0x8287BE50;
	sub_8293FCA0(ctx, base);
	// b 0x8287be58
	goto loc_8287BE58;
loc_8287BE54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287BE58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287BE68"))) PPC_WEAK_FUNC(sub_8287BE68);
PPC_FUNC_IMPL(__imp__sub_8287BE68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25208(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25208);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287bea8
	if (!ctx.cr0.eq) goto loc_8287BEA8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25208(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25208, ctx.r11.u32);
	// addi r3,r9,168
	ctx.r3.s64 = ctx.r9.s64 + 168;
	// bl 0x82816528
	ctx.lr = 0x8287BEA0;
	sub_82816528(ctx, base);
	// stw r3,-25212(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25212, ctx.r3.u32);
	// b 0x8287beac
	goto loc_8287BEAC;
loc_8287BEA8:
	// lwz r3,-25212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25212);
loc_8287BEAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287BEC0"))) PPC_WEAK_FUNC(sub_8287BEC0);
PPC_FUNC_IMPL(__imp__sub_8287BEC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287bf10
	ctx.lr = 0x8287BEE0;
	sub_8287BF10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287BEF4;
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

__attribute__((alias("__imp__sub_8287BF10"))) PPC_WEAK_FUNC(sub_8287BF10);
PPC_FUNC_IMPL(__imp__sub_8287BF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,15384
	ctx.r31.s64 = ctx.r11.s64 + 15384;
	// lwz r11,15380(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15380);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287bf58
	if (!ctx.cr0.eq) goto loc_8287BF58;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,21796
	ctx.r9.s64 = ctx.r9.s64 + 21796;
	// stw r11,15380(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15380, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23288
	ctx.r3.s64 = ctx.r11.s64 + -23288;
	// bl 0x82a4c758
	ctx.lr = 0x8287BF58;
	sub_82A4C758(ctx, base);
loc_8287BF58:
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

__attribute__((alias("__imp__sub_8287BF70"))) PPC_WEAK_FUNC(sub_8287BF70);
PPC_FUNC_IMPL(__imp__sub_8287BF70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82833108
	ctx.lr = 0x8287BF88;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8287bfb4
	if (ctx.cr0.eq) goto loc_8287BFB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x8287BF98;
	sub_82833180(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1016
	ctx.r11.s64 = ctx.r11.s64 + 1016;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8287bfb8
	goto loc_8287BFB8;
loc_8287BFB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287BFB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287BFD0"))) PPC_WEAK_FUNC(sub_8287BFD0);
PPC_FUNC_IMPL(__imp__sub_8287BFD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25216(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25216);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287c010
	if (!ctx.cr0.eq) goto loc_8287C010;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25216(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25216, ctx.r11.u32);
	// addi r3,r9,188
	ctx.r3.s64 = ctx.r9.s64 + 188;
	// bl 0x82816528
	ctx.lr = 0x8287C008;
	sub_82816528(ctx, base);
	// stw r3,-25220(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25220, ctx.r3.u32);
	// b 0x8287c014
	goto loc_8287C014;
loc_8287C010:
	// lwz r3,-25220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25220);
loc_8287C014:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287C028"))) PPC_WEAK_FUNC(sub_8287C028);
PPC_FUNC_IMPL(__imp__sub_8287C028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287c078
	ctx.lr = 0x8287C048;
	sub_8287C078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287C05C;
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

__attribute__((alias("__imp__sub_8287C078"))) PPC_WEAK_FUNC(sub_8287C078);
PPC_FUNC_IMPL(__imp__sub_8287C078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,15328
	ctx.r31.s64 = ctx.r11.s64 + 15328;
	// lwz r11,15324(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15324);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287c0c0
	if (!ctx.cr0.eq) goto loc_8287C0C0;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,21816
	ctx.r9.s64 = ctx.r9.s64 + 21816;
	// stw r11,15324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15324, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23312
	ctx.r3.s64 = ctx.r11.s64 + -23312;
	// bl 0x82a4c758
	ctx.lr = 0x8287C0C0;
	sub_82A4C758(ctx, base);
loc_8287C0C0:
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

__attribute__((alias("__imp__sub_8287C0D8"))) PPC_WEAK_FUNC(sub_8287C0D8);
PPC_FUNC_IMPL(__imp__sub_8287C0D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8287C0E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1904
	ctx.r3.s64 = 1904;
	// bl 0x82833108
	ctx.lr = 0x8287C0EC;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8287c170
	if (ctx.cr0.eq) goto loc_8287C170;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bc540
	ctx.lr = 0x8287C0FC;
	sub_829BC540(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,21928
	ctx.r11.s64 = ctx.r11.s64 + 21928;
	// addi r10,r10,21960
	ctx.r10.s64 = ctx.r10.s64 + 21960;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// stw r11,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r11.u32);
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r11,r8,23028
	ctx.r11.s64 = ctx.r8.s64 + 23028;
	// addi r9,r9,22976
	ctx.r9.s64 = ctx.r9.s64 + 22976;
	// addi r10,r7,23052
	ctx.r10.s64 = ctx.r7.s64 + 23052;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// addi r3,r31,1412
	ctx.r3.s64 = ctx.r31.s64 + 1412;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r10,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r10.u32);
	// bl 0x82944d98
	ctx.lr = 0x8287C140;
	sub_82944D98(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r29,r31,1572
	ctx.r29.s64 = ctx.r31.s64 + 1572;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8287C14C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82944d98
	ctx.lr = 0x8287C154;
	sub_82944D98(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,160
	ctx.r29.s64 = ctx.r29.s64 + 160;
	// bge 0x8287c14c
	if (!ctx.cr0.lt) goto loc_8287C14C;
	// stw r28,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r28.u32);
	// b 0x8287c174
	goto loc_8287C174;
loc_8287C170:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287C174:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287C180"))) PPC_WEAK_FUNC(sub_8287C180);
PPC_FUNC_IMPL(__imp__sub_8287C180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25224(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25224);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287c1c0
	if (!ctx.cr0.eq) goto loc_8287C1C0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25224(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25224, ctx.r11.u32);
	// addi r3,r9,200
	ctx.r3.s64 = ctx.r9.s64 + 200;
	// bl 0x82816528
	ctx.lr = 0x8287C1B8;
	sub_82816528(ctx, base);
	// stw r3,-25228(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25228, ctx.r3.u32);
	// b 0x8287c1c4
	goto loc_8287C1C4;
loc_8287C1C0:
	// lwz r3,-25228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25228);
loc_8287C1C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287C1D8"))) PPC_WEAK_FUNC(sub_8287C1D8);
PPC_FUNC_IMPL(__imp__sub_8287C1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287c228
	ctx.lr = 0x8287C1F8;
	sub_8287C228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287C20C;
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

__attribute__((alias("__imp__sub_8287C228"))) PPC_WEAK_FUNC(sub_8287C228);
PPC_FUNC_IMPL(__imp__sub_8287C228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,16108
	ctx.r31.s64 = ctx.r11.s64 + 16108;
	// lwz r11,16104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16104);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287c270
	if (!ctx.cr0.eq) goto loc_8287C270;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,21836
	ctx.r9.s64 = ctx.r9.s64 + 21836;
	// stw r11,16104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16104, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23336
	ctx.r3.s64 = ctx.r11.s64 + -23336;
	// bl 0x82a4c758
	ctx.lr = 0x8287C270;
	sub_82A4C758(ctx, base);
loc_8287C270:
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

__attribute__((alias("__imp__sub_8287C288"))) PPC_WEAK_FUNC(sub_8287C288);
PPC_FUNC_IMPL(__imp__sub_8287C288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1456
	ctx.r3.s64 = 1456;
	// bl 0x82833108
	ctx.lr = 0x8287C2A0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8287c320
	if (ctx.cr0.eq) goto loc_8287C320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bc540
	ctx.lr = 0x8287C2B0;
	sub_829BC540(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,13768
	ctx.r11.s64 = ctx.r11.s64 + 13768;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,14780
	ctx.r10.s64 = ctx.r10.s64 + 14780;
	// addi r9,r9,14832
	ctx.r9.s64 = ctx.r9.s64 + 14832;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r8,12
	ctx.r8.s64 = 12;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stw r11,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r11.u32);
	// stw r11,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r11.u32);
	// stw r11,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r11.u32);
	// stw r8,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r8.u32);
	// stw r11,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r11.u32);
	// stw r11,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r11.u32);
	// stw r10,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r10.u32);
	// stw r10,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r10.u32);
	// stw r10,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r10.u32);
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r11.u32);
	// b 0x8287c324
	goto loc_8287C324;
loc_8287C320:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287C324:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287C338"))) PPC_WEAK_FUNC(sub_8287C338);
PPC_FUNC_IMPL(__imp__sub_8287C338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25232(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25232);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287c378
	if (!ctx.cr0.eq) goto loc_8287C378;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25232(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25232, ctx.r11.u32);
	// addi r3,r9,224
	ctx.r3.s64 = ctx.r9.s64 + 224;
	// bl 0x82816528
	ctx.lr = 0x8287C370;
	sub_82816528(ctx, base);
	// stw r3,-25236(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25236, ctx.r3.u32);
	// b 0x8287c37c
	goto loc_8287C37C;
loc_8287C378:
	// lwz r3,-25236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25236);
loc_8287C37C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287C390"))) PPC_WEAK_FUNC(sub_8287C390);
PPC_FUNC_IMPL(__imp__sub_8287C390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287c3e0
	ctx.lr = 0x8287C3B0;
	sub_8287C3E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287C3C4;
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

__attribute__((alias("__imp__sub_8287C3E0"))) PPC_WEAK_FUNC(sub_8287C3E0);
PPC_FUNC_IMPL(__imp__sub_8287C3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,15392
	ctx.r31.s64 = ctx.r11.s64 + 15392;
	// lwz r11,15388(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15388);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287c428
	if (!ctx.cr0.eq) goto loc_8287C428;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,21856
	ctx.r9.s64 = ctx.r9.s64 + 21856;
	// stw r11,15388(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15388, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23360
	ctx.r3.s64 = ctx.r11.s64 + -23360;
	// bl 0x82a4c758
	ctx.lr = 0x8287C428;
	sub_82A4C758(ctx, base);
loc_8287C428:
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

__attribute__((alias("__imp__sub_8287C440"))) PPC_WEAK_FUNC(sub_8287C440);
PPC_FUNC_IMPL(__imp__sub_8287C440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8287C458;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8287c49c
	if (ctx.cr0.eq) goto loc_8287C49C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x8287C468;
	sub_82833180(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,11136
	ctx.r10.s64 = ctx.r10.s64 + 11136;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
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
	// b 0x8287c4a0
	goto loc_8287C4A0;
loc_8287C49C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287C4A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287C4B8"))) PPC_WEAK_FUNC(sub_8287C4B8);
PPC_FUNC_IMPL(__imp__sub_8287C4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25240(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25240);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287c4f8
	if (!ctx.cr0.eq) goto loc_8287C4F8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25240(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25240, ctx.r11.u32);
	// addi r3,r9,240
	ctx.r3.s64 = ctx.r9.s64 + 240;
	// bl 0x82816528
	ctx.lr = 0x8287C4F0;
	sub_82816528(ctx, base);
	// stw r3,-25244(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25244, ctx.r3.u32);
	// b 0x8287c4fc
	goto loc_8287C4FC;
loc_8287C4F8:
	// lwz r3,-25244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25244);
loc_8287C4FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287C510"))) PPC_WEAK_FUNC(sub_8287C510);
PPC_FUNC_IMPL(__imp__sub_8287C510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287c560
	ctx.lr = 0x8287C530;
	sub_8287C560(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287C544;
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

__attribute__((alias("__imp__sub_8287C560"))) PPC_WEAK_FUNC(sub_8287C560);
PPC_FUNC_IMPL(__imp__sub_8287C560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,16316
	ctx.r31.s64 = ctx.r11.s64 + 16316;
	// lwz r11,16312(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16312);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287c5a8
	if (!ctx.cr0.eq) goto loc_8287C5A8;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,21876
	ctx.r9.s64 = ctx.r9.s64 + 21876;
	// stw r11,16312(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16312, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23384
	ctx.r3.s64 = ctx.r11.s64 + -23384;
	// bl 0x82a4c758
	ctx.lr = 0x8287C5A8;
	sub_82A4C758(ctx, base);
loc_8287C5A8:
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

__attribute__((alias("__imp__sub_8287C5C0"))) PPC_WEAK_FUNC(sub_8287C5C0);
PPC_FUNC_IMPL(__imp__sub_8287C5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8287C5C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82833108
	ctx.lr = 0x8287C5E8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// beq 0x8287c60c
	if (ctx.cr0.eq) goto loc_8287C60C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82468f90
	ctx.lr = 0x8287C5FC;
	sub_82468F90(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r11,r11,1544
	ctx.r11.s64 = ctx.r11.s64 + 1544;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8287c610
	goto loc_8287C610;
loc_8287C60C:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8287C610:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287C630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82333900
	ctx.lr = 0x8287C648;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287c67c
	if (ctx.cr0.eq) goto loc_8287C67C;
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r10,8332
	ctx.r10.s64 = ctx.r10.s64 + 8332;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x8287c680
	goto loc_8287C680;
loc_8287C67C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8287C680:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8287C688;
	sub_8248C5F8(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8287C690;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287c6d0
	if (ctx.cr0.eq) goto loc_8287C6D0;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,8340
	ctx.r11.s64 = ctx.r11.s64 + 8340;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x8287c6d4
	goto loc_8287C6D4;
loc_8287C6D0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8287C6D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8287C6DC;
	sub_8248C5F8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// bl 0x82847bb0
	ctx.lr = 0x8287C6EC;
	sub_82847BB0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82410060
	ctx.lr = 0x8287C700;
	sub_82410060(ctx, base);
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x824848f8
	ctx.lr = 0x8287C70C;
	sub_824848F8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82484958
	ctx.lr = 0x8287C714;
	sub_82484958(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287C720"))) PPC_WEAK_FUNC(sub_8287C720);
PPC_FUNC_IMPL(__imp__sub_8287C720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8287C728;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r3,992
	ctx.r3.s64 = 992;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82833108
	ctx.lr = 0x8287C748;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8287c788
	if (ctx.cr0.eq) goto loc_8287C788;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82468f90
	ctx.lr = 0x8287C758;
	sub_82468F90(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r11,r11,25928
	ctx.r11.s64 = ctx.r11.s64 + 25928;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8297b320
	ctx.lr = 0x8287C76C;
	sub_8297B320(ctx, base);
	// addi r3,r31,840
	ctx.r3.s64 = ctx.r31.s64 + 840;
	// bl 0x8248e0c0
	ctx.lr = 0x8287C774;
	sub_8248E0C0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r28.u32);
	// stw r28,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r28.u32);
	// stw r28,988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 988, ctx.r28.u32);
	// b 0x8287c790
	goto loc_8287C790;
loc_8287C788:
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8287C790:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287C7B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82333900
	ctx.lr = 0x8287C7C8;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287c7fc
	if (ctx.cr0.eq) goto loc_8287C7FC;
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r10,8332
	ctx.r10.s64 = ctx.r10.s64 + 8332;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x8287c800
	goto loc_8287C800;
loc_8287C7FC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8287C800:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8287C808;
	sub_8248C5F8(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8287C810;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287c850
	if (ctx.cr0.eq) goto loc_8287C850;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,8340
	ctx.r11.s64 = ctx.r11.s64 + 8340;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x8287c854
	goto loc_8287C854;
loc_8287C850:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8287C854:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8287C85C;
	sub_8248C5F8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// bl 0x82847bb0
	ctx.lr = 0x8287C86C;
	sub_82847BB0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82410060
	ctx.lr = 0x8287C880;
	sub_82410060(ctx, base);
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x824848f8
	ctx.lr = 0x8287C88C;
	sub_824848F8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82484958
	ctx.lr = 0x8287C894;
	sub_82484958(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287C8A0"))) PPC_WEAK_FUNC(sub_8287C8A0);
PPC_FUNC_IMPL(__imp__sub_8287C8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8287C8A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r3,224
	ctx.r3.s64 = 224;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82833108
	ctx.lr = 0x8287C8C8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// beq 0x8287c8ec
	if (ctx.cr0.eq) goto loc_8287C8EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82468f90
	ctx.lr = 0x8287C8DC;
	sub_82468F90(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r11,r11,1672
	ctx.r11.s64 = ctx.r11.s64 + 1672;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8287c8f0
	goto loc_8287C8F0;
loc_8287C8EC:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8287C8F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287C910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82333900
	ctx.lr = 0x8287C928;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287c95c
	if (ctx.cr0.eq) goto loc_8287C95C;
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r10,8332
	ctx.r10.s64 = ctx.r10.s64 + 8332;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x8287c960
	goto loc_8287C960;
loc_8287C95C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8287C960:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8287C968;
	sub_8248C5F8(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8287C970;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287c9b0
	if (ctx.cr0.eq) goto loc_8287C9B0;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,8340
	ctx.r11.s64 = ctx.r11.s64 + 8340;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x8287c9b4
	goto loc_8287C9B4;
loc_8287C9B0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8287C9B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8287C9BC;
	sub_8248C5F8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// bl 0x82847bb0
	ctx.lr = 0x8287C9CC;
	sub_82847BB0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82410060
	ctx.lr = 0x8287C9E0;
	sub_82410060(ctx, base);
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x824848f8
	ctx.lr = 0x8287C9EC;
	sub_824848F8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82484958
	ctx.lr = 0x8287C9F4;
	sub_82484958(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287CA00"))) PPC_WEAK_FUNC(sub_8287CA00);
PPC_FUNC_IMPL(__imp__sub_8287CA00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8287CA08;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r3,96
	ctx.r3.s64 = 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82833108
	ctx.lr = 0x8287CA28;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// beq 0x8287ca4c
	if (ctx.cr0.eq) goto loc_8287CA4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82468f90
	ctx.lr = 0x8287CA3C;
	sub_82468F90(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r11,r11,1800
	ctx.r11.s64 = ctx.r11.s64 + 1800;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8287ca50
	goto loc_8287CA50;
loc_8287CA4C:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8287CA50:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287CA70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82333900
	ctx.lr = 0x8287CA88;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287cabc
	if (ctx.cr0.eq) goto loc_8287CABC;
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r10,8332
	ctx.r10.s64 = ctx.r10.s64 + 8332;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x8287cac0
	goto loc_8287CAC0;
loc_8287CABC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8287CAC0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8287CAC8;
	sub_8248C5F8(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8287CAD0;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287cb10
	if (ctx.cr0.eq) goto loc_8287CB10;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,8340
	ctx.r11.s64 = ctx.r11.s64 + 8340;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x8287cb14
	goto loc_8287CB14;
loc_8287CB10:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8287CB14:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8287CB1C;
	sub_8248C5F8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// bl 0x82847bb0
	ctx.lr = 0x8287CB2C;
	sub_82847BB0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82410060
	ctx.lr = 0x8287CB40;
	sub_82410060(ctx, base);
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x824848f8
	ctx.lr = 0x8287CB4C;
	sub_824848F8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82484958
	ctx.lr = 0x8287CB54;
	sub_82484958(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287CB60"))) PPC_WEAK_FUNC(sub_8287CB60);
PPC_FUNC_IMPL(__imp__sub_8287CB60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8287CB68;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82833108
	ctx.lr = 0x8287CB88;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// beq 0x8287cbac
	if (ctx.cr0.eq) goto loc_8287CBAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82468f90
	ctx.lr = 0x8287CB9C;
	sub_82468F90(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r11,r11,1928
	ctx.r11.s64 = ctx.r11.s64 + 1928;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8287cbb0
	goto loc_8287CBB0;
loc_8287CBAC:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8287CBB0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287CBD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82333900
	ctx.lr = 0x8287CBE8;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287cc1c
	if (ctx.cr0.eq) goto loc_8287CC1C;
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r10,8332
	ctx.r10.s64 = ctx.r10.s64 + 8332;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x8287cc20
	goto loc_8287CC20;
loc_8287CC1C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8287CC20:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8287CC28;
	sub_8248C5F8(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8287CC30;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287cc70
	if (ctx.cr0.eq) goto loc_8287CC70;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,8340
	ctx.r11.s64 = ctx.r11.s64 + 8340;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x8287cc74
	goto loc_8287CC74;
loc_8287CC70:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8287CC74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8287CC7C;
	sub_8248C5F8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// bl 0x82847bb0
	ctx.lr = 0x8287CC8C;
	sub_82847BB0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82410060
	ctx.lr = 0x8287CCA0;
	sub_82410060(ctx, base);
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x824848f8
	ctx.lr = 0x8287CCAC;
	sub_824848F8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82484958
	ctx.lr = 0x8287CCB4;
	sub_82484958(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287CCC0"))) PPC_WEAK_FUNC(sub_8287CCC0);
PPC_FUNC_IMPL(__imp__sub_8287CCC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8287CCC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r3,200
	ctx.r3.s64 = 200;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82833108
	ctx.lr = 0x8287CCE8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// beq 0x8287cd0c
	if (ctx.cr0.eq) goto loc_8287CD0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82468f90
	ctx.lr = 0x8287CCFC;
	sub_82468F90(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r11,r11,2056
	ctx.r11.s64 = ctx.r11.s64 + 2056;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8287cd10
	goto loc_8287CD10;
loc_8287CD0C:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8287CD10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287CD30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82333900
	ctx.lr = 0x8287CD48;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287cd7c
	if (ctx.cr0.eq) goto loc_8287CD7C;
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r10,8332
	ctx.r10.s64 = ctx.r10.s64 + 8332;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x8287cd80
	goto loc_8287CD80;
loc_8287CD7C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8287CD80:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8287CD88;
	sub_8248C5F8(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8287CD90;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287cdd0
	if (ctx.cr0.eq) goto loc_8287CDD0;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,8340
	ctx.r11.s64 = ctx.r11.s64 + 8340;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x8287cdd4
	goto loc_8287CDD4;
loc_8287CDD0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8287CDD4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8287CDDC;
	sub_8248C5F8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// bl 0x82847bb0
	ctx.lr = 0x8287CDEC;
	sub_82847BB0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82410060
	ctx.lr = 0x8287CE00;
	sub_82410060(ctx, base);
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x824848f8
	ctx.lr = 0x8287CE0C;
	sub_824848F8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82484958
	ctx.lr = 0x8287CE14;
	sub_82484958(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287CE20"))) PPC_WEAK_FUNC(sub_8287CE20);
PPC_FUNC_IMPL(__imp__sub_8287CE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8287CE28;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r3,124
	ctx.r3.s64 = 124;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82833108
	ctx.lr = 0x8287CE48;
	sub_82833108(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287ce60
	if (ctx.cr0.eq) goto loc_8287CE60;
	// bl 0x82976098
	ctx.lr = 0x8287CE58;
	sub_82976098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8287ce64
	goto loc_8287CE64;
loc_8287CE60:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8287CE64:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287CE84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82333900
	ctx.lr = 0x8287CE9C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287ced0
	if (ctx.cr0.eq) goto loc_8287CED0;
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r10,8332
	ctx.r10.s64 = ctx.r10.s64 + 8332;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x8287ced4
	goto loc_8287CED4;
loc_8287CED0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8287CED4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8287CEDC;
	sub_8248C5F8(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8287CEE4;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287cf24
	if (ctx.cr0.eq) goto loc_8287CF24;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,8340
	ctx.r11.s64 = ctx.r11.s64 + 8340;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x8287cf28
	goto loc_8287CF28;
loc_8287CF24:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8287CF28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8287CF30;
	sub_8248C5F8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// bl 0x82847bb0
	ctx.lr = 0x8287CF40;
	sub_82847BB0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82410060
	ctx.lr = 0x8287CF54;
	sub_82410060(ctx, base);
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x824848f8
	ctx.lr = 0x8287CF60;
	sub_824848F8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82484958
	ctx.lr = 0x8287CF68;
	sub_82484958(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287CF70"))) PPC_WEAK_FUNC(sub_8287CF70);
PPC_FUNC_IMPL(__imp__sub_8287CF70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8287CF78;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r3,60
	ctx.r3.s64 = 60;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82833108
	ctx.lr = 0x8287CF98;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// beq 0x8287cfbc
	if (ctx.cr0.eq) goto loc_8287CFBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82468f90
	ctx.lr = 0x8287CFAC;
	sub_82468F90(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r11,r11,2184
	ctx.r11.s64 = ctx.r11.s64 + 2184;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8287cfc0
	goto loc_8287CFC0;
loc_8287CFBC:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8287CFC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287CFE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82333900
	ctx.lr = 0x8287CFF8;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287d02c
	if (ctx.cr0.eq) goto loc_8287D02C;
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r10,8332
	ctx.r10.s64 = ctx.r10.s64 + 8332;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x8287d030
	goto loc_8287D030;
loc_8287D02C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8287D030:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8287D038;
	sub_8248C5F8(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8287D040;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287d080
	if (ctx.cr0.eq) goto loc_8287D080;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,8340
	ctx.r11.s64 = ctx.r11.s64 + 8340;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x8287d084
	goto loc_8287D084;
loc_8287D080:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8287D084:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8287D08C;
	sub_8248C5F8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// bl 0x82847bb0
	ctx.lr = 0x8287D09C;
	sub_82847BB0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82410060
	ctx.lr = 0x8287D0B0;
	sub_82410060(ctx, base);
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x824848f8
	ctx.lr = 0x8287D0BC;
	sub_824848F8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82484958
	ctx.lr = 0x8287D0C4;
	sub_82484958(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287D0D0"))) PPC_WEAK_FUNC(sub_8287D0D0);
PPC_FUNC_IMPL(__imp__sub_8287D0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8287D0D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82833108
	ctx.lr = 0x8287D0F8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// beq 0x8287d11c
	if (ctx.cr0.eq) goto loc_8287D11C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82468f90
	ctx.lr = 0x8287D10C;
	sub_82468F90(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r11,r11,2312
	ctx.r11.s64 = ctx.r11.s64 + 2312;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8287d120
	goto loc_8287D120;
loc_8287D11C:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8287D120:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287D140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82333900
	ctx.lr = 0x8287D158;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287d18c
	if (ctx.cr0.eq) goto loc_8287D18C;
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r10,8332
	ctx.r10.s64 = ctx.r10.s64 + 8332;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x8287d190
	goto loc_8287D190;
loc_8287D18C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8287D190:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8287D198;
	sub_8248C5F8(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8287D1A0;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287d1e0
	if (ctx.cr0.eq) goto loc_8287D1E0;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,8340
	ctx.r11.s64 = ctx.r11.s64 + 8340;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x8287d1e4
	goto loc_8287D1E4;
loc_8287D1E0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8287D1E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8287D1EC;
	sub_8248C5F8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// bl 0x82847bb0
	ctx.lr = 0x8287D1FC;
	sub_82847BB0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82410060
	ctx.lr = 0x8287D210;
	sub_82410060(ctx, base);
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x824848f8
	ctx.lr = 0x8287D21C;
	sub_824848F8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82484958
	ctx.lr = 0x8287D224;
	sub_82484958(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287D230"))) PPC_WEAK_FUNC(sub_8287D230);
PPC_FUNC_IMPL(__imp__sub_8287D230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8287D238;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r3,92
	ctx.r3.s64 = 92;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82833108
	ctx.lr = 0x8287D258;
	sub_82833108(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287d270
	if (ctx.cr0.eq) goto loc_8287D270;
	// bl 0x828575f0
	ctx.lr = 0x8287D268;
	sub_828575F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8287d274
	goto loc_8287D274;
loc_8287D270:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8287D274:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287D294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82333900
	ctx.lr = 0x8287D2AC;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287d2e0
	if (ctx.cr0.eq) goto loc_8287D2E0;
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r10,8332
	ctx.r10.s64 = ctx.r10.s64 + 8332;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x8287d2e4
	goto loc_8287D2E4;
loc_8287D2E0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8287D2E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8287D2EC;
	sub_8248C5F8(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8287D2F4;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287d334
	if (ctx.cr0.eq) goto loc_8287D334;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,8340
	ctx.r11.s64 = ctx.r11.s64 + 8340;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x8287d338
	goto loc_8287D338;
loc_8287D334:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8287D338:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8287D340;
	sub_8248C5F8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// bl 0x82847bb0
	ctx.lr = 0x8287D350;
	sub_82847BB0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82410060
	ctx.lr = 0x8287D364;
	sub_82410060(ctx, base);
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x824848f8
	ctx.lr = 0x8287D370;
	sub_824848F8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82484958
	ctx.lr = 0x8287D378;
	sub_82484958(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287D380"))) PPC_WEAK_FUNC(sub_8287D380);
PPC_FUNC_IMPL(__imp__sub_8287D380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8287D388;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82847af0
	ctx.lr = 0x8287D398;
	sub_82847AF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,160(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// lwz r4,152(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// bl 0x82847bb0
	ctx.lr = 0x8287D3A8;
	sub_82847BB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8287d430
	if (!ctx.cr6.gt) goto loc_8287D430;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8287D3C0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwzx r27,r11,r30
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwzx r5,r10,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287D3E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82484b70
	ctx.lr = 0x8287D3F0;
	sub_82484B70(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// bne 0x8287d41c
	if (!ctx.cr0.eq) goto loc_8287D41C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287D41C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8287D41C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8287d3c0
	if (ctx.cr6.lt) goto loc_8287D3C0;
loc_8287D430:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287D438"))) PPC_WEAK_FUNC(sub_8287D438);
PPC_FUNC_IMPL(__imp__sub_8287D438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8287D440;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r3,88
	ctx.r3.s64 = 88;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r28.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82833108
	ctx.lr = 0x8287D460;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8287d4b8
	if (ctx.cr0.eq) goto loc_8287D4B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82468f90
	ctx.lr = 0x8287D470;
	sub_82468F90(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,1328
	ctx.r11.s64 = ctx.r11.s64 + 1328;
	// addi r10,r10,15852
	ctx.r10.s64 = ctx.r10.s64 + 15852;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8312e7dc
	ctx.lr = 0x8287D494;
	sub_8312E7DC(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,112
	ctx.r11.s64 = 112;
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// b 0x8287d4c0
	goto loc_8287D4C0;
loc_8287D4B8:
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8287D4C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287D4E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82333900
	ctx.lr = 0x8287D4F8;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287d52c
	if (ctx.cr0.eq) goto loc_8287D52C;
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r10,8332
	ctx.r10.s64 = ctx.r10.s64 + 8332;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x8287d530
	goto loc_8287D530;
loc_8287D52C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8287D530:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8287D538;
	sub_8248C5F8(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8287D540;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287d580
	if (ctx.cr0.eq) goto loc_8287D580;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,8340
	ctx.r11.s64 = ctx.r11.s64 + 8340;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x8287d584
	goto loc_8287D584;
loc_8287D580:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8287D584:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8287D58C;
	sub_8248C5F8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// bl 0x82847bb0
	ctx.lr = 0x8287D59C;
	sub_82847BB0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82410060
	ctx.lr = 0x8287D5B0;
	sub_82410060(ctx, base);
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x824848f8
	ctx.lr = 0x8287D5BC;
	sub_824848F8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82484958
	ctx.lr = 0x8287D5C4;
	sub_82484958(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287D5D0"))) PPC_WEAK_FUNC(sub_8287D5D0);
PPC_FUNC_IMPL(__imp__sub_8287D5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8287D5D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r3,72
	ctx.r3.s64 = 72;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82833108
	ctx.lr = 0x8287D5F8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// beq 0x8287d61c
	if (ctx.cr0.eq) goto loc_8287D61C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82468f90
	ctx.lr = 0x8287D60C;
	sub_82468F90(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r11,r11,2584
	ctx.r11.s64 = ctx.r11.s64 + 2584;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8287d620
	goto loc_8287D620;
loc_8287D61C:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8287D620:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287D640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82333900
	ctx.lr = 0x8287D658;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287d68c
	if (ctx.cr0.eq) goto loc_8287D68C;
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r10,8332
	ctx.r10.s64 = ctx.r10.s64 + 8332;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x8287d690
	goto loc_8287D690;
loc_8287D68C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8287D690:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8287D698;
	sub_8248C5F8(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8287D6A0;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287d6e0
	if (ctx.cr0.eq) goto loc_8287D6E0;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,8340
	ctx.r11.s64 = ctx.r11.s64 + 8340;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x8287d6e4
	goto loc_8287D6E4;
loc_8287D6E0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8287D6E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8287D6EC;
	sub_8248C5F8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// bl 0x82847bb0
	ctx.lr = 0x8287D6FC;
	sub_82847BB0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82410060
	ctx.lr = 0x8287D710;
	sub_82410060(ctx, base);
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x824848f8
	ctx.lr = 0x8287D71C;
	sub_824848F8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82484958
	ctx.lr = 0x8287D724;
	sub_82484958(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287D730"))) PPC_WEAK_FUNC(sub_8287D730);
PPC_FUNC_IMPL(__imp__sub_8287D730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8287D738;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r3,116
	ctx.r3.s64 = 116;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82833108
	ctx.lr = 0x8287D758;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// beq 0x8287d77c
	if (ctx.cr0.eq) goto loc_8287D77C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82468f90
	ctx.lr = 0x8287D76C;
	sub_82468F90(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r11,r11,2712
	ctx.r11.s64 = ctx.r11.s64 + 2712;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8287d780
	goto loc_8287D780;
loc_8287D77C:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8287D780:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287D7A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82333900
	ctx.lr = 0x8287D7B8;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287d7ec
	if (ctx.cr0.eq) goto loc_8287D7EC;
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r10,8332
	ctx.r10.s64 = ctx.r10.s64 + 8332;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x8287d7f0
	goto loc_8287D7F0;
loc_8287D7EC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8287D7F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8287D7F8;
	sub_8248C5F8(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8287D800;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287d840
	if (ctx.cr0.eq) goto loc_8287D840;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,8340
	ctx.r11.s64 = ctx.r11.s64 + 8340;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x8287d844
	goto loc_8287D844;
loc_8287D840:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8287D844:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8287D84C;
	sub_8248C5F8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// bl 0x82847bb0
	ctx.lr = 0x8287D85C;
	sub_82847BB0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82410060
	ctx.lr = 0x8287D870;
	sub_82410060(ctx, base);
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x824848f8
	ctx.lr = 0x8287D87C;
	sub_824848F8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82484958
	ctx.lr = 0x8287D884;
	sub_82484958(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287D890"))) PPC_WEAK_FUNC(sub_8287D890);
PPC_FUNC_IMPL(__imp__sub_8287D890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8287D898;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82833108
	ctx.lr = 0x8287D8B8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// beq 0x8287d8dc
	if (ctx.cr0.eq) goto loc_8287D8DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82468f90
	ctx.lr = 0x8287D8CC;
	sub_82468F90(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r11,r11,2840
	ctx.r11.s64 = ctx.r11.s64 + 2840;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8287d8e0
	goto loc_8287D8E0;
loc_8287D8DC:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8287D8E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287D900;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82333900
	ctx.lr = 0x8287D918;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287d94c
	if (ctx.cr0.eq) goto loc_8287D94C;
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r10,8332
	ctx.r10.s64 = ctx.r10.s64 + 8332;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x8287d950
	goto loc_8287D950;
loc_8287D94C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8287D950:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8287D958;
	sub_8248C5F8(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8287D960;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287d9a0
	if (ctx.cr0.eq) goto loc_8287D9A0;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,8340
	ctx.r11.s64 = ctx.r11.s64 + 8340;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x8287d9a4
	goto loc_8287D9A4;
loc_8287D9A0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8287D9A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8287D9AC;
	sub_8248C5F8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// bl 0x82847bb0
	ctx.lr = 0x8287D9BC;
	sub_82847BB0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82410060
	ctx.lr = 0x8287D9D0;
	sub_82410060(ctx, base);
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x824848f8
	ctx.lr = 0x8287D9DC;
	sub_824848F8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82484958
	ctx.lr = 0x8287D9E4;
	sub_82484958(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287D9F0"))) PPC_WEAK_FUNC(sub_8287D9F0);
PPC_FUNC_IMPL(__imp__sub_8287D9F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8287D9F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r3,96
	ctx.r3.s64 = 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82833108
	ctx.lr = 0x8287DA18;
	sub_82833108(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287da30
	if (ctx.cr0.eq) goto loc_8287DA30;
	// bl 0x82856778
	ctx.lr = 0x8287DA28;
	sub_82856778(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8287da34
	goto loc_8287DA34;
loc_8287DA30:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8287DA34:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287DA54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bl 0x82333900
	ctx.lr = 0x8287DA6C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287daa0
	if (ctx.cr0.eq) goto loc_8287DAA0;
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r10,796
	ctx.r10.s64 = ctx.r10.s64 + 796;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x8287daa4
	goto loc_8287DAA4;
loc_8287DAA0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8287DAA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8287DAAC;
	sub_8248C5F8(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8287DAB4;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287daf4
	if (ctx.cr0.eq) goto loc_8287DAF4;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,804
	ctx.r11.s64 = ctx.r11.s64 + 804;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x8287daf8
	goto loc_8287DAF8;
loc_8287DAF4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8287DAF8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x8287DB00;
	sub_8248C5F8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// bl 0x82847bb0
	ctx.lr = 0x8287DB10;
	sub_82847BB0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82410060
	ctx.lr = 0x8287DB24;
	sub_82410060(ctx, base);
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x824848f8
	ctx.lr = 0x8287DB30;
	sub_824848F8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8287e338
	ctx.lr = 0x8287DB38;
	sub_8287E338(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287DB40"))) PPC_WEAK_FUNC(sub_8287DB40);
PPC_FUNC_IMPL(__imp__sub_8287DB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8287DB48;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r5,160(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	// lwz r4,152(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// bl 0x82847bb0
	ctx.lr = 0x8287DB5C;
	sub_82847BB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8287dc00
	if (!ctx.cr6.gt) goto loc_8287DC00;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8287DB74:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwzx r5,r10,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287DB9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8286dc10
	ctx.lr = 0x8287DBA0;
	sub_8286DC10(ctx, base);
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
	ctx.lr = 0x8287DBB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8287dbc8
	if (!ctx.cr0.eq) goto loc_8287DBC8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287DBC8:
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// bne 0x8287dbec
	if (!ctx.cr0.eq) goto loc_8287DBEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287DBEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8287DBEC:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8287db74
	if (ctx.cr6.lt) goto loc_8287DB74;
loc_8287DC00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287DC08"))) PPC_WEAK_FUNC(sub_8287DC08);
PPC_FUNC_IMPL(__imp__sub_8287DC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8287DC10;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r11,-6760
	ctx.r11.s64 = -443023360;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r11,r11,11236
	ctx.r11.u64 = ctx.r11.u64 | 11236;
	// lwz r28,8(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8287dc40
	if (!ctx.cr6.eq) goto loc_8287DC40;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lwz r11,17380(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17380);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,17380(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17380, ctx.r11.u32);
loc_8287DC40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r29,16(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x8287e7d0
	ctx.lr = 0x8287DC54;
	sub_8287E7D0(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828552a0
	ctx.lr = 0x8287DC6C;
	sub_828552A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287dc84
	if (ctx.cr0.eq) goto loc_8287DC84;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// b 0x8287dcf8
	goto loc_8287DCF8;
loc_8287DC84:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828553e8
	ctx.lr = 0x8287DC98;
	sub_828553E8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// bgt cr6,0x8287dcd0
	if (ctx.cr6.gt) goto loc_8287DCD0;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// b 0x8287dcf4
	goto loc_8287DCF4;
loc_8287DCD0:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82333900
	ctx.lr = 0x8287DCD8;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287dcf0
	if (ctx.cr0.eq) goto loc_8287DCF0;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8287dcf4
	goto loc_8287DCF4;
loc_8287DCF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8287DCF4:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8287DCF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287DD00"))) PPC_WEAK_FUNC(sub_8287DD00);
PPC_FUNC_IMPL(__imp__sub_8287DD00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8287DD08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,1088
	ctx.r11.s64 = ctx.r11.s64 + 1088;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8287ddac
	if (!ctx.cr6.gt) goto loc_8287DDAC;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8287DD34:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8287dd98
	if (ctx.cr6.eq) goto loc_8287DD98;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8287dd54
	if (ctx.cr6.eq) goto loc_8287DD54;
	// bl 0x82332db8
	ctx.lr = 0x8287DD54;
	sub_82332DB8(ctx, base);
loc_8287DD54:
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8287DD74;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8287dd84
	if (ctx.cr6.eq) goto loc_8287DD84;
	// bl 0x82332db8
	ctx.lr = 0x8287DD84;
	sub_82332DB8(ctx, base);
loc_8287DD84:
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// bl 0x82332db8
	ctx.lr = 0x8287DD98;
	sub_82332DB8(ctx, base);
loc_8287DD98:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8287dd34
	if (ctx.cr6.lt) goto loc_8287DD34;
loc_8287DDAC:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82332db8
	ctx.lr = 0x8287DDB4;
	sub_82332DB8(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r11,r11,3664
	ctx.r11.s64 = ctx.r11.s64 + 3664;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287DDC8"))) PPC_WEAK_FUNC(sub_8287DDC8);
PPC_FUNC_IMPL(__imp__sub_8287DDC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8287DDD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r11,-6760
	ctx.r11.s64 = -443023360;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r11,r11,11236
	ctx.r11.u64 = ctx.r11.u64 | 11236;
	// lwz r28,8(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8287de00
	if (!ctx.cr6.eq) goto loc_8287DE00;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lwz r11,17384(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17384);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,17384(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17384, ctx.r11.u32);
loc_8287DE00:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r29,16(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x8287e888
	ctx.lr = 0x8287DE14;
	sub_8287E888(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828552a0
	ctx.lr = 0x8287DE2C;
	sub_828552A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287de44
	if (ctx.cr0.eq) goto loc_8287DE44;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// b 0x8287deb8
	goto loc_8287DEB8;
loc_8287DE44:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828553e8
	ctx.lr = 0x8287DE58;
	sub_828553E8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// bgt cr6,0x8287de90
	if (ctx.cr6.gt) goto loc_8287DE90;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// b 0x8287deb4
	goto loc_8287DEB4;
loc_8287DE90:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82333900
	ctx.lr = 0x8287DE98;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287deb0
	if (ctx.cr0.eq) goto loc_8287DEB0;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8287deb4
	goto loc_8287DEB4;
loc_8287DEB0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8287DEB4:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8287DEB8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287DEC0"))) PPC_WEAK_FUNC(sub_8287DEC0);
PPC_FUNC_IMPL(__imp__sub_8287DEC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8287DEC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r11,-6760
	ctx.r11.s64 = -443023360;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r11,r11,11236
	ctx.r11.u64 = ctx.r11.u64 | 11236;
	// lwz r28,8(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8287def8
	if (!ctx.cr6.eq) goto loc_8287DEF8;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lwz r11,17388(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17388);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,17388(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17388, ctx.r11.u32);
loc_8287DEF8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r29,16(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x8287e940
	ctx.lr = 0x8287DF0C;
	sub_8287E940(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828552a0
	ctx.lr = 0x8287DF24;
	sub_828552A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287df3c
	if (ctx.cr0.eq) goto loc_8287DF3C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// b 0x8287dfb0
	goto loc_8287DFB0;
loc_8287DF3C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828553e8
	ctx.lr = 0x8287DF50;
	sub_828553E8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// bgt cr6,0x8287df88
	if (ctx.cr6.gt) goto loc_8287DF88;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// b 0x8287dfac
	goto loc_8287DFAC;
loc_8287DF88:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82333900
	ctx.lr = 0x8287DF90;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287dfa8
	if (ctx.cr0.eq) goto loc_8287DFA8;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8287dfac
	goto loc_8287DFAC;
loc_8287DFA8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8287DFAC:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8287DFB0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287DFB8"))) PPC_WEAK_FUNC(sub_8287DFB8);
PPC_FUNC_IMPL(__imp__sub_8287DFB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8287DFC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r11,-6760
	ctx.r11.s64 = -443023360;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r11,r11,11236
	ctx.r11.u64 = ctx.r11.u64 | 11236;
	// lwz r28,8(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8287dff0
	if (!ctx.cr6.eq) goto loc_8287DFF0;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lwz r11,17392(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17392);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,17392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17392, ctx.r11.u32);
loc_8287DFF0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r29,16(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x825b7d38
	ctx.lr = 0x8287E004;
	sub_825B7D38(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828552a0
	ctx.lr = 0x8287E01C;
	sub_828552A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287e034
	if (ctx.cr0.eq) goto loc_8287E034;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// b 0x8287e0a8
	goto loc_8287E0A8;
loc_8287E034:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828553e8
	ctx.lr = 0x8287E048;
	sub_828553E8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// bgt cr6,0x8287e080
	if (ctx.cr6.gt) goto loc_8287E080;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// b 0x8287e0a4
	goto loc_8287E0A4;
loc_8287E080:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82333900
	ctx.lr = 0x8287E088;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287e0a0
	if (ctx.cr0.eq) goto loc_8287E0A0;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8287e0a4
	goto loc_8287E0A4;
loc_8287E0A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8287E0A4:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8287E0A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287E0B0"))) PPC_WEAK_FUNC(sub_8287E0B0);
PPC_FUNC_IMPL(__imp__sub_8287E0B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8287E0B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r11,-6760
	ctx.r11.s64 = -443023360;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r11,r11,11236
	ctx.r11.u64 = ctx.r11.u64 | 11236;
	// lwz r28,8(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8287e0e8
	if (!ctx.cr6.eq) goto loc_8287E0E8;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lwz r11,17396(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17396);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,17396(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17396, ctx.r11.u32);
loc_8287E0E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r29,16(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x8287e9f8
	ctx.lr = 0x8287E0FC;
	sub_8287E9F8(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828552a0
	ctx.lr = 0x8287E114;
	sub_828552A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287e12c
	if (ctx.cr0.eq) goto loc_8287E12C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// b 0x8287e1a0
	goto loc_8287E1A0;
loc_8287E12C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828553e8
	ctx.lr = 0x8287E140;
	sub_828553E8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// bgt cr6,0x8287e178
	if (ctx.cr6.gt) goto loc_8287E178;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// b 0x8287e19c
	goto loc_8287E19C;
loc_8287E178:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82333900
	ctx.lr = 0x8287E180;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287e198
	if (ctx.cr0.eq) goto loc_8287E198;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8287e19c
	goto loc_8287E19C;
loc_8287E198:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8287E19C:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8287E1A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287E1A8"))) PPC_WEAK_FUNC(sub_8287E1A8);
PPC_FUNC_IMPL(__imp__sub_8287E1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8287E1B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r11,-6760
	ctx.r11.s64 = -443023360;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r11,r11,11236
	ctx.r11.u64 = ctx.r11.u64 | 11236;
	// lwz r28,8(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8287e1e0
	if (!ctx.cr6.eq) goto loc_8287E1E0;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lwz r11,17400(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,17400(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17400, ctx.r11.u32);
loc_8287E1E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r29,16(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x828490c8
	ctx.lr = 0x8287E1F4;
	sub_828490C8(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828552a0
	ctx.lr = 0x8287E20C;
	sub_828552A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287e224
	if (ctx.cr0.eq) goto loc_8287E224;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// b 0x8287e298
	goto loc_8287E298;
loc_8287E224:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828553e8
	ctx.lr = 0x8287E238;
	sub_828553E8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// bgt cr6,0x8287e270
	if (ctx.cr6.gt) goto loc_8287E270;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// b 0x8287e294
	goto loc_8287E294;
loc_8287E270:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82333900
	ctx.lr = 0x8287E278;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287e290
	if (ctx.cr0.eq) goto loc_8287E290;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8287e294
	goto loc_8287E294;
loc_8287E290:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8287E294:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8287E298:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287E2A0"))) PPC_WEAK_FUNC(sub_8287E2A0);
PPC_FUNC_IMPL(__imp__sub_8287E2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287dd00
	ctx.lr = 0x8287E2C0;
	sub_8287DD00(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8287e2d0
	if (ctx.cr0.eq) goto loc_8287E2D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8287E2D0;
	sub_82332DB8(ctx, base);
loc_8287E2D0:
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

__attribute__((alias("__imp__sub_8287E2F0"))) PPC_WEAK_FUNC(sub_8287E2F0);
PPC_FUNC_IMPL(__imp__sub_8287E2F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8287e31c
	if (ctx.cr0.eq) goto loc_8287E31C;
	// bl 0x82332db8
	ctx.lr = 0x8287E31C;
	sub_82332DB8(ctx, base);
loc_8287E31C:
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

__attribute__((alias("__imp__sub_8287E338"))) PPC_WEAK_FUNC(sub_8287E338);
PPC_FUNC_IMPL(__imp__sub_8287E338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8287e398
	if (ctx.cr6.eq) goto loc_8287E398;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8287e398
	if (!ctx.cr6.eq) goto loc_8287E398;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287e390
	if (ctx.cr0.eq) goto loc_8287E390;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287E390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8287E390:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8287E398:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287E3B0"))) PPC_WEAK_FUNC(sub_8287E3B0);
PPC_FUNC_IMPL(__imp__sub_8287E3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8287E3B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r11,-6760
	ctx.r11.s64 = -443023360;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r11,r11,11236
	ctx.r11.u64 = ctx.r11.u64 | 11236;
	// lwz r28,8(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8287e3e8
	if (!ctx.cr6.eq) goto loc_8287E3E8;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lwz r11,17404(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17404);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,17404(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17404, ctx.r11.u32);
loc_8287E3E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r29,16(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x82725328
	ctx.lr = 0x8287E3FC;
	sub_82725328(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828552a0
	ctx.lr = 0x8287E414;
	sub_828552A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287e42c
	if (ctx.cr0.eq) goto loc_8287E42C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// b 0x8287e4a0
	goto loc_8287E4A0;
loc_8287E42C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828553e8
	ctx.lr = 0x8287E440;
	sub_828553E8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// bgt cr6,0x8287e478
	if (ctx.cr6.gt) goto loc_8287E478;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// b 0x8287e49c
	goto loc_8287E49C;
loc_8287E478:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82333900
	ctx.lr = 0x8287E480;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287e498
	if (ctx.cr0.eq) goto loc_8287E498;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8287e49c
	goto loc_8287E49C;
loc_8287E498:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8287E49C:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8287E4A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287E4A8"))) PPC_WEAK_FUNC(sub_8287E4A8);
PPC_FUNC_IMPL(__imp__sub_8287E4A8) {
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
	// bne cr6,0x8287e4d4
	if (!ctx.cr6.eq) goto loc_8287E4D4;
	// lis r9,-31944
	ctx.r9.s64 = -2093481984;
	// lwz r10,17408(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17408);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,17408(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17408, ctx.r10.u32);
loc_8287E4D4:
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x8287e550
	sub_8287E550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287E4E8"))) PPC_WEAK_FUNC(sub_8287E4E8);
PPC_FUNC_IMPL(__imp__sub_8287E4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,804
	ctx.r11.s64 = ctx.r11.s64 + 804;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8287e338
	ctx.lr = 0x8287E518;
	sub_8287E338(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,10980
	ctx.r11.s64 = ctx.r11.s64 + 10980;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8287e534
	if (ctx.cr0.eq) goto loc_8287E534;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8287E534;
	sub_82332DB8(ctx, base);
loc_8287E534:
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

__attribute__((alias("__imp__sub_8287E550"))) PPC_WEAK_FUNC(sub_8287E550);
PPC_FUNC_IMPL(__imp__sub_8287E550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8287E558;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31943
	ctx.r31.s64 = -2093416448;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,-25248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25248);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lis r29,-31943
	ctx.r29.s64 = -2093416448;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8287e5d0
	if (!ctx.cr0.eq) goto loc_8287E5D0;
	// lis r30,-31944
	ctx.r30.s64 = -2093481984;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-25248(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25248, ctx.r11.u32);
	// lwz r3,17428(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8287e5c8
	if (!ctx.cr6.eq) goto loc_8287E5C8;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-25292
	ctx.r3.s64 = ctx.r10.s64 + -25292;
	// bl 0x82a4c7d8
	ctx.lr = 0x8287E5B0;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x8287E5B8;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x8287E5C0;
	sub_82816528(ctx, base);
	// lwz r11,-25248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25248);
	// stw r3,17428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 17428, ctx.r3.u32);
loc_8287E5C8:
	// stw r3,-25252(r29)
	PPC_STORE_U32(ctx.r29.u32 + -25252, ctx.r3.u32);
	// b 0x8287e5d4
	goto loc_8287E5D4;
loc_8287E5D0:
	// lwz r3,-25252(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25252);
loc_8287E5D4:
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r29,r10,20416
	ctx.r29.s64 = ctx.r10.s64 + 20416;
	// bne 0x8287e5f8
	if (!ctx.cr0.eq) goto loc_8287E5F8;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// addi r10,r10,792
	ctx.r10.s64 = ctx.r10.s64 + 792;
	// stw r11,-25248(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25248, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_8287E5F8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r30,4
	ctx.r30.s64 = 4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
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
	ctx.lr = 0x8287E624;
	sub_828552A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287e63c
	if (ctx.cr0.eq) goto loc_8287E63C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// b 0x8287e67c
	goto loc_8287E67C;
loc_8287E63C:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x828553e8
	ctx.lr = 0x8287E650;
	sub_828553E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lwz r11,92(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
loc_8287E67C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287E688"))) PPC_WEAK_FUNC(sub_8287E688);
PPC_FUNC_IMPL(__imp__sub_8287E688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8246c3d8
	ctx.lr = 0x8287E6A0;
	sub_8246C3D8(ctx, base);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,15520
	ctx.r9.s64 = ctx.r10.s64 + 15520;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r10,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r10,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r10.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// stw r10,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r10.u32);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r10,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r10.u32);
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stw r10,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r10.u32);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287E760"))) PPC_WEAK_FUNC(sub_8287E760);
PPC_FUNC_IMPL(__imp__sub_8287E760) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8287eba8
	ctx.lr = 0x8287E77C;
	sub_8287EBA8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x829ef5f8
	ctx.lr = 0x8287E7B4;
	sub_829EF5F8(ctx, base);
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

__attribute__((alias("__imp__sub_8287E7D0"))) PPC_WEAK_FUNC(sub_8287E7D0);
PPC_FUNC_IMPL(__imp__sub_8287E7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8287E7D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31944
	ctx.r31.s64 = -2093481984;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r29,-31944
	ctx.r29.s64 = -2093481984;
	// lwz r11,15304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15304);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8287e840
	if (!ctx.cr0.eq) goto loc_8287E840;
	// lis r30,-31944
	ctx.r30.s64 = -2093481984;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,15304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15304, ctx.r11.u32);
	// lwz r3,17412(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17412);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8287e838
	if (!ctx.cr6.eq) goto loc_8287E838;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-25408
	ctx.r3.s64 = ctx.r10.s64 + -25408;
	// bl 0x82a4c7d8
	ctx.lr = 0x8287E820;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x8287E828;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x8287E830;
	sub_82816528(ctx, base);
	// lwz r11,15304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15304);
	// stw r3,17412(r30)
	PPC_STORE_U32(ctx.r30.u32 + 17412, ctx.r3.u32);
loc_8287E838:
	// stw r3,15308(r29)
	PPC_STORE_U32(ctx.r29.u32 + 15308, ctx.r3.u32);
	// b 0x8287e844
	goto loc_8287E844;
loc_8287E840:
	// lwz r3,15308(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15308);
loc_8287E844:
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r9,r10,15312
	ctx.r9.s64 = ctx.r10.s64 + 15312;
	// bne 0x8287e868
	if (!ctx.cr0.eq) goto loc_8287E868;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// addi r10,r10,14428
	ctx.r10.s64 = ctx.r10.s64 + 14428;
	// stw r11,15304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15304, ctx.r11.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8287E868:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287E888"))) PPC_WEAK_FUNC(sub_8287E888);
PPC_FUNC_IMPL(__imp__sub_8287E888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8287E890;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31944
	ctx.r31.s64 = -2093481984;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r29,-31944
	ctx.r29.s64 = -2093481984;
	// lwz r11,15344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15344);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8287e8f8
	if (!ctx.cr0.eq) goto loc_8287E8F8;
	// lis r30,-31944
	ctx.r30.s64 = -2093481984;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,15344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15344, ctx.r11.u32);
	// lwz r3,17416(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8287e8f0
	if (!ctx.cr6.eq) goto loc_8287E8F0;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-25384
	ctx.r3.s64 = ctx.r10.s64 + -25384;
	// bl 0x82a4c7d8
	ctx.lr = 0x8287E8D8;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x8287E8E0;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x8287E8E8;
	sub_82816528(ctx, base);
	// lwz r11,15344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15344);
	// stw r3,17416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 17416, ctx.r3.u32);
loc_8287E8F0:
	// stw r3,15348(r29)
	PPC_STORE_U32(ctx.r29.u32 + 15348, ctx.r3.u32);
	// b 0x8287e8fc
	goto loc_8287E8FC;
loc_8287E8F8:
	// lwz r3,15348(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15348);
loc_8287E8FC:
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r9,r10,15352
	ctx.r9.s64 = ctx.r10.s64 + 15352;
	// bne 0x8287e920
	if (!ctx.cr0.eq) goto loc_8287E920;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// addi r10,r10,14428
	ctx.r10.s64 = ctx.r10.s64 + 14428;
	// stw r11,15344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15344, ctx.r11.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8287E920:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287E940"))) PPC_WEAK_FUNC(sub_8287E940);
PPC_FUNC_IMPL(__imp__sub_8287E940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8287E948;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31944
	ctx.r31.s64 = -2093481984;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r29,-31944
	ctx.r29.s64 = -2093481984;
	// lwz r11,16584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16584);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8287e9b0
	if (!ctx.cr0.eq) goto loc_8287E9B0;
	// lis r30,-31944
	ctx.r30.s64 = -2093481984;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,16584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16584, ctx.r11.u32);
	// lwz r3,17420(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8287e9a8
	if (!ctx.cr6.eq) goto loc_8287E9A8;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-25348
	ctx.r3.s64 = ctx.r10.s64 + -25348;
	// bl 0x82a4c7d8
	ctx.lr = 0x8287E990;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x8287E998;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x8287E9A0;
	sub_82816528(ctx, base);
	// lwz r11,16584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16584);
	// stw r3,17420(r30)
	PPC_STORE_U32(ctx.r30.u32 + 17420, ctx.r3.u32);
loc_8287E9A8:
	// stw r3,16588(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16588, ctx.r3.u32);
	// b 0x8287e9b4
	goto loc_8287E9B4;
loc_8287E9B0:
	// lwz r3,16588(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16588);
loc_8287E9B4:
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r9,r10,16592
	ctx.r9.s64 = ctx.r10.s64 + 16592;
	// bne 0x8287e9d8
	if (!ctx.cr0.eq) goto loc_8287E9D8;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// addi r10,r10,14428
	ctx.r10.s64 = ctx.r10.s64 + 14428;
	// stw r11,16584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16584, ctx.r11.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8287E9D8:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287E9F8"))) PPC_WEAK_FUNC(sub_8287E9F8);
PPC_FUNC_IMPL(__imp__sub_8287E9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8287EA00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31944
	ctx.r31.s64 = -2093481984;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r29,-31944
	ctx.r29.s64 = -2093481984;
	// lwz r11,15332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15332);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8287ea68
	if (!ctx.cr0.eq) goto loc_8287EA68;
	// lis r30,-31944
	ctx.r30.s64 = -2093481984;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,15332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15332, ctx.r11.u32);
	// lwz r3,17424(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8287ea60
	if (!ctx.cr6.eq) goto loc_8287EA60;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-25320
	ctx.r3.s64 = ctx.r10.s64 + -25320;
	// bl 0x82a4c7d8
	ctx.lr = 0x8287EA48;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x8287EA50;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x8287EA58;
	sub_82816528(ctx, base);
	// lwz r11,15332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15332);
	// stw r3,17424(r30)
	PPC_STORE_U32(ctx.r30.u32 + 17424, ctx.r3.u32);
loc_8287EA60:
	// stw r3,15336(r29)
	PPC_STORE_U32(ctx.r29.u32 + 15336, ctx.r3.u32);
	// b 0x8287ea6c
	goto loc_8287EA6C;
loc_8287EA68:
	// lwz r3,15336(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15336);
loc_8287EA6C:
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r9,r10,15340
	ctx.r9.s64 = ctx.r10.s64 + 15340;
	// bne 0x8287ea90
	if (!ctx.cr0.eq) goto loc_8287EA90;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// addi r10,r10,14428
	ctx.r10.s64 = ctx.r10.s64 + 14428;
	// stw r11,15332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15332, ctx.r11.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8287EA90:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287EAB0"))) PPC_WEAK_FUNC(sub_8287EAB0);
PPC_FUNC_IMPL(__imp__sub_8287EAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8287EAB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31944
	ctx.r31.s64 = -2093481984;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r29,-31944
	ctx.r29.s64 = -2093481984;
	// lwz r11,15980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15980);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8287eb1c
	if (!ctx.cr0.eq) goto loc_8287EB1C;
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r30,-31943
	ctx.r30.s64 = -2093416448;
	// stw r11,15980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15980, ctx.r11.u32);
	// lwz r10,-25264(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -25264);
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8287eb10
	if (!ctx.cr0.eq) goto loc_8287EB10;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// stw r11,-25264(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25264, ctx.r11.u32);
	// addi r3,r10,24624
	ctx.r3.s64 = ctx.r10.s64 + 24624;
	// bl 0x82816528
	ctx.lr = 0x8287EB04;
	sub_82816528(ctx, base);
	// lwz r11,15980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15980);
	// stw r3,-25268(r30)
	PPC_STORE_U32(ctx.r30.u32 + -25268, ctx.r3.u32);
	// b 0x8287eb14
	goto loc_8287EB14;
loc_8287EB10:
	// lwz r3,-25268(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -25268);
loc_8287EB14:
	// stw r3,15984(r29)
	PPC_STORE_U32(ctx.r29.u32 + 15984, ctx.r3.u32);
	// b 0x8287eb20
	goto loc_8287EB20;
loc_8287EB1C:
	// lwz r3,15984(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15984);
loc_8287EB20:
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r9,r10,15988
	ctx.r9.s64 = ctx.r10.s64 + 15988;
	// bne 0x8287eb44
	if (!ctx.cr0.eq) goto loc_8287EB44;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// addi r10,r10,14424
	ctx.r10.s64 = ctx.r10.s64 + 14424;
	// stw r11,15980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15980, ctx.r11.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8287EB44:
	// li r11,88
	ctx.r11.s64 = 88;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287EB60"))) PPC_WEAK_FUNC(sub_8287EB60);
PPC_FUNC_IMPL(__imp__sub_8287EB60) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x8287e338
	sub_8287E338(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287EB68"))) PPC_WEAK_FUNC(sub_8287EB68);
PPC_FUNC_IMPL(__imp__sub_8287EB68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x828644d0
	sub_828644D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287EB70"))) PPC_WEAK_FUNC(sub_8287EB70);
PPC_FUNC_IMPL(__imp__sub_8287EB70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8285c8f0
	sub_8285C8F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287EB78"))) PPC_WEAK_FUNC(sub_8287EB78);
PPC_FUNC_IMPL(__imp__sub_8287EB78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8285ca00
	sub_8285CA00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287EB80"))) PPC_WEAK_FUNC(sub_8287EB80);
PPC_FUNC_IMPL(__imp__sub_8287EB80) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8285cb18
	sub_8285CB18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287EB88"))) PPC_WEAK_FUNC(sub_8287EB88);
PPC_FUNC_IMPL(__imp__sub_8287EB88) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82864470
	sub_82864470(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287EB90"))) PPC_WEAK_FUNC(sub_8287EB90);
PPC_FUNC_IMPL(__imp__sub_8287EB90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8285c7a8
	sub_8285C7A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287EB98"))) PPC_WEAK_FUNC(sub_8287EB98);
PPC_FUNC_IMPL(__imp__sub_8287EB98) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x828644d0
	sub_828644D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287EBA0"))) PPC_WEAK_FUNC(sub_8287EBA0);
PPC_FUNC_IMPL(__imp__sub_8287EBA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8285cb18
	sub_8285CB18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287EBA8"))) PPC_WEAK_FUNC(sub_8287EBA8);
PPC_FUNC_IMPL(__imp__sub_8287EBA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8287ebd8
	if (ctx.cr6.eq) goto loc_8287EBD8;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_8287EBD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8286dac0
	ctx.lr = 0x8287EBE0;
	sub_8286DAC0(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8287ec0c
	if (!ctx.cr6.gt) goto loc_8287EC0C;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_8287EBF8:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x8287ebf8
	if (!ctx.cr0.eq) goto loc_8287EBF8;
loc_8287EC0C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8287ec28
	if (ctx.cr6.eq) goto loc_8287EC28;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
loc_8287EC28:
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

__attribute__((alias("__imp__sub_8287EC48"))) PPC_WEAK_FUNC(sub_8287EC48);
PPC_FUNC_IMPL(__imp__sub_8287EC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,-32520
	ctx.r10.s64 = ctx.r10.s64 + -32520;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82873b58
	ctx.lr = 0x8287EC90;
	sub_82873B58(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287ECC8"))) PPC_WEAK_FUNC(sub_8287ECC8);
PPC_FUNC_IMPL(__imp__sub_8287ECC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8239d768
	ctx.lr = 0x8287ECEC;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833238
	ctx.lr = 0x8287ECF4;
	sub_82833238(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8287ed04
	if (ctx.cr0.eq) goto loc_8287ED04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8287ED04;
	sub_82332DB8(ctx, base);
loc_8287ED04:
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

__attribute__((alias("__imp__sub_8287ED20"))) PPC_WEAK_FUNC(sub_8287ED20);
PPC_FUNC_IMPL(__imp__sub_8287ED20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82885df0
	ctx.lr = 0x8287ED40;
	sub_82885DF0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8287ed50
	if (!ctx.cr6.eq) goto loc_8287ED50;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8287ed64
	goto loc_8287ED64;
loc_8287ED50:
	// bl 0x82333d20
	ctx.lr = 0x8287ED54;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8287ed64
	if (ctx.cr6.eq) goto loc_8287ED64;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287ED64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287ED80"))) PPC_WEAK_FUNC(sub_8287ED80);
PPC_FUNC_IMPL(__imp__sub_8287ED80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x8287edc0
	if (ctx.cr6.eq) goto loc_8287EDC0;
	// bl 0x82885df0
	ctx.lr = 0x8287EDA0;
	sub_82885DF0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8287edb0
	if (!ctx.cr6.eq) goto loc_8287EDB0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8287edc4
	goto loc_8287EDC4;
loc_8287EDB0:
	// bl 0x82333d20
	ctx.lr = 0x8287EDB4;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8287edc4
	if (ctx.cr6.eq) goto loc_8287EDC4;
loc_8287EDC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287EDC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287EDD8"))) PPC_WEAK_FUNC(sub_8287EDD8);
PPC_FUNC_IMPL(__imp__sub_8287EDD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82885df0
	sub_82885DF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287EDE0"))) PPC_WEAK_FUNC(sub_8287EDE0);
PPC_FUNC_IMPL(__imp__sub_8287EDE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82333d20
	sub_82333D20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287EDE8"))) PPC_WEAK_FUNC(sub_8287EDE8);
PPC_FUNC_IMPL(__imp__sub_8287EDE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82833108
	ctx.lr = 0x8287EE04;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287ee18
	if (ctx.cr0.eq) goto loc_8287EE18;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8287ec48
	ctx.lr = 0x8287EE14;
	sub_8287EC48(ctx, base);
	// b 0x8287ee1c
	goto loc_8287EE1C;
loc_8287EE18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287EE1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287EE30"))) PPC_WEAK_FUNC(sub_8287EE30);
PPC_FUNC_IMPL(__imp__sub_8287EE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,24608
	ctx.r3.s64 = ctx.r11.s64 + 24608;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287EE40"))) PPC_WEAK_FUNC(sub_8287EE40);
PPC_FUNC_IMPL(__imp__sub_8287EE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// addi r10,r10,-32592
	ctx.r10.s64 = ctx.r10.s64 + -32592;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r9,r9,15852
	ctx.r9.s64 = ctx.r9.s64 + 15852;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x8287EE9C;
	sub_82A4EA80(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x8287EEB0;
	sub_82873B58(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r4,r30,68
	ctx.r4.s64 = ctx.r30.s64 + 68;
	// bl 0x8287eba8
	ctx.lr = 0x8287EEBC;
	sub_8287EBA8(ctx, base);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287EEE0"))) PPC_WEAK_FUNC(sub_8287EEE0);
PPC_FUNC_IMPL(__imp__sub_8287EEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x829ef5f8
	ctx.lr = 0x8287EF04;
	sub_829EF5F8(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x8239d768
	ctx.lr = 0x8287EF0C;
	sub_8239D768(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-29556
	ctx.r11.s64 = ctx.r11.s64 + -29556;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82833238
	ctx.lr = 0x8287EF20;
	sub_82833238(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8287ef30
	if (ctx.cr0.eq) goto loc_8287EF30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8287EF30;
	sub_82332DB8(ctx, base);
loc_8287EF30:
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

__attribute__((alias("__imp__sub_8287EF50"))) PPC_WEAK_FUNC(sub_8287EF50);
PPC_FUNC_IMPL(__imp__sub_8287EF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82885f70
	ctx.lr = 0x8287EF70;
	sub_82885F70(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8287ef80
	if (!ctx.cr6.eq) goto loc_8287EF80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8287ef94
	goto loc_8287EF94;
loc_8287EF80:
	// bl 0x82333d20
	ctx.lr = 0x8287EF84;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8287ef94
	if (ctx.cr6.eq) goto loc_8287EF94;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287EF94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287EFB0"))) PPC_WEAK_FUNC(sub_8287EFB0);
PPC_FUNC_IMPL(__imp__sub_8287EFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x8287eff0
	if (ctx.cr6.eq) goto loc_8287EFF0;
	// bl 0x82885f70
	ctx.lr = 0x8287EFD0;
	sub_82885F70(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8287efe0
	if (!ctx.cr6.eq) goto loc_8287EFE0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8287eff4
	goto loc_8287EFF4;
loc_8287EFE0:
	// bl 0x82333d20
	ctx.lr = 0x8287EFE4;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8287eff4
	if (ctx.cr6.eq) goto loc_8287EFF4;
loc_8287EFF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287EFF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287F008"))) PPC_WEAK_FUNC(sub_8287F008);
PPC_FUNC_IMPL(__imp__sub_8287F008) {
	PPC_FUNC_PROLOGUE();
	// b 0x82885f70
	sub_82885F70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287F010"))) PPC_WEAK_FUNC(sub_8287F010);
PPC_FUNC_IMPL(__imp__sub_8287F010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82833108
	ctx.lr = 0x8287F02C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287f040
	if (ctx.cr0.eq) goto loc_8287F040;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8287ee40
	ctx.lr = 0x8287F03C;
	sub_8287EE40(ctx, base);
	// b 0x8287f044
	goto loc_8287F044;
loc_8287F040:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287F044:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287F058"))) PPC_WEAK_FUNC(sub_8287F058);
PPC_FUNC_IMPL(__imp__sub_8287F058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,24624
	ctx.r3.s64 = ctx.r11.s64 + 24624;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287F068"))) PPC_WEAK_FUNC(sub_8287F068);
PPC_FUNC_IMPL(__imp__sub_8287F068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287f0b8
	ctx.lr = 0x8287F088;
	sub_8287F0B8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8287f098
	if (ctx.cr0.eq) goto loc_8287F098;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8287F098;
	sub_82332DB8(ctx, base);
loc_8287F098:
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

__attribute__((alias("__imp__sub_8287F0B8"))) PPC_WEAK_FUNC(sub_8287F0B8);
PPC_FUNC_IMPL(__imp__sub_8287F0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r11,r11,26880
	ctx.r11.s64 = ctx.r11.s64 + 26880;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8287f0e8
	if (ctx.cr6.eq) goto loc_8287F0E8;
	// bl 0x82332db8
	ctx.lr = 0x8287F0E8;
	sub_82332DB8(ctx, base);
loc_8287F0E8:
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

__attribute__((alias("__imp__sub_8287F108"))) PPC_WEAK_FUNC(sub_8287F108);
PPC_FUNC_IMPL(__imp__sub_8287F108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8286c728
	ctx.lr = 0x8287F128;
	sub_8286C728(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8287f138
	if (ctx.cr0.eq) goto loc_8287F138;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8287F138;
	sub_82332DB8(ctx, base);
loc_8287F138:
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

__attribute__((alias("__imp__sub_8287F158"))) PPC_WEAK_FUNC(sub_8287F158);
PPC_FUNC_IMPL(__imp__sub_8287F158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8287F160;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82a61744
	ctx.lr = 0x8287F168;
	__savefpr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f10,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stb r9,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r9.u8);
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// fsubs f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fadds f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// lfs f5,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lfs f4,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fadds f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// lfs f2,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fadds f10,f4,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// lfs f4,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f2,f4,f2
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f2.f64));
	// lfs f7,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f3,f0,f8
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// lfs f5,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f6,f7,f6
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f1,f13,f9
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f31,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// fadds f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// lfs f5,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f29,f4
	ctx.f4.f64 = double(float(ctx.f29.f64 + ctx.f4.f64));
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// fsubs f30,f12,f10
	ctx.f30.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// fsubs f28,f11,f10
	ctx.f28.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsel f29,f3,f8,f0
	ctx.f29.f64 = ctx.f3.f64 >= 0.0 ? ctx.f8.f64 : ctx.f0.f64;
	// fsel f8,f3,f0,f8
	ctx.f8.f64 = ctx.f3.f64 >= 0.0 ? ctx.f0.f64 : ctx.f8.f64;
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f3,f0,f9
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fsel f12,f30,f10,f12
	ctx.f12.f64 = ctx.f30.f64 >= 0.0 ? ctx.f10.f64 : ctx.f12.f64;
	// fsel f11,f28,f11,f10
	ctx.f11.f64 = ctx.f28.f64 >= 0.0 ? ctx.f11.f64 : ctx.f10.f64;
	// fsel f13,f1,f9,f13
	ctx.f13.f64 = ctx.f1.f64 >= 0.0 ? ctx.f9.f64 : ctx.f13.f64;
	// fsubs f10,f29,f6
	ctx.f10.f64 = double(float(ctx.f29.f64 - ctx.f6.f64));
	// fsubs f31,f5,f31
	ctx.f31.f64 = double(float(ctx.f5.f64 - ctx.f31.f64));
	// fsubs f1,f8,f6
	ctx.f1.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// fsel f0,f3,f0,f9
	ctx.f0.f64 = ctx.f3.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
	// fadds f5,f27,f5
	ctx.f5.f64 = double(float(ctx.f27.f64 + ctx.f5.f64));
	// fsubs f9,f13,f2
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// fsel f10,f10,f6,f29
	ctx.f10.f64 = ctx.f10.f64 >= 0.0 ? ctx.f6.f64 : ctx.f29.f64;
	// fsubs f3,f12,f31
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// fsel f8,f1,f8,f6
	ctx.f8.f64 = ctx.f1.f64 >= 0.0 ? ctx.f8.f64 : ctx.f6.f64;
	// fsubs f30,f11,f31
	ctx.f30.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fsubs f6,f0,f2
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// fsel f13,f9,f2,f13
	ctx.f13.f64 = ctx.f9.f64 >= 0.0 ? ctx.f2.f64 : ctx.f13.f64;
	// fsubs f9,f10,f7
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// fsel f12,f3,f31,f12
	ctx.f12.f64 = ctx.f3.f64 >= 0.0 ? ctx.f31.f64 : ctx.f12.f64;
	// fsubs f3,f8,f7
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fsel f11,f30,f11,f31
	ctx.f11.f64 = ctx.f30.f64 >= 0.0 ? ctx.f11.f64 : ctx.f31.f64;
	// fsel f0,f6,f0,f2
	ctx.f0.f64 = ctx.f6.f64 >= 0.0 ? ctx.f0.f64 : ctx.f2.f64;
	// fsel f10,f9,f7,f10
	ctx.f10.f64 = ctx.f9.f64 >= 0.0 ? ctx.f7.f64 : ctx.f10.f64;
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsel f10,f3,f8,f7
	ctx.f10.f64 = ctx.f3.f64 >= 0.0 ? ctx.f8.f64 : ctx.f7.f64;
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fsubs f10,f0,f4
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// fsubs f9,f13,f4
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fsubs f8,f12,f5
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// fsubs f7,f11,f5
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// fsel f0,f10,f0,f4
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f4.f64;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsel f0,f9,f4,f13
	ctx.f0.f64 = ctx.f9.f64 >= 0.0 ? ctx.f4.f64 : ctx.f13.f64;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsel f0,f8,f5,f12
	ctx.f0.f64 = ctx.f8.f64 >= 0.0 ? ctx.f5.f64 : ctx.f12.f64;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsel f0,f7,f11,f5
	ctx.f0.f64 = ctx.f7.f64 >= 0.0 ? ctx.f11.f64 : ctx.f5.f64;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x8287f380
	ctx.lr = 0x8287F2EC;
	sub_8287F380(ctx, base);
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f9,f10
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsubs f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f8,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f12,f9,f9,f11
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f13,f10,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmadds f0,f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fadds f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f0,f12,f13,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fsubs f13,f7,f0
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fsel f0,f13,f0,f7
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f7.f64;
	// stfs f0,24(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 24, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82a61790
	ctx.lr = 0x8287F378;
	__restfpr_27(ctx, base);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287F380"))) PPC_WEAK_FUNC(sub_8287F380);
PPC_FUNC_IMPL(__imp__sub_8287F380) {
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
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827f0480
	ctx.lr = 0x8287F3A4;
	sub_827F0480(ctx, base);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287F3E0"))) PPC_WEAK_FUNC(sub_8287F3E0);
PPC_FUNC_IMPL(__imp__sub_8287F3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8287F3E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r11,r11,26900
	ctx.r11.s64 = ctx.r11.s64 + 26900;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r4,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r4.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,56
	ctx.r11.s64 = 56;
	// stw r8,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r8.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// li r3,32
	ctx.r3.s64 = 32;
	// lfs f13,16876(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16876);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r29,12
	ctx.r31.s64 = ctx.r29.s64 + 12;
	// stfs f0,44(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 44, temp.u32);
	// stfs f0,48(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 48, temp.u32);
	// stfs f0,52(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 52, temp.u32);
	// stfs f13,56(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 56, temp.u32);
	// stw r11,92(r29)
	PPC_STORE_U32(ctx.r29.u32 + 92, ctx.r11.u32);
	// stw r30,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r30.u32);
	// stw r30,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r30.u32);
	// stw r30,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r30.u32);
	// stw r30,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r30.u32);
	// stw r30,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r30.u32);
	// bl 0x82333900
	ctx.lr = 0x8287F454;
	sub_82333900(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8287f474
	if (ctx.cr0.eq) goto loc_8287F474;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// addi r11,r11,15852
	ctx.r11.s64 = ctx.r11.s64 + 15852;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x8312e7dc
	ctx.lr = 0x8287F470;
	sub_8312E7DC(ctx, base);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8287F474:
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4efb0
	ctx.lr = 0x8287F488;
	sub_82A4EFB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287F498"))) PPC_WEAK_FUNC(sub_8287F498);
PPC_FUNC_IMPL(__imp__sub_8287F498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8287f4f8
	ctx.lr = 0x8287F4BC;
	sub_8287F4F8(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,3664
	ctx.r11.s64 = ctx.r11.s64 + 3664;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8287f4d8
	if (ctx.cr0.eq) goto loc_8287F4D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8287F4D8;
	sub_82332DB8(ctx, base);
loc_8287F4D8:
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

__attribute__((alias("__imp__sub_8287F4F8"))) PPC_WEAK_FUNC(sub_8287F4F8);
PPC_FUNC_IMPL(__imp__sub_8287F4F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8287F500;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8287f528
	if (ctx.cr6.eq) goto loc_8287F528;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287F528;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8287F528:
	// addi r31,r31,76
	ctx.r31.s64 = ctx.r31.s64 + 76;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x8287f560
	if (!ctx.cr6.gt) goto loc_8287F560;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8287F544:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x8239d768
	ctx.lr = 0x8287F554;
	sub_8239D768(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,56
	ctx.r29.s64 = ctx.r29.s64 + 56;
	// bne 0x8287f544
	if (!ctx.cr0.eq) goto loc_8287F544;
loc_8287F560:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,56
	ctx.r6.s64 = 56;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8287F578;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8287f588
	if (ctx.cr6.eq) goto loc_8287F588;
	// bl 0x82332db8
	ctx.lr = 0x8287F588;
	sub_82332DB8(ctx, base);
loc_8287F588:
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287F5A0"))) PPC_WEAK_FUNC(sub_8287F5A0);
PPC_FUNC_IMPL(__imp__sub_8287F5A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8239d768
	ctx.lr = 0x8287F5C4;
	sub_8239D768(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,3664
	ctx.r11.s64 = ctx.r11.s64 + 3664;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8287f5e0
	if (ctx.cr0.eq) goto loc_8287F5E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8287F5E0;
	sub_82332DB8(ctx, base);
loc_8287F5E0:
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

__attribute__((alias("__imp__sub_8287F600"))) PPC_WEAK_FUNC(sub_8287F600);
PPC_FUNC_IMPL(__imp__sub_8287F600) {
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
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8287f6a8
	if (ctx.cr0.eq) goto loc_8287F6A8;
	// lbz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8287f6a8
	if (ctx.cr0.eq) goto loc_8287F6A8;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsel f0,f13,f0,f11
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsel f0,f13,f0,f10
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fsel f0,f13,f9,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f9.f64 : ctx.f0.f64;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fsel f0,f13,f8,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f8.f64 : ctx.f0.f64;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f7,f0
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fsel f0,f13,f7,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f7.f64 : ctx.f0.f64;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// b 0x8287f6c0
	goto loc_8287F6C0;
loc_8287F6A8:
	// lbz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8287f6c0
	if (ctx.cr0.eq) goto loc_8287F6C0;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x8287F6C0;
	sub_82A4EA80(ctx, base);
loc_8287F6C0:
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

__attribute__((alias("__imp__sub_8287F6D8"))) PPC_WEAK_FUNC(sub_8287F6D8);
PPC_FUNC_IMPL(__imp__sub_8287F6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287f728
	ctx.lr = 0x8287F6F8;
	sub_8287F728(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8287f708
	if (ctx.cr0.eq) goto loc_8287F708;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8287F708;
	sub_82332DB8(ctx, base);
loc_8287F708:
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

__attribute__((alias("__imp__sub_8287F728"))) PPC_WEAK_FUNC(sub_8287F728);
PPC_FUNC_IMPL(__imp__sub_8287F728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8287F730;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r11,r11,26860
	ctx.r11.s64 = ctx.r11.s64 + 26860;
	// lwz r30,12(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8287f7c0
	if (ctx.cr6.eq) goto loc_8287F7C0;
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8287f760
	if (ctx.cr6.eq) goto loc_8287F760;
	// bl 0x82332db8
	ctx.lr = 0x8287F760;
	sub_82332DB8(ctx, base);
loc_8287F760:
	// addi r31,r30,64
	ctx.r31.s64 = ctx.r30.s64 + 64;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x8239d768
	ctx.lr = 0x8287F76C;
	sub_8239D768(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x8287F788;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8287f798
	if (ctx.cr6.eq) goto loc_8287F798;
	// bl 0x82332db8
	ctx.lr = 0x8287F798;
	sub_82332DB8(ctx, base);
loc_8287F798:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8239d768
	ctx.lr = 0x8287F7B0;
	sub_8239D768(ctx, base);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x8239d768
	ctx.lr = 0x8287F7B8;
	sub_8239D768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332db8
	ctx.lr = 0x8287F7C0;
	sub_82332DB8(ctx, base);
loc_8287F7C0:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r11,r11,3664
	ctx.r11.s64 = ctx.r11.s64 + 3664;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287F7D8"))) PPC_WEAK_FUNC(sub_8287F7D8);
PPC_FUNC_IMPL(__imp__sub_8287F7D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,16576
	ctx.r31.s64 = ctx.r11.s64 + 16576;
	// lwz r11,16580(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16580);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287f820
	if (!ctx.cr0.eq) goto loc_8287F820;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,26644
	ctx.r9.s64 = ctx.r9.s64 + 26644;
	// stw r11,16580(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16580, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19472
	ctx.r3.s64 = ctx.r11.s64 + -19472;
	// bl 0x82a4c758
	ctx.lr = 0x8287F820;
	sub_82A4C758(ctx, base);
loc_8287F820:
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

__attribute__((alias("__imp__sub_8287F838"))) PPC_WEAK_FUNC(sub_8287F838);
PPC_FUNC_IMPL(__imp__sub_8287F838) {
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
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82833108
	ctx.lr = 0x8287F84C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287f85c
	if (ctx.cr0.eq) goto loc_8287F85C;
	// bl 0x8288be28
	ctx.lr = 0x8287F858;
	sub_8288BE28(ctx, base);
	// b 0x8287f860
	goto loc_8287F860;
loc_8287F85C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287F860:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287F870"))) PPC_WEAK_FUNC(sub_8287F870);
PPC_FUNC_IMPL(__imp__sub_8287F870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,30812(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30812);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287f8b0
	if (!ctx.cr0.eq) goto loc_8287F8B0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,30812(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30812, ctx.r11.u32);
	// addi r3,r9,14460
	ctx.r3.s64 = ctx.r9.s64 + 14460;
	// bl 0x82816528
	ctx.lr = 0x8287F8A8;
	sub_82816528(ctx, base);
	// stw r3,30808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30808, ctx.r3.u32);
	// b 0x8287f8b4
	goto loc_8287F8B4;
loc_8287F8B0:
	// lwz r3,30808(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30808);
loc_8287F8B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287F8C8"))) PPC_WEAK_FUNC(sub_8287F8C8);
PPC_FUNC_IMPL(__imp__sub_8287F8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287f7d8
	ctx.lr = 0x8287F8E8;
	sub_8287F7D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287F8FC;
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

__attribute__((alias("__imp__sub_8287F918"))) PPC_WEAK_FUNC(sub_8287F918);
PPC_FUNC_IMPL(__imp__sub_8287F918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,15528
	ctx.r31.s64 = ctx.r11.s64 + 15528;
	// lwz r11,15860(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15860);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287f960
	if (!ctx.cr0.eq) goto loc_8287F960;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,26624
	ctx.r9.s64 = ctx.r9.s64 + 26624;
	// stw r11,15860(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15860, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19448
	ctx.r3.s64 = ctx.r11.s64 + -19448;
	// bl 0x82a4c758
	ctx.lr = 0x8287F960;
	sub_82A4C758(ctx, base);
loc_8287F960:
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

__attribute__((alias("__imp__sub_8287F978"))) PPC_WEAK_FUNC(sub_8287F978);
PPC_FUNC_IMPL(__imp__sub_8287F978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82833108
	ctx.lr = 0x8287F990;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8287f9b4
	if (ctx.cr0.eq) goto loc_8287F9B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x8287F9A0;
	sub_82833180(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8287f9b8
	goto loc_8287F9B8;
loc_8287F9B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287F9B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287F9D0"))) PPC_WEAK_FUNC(sub_8287F9D0);
PPC_FUNC_IMPL(__imp__sub_8287F9D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82833238
	ctx.lr = 0x8287F9FC;
	sub_82833238(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8287fa0c
	if (ctx.cr0.eq) goto loc_8287FA0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8287FA0C;
	sub_82332DB8(ctx, base);
loc_8287FA0C:
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

__attribute__((alias("__imp__sub_8287FA28"))) PPC_WEAK_FUNC(sub_8287FA28);
PPC_FUNC_IMPL(__imp__sub_8287FA28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,22656
	ctx.r3.s64 = ctx.r11.s64 + 22656;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287FA38"))) PPC_WEAK_FUNC(sub_8287FA38);
PPC_FUNC_IMPL(__imp__sub_8287FA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x8287f918
	ctx.lr = 0x8287FA58;
	sub_8287F918(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8287fa68
	if (!ctx.cr6.eq) goto loc_8287FA68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8287fa7c
	goto loc_8287FA7C;
loc_8287FA68:
	// bl 0x82333d20
	ctx.lr = 0x8287FA6C;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8287fa7c
	if (ctx.cr6.eq) goto loc_8287FA7C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287FA7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287FA98"))) PPC_WEAK_FUNC(sub_8287FA98);
PPC_FUNC_IMPL(__imp__sub_8287FA98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x8287fad8
	if (ctx.cr6.eq) goto loc_8287FAD8;
	// bl 0x8287f918
	ctx.lr = 0x8287FAB8;
	sub_8287F918(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8287fac8
	if (!ctx.cr6.eq) goto loc_8287FAC8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8287fadc
	goto loc_8287FADC;
loc_8287FAC8:
	// bl 0x82333d20
	ctx.lr = 0x8287FACC;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8287fadc
	if (ctx.cr6.eq) goto loc_8287FADC;
loc_8287FAD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287FADC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287FAF0"))) PPC_WEAK_FUNC(sub_8287FAF0);
PPC_FUNC_IMPL(__imp__sub_8287FAF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8287f918
	sub_8287F918(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287FAF8"))) PPC_WEAK_FUNC(sub_8287FAF8);
PPC_FUNC_IMPL(__imp__sub_8287FAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82833108
	ctx.lr = 0x8287FB14;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8287fb28
	if (ctx.cr0.eq) goto loc_8287FB28;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8287fb40
	ctx.lr = 0x8287FB24;
	sub_8287FB40(ctx, base);
	// b 0x8287fb2c
	goto loc_8287FB2C;
loc_8287FB28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287FB2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287FB40"))) PPC_WEAK_FUNC(sub_8287FB40);
PPC_FUNC_IMPL(__imp__sub_8287FB40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,26552
	ctx.r10.s64 = ctx.r10.s64 + 26552;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// lwz r11,76(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lwz r11,84(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// lwz r11,88(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// lwz r11,92(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// lwz r11,96(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// lwz r11,104(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// lwz r11,108(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// lwz r11,112(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// lwz r11,116(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// lwz r11,120(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// lwz r11,124(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// lwz r11,128(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// lwz r11,132(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// lwz r11,136(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// lwz r11,140(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// lwz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// lwz r11,148(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// lwz r11,152(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// lwz r11,156(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// lwz r11,160(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// lwz r11,164(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// lwz r11,168(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// lfs f0,172(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// lfs f0,176(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// lfs f0,180(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// lfs f0,184(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// lfs f0,188(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// lfs f0,192(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// lfs f0,196(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// lfs f0,200(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// lfs f0,204(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,204(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lfs f0,208(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,208(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lfs f0,212(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// lfs f0,216(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,216(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// lfs f0,220(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,220(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// lfs f0,224(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,224(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// lfs f0,228(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,228(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// lwz r11,232(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 232);
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// lwz r11,236(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 236);
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// lwz r11,240(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 240);
	// stw r11,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r11.u32);
	// lwz r11,244(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	// stw r11,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r11.u32);
	// lwz r11,248(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 248);
	// stw r11,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r11.u32);
	// lwz r11,252(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 252);
	// stw r11,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r11.u32);
	// lwz r11,256(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 256);
	// stw r11,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287FD60"))) PPC_WEAK_FUNC(sub_8287FD60);
PPC_FUNC_IMPL(__imp__sub_8287FD60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25272(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25272);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287fda0
	if (!ctx.cr0.eq) goto loc_8287FDA0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25272(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25272, ctx.r11.u32);
	// addi r3,r9,22656
	ctx.r3.s64 = ctx.r9.s64 + 22656;
	// bl 0x82816528
	ctx.lr = 0x8287FD98;
	sub_82816528(ctx, base);
	// stw r3,-25276(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25276, ctx.r3.u32);
	// b 0x8287fda4
	goto loc_8287FDA4;
loc_8287FDA0:
	// lwz r3,-25276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25276);
loc_8287FDA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287FDB8"))) PPC_WEAK_FUNC(sub_8287FDB8);
PPC_FUNC_IMPL(__imp__sub_8287FDB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287f918
	ctx.lr = 0x8287FDD8;
	sub_8287F918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8287FDEC;
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

__attribute__((alias("__imp__sub_8287FE08"))) PPC_WEAK_FUNC(sub_8287FE08);
PPC_FUNC_IMPL(__imp__sub_8287FE08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,15464
	ctx.r31.s64 = ctx.r11.s64 + 15464;
	// lwz r11,15896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15896);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8287fe50
	if (!ctx.cr0.eq) goto loc_8287FE50;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,26528
	ctx.r9.s64 = ctx.r9.s64 + 26528;
	// stw r11,15896(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15896, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19424
	ctx.r3.s64 = ctx.r11.s64 + -19424;
	// bl 0x82a4c758
	ctx.lr = 0x8287FE50;
	sub_82A4C758(ctx, base);
loc_8287FE50:
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

__attribute__((alias("__imp__sub_8287FE68"))) PPC_WEAK_FUNC(sub_8287FE68);
PPC_FUNC_IMPL(__imp__sub_8287FE68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82833108
	ctx.lr = 0x8287FE80;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8287fea4
	if (ctx.cr0.eq) goto loc_8287FEA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x8287FE90;
	sub_82833180(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,24640
	ctx.r11.s64 = ctx.r11.s64 + 24640;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8287fea8
	goto loc_8287FEA8;
loc_8287FEA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287FEA8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287FEC0"))) PPC_WEAK_FUNC(sub_8287FEC0);
PPC_FUNC_IMPL(__imp__sub_8287FEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,22636
	ctx.r3.s64 = ctx.r11.s64 + 22636;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287FED0"))) PPC_WEAK_FUNC(sub_8287FED0);
PPC_FUNC_IMPL(__imp__sub_8287FED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x8287fe08
	ctx.lr = 0x8287FEF0;
	sub_8287FE08(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8287ff00
	if (!ctx.cr6.eq) goto loc_8287FF00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8287ff14
	goto loc_8287FF14;
loc_8287FF00:
	// bl 0x82333d20
	ctx.lr = 0x8287FF04;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8287ff14
	if (ctx.cr6.eq) goto loc_8287FF14;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287FF14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287FF30"))) PPC_WEAK_FUNC(sub_8287FF30);
PPC_FUNC_IMPL(__imp__sub_8287FF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x8287ff70
	if (ctx.cr6.eq) goto loc_8287FF70;
	// bl 0x8287fe08
	ctx.lr = 0x8287FF50;
	sub_8287FE08(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8287ff60
	if (!ctx.cr6.eq) goto loc_8287FF60;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8287ff74
	goto loc_8287FF74;
loc_8287FF60:
	// bl 0x82333d20
	ctx.lr = 0x8287FF64;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8287ff74
	if (ctx.cr6.eq) goto loc_8287FF74;
loc_8287FF70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8287FF74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8287FF88"))) PPC_WEAK_FUNC(sub_8287FF88);
PPC_FUNC_IMPL(__imp__sub_8287FF88) {
	PPC_FUNC_PROLOGUE();
	// b 0x8287fe08
	sub_8287FE08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8287FF90"))) PPC_WEAK_FUNC(sub_8287FF90);
PPC_FUNC_IMPL(__imp__sub_8287FF90) {
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
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82833108
	ctx.lr = 0x8287FFAC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82880030
	if (ctx.cr0.eq) goto loc_82880030;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,24640
	ctx.r10.s64 = ctx.r10.s64 + 24640;
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
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
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
	// b 0x82880034
	goto loc_82880034;
loc_82880030:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82880034:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82880048"))) PPC_WEAK_FUNC(sub_82880048);
PPC_FUNC_IMPL(__imp__sub_82880048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25280);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82880088
	if (!ctx.cr0.eq) goto loc_82880088;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25280(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25280, ctx.r11.u32);
	// addi r3,r9,22636
	ctx.r3.s64 = ctx.r9.s64 + 22636;
	// bl 0x82816528
	ctx.lr = 0x82880080;
	sub_82816528(ctx, base);
	// stw r3,-25284(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25284, ctx.r3.u32);
	// b 0x8288008c
	goto loc_8288008C;
loc_82880088:
	// lwz r3,-25284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25284);
loc_8288008C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828800A0"))) PPC_WEAK_FUNC(sub_828800A0);
PPC_FUNC_IMPL(__imp__sub_828800A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287fe08
	ctx.lr = 0x828800C0;
	sub_8287FE08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828800D4;
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

__attribute__((alias("__imp__sub_828800F0"))) PPC_WEAK_FUNC(sub_828800F0);
PPC_FUNC_IMPL(__imp__sub_828800F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,15424
	ctx.r31.s64 = ctx.r11.s64 + 15424;
	// lwz r11,15904(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15904);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82880138
	if (!ctx.cr0.eq) goto loc_82880138;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,32532
	ctx.r9.s64 = ctx.r9.s64 + 32532;
	// stw r11,15904(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15904, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19400
	ctx.r3.s64 = ctx.r11.s64 + -19400;
	// bl 0x82a4c758
	ctx.lr = 0x82880138;
	sub_82A4C758(ctx, base);
loc_82880138:
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

__attribute__((alias("__imp__sub_82880150"))) PPC_WEAK_FUNC(sub_82880150);
PPC_FUNC_IMPL(__imp__sub_82880150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82833108
	ctx.lr = 0x82880168;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82880194
	if (ctx.cr0.eq) goto loc_82880194;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829394c8
	ctx.lr = 0x82880178;
	sub_829394C8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,25888
	ctx.r11.s64 = ctx.r11.s64 + 25888;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82880198
	goto loc_82880198;
loc_82880194:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82880198:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828801B0"))) PPC_WEAK_FUNC(sub_828801B0);
PPC_FUNC_IMPL(__imp__sub_828801B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25288(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25288);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828801f0
	if (!ctx.cr0.eq) goto loc_828801F0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25288(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25288, ctx.r11.u32);
	// addi r3,r9,24264
	ctx.r3.s64 = ctx.r9.s64 + 24264;
	// bl 0x82816528
	ctx.lr = 0x828801E8;
	sub_82816528(ctx, base);
	// stw r3,-25292(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25292, ctx.r3.u32);
	// b 0x828801f4
	goto loc_828801F4;
loc_828801F0:
	// lwz r3,-25292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25292);
loc_828801F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82880208"))) PPC_WEAK_FUNC(sub_82880208);
PPC_FUNC_IMPL(__imp__sub_82880208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828800f0
	ctx.lr = 0x82880228;
	sub_828800F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8288023C;
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

__attribute__((alias("__imp__sub_82880258"))) PPC_WEAK_FUNC(sub_82880258);
PPC_FUNC_IMPL(__imp__sub_82880258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,15672
	ctx.r31.s64 = ctx.r11.s64 + 15672;
	// lwz r11,15832(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15832);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828802a0
	if (!ctx.cr0.eq) goto loc_828802A0;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,32512
	ctx.r9.s64 = ctx.r9.s64 + 32512;
	// stw r11,15832(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15832, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// bl 0x82a4c758
	ctx.lr = 0x828802A0;
	sub_82A4C758(ctx, base);
loc_828802A0:
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

__attribute__((alias("__imp__sub_828802B8"))) PPC_WEAK_FUNC(sub_828802B8);
PPC_FUNC_IMPL(__imp__sub_828802B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82833108
	ctx.lr = 0x828802D0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828802f4
	if (ctx.cr0.eq) goto loc_828802F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829394c8
	ctx.lr = 0x828802E0;
	sub_829394C8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,25696
	ctx.r11.s64 = ctx.r11.s64 + 25696;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x828802f8
	goto loc_828802F8;
loc_828802F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828802F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82880310"))) PPC_WEAK_FUNC(sub_82880310);
PPC_FUNC_IMPL(__imp__sub_82880310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25296(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25296);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82880350
	if (!ctx.cr0.eq) goto loc_82880350;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25296(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25296, ctx.r11.u32);
	// addi r3,r9,24224
	ctx.r3.s64 = ctx.r9.s64 + 24224;
	// bl 0x82816528
	ctx.lr = 0x82880348;
	sub_82816528(ctx, base);
	// stw r3,-25300(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25300, ctx.r3.u32);
	// b 0x82880354
	goto loc_82880354;
loc_82880350:
	// lwz r3,-25300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25300);
loc_82880354:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82880368"))) PPC_WEAK_FUNC(sub_82880368);
PPC_FUNC_IMPL(__imp__sub_82880368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82880258
	ctx.lr = 0x82880388;
	sub_82880258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8288039C;
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

__attribute__((alias("__imp__sub_828803B8"))) PPC_WEAK_FUNC(sub_828803B8);
PPC_FUNC_IMPL(__imp__sub_828803B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,15484
	ctx.r31.s64 = ctx.r11.s64 + 15484;
	// lwz r11,15708(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15708);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82880400
	if (!ctx.cr0.eq) goto loc_82880400;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,32492
	ctx.r9.s64 = ctx.r9.s64 + 32492;
	// stw r11,15708(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15708, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19352
	ctx.r3.s64 = ctx.r11.s64 + -19352;
	// bl 0x82a4c758
	ctx.lr = 0x82880400;
	sub_82A4C758(ctx, base);
loc_82880400:
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

__attribute__((alias("__imp__sub_82880418"))) PPC_WEAK_FUNC(sub_82880418);
PPC_FUNC_IMPL(__imp__sub_82880418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82833108
	ctx.lr = 0x82880430;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82880454
	if (ctx.cr0.eq) goto loc_82880454;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829394c8
	ctx.lr = 0x82880440;
	sub_829394C8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,25504
	ctx.r11.s64 = ctx.r11.s64 + 25504;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82880458
	goto loc_82880458;
loc_82880454:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82880458:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82880470"))) PPC_WEAK_FUNC(sub_82880470);
PPC_FUNC_IMPL(__imp__sub_82880470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25304(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25304);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828804b0
	if (!ctx.cr0.eq) goto loc_828804B0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25304(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25304, ctx.r11.u32);
	// addi r3,r9,24200
	ctx.r3.s64 = ctx.r9.s64 + 24200;
	// bl 0x82816528
	ctx.lr = 0x828804A8;
	sub_82816528(ctx, base);
	// stw r3,-25308(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25308, ctx.r3.u32);
	// b 0x828804b4
	goto loc_828804B4;
loc_828804B0:
	// lwz r3,-25308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25308);
loc_828804B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828804C8"))) PPC_WEAK_FUNC(sub_828804C8);
PPC_FUNC_IMPL(__imp__sub_828804C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828803b8
	ctx.lr = 0x828804E8;
	sub_828803B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828804FC;
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

__attribute__((alias("__imp__sub_82880518"))) PPC_WEAK_FUNC(sub_82880518);
PPC_FUNC_IMPL(__imp__sub_82880518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,15432
	ctx.r31.s64 = ctx.r11.s64 + 15432;
	// lwz r11,15612(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15612);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82880560
	if (!ctx.cr0.eq) goto loc_82880560;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-32612
	ctx.r9.s64 = ctx.r9.s64 + -32612;
	// stw r11,15612(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15612, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19328
	ctx.r3.s64 = ctx.r11.s64 + -19328;
	// bl 0x82a4c758
	ctx.lr = 0x82880560;
	sub_82A4C758(ctx, base);
loc_82880560:
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

__attribute__((alias("__imp__sub_82880578"))) PPC_WEAK_FUNC(sub_82880578);
PPC_FUNC_IMPL(__imp__sub_82880578) {
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
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82833108
	ctx.lr = 0x82880590;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828805f8
	if (ctx.cr0.eq) goto loc_828805F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829394c8
	ctx.lr = 0x828805A0;
	sub_829394C8(ctx, base);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r7,25032
	ctx.r7.s64 = ctx.r7.s64 + 25032;
	// lfs f0,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-32616(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -32616);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// b 0x828805fc
	goto loc_828805FC;
loc_828805F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828805FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82880610"))) PPC_WEAK_FUNC(sub_82880610);
PPC_FUNC_IMPL(__imp__sub_82880610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25312(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25312);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82880650
	if (!ctx.cr0.eq) goto loc_82880650;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25312(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25312, ctx.r11.u32);
	// addi r3,r9,24576
	ctx.r3.s64 = ctx.r9.s64 + 24576;
	// bl 0x82816528
	ctx.lr = 0x82880648;
	sub_82816528(ctx, base);
	// stw r3,-25316(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25316, ctx.r3.u32);
	// b 0x82880654
	goto loc_82880654;
loc_82880650:
	// lwz r3,-25316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25316);
loc_82880654:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82880668"))) PPC_WEAK_FUNC(sub_82880668);
PPC_FUNC_IMPL(__imp__sub_82880668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82880518
	ctx.lr = 0x82880688;
	sub_82880518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8288069C;
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

__attribute__((alias("__imp__sub_828806B8"))) PPC_WEAK_FUNC(sub_828806B8);
PPC_FUNC_IMPL(__imp__sub_828806B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,15576
	ctx.r31.s64 = ctx.r11.s64 + 15576;
	// lwz r11,15728(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15728);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82880700
	if (!ctx.cr0.eq) goto loc_82880700;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-32632
	ctx.r9.s64 = ctx.r9.s64 + -32632;
	// stw r11,15728(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15728, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19304
	ctx.r3.s64 = ctx.r11.s64 + -19304;
	// bl 0x82a4c758
	ctx.lr = 0x82880700;
	sub_82A4C758(ctx, base);
loc_82880700:
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

__attribute__((alias("__imp__sub_82880718"))) PPC_WEAK_FUNC(sub_82880718);
PPC_FUNC_IMPL(__imp__sub_82880718) {
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
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82833108
	ctx.lr = 0x82880730;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828807a0
	if (ctx.cr0.eq) goto loc_828807A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829394c8
	ctx.lr = 0x82880740;
	sub_829394C8(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r8,24600
	ctx.r8.s64 = ctx.r8.s64 + 24600;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lfs f0,32716(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32716);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// stw r6,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// b 0x828807a4
	goto loc_828807A4;
loc_828807A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828807A4:
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

__attribute__((alias("__imp__sub_828807B8"))) PPC_WEAK_FUNC(sub_828807B8);
PPC_FUNC_IMPL(__imp__sub_828807B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25320(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25320);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828807f8
	if (!ctx.cr0.eq) goto loc_828807F8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25320(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25320, ctx.r11.u32);
	// addi r3,r9,24544
	ctx.r3.s64 = ctx.r9.s64 + 24544;
	// bl 0x82816528
	ctx.lr = 0x828807F0;
	sub_82816528(ctx, base);
	// stw r3,-25324(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25324, ctx.r3.u32);
	// b 0x828807fc
	goto loc_828807FC;
loc_828807F8:
	// lwz r3,-25324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25324);
loc_828807FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82880810"))) PPC_WEAK_FUNC(sub_82880810);
PPC_FUNC_IMPL(__imp__sub_82880810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828806b8
	ctx.lr = 0x82880830;
	sub_828806B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82880844;
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

__attribute__((alias("__imp__sub_82880860"))) PPC_WEAK_FUNC(sub_82880860);
PPC_FUNC_IMPL(__imp__sub_82880860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,16296
	ctx.r31.s64 = ctx.r11.s64 + 16296;
	// lwz r11,16300(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16300);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828808a8
	if (!ctx.cr0.eq) goto loc_828808A8;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-32652
	ctx.r9.s64 = ctx.r9.s64 + -32652;
	// stw r11,16300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16300, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19280
	ctx.r3.s64 = ctx.r11.s64 + -19280;
	// bl 0x82a4c758
	ctx.lr = 0x828808A8;
	sub_82A4C758(ctx, base);
loc_828808A8:
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

__attribute__((alias("__imp__sub_828808C0"))) PPC_WEAK_FUNC(sub_828808C0);
PPC_FUNC_IMPL(__imp__sub_828808C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x828808D8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82880914
	if (ctx.cr0.eq) goto loc_82880914;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829394c8
	ctx.lr = 0x828808E8;
	sub_829394C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,23392
	ctx.r10.s64 = ctx.r10.s64 + 23392;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x82880918
	goto loc_82880918;
loc_82880914:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82880918:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82880930"))) PPC_WEAK_FUNC(sub_82880930);
PPC_FUNC_IMPL(__imp__sub_82880930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25328(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25328);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82880970
	if (!ctx.cr0.eq) goto loc_82880970;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25328(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25328, ctx.r11.u32);
	// addi r3,r9,24508
	ctx.r3.s64 = ctx.r9.s64 + 24508;
	// bl 0x82816528
	ctx.lr = 0x82880968;
	sub_82816528(ctx, base);
	// stw r3,-25332(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25332, ctx.r3.u32);
	// b 0x82880974
	goto loc_82880974;
loc_82880970:
	// lwz r3,-25332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25332);
loc_82880974:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82880988"))) PPC_WEAK_FUNC(sub_82880988);
PPC_FUNC_IMPL(__imp__sub_82880988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82880860
	ctx.lr = 0x828809A8;
	sub_82880860(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828809BC;
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

__attribute__((alias("__imp__sub_828809D8"))) PPC_WEAK_FUNC(sub_828809D8);
PPC_FUNC_IMPL(__imp__sub_828809D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,16160
	ctx.r31.s64 = ctx.r11.s64 + 16160;
	// lwz r11,16164(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16164);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82880a20
	if (!ctx.cr0.eq) goto loc_82880A20;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-32672
	ctx.r9.s64 = ctx.r9.s64 + -32672;
	// stw r11,16164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16164, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19256
	ctx.r3.s64 = ctx.r11.s64 + -19256;
	// bl 0x82a4c758
	ctx.lr = 0x82880A20;
	sub_82A4C758(ctx, base);
loc_82880A20:
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

__attribute__((alias("__imp__sub_82880A38"))) PPC_WEAK_FUNC(sub_82880A38);
PPC_FUNC_IMPL(__imp__sub_82880A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82880A50;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82880a84
	if (ctx.cr0.eq) goto loc_82880A84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829394c8
	ctx.lr = 0x82880A60;
	sub_829394C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,21808
	ctx.r10.s64 = ctx.r10.s64 + 21808;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// b 0x82880a88
	goto loc_82880A88;
loc_82880A84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82880A88:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82880AA0"))) PPC_WEAK_FUNC(sub_82880AA0);
PPC_FUNC_IMPL(__imp__sub_82880AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-25336(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25336);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82880ae0
	if (!ctx.cr0.eq) goto loc_82880AE0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,-25336(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25336, ctx.r11.u32);
	// addi r3,r9,24480
	ctx.r3.s64 = ctx.r9.s64 + 24480;
	// bl 0x82816528
	ctx.lr = 0x82880AD8;
	sub_82816528(ctx, base);
	// stw r3,-25340(r31)
	PPC_STORE_U32(ctx.r31.u32 + -25340, ctx.r3.u32);
	// b 0x82880ae4
	goto loc_82880AE4;
loc_82880AE0:
	// lwz r3,-25340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -25340);
loc_82880AE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

