#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_827135F0"))) PPC_WEAK_FUNC(sub_827135F0);
PPC_FUNC_IMPL(__imp__sub_827135F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,-29320
	ctx.r3.s64 = ctx.r11.s64 + -29320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82713600"))) PPC_WEAK_FUNC(sub_82713600);
PPC_FUNC_IMPL(__imp__sub_82713600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82713660
	ctx.lr = 0x82713620;
	sub_82713660(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82713630
	if (!ctx.cr6.eq) goto loc_82713630;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82713644
	goto loc_82713644;
loc_82713630:
	// bl 0x82333d20
	ctx.lr = 0x82713634;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82713644
	if (ctx.cr6.eq) goto loc_82713644;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82713644:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82713660"))) PPC_WEAK_FUNC(sub_82713660);
PPC_FUNC_IMPL(__imp__sub_82713660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13884
	ctx.r31.s64 = ctx.r11.s64 + 13884;
	// lwz r11,13888(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13888);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827136a8
	if (!ctx.cr0.eq) goto loc_827136A8;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-28848
	ctx.r9.s64 = ctx.r9.s64 + -28848;
	// stw r11,13888(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13888, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,30144
	ctx.r3.s64 = ctx.r11.s64 + 30144;
	// bl 0x82a4c758
	ctx.lr = 0x827136A8;
	sub_82A4C758(ctx, base);
loc_827136A8:
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

__attribute__((alias("__imp__sub_827136C0"))) PPC_WEAK_FUNC(sub_827136C0);
PPC_FUNC_IMPL(__imp__sub_827136C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,23556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23556);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82713700
	if (!ctx.cr0.eq) goto loc_82713700;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r11,23556(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23556, ctx.r11.u32);
	// addi r3,r9,-29320
	ctx.r3.s64 = ctx.r9.s64 + -29320;
	// bl 0x82816528
	ctx.lr = 0x827136F8;
	sub_82816528(ctx, base);
	// stw r3,23552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23552, ctx.r3.u32);
	// b 0x82713704
	goto loc_82713704;
loc_82713700:
	// lwz r3,23552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23552);
loc_82713704:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82713718"))) PPC_WEAK_FUNC(sub_82713718);
PPC_FUNC_IMPL(__imp__sub_82713718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82713660
	ctx.lr = 0x82713738;
	sub_82713660(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271374C;
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

__attribute__((alias("__imp__sub_82713768"))) PPC_WEAK_FUNC(sub_82713768);
PPC_FUNC_IMPL(__imp__sub_82713768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x827137a8
	if (ctx.cr6.eq) goto loc_827137A8;
	// bl 0x82713660
	ctx.lr = 0x82713788;
	sub_82713660(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82713798
	if (!ctx.cr6.eq) goto loc_82713798;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827137ac
	goto loc_827137AC;
loc_82713798:
	// bl 0x82333d20
	ctx.lr = 0x8271379C;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x827137ac
	if (ctx.cr6.eq) goto loc_827137AC;
loc_827137A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827137AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827137C0"))) PPC_WEAK_FUNC(sub_827137C0);
PPC_FUNC_IMPL(__imp__sub_827137C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827137f0
	if (!ctx.cr6.eq) goto loc_827137F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827137F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827137F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82713810"))) PPC_WEAK_FUNC(sub_82713810);
PPC_FUNC_IMPL(__imp__sub_82713810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82981190
	ctx.lr = 0x82713830;
	sub_82981190(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82713840
	if (ctx.cr0.eq) goto loc_82713840;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82713840;
	sub_82332DB8(ctx, base);
loc_82713840:
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

__attribute__((alias("__imp__sub_82713860"))) PPC_WEAK_FUNC(sub_82713860);
PPC_FUNC_IMPL(__imp__sub_82713860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,14476
	ctx.r3.s64 = ctx.r11.s64 + 14476;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82713870"))) PPC_WEAK_FUNC(sub_82713870);
PPC_FUNC_IMPL(__imp__sub_82713870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x824121e8
	ctx.lr = 0x82713890;
	sub_824121E8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827138a4
	if (ctx.cr6.eq) goto loc_827138A4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82713600
	ctx.lr = 0x827138A4;
	sub_82713600(ctx, base);
loc_827138A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827138C0"))) PPC_WEAK_FUNC(sub_827138C0);
PPC_FUNC_IMPL(__imp__sub_827138C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827138f8
	if (ctx.cr6.eq) goto loc_827138F8;
	// bl 0x824121e8
	ctx.lr = 0x827138E8;
	sub_824121E8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827138f8
	if (!ctx.cr6.eq) goto loc_827138F8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82713904
	goto loc_82713904;
loc_827138F8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82713768
	ctx.lr = 0x82713904;
	sub_82713768(ctx, base);
loc_82713904:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82713920"))) PPC_WEAK_FUNC(sub_82713920);
PPC_FUNC_IMPL(__imp__sub_82713920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82977778
	ctx.lr = 0x82713940;
	sub_82977778(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82713950
	if (ctx.cr0.eq) goto loc_82713950;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82713950;
	sub_82332DB8(ctx, base);
loc_82713950:
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

__attribute__((alias("__imp__sub_82713970"))) PPC_WEAK_FUNC(sub_82713970);
PPC_FUNC_IMPL(__imp__sub_82713970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82412438
	ctx.lr = 0x82713990;
	sub_82412438(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827139a0
	if (!ctx.cr6.eq) goto loc_827139A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x827139b8
	goto loc_827139B8;
loc_827139A0:
	// bl 0x824121e8
	ctx.lr = 0x827139A4;
	sub_824121E8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827139b8
	if (ctx.cr6.eq) goto loc_827139B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82713600
	ctx.lr = 0x827139B8;
	sub_82713600(ctx, base);
loc_827139B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827139D0"))) PPC_WEAK_FUNC(sub_827139D0);
PPC_FUNC_IMPL(__imp__sub_827139D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82713a08
	if (ctx.cr6.eq) goto loc_82713A08;
	// bl 0x82412438
	ctx.lr = 0x827139F8;
	sub_82412438(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82713a08
	if (!ctx.cr6.eq) goto loc_82713A08;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82713a14
	goto loc_82713A14;
loc_82713A08:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827138c0
	ctx.lr = 0x82713A14;
	sub_827138C0(ctx, base);
loc_82713A14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82713A30"))) PPC_WEAK_FUNC(sub_82713A30);
PPC_FUNC_IMPL(__imp__sub_82713A30) {
	PPC_FUNC_PROLOGUE();
	// b 0x82412438
	sub_82412438(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82713A38"))) PPC_WEAK_FUNC(sub_82713A38);
PPC_FUNC_IMPL(__imp__sub_82713A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,576
	ctx.r3.s64 = 576;
	// bl 0x82833108
	ctx.lr = 0x82713A54;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82713a68
	if (ctx.cr0.eq) goto loc_82713A68;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827131c0
	ctx.lr = 0x82713A64;
	sub_827131C0(ctx, base);
	// b 0x82713a6c
	goto loc_82713A6C;
loc_82713A68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82713A6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82713A80"))) PPC_WEAK_FUNC(sub_82713A80);
PPC_FUNC_IMPL(__imp__sub_82713A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,14508
	ctx.r3.s64 = ctx.r11.s64 + 14508;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82713A90"))) PPC_WEAK_FUNC(sub_82713A90);
PPC_FUNC_IMPL(__imp__sub_82713A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,-29304
	ctx.r3.s64 = ctx.r11.s64 + -29304;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82713AA0"))) PPC_WEAK_FUNC(sub_82713AA0);
PPC_FUNC_IMPL(__imp__sub_82713AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x82713ABC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82713ad0
	if (ctx.cr0.eq) goto loc_82713AD0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827130d8
	ctx.lr = 0x82713ACC;
	sub_827130D8(ctx, base);
	// b 0x82713ad4
	goto loc_82713AD4;
loc_82713AD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82713AD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82713AE8"))) PPC_WEAK_FUNC(sub_82713AE8);
PPC_FUNC_IMPL(__imp__sub_82713AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82713b38
	ctx.lr = 0x82713B08;
	sub_82713B38(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82713b1c
	if (ctx.cr6.eq) goto loc_82713B1C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82713970
	ctx.lr = 0x82713B1C;
	sub_82713970(ctx, base);
loc_82713B1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82713B38"))) PPC_WEAK_FUNC(sub_82713B38);
PPC_FUNC_IMPL(__imp__sub_82713B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13880
	ctx.r31.s64 = ctx.r11.s64 + 13880;
	// lwz r11,13876(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13876);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82713b80
	if (!ctx.cr0.eq) goto loc_82713B80;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-28228
	ctx.r9.s64 = ctx.r9.s64 + -28228;
	// stw r11,13876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13876, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,30168
	ctx.r3.s64 = ctx.r11.s64 + 30168;
	// bl 0x82a4c758
	ctx.lr = 0x82713B80;
	sub_82A4C758(ctx, base);
loc_82713B80:
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

__attribute__((alias("__imp__sub_82713B98"))) PPC_WEAK_FUNC(sub_82713B98);
PPC_FUNC_IMPL(__imp__sub_82713B98) {
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
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x82713BAC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82713bc0
	if (ctx.cr0.eq) goto loc_82713BC0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x829146b0
	ctx.lr = 0x82713BBC;
	sub_829146B0(ctx, base);
	// b 0x82713bc4
	goto loc_82713BC4;
loc_82713BC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82713BC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82713BD8"))) PPC_WEAK_FUNC(sub_82713BD8);
PPC_FUNC_IMPL(__imp__sub_82713BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,23548(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23548);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82713c18
	if (!ctx.cr0.eq) goto loc_82713C18;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r11,23548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23548, ctx.r11.u32);
	// addi r3,r9,-29304
	ctx.r3.s64 = ctx.r9.s64 + -29304;
	// bl 0x82816528
	ctx.lr = 0x82713C10;
	sub_82816528(ctx, base);
	// stw r3,23544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23544, ctx.r3.u32);
	// b 0x82713c1c
	goto loc_82713C1C;
loc_82713C18:
	// lwz r3,23544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23544);
loc_82713C1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82713C30"))) PPC_WEAK_FUNC(sub_82713C30);
PPC_FUNC_IMPL(__imp__sub_82713C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82713b38
	ctx.lr = 0x82713C50;
	sub_82713B38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82713C64;
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

__attribute__((alias("__imp__sub_82713C80"))) PPC_WEAK_FUNC(sub_82713C80);
PPC_FUNC_IMPL(__imp__sub_82713C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82713cb8
	if (ctx.cr6.eq) goto loc_82713CB8;
	// bl 0x82713b38
	ctx.lr = 0x82713CA8;
	sub_82713B38(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82713cb8
	if (!ctx.cr6.eq) goto loc_82713CB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82713cc4
	goto loc_82713CC4;
loc_82713CB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827139d0
	ctx.lr = 0x82713CC4;
	sub_827139D0(ctx, base);
loc_82713CC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82713CE0"))) PPC_WEAK_FUNC(sub_82713CE0);
PPC_FUNC_IMPL(__imp__sub_82713CE0) {
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
	// bl 0x829bc540
	ctx.lr = 0x82713CF8;
	sub_829BC540(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r10,r10,-18712
	ctx.r10.s64 = ctx.r10.s64 + -18712;
	// addi r11,r11,-19728
	ctx.r11.s64 = ctx.r11.s64 + -19728;
	// addi r9,r9,-15204
	ctx.r9.s64 = ctx.r9.s64 + -15204;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r5,8
	ctx.r5.s64 = 8;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lfs f13,24000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f11,17072(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17072);
	ctx.f11.f64 = double(temp.f32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lfs f0,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// stw r10,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r10.u32);
	// stw r11,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r11.u32);
	// lis r9,12115
	ctx.r9.s64 = 793968640;
	// stw r11,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r11.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r5,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r5.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r11.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r11,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r11.u32);
	// ori r9,r9,11234
	ctx.r9.u64 = ctx.r9.u64 | 11234;
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// lfs f12,908(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 908);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r11.u32);
	// lfs f10,30356(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 30356);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r11.u32);
	// lfs f9,-32564(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -32564);
	ctx.f9.f64 = double(temp.f32);
	// stw r4,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r11.u32);
	// stw r11,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r11.u32);
	// stw r11,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r11.u32);
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// stw r11,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r11.u32);
	// stfs f13,1412(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1412, temp.u32);
	// stfs f11,1408(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1408, temp.u32);
	// stw r10,1028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1028, ctx.r10.u32);
	// stfs f0,1420(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1420, temp.u32);
	// stw r11,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r11.u32);
	// stfs f10,1616(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1616, temp.u32);
	// stw r11,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r11.u32);
	// stfs f0,1624(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1624, temp.u32);
	// stw r10,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r10.u32);
	// stfs f9,1628(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1628, temp.u32);
	// stw r11,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r11.u32);
	// stfs f0,1632(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1632, temp.u32);
	// stw r11,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r11.u32);
	// stfs f12,1656(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1656, temp.u32);
	// stw r5,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r5.u32);
	// stfs f0,1636(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1636, temp.u32);
	// stw r11,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r11.u32);
	// stfs f13,1644(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1644, temp.u32);
	// stw r11,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r11.u32);
	// stfs f0,1648(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1648, temp.u32);
	// stw r11,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r11.u32);
	// stfs f12,1660(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1660, temp.u32);
	// stw r10,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r10.u32);
	// stw r10,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r10.u32);
	// stw r11,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r11.u32);
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
	// stw r11,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r11.u32);
	// stw r11,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r11.u32);
	// stw r11,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r11.u32);
	// stw r9,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r9.u32);
	// stw r10,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82713E40"))) PPC_WEAK_FUNC(sub_82713E40);
PPC_FUNC_IMPL(__imp__sub_82713E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r11,r11,-19728
	ctx.r11.s64 = ctx.r11.s64 + -19728;
	// addi r10,r10,-18712
	ctx.r10.s64 = ctx.r10.s64 + -18712;
	// addi r9,r9,-15204
	ctx.r9.s64 = ctx.r9.s64 + -15204;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r3,r31,1524
	ctx.r3.s64 = ctx.r31.s64 + 1524;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x8239d768
	ctx.lr = 0x82713E84;
	sub_8239D768(ctx, base);
	// addi r30,r31,1476
	ctx.r30.s64 = ctx.r31.s64 + 1476;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,1492(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82713EA0;
	sub_82332CA8(ctx, base);
	// lwz r3,1488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82713eb0
	if (ctx.cr6.eq) goto loc_82713EB0;
	// bl 0x82332db8
	ctx.lr = 0x82713EB0;
	sub_82332DB8(ctx, base);
loc_82713EB0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bl 0x829bc9e8
	ctx.lr = 0x82713EC8;
	sub_829BC9E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82713EE0"))) PPC_WEAK_FUNC(sub_82713EE0);
PPC_FUNC_IMPL(__imp__sub_82713EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x829bc7b8
	ctx.lr = 0x82713EF8;
	sub_829BC7B8(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r31,1208
	ctx.r4.s64 = ctx.r31.s64 + 1208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-28208
	ctx.r5.s64 = ctx.r11.s64 + -28208;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824115b8
	ctx.lr = 0x82713F14;
	sub_824115B8(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r31,1036
	ctx.r4.s64 = ctx.r31.s64 + 1036;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-28192
	ctx.r5.s64 = ctx.r11.s64 + -28192;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824f9968
	ctx.lr = 0x82713F30;
	sub_824F9968(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r31,1040
	ctx.r4.s64 = ctx.r31.s64 + 1040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-28168
	ctx.r5.s64 = ctx.r11.s64 + -28168;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824f5ee0
	ctx.lr = 0x82713F4C;
	sub_824F5EE0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r31,1056
	ctx.r4.s64 = ctx.r31.s64 + 1056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-28140
	ctx.r5.s64 = ctx.r11.s64 + -28140;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824115b8
	ctx.lr = 0x82713F68;
	sub_824115B8(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r31,1192
	ctx.r4.s64 = ctx.r31.s64 + 1192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-28104
	ctx.r5.s64 = ctx.r11.s64 + -28104;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824f9968
	ctx.lr = 0x82713F84;
	sub_824F9968(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r31,1196
	ctx.r4.s64 = ctx.r31.s64 + 1196;
	// addi r5,r11,-28060
	ctx.r5.s64 = ctx.r11.s64 + -28060;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f5ee0
	ctx.lr = 0x82713FA0;
	sub_824F5EE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82713FB8"))) PPC_WEAK_FUNC(sub_82713FB8);
PPC_FUNC_IMPL(__imp__sub_82713FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x829c6360
	ctx.lr = 0x82713FD0;
	sub_829C6360(ctx, base);
	// lwz r4,1428(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82714018
	if (ctx.cr6.eq) goto loc_82714018;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82713FF0;
	sub_829B9720(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x82713FF4;
	sub_82416348(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82714018
	if (ctx.cr0.eq) goto loc_82714018;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271400C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82714018
	if (!ctx.cr0.eq) goto loc_82714018;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82714018:
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

__attribute__((alias("__imp__sub_82714030"))) PPC_WEAK_FUNC(sub_82714030);
PPC_FUNC_IMPL(__imp__sub_82714030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82714038;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829c4e48
	ctx.lr = 0x82714044;
	sub_829C4E48(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82714138
	if (!ctx.cr6.eq) goto loc_82714138;
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82714138
	if (!ctx.cr6.eq) goto loc_82714138;
	// addi r11,r31,1604
	ctx.r11.s64 = ctx.r31.s64 + 1604;
	// addi r30,r31,424
	ctx.r30.s64 = ctx.r31.s64 + 424;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82714078;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,1432
	ctx.r10.s64 = ctx.r31.s64 + 1432;
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
	ctx.lr = 0x82714098;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,1436
	ctx.r10.s64 = ctx.r31.s64 + 1436;
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
	ctx.lr = 0x827140B8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,1452
	ctx.r10.s64 = ctx.r31.s64 + 1452;
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
	ctx.lr = 0x827140D8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r31,1440
	ctx.r3.s64 = ctx.r31.s64 + 1440;
	// addi r28,r31,1588
	ctx.r28.s64 = ctx.r31.s64 + 1588;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x8281d960
	ctx.lr = 0x827140F0;
	sub_8281D960(ctx, base);
	// lwz r11,1444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// stw r3,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r28,r31,1592
	ctx.r28.s64 = ctx.r31.s64 + 1592;
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
	// bl 0x82838fd0
	ctx.lr = 0x82714110;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82838fd0
	ctx.lr = 0x8271412C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
loc_82714138:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82714148"))) PPC_WEAK_FUNC(sub_82714148);
PPC_FUNC_IMPL(__imp__sub_82714148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82714150;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x829c5148
	ctx.lr = 0x82714160;
	sub_829C5148(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82714440
	if (!ctx.cr6.eq) goto loc_82714440;
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82714440
	if (!ctx.cr6.eq) goto loc_82714440;
	// addi r28,r31,1604
	ctx.r28.s64 = ctx.r31.s64 + 1604;
	// addi r30,r31,424
	ctx.r30.s64 = ctx.r31.s64 + 424;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82714194;
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
	ctx.lr = 0x827141B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r26
	ctx.r4.u64 = ctx.r3.u64 + ctx.r26.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827141CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827141f0
	if (!ctx.cr0.eq) goto loc_827141F0;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x827141E4;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_827141F0:
	// addi r28,r31,1432
	ctx.r28.s64 = ctx.r31.s64 + 1432;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82714204;
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
	ctx.lr = 0x82714228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r26
	ctx.r4.u64 = ctx.r3.u64 + ctx.r26.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271423C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82714260
	if (!ctx.cr0.eq) goto loc_82714260;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82714254;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82714260:
	// addi r28,r31,1436
	ctx.r28.s64 = ctx.r31.s64 + 1436;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82714274;
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
	ctx.lr = 0x82714298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r26
	ctx.r4.u64 = ctx.r3.u64 + ctx.r26.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827142AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827142d0
	if (!ctx.cr0.eq) goto loc_827142D0;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x827142C4;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_827142D0:
	// addi r28,r31,1452
	ctx.r28.s64 = ctx.r31.s64 + 1452;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x827142E4;
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
	ctx.lr = 0x82714308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r26
	ctx.r4.u64 = ctx.r3.u64 + ctx.r26.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271431C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82714340
	if (!ctx.cr0.eq) goto loc_82714340;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82714334;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82714340:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82714440
	if (ctx.cr6.eq) goto loc_82714440;
	// addi r3,r31,1440
	ctx.r3.s64 = ctx.r31.s64 + 1440;
	// addi r28,r31,1588
	ctx.r28.s64 = ctx.r31.s64 + 1588;
	// bl 0x8281d960
	ctx.lr = 0x82714358;
	sub_8281D960(ctx, base);
	// lwz r11,1444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// stw r3,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r27,r31,1592
	ctx.r27.s64 = ctx.r31.s64 + 1592;
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
	// bl 0x82838fd0
	ctx.lr = 0x82714378;
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
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271439C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r26
	ctx.r4.u64 = ctx.r3.u64 + ctx.r26.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827143B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827143d4
	if (!ctx.cr0.eq) goto loc_827143D4;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x827143C8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_827143D4:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x827143E4;
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
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82714408;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r26
	ctx.r4.u64 = ctx.r3.u64 + ctx.r26.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271441C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82714440
	if (!ctx.cr0.eq) goto loc_82714440;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82714434;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82714440:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82714450"))) PPC_WEAK_FUNC(sub_82714450);
PPC_FUNC_IMPL(__imp__sub_82714450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x829c4898
	ctx.lr = 0x82714468;
	sub_829C4898(ctx, base);
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827144a0
	if (!ctx.cr6.eq) goto loc_827144A0;
	// lwz r11,1432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827144a0
	if (ctx.cr6.eq) goto loc_827144A0;
	// lwz r11,1436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827144a0
	if (ctx.cr6.eq) goto loc_827144A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827144A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827144A0:
	// lwz r11,1588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1588);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827144b4
	if (ctx.cr6.eq) goto loc_827144B4;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x827144b8
	goto loc_827144B8;
loc_827144B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827144B8:
	// stw r11,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r11.u32);
	// lwz r11,1592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// stw r11,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827144D8"))) PPC_WEAK_FUNC(sub_827144D8);
PPC_FUNC_IMPL(__imp__sub_827144D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827144E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829bd978
	ctx.lr = 0x827144EC;
	sub_829BD978(ctx, base);
	// lwz r3,1432(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82714508
	if (ctx.cr6.eq) goto loc_82714508;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82714508;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82714508:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271451C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// ble cr6,0x8271456c
	if (!ctx.cr6.gt) goto loc_8271456C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82714534:
	// lwz r11,1536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82714558
	if (ctx.cr6.eq) goto loc_82714558;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82714558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82714558:
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82714534
	if (ctx.cr6.lt) goto loc_82714534;
loc_8271456C:
	// lwz r11,1544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1544);
	// addi r3,r31,1524
	ctx.r3.s64 = ctx.r31.s64 + 1524;
	// stw r28,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82714590
	if (ctx.cr6.eq) goto loc_82714590;
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x82714590;
	sub_82332C38(ctx, base);
loc_82714590:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c36c0
	ctx.lr = 0x82714598;
	sub_829C36C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827145A0"))) PPC_WEAK_FUNC(sub_827145A0);
PPC_FUNC_IMPL(__imp__sub_827145A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x827145A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x829bd588
	ctx.lr = 0x827145B4;
	sub_829BD588(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r26,84(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r25,1164(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1164);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827145DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827145f8
	if (!ctx.cr6.gt) goto loc_827145F8;
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// b 0x827146cc
	goto loc_827146CC;
loc_827145F8:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82714698
	if (!ctx.cr6.eq) goto loc_82714698;
	// lwz r27,1160(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1160);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271461C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r28,r26,948
	ctx.r28.s64 = ctx.r26.s64 + 948;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82714678
	if (!ctx.cr6.gt) goto loc_82714678;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82714634:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82714664
	if (!ctx.cr6.eq) goto loc_82714664;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8271465C;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_82714664:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82714634
	if (ctx.cr6.lt) goto loc_82714634;
loc_82714678:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82714698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82714698:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827146cc
	if (!ctx.cr0.eq) goto loc_827146CC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827146B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827146cc
	if (ctx.cr0.eq) goto loc_827146CC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x827146CC;
	sub_82410060(ctx, base);
loc_827146CC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827146E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827146E8"))) PPC_WEAK_FUNC(sub_827146E8);
PPC_FUNC_IMPL(__imp__sub_827146E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827146F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82714708
	if (!ctx.cr6.eq) goto loc_82714708;
	// bl 0x829c3628
	ctx.lr = 0x82714708;
	sub_829C3628(ctx, base);
loc_82714708:
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x82833108
	ctx.lr = 0x82714710;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82714720
	if (ctx.cr0.eq) goto loc_82714720;
	// bl 0x82920460
	ctx.lr = 0x8271471C;
	sub_82920460(ctx, base);
	// b 0x82714724
	goto loc_82714724;
loc_82714720:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82714724:
	// stw r3,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271473C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-28020
	ctx.r4.s64 = ctx.r11.s64 + -28020;
	// bl 0x8233a258
	ctx.lr = 0x8271474C;
	sub_8233A258(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,1580(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82714768
	if (ctx.cr6.eq) goto loc_82714768;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x82714770
	goto loc_82714770;
loc_82714768:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
loc_82714770:
	// bl 0x828165a8
	ctx.lr = 0x82714774;
	sub_828165A8(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333960
	ctx.lr = 0x82714780;
	sub_82333960(ctx, base);
	// lwz r11,1580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// stw r31,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r31.u32);
	// lwz r3,1580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271479C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x827147bc
	if (ctx.cr6.eq) goto loc_827147BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827147BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827147BC:
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x82333a20
	ctx.lr = 0x827147C4;
	sub_82333A20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x824090e0
	ctx.lr = 0x827147CC;
	sub_824090E0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x827147dc
	if (ctx.cr0.eq) goto loc_827147DC;
	// lwz r3,8964(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8964);
loc_827147DC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827148d0
	if (ctx.cr6.eq) goto loc_827148D0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827148d0
	if (ctx.cr6.eq) goto loc_827148D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1636);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827147FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8271485c
	if (ctx.cr0.eq) goto loc_8271485C;
	// lwz r11,204(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827149a8
	if (!ctx.cr6.gt) goto loc_827149A8;
	// addi r28,r31,1524
	ctx.r28.s64 = ctx.r31.s64 + 1524;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8271481C:
	// lwz r11,200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82714834;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82410060
	ctx.lr = 0x82714844;
	sub_82410060(ctx, base);
	// lwz r11,204(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8271481c
	if (ctx.cr6.lt) goto loc_8271481C;
	// b 0x827149a8
	goto loc_827149A8;
loc_8271485C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824ba060
	ctx.lr = 0x82714864;
	sub_824BA060(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x827149a8
	if (ctx.cr0.eq) goto loc_827149A8;
	// lwz r11,6572(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827149a8
	if (ctx.cr6.eq) goto loc_827149A8;
	// lwz r11,6136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6136);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827149a8
	if (!ctx.cr6.gt) goto loc_827149A8;
	// addi r28,r31,1524
	ctx.r28.s64 = ctx.r31.s64 + 1524;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82714890:
	// lwz r11,6132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6132);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827148A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82410060
	ctx.lr = 0x827148B8;
	sub_82410060(ctx, base);
	// lwz r11,6136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6136);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82714890
	if (ctx.cr6.lt) goto loc_82714890;
	// b 0x827149a8
	goto loc_827149A8;
loc_827148D0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824ba060
	ctx.lr = 0x827148D8;
	sub_824BA060(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82714944
	if (ctx.cr0.eq) goto loc_82714944;
	// lwz r11,6572(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82714944
	if (ctx.cr6.eq) goto loc_82714944;
	// lwz r11,6136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6136);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827149a8
	if (!ctx.cr6.gt) goto loc_827149A8;
	// addi r28,r31,1524
	ctx.r28.s64 = ctx.r31.s64 + 1524;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82714904:
	// lwz r11,6132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6132);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271491C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82410060
	ctx.lr = 0x8271492C;
	sub_82410060(ctx, base);
	// lwz r11,6136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6136);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82714904
	if (ctx.cr6.lt) goto loc_82714904;
	// b 0x827149a8
	goto loc_827149A8;
loc_82714944:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332868
	ctx.lr = 0x8271494C;
	sub_82332868(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x827149a8
	if (ctx.cr0.eq) goto loc_827149A8;
	// lwz r11,6352(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6352);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827149a8
	if (!ctx.cr6.gt) goto loc_827149A8;
	// addi r28,r31,1524
	ctx.r28.s64 = ctx.r31.s64 + 1524;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8271496C:
	// lwz r11,6348(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6348);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82714984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82410060
	ctx.lr = 0x82714994;
	sub_82410060(ctx, base);
	// lwz r11,6352(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6352);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8271496c
	if (ctx.cr6.lt) goto loc_8271496C;
loc_827149A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827149B0"))) PPC_WEAK_FUNC(sub_827149B0);
PPC_FUNC_IMPL(__imp__sub_827149B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827149B8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,1468(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827149f4
	if (ctx.cr6.eq) goto loc_827149F4;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// bl 0x829bd8e0
	ctx.lr = 0x827149D8;
	sub_829BD8E0(ctx, base);
	// stw r3,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r3.u32);
	// bl 0x82978ed0
	ctx.lr = 0x827149E0;
	sub_82978ED0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827149F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827149F4:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r5,1432(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82714a70
	if (ctx.cr6.eq) goto loc_82714A70;
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82714a70
	if (ctx.cr6.eq) goto loc_82714A70;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f31,120(r1)
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
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r4,1436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,280(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// rldicr r9,r29,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// ld r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82714A58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,1432(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82714A70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82714A70:
	// lwz r11,1472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82714ba0
	if (ctx.cr6.eq) goto loc_82714BA0;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1476
	ctx.r3.s64 = ctx.r31.s64 + 1476;
	// bl 0x823327e0
	ctx.lr = 0x82714A94;
	sub_823327E0(ctx, base);
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82714ba0
	if (!ctx.cr6.gt) goto loc_82714BA0;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82714AA8:
	// li r3,1440
	ctx.r3.s64 = 1440;
	// bl 0x82833108
	ctx.lr = 0x82714AB0;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82714ac4
	if (ctx.cr0.eq) goto loc_82714AC4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82708208
	ctx.lr = 0x82714AC0;
	sub_82708208(ctx, base);
	// b 0x82714ac8
	goto loc_82714AC8;
loc_82714AC4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82714AC8:
	// lwz r11,1488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,1488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82714B2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82714B48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r10,1420(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1420);
	// oris r10,r10,6144
	ctx.r10.u64 = ctx.r10.u64 | 402653184;
	// stw r10,1420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1420, ctx.r10.u32);
	// lwz r11,1488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stw r29,956(r11)
	PPC_STORE_U32(ctx.r11.u32 + 956, ctx.r29.u32);
	// lwz r11,1488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,1204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82714b80
	if (!ctx.cr6.eq) goto loc_82714B80;
	// bl 0x829c3628
	ctx.lr = 0x82714B80;
	sub_829C3628(ctx, base);
loc_82714B80:
	// lwz r11,1488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82714aa8
	if (ctx.cr6.lt) goto loc_82714AA8;
loc_82714BA0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82714BB0"))) PPC_WEAK_FUNC(sub_82714BB0);
PPC_FUNC_IMPL(__imp__sub_82714BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82714BB8;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// lfs f0,18368(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18368);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-12104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12104);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// beq cr6,0x82714c18
	if (ctx.cr6.eq) goto loc_82714C18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82714C10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x82714c1c
	goto loc_82714C1C;
loc_82714C18:
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
loc_82714C1C:
	// lwz r11,1600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82714c38
	if (!ctx.cr6.eq) goto loc_82714C38;
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x82714c44
	goto loc_82714C44;
loc_82714C38:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82714c44
	if (!ctx.cr6.eq) goto loc_82714C44;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82714C44:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82332928
	ctx.lr = 0x82714C4C;
	sub_82332928(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,16
	ctx.r30.s64 = 16;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f30,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// beq 0x82714c78
	if (ctx.cr0.eq) goto loc_82714C78;
	// lwz r11,3232(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3232);
	// lwz r30,2100(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82714c78
	if (!ctx.cr6.gt) goto loc_82714C78;
	// lwz r11,3228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3228);
	// lfs f30,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
loc_82714C78:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// bl 0x824113a0
	ctx.lr = 0x82714C90;
	sub_824113A0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r25,1436(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r23,1432(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// addi r3,r11,-28004
	ctx.r3.s64 = ctx.r11.s64 + -28004;
	// bl 0x82816528
	ctx.lr = 0x82714CA8;
	sub_82816528(ctx, base);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r5,1674
	ctx.r5.s64 = 1674;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// bl 0x829c87d0
	ctx.lr = 0x82714CDC;
	sub_829C87D0(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r10,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r10.u32);
	// stw r9,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r9.u32);
	// stw r8,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r8.u32);
	// stw r7,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r7.u32);
	// stw r6,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r6.u32);
	// lwz r11,1512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r3,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r3.u32);
	// bne cr6,0x82714d24
	if (!ctx.cr6.eq) goto loc_82714D24;
	// lwz r4,1424(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
loc_82714D24:
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82331120
	ctx.lr = 0x82714D70;
	sub_82331120(ctx, base);
	// lwz r11,1508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1508);
	// stw r27,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r27.u32);
	// stw r27,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r27.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82714D90"))) PPC_WEAK_FUNC(sub_82714D90);
PPC_FUNC_IMPL(__imp__sub_82714D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d8
	ctx.lr = 0x82714D98;
	__savegprlr_16(ctx, base);
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x82a61738
	ctx.lr = 0x82714DA0;
	__savefpr_24(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// bl 0x82411708
	ctx.lr = 0x82714DBC;
	sub_82411708(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82411708
	ctx.lr = 0x82714DC8;
	sub_82411708(ctx, base);
	// lwz r11,24(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// lwz r10,28(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// lis r17,-31949
	ctx.r17.s64 = -2093809664;
	// lwz r9,32(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lfs f0,1624(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lfs f13,984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f25,f13,f0
	ctx.f25.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bl 0x8281d960
	ctx.lr = 0x82714E00;
	sub_8281D960(ctx, base);
	// mr. r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// li r19,0
	ctx.r19.s64 = 0;
	// beq 0x82714e28
	if (ctx.cr0.eq) goto loc_82714E28;
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82714E20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// b 0x82714e2c
	goto loc_82714E2C;
loc_82714E28:
	// mr r16,r19
	ctx.r16.u64 = ctx.r19.u64;
loc_82714E2C:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x82714E4C;
	sub_8281D960(ctx, base);
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82714e70
	if (ctx.cr6.eq) goto loc_82714E70;
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lwz r4,448(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 448);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82714E68;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x82714E6C;
	sub_82333A20(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_82714E70:
	// addi r29,r31,1440
	ctx.r29.s64 = ctx.r31.s64 + 1440;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8281d960
	ctx.lr = 0x82714E7C;
	sub_8281D960(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82714ea8
	if (ctx.cr0.eq) goto loc_82714EA8;
	// bl 0x8256d710
	ctx.lr = 0x82714E88;
	sub_8256D710(ctx, base);
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
	ctx.lr = 0x82714EA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82714eac
	if (!ctx.cr0.eq) goto loc_82714EAC;
loc_82714EA8:
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_82714EAC:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,1452(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// li r20,1
	ctx.r20.s64 = 1;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f24,16356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16356);
	ctx.f24.f64 = double(temp.f32);
	// beq cr6,0x82715124
	if (ctx.cr6.eq) goto loc_82715124;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82714ed8
	if (ctx.cr6.eq) goto loc_82714ED8;
	// lwz r11,80(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 80);
	// b 0x82714edc
	goto loc_82714EDC;
loc_82714ED8:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_82714EDC:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82715124
	if (ctx.cr6.eq) goto loc_82715124;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82715124
	if (!ctx.cr6.eq) goto loc_82715124;
	// lwz r3,1432(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82715124
	if (ctx.cr6.eq) goto loc_82715124;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r4,1436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x8284da30
	ctx.lr = 0x82714F0C;
	sub_8284DA30(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82714F24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,8(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,4(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f11,1456(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1460(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,1464(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	ctx.f9.f64 = double(temp.f32);
	// lfs f1,16668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// lfs f30,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lfs f31,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// lfs f29,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
	// fsubs f11,f11,f29
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f29.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f10,f10,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f30.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f28,f0
	ctx.f28.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x82332e18
	ctx.lr = 0x82714F8C;
	sub_82332E18(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmuls f11,f0,f28
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f10,f13,f28
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fmuls f9,f12,f28
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fadds f26,f11,f29
	ctx.f26.f64 = double(float(ctx.f11.f64 + ctx.f29.f64));
	// stfs f26,80(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f27,f10,f30
	ctx.f27.f64 = double(float(ctx.f10.f64 + ctx.f30.f64));
	// stfs f27,84(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f28,f9,f31
	ctx.f28.f64 = double(float(ctx.f9.f64 + ctx.f31.f64));
	// stfs f28,88(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq cr6,0x82715010
	if (ctx.cr6.eq) goto loc_82715010;
	// lfs f11,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f27,f11
	ctx.f11.f64 = double(float(ctx.f27.f64 - ctx.f11.f64));
	// fsubs f10,f28,f10
	ctx.f10.f64 = double(float(ctx.f28.f64 - ctx.f10.f64));
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lfs f11,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f26,f11
	ctx.f11.f64 = double(float(ctx.f26.f64 - ctx.f11.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lfs f31,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f29.f64 = double(temp.f32);
loc_82715010:
	// lwz r11,1676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271506c
	if (ctx.cr6.eq) goto loc_8271506C;
	// lfs f11,1412(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// fadds f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f28,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f28.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f27,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f26.f64 = double(temp.f32);
	// b 0x82715070
	goto loc_82715070;
loc_8271506C:
	// stw r20,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r20.u32);
loc_82715070:
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827150ac
	if (ctx.cr6.eq) goto loc_827150AC;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,19164
	ctx.r3.s64 = ctx.r11.s64 + 19164;
	// bl 0x82816528
	ctx.lr = 0x82715088;
	sub_82816528(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,1500(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// bl 0x82979140
	ctx.lr = 0x827150A0;
	sub_82979140(ctx, base);
	// lfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f29.f64 = double(temp.f32);
loc_827150AC:
	// lwz r30,1508(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1508);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82715118
	if (ctx.cr6.eq) goto loc_82715118;
	// addi r4,r30,316
	ctx.r4.s64 = ctx.r30.s64 + 316;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x827150C8;
	sub_82A4EA80(ctx, base);
	// fsubs f0,f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f27.f64));
	// fsubs f13,f31,f28
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f28.f64));
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// fsubs f12,f29,f26
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f26.f64));
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r7,148(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 316, ctx.r11.u32);
	// stw r10,320(r30)
	PPC_STORE_U32(ctx.r30.u32 + 320, ctx.r10.u32);
	// stw r9,324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 324, ctx.r9.u32);
	// stw r8,332(r30)
	PPC_STORE_U32(ctx.r30.u32 + 332, ctx.r8.u32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stw r7,336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 336, ctx.r7.u32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 328, ctx.r11.u32);
loc_82715118:
	// fsubs f0,f25,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f25.f64 - ctx.f24.f64));
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// fsel f25,f0,f24,f25
	ctx.f25.f64 = ctx.f0.f64 >= 0.0 ? ctx.f24.f64 : ctx.f25.f64;
loc_82715124:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,1628(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f25,f0
	ctx.cr6.compare(ctx.f25.f64, ctx.f0.f64);
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x82715144
	if (!ctx.cr6.gt) goto loc_82715144;
	// stfs f31,1636(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1636, temp.u32);
	// fmr f25,f24
	ctx.f25.f64 = ctx.f24.f64;
	// stfs f31,1548(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1548, temp.u32);
loc_82715144:
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82715154
	if (ctx.cr6.eq) goto loc_82715154;
	// lwz r28,80(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + 80);
loc_82715154:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,1648(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1548);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f25.f64));
	// stfs f0,1648(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1648, temp.u32);
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// bne cr6,0x82715280
	if (!ctx.cr6.eq) goto loc_82715280;
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827151c0
	if (!ctx.cr6.gt) goto loc_827151C0;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_8271518C:
	// lwz r11,1536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x8271d1c8
	ctx.lr = 0x827151AC;
	sub_8271D1C8(ctx, base);
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8271518c
	if (ctx.cr6.lt) goto loc_8271518C;
loc_827151C0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82715280
	if (ctx.cr6.eq) goto loc_82715280;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,1844(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1844);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827151F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,1840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1840);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82715214;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,1628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1628);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82715228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,1636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1636);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82715240;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82715250
	if (!ctx.cr6.eq) goto loc_82715250;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82715280
	if (ctx.cr6.eq) goto loc_82715280;
loc_82715250:
	// lis r11,-32143
	ctx.r11.s64 = -2106523648;
	// stw r20,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r20.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// addi r11,r11,24528
	ctx.r11.s64 = ctx.r11.s64 + 24528;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lfs f1,-27300(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27300);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82715fe8
	ctx.lr = 0x82715280;
	sub_82715FE8(ctx, base);
loc_82715280:
	// lfs f0,1548(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1548);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// fadds f13,f0,f25
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f25.f64));
	// stfs f13,1548(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1548, temp.u32);
	// lfs f0,-28792(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28792);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x827152a0
	if (ctx.cr6.lt) goto loc_827152A0;
	// stfs f31,1548(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1548, temp.u32);
loc_827152A0:
	// lwz r11,1512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271540c
	if (ctx.cr6.eq) goto loc_8271540C;
	// lwz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x827152fc
	if (ctx.cr6.eq) goto loc_827152FC;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x827152fc
	if (!ctx.cr6.eq) goto loc_827152FC;
	// lfs f0,1628(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f25,f0
	ctx.cr6.compare(ctx.f25.f64, ctx.f0.f64);
	// ble cr6,0x827152d4
	if (!ctx.cr6.gt) goto loc_827152D4;
	// stw r19,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r19.u32);
loc_827152D4:
	// lfs f0,1616(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,1632(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1632, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// stfs f31,1636(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1636, temp.u32);
	// bgt cr6,0x827152f0
	if (ctx.cr6.gt) goto loc_827152F0;
	// lwz r30,1424(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// b 0x827153b0
	goto loc_827153B0;
loc_827152F0:
	// lwz r30,1640(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// stw r28,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r28.u32);
	// b 0x827153ac
	goto loc_827153AC;
loc_827152FC:
	// lfs f0,1632(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	ctx.f0.f64 = double(temp.f32);
	// lwa r11,1424(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 1424));
	// fadds f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f25.f64));
	// lfs f13,1616(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,1632(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1632, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82715334
	if (ctx.cr6.lt) goto loc_82715334;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,1636(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f0,f13,f25,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f25.f64 + ctx.f0.f64));
	// b 0x82715354
	goto loc_82715354;
loc_82715334:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// fdivs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f13,1636(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	ctx.f13.f64 = double(temp.f32);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmadds f0,f0,f25,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f25.f64 + ctx.f13.f64));
loc_82715354:
	// stfs f0,1636(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1636, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x82715388
	if (ctx.cr6.lt) goto loc_82715388;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,1636(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1636, temp.u32);
loc_82715388:
	// lfs f0,1644(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x827153b0
	if (!ctx.cr6.gt) goto loc_827153B0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,1648(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	ctx.f12.f64 = double(temp.f32);
	// lfd f13,19472(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 19472);
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x827153b0
	if (!ctx.cr6.gt) goto loc_827153B0;
loc_827153AC:
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
loc_827153B0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x827153f0
	if (ctx.cr6.eq) goto loc_827153F0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x827153f0
	if (ctx.cr6.eq) goto loc_827153F0;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,12(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// ld r6,4(r22)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r22.u32 + 4);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1816);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827153EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,1648(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1648, temp.u32);
loc_827153F0:
	// lwz r11,1424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82715400
	if (!ctx.cr6.gt) goto loc_82715400;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82715400:
	// lwz r11,1508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1508);
	// stw r30,452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 452, ctx.r30.u32);
	// b 0x82715418
	goto loc_82715418;
loc_8271540C:
	// lwz r11,1508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1508);
	// lwz r10,1424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// stw r10,452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 452, ctx.r10.u32);
loc_82715418:
	// stw r19,592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 592, ctx.r19.u32);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lfs f0,984(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1624(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1624, temp.u32);
	// beq cr6,0x8271548c
	if (ctx.cr6.eq) goto loc_8271548C;
	// lwz r5,1584(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// lwz r10,2624(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2624);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82715464
	if (ctx.cr6.eq) goto loc_82715464;
	// stw r5,2624(r16)
	PPC_STORE_U32(ctx.r16.u32 + 2624, ctx.r5.u32);
	// lis r4,12499
	ctx.r4.s64 = 819134464;
	// lwz r6,80(r16)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r16.u32 + 80);
	// ori r4,r4,23802
	ctx.r4.u64 = ctx.r4.u64 | 23802;
	// lwz r3,904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82715464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82715464:
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82715478;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271548c
	if (ctx.cr0.eq) goto loc_8271548C;
	// lwz r11,8504(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8504);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82715554
	if (ctx.cr6.eq) goto loc_82715554;
loc_8271548C:
	// lwz r11,1472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82715554
	if (ctx.cr6.eq) goto loc_82715554;
	// lwz r11,1664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,1488(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// li r4,48
	ctx.r4.s64 = 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r21,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r21.u32);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,1408(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,1472(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// bl 0x82978bc0
	ctx.lr = 0x827154C8;
	sub_82978BC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x82978d98
	ctx.lr = 0x827154D4;
	sub_82978D98(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829c6648
	ctx.lr = 0x827154E0;
	sub_829C6648(ctx, base);
	// stfs f31,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// lwz r5,36(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 36);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,44(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 44);
	// rldicr r9,r19,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r19.u64, 32) & 0xFFFFFFFF00000000;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,284(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 284);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82715524;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829c65d8
	ctx.lr = 0x82715530;
	sub_829C65D8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,1416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1416, ctx.r11.u32);
	// lwz r10,1492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lwz r11,1664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82715554
	if (ctx.cr6.lt) goto loc_82715554;
	// stw r19,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r19.u32);
loc_82715554:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x82a61784
	ctx.lr = 0x82715564;
	__restfpr_24(ctx, base);
	// b 0x82a4ea28
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82715568"))) PPC_WEAK_FUNC(sub_82715568);
PPC_FUNC_IMPL(__imp__sub_82715568) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,1508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1508);
	// stw r10,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827155a8
	if (ctx.cr6.eq) goto loc_827155A8;
	// lwz r10,1424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827155a8
	if (!ctx.cr6.gt) goto loc_827155A8;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_827155A8:
	// lwz r3,1500(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827155fc
	if (ctx.cr6.eq) goto loc_827155FC;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82978d98
	ctx.lr = 0x827155BC;
	sub_82978D98(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x827155CC;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1564(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// bl 0x829c3740
	ctx.lr = 0x827155DC;
	sub_829C3740(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28020
	ctx.r4.s64 = ctx.r11.s64 + -28020;
	// bl 0x8233a258
	ctx.lr = 0x827155EC;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1552(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	// bl 0x829c3740
	ctx.lr = 0x827155FC;
	sub_829C3740(ctx, base);
loc_827155FC:
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

__attribute__((alias("__imp__sub_82715610"))) PPC_WEAK_FUNC(sub_82715610);
PPC_FUNC_IMPL(__imp__sub_82715610) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,1508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1508);
	// stw r10,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82715644
	if (ctx.cr6.eq) goto loc_82715644;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// ori r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 8;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
loc_82715644:
	// lwz r3,1500(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// stw r10,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82715658
	if (ctx.cr6.eq) goto loc_82715658;
	// bl 0x82978ed0
	ctx.lr = 0x82715658;
	sub_82978ED0(ctx, base);
loc_82715658:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82715668;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1568(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// bl 0x829c3740
	ctx.lr = 0x82715678;
	sub_829C3740(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28020
	ctx.r4.s64 = ctx.r11.s64 + -28020;
	// bl 0x8233a258
	ctx.lr = 0x82715688;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1556(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// bl 0x829c3740
	ctx.lr = 0x82715698;
	sub_829C3740(ctx, base);
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

__attribute__((alias("__imp__sub_827156B0"))) PPC_WEAK_FUNC(sub_827156B0);
PPC_FUNC_IMPL(__imp__sub_827156B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827156B8;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61740
	ctx.lr = 0x827156C0;
	__savefpr_26(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82715728
	if (!ctx.cr6.eq) goto loc_82715728;
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82715728
	if (ctx.cr6.eq) goto loc_82715728;
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82715728
	if (ctx.cr6.eq) goto loc_82715728;
	// lwz r11,1604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// lwz r10,1596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82715728
	if (ctx.cr6.eq) goto loc_82715728;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82715718
	if (ctx.cr6.eq) goto loc_82715718;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82715714;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82715720
	goto loc_82715720;
loc_82715718:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82715610
	ctx.lr = 0x82715720;
	sub_82715610(ctx, base);
loc_82715720:
	// lwz r11,1604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// stw r11,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r11.u32);
loc_82715728:
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82715758
	if (ctx.cr6.eq) goto loc_82715758;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x829c6a98
	ctx.lr = 0x82715744;
	sub_829C6A98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,1500(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82715758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82715758:
	// lwz r10,1604(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r27,r11,19164
	ctx.r27.s64 = ctx.r11.s64 + 19164;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827157b4
	if (!ctx.cr6.eq) goto loc_827157B4;
	// lwz r11,1452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827157b4
	if (ctx.cr6.eq) goto loc_827157B4;
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827157b4
	if (ctx.cr6.eq) goto loc_827157B4;
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,1460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// lwz r30,1464(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x82816528
	ctx.lr = 0x827157A0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,1500(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// rldicr r6,r30,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82979140
	ctx.lr = 0x827157B4;
	sub_82979140(ctx, base);
loc_827157B4:
	// lwz r11,1604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82715f08
	if (ctx.cr6.eq) goto loc_82715F08;
	// lwz r3,1432(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82715f08
	if (ctx.cr6.eq) goto loc_82715F08;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r4,1436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x8284da30
	ctx.lr = 0x82715800;
	sub_8284DA30(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82715818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82715858
	if (ctx.cr6.eq) goto loc_82715858;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r10.u32);
	// stw r9,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r9.u32);
	// stw r8,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r8.u32);
	// lwz r11,1508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1508);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r10,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
	// stw r9,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r9.u32);
	// stw r8,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r8.u32);
loc_82715858:
	// lwz r11,1520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1520);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827158dc
	if (ctx.cr6.eq) goto loc_827158DC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817bb8
	ctx.lr = 0x82715870;
	sub_82817BB8(ctx, base);
	// lfs f13,1412(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1408(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x8271588c
	if (!ctx.cr6.gt) goto loc_8271588C;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8271588c
	if (!ctx.cr6.gt) goto loc_8271588C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8271588C:
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f9,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x827158ec
	goto loc_827158EC;
loc_827158DC:
	// lwz r9,1464(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// lwz r10,1460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
loc_827158EC:
	// addi r28,r31,1440
	ctx.r28.s64 = ctx.r31.s64 + 1440;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8281d960
	ctx.lr = 0x82715900;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8271590c
	if (!ctx.cr0.eq) goto loc_8271590C;
	// stw r29,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r29.u32);
loc_8271590C:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,1452(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// lfs f0,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r30.u32);
	// lfs f26,16668(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16668);
	ctx.f26.f64 = double(temp.f32);
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// stfs f0,260(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r29,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r29.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r29,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r29.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// stfs f31,228(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stw r29,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r29.u32);
	// stfs f31,232(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stw r29,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r29.u32);
	// stfs f31,236(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stw r29,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r29.u32);
	// stfs f31,240(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stw r29,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r29.u32);
	// stfs f31,244(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stw r29,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r29.u32);
	// stfs f31,248(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// stfs f31,252(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f31,256(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// beq cr6,0x82715b00
	if (ctx.cr6.eq) goto loc_82715B00;
	// lfs f30,1412(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	ctx.f30.f64 = double(temp.f32);
	// addi r30,r31,1456
	ctx.r30.s64 = ctx.r31.s64 + 1456;
	// lfs f29,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// lfs f28,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f27.f64 = double(temp.f32);
	// lfs f0,1456(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1460(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// lfs f12,1464(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f28.f64));
	// fsubs f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f27.f64));
	// ble cr6,0x82715a90
	if (!ctx.cr6.gt) goto loc_82715A90;
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f0,f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82715a90
	if (!ctx.cr6.gt) goto loc_82715A90;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f28.f64));
	// fsubs f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f27.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82332e18
	ctx.lr = 0x82715A3C;
	sub_82332E18(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fadds f0,f13,f27
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f27.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fadds f0,f12,f29
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f29.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82715A90:
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r8,8836
	ctx.r8.s64 = 8836;
	// lwz r5,1432(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82825330
	ctx.lr = 0x82715AC4;
	sub_82825330(ctx, base);
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lis r8,64
	ctx.r8.s64 = 4194304;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// ori r8,r8,659
	ctx.r8.u64 = ctx.r8.u64 | 659;
	// lwz r5,1432(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// bl 0x82825330
	ctx.lr = 0x82715AF8;
	sub_82825330(ctx, base);
	// lwz r30,288(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// b 0x82715b34
	goto loc_82715B34;
loc_82715B00:
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r8,8836
	ctx.r8.s64 = 8836;
	// lwz r5,1432(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82825330
	ctx.lr = 0x82715B34;
	sub_82825330(ctx, base);
loc_82715B34:
	// lwz r11,1452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82715c68
	if (ctx.cr6.eq) goto loc_82715C68;
	// lfs f0,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82715c68
	if (ctx.cr6.gt) goto loc_82715C68;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82715b68
	if (ctx.cr6.eq) goto loc_82715B68;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82715c68
	if (!ctx.cr6.eq) goto loc_82715C68;
loc_82715B68:
	// lwz r9,1464(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// lfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// lfs f30,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f30.f64 = double(temp.f32);
	// lwz r10,1460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// lfs f29,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f29.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82332e18
	ctx.lr = 0x82715BBC;
	sub_82332E18(ctx, base);
	// lwz r11,1676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82715c14
	if (ctx.cr6.eq) goto loc_82715C14;
	// lfs f0,1412(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f13,f12,f29
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f29.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
loc_82715C14:
	// lwz r11,1508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82715da8
	if (ctx.cr6.eq) goto loc_82715DA8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817280
	ctx.lr = 0x82715C2C;
	sub_82817280(ctx, base);
	// lwz r11,1508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1508);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,1508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1508);
	// stw r10,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
	// stw r8,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r8.u32);
	// stw r9,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r9.u32);
	// b 0x82715da8
	goto loc_82715DA8;
loc_82715C68:
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82715da8
	if (ctx.cr6.eq) goto loc_82715DA8;
	// lfs f13,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,816(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 816);
	// lfs f0,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f28,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f28.f64 = double(temp.f32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f13,f28,f13
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f13.f64));
	// lfs f12,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f29,f0
	ctx.f29.f64 = double(float(sqrt(ctx.f0.f64)));
	// bne cr6,0x82715cd8
	if (!ctx.cr6.eq) goto loc_82715CD8;
	// bl 0x829bed50
	ctx.lr = 0x82715CC8;
	sub_829BED50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82715cd8
	if (ctx.cr0.eq) goto loc_82715CD8;
	// lfs f30,400(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	ctx.f30.f64 = double(temp.f32);
	// fadds f29,f30,f29
	ctx.f29.f64 = double(float(ctx.f30.f64 + ctx.f29.f64));
loc_82715CD8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x82332e18
	ctx.lr = 0x82715CE4;
	sub_82332E18(ctx, base);
	// lfs f0,1412(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82715d50
	if (!ctx.cr6.gt) goto loc_82715D50;
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// ble cr6,0x82715d50
	if (!ctx.cr6.gt) goto loc_82715D50;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f9,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// b 0x82715da8
	goto loc_82715DA8;
loc_82715D50:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// ble cr6,0x82715da8
	if (!ctx.cr6.gt) goto loc_82715DA8;
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f0,f13,f28
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
loc_82715DA8:
	// lfs f0,624(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// lfs f30,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f29,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lfs f31,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f31.f64 = double(temp.f32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fsubs f13,f31,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82715e2c
	if (ctx.cr6.eq) goto loc_82715E2C;
	// lwz r11,1668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82715e2c
	if (!ctx.cr6.eq) goto loc_82715E2C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x82715E14;
	sub_82816528(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,1500(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// bl 0x82979140
	ctx.lr = 0x82715E2C;
	sub_82979140(ctx, base);
loc_82715E2C:
	// lwz r30,1508(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1508);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82715f08
	if (ctx.cr6.eq) goto loc_82715F08;
	// addi r4,r30,316
	ctx.r4.s64 = ctx.r30.s64 + 316;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x82715E48;
	sub_82A4EA80(ctx, base);
	// lfs f0,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f29.f64));
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f30.f64));
	// lwz r11,304(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r9,312(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r8,320(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r7,324(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// stw r11,316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 316, ctx.r11.u32);
	// stw r10,320(r30)
	PPC_STORE_U32(ctx.r30.u32 + 320, ctx.r10.u32);
	// stw r9,324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 324, ctx.r9.u32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stw r8,332(r30)
	PPC_STORE_U32(ctx.r30.u32 + 332, ctx.r8.u32);
	// stw r7,336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 336, ctx.r7.u32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,316(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// stw r11,328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 328, ctx.r11.u32);
	// lwz r11,1424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82715ebc
	if (!ctx.cr6.gt) goto loc_82715EBC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,1508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1508);
	// bl 0x8281d650
	ctx.lr = 0x82715EBC;
	sub_8281D650(ctx, base);
loc_82715EBC:
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// fsubs f12,f31,f12
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x82715EEC;
	sub_82817280(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1508);
	// stw r10,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
loc_82715F08:
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// stw r29,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r29.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82715f20
	if (ctx.cr6.eq) goto loc_82715F20;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82715f4c
	if (!ctx.cr6.eq) goto loc_82715F4C;
loc_82715F20:
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82715f4c
	if (!ctx.cr6.eq) goto loc_82715F4C;
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82715f4c
	if (ctx.cr6.eq) goto loc_82715F4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82715F4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82715F4C:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a6178c
	ctx.lr = 0x82715F58;
	__restfpr_26(ctx, base);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82715F60"))) PPC_WEAK_FUNC(sub_82715F60);
PPC_FUNC_IMPL(__imp__sub_82715F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// bl 0x8281d960
	ctx.lr = 0x82715F84;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82715fb0
	if (ctx.cr0.eq) goto loc_82715FB0;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// stw r11,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r11.u32);
	// stw r9,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r9.u32);
	// stw r8,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r8.u32);
	// b 0x82715fb8
	goto loc_82715FB8;
loc_82715FB0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r11.u32);
loc_82715FB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82715FD0"))) PPC_WEAK_FUNC(sub_82715FD0);
PPC_FUNC_IMPL(__imp__sub_82715FD0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1676(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1676, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82715FE0"))) PPC_WEAK_FUNC(sub_82715FE0);
PPC_FUNC_IMPL(__imp__sub_82715FE0) {
	PPC_FUNC_PROLOGUE();
	// addi r4,r3,1432
	ctx.r4.s64 = ctx.r3.s64 + 1432;
	// b 0x829c7c38
	sub_829C7C38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82715FE8"))) PPC_WEAK_FUNC(sub_82715FE8);
PPC_FUNC_IMPL(__imp__sub_82715FE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82715FF0;
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
	ctx.lr = 0x82716008;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82716090
	if (!ctx.cr0.eq) goto loc_82716090;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823324f8
	ctx.lr = 0x82716018;
	sub_823324F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271602C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x82716038;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8271607c
	if (ctx.cr0.eq) goto loc_8271607C;
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
	// b 0x82716080
	goto loc_82716080;
loc_8271607C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82716080:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x8271608C;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82716090:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,-27300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827160B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827160B8"))) PPC_WEAK_FUNC(sub_827160B8);
PPC_FUNC_IMPL(__imp__sub_827160B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18416
	ctx.r3.s64 = ctx.r11.s64 + -18416;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827160C8"))) PPC_WEAK_FUNC(sub_827160C8);
PPC_FUNC_IMPL(__imp__sub_827160C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82716100
	if (ctx.cr6.eq) goto loc_82716100;
	// bl 0x823aab48
	ctx.lr = 0x827160F0;
	sub_823AAB48(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82716100
	if (!ctx.cr6.eq) goto loc_82716100;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8271610c
	goto loc_8271610C;
loc_82716100:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826b87f0
	ctx.lr = 0x8271610C;
	sub_826B87F0(ctx, base);
loc_8271610C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82716128"))) PPC_WEAK_FUNC(sub_82716128);
PPC_FUNC_IMPL(__imp__sub_82716128) {
	PPC_FUNC_PROLOGUE();
	// b 0x823aab48
	sub_823AAB48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82716130"))) PPC_WEAK_FUNC(sub_82716130);
PPC_FUNC_IMPL(__imp__sub_82716130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1680
	ctx.r3.s64 = 1680;
	// bl 0x82833108
	ctx.lr = 0x82716150;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82716190
	if (ctx.cr0.eq) goto loc_82716190;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b88f8
	ctx.lr = 0x82716164;
	sub_826B88F8(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r11,r11,-27880
	ctx.r11.s64 = ctx.r11.s64 + -27880;
	// addi r10,r10,-26864
	ctx.r10.s64 = ctx.r10.s64 + -26864;
	// addi r9,r9,-15204
	ctx.r9.s64 = ctx.r9.s64 + -15204;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x82716194
	goto loc_82716194;
loc_82716190:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82716194:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827161B0"))) PPC_WEAK_FUNC(sub_827161B0);
PPC_FUNC_IMPL(__imp__sub_827161B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823aab48
	ctx.lr = 0x827161D0;
	sub_823AAB48(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827161e4
	if (ctx.cr6.eq) goto loc_827161E4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826b8898
	ctx.lr = 0x827161E4;
	sub_826B8898(ctx, base);
loc_827161E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82716200"))) PPC_WEAK_FUNC(sub_82716200);
PPC_FUNC_IMPL(__imp__sub_82716200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82716208;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82713ce0
	ctx.lr = 0x82716214;
	sub_82713CE0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r9,r11,-32616
	ctx.r9.s64 = ctx.r11.s64 + -32616;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// lfs f0,-32616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32616);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r10,-27880
	ctx.r11.s64 = ctx.r10.s64 + -27880;
	// addi r10,r8,-26864
	ctx.r10.s64 = ctx.r8.s64 + -26864;
	// stfs f0,1420(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1420, temp.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f0,-204(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -204);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r7,-15204
	ctx.r8.s64 = ctx.r7.s64 + -15204;
	// lfs f13,-60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -60);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stfs f0,1416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1416, temp.u32);
	// stfs f13,1408(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1408, temp.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// stw r28,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r28.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stw r28,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r28.u32);
	// addi r3,r11,-27992
	ctx.r3.s64 = ctx.r11.s64 + -27992;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// addi r29,r11,1268
	ctx.r29.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x8271627C;
	sub_82816528(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r4,r31,1468
	ctx.r4.s64 = ctx.r31.s64 + 1468;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823cf190
	ctx.lr = 0x82716298;
	sub_823CF190(ctx, base);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// addi r3,r10,-27940
	ctx.r3.s64 = ctx.r10.s64 + -27940;
	// addi r29,r11,1268
	ctx.r29.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x827162AC;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r31,1472
	ctx.r4.s64 = ctx.r31.s64 + 1472;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x823cf190
	ctx.lr = 0x827162C4;
	sub_823CF190(ctx, base);
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x827162CC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827162dc
	if (ctx.cr0.eq) goto loc_827162DC;
	// bl 0x823f5ef0
	ctx.lr = 0x827162D8;
	sub_823F5EF0(ctx, base);
	// b 0x827162e0
	goto loc_827162E0;
loc_827162DC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_827162E0:
	// lwz r8,1540(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// addi r9,r31,1524
	ctx.r9.s64 = ctx.r31.s64 + 1524;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82716318
	if (!ctx.cr6.gt) goto loc_82716318;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
loc_827162FC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82716328
	if (ctx.cr6.eq) goto loc_82716328;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x827162fc
	if (ctx.cr6.lt) goto loc_827162FC;
loc_82716318:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82410060
	ctx.lr = 0x82716324;
	sub_82410060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82716328:
	// lwz r10,1536(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// stw r11,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x824ba060
	ctx.lr = 0x82716344;
	sub_824BA060(ctx, base);
	// lwz r11,1536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82716364
	if (ctx.cr0.eq) goto loc_82716364;
	// lwz r10,6516(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6516);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lfs f0,6524(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6524);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82716370
	goto loc_82716370;
loc_82716364:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r28,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r28.u32);
	// lfs f0,-11456(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11456);
	ctx.f0.f64 = double(temp.f32);
loc_82716370:
	// lwz r11,1536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stfs f0,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82716388"))) PPC_WEAK_FUNC(sub_82716388);
PPC_FUNC_IMPL(__imp__sub_82716388) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x827161b0
	sub_827161B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82716390"))) PPC_WEAK_FUNC(sub_82716390);
PPC_FUNC_IMPL(__imp__sub_82716390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lis r3,-31949
	ctx.r3.s64 = -2093809664;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// lfs f0,904(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// lwz r10,20(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lfs f13,28(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,44(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lwz r10,13024(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13024);
	// lfs f13,32(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r10,1268
	ctx.r3.s64 = ctx.r10.s64 + 1268;
	// stfs f13,48(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lfs f13,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// stfs f13,56(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// b 0x824091a0
	sub_824091A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82716420"))) PPC_WEAK_FUNC(sub_82716420);
PPC_FUNC_IMPL(__imp__sub_82716420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,-26812
	ctx.r3.s64 = ctx.r11.s64 + -26812;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82716430"))) PPC_WEAK_FUNC(sub_82716430);
PPC_FUNC_IMPL(__imp__sub_82716430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82716468
	if (ctx.cr6.eq) goto loc_82716468;
	// bl 0x827169b0
	ctx.lr = 0x82716458;
	sub_827169B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82716468
	if (!ctx.cr6.eq) goto loc_82716468;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82716474
	goto loc_82716474;
loc_82716468:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370018
	ctx.lr = 0x82716474;
	sub_82370018(ctx, base);
loc_82716474:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82716490"))) PPC_WEAK_FUNC(sub_82716490);
PPC_FUNC_IMPL(__imp__sub_82716490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x827164AC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827164c0
	if (ctx.cr0.eq) goto loc_827164C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82716538
	ctx.lr = 0x827164BC;
	sub_82716538(ctx, base);
	// b 0x827164c4
	goto loc_827164C4;
loc_827164C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827164C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827164D8"))) PPC_WEAK_FUNC(sub_827164D8);
PPC_FUNC_IMPL(__imp__sub_827164D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827169b0
	ctx.lr = 0x827164F8;
	sub_827169B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82716508
	if (!ctx.cr6.eq) goto loc_82716508;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82716520
	goto loc_82716520;
loc_82716508:
	// bl 0x823bd878
	ctx.lr = 0x8271650C;
	sub_823BD878(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82716520
	if (ctx.cr6.eq) goto loc_82716520;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8236fc08
	ctx.lr = 0x82716520;
	sub_8236FC08(ctx, base);
loc_82716520:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82716538"))) PPC_WEAK_FUNC(sub_82716538);
PPC_FUNC_IMPL(__imp__sub_82716538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82716540;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82370118
	ctx.lr = 0x82716550;
	sub_82370118(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// addi r11,r11,-26792
	ctx.r11.s64 = ctx.r11.s64 + -26792;
	// addi r10,r10,-25732
	ctx.r10.s64 = ctx.r10.s64 + -25732;
	// addi r9,r9,-25680
	ctx.r9.s64 = ctx.r9.s64 + -25680;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r29,1716
	ctx.r4.s64 = ctx.r29.s64 + 1716;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r31,1716
	ctx.r3.s64 = ctx.r31.s64 + 1716;
	// lwz r11,1712(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1712);
	// stw r11,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x82716588;
	sub_82873B58(ctx, base);
	// lwz r10,1740(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1740);
	// lwz r9,1740(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r31,1752
	ctx.r30.s64 = ctx.r31.s64 + 1752;
	// rlwimi r10,r9,0,1,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x7FFFFFFF) | (ctx.r10.u64 & 0xFFFFFFFF80000000);
	// addi r27,r29,1752
	ctx.r27.s64 = ctx.r29.s64 + 1752;
	// stw r10,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r10.u32);
	// li r11,40
	ctx.r11.s64 = 40;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// lwz r10,1740(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1740);
	// lwz r9,1740(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// rlwimi r9,r10,0,1,1
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x40000000) | (ctx.r9.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r9,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,1740(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1740);
	// rlwimi r9,r10,0,2,2
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x20000000) | (ctx.r9.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r9,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,1740(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1740);
	// rlwimi r9,r10,0,3,3
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x10000000) | (ctx.r9.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r9,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,1740(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1740);
	// rlwimi r9,r10,0,4,4
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x8000000) | (ctx.r9.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r9,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r9.u32);
	// lfs f0,1744(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1744(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1744, temp.u32);
	// lfs f0,1748(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1748);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1748(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1748, temp.u32);
	// stw r11,1756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1756, ctx.r11.u32);
	// stw r28,1760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1760, ctx.r28.u32);
	// stw r28,1764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1764, ctx.r28.u32);
	// stw r28,1768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1768, ctx.r28.u32);
	// stw r28,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r28.u32);
	// stw r28,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r28.u32);
	// beq cr6,0x8271669c
	if (ctx.cr6.eq) goto loc_8271669C;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8271669c
	if (!ctx.cr6.gt) goto loc_8271669C;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82716644
	if (ctx.cr0.eq) goto loc_82716644;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x82716644;
	sub_82332C38(ctx, base);
loc_82716644:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8271669c
	if (!ctx.cr6.gt) goto loc_8271669C;
loc_82716654:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332d50
	ctx.lr = 0x82716668;
	sub_82332D50(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mulli r10,r3,40
	ctx.r10.s64 = ctx.r3.s64 * 40;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82716688
	if (ctx.cr0.eq) goto loc_82716688;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r5,40
	ctx.r5.s64 = 40;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x82716688;
	sub_82A4EA80(ctx, base);
loc_82716688:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82716654
	if (ctx.cr6.lt) goto loc_82716654;
loc_8271669C:
	// lwz r11,1776(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1776);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1776, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827166B0"))) PPC_WEAK_FUNC(sub_827166B0);
PPC_FUNC_IMPL(__imp__sub_827166B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r31,r30,1752
	ctx.r31.s64 = ctx.r30.s64 + 1752;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1768(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1768);
	// bl 0x82332ca8
	ctx.lr = 0x827166E4;
	sub_82332CA8(ctx, base);
	// lwz r3,1764(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1764);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827166f4
	if (ctx.cr6.eq) goto loc_827166F4;
	// bl 0x82332db8
	ctx.lr = 0x827166F4;
	sub_82332DB8(ctx, base);
loc_827166F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r30,1716
	ctx.r3.s64 = ctx.r30.s64 + 1716;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8239d768
	ctx.lr = 0x8271670C;
	sub_8239D768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b5b88
	ctx.lr = 0x82716714;
	sub_828B5B88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82716730"))) PPC_WEAK_FUNC(sub_82716730);
PPC_FUNC_IMPL(__imp__sub_82716730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,18536
	ctx.r3.s64 = ctx.r11.s64 + 18536;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82716740"))) PPC_WEAK_FUNC(sub_82716740);
PPC_FUNC_IMPL(__imp__sub_82716740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82716778
	if (ctx.cr6.eq) goto loc_82716778;
	// bl 0x8247a360
	ctx.lr = 0x82716768;
	sub_8247A360(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82716778
	if (!ctx.cr6.eq) goto loc_82716778;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82716784
	goto loc_82716784;
loc_82716778:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82716430
	ctx.lr = 0x82716784;
	sub_82716430(ctx, base);
loc_82716784:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827167A0"))) PPC_WEAK_FUNC(sub_827167A0);
PPC_FUNC_IMPL(__imp__sub_827167A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8247a360
	sub_8247A360(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827167A8"))) PPC_WEAK_FUNC(sub_827167A8);
PPC_FUNC_IMPL(__imp__sub_827167A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x827169b0
	sub_827169B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827167B0"))) PPC_WEAK_FUNC(sub_827167B0);
PPC_FUNC_IMPL(__imp__sub_827167B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x827167D0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82716810
	if (ctx.cr0.eq) goto loc_82716810;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82716538
	ctx.lr = 0x827167E4;
	sub_82716538(ctx, base);
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
	// b 0x82716814
	goto loc_82716814;
loc_82716810:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82716814:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82716830"))) PPC_WEAK_FUNC(sub_82716830);
PPC_FUNC_IMPL(__imp__sub_82716830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8247a360
	ctx.lr = 0x82716850;
	sub_8247A360(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82716864
	if (ctx.cr6.eq) goto loc_82716864;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827164d8
	ctx.lr = 0x82716864;
	sub_827164D8(ctx, base);
loc_82716864:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82716880"))) PPC_WEAK_FUNC(sub_82716880);
PPC_FUNC_IMPL(__imp__sub_82716880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827166b0
	ctx.lr = 0x827168A0;
	sub_827166B0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827168b0
	if (ctx.cr0.eq) goto loc_827168B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x827168B0;
	sub_82332DB8(ctx, base);
loc_827168B0:
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

__attribute__((alias("__imp__sub_827168D0"))) PPC_WEAK_FUNC(sub_827168D0);
PPC_FUNC_IMPL(__imp__sub_827168D0) {
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
	ctx.lr = 0x827168E4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827168f4
	if (ctx.cr0.eq) goto loc_827168F4;
	// bl 0x827f4190
	ctx.lr = 0x827168F0;
	sub_827F4190(ctx, base);
	// b 0x827168f8
	goto loc_827168F8;
loc_827168F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827168F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82716908"))) PPC_WEAK_FUNC(sub_82716908);
PPC_FUNC_IMPL(__imp__sub_82716908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,23540(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23540);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82716948
	if (!ctx.cr0.eq) goto loc_82716948;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r11,23540(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23540, ctx.r11.u32);
	// addi r3,r9,-26812
	ctx.r3.s64 = ctx.r9.s64 + -26812;
	// bl 0x82816528
	ctx.lr = 0x82716940;
	sub_82816528(ctx, base);
	// stw r3,23536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23536, ctx.r3.u32);
	// b 0x8271694c
	goto loc_8271694C;
loc_82716948:
	// lwz r3,23536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23536);
loc_8271694C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82716960"))) PPC_WEAK_FUNC(sub_82716960);
PPC_FUNC_IMPL(__imp__sub_82716960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827169b0
	ctx.lr = 0x82716980;
	sub_827169B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82716994;
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

__attribute__((alias("__imp__sub_827169B0"))) PPC_WEAK_FUNC(sub_827169B0);
PPC_FUNC_IMPL(__imp__sub_827169B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13896
	ctx.r31.s64 = ctx.r11.s64 + 13896;
	// lwz r11,13892(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13892);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827169f8
	if (!ctx.cr0.eq) goto loc_827169F8;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-25656
	ctx.r9.s64 = ctx.r9.s64 + -25656;
	// stw r11,13892(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13892, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,30192
	ctx.r3.s64 = ctx.r11.s64 + 30192;
	// bl 0x82a4c758
	ctx.lr = 0x827169F8;
	sub_82A4C758(ctx, base);
loc_827169F8:
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

__attribute__((alias("__imp__sub_82716A10"))) PPC_WEAK_FUNC(sub_82716A10);
PPC_FUNC_IMPL(__imp__sub_82716A10) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82716880
	sub_82716880(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82716A18"))) PPC_WEAK_FUNC(sub_82716A18);
PPC_FUNC_IMPL(__imp__sub_82716A18) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82716880
	sub_82716880(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82716A20"))) PPC_WEAK_FUNC(sub_82716A20);
PPC_FUNC_IMPL(__imp__sub_82716A20) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x827164d8
	sub_827164D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82716A28"))) PPC_WEAK_FUNC(sub_82716A28);
PPC_FUNC_IMPL(__imp__sub_82716A28) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82716830
	sub_82716830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82716A30"))) PPC_WEAK_FUNC(sub_82716A30);
PPC_FUNC_IMPL(__imp__sub_82716A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,20900
	ctx.r3.s64 = ctx.r11.s64 + 20900;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82716A40"))) PPC_WEAK_FUNC(sub_82716A40);
PPC_FUNC_IMPL(__imp__sub_82716A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82716a78
	if (ctx.cr6.eq) goto loc_82716A78;
	// bl 0x824823f8
	ctx.lr = 0x82716A68;
	sub_824823F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82716a78
	if (!ctx.cr6.eq) goto loc_82716A78;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82716a84
	goto loc_82716A84;
loc_82716A78:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370018
	ctx.lr = 0x82716A84;
	sub_82370018(ctx, base);
loc_82716A84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82716AA0"))) PPC_WEAK_FUNC(sub_82716AA0);
PPC_FUNC_IMPL(__imp__sub_82716AA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x824823f8
	sub_824823F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82716AA8"))) PPC_WEAK_FUNC(sub_82716AA8);
PPC_FUNC_IMPL(__imp__sub_82716AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82716AC8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82716b20
	if (ctx.cr0.eq) goto loc_82716B20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370118
	ctx.lr = 0x82716ADC;
	sub_82370118(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,-24472
	ctx.r11.s64 = ctx.r11.s64 + -24472;
	// addi r10,r10,-23416
	ctx.r10.s64 = ctx.r10.s64 + -23416;
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
	// lwz r11,1716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1716);
	// stw r11,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r11.u32);
	// lwz r11,1720(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1720);
	// stw r11,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r11.u32);
	// b 0x82716b24
	goto loc_82716B24;
loc_82716B20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82716B24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82716B40"))) PPC_WEAK_FUNC(sub_82716B40);
PPC_FUNC_IMPL(__imp__sub_82716B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x824823f8
	ctx.lr = 0x82716B60;
	sub_824823F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82716b70
	if (!ctx.cr6.eq) goto loc_82716B70;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82716b88
	goto loc_82716B88;
loc_82716B70:
	// bl 0x823bd878
	ctx.lr = 0x82716B74;
	sub_823BD878(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82716b88
	if (ctx.cr6.eq) goto loc_82716B88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8236fc08
	ctx.lr = 0x82716B88;
	sub_8236FC08(ctx, base);
loc_82716B88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82716BA0"))) PPC_WEAK_FUNC(sub_82716BA0);
PPC_FUNC_IMPL(__imp__sub_82716BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,-24520
	ctx.r3.s64 = ctx.r11.s64 + -24520;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82716BB0"))) PPC_WEAK_FUNC(sub_82716BB0);
PPC_FUNC_IMPL(__imp__sub_82716BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82716be8
	if (ctx.cr6.eq) goto loc_82716BE8;
	// bl 0x827173e8
	ctx.lr = 0x82716BD8;
	sub_827173E8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82716be8
	if (!ctx.cr6.eq) goto loc_82716BE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82716bf4
	goto loc_82716BF4;
loc_82716BE8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823345e8
	ctx.lr = 0x82716BF4;
	sub_823345E8(ctx, base);
loc_82716BF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82716C10"))) PPC_WEAK_FUNC(sub_82716C10);
PPC_FUNC_IMPL(__imp__sub_82716C10) {
	PPC_FUNC_PROLOGUE();
	// b 0x827173e8
	sub_827173E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82716C18"))) PPC_WEAK_FUNC(sub_82716C18);
PPC_FUNC_IMPL(__imp__sub_82716C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82833108
	ctx.lr = 0x82716C38;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82716c6c
	if (ctx.cr0.eq) goto loc_82716C6C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823347c8
	ctx.lr = 0x82716C4C;
	sub_823347C8(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r30,160
	ctx.r4.s64 = ctx.r30.s64 + 160;
	// addi r11,r11,-23360
	ctx.r11.s64 = ctx.r11.s64 + -23360;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x82716C64;
	sub_82873B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82716c70
	goto loc_82716C70;
loc_82716C6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82716C70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82716C88"))) PPC_WEAK_FUNC(sub_82716C88);
PPC_FUNC_IMPL(__imp__sub_82716C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827173e8
	ctx.lr = 0x82716CA8;
	sub_827173E8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82716cbc
	if (ctx.cr6.eq) goto loc_82716CBC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82334690
	ctx.lr = 0x82716CBC;
	sub_82334690(ctx, base);
loc_82716CBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82716CD8"))) PPC_WEAK_FUNC(sub_82716CD8);
PPC_FUNC_IMPL(__imp__sub_82716CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,-24496
	ctx.r3.s64 = ctx.r11.s64 + -24496;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82716CE8"))) PPC_WEAK_FUNC(sub_82716CE8);
PPC_FUNC_IMPL(__imp__sub_82716CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82716d20
	if (ctx.cr6.eq) goto loc_82716D20;
	// bl 0x82717568
	ctx.lr = 0x82716D10;
	sub_82717568(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82716d20
	if (!ctx.cr6.eq) goto loc_82716D20;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82716d2c
	goto loc_82716D2C;
loc_82716D20:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823345e8
	ctx.lr = 0x82716D2C;
	sub_823345E8(ctx, base);
loc_82716D2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82716D48"))) PPC_WEAK_FUNC(sub_82716D48);
PPC_FUNC_IMPL(__imp__sub_82716D48) {
	PPC_FUNC_PROLOGUE();
	// b 0x82717568
	sub_82717568(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82716D50"))) PPC_WEAK_FUNC(sub_82716D50);
PPC_FUNC_IMPL(__imp__sub_82716D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82833108
	ctx.lr = 0x82716D70;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82716da4
	if (ctx.cr0.eq) goto loc_82716DA4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823347c8
	ctx.lr = 0x82716D84;
	sub_823347C8(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r30,160
	ctx.r4.s64 = ctx.r30.s64 + 160;
	// addi r11,r11,-23232
	ctx.r11.s64 = ctx.r11.s64 + -23232;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x82716D9C;
	sub_82873B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82716da8
	goto loc_82716DA8;
loc_82716DA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82716DA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82716DC0"))) PPC_WEAK_FUNC(sub_82716DC0);
PPC_FUNC_IMPL(__imp__sub_82716DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82717568
	ctx.lr = 0x82716DE0;
	sub_82717568(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82716df4
	if (ctx.cr6.eq) goto loc_82716DF4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82334690
	ctx.lr = 0x82716DF4;
	sub_82334690(ctx, base);
loc_82716DF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82716E10"))) PPC_WEAK_FUNC(sub_82716E10);
PPC_FUNC_IMPL(__imp__sub_82716E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x8239d768
	ctx.lr = 0x82716E34;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82334768
	ctx.lr = 0x82716E3C;
	sub_82334768(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82716e4c
	if (ctx.cr0.eq) goto loc_82716E4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82716E4C;
	sub_82332DB8(ctx, base);
loc_82716E4C:
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

__attribute__((alias("__imp__sub_82716E68"))) PPC_WEAK_FUNC(sub_82716E68);
PPC_FUNC_IMPL(__imp__sub_82716E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829bcd88
	ctx.lr = 0x82716E88;
	sub_829BCD88(ctx, base);
	// lwz r11,200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// stw r11,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82716EA8"))) PPC_WEAK_FUNC(sub_82716EA8);
PPC_FUNC_IMPL(__imp__sub_82716EA8) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,10548(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x82439c68
	ctx.lr = 0x82716ECC;
	sub_82439C68(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82716f30
	if (!ctx.cr6.gt) goto loc_82716F30;
	// lwz r7,1640(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82716EE4:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82716f38
	if (!ctx.cr6.gt) goto loc_82716F38;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
loc_82716EFC:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82716f0c
	if (!ctx.cr6.eq) goto loc_82716F0C;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82716F0C:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82716efc
	if (!ctx.cr0.eq) goto loc_82716EFC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82716f38
	if (ctx.cr6.eq) goto loc_82716F38;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82716ee4
	if (ctx.cr6.lt) goto loc_82716EE4;
loc_82716F30:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82716f3c
	goto loc_82716F3C;
loc_82716F38:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82716F3C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239d768
	ctx.lr = 0x82716F44;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82716F60"))) PPC_WEAK_FUNC(sub_82716F60);
PPC_FUNC_IMPL(__imp__sub_82716F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82716F68;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x828a74e8
	ctx.lr = 0x82716F78;
	sub_828A74E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82717094
	if (ctx.cr0.eq) goto loc_82717094;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82716fa0
	if (ctx.cr6.eq) goto loc_82716FA0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82716F9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82716fa4
	goto loc_82716FA4;
loc_82716FA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82716FA4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82716fcc
	if (ctx.cr6.eq) goto loc_82716FCC;
	// lwz r11,960(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 960);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82716fcc
	if (ctx.cr6.lt) goto loc_82716FCC;
	// lwz r11,1716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82716fcc
	if (ctx.cr6.eq) goto loc_82716FCC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,6224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6224, ctx.r11.u32);
loc_82716FCC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82716ea8
	ctx.lr = 0x82716FD4;
	sub_82716EA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82717090
	if (ctx.cr0.eq) goto loc_82717090;
	// lwz r11,1712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82717090
	if (!ctx.cr6.eq) goto loc_82717090;
	// lwz r11,1392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1392);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r10,1712(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1712, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82717090
	if (!ctx.cr6.gt) goto loc_82717090;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
loc_82717008:
	// lwz r10,13024(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r11,1388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1388);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,560(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x8282b6b8
	ctx.lr = 0x82717020;
	sub_8282B6B8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82717050
	if (ctx.cr0.eq) goto loc_82717050;
	// bl 0x827173e8
	ctx.lr = 0x8271702C;
	sub_827173E8(ctx, base);
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
	ctx.lr = 0x82717044;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82717054
	if (!ctx.cr0.eq) goto loc_82717054;
loc_82717050:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82717054:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8271707c
	if (ctx.cr6.eq) goto loc_8271707C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271707C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8271707C:
	// lwz r11,1392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1392);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82717008
	if (ctx.cr6.lt) goto loc_82717008;
loc_82717090:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82717094:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827170A0"))) PPC_WEAK_FUNC(sub_827170A0);
PPC_FUNC_IMPL(__imp__sub_827170A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x827170A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,1416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// lwz r5,1496(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r11.u32);
	// bl 0x828a70b8
	ctx.lr = 0x827170CC;
	sub_828A70B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82716ea8
	ctx.lr = 0x827170D4;
	sub_82716EA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82717190
	if (ctx.cr0.eq) goto loc_82717190;
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82717190
	if (!ctx.cr6.eq) goto loc_82717190;
	// lwz r11,1392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1392);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r10,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82717190
	if (!ctx.cr6.gt) goto loc_82717190;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
loc_82717108:
	// lwz r10,13024(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r11,1388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1388);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,560(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x8282b6b8
	ctx.lr = 0x82717120;
	sub_8282B6B8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82717150
	if (ctx.cr0.eq) goto loc_82717150;
	// bl 0x827173e8
	ctx.lr = 0x8271712C;
	sub_827173E8(ctx, base);
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
	ctx.lr = 0x82717144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x82717154
	if (!ctx.cr0.eq) goto loc_82717154;
loc_82717150:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82717154:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8271717c
	if (ctx.cr6.eq) goto loc_8271717C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271717C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8271717C:
	// lwz r11,1392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1392);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82717108
	if (ctx.cr6.lt) goto loc_82717108;
loc_82717190:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82717198"))) PPC_WEAK_FUNC(sub_82717198);
PPC_FUNC_IMPL(__imp__sub_82717198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x827171A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x828a7700
	ctx.lr = 0x827171B0;
	sub_828A7700(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x827171d4
	if (ctx.cr6.eq) goto loc_827171D4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827171D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x827171d8
	goto loc_827171D8;
loc_827171D4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_827171D8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827171fc
	if (ctx.cr6.eq) goto loc_827171FC;
	// lwz r11,960(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 960);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x827171fc
	if (ctx.cr6.lt) goto loc_827171FC;
	// lwz r11,1716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827171fc
	if (ctx.cr6.eq) goto loc_827171FC;
	// stw r25,6224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6224, ctx.r25.u32);
loc_827171FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82716ea8
	ctx.lr = 0x82717204;
	sub_82716EA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827172bc
	if (!ctx.cr0.eq) goto loc_827172BC;
	// lwz r11,1712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827172bc
	if (ctx.cr6.eq) goto loc_827172BC;
	// lwz r11,1392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1392);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// stw r25,1712(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1712, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827172bc
	if (!ctx.cr6.gt) goto loc_827172BC;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
loc_82717234:
	// lwz r10,13024(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r11,1388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1388);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,560(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x8282b6b8
	ctx.lr = 0x8271724C;
	sub_8282B6B8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8271727c
	if (ctx.cr0.eq) goto loc_8271727C;
	// bl 0x82717568
	ctx.lr = 0x82717258;
	sub_82717568(ctx, base);
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
	ctx.lr = 0x82717270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82717280
	if (!ctx.cr0.eq) goto loc_82717280;
loc_8271727C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82717280:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827172a8
	if (ctx.cr6.eq) goto loc_827172A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827172A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827172A8:
	// lwz r11,1392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1392);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82717234
	if (ctx.cr6.lt) goto loc_82717234;
loc_827172BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827172C8"))) PPC_WEAK_FUNC(sub_827172C8);
PPC_FUNC_IMPL(__imp__sub_827172C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82833108
	ctx.lr = 0x827172E0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82717324
	if (ctx.cr0.eq) goto loc_82717324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823346f0
	ctx.lr = 0x827172F0;
	sub_823346F0(ctx, base);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-23360
	ctx.r10.s64 = ctx.r10.s64 + -23360;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r9.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// b 0x82717328
	goto loc_82717328;
loc_82717324:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82717328:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82717340"))) PPC_WEAK_FUNC(sub_82717340);
PPC_FUNC_IMPL(__imp__sub_82717340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,23532(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23532);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82717380
	if (!ctx.cr0.eq) goto loc_82717380;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r11,23532(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23532, ctx.r11.u32);
	// addi r3,r9,-24520
	ctx.r3.s64 = ctx.r9.s64 + -24520;
	// bl 0x82816528
	ctx.lr = 0x82717378;
	sub_82816528(ctx, base);
	// stw r3,23528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23528, ctx.r3.u32);
	// b 0x82717384
	goto loc_82717384;
loc_82717380:
	// lwz r3,23528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23528);
loc_82717384:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82717398"))) PPC_WEAK_FUNC(sub_82717398);
PPC_FUNC_IMPL(__imp__sub_82717398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827173e8
	ctx.lr = 0x827173B8;
	sub_827173E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827173CC;
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

__attribute__((alias("__imp__sub_827173E8"))) PPC_WEAK_FUNC(sub_827173E8);
PPC_FUNC_IMPL(__imp__sub_827173E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13904
	ctx.r31.s64 = ctx.r11.s64 + 13904;
	// lwz r11,13900(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13900);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82717430
	if (!ctx.cr0.eq) goto loc_82717430;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-23256
	ctx.r9.s64 = ctx.r9.s64 + -23256;
	// stw r11,13900(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13900, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,30240
	ctx.r3.s64 = ctx.r11.s64 + 30240;
	// bl 0x82a4c758
	ctx.lr = 0x82717430;
	sub_82A4C758(ctx, base);
loc_82717430:
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

__attribute__((alias("__imp__sub_82717448"))) PPC_WEAK_FUNC(sub_82717448);
PPC_FUNC_IMPL(__imp__sub_82717448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82833108
	ctx.lr = 0x82717460;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827174a4
	if (ctx.cr0.eq) goto loc_827174A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823346f0
	ctx.lr = 0x82717470;
	sub_823346F0(ctx, base);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-23232
	ctx.r10.s64 = ctx.r10.s64 + -23232;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r9.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// b 0x827174a8
	goto loc_827174A8;
loc_827174A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827174A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827174C0"))) PPC_WEAK_FUNC(sub_827174C0);
PPC_FUNC_IMPL(__imp__sub_827174C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,23524(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23524);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82717500
	if (!ctx.cr0.eq) goto loc_82717500;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r11,23524(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23524, ctx.r11.u32);
	// addi r3,r9,-24496
	ctx.r3.s64 = ctx.r9.s64 + -24496;
	// bl 0x82816528
	ctx.lr = 0x827174F8;
	sub_82816528(ctx, base);
	// stw r3,23520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23520, ctx.r3.u32);
	// b 0x82717504
	goto loc_82717504;
loc_82717500:
	// lwz r3,23520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23520);
loc_82717504:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82717518"))) PPC_WEAK_FUNC(sub_82717518);
PPC_FUNC_IMPL(__imp__sub_82717518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82717568
	ctx.lr = 0x82717538;
	sub_82717568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271754C;
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

__attribute__((alias("__imp__sub_82717568"))) PPC_WEAK_FUNC(sub_82717568);
PPC_FUNC_IMPL(__imp__sub_82717568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13912
	ctx.r31.s64 = ctx.r11.s64 + 13912;
	// lwz r11,13908(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13908);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827175b0
	if (!ctx.cr0.eq) goto loc_827175B0;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-23128
	ctx.r9.s64 = ctx.r9.s64 + -23128;
	// stw r11,13908(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13908, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,30216
	ctx.r3.s64 = ctx.r11.s64 + 30216;
	// bl 0x82a4c758
	ctx.lr = 0x827175B0;
	sub_82A4C758(ctx, base);
loc_827175B0:
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

__attribute__((alias("__imp__sub_827175C8"))) PPC_WEAK_FUNC(sub_827175C8);
PPC_FUNC_IMPL(__imp__sub_827175C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82716b40
	sub_82716B40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827175D0"))) PPC_WEAK_FUNC(sub_827175D0);
PPC_FUNC_IMPL(__imp__sub_827175D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r11,r11,-14976
	ctx.r11.s64 = ctx.r11.s64 + -14976;
	// lwz r3,1960(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1960);
	// addi r10,r10,-13920
	ctx.r10.s64 = ctx.r10.s64 + -13920;
	// addi r9,r9,-13868
	ctx.r9.s64 = ctx.r9.s64 + -13868;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r9.u32);
	// beq cr6,0x8271761c
	if (ctx.cr6.eq) goto loc_8271761C;
	// bl 0x82332db8
	ctx.lr = 0x8271761C;
	sub_82332DB8(ctx, base);
loc_8271761C:
	// addi r3,r30,1932
	ctx.r3.s64 = ctx.r30.s64 + 1932;
	// bl 0x82400988
	ctx.lr = 0x82717624;
	sub_82400988(ctx, base);
	// addi r3,r30,1908
	ctx.r3.s64 = ctx.r30.s64 + 1908;
	// bl 0x82333960
	ctx.lr = 0x8271762C;
	sub_82333960(ctx, base);
	// addi r31,r30,1876
	ctx.r31.s64 = ctx.r30.s64 + 1876;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,1892(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1892);
	// li r6,20
	ctx.r6.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82717648;
	sub_82332CA8(ctx, base);
	// lwz r3,1888(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82717658
	if (ctx.cr6.eq) goto loc_82717658;
	// bl 0x82332db8
	ctx.lr = 0x82717658;
	sub_82332DB8(ctx, base);
loc_82717658:
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
	// bl 0x823705b8
	ctx.lr = 0x82717670;
	sub_823705B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82717688"))) PPC_WEAK_FUNC(sub_82717688);
PPC_FUNC_IMPL(__imp__sub_82717688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82717690;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x824c5ef0
	ctx.lr = 0x827176A4;
	sub_824C5EF0(ctx, base);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r11,1860(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1860, ctx.r11.u32);
	// lfs f0,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1864(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 1864, temp.u32);
	// lwz r5,256(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// bne cr6,0x82717704
	if (!ctx.cr6.eq) goto loc_82717704;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x82411dc0
	ctx.lr = 0x827176E4;
	sub_82411DC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827176fc
	if (ctx.cr0.eq) goto loc_827176FC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82651058
	ctx.lr = 0x827176F4;
	sub_82651058(ctx, base);
	// stw r3,1868(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1868, ctx.r3.u32);
	// b 0x82717748
	goto loc_82717748;
loc_827176FC:
	// stw r23,1868(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1868, ctx.r23.u32);
	// b 0x82717748
	goto loc_82717748;
loc_82717704:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// bl 0x82846fb0
	ctx.lr = 0x82717714;
	sub_82846FB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82717730
	if (ctx.cr6.eq) goto loc_82717730;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271772C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82717734
	goto loc_82717734;
loc_82717730:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_82717734:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82717744
	if (ctx.cr6.eq) goto loc_82717744;
	// bl 0x82651058
	ctx.lr = 0x82717740;
	sub_82651058(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82717744:
	// stw r30,1868(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1868, ctx.r30.u32);
loc_82717748:
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r30,r27,1876
	ctx.r30.s64 = ctx.r27.s64 + 1876;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addi r28,r11,14544
	ctx.r28.s64 = ctx.r11.s64 + 14544;
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stb r11,1872(r27)
	PPC_STORE_U8(ctx.r27.u32 + 1872, ctx.r11.u8);
	// bl 0x828165a8
	ctx.lr = 0x82717770;
	sub_828165A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82846e98
	ctx.lr = 0x82717784;
	sub_82846E98(ctx, base);
	// lwz r10,268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r9,1896(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1896);
	// add r29,r10,r3
	ctx.r29.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r23,1892(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1892, ctx.r23.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x827177b4
	if (ctx.cr6.eq) goto loc_827177B4;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x827177B4;
	sub_82332C38(ctx, base);
loc_827177B4:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82717848
	if (!ctx.cr6.gt) goto loc_82717848;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
loc_827177C8:
	// lwz r11,-8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r10,-4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x82332d50
	ctx.lr = 0x82717804;
	sub_82332D50(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mulli r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 * 20;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82717834
	if (ctx.cr0.eq) goto loc_82717834;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82717820:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82717820
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82717820;
loc_82717834:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827177c8
	if (ctx.cr6.lt) goto loc_827177C8;
loc_82717848:
	// lfs f0,272(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfs f0,1900(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 1900, temp.u32);
	// lfs f0,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1904(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 1904, temp.u32);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// stw r11,1956(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1956, ctx.r11.u32);
	// bl 0x828165a8
	ctx.lr = 0x82717868;
	sub_828165A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82846e98
	ctx.lr = 0x8271787C;
	sub_82846E98(ctx, base);
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827178b0
	if (!ctx.cr6.gt) goto loc_827178B0;
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x82414568
	ctx.lr = 0x8271789C;
	sub_82414568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r27,1908
	ctx.r3.s64 = ctx.r27.s64 + 1908;
	// bl 0x82400b48
	ctx.lr = 0x827178A8;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x827178B0;
	sub_82333960(ctx, base);
loc_827178B0:
	// lwz r11,1948(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1948);
	// addi r28,r27,1932
	ctx.r28.s64 = ctx.r27.s64 + 1932;
	// lwz r26,288(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827178ec
	if (!ctx.cr6.gt) goto loc_827178EC;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_827178CC:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82333960
	ctx.lr = 0x827178D8;
	sub_82333960(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827178cc
	if (ctx.cr6.lt) goto loc_827178CC;
loc_827178EC:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stw r23,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r23.u32);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x82717910
	if (ctx.cr6.eq) goto loc_82717910;
	// stw r26,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x82717910;
	sub_82332C38(ctx, base);
loc_82717910:
	// lwz r10,288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82717968
	if (!ctx.cr6.gt) goto loc_82717968;
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r29,r11,r25
	ctx.r29.u64 = ctx.r11.u64 + ctx.r25.u64;
	// ble cr6,0x82717968
	if (!ctx.cr6.gt) goto loc_82717968;
loc_82717930:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x82414568
	ctx.lr = 0x82717940;
	sub_82414568(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824152a0
	ctx.lr = 0x8271794C;
	sub_824152A0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x82717954;
	sub_82333960(ctx, base);
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82717930
	if (ctx.cr6.lt) goto loc_82717930;
loc_82717968:
	// lwz r11,148(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 148);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82717970:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82717970
	if (!ctx.cr6.eq) goto loc_82717970;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82717a20
	if (ctx.cr0.eq) goto loc_82717A20;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r3,13016(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13016);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827179a8
	if (!ctx.cr6.eq) goto loc_827179A8;
	// bl 0x828223f0
	ctx.lr = 0x827179A4;
	sub_828223F0(ctx, base);
	// lwz r3,13016(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13016);
loc_827179A8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827179C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1960(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1960, ctx.r3.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r4,148(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 148);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r11,-23108
	ctx.r3.s64 = ctx.r11.s64 + -23108;
	// bl 0x82a4e930
	ctx.lr = 0x827179D8;
	sub_82A4E930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827179ec
	if (!ctx.cr0.eq) goto loc_827179EC;
	// lwz r11,148(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 148);
	// addi r4,r11,6
	ctx.r4.s64 = ctx.r11.s64 + 6;
	// b 0x827179f0
	goto loc_827179F0;
loc_827179EC:
	// lwz r4,148(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 148);
loc_827179F0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,1960(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1960);
	// bl 0x82a4e530
	ctx.lr = 0x827179FC;
	sub_82A4E530(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,-23100
	ctx.r4.s64 = ctx.r11.s64 + -23100;
	// lwz r11,1960(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1960);
	// stbx r23,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r23.u8);
	// lwz r3,1960(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1960);
	// bl 0x82a4d040
	ctx.lr = 0x82717A14;
	sub_82A4D040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82717a20
	if (ctx.cr0.eq) goto loc_82717A20;
	// stb r23,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r23.u8);
loc_82717A20:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82717A28"))) PPC_WEAK_FUNC(sub_82717A28);
PPC_FUNC_IMPL(__imp__sub_82717A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x82717A30;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x828a74e8
	ctx.lr = 0x82717A40;
	sub_828A74E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82717f6c
	if (ctx.cr0.eq) goto loc_82717F6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332988
	ctx.lr = 0x82717A50;
	sub_82332988(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
	// beq 0x82717f68
	if (ctx.cr0.eq) goto loc_82717F68;
	// lwz r11,1608(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82717f68
	if (ctx.cr6.eq) goto loc_82717F68;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,1872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1872);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82717A80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82717A98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82717aec
	if (ctx.cr0.eq) goto loc_82717AEC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,1960(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1960);
	// bl 0x8233a258
	ctx.lr = 0x82717AB0;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82717AC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x82717ACC;
	sub_82333960(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,620(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// stw r10,3316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3316, ctx.r10.u32);
	// lwz r10,624(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	// stw r10,3320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3320, ctx.r10.u32);
	// lwz r10,628(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	// stw r10,3324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3324, ctx.r10.u32);
loc_82717AEC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82718358
	ctx.lr = 0x82717AF8;
	sub_82718358(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82718430
	ctx.lr = 0x82717B04;
	sub_82718430(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82718500
	ctx.lr = 0x82717B10;
	sub_82718500(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827185d0
	ctx.lr = 0x82717B1C;
	sub_827185D0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,764(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// lis r22,-31949
	ctx.r22.s64 = -2093809664;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82717b40
	if (!ctx.cr6.eq) goto loc_82717B40;
	// lwz r11,772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 772);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82717bac
	if (!ctx.cr6.eq) goto loc_82717BAC;
loc_82717B40:
	// lwz r11,1868(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1868);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82717bac
	if (ctx.cr6.eq) goto loc_82717BAC;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82717bac
	if (!ctx.cr6.eq) goto loc_82717BAC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82718168
	ctx.lr = 0x82717B64;
	sub_82718168(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82717b88
	if (!ctx.cr0.eq) goto loc_82717B88;
	// lwz r7,13024(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// lwz r11,788(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82717b88
	if (!ctx.cr6.eq) goto loc_82717B88;
	// lwz r11,432(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 432);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82717bb0
	if (ctx.cr6.lt) goto loc_82717BB0;
loc_82717B88:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82717B9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82717ba8
	if (ctx.cr0.eq) goto loc_82717BA8;
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
loc_82717BA8:
	// stw r30,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r30.u32);
loc_82717BAC:
	// lwz r7,13024(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
loc_82717BB0:
	// lwz r11,1860(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1860);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// lwz r24,784(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// stw r11,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r11.u32);
	// lwz r11,788(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82717c54
	if (!ctx.cr6.eq) goto loc_82717C54;
	// lwz r11,432(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 432);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x82717c54
	if (!ctx.cr6.lt) goto loc_82717C54;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82717c54
	if (ctx.cr6.eq) goto loc_82717C54;
	// lwz r8,1860(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1860);
	// lwz r10,560(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// srawi r11,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 5;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82717c1c
	if (!ctx.cr6.lt) goto loc_82717C1C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,556(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
loc_82717C1C:
	// lwz r8,1860(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1860);
	// lwz r10,588(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// srawi r11,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 5;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82717c54
	if (!ctx.cr6.lt) goto loc_82717C54;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,584(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
loc_82717C54:
	// lwz r11,788(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82717c70
	if (ctx.cr6.eq) goto loc_82717C70;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82717c70
	if (ctx.cr6.eq) goto loc_82717C70;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82717d14
	if (!ctx.cr6.eq) goto loc_82717D14;
loc_82717C70:
	// addi r4,r7,808
	ctx.r4.s64 = ctx.r7.s64 + 808;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82873b58
	ctx.lr = 0x82717C7C;
	sub_82873B58(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82717d08
	if (!ctx.cr6.gt) goto loc_82717D08;
	// lwz r28,108(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82717C90:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,1412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82717cb4
	if (ctx.cr6.eq) goto loc_82717CB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82717CB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82717cb8
	goto loc_82717CB8;
loc_82717CB4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_82717CB8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82717cfc
	if (ctx.cr6.eq) goto loc_82717CFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1872);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82717CD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82717cfc
	if (ctx.cr0.eq) goto loc_82717CFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,1860(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1860);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827186a0
	ctx.lr = 0x82717CE8;
	sub_827186A0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1860(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1860);
	// bl 0x82718828
	ctx.lr = 0x82717CF8;
	sub_82718828(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82717CFC:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82717c90
	if (!ctx.cr0.eq) goto loc_82717C90;
loc_82717D08:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239d768
	ctx.lr = 0x82717D10;
	sub_8239D768(ctx, base);
	// b 0x82717d38
	goto loc_82717D38;
loc_82717D14:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,1860(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1860);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827186a0
	ctx.lr = 0x82717D24;
	sub_827186A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1860(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1860);
	// bl 0x82718828
	ctx.lr = 0x82717D34;
	sub_82718828(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82717D38:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82717f30
	if (ctx.cr6.eq) goto loc_82717F30;
	// lwz r30,320(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82717D5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82717D78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82717D94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82717DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82717DCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82717DE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82717E04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82717E20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82717E3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// li r4,121
	ctx.r4.s64 = 121;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82717E58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82717E9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82717EB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82717f30
	if (ctx.cr0.eq) goto loc_82717F30;
	// lwz r11,784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82717ef0
	if (!ctx.cr6.gt) goto loc_82717EF0;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_82717ED0:
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stw r23,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r23.u32);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82717ed0
	if (ctx.cr6.lt) goto loc_82717ED0;
loc_82717EF0:
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82717f2c
	if (!ctx.cr6.gt) goto loc_82717F2C;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lfs f0,904(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
loc_82717F0C:
	// lwz r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82717f0c
	if (ctx.cr6.lt) goto loc_82717F0C;
loc_82717F2C:
	// stw r23,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r23.u32);
loc_82717F30:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82717f78
	ctx.lr = 0x82717F3C;
	sub_82717F78(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82717f68
	if (ctx.cr6.eq) goto loc_82717F68;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82717f68
	if (ctx.cr6.eq) goto loc_82717F68;
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,16276(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16276);
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// bl 0x828cef18
	ctx.lr = 0x82717F68;
	sub_828CEF18(ctx, base);
loc_82717F68:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82717F6C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82717F78"))) PPC_WEAK_FUNC(sub_82717F78);
PPC_FUNC_IMPL(__imp__sub_82717F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82717F80;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lbz r11,1872(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1872);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82718154
	if (ctx.cr0.eq) goto loc_82718154;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,1892(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1892);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f30,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// ble cr6,0x827180b4
	if (!ctx.cr6.gt) goto loc_827180B4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82717FC0:
	// lwz r11,1888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1888);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// beq cr6,0x82718024
	if (ctx.cr6.eq) goto loc_82718024;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82717FEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1888);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fsel f0,f11,f1,f0
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f1.f64 : ctx.f0.f64;
	// fsub f11,f0,f13
	ctx.f11.f64 = ctx.f0.f64 - ctx.f13.f64;
	// fsel f0,f11,f13,f0
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// b 0x8271809c
	goto loc_8271809C;
loc_82718024:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82718034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1888);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8271806c
	if (!ctx.cr6.lt) goto loc_8271806C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82718078
	goto loc_82718078;
loc_8271806C:
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82718078
	if (ctx.cr6.lt) goto loc_82718078;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_82718078:
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r11,1888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1888);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_8271809C:
	// lwz r11,1892(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1892);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// fadds f31,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82717fc0
	if (ctx.cr6.lt) goto loc_82717FC0;
loc_827180B4:
	// lfs f0,1900(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1900);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x827180c8
	if (!ctx.cr6.lt) goto loc_827180C8;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x827180dc
	goto loc_827180DC;
loc_827180C8:
	// lfs f0,1904(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1904);
	ctx.f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x827180dc
	if (ctx.cr6.lt) goto loc_827180DC;
	// li r9,2
	ctx.r9.s64 = 2;
loc_827180DC:
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,10548(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10548);
	// stw r9,1984(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1984, ctx.r9.u32);
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82718120
	if (!ctx.cr6.gt) goto loc_82718120;
	// li r10,0
	ctx.r10.s64 = 0;
loc_827180FC:
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,36(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x827180fc
	if (ctx.cr6.lt) goto loc_827180FC;
loc_82718120:
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82718154
	if (!ctx.cr6.gt) goto loc_82718154;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82718134:
	// lwz r9,56(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stfs f30,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r9,60(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82718134
	if (ctx.cr6.lt) goto loc_82718134;
loc_82718154:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82718168"))) PPC_WEAK_FUNC(sub_82718168);
PPC_FUNC_IMPL(__imp__sub_82718168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82718170;
	__savegprlr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lwz r11,1956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1956);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827182f8
	if (ctx.cr6.eq) goto loc_827182F8;
	// lwz r11,156(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827182f8
	if (ctx.cr6.eq) goto loc_827182F8;
	// lwz r11,1924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// addi r4,r31,1908
	ctx.r4.s64 = ctx.r31.s64 + 1908;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x827181b8
	if (!ctx.cr6.eq) goto loc_827181B8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827181B8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827182d0
	if (!ctx.cr6.eq) goto loc_827182D0;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r4,1960(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1960);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82a4e530
	ctx.lr = 0x827181D0;
	sub_82A4E530(ctx, base);
	// stb r27,335(r1)
	PPC_STORE_U8(ctx.r1.u32 + 335, ctx.r27.u8);
	// lbz r3,209(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 209);
	// bl 0x82a4e808
	ctx.lr = 0x827181DC;
	sub_82A4E808(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827181f4
	if (ctx.cr0.eq) goto loc_827181F4;
	// lbz r3,210(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 210);
	// bl 0x82a4e808
	ctx.lr = 0x827181EC;
	sub_82A4E808(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82718204
	if (!ctx.cr0.eq) goto loc_82718204;
loc_827181F4:
	// li r11,48
	ctx.r11.s64 = 48;
	// li r10,49
	ctx.r10.s64 = 49;
	// stb r11,209(r1)
	PPC_STORE_U8(ctx.r1.u32 + 209, ctx.r11.u8);
	// stb r10,210(r1)
	PPC_STORE_U8(ctx.r1.u32 + 210, ctx.r10.u8);
loc_82718204:
	// lwz r11,1948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// ble cr6,0x82718258
	if (!ctx.cr6.gt) goto loc_82718258;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82718234:
	// lwz r11,1944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1944);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x824152a0
	ctx.lr = 0x82718244;
	sub_824152A0(ctx, base);
	// lwz r11,1948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82718234
	if (ctx.cr6.lt) goto loc_82718234;
loc_82718258:
	// lbz r11,210(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 210);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lbz r9,209(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 209);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// addi r4,r10,-23092
	ctx.r4.s64 = ctx.r10.s64 + -23092;
	// extsb r5,r9
	ctx.r5.s64 = ctx.r9.s8;
	// bl 0x82816c30
	ctx.lr = 0x82718278;
	sub_82816C30(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82418940
	ctx.lr = 0x82718284;
	sub_82418940(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-23072
	ctx.r4.s64 = ctx.r11.s64 + -23072;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82816c30
	ctx.lr = 0x82718298;
	sub_82816C30(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x8282cac0
	ctx.lr = 0x827182B0;
	sub_8282CAC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x827182BC;
	sub_82333960(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82333960
	ctx.lr = 0x827182C4;
	sub_82333960(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82400988
	ctx.lr = 0x827182CC;
	sub_82400988(ctx, base);
	// b 0x827182e8
	goto loc_827182E8;
loc_827182D0:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,1932
	ctx.r5.s64 = ctx.r31.s64 + 1932;
	// bl 0x8282cac0
	ctx.lr = 0x827182E4;
	sub_8282CAC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_827182E8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x827182f8
	if (ctx.cr6.eq) goto loc_827182F8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,768(r26)
	PPC_STORE_U32(ctx.r26.u32 + 768, ctx.r11.u32);
loc_827182F8:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// stw r27,772(r26)
	PPC_STORE_U32(ctx.r26.u32 + 772, ctx.r27.u32);
	// stw r10,764(r26)
	PPC_STORE_U32(ctx.r26.u32 + 764, ctx.r10.u32);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8271831c
	if (ctx.cr6.eq) goto loc_8271831C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8271834c
	if (!ctx.cr6.eq) goto loc_8271834C;
loc_8271831C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x8271832C;
	sub_82409BE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271834c
	if (ctx.cr0.eq) goto loc_8271834C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,764(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8271834c
	if (ctx.cr6.eq) goto loc_8271834C;
	// stw r11,764(r3)
	PPC_STORE_U32(ctx.r3.u32 + 764, ctx.r11.u32);
	// stw r27,772(r3)
	PPC_STORE_U32(ctx.r3.u32 + 772, ctx.r27.u32);
loc_8271834C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82718358"))) PPC_WEAK_FUNC(sub_82718358);
PPC_FUNC_IMPL(__imp__sub_82718358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82718360;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,1960(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1960);
	// bl 0x8233a258
	ctx.lr = 0x82718378;
	sub_8233A258(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,-23064
	ctx.r4.s64 = ctx.r11.s64 + -23064;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233a258
	ctx.lr = 0x8271838C;
	sub_8233A258(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82419458
	ctx.lr = 0x82718394;
	sub_82419458(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x827183A0;
	sub_82333960(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x827183A8;
	sub_82333960(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82718428
	if (ctx.cr6.eq) goto loc_82718428;
	// lwz r11,880(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 880);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827183cc
	if (!ctx.cr6.eq) goto loc_827183CC;
	// stw r29,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r29.u32);
	// stw r30,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r30.u32);
loc_827183CC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x827183e8
	if (ctx.cr6.eq) goto loc_827183E8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82718428
	if (!ctx.cr6.eq) goto loc_82718428;
loc_827183E8:
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827183FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,848
	ctx.r3.s64 = ctx.r31.s64 + 848;
	// bl 0x827190d8
	ctx.lr = 0x82718408;
	sub_827190D8(ctx, base);
	// lwz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82718420
	if (!ctx.cr6.gt) goto loc_82718420;
	// stw r30,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r30.u32);
	// stw r30,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r30.u32);
	// b 0x82718428
	goto loc_82718428;
loc_82718420:
	// stw r29,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r29.u32);
	// stw r29,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r29.u32);
loc_82718428:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82718430"))) PPC_WEAK_FUNC(sub_82718430);
PPC_FUNC_IMPL(__imp__sub_82718430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82718438;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,1960(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1960);
	// bl 0x8233a258
	ctx.lr = 0x82718450;
	sub_8233A258(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,-23036
	ctx.r4.s64 = ctx.r11.s64 + -23036;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233a258
	ctx.lr = 0x82718464;
	sub_8233A258(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82419458
	ctx.lr = 0x8271846C;
	sub_82419458(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82718478;
	sub_82333960(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x82718480;
	sub_82333960(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x827184f8
	if (ctx.cr6.eq) goto loc_827184F8;
	// lwz r11,880(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 880);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827184a4
	if (!ctx.cr6.eq) goto loc_827184A4;
	// stw r29,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r29.u32);
	// stw r30,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r30.u32);
loc_827184A4:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x827184c0
	if (ctx.cr6.eq) goto loc_827184C0;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x827184f8
	if (!ctx.cr6.eq) goto loc_827184F8;
loc_827184C0:
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827184D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,848
	ctx.r3.s64 = ctx.r31.s64 + 848;
	// bl 0x827190d8
	ctx.lr = 0x827184E0;
	sub_827190D8(ctx, base);
	// lwz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x827184f4
	if (!ctx.cr6.gt) goto loc_827184F4;
	// stw r30,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r30.u32);
	// b 0x827184f8
	goto loc_827184F8;
loc_827184F4:
	// stw r29,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r29.u32);
loc_827184F8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82718500"))) PPC_WEAK_FUNC(sub_82718500);
PPC_FUNC_IMPL(__imp__sub_82718500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82718508;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,1960(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1960);
	// bl 0x8233a258
	ctx.lr = 0x82718520;
	sub_8233A258(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,-23008
	ctx.r4.s64 = ctx.r11.s64 + -23008;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233a258
	ctx.lr = 0x82718534;
	sub_8233A258(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82419458
	ctx.lr = 0x8271853C;
	sub_82419458(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82718548;
	sub_82333960(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x82718550;
	sub_82333960(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x827185c8
	if (ctx.cr6.eq) goto loc_827185C8;
	// lwz r11,880(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 880);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82718574
	if (!ctx.cr6.eq) goto loc_82718574;
	// stw r29,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r29.u32);
	// stw r30,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r30.u32);
loc_82718574:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82718590
	if (ctx.cr6.eq) goto loc_82718590;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x827185c8
	if (!ctx.cr6.eq) goto loc_827185C8;
loc_82718590:
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827185A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,848
	ctx.r3.s64 = ctx.r31.s64 + 848;
	// bl 0x827190d8
	ctx.lr = 0x827185B0;
	sub_827190D8(ctx, base);
	// lwz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x827185c4
	if (!ctx.cr6.gt) goto loc_827185C4;
	// stw r30,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r30.u32);
	// b 0x827185c8
	goto loc_827185C8;
loc_827185C4:
	// stw r29,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r29.u32);
loc_827185C8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827185D0"))) PPC_WEAK_FUNC(sub_827185D0);
PPC_FUNC_IMPL(__imp__sub_827185D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827185D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,1960(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1960);
	// bl 0x8233a258
	ctx.lr = 0x827185F0;
	sub_8233A258(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,-22980
	ctx.r4.s64 = ctx.r11.s64 + -22980;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233a258
	ctx.lr = 0x82718604;
	sub_8233A258(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82419458
	ctx.lr = 0x8271860C;
	sub_82419458(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82718618;
	sub_82333960(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x82718620;
	sub_82333960(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82718698
	if (ctx.cr6.eq) goto loc_82718698;
	// lwz r11,880(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 880);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82718644
	if (!ctx.cr6.eq) goto loc_82718644;
	// stw r29,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r29.u32);
	// stw r30,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r30.u32);
loc_82718644:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82718660
	if (ctx.cr6.eq) goto loc_82718660;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82718698
	if (!ctx.cr6.eq) goto loc_82718698;
loc_82718660:
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82718674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,848
	ctx.r3.s64 = ctx.r31.s64 + 848;
	// bl 0x827190d8
	ctx.lr = 0x82718680;
	sub_827190D8(ctx, base);
	// lwz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82718694
	if (!ctx.cr6.gt) goto loc_82718694;
	// stw r30,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r30.u32);
	// b 0x82718698
	goto loc_82718698;
loc_82718694:
	// stw r29,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r29.u32);
loc_82718698:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827186A0"))) PPC_WEAK_FUNC(sub_827186A0);
PPC_FUNC_IMPL(__imp__sub_827186A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmpwi cr6,r4,94
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 94, ctx.xer);
	// bgt cr6,0x8271875c
	if (ctx.cr6.gt) goto loc_8271875C;
	// beq cr6,0x82718754
	if (ctx.cr6.eq) goto loc_82718754;
	// cmpwi cr6,r4,62
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 62, ctx.xer);
	// bgt cr6,0x82718714
	if (ctx.cr6.gt) goto loc_82718714;
	// beq cr6,0x8271870c
	if (ctx.cr6.eq) goto loc_8271870C;
	// cmpwi cr6,r4,31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 31, ctx.xer);
	// beq cr6,0x82718704
	if (ctx.cr6.eq) goto loc_82718704;
	// cmpwi cr6,r4,32
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 32, ctx.xer);
	// beq cr6,0x827186fc
	if (ctx.cr6.eq) goto loc_827186FC;
	// cmpwi cr6,r4,33
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 33, ctx.xer);
	// beq cr6,0x827186f4
	if (ctx.cr6.eq) goto loc_827186F4;
	// cmpwi cr6,r4,34
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 34, ctx.xer);
	// bne cr6,0x82718810
	if (!ctx.cr6.eq) goto loc_82718810;
	// li r4,94
	ctx.r4.s64 = 94;
	// b 0x827187dc
	goto loc_827187DC;
loc_827186F4:
	// li r4,93
	ctx.r4.s64 = 93;
	// b 0x827187dc
	goto loc_827187DC;
loc_827186FC:
	// li r4,92
	ctx.r4.s64 = 92;
	// b 0x827187dc
	goto loc_827187DC;
loc_82718704:
	// li r4,91
	ctx.r4.s64 = 91;
	// b 0x827187dc
	goto loc_827187DC;
loc_8271870C:
	// li r4,95
	ctx.r4.s64 = 95;
	// b 0x827187dc
	goto loc_827187DC;
loc_82718714:
	// cmpwi cr6,r4,63
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 63, ctx.xer);
	// beq cr6,0x8271874c
	if (ctx.cr6.eq) goto loc_8271874C;
	// cmpwi cr6,r4,64
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 64, ctx.xer);
	// beq cr6,0x82718744
	if (ctx.cr6.eq) goto loc_82718744;
	// cmpwi cr6,r4,65
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 65, ctx.xer);
	// beq cr6,0x8271873c
	if (ctx.cr6.eq) goto loc_8271873C;
	// cmpwi cr6,r4,93
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 93, ctx.xer);
	// bne cr6,0x82718810
	if (!ctx.cr6.eq) goto loc_82718810;
	// li r4,99
	ctx.r4.s64 = 99;
	// b 0x827187dc
	goto loc_827187DC;
loc_8271873C:
	// li r4,98
	ctx.r4.s64 = 98;
	// b 0x827187dc
	goto loc_827187DC;
loc_82718744:
	// li r4,97
	ctx.r4.s64 = 97;
	// b 0x827187dc
	goto loc_827187DC;
loc_8271874C:
	// li r4,96
	ctx.r4.s64 = 96;
	// b 0x827187dc
	goto loc_827187DC;
loc_82718754:
	// li r4,100
	ctx.r4.s64 = 100;
	// b 0x827187dc
	goto loc_827187DC;
loc_8271875C:
	// cmpwi cr6,r4,156
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 156, ctx.xer);
	// bgt cr6,0x827187b0
	if (ctx.cr6.gt) goto loc_827187B0;
	// beq cr6,0x827187a8
	if (ctx.cr6.eq) goto loc_827187A8;
	// cmpwi cr6,r4,95
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 95, ctx.xer);
	// beq cr6,0x827187a0
	if (ctx.cr6.eq) goto loc_827187A0;
	// cmpwi cr6,r4,96
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 96, ctx.xer);
	// beq cr6,0x82718798
	if (ctx.cr6.eq) goto loc_82718798;
	// cmpwi cr6,r4,97
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 97, ctx.xer);
	// beq cr6,0x82718790
	if (ctx.cr6.eq) goto loc_82718790;
	// cmpwi cr6,r4,155
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 155, ctx.xer);
	// bne cr6,0x82718810
	if (!ctx.cr6.eq) goto loc_82718810;
	// li r4,107
	ctx.r4.s64 = 107;
	// b 0x827187dc
	goto loc_827187DC;
loc_82718790:
	// li r4,103
	ctx.r4.s64 = 103;
	// b 0x827187dc
	goto loc_827187DC;
loc_82718798:
	// li r4,102
	ctx.r4.s64 = 102;
	// b 0x827187dc
	goto loc_827187DC;
loc_827187A0:
	// li r4,101
	ctx.r4.s64 = 101;
	// b 0x827187dc
	goto loc_827187DC;
loc_827187A8:
	// li r4,108
	ctx.r4.s64 = 108;
	// b 0x827187dc
	goto loc_827187DC;
loc_827187B0:
	// cmpwi cr6,r4,157
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 157, ctx.xer);
	// beq cr6,0x827187d8
	if (ctx.cr6.eq) goto loc_827187D8;
	// cmpwi cr6,r4,158
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 158, ctx.xer);
	// beq cr6,0x827187d0
	if (ctx.cr6.eq) goto loc_827187D0;
	// cmpwi cr6,r4,159
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 159, ctx.xer);
	// bne cr6,0x82718810
	if (!ctx.cr6.eq) goto loc_82718810;
	// li r4,111
	ctx.r4.s64 = 111;
	// b 0x827187dc
	goto loc_827187DC;
loc_827187D0:
	// li r4,110
	ctx.r4.s64 = 110;
	// b 0x827187dc
	goto loc_827187DC;
loc_827187D8:
	// li r4,109
	ctx.r4.s64 = 109;
loc_827187DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827187F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82718810
	if (!ctx.cr0.eq) goto loc_82718810;
	// lwz r3,892(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 892);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82718810
	if (ctx.cr6.eq) goto loc_82718810;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,27
	ctx.r4.s64 = 27;
	// bl 0x824c7f10
	ctx.lr = 0x82718810;
	sub_824C7F10(ctx, base);
loc_82718810:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82718828"))) PPC_WEAK_FUNC(sub_82718828);
PPC_FUNC_IMPL(__imp__sub_82718828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82718830;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpwi cr6,r4,96
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 96, ctx.xer);
	// bgt cr6,0x82718d94
	if (ctx.cr6.gt) goto loc_82718D94;
	// beq cr6,0x82718d1c
	if (ctx.cr6.eq) goto loc_82718D1C;
	// cmpwi cr6,r4,64
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 64, ctx.xer);
	// bgt cr6,0x82718b54
	if (ctx.cr6.gt) goto loc_82718B54;
	// beq cr6,0x82718adc
	if (ctx.cr6.eq) goto loc_82718ADC;
	// cmpwi cr6,r4,31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 31, ctx.xer);
	// beq cr6,0x82718a64
	if (ctx.cr6.eq) goto loc_82718A64;
	// cmpwi cr6,r4,32
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 32, ctx.xer);
	// beq cr6,0x827189ec
	if (ctx.cr6.eq) goto loc_827189EC;
	// cmpwi cr6,r4,33
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 33, ctx.xer);
	// beq cr6,0x82718974
	if (ctx.cr6.eq) goto loc_82718974;
	// cmpwi cr6,r4,62
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 62, ctx.xer);
	// beq cr6,0x827188fc
	if (ctx.cr6.eq) goto loc_827188FC;
	// cmpwi cr6,r4,63
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 63, ctx.xer);
	// bne cr6,0x8271908c
	if (!ctx.cr6.eq) goto loc_8271908C;
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x827188a0
	if (!ctx.cr6.gt) goto loc_827188A0;
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_827188A0:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x827188bc
	if (!ctx.cr6.gt) goto loc_827188BC;
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_827188BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827188D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827188F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,5
	ctx.r30.s64 = 5;
	// b 0x82719088
	goto loc_82719088;
loc_827188FC:
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x82718918
	if (!ctx.cr6.gt) goto loc_82718918;
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82718918:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x82718934
	if (!ctx.cr6.gt) goto loc_82718934;
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82718934:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,95
	ctx.r4.s64 = 95;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82718950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271896C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,4
	ctx.r30.s64 = 4;
	// b 0x82719088
	goto loc_82719088;
loc_82718974:
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x82718990
	if (!ctx.cr6.gt) goto loc_82718990;
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82718990:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x827189ac
	if (!ctx.cr6.gt) goto loc_827189AC;
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_827189AC:
	// li r4,93
	ctx.r4.s64 = 93;
loc_827189B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827189C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827189E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x8271908c
	goto loc_8271908C;
loc_827189EC:
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x82718a08
	if (!ctx.cr6.gt) goto loc_82718A08;
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82718A08:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x82718a24
	if (!ctx.cr6.gt) goto loc_82718A24;
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82718A24:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82718A40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82718A5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x82719088
	goto loc_82719088;
loc_82718A64:
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x82718a80
	if (!ctx.cr6.gt) goto loc_82718A80;
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// oris r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 67108864;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82718A80:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x82718a9c
	if (!ctx.cr6.gt) goto loc_82718A9C;
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// oris r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 67108864;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82718A9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82718AB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82718AD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82719088
	goto loc_82719088;
loc_82718ADC:
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82718af8
	if (!ctx.cr6.gt) goto loc_82718AF8;
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82718AF8:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82718b14
	if (!ctx.cr6.gt) goto loc_82718B14;
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82718B14:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,97
	ctx.r4.s64 = 97;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82718B30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82718B4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,6
	ctx.r30.s64 = 6;
	// b 0x82719088
	goto loc_82719088;
loc_82718B54:
	// cmpwi cr6,r4,65
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 65, ctx.xer);
	// beq cr6,0x82718cdc
	if (ctx.cr6.eq) goto loc_82718CDC;
	// cmpwi cr6,r4,93
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 93, ctx.xer);
	// beq cr6,0x82718c64
	if (ctx.cr6.eq) goto loc_82718C64;
	// cmpwi cr6,r4,94
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 94, ctx.xer);
	// beq cr6,0x82718bec
	if (ctx.cr6.eq) goto loc_82718BEC;
	// cmpwi cr6,r4,95
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 95, ctx.xer);
	// bne cr6,0x8271908c
	if (!ctx.cr6.eq) goto loc_8271908C;
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82718b90
	if (!ctx.cr6.gt) goto loc_82718B90;
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82718B90:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82718bac
	if (!ctx.cr6.gt) goto loc_82718BAC;
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82718BAC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,101
	ctx.r4.s64 = 101;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82718BC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82718BE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,10
	ctx.r30.s64 = 10;
	// b 0x82719088
	goto loc_82719088;
loc_82718BEC:
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82718c08
	if (!ctx.cr6.gt) goto loc_82718C08;
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82718C08:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82718c24
	if (!ctx.cr6.gt) goto loc_82718C24;
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82718C24:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82718C40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82718C5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,9
	ctx.r30.s64 = 9;
	// b 0x82719088
	goto loc_82719088;
loc_82718C64:
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82718c80
	if (!ctx.cr6.gt) goto loc_82718C80;
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82718C80:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82718c9c
	if (!ctx.cr6.gt) goto loc_82718C9C;
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82718C9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,99
	ctx.r4.s64 = 99;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82718CB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82718CD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,8
	ctx.r30.s64 = 8;
	// b 0x82719088
	goto loc_82719088;
loc_82718CDC:
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82718cf8
	if (!ctx.cr6.gt) goto loc_82718CF8;
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82718CF8:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82718d14
	if (!ctx.cr6.gt) goto loc_82718D14;
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82718D14:
	// li r4,98
	ctx.r4.s64 = 98;
	// b 0x827189b0
	goto loc_827189B0;
loc_82718D1C:
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82718d38
	if (!ctx.cr6.gt) goto loc_82718D38;
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82718D38:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82718d54
	if (!ctx.cr6.gt) goto loc_82718D54;
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82718D54:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,102
	ctx.r4.s64 = 102;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82718D70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82718D8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,11
	ctx.r30.s64 = 11;
	// b 0x82719088
	goto loc_82719088;
loc_82718D94:
	// cmpwi cr6,r4,155
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 155, ctx.xer);
	// bgt cr6,0x82718ec4
	if (ctx.cr6.gt) goto loc_82718EC4;
	// beq cr6,0x82718e4c
	if (ctx.cr6.eq) goto loc_82718E4C;
	// cmpwi cr6,r4,97
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 97, ctx.xer);
	// beq cr6,0x82718e0c
	if (ctx.cr6.eq) goto loc_82718E0C;
	// cmpwi cr6,r4,124
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 124, ctx.xer);
	// beq cr6,0x82718dd0
	if (ctx.cr6.eq) goto loc_82718DD0;
	// cmpwi cr6,r4,125
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 125, ctx.xer);
	// beq cr6,0x82718dc8
	if (ctx.cr6.eq) goto loc_82718DC8;
	// cmpwi cr6,r4,126
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 126, ctx.xer);
	// bne cr6,0x8271908c
	if (!ctx.cr6.eq) goto loc_8271908C;
	// li r4,106
	ctx.r4.s64 = 106;
	// b 0x827189b0
	goto loc_827189B0;
loc_82718DC8:
	// li r4,105
	ctx.r4.s64 = 105;
	// b 0x82718dd4
	goto loc_82718DD4;
loc_82718DD0:
	// li r4,104
	ctx.r4.s64 = 104;
loc_82718DD4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82718DEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82718E08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8271908c
	goto loc_8271908C;
loc_82718E0C:
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82718e28
	if (!ctx.cr6.gt) goto loc_82718E28;
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82718E28:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82718e44
	if (!ctx.cr6.gt) goto loc_82718E44;
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82718E44:
	// li r4,103
	ctx.r4.s64 = 103;
	// b 0x827189b0
	goto loc_827189B0;
loc_82718E4C:
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82718e68
	if (!ctx.cr6.gt) goto loc_82718E68;
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82718E68:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82718e84
	if (!ctx.cr6.gt) goto loc_82718E84;
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82718E84:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,107
	ctx.r4.s64 = 107;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82718EA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82718EBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,13
	ctx.r30.s64 = 13;
	// b 0x82719088
	goto loc_82719088;
loc_82718EC4:
	// cmpwi cr6,r4,156
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 156, ctx.xer);
	// beq cr6,0x82719014
	if (ctx.cr6.eq) goto loc_82719014;
	// cmpwi cr6,r4,157
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 157, ctx.xer);
	// beq cr6,0x82718f9c
	if (ctx.cr6.eq) goto loc_82718F9C;
	// cmpwi cr6,r4,158
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 158, ctx.xer);
	// beq cr6,0x82718f24
	if (ctx.cr6.eq) goto loc_82718F24;
	// cmpwi cr6,r4,159
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 159, ctx.xer);
	// bne cr6,0x8271908c
	if (!ctx.cr6.eq) goto loc_8271908C;
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82718f00
	if (!ctx.cr6.gt) goto loc_82718F00;
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ori r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 4096;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82718F00:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82718f1c
	if (!ctx.cr6.gt) goto loc_82718F1C;
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ori r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 4096;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82718F1C:
	// li r4,111
	ctx.r4.s64 = 111;
	// b 0x827189b0
	goto loc_827189B0;
loc_82718F24:
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82718f40
	if (!ctx.cr6.gt) goto loc_82718F40;
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82718F40:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82718f5c
	if (!ctx.cr6.gt) goto loc_82718F5C;
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82718F5C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,110
	ctx.r4.s64 = 110;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82718F78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82718F94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,16
	ctx.r30.s64 = 16;
	// b 0x82719088
	goto loc_82719088;
loc_82718F9C:
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82718fb8
	if (!ctx.cr6.gt) goto loc_82718FB8;
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ori r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 1024;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82718FB8:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82718fd4
	if (!ctx.cr6.gt) goto loc_82718FD4;
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ori r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 1024;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82718FD4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,109
	ctx.r4.s64 = 109;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82718FF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271900C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,15
	ctx.r30.s64 = 15;
	// b 0x82719088
	goto loc_82719088;
loc_82719014:
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82719030
	if (!ctx.cr6.gt) goto loc_82719030;
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ori r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 512;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82719030:
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x8271904c
	if (!ctx.cr6.gt) goto loc_8271904C;
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ori r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 512;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_8271904C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,108
	ctx.r4.s64 = 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82719068;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82719084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,14
	ctx.r30.s64 = 14;
loc_82719088:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_8271908C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x827190a8
	if (ctx.cr6.eq) goto loc_827190A8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827190cc
	if (!ctx.cr6.eq) goto loc_827190CC;
loc_827190A8:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x827190cc
	if (ctx.cr6.eq) goto loc_827190CC;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,17296(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17296);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x82a46198
	ctx.lr = 0x827190CC;
	sub_82A46198(ctx, base);
loc_827190CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827190D8"))) PPC_WEAK_FUNC(sub_827190D8);
PPC_FUNC_IMPL(__imp__sub_827190D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827190E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x827191a0
	if (ctx.cr6.eq) goto loc_827191A0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// ble cr6,0x82719180
	if (!ctx.cr6.gt) goto loc_82719180;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82719124
	if (ctx.cr6.eq) goto loc_82719124;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,88
	ctx.r4.s64 = 88;
	// bl 0x82332c38
	ctx.lr = 0x82719124;
	sub_82332C38(ctx, base);
loc_82719124:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827191a0
	if (!ctx.cr6.gt) goto loc_827191A0;
loc_82719134:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x82719148;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r11,r3,88
	ctx.r11.s64 = ctx.r3.s64 * 88;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82719168
	if (ctx.cr0.eq) goto loc_82719168;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r5,88
	ctx.r5.s64 = 88;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x82719168;
	sub_82A4EA80(ctx, base);
loc_82719168:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82719134
	if (ctx.cr6.lt) goto loc_82719134;
	// b 0x827191a0
	goto loc_827191A0;
loc_82719180:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827191a0
	if (ctx.cr6.eq) goto loc_827191A0;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,88
	ctx.r4.s64 = 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x827191A0;
	sub_82332C38(ctx, base);
loc_827191A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827191B0"))) PPC_WEAK_FUNC(sub_827191B0);
PPC_FUNC_IMPL(__imp__sub_827191B0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,1416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// lwz r5,1496(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r11.u32);
	// bl 0x828a70b8
	ctx.lr = 0x827191EC;
	sub_828A70B8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8271925c
	if (ctx.cr6.eq) goto loc_8271925C;
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271925c
	if (ctx.cr6.eq) goto loc_8271925C;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x8271925c
	if (ctx.cr6.eq) goto loc_8271925C;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f13,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8271923c
	if (ctx.cr6.gt) goto loc_8271923C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8271923C:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1708(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1708);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271925C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8271925C:
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

__attribute__((alias("__imp__sub_82719278"))) PPC_WEAK_FUNC(sub_82719278);
PPC_FUNC_IMPL(__imp__sub_82719278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,21280
	ctx.r3.s64 = ctx.r11.s64 + 21280;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82719288"))) PPC_WEAK_FUNC(sub_82719288);
PPC_FUNC_IMPL(__imp__sub_82719288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827192c0
	if (ctx.cr6.eq) goto loc_827192C0;
	// bl 0x82483e58
	ctx.lr = 0x827192B0;
	sub_82483E58(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827192c0
	if (!ctx.cr6.eq) goto loc_827192C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827192cc
	goto loc_827192CC;
loc_827192C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370018
	ctx.lr = 0x827192CC;
	sub_82370018(ctx, base);
loc_827192CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827192E8"))) PPC_WEAK_FUNC(sub_827192E8);
PPC_FUNC_IMPL(__imp__sub_827192E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82483e58
	sub_82483E58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827192F0"))) PPC_WEAK_FUNC(sub_827192F0);
PPC_FUNC_IMPL(__imp__sub_827192F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8271930C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82719320
	if (ctx.cr0.eq) goto loc_82719320;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82719398
	ctx.lr = 0x8271931C;
	sub_82719398(ctx, base);
	// b 0x82719324
	goto loc_82719324;
loc_82719320:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82719324:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82719338"))) PPC_WEAK_FUNC(sub_82719338);
PPC_FUNC_IMPL(__imp__sub_82719338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82483e58
	ctx.lr = 0x82719358;
	sub_82483E58(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82719368
	if (!ctx.cr6.eq) goto loc_82719368;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82719380
	goto loc_82719380;
loc_82719368:
	// bl 0x823bd878
	ctx.lr = 0x8271936C;
	sub_823BD878(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82719380
	if (ctx.cr6.eq) goto loc_82719380;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8236fc08
	ctx.lr = 0x82719380;
	sub_8236FC08(ctx, base);
loc_82719380:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82719398"))) PPC_WEAK_FUNC(sub_82719398);
PPC_FUNC_IMPL(__imp__sub_82719398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82370118
	ctx.lr = 0x827193B8;
	sub_82370118(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// addi r11,r11,-22944
	ctx.r11.s64 = ctx.r11.s64 + -22944;
	// addi r10,r10,-21888
	ctx.r10.s64 = ctx.r10.s64 + -21888;
	// addi r9,r9,-21836
	ctx.r9.s64 = ctx.r9.s64 + -21836;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r8,r8,15852
	ctx.r8.s64 = ctx.r8.s64 + 15852;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r11,r31,1712
	ctx.r11.s64 = ctx.r31.s64 + 1712;
	// stw r8,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r8.u32);
	// addi r4,r30,1716
	ctx.r4.s64 = ctx.r30.s64 + 1716;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x827193FC;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,1744
	ctx.r3.s64 = ctx.r31.s64 + 1744;
	// addi r4,r30,1744
	ctx.r4.s64 = ctx.r30.s64 + 1744;
	// bl 0x82873b58
	ctx.lr = 0x82719408;
	sub_82873B58(ctx, base);
	// addi r3,r31,1768
	ctx.r3.s64 = ctx.r31.s64 + 1768;
	// addi r4,r30,1768
	ctx.r4.s64 = ctx.r30.s64 + 1768;
	// bl 0x82873b58
	ctx.lr = 0x82719414;
	sub_82873B58(ctx, base);
	// addi r3,r31,1792
	ctx.r3.s64 = ctx.r31.s64 + 1792;
	// addi r4,r30,1792
	ctx.r4.s64 = ctx.r30.s64 + 1792;
	// bl 0x82873b58
	ctx.lr = 0x82719420;
	sub_82873B58(ctx, base);
	// addi r3,r31,1816
	ctx.r3.s64 = ctx.r31.s64 + 1816;
	// addi r4,r30,1816
	ctx.r4.s64 = ctx.r30.s64 + 1816;
	// bl 0x82873b58
	ctx.lr = 0x8271942C;
	sub_82873B58(ctx, base);
	// addi r3,r31,1840
	ctx.r3.s64 = ctx.r31.s64 + 1840;
	// addi r4,r30,1840
	ctx.r4.s64 = ctx.r30.s64 + 1840;
	// bl 0x82400a48
	ctx.lr = 0x82719438;
	sub_82400A48(ctx, base);
	// addi r3,r31,1864
	ctx.r3.s64 = ctx.r31.s64 + 1864;
	// addi r4,r30,1864
	ctx.r4.s64 = ctx.r30.s64 + 1864;
	// bl 0x82873b58
	ctx.lr = 0x82719444;
	sub_82873B58(ctx, base);
	// addi r3,r31,1888
	ctx.r3.s64 = ctx.r31.s64 + 1888;
	// addi r4,r30,1888
	ctx.r4.s64 = ctx.r30.s64 + 1888;
	// bl 0x82873b58
	ctx.lr = 0x82719450;
	sub_82873B58(ctx, base);
	// lwz r11,1912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1912);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1912, ctx.r11.u32);
	// lwz r11,1916(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1916);
	// stw r11,1916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1916, ctx.r11.u32);
	// lwz r11,1920(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1920);
	// stw r11,1920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1920, ctx.r11.u32);
	// lwz r11,1924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1924);
	// stw r11,1924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1924, ctx.r11.u32);
	// lwz r11,1928(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1928);
	// stw r11,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82719498"))) PPC_WEAK_FUNC(sub_82719498);
PPC_FUNC_IMPL(__imp__sub_82719498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82719668
	ctx.lr = 0x827194B8;
	sub_82719668(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827194c8
	if (ctx.cr0.eq) goto loc_827194C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x827194C8;
	sub_82332DB8(ctx, base);
loc_827194C8:
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

__attribute__((alias("__imp__sub_827194E8"))) PPC_WEAK_FUNC(sub_827194E8);
PPC_FUNC_IMPL(__imp__sub_827194E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827194F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828b5a60
	ctx.lr = 0x827194FC;
	sub_828B5A60(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// addi r11,r11,-22944
	ctx.r11.s64 = ctx.r11.s64 + -22944;
	// addi r10,r10,-21888
	ctx.r10.s64 = ctx.r10.s64 + -21888;
	// addi r9,r9,-21836
	ctx.r9.s64 = ctx.r9.s64 + -21836;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r8,r8,15852
	ctx.r8.s64 = ctx.r8.s64 + 15852;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r11,r31,1712
	ctx.r11.s64 = ctx.r31.s64 + 1712;
	// stw r8,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r8.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8312e7dc
	ctx.lr = 0x82719538;
	sub_8312E7DC(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r30.u32);
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r11,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r11.u32);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r30,1756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1756, ctx.r30.u32);
	// addi r29,r31,620
	ctx.r29.s64 = ctx.r31.s64 + 620;
	// stw r30,1760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1760, ctx.r30.u32);
	// addi r3,r9,10116
	ctx.r3.s64 = ctx.r9.s64 + 10116;
	// stw r30,1764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1764, ctx.r30.u32);
	// addi r28,r1,112
	ctx.r28.s64 = ctx.r1.s64 + 112;
	// stw r30,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r30.u32);
	// stw r11,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r11.u32);
	// stw r30,1776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1776, ctx.r30.u32);
	// stw r30,1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1780, ctx.r30.u32);
	// stw r30,1784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1784, ctx.r30.u32);
	// stw r30,1788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1788, ctx.r30.u32);
	// stw r30,1768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1768, ctx.r30.u32);
	// stw r11,1796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1796, ctx.r11.u32);
	// stw r30,1800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1800, ctx.r30.u32);
	// stw r30,1804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1804, ctx.r30.u32);
	// stw r30,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r30.u32);
	// stw r30,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r30.u32);
	// stw r30,1792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1792, ctx.r30.u32);
	// stw r11,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r11.u32);
	// stw r30,1824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1824, ctx.r30.u32);
	// stw r30,1828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1828, ctx.r30.u32);
	// stw r30,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r30.u32);
	// stw r30,1836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1836, ctx.r30.u32);
	// stw r30,1816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1816, ctx.r30.u32);
	// stw r10,1844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1844, ctx.r10.u32);
	// stw r30,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r30.u32);
	// stw r30,1852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1852, ctx.r30.u32);
	// stw r30,1856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1856, ctx.r30.u32);
	// stw r30,1860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1860, ctx.r30.u32);
	// stw r30,1840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1840, ctx.r30.u32);
	// stw r11,1868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1868, ctx.r11.u32);
	// stw r30,1872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1872, ctx.r30.u32);
	// stw r30,1876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1876, ctx.r30.u32);
	// stw r30,1880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1880, ctx.r30.u32);
	// stw r30,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r30.u32);
	// stw r30,1864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1864, ctx.r30.u32);
	// stw r11,1892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1892, ctx.r11.u32);
	// stw r30,1896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1896, ctx.r30.u32);
	// stw r30,1900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1900, ctx.r30.u32);
	// stw r30,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r30.u32);
	// stw r30,1908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1908, ctx.r30.u32);
	// stw r30,1888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1888, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// bl 0x82816528
	ctx.lr = 0x8271960C;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x82719648;
	sub_828250B0(ctx, base);
	// bl 0x82415248
	ctx.lr = 0x8271964C;
	sub_82415248(ctx, base);
	// stw r3,1920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1920, ctx.r3.u32);
	// stw r30,1924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1924, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r30.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82719668"))) PPC_WEAK_FUNC(sub_82719668);
PPC_FUNC_IMPL(__imp__sub_82719668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// addi r11,r11,-22944
	ctx.r11.s64 = ctx.r11.s64 + -22944;
	// addi r10,r10,-21888
	ctx.r10.s64 = ctx.r10.s64 + -21888;
	// addi r9,r9,-21836
	ctx.r9.s64 = ctx.r9.s64 + -21836;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r3,r31,1888
	ctx.r3.s64 = ctx.r31.s64 + 1888;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x8239d768
	ctx.lr = 0x827196A8;
	sub_8239D768(ctx, base);
	// addi r3,r31,1864
	ctx.r3.s64 = ctx.r31.s64 + 1864;
	// bl 0x8239d768
	ctx.lr = 0x827196B0;
	sub_8239D768(ctx, base);
	// addi r3,r31,1840
	ctx.r3.s64 = ctx.r31.s64 + 1840;
	// bl 0x82400988
	ctx.lr = 0x827196B8;
	sub_82400988(ctx, base);
	// addi r3,r31,1816
	ctx.r3.s64 = ctx.r31.s64 + 1816;
	// bl 0x8239d768
	ctx.lr = 0x827196C0;
	sub_8239D768(ctx, base);
	// addi r3,r31,1792
	ctx.r3.s64 = ctx.r31.s64 + 1792;
	// bl 0x8239d768
	ctx.lr = 0x827196C8;
	sub_8239D768(ctx, base);
	// addi r3,r31,1768
	ctx.r3.s64 = ctx.r31.s64 + 1768;
	// bl 0x8239d768
	ctx.lr = 0x827196D0;
	sub_8239D768(ctx, base);
	// addi r3,r31,1744
	ctx.r3.s64 = ctx.r31.s64 + 1744;
	// bl 0x8239d768
	ctx.lr = 0x827196D8;
	sub_8239D768(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-29556
	ctx.r11.s64 = ctx.r11.s64 + -29556;
	// stw r11,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r11.u32);
	// bl 0x828b5b88
	ctx.lr = 0x827196EC;
	sub_828B5B88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82719700"))) PPC_WEAK_FUNC(sub_82719700);
PPC_FUNC_IMPL(__imp__sub_82719700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82719708;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x828a6d60
	ctx.lr = 0x8271971C;
	sub_828A6D60(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// bl 0x82816528
	ctx.lr = 0x82719728;
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
	ctx.lr = 0x8271973C;
	sub_82846E98(ctx, base);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r10,268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82719780
	if (!ctx.cr6.gt) goto loc_82719780;
	// addi r27,r26,1864
	ctx.r27.s64 = ctx.r26.s64 + 1864;
loc_82719760:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82410060
	ctx.lr = 0x8271976C;
	sub_82410060(ctx, base);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82719760
	if (ctx.cr6.lt) goto loc_82719760;
loc_82719780:
	// lwz r11,1856(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1856);
	// addi r25,r26,1840
	ctx.r25.s64 = ctx.r26.s64 + 1840;
	// lwz r27,276(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827197bc
	if (!ctx.cr6.gt) goto loc_827197BC;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_8271979C:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82333960
	ctx.lr = 0x827197A8;
	sub_82333960(ctx, base);
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8271979c
	if (ctx.cr6.lt) goto loc_8271979C;
loc_827197BC:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// stw r24,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r24.u32);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x827197e0
	if (ctx.cr6.eq) goto loc_827197E0;
	// stw r27,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82332c38
	ctx.lr = 0x827197E0;
	sub_82332C38(ctx, base);
loc_827197E0:
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82719838
	if (!ctx.cr6.gt) goto loc_82719838;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// ble cr6,0x82719838
	if (!ctx.cr6.gt) goto loc_82719838;
loc_82719800:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82414568
	ctx.lr = 0x82719810;
	sub_82414568(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x824152a0
	ctx.lr = 0x8271981C;
	sub_824152A0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x82719824;
	sub_82333960(ctx, base);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82719800
	if (ctx.cr6.lt) goto loc_82719800;
loc_82719838:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82719874
	if (!ctx.cr6.gt) goto loc_82719874;
	// addi r27,r26,1744
	ctx.r27.s64 = ctx.r26.s64 + 1744;
loc_82719854:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82410060
	ctx.lr = 0x82719860;
	sub_82410060(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82719854
	if (ctx.cr6.lt) goto loc_82719854;
loc_82719874:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r10,208(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x827198b0
	if (!ctx.cr6.gt) goto loc_827198B0;
	// addi r27,r26,1768
	ctx.r27.s64 = ctx.r26.s64 + 1768;
loc_82719890:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82410060
	ctx.lr = 0x8271989C;
	sub_82410060(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82719890
	if (ctx.cr6.lt) goto loc_82719890;
loc_827198B0:
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r10,216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x827198ec
	if (!ctx.cr6.gt) goto loc_827198EC;
	// addi r27,r26,1792
	ctx.r27.s64 = ctx.r26.s64 + 1792;
loc_827198CC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82410060
	ctx.lr = 0x827198D8;
	sub_82410060(ctx, base);
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827198cc
	if (ctx.cr6.lt) goto loc_827198CC;
loc_827198EC:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r10,224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82719928
	if (!ctx.cr6.gt) goto loc_82719928;
	// addi r27,r26,1816
	ctx.r27.s64 = ctx.r26.s64 + 1816;
loc_82719908:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82410060
	ctx.lr = 0x82719914;
	sub_82410060(ctx, base);
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82719908
	if (ctx.cr6.lt) goto loc_82719908;
loc_82719928:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82719964
	if (!ctx.cr6.gt) goto loc_82719964;
	// addi r28,r26,1888
	ctx.r28.s64 = ctx.r26.s64 + 1888;
loc_82719944:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82410060
	ctx.lr = 0x82719950;
	sub_82410060(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82719944
	if (ctx.cr6.lt) goto loc_82719944;
loc_82719964:
	// lwz r10,1904(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1904);
	// lwz r3,1920(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1920);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,1924(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1924, ctx.r10.u32);
	// beq cr6,0x827199cc
	if (ctx.cr6.eq) goto loc_827199CC;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addi r5,r26,1864
	ctx.r5.s64 = ctx.r26.s64 + 1864;
	// lwz r30,260(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r29,256(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r8,r26,1816
	ctx.r8.s64 = ctx.r26.s64 + 1816;
	// lwz r28,252(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// addi r7,r26,1792
	ctx.r7.s64 = ctx.r26.s64 + 1792;
	// lwz r31,248(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r5,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// addi r5,r26,1768
	ctx.r5.s64 = ctx.r26.s64 + 1768;
	// addi r4,r26,1744
	ctx.r4.s64 = ctx.r26.s64 + 1744;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82413278
	ctx.lr = 0x827199CC;
	sub_82413278(ctx, base);
loc_827199CC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827199D8"))) PPC_WEAK_FUNC(sub_827199D8);
PPC_FUNC_IMPL(__imp__sub_827199D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827199E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x829bcd88
	ctx.lr = 0x827199F4;
	sub_829BCD88(ctx, base);
	// lwz r4,240(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82719a3c
	if (ctx.cr6.eq) goto loc_82719A3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82846fb0
	ctx.lr = 0x82719A08;
	sub_82846FB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82719a3c
	if (ctx.cr0.eq) goto loc_82719A3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82719A20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82416348
	ctx.lr = 0x82719A24;
	sub_82416348(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82719a3c
	if (ctx.cr0.eq) goto loc_82719A3C;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r10,1920(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1920);
	// stw r11,1912(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1912, ctx.r11.u32);
	// stw r11,1456(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1456, ctx.r11.u32);
loc_82719A3C:
	// lwz r4,244(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82719a7c
	if (ctx.cr6.eq) goto loc_82719A7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82846fb0
	ctx.lr = 0x82719A50;
	sub_82846FB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82719a7c
	if (ctx.cr0.eq) goto loc_82719A7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82719A68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82416348
	ctx.lr = 0x82719A6C;
	sub_82416348(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82719a7c
	if (ctx.cr0.eq) goto loc_82719A7C;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r11,1916(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1916, ctx.r11.u32);
loc_82719A7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82719A88"))) PPC_WEAK_FUNC(sub_82719A88);
PPC_FUNC_IMPL(__imp__sub_82719A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82719A90;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// bl 0x828a74e8
	ctx.lr = 0x82719AA8;
	sub_828A74E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82719ab8
	if (!ctx.cr0.eq) goto loc_82719AB8;
loc_82719AB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82719ca4
	goto loc_82719CA4;
loc_82719AB8:
	// lis r22,-31949
	ctx.r22.s64 = -2093809664;
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82719ab0
	if (!ctx.cr6.eq) goto loc_82719AB0;
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x82719ab0
	if (!ctx.cr6.lt) goto loc_82719AB0;
	// lwz r11,1928(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1928);
	// lwz r10,1924(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1924);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82719bb0
	if (!ctx.cr6.lt) goto loc_82719BB0;
	// lwz r27,1904(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1904);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82719bb0
	if (!ctx.cr6.gt) goto loc_82719BB0;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// addi r26,r11,-15060
	ctx.r26.s64 = ctx.r11.s64 + -15060;
loc_82719B08:
	// lwz r11,1900(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1900);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x823928a0
	ctx.lr = 0x82719B20;
	sub_823928A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82719b58
	if (ctx.cr0.eq) goto loc_82719B58;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82719B3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82719b58
	if (ctx.cr0.eq) goto loc_82719B58;
	// lwz r11,1920(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1920);
	// lwz r11,1480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1480);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82719b70
	if (!ctx.cr6.eq) goto loc_82719B70;
loc_82719B58:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82719b08
	if (ctx.cr6.lt) goto loc_82719B08;
	// b 0x82719bb0
	goto loc_82719BB0;
loc_82719B70:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82719b80
	if (ctx.cr6.eq) goto loc_82719B80;
	// lwz r9,80(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 80);
	// b 0x82719b84
	goto loc_82719B84;
loc_82719B80:
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_82719B84:
	// lwz r10,1920(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1920);
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// li r24,1
	ctx.r24.s64 = 1;
	// lwz r8,1480(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1480);
	// stwx r23,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r23.u32);
	// lwz r10,1480(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1480);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,1928(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1928);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1928(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1928, ctx.r11.u32);
loc_82719BB0:
	// lwz r11,1928(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1928);
	// lwz r10,1924(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1924);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82719ca0
	if (!ctx.cr6.eq) goto loc_82719CA0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82719ca0
	if (ctx.cr6.eq) goto loc_82719CA0;
	// lwz r3,1916(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1916);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82719c7c
	if (ctx.cr6.eq) goto loc_82719C7C;
	// bl 0x829c35d8
	ctx.lr = 0x82719BD8;
	sub_829C35D8(ctx, base);
	// bl 0x8249b980
	ctx.lr = 0x82719BDC;
	sub_8249B980(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82719ca0
	if (ctx.cr0.eq) goto loc_82719CA0;
	// lwz r11,1920(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82719ca0
	if (ctx.cr6.eq) goto loc_82719CA0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x82719BF8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82719c68
	if (ctx.cr0.eq) goto loc_82719C68;
	// lwz r11,1920(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82719c14
	if (ctx.cr6.eq) goto loc_82719C14;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82719c18
	goto loc_82719C18;
loc_82719C14:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_82719C18:
	// lwz r11,1920(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82719c2c
	if (ctx.cr6.eq) goto loc_82719C2C;
	// lwz r30,80(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82719c30
	goto loc_82719C30;
loc_82719C2C:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82719C30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x82719C38;
	sub_82833180(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r11,r11,-21712
	ctx.r11.s64 = ctx.r11.s64 + -21712;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r23,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r23.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// b 0x82719c6c
	goto loc_82719C6C;
loc_82719C68:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_82719C6C:
	// lwz r11,13024(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82719C78;
	sub_82833A30(ctx, base);
	// b 0x82719ca0
	goto loc_82719CA0;
loc_82719C7C:
	// lwz r11,1920(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1920);
	// lwz r10,1464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82719c94
	if (ctx.cr6.eq) goto loc_82719C94;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82719ca0
	if (!ctx.cr6.eq) goto loc_82719CA0;
loc_82719C94:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r23,1460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1460, ctx.r23.u32);
	// stw r10,1464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1464, ctx.r10.u32);
loc_82719CA0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82719CA4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82719CB0"))) PPC_WEAK_FUNC(sub_82719CB0);
PPC_FUNC_IMPL(__imp__sub_82719CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82719CB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82719cd4
	if (ctx.cr6.eq) goto loc_82719CD4;
	// lwz r25,80(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// b 0x82719cd8
	goto loc_82719CD8;
loc_82719CD4:
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_82719CD8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x828a7700
	ctx.lr = 0x82719CE0;
	sub_828A7700(ctx, base);
	// lwz r11,1920(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1920);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lwz r9,1484(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1484);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82719e5c
	if (!ctx.cr6.gt) goto loc_82719E5C;
	// lwz r10,1480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1480);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82719CFC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r25
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x82719d1c
	if (ctx.cr6.eq) goto loc_82719D1C;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82719cfc
	if (ctx.cr6.lt) goto loc_82719CFC;
	// b 0x82719e5c
	goto loc_82719E5C;
loc_82719D1C:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x82719e5c
	if (ctx.cr6.eq) goto loc_82719E5C;
	// lwz r9,1532(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1532);
	// lwz r10,1464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x82719d40
	if (ctx.cr6.gt) goto loc_82719D40;
	// lwz r9,1448(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1448);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82719d5c
	if (ctx.cr6.eq) goto loc_82719D5C;
loc_82719D40:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82719d50
	if (ctx.cr6.eq) goto loc_82719D50;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82719d5c
	if (!ctx.cr6.eq) goto loc_82719D5C;
loc_82719D50:
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r26,1460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1460, ctx.r26.u32);
	// stw r10,1464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1464, ctx.r10.u32);
loc_82719D5C:
	// lwz r3,1916(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1916);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82719e10
	if (ctx.cr6.eq) goto loc_82719E10;
	// bl 0x829c35d8
	ctx.lr = 0x82719D6C;
	sub_829C35D8(ctx, base);
	// bl 0x8249b980
	ctx.lr = 0x82719D70;
	sub_8249B980(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82719e10
	if (ctx.cr0.eq) goto loc_82719E10;
	// lwz r11,1920(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82719e10
	if (ctx.cr6.eq) goto loc_82719E10;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x82719D8C;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82719dfc
	if (ctx.cr0.eq) goto loc_82719DFC;
	// lwz r11,1920(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82719da8
	if (ctx.cr6.eq) goto loc_82719DA8;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82719dac
	goto loc_82719DAC;
loc_82719DA8:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82719DAC:
	// lwz r11,1920(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82719dc0
	if (ctx.cr6.eq) goto loc_82719DC0;
	// lwz r30,80(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82719dc4
	goto loc_82719DC4;
loc_82719DC0:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82719DC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x82719DCC;
	sub_82833180(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r11,r11,-21608
	ctx.r11.s64 = ctx.r11.s64 + -21608;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// b 0x82719e00
	goto loc_82719E00;
loc_82719DFC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82719E00:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82719E10;
	sub_82833A30(ctx, base);
loc_82719E10:
	// lwz r31,1920(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1920);
	// rlwinm r30,r28,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,1480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r25,r4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82719e50
	if (!ctx.cr6.eq) goto loc_82719E50;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82414040
	ctx.lr = 0x82719E38;
	sub_82414040(ctx, base);
	// lwz r10,1480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// li r11,1
	ctx.r11.s64 = 1;
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u32);
	// lwz r11,1480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
loc_82719E50:
	// lwz r11,1928(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1928);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1928(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1928, ctx.r11.u32);
loc_82719E5C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82719E68"))) PPC_WEAK_FUNC(sub_82719E68);
PPC_FUNC_IMPL(__imp__sub_82719E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82719E70;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,1928(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1928);
	// lwz r10,1924(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1924);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82719fd0
	if (!ctx.cr6.lt) goto loc_82719FD0;
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r9,664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// bl 0x82817bb8
	ctx.lr = 0x82719EB4;
	sub_82817BB8(ctx, base);
	// lwz r23,1904(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1904);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// ble cr6,0x82719fd0
	if (!ctx.cr6.gt) goto loc_82719FD0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// lis r24,-31949
	ctx.r24.s64 = -2093809664;
	// lfs f31,912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f31.f64 = double(temp.f32);
loc_82719EDC:
	// lwz r11,1920(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1920);
	// lwz r11,1480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1480);
	// lwzx r11,r11,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82719fbc
	if (ctx.cr6.eq) goto loc_82719FBC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r26,1900(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1900);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82719F08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r11,r28,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82719fbc
	if (ctx.cr6.eq) goto loc_82719FBC;
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f10,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f10.f64 = double(temp.f32);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lwz r4,1900(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1900);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lfs f9,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f8,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f8.f64 = double(temp.f32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,13024(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f0,f9,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f0,f8,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwzx r4,r28,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r4.u32);
	// bl 0x828250b0
	ctx.lr = 0x82719FBC;
	sub_828250B0(ctx, base);
loc_82719FBC:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r23
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82719edc
	if (ctx.cr6.lt) goto loc_82719EDC;
loc_82719FD0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82719FE0"))) PPC_WEAK_FUNC(sub_82719FE0);
PPC_FUNC_IMPL(__imp__sub_82719FE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82719498
	sub_82719498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82719FE8"))) PPC_WEAK_FUNC(sub_82719FE8);
PPC_FUNC_IMPL(__imp__sub_82719FE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82719338
	sub_82719338(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82719FF0"))) PPC_WEAK_FUNC(sub_82719FF0);
PPC_FUNC_IMPL(__imp__sub_82719FF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82719498
	sub_82719498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82719FF8"))) PPC_WEAK_FUNC(sub_82719FF8);
PPC_FUNC_IMPL(__imp__sub_82719FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8271a048
	ctx.lr = 0x8271A018;
	sub_8271A048(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8271a02c
	if (ctx.cr6.eq) goto loc_8271A02C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x8271A02C;
	sub_82333B08(ctx, base);
loc_8271A02C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271A048"))) PPC_WEAK_FUNC(sub_8271A048);
PPC_FUNC_IMPL(__imp__sub_8271A048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,23516
	ctx.r31.s64 = ctx.r11.s64 + 23516;
	// lwz r11,-19428(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19428);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8271a090
	if (!ctx.cr0.eq) goto loc_8271A090;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-21528
	ctx.r9.s64 = ctx.r9.s64 + -21528;
	// stw r11,-19428(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19428, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,30264
	ctx.r3.s64 = ctx.r11.s64 + 30264;
	// bl 0x82a4c758
	ctx.lr = 0x8271A090;
	sub_82A4C758(ctx, base);
loc_8271A090:
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

__attribute__((alias("__imp__sub_8271A0A8"))) PPC_WEAK_FUNC(sub_8271A0A8);
PPC_FUNC_IMPL(__imp__sub_8271A0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,23512(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23512);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8271a0e8
	if (!ctx.cr0.eq) goto loc_8271A0E8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r11,23512(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23512, ctx.r11.u32);
	// addi r3,r9,-21756
	ctx.r3.s64 = ctx.r9.s64 + -21756;
	// bl 0x82816528
	ctx.lr = 0x8271A0E0;
	sub_82816528(ctx, base);
	// stw r3,23508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23508, ctx.r3.u32);
	// b 0x8271a0ec
	goto loc_8271A0EC;
loc_8271A0E8:
	// lwz r3,23508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23508);
loc_8271A0EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271A100"))) PPC_WEAK_FUNC(sub_8271A100);
PPC_FUNC_IMPL(__imp__sub_8271A100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8271a048
	ctx.lr = 0x8271A120;
	sub_8271A048(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271A134;
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

__attribute__((alias("__imp__sub_8271A150"))) PPC_WEAK_FUNC(sub_8271A150);
PPC_FUNC_IMPL(__imp__sub_8271A150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8271a188
	if (ctx.cr6.eq) goto loc_8271A188;
	// bl 0x8271a048
	ctx.lr = 0x8271A178;
	sub_8271A048(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8271a188
	if (!ctx.cr6.eq) goto loc_8271A188;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8271a194
	goto loc_8271A194;
loc_8271A188:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x8271A194;
	sub_82333C70(ctx, base);
loc_8271A194:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271A1B0"))) PPC_WEAK_FUNC(sub_8271A1B0);
PPC_FUNC_IMPL(__imp__sub_8271A1B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8271a048
	sub_8271A048(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271A1B8"))) PPC_WEAK_FUNC(sub_8271A1B8);
PPC_FUNC_IMPL(__imp__sub_8271A1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8271A1D4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271a234
	if (ctx.cr0.eq) goto loc_8271A234;
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
	// addi r9,r9,-21608
	ctx.r9.s64 = ctx.r9.s64 + -21608;
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
	// b 0x8271a238
	goto loc_8271A238;
loc_8271A234:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8271A238:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271A250"))) PPC_WEAK_FUNC(sub_8271A250);
PPC_FUNC_IMPL(__imp__sub_8271A250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,-21756
	ctx.r3.s64 = ctx.r11.s64 + -21756;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271A260"))) PPC_WEAK_FUNC(sub_8271A260);
PPC_FUNC_IMPL(__imp__sub_8271A260) {
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
	// bl 0x82415248
	ctx.lr = 0x8271A274;
	sub_82415248(ctx, base);
	// lwz r11,1464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1464);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8271a28c
	if (!ctx.cr6.eq) goto loc_8271A28C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1424, ctx.r11.u32);
	// bl 0x82413b78
	ctx.lr = 0x8271A28C;
	sub_82413B78(ctx, base);
loc_8271A28C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271A2A0"))) PPC_WEAK_FUNC(sub_8271A2A0);
PPC_FUNC_IMPL(__imp__sub_8271A2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8271a2f0
	ctx.lr = 0x8271A2C0;
	sub_8271A2F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8271a2d4
	if (ctx.cr6.eq) goto loc_8271A2D4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x8271A2D4;
	sub_82333B08(ctx, base);
loc_8271A2D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271A2F0"))) PPC_WEAK_FUNC(sub_8271A2F0);
PPC_FUNC_IMPL(__imp__sub_8271A2F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,23504
	ctx.r31.s64 = ctx.r11.s64 + 23504;
	// lwz r11,-19432(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19432);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8271a338
	if (!ctx.cr0.eq) goto loc_8271A338;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-21632
	ctx.r9.s64 = ctx.r9.s64 + -21632;
	// stw r11,-19432(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19432, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,30288
	ctx.r3.s64 = ctx.r11.s64 + 30288;
	// bl 0x82a4c758
	ctx.lr = 0x8271A338;
	sub_82A4C758(ctx, base);
loc_8271A338:
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

__attribute__((alias("__imp__sub_8271A350"))) PPC_WEAK_FUNC(sub_8271A350);
PPC_FUNC_IMPL(__imp__sub_8271A350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,23500(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23500);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8271a390
	if (!ctx.cr0.eq) goto loc_8271A390;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r11,23500(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23500, ctx.r11.u32);
	// addi r3,r9,-21812
	ctx.r3.s64 = ctx.r9.s64 + -21812;
	// bl 0x82816528
	ctx.lr = 0x8271A388;
	sub_82816528(ctx, base);
	// stw r3,23496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23496, ctx.r3.u32);
	// b 0x8271a394
	goto loc_8271A394;
loc_8271A390:
	// lwz r3,23496(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23496);
loc_8271A394:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271A3A8"))) PPC_WEAK_FUNC(sub_8271A3A8);
PPC_FUNC_IMPL(__imp__sub_8271A3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8271a2f0
	ctx.lr = 0x8271A3C8;
	sub_8271A2F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271A3DC;
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

__attribute__((alias("__imp__sub_8271A3F8"))) PPC_WEAK_FUNC(sub_8271A3F8);
PPC_FUNC_IMPL(__imp__sub_8271A3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8271a430
	if (ctx.cr6.eq) goto loc_8271A430;
	// bl 0x8271a2f0
	ctx.lr = 0x8271A420;
	sub_8271A2F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8271a430
	if (!ctx.cr6.eq) goto loc_8271A430;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8271a43c
	goto loc_8271A43C;
loc_8271A430:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x8271A43C;
	sub_82333C70(ctx, base);
loc_8271A43C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271A458"))) PPC_WEAK_FUNC(sub_8271A458);
PPC_FUNC_IMPL(__imp__sub_8271A458) {
	PPC_FUNC_PROLOGUE();
	// b 0x8271a2f0
	sub_8271A2F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271A460"))) PPC_WEAK_FUNC(sub_8271A460);
PPC_FUNC_IMPL(__imp__sub_8271A460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8271A47C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271a4dc
	if (ctx.cr0.eq) goto loc_8271A4DC;
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
	// addi r9,r9,-21712
	ctx.r9.s64 = ctx.r9.s64 + -21712;
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
	// b 0x8271a4e0
	goto loc_8271A4E0;
loc_8271A4DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8271A4E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271A4F8"))) PPC_WEAK_FUNC(sub_8271A4F8);
PPC_FUNC_IMPL(__imp__sub_8271A4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,-21812
	ctx.r3.s64 = ctx.r11.s64 + -21812;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271A508"))) PPC_WEAK_FUNC(sub_8271A508);
PPC_FUNC_IMPL(__imp__sub_8271A508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82415248
	ctx.lr = 0x8271A528;
	sub_82415248(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82413b78
	ctx.lr = 0x8271A530;
	sub_82413B78(ctx, base);
	// lwz r11,1464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271a550
	if (ctx.cr6.eq) goto loc_8271A550;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8271a550
	if (ctx.cr6.eq) goto loc_8271A550;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8271a55c
	if (!ctx.cr6.eq) goto loc_8271A55C;
loc_8271A550:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r10,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r10.u32);
	// stw r11,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r11.u32);
loc_8271A55C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271A578"))) PPC_WEAK_FUNC(sub_8271A578);
PPC_FUNC_IMPL(__imp__sub_8271A578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8271A580;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x828a6d60
	ctx.lr = 0x8271A594;
	sub_828A6D60(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// bl 0x82816528
	ctx.lr = 0x8271A5A0;
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
	ctx.lr = 0x8271A5B4;
	sub_82846E98(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// li r30,0
	ctx.r30.s64 = 0;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8271a5f8
	if (!ctx.cr6.gt) goto loc_8271A5F8;
	// addi r28,r28,1728
	ctx.r28.s64 = ctx.r28.s64 + 1728;
loc_8271A5D0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8271A5E4;
	sub_82410060(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8271a5d0
	if (ctx.cr6.lt) goto loc_8271A5D0;
loc_8271A5F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271A600"))) PPC_WEAK_FUNC(sub_8271A600);
PPC_FUNC_IMPL(__imp__sub_8271A600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8271A608;
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
	// lwz r3,1712(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8271a6ac
	if (ctx.cr6.eq) goto loc_8271A6AC;
	// lwz r11,1492(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271a6ac
	if (ctx.cr6.eq) goto loc_8271A6AC;
	// lwz r11,1500(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1500);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8271a64c
	if (!ctx.cr6.eq) goto loc_8271A64C;
	// lwz r11,1556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1556);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271a6ac
	if (ctx.cr6.eq) goto loc_8271A6AC;
loc_8271A64C:
	// lwz r9,1744(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8271a6ac
	if (!ctx.cr6.gt) goto loc_8271A6AC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8271A664:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8271a69c
	if (!ctx.cr6.eq) goto loc_8271A69C;
	// lwz r7,1740(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8271a684
	if (!ctx.cr6.eq) goto loc_8271A684;
	// li r8,1
	ctx.r8.s64 = 1;
loc_8271A684:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8271a664
	if (ctx.cr6.lt) goto loc_8271A664;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8271a6ac
	if (ctx.cr6.eq) goto loc_8271A6AC;
loc_8271A69C:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828ac078
	ctx.lr = 0x8271A6AC;
	sub_828AC078(ctx, base);
loc_8271A6AC:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c6178
	ctx.lr = 0x8271A6C0;
	sub_829C6178(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271A6C8"))) PPC_WEAK_FUNC(sub_8271A6C8);
PPC_FUNC_IMPL(__imp__sub_8271A6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8271A6D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r28,r31,1420
	ctx.r28.s64 = ctx.r31.s64 + 1420;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,1420(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// stb r11,1712(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1712, ctx.r11.u8);
	// stw r11,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271A6FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x8271a774
	if (ctx.cr0.lt) goto loc_8271A774;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_8271A70C:
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8271a768
	if (ctx.cr6.eq) goto loc_8271A768;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8271a768
	if (!ctx.cr6.eq) goto loc_8271A768;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271A740;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x829c62f0
	ctx.lr = 0x8271A750;
	sub_829C62F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x8271A758;
	sub_82333960(ctx, base);
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// addi r3,r31,1716
	ctx.r3.s64 = ctx.r31.s64 + 1716;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82410060
	ctx.lr = 0x8271A768;
	sub_82410060(ctx, base);
loc_8271A768:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// bge 0x8271a70c
	if (!ctx.cr0.lt) goto loc_8271A70C;
loc_8271A774:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271A788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271A790"))) PPC_WEAK_FUNC(sub_8271A790);
PPC_FUNC_IMPL(__imp__sub_8271A790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8271A798;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,1732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	// stb r28,1712(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1712, ctx.r28.u8);
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r28,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r28.u32);
	// blt 0x8271a808
	if (ctx.cr0.lt) goto loc_8271A808;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_8271A7BC:
	// lwz r11,1728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1728);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8271a7fc
	if (ctx.cr6.eq) goto loc_8271A7FC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x829c62f0
	ctx.lr = 0x8271A7D8;
	sub_829C62F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x8271A7E0;
	sub_82333960(ctx, base);
	// lwz r11,1728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1728);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271A7FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8271A7FC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// bge 0x8271a7bc
	if (!ctx.cr0.lt) goto loc_8271A7BC;
loc_8271A808:
	// lwz r11,1736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1736);
	// addi r3,r31,1716
	ctx.r3.s64 = ctx.r31.s64 + 1716;
	// stw r28,1732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1732, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271a82c
	if (ctx.cr6.eq) goto loc_8271A82C;
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x8271A82C;
	sub_82332C38(ctx, base);
loc_8271A82C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271A838"))) PPC_WEAK_FUNC(sub_8271A838);
PPC_FUNC_IMPL(__imp__sub_8271A838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// bl 0x828a74e8
	ctx.lr = 0x8271A85C;
	sub_828A74E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271a8a4
	if (ctx.cr0.eq) goto loc_8271A8A4;
	// lbz r11,1712(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1712);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8271a8a0
	if (ctx.cr0.eq) goto loc_8271A8A0;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8271a8a0
	if (!ctx.cr6.eq) goto loc_8271A8A0;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r30,1716
	ctx.r3.s64 = ctx.r30.s64 + 1716;
	// bl 0x82410060
	ctx.lr = 0x8271A888;
	sub_82410060(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271A8A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8271A8A0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8271A8A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271A8C0"))) PPC_WEAK_FUNC(sub_8271A8C0);
PPC_FUNC_IMPL(__imp__sub_8271A8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8271A8C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x828a7700
	ctx.lr = 0x8271A8D8;
	sub_828A7700(ctx, base);
	// lbz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1712);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8271a954
	if (ctx.cr0.eq) goto loc_8271A954;
	// lwz r9,1732(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	// addi r30,r31,1716
	ctx.r30.s64 = ctx.r31.s64 + 1716;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8271a918
	if (!ctx.cr6.gt) goto loc_8271A918;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
loc_8271A8FC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8271a95c
	if (ctx.cr6.eq) goto loc_8271A95C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8271a8fc
	if (ctx.cr6.lt) goto loc_8271A8FC;
loc_8271A918:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_8271A91C:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x8271a954
	if (ctx.cr6.eq) goto loc_8271A954;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271A93C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8271A954;
	sub_82332CA8(ctx, base);
loc_8271A954:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
loc_8271A95C:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x8271a91c
	goto loc_8271A91C;
}

__attribute__((alias("__imp__sub_8271A968"))) PPC_WEAK_FUNC(sub_8271A968);
PPC_FUNC_IMPL(__imp__sub_8271A968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,20940
	ctx.r3.s64 = ctx.r11.s64 + 20940;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271A978"))) PPC_WEAK_FUNC(sub_8271A978);
PPC_FUNC_IMPL(__imp__sub_8271A978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8271a9b0
	if (ctx.cr6.eq) goto loc_8271A9B0;
	// bl 0x82482718
	ctx.lr = 0x8271A9A0;
	sub_82482718(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8271a9b0
	if (!ctx.cr6.eq) goto loc_8271A9B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8271a9bc
	goto loc_8271A9BC;
loc_8271A9B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370018
	ctx.lr = 0x8271A9BC;
	sub_82370018(ctx, base);
loc_8271A9BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271A9D8"))) PPC_WEAK_FUNC(sub_8271A9D8);
PPC_FUNC_IMPL(__imp__sub_8271A9D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82482718
	sub_82482718(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271A9E0"))) PPC_WEAK_FUNC(sub_8271A9E0);
PPC_FUNC_IMPL(__imp__sub_8271A9E0) {
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
	// li r3,1744
	ctx.r3.s64 = 1744;
	// bl 0x82833108
	ctx.lr = 0x8271AA00;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8271aa80
	if (ctx.cr0.eq) goto loc_8271AA80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370118
	ctx.lr = 0x8271AA14;
	sub_82370118(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,-21448
	ctx.r11.s64 = ctx.r11.s64 + -21448;
	// addi r10,r10,-20392
	ctx.r10.s64 = ctx.r10.s64 + -20392;
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
	// lfs f0,1732(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1732);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1732(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1732, temp.u32);
	// lfs f0,1736(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1736);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1736(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1736, temp.u32);
	// lwz r11,1740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// stw r11,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r11.u32);
	// b 0x8271aa84
	goto loc_8271AA84;
loc_8271AA80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8271AA84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271AAA0"))) PPC_WEAK_FUNC(sub_8271AAA0);
PPC_FUNC_IMPL(__imp__sub_8271AAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82482718
	ctx.lr = 0x8271AAC0;
	sub_82482718(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8271aad0
	if (!ctx.cr6.eq) goto loc_8271AAD0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8271aae8
	goto loc_8271AAE8;
loc_8271AAD0:
	// bl 0x823bd878
	ctx.lr = 0x8271AAD4;
	sub_823BD878(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8271aae8
	if (ctx.cr6.eq) goto loc_8271AAE8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8236fc08
	ctx.lr = 0x8271AAE8;
	sub_8236FC08(ctx, base);
loc_8271AAE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271AB00"))) PPC_WEAK_FUNC(sub_8271AB00);
PPC_FUNC_IMPL(__imp__sub_8271AB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,20984
	ctx.r3.s64 = ctx.r11.s64 + 20984;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271AB10"))) PPC_WEAK_FUNC(sub_8271AB10);
PPC_FUNC_IMPL(__imp__sub_8271AB10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8271ab48
	if (ctx.cr6.eq) goto loc_8271AB48;
	// bl 0x82482a10
	ctx.lr = 0x8271AB38;
	sub_82482A10(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8271ab48
	if (!ctx.cr6.eq) goto loc_8271AB48;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8271ab54
	goto loc_8271AB54;
loc_8271AB48:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370018
	ctx.lr = 0x8271AB54;
	sub_82370018(ctx, base);
loc_8271AB54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271AB70"))) PPC_WEAK_FUNC(sub_8271AB70);
PPC_FUNC_IMPL(__imp__sub_8271AB70) {
	PPC_FUNC_PROLOGUE();
	// b 0x82482a10
	sub_82482A10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271AB78"))) PPC_WEAK_FUNC(sub_8271AB78);
PPC_FUNC_IMPL(__imp__sub_8271AB78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8271AB98;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8271abe8
	if (ctx.cr0.eq) goto loc_8271ABE8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370118
	ctx.lr = 0x8271ABAC;
	sub_82370118(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,-20336
	ctx.r11.s64 = ctx.r11.s64 + -20336;
	// addi r10,r10,-19280
	ctx.r10.s64 = ctx.r10.s64 + -19280;
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
	// lwz r11,1716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1716);
	// stw r11,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r11.u32);
	// b 0x8271abec
	goto loc_8271ABEC;
loc_8271ABE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8271ABEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271AC08"))) PPC_WEAK_FUNC(sub_8271AC08);
PPC_FUNC_IMPL(__imp__sub_8271AC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82482a10
	ctx.lr = 0x8271AC28;
	sub_82482A10(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8271ac38
	if (!ctx.cr6.eq) goto loc_8271AC38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8271ac50
	goto loc_8271AC50;
loc_8271AC38:
	// bl 0x823bd878
	ctx.lr = 0x8271AC3C;
	sub_823BD878(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8271ac50
	if (ctx.cr6.eq) goto loc_8271AC50;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8236fc08
	ctx.lr = 0x8271AC50;
	sub_8236FC08(ctx, base);
loc_8271AC50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271AC68"))) PPC_WEAK_FUNC(sub_8271AC68);
PPC_FUNC_IMPL(__imp__sub_8271AC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,7000
	ctx.r3.s64 = ctx.r11.s64 + 7000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271AC78"))) PPC_WEAK_FUNC(sub_8271AC78);
PPC_FUNC_IMPL(__imp__sub_8271AC78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8271acb0
	if (ctx.cr6.eq) goto loc_8271ACB0;
	// bl 0x82410320
	ctx.lr = 0x8271ACA0;
	sub_82410320(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8271acb0
	if (!ctx.cr6.eq) goto loc_8271ACB0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8271acbc
	goto loc_8271ACBC;
loc_8271ACB0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824713b0
	ctx.lr = 0x8271ACBC;
	sub_824713B0(ctx, base);
loc_8271ACBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271ACD8"))) PPC_WEAK_FUNC(sub_8271ACD8);
PPC_FUNC_IMPL(__imp__sub_8271ACD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82410320
	sub_82410320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271ACE0"))) PPC_WEAK_FUNC(sub_8271ACE0);
PPC_FUNC_IMPL(__imp__sub_8271ACE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8271AD00;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8271ad48
	if (ctx.cr0.eq) goto loc_8271AD48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370118
	ctx.lr = 0x8271AD14;
	sub_82370118(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,-19224
	ctx.r11.s64 = ctx.r11.s64 + -19224;
	// addi r10,r10,-18168
	ctx.r10.s64 = ctx.r10.s64 + -18168;
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
	// b 0x8271ad4c
	goto loc_8271AD4C;
loc_8271AD48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8271AD4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271AD68"))) PPC_WEAK_FUNC(sub_8271AD68);
PPC_FUNC_IMPL(__imp__sub_8271AD68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82410320
	ctx.lr = 0x8271AD88;
	sub_82410320(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8271ad9c
	if (ctx.cr6.eq) goto loc_8271AD9C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82471490
	ctx.lr = 0x8271AD9C;
	sub_82471490(ctx, base);
loc_8271AD9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271ADB8"))) PPC_WEAK_FUNC(sub_8271ADB8);
PPC_FUNC_IMPL(__imp__sub_8271ADB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-8716
	ctx.r3.s64 = ctx.r11.s64 + -8716;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271ADC8"))) PPC_WEAK_FUNC(sub_8271ADC8);
PPC_FUNC_IMPL(__imp__sub_8271ADC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8271ae00
	if (ctx.cr6.eq) goto loc_8271AE00;
	// bl 0x823be030
	ctx.lr = 0x8271ADF0;
	sub_823BE030(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8271ae00
	if (!ctx.cr6.eq) goto loc_8271AE00;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8271ae0c
	goto loc_8271AE0C;
loc_8271AE00:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370018
	ctx.lr = 0x8271AE0C;
	sub_82370018(ctx, base);
loc_8271AE0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271AE28"))) PPC_WEAK_FUNC(sub_8271AE28);
PPC_FUNC_IMPL(__imp__sub_8271AE28) {
	PPC_FUNC_PROLOGUE();
	// b 0x823be030
	sub_823BE030(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271AE30"))) PPC_WEAK_FUNC(sub_8271AE30);
PPC_FUNC_IMPL(__imp__sub_8271AE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8271AE50;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8271aea0
	if (ctx.cr0.eq) goto loc_8271AEA0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370118
	ctx.lr = 0x8271AE64;
	sub_82370118(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,-18112
	ctx.r11.s64 = ctx.r11.s64 + -18112;
	// addi r10,r10,-17056
	ctx.r10.s64 = ctx.r10.s64 + -17056;
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
	// lwz r11,1716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1716);
	// stw r11,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r11.u32);
	// b 0x8271aea4
	goto loc_8271AEA4;
loc_8271AEA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8271AEA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271AEC0"))) PPC_WEAK_FUNC(sub_8271AEC0);
PPC_FUNC_IMPL(__imp__sub_8271AEC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823be030
	ctx.lr = 0x8271AEE0;
	sub_823BE030(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8271aef0
	if (!ctx.cr6.eq) goto loc_8271AEF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8271af08
	goto loc_8271AF08;
loc_8271AEF0:
	// bl 0x823bd878
	ctx.lr = 0x8271AEF4;
	sub_823BD878(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8271af08
	if (ctx.cr6.eq) goto loc_8271AF08;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8236fc08
	ctx.lr = 0x8271AF08;
	sub_8236FC08(ctx, base);
loc_8271AF08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271AF20"))) PPC_WEAK_FUNC(sub_8271AF20);
PPC_FUNC_IMPL(__imp__sub_8271AF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828b5b88
	ctx.lr = 0x8271AF40;
	sub_828B5B88(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8271af50
	if (ctx.cr0.eq) goto loc_8271AF50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8271AF50;
	sub_82332DB8(ctx, base);
loc_8271AF50:
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

__attribute__((alias("__imp__sub_8271AF70"))) PPC_WEAK_FUNC(sub_8271AF70);
PPC_FUNC_IMPL(__imp__sub_8271AF70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8271AF78;
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
	// bl 0x824c5e60
	ctx.lr = 0x8271AF8C;
	sub_824C5E60(ctx, base);
	// lwz r11,248(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	// stw r11,1856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1856, ctx.r11.u32);
	// lwz r4,252(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 252);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8271afac
	if (ctx.cr6.eq) goto loc_8271AFAC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82846fb0
	ctx.lr = 0x8271AFA8;
	sub_82846FB0(ctx, base);
	// stw r3,1860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1860, ctx.r3.u32);
loc_8271AFAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271AFB8"))) PPC_WEAK_FUNC(sub_8271AFB8);
PPC_FUNC_IMPL(__imp__sub_8271AFB8) {
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
	// bl 0x824c5e60
	ctx.lr = 0x8271AFD8;
	sub_824C5E60(ctx, base);
	// lwz r11,248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// stw r11,1856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1856, ctx.r11.u32);
	// lwz r11,252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	// stw r11,1860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1860, ctx.r11.u32);
	// lwz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// stw r11,1864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1864, ctx.r11.u32);
	// lwz r11,260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// stw r11,1868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1868, ctx.r11.u32);
	// lfs f0,264(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1872(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1872, temp.u32);
	// lwz r11,268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// stw r11,1876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1876, ctx.r11.u32);
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// stw r11,1880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1880, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271B028"))) PPC_WEAK_FUNC(sub_8271B028);
PPC_FUNC_IMPL(__imp__sub_8271B028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8271B030;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x824c5ef0
	ctx.lr = 0x8271B044;
	sub_824C5EF0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// bl 0x82816528
	ctx.lr = 0x8271B050;
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
	ctx.lr = 0x8271B064;
	sub_82846E98(ctx, base);
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// add r29,r11,r26
	ctx.r29.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8271b0d0
	if (!ctx.cr6.gt) goto loc_8271B0D0;
	// addi r28,r24,1884
	ctx.r28.s64 = ctx.r24.s64 + 1884;
loc_8271B084:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82846fb0
	ctx.lr = 0x8271B090;
	sub_82846FB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x8271B0A8;
	sub_82332D50(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8271b0bc
	if (ctx.cr0.eq) goto loc_8271B0BC;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_8271B0BC:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8271b084
	if (ctx.cr6.lt) goto loc_8271B084;
loc_8271B0D0:
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r10,284(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// add r29,r11,r26
	ctx.r29.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8271b138
	if (!ctx.cr6.gt) goto loc_8271B138;
	// addi r28,r24,1908
	ctx.r28.s64 = ctx.r24.s64 + 1908;
loc_8271B0EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82846fb0
	ctx.lr = 0x8271B0F8;
	sub_82846FB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x8271B110;
	sub_82332D50(ctx, base);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8271b124
	if (ctx.cr0.eq) goto loc_8271B124;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_8271B124:
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8271b0ec
	if (ctx.cr6.lt) goto loc_8271B0EC;
loc_8271B138:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271B140"))) PPC_WEAK_FUNC(sub_8271B140);
PPC_FUNC_IMPL(__imp__sub_8271B140) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8271B150"))) PPC_WEAK_FUNC(sub_8271B150);
PPC_FUNC_IMPL(__imp__sub_8271B150) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,256(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 256);
	// stw r11,1840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1840, ctx.r11.u32);
	// lwz r11,268(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 268);
	// stw r11,1844(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1844, ctx.r11.u32);
	// b 0x828faa50
	sub_828FAA50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271B168"))) PPC_WEAK_FUNC(sub_8271B168);
PPC_FUNC_IMPL(__imp__sub_8271B168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8271B170;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x828faca8
	ctx.lr = 0x8271B180;
	sub_828FACA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271b20c
	if (ctx.cr0.eq) goto loc_8271B20C;
	// lwz r11,1896(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1896);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8271b208
	if (!ctx.cr6.eq) goto loc_8271B208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333a20
	ctx.lr = 0x8271B19C;
	sub_82333A20(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8271b208
	if (ctx.cr0.eq) goto loc_8271B208;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82833108
	ctx.lr = 0x8271B1AC;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8271b1f4
	if (ctx.cr0.eq) goto loc_8271B1F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,80(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r29,80(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// bl 0x82833180
	ctx.lr = 0x8271B1C4;
	sub_82833180(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r11,r11,-16952
	ctx.r11.s64 = ctx.r11.s64 + -16952;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// b 0x8271b1f8
	goto loc_8271B1F8;
loc_8271B1F4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8271B1F8:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8271B208;
	sub_82833A30(ctx, base);
loc_8271B208:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8271B20C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271B218"))) PPC_WEAK_FUNC(sub_8271B218);
PPC_FUNC_IMPL(__imp__sub_8271B218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8271B220;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x828fadd0
	ctx.lr = 0x8271B230;
	sub_828FADD0(ctx, base);
	// lwz r11,1896(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1896);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8271b2b0
	if (!ctx.cr6.eq) goto loc_8271B2B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333a20
	ctx.lr = 0x8271B244;
	sub_82333A20(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8271b2b0
	if (ctx.cr0.eq) goto loc_8271B2B0;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82833108
	ctx.lr = 0x8271B254;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8271b29c
	if (ctx.cr0.eq) goto loc_8271B29C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,80(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r29,80(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// bl 0x82833180
	ctx.lr = 0x8271B26C;
	sub_82833180(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r11,r11,-16952
	ctx.r11.s64 = ctx.r11.s64 + -16952;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// b 0x8271b2a0
	goto loc_8271B2A0;
loc_8271B29C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8271B2A0:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8271B2B0;
	sub_82833A30(ctx, base);
loc_8271B2B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271B2B8"))) PPC_WEAK_FUNC(sub_8271B2B8);
PPC_FUNC_IMPL(__imp__sub_8271B2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8271B2C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271b2f0
	if (ctx.cr6.eq) goto loc_8271B2F0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8271b2f0
	if (ctx.cr6.eq) goto loc_8271B2F0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8271b458
	if (!ctx.cr6.eq) goto loc_8271B458;
loc_8271B2F0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8271b314
	if (ctx.cr6.eq) goto loc_8271B314;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271B30C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8271b318
	goto loc_8271B318;
loc_8271B314:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8271B318:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8271b458
	if (ctx.cr6.eq) goto loc_8271B458;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271B334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271b350
	if (ctx.cr0.eq) goto loc_8271B350;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x828e0ad0
	ctx.lr = 0x8271B348;
	sub_828E0AD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271b458
	if (!ctx.cr0.eq) goto loc_8271B458;
loc_8271B350:
	// lwz r30,6148(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6148);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8271b458
	if (ctx.cr6.eq) goto loc_8271B458;
	// lwz r11,8500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8271b380
	if (ctx.cr6.eq) goto loc_8271B380;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8262bb80
	ctx.lr = 0x8271B378;
	sub_8262BB80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271b458
	if (!ctx.cr0.eq) goto loc_8271B458;
loc_8271B380:
	// lwz r11,3420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271b458
	if (ctx.cr6.eq) goto loc_8271B458;
	// lwz r11,1648(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1648);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271b454
	if (ctx.cr6.eq) goto loc_8271B454;
	// lwz r11,1392(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1392);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8271b454
	if (!ctx.cr6.gt) goto loc_8271B454;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8271B3AC:
	// lwz r10,13024(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r11,1388(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1388);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,560(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x8282b6b8
	ctx.lr = 0x8271B3C4;
	sub_8282B6B8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8271b3f0
	if (ctx.cr0.eq) goto loc_8271B3F0;
	// bl 0x82410e10
	ctx.lr = 0x8271B3D0;
	sub_82410E10(ctx, base);
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
	ctx.lr = 0x8271B3E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271b3f4
	if (!ctx.cr0.eq) goto loc_8271B3F4;
loc_8271B3F0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8271B3F4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8271b440
	if (ctx.cr6.eq) goto loc_8271B440;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271B420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271b440
	if (ctx.cr0.eq) goto loc_8271B440;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271B440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8271B440:
	// lwz r11,1392(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1392);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8271b3ac
	if (ctx.cr6.lt) goto loc_8271B3AC;
loc_8271B454:
	// stw r27,1724(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1724, ctx.r27.u32);
loc_8271B458:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271B460"))) PPC_WEAK_FUNC(sub_8271B460);
PPC_FUNC_IMPL(__imp__sub_8271B460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8271B468;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x829bcd88
	ctx.lr = 0x8271B478;
	sub_829BCD88(ctx, base);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r4,200(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8271B48C;
	sub_829B9720(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x8271B490;
	sub_82416348(ctx, base);
	// stw r3,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r3.u32);
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// stw r11,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r11.u32);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r4,212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8271B4AC;
	sub_829B9720(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8271b4dc
	if (ctx.cr0.eq) goto loc_8271B4DC;
	// bl 0x824120a8
	ctx.lr = 0x8271B4B8;
	sub_824120A8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271B4D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bne 0x8271b4e0
	if (!ctx.cr0.eq) goto loc_8271B4E0;
loc_8271B4DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8271B4E0:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r11.u32);
	// stw r10,1684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1684, ctx.r10.u32);
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stw r11,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271B500"))) PPC_WEAK_FUNC(sub_8271B500);
PPC_FUNC_IMPL(__imp__sub_8271B500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,1732(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1732);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 148, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271B518"))) PPC_WEAK_FUNC(sub_8271B518);
PPC_FUNC_IMPL(__imp__sub_8271B518) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x828a74e8
	ctx.lr = 0x8271B538;
	sub_828A74E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271b5d4
	if (ctx.cr0.eq) goto loc_8271B5D4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8271b564
	if (ctx.cr6.eq) goto loc_8271B564;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271B55C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8271b568
	goto loc_8271B568;
loc_8271B564:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8271B568:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8271b5a0
	if (ctx.cr6.eq) goto loc_8271B5A0;
	// lwz r11,960(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 960);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8271b598
	if (ctx.cr6.lt) goto loc_8271B598;
	// lwz r11,1740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271b598
	if (ctx.cr6.eq) goto loc_8271B598;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,6220(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6220, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,6224(r4)
	PPC_STORE_U32(ctx.r4.u32 + 6224, ctx.r11.u32);
loc_8271B598:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8271b8e0
	ctx.lr = 0x8271B5A0;
	sub_8271B8E0(ctx, base);
loc_8271B5A0:
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,0
	ctx.r10.s64 = ctx.r10.s64 + 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// lfs f1,-12104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8271ccf8
	ctx.lr = 0x8271B5D0;
	sub_8271CCF8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8271B5D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271B5F0"))) PPC_WEAK_FUNC(sub_8271B5F0);
PPC_FUNC_IMPL(__imp__sub_8271B5F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8271B5F8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8271b630
	if (ctx.cr6.eq) goto loc_8271B630;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271B628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8271b634
	goto loc_8271B634;
loc_8271B630:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8271B634:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8271b78c
	if (ctx.cr6.eq) goto loc_8271B78C;
	// lwz r29,6148(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6148);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8271b78c
	if (ctx.cr6.eq) goto loc_8271B78C;
	// lwz r11,3420(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271b6e4
	if (ctx.cr6.eq) goto loc_8271B6E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x828e0ad0
	ctx.lr = 0x8271B660;
	sub_828E0AD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271b684
	if (ctx.cr0.eq) goto loc_8271B684;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271B67C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271b6cc
	if (!ctx.cr0.eq) goto loc_8271B6CC;
loc_8271B684:
	// lwz r11,8500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8271b6a8
	if (ctx.cr6.eq) goto loc_8271B6A8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8262bb80
	ctx.lr = 0x8271B6A0;
	sub_8262BB80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271b6cc
	if (!ctx.cr0.eq) goto loc_8271B6CC;
loc_8271B6A8:
	// lwz r11,1740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271b6c0
	if (ctx.cr6.eq) goto loc_8271B6C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8271bd60
	ctx.lr = 0x8271B6BC;
	sub_8271BD60(ctx, base);
	// b 0x8271b6c4
	goto loc_8271B6C4;
loc_8271B6C0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8271B6C4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271b78c
	if (!ctx.cr6.eq) goto loc_8271B78C;
loc_8271B6CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8263f6b8
	ctx.lr = 0x8271B6D4;
	sub_8263F6B8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1736(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1736, temp.u32);
	// b 0x8271b78c
	goto loc_8271B78C;
loc_8271B6E4:
	// lfs f0,1736(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1736);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fadds f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// stfs f13,1736(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1736, temp.u32);
	// lfs f0,-27300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8271b78c
	if (ctx.cr6.lt) goto loc_8271B78C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1736(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1736, temp.u32);
	// bl 0x828e0ad0
	ctx.lr = 0x8271B718;
	sub_828E0AD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271b73c
	if (ctx.cr0.eq) goto loc_8271B73C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271B734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271b78c
	if (!ctx.cr0.eq) goto loc_8271B78C;
loc_8271B73C:
	// lwz r11,8500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8271b760
	if (ctx.cr6.eq) goto loc_8271B760;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8262bb80
	ctx.lr = 0x8271B758;
	sub_8262BB80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271b78c
	if (!ctx.cr0.eq) goto loc_8271B78C;
loc_8271B760:
	// lwz r11,1740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271b778
	if (ctx.cr6.eq) goto loc_8271B778;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8271bd60
	ctx.lr = 0x8271B774;
	sub_8271BD60(ctx, base);
	// b 0x8271b77c
	goto loc_8271B77C;
loc_8271B778:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8271B77C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8271b78c
	if (ctx.cr6.eq) goto loc_8271B78C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8263f5e8
	ctx.lr = 0x8271B78C;
	sub_8263F5E8(ctx, base);
loc_8271B78C:
	// lwz r11,1416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1416);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,1496(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1496);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1416, ctx.r11.u32);
	// bl 0x828a70b8
	ctx.lr = 0x8271B7A8;
	sub_828A70B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271B7B8"))) PPC_WEAK_FUNC(sub_8271B7B8);
PPC_FUNC_IMPL(__imp__sub_8271B7B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8271B7C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x828a7700
	ctx.lr = 0x8271B7D0;
	sub_828A7700(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8271b7f8
	if (ctx.cr6.eq) goto loc_8271B7F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271B7F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8271b7fc
	goto loc_8271B7FC;
loc_8271B7F8:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8271B7FC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8271b82c
	if (ctx.cr6.eq) goto loc_8271B82C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8271b988
	ctx.lr = 0x8271B80C;
	sub_8271B988(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8271b82c
	if (ctx.cr6.lt) goto loc_8271B82C;
	// lwz r11,1740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271b82c
	if (ctx.cr6.eq) goto loc_8271B82C;
	// stw r29,6220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6220, ctx.r29.u32);
	// stw r29,6224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6224, ctx.r29.u32);
loc_8271B82C:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// addi r4,r11,0
	ctx.r4.s64 = ctx.r11.s64 + 0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271B848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271B850"))) PPC_WEAK_FUNC(sub_8271B850);
PPC_FUNC_IMPL(__imp__sub_8271B850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8271B858;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,1640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// stw r28,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8271b8d4
	if (!ctx.cr6.gt) goto loc_8271B8D4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8271B87C:
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8271b8c0
	if (ctx.cr6.eq) goto loc_8271B8C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271B89C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271b8c0
	if (ctx.cr0.eq) goto loc_8271B8C0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8271b8bc
	if (ctx.cr6.eq) goto loc_8271B8BC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8271b8e0
	ctx.lr = 0x8271B8B8;
	sub_8271B8E0(ctx, base);
	// b 0x8271b8c0
	goto loc_8271B8C0;
loc_8271B8BC:
	// bl 0x8271b988
	ctx.lr = 0x8271B8C0;
	sub_8271B988(ctx, base);
loc_8271B8C0:
	// lwz r11,1640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8271b87c
	if (ctx.cr6.lt) goto loc_8271B87C;
loc_8271B8D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271B8E0"))) PPC_WEAK_FUNC(sub_8271B8E0);
PPC_FUNC_IMPL(__imp__sub_8271B8E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8271B8E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271B908;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271b924
	if (ctx.cr0.eq) goto loc_8271B924;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x828e0ad0
	ctx.lr = 0x8271B91C;
	sub_828E0AD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271b980
	if (!ctx.cr0.eq) goto loc_8271B980;
loc_8271B924:
	// lwz r29,6148(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6148);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8271b980
	if (ctx.cr6.eq) goto loc_8271B980;
	// lwz r11,8500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8271b954
	if (ctx.cr6.eq) goto loc_8271B954;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8262bb80
	ctx.lr = 0x8271B94C;
	sub_8262BB80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271b980
	if (!ctx.cr0.eq) goto loc_8271B980;
loc_8271B954:
	// lwz r11,1740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271b96c
	if (ctx.cr6.eq) goto loc_8271B96C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8271bd60
	ctx.lr = 0x8271B968;
	sub_8271BD60(ctx, base);
	// b 0x8271b970
	goto loc_8271B970;
loc_8271B96C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8271B970:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8271b980
	if (ctx.cr6.eq) goto loc_8271B980;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8263f5e8
	ctx.lr = 0x8271B980;
	sub_8263F5E8(ctx, base);
loc_8271B980:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271B988"))) PPC_WEAK_FUNC(sub_8271B988);
PPC_FUNC_IMPL(__imp__sub_8271B988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,6148(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6148);
	// lwz r11,1872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1872);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271B9B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8271b9d0
	if (ctx.cr6.eq) goto loc_8271B9D0;
	// lwz r11,3420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271b9d0
	if (ctx.cr6.eq) goto loc_8271B9D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8263f6b8
	ctx.lr = 0x8271B9D0;
	sub_8263F6B8(ctx, base);
loc_8271B9D0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8271bd44
	if (ctx.cr6.eq) goto loc_8271BD44;
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271B9E4;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271bb40
	if (!ctx.cr0.eq) goto loc_8271BB40;
	// li r4,101
	ctx.r4.s64 = 101;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271B9F8;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271bb40
	if (!ctx.cr0.eq) goto loc_8271BB40;
	// li r4,102
	ctx.r4.s64 = 102;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BA0C;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271bb40
	if (!ctx.cr0.eq) goto loc_8271BB40;
	// li r4,103
	ctx.r4.s64 = 103;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BA20;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271bb40
	if (!ctx.cr0.eq) goto loc_8271BB40;
	// li r4,104
	ctx.r4.s64 = 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BA34;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271bb40
	if (!ctx.cr0.eq) goto loc_8271BB40;
	// li r4,105
	ctx.r4.s64 = 105;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BA48;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271bb40
	if (!ctx.cr0.eq) goto loc_8271BB40;
	// li r4,106
	ctx.r4.s64 = 106;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BA5C;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271bb40
	if (!ctx.cr0.eq) goto loc_8271BB40;
	// li r4,150
	ctx.r4.s64 = 150;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BA70;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271bb40
	if (!ctx.cr0.eq) goto loc_8271BB40;
	// li r4,107
	ctx.r4.s64 = 107;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BA84;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271bb40
	if (!ctx.cr0.eq) goto loc_8271BB40;
	// li r4,108
	ctx.r4.s64 = 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BA98;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271bb40
	if (!ctx.cr0.eq) goto loc_8271BB40;
	// li r4,109
	ctx.r4.s64 = 109;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BAAC;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271bb40
	if (!ctx.cr0.eq) goto loc_8271BB40;
	// li r4,110
	ctx.r4.s64 = 110;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BAC0;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271bb40
	if (!ctx.cr0.eq) goto loc_8271BB40;
	// li r4,111
	ctx.r4.s64 = 111;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BAD4;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271bb40
	if (!ctx.cr0.eq) goto loc_8271BB40;
	// li r4,112
	ctx.r4.s64 = 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BAE8;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271bb40
	if (!ctx.cr0.eq) goto loc_8271BB40;
	// li r4,113
	ctx.r4.s64 = 113;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BAFC;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271bb40
	if (!ctx.cr0.eq) goto loc_8271BB40;
	// li r4,114
	ctx.r4.s64 = 114;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BB10;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271bb40
	if (!ctx.cr0.eq) goto loc_8271BB40;
	// li r4,115
	ctx.r4.s64 = 115;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BB24;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271bb40
	if (!ctx.cr0.eq) goto loc_8271BB40;
	// li r4,116
	ctx.r4.s64 = 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BB38;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271bb4c
	if (ctx.cr0.eq) goto loc_8271BB4C;
loc_8271BB40:
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a7388
	ctx.lr = 0x8271BB4C;
	sub_824A7388(ctx, base);
loc_8271BB4C:
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BB58;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271bcc0
	if (ctx.cr0.eq) goto loc_8271BCC0;
	// li r4,101
	ctx.r4.s64 = 101;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BB6C;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271bcc0
	if (ctx.cr0.eq) goto loc_8271BCC0;
	// li r4,102
	ctx.r4.s64 = 102;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BB80;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271bcc0
	if (ctx.cr0.eq) goto loc_8271BCC0;
	// li r4,103
	ctx.r4.s64 = 103;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BB94;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271bcc0
	if (ctx.cr0.eq) goto loc_8271BCC0;
	// li r4,104
	ctx.r4.s64 = 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BBA8;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271bcc0
	if (ctx.cr0.eq) goto loc_8271BCC0;
	// li r4,105
	ctx.r4.s64 = 105;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BBBC;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271bcc0
	if (ctx.cr0.eq) goto loc_8271BCC0;
	// li r4,106
	ctx.r4.s64 = 106;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BBD0;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271bcc0
	if (ctx.cr0.eq) goto loc_8271BCC0;
	// li r4,150
	ctx.r4.s64 = 150;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BBE4;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271bcc0
	if (ctx.cr0.eq) goto loc_8271BCC0;
	// li r4,107
	ctx.r4.s64 = 107;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BBF8;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271bcc0
	if (ctx.cr0.eq) goto loc_8271BCC0;
	// li r4,108
	ctx.r4.s64 = 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BC0C;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271bcc0
	if (ctx.cr0.eq) goto loc_8271BCC0;
	// li r4,109
	ctx.r4.s64 = 109;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BC20;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271bcc0
	if (ctx.cr0.eq) goto loc_8271BCC0;
	// li r4,110
	ctx.r4.s64 = 110;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BC34;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271bcc0
	if (ctx.cr0.eq) goto loc_8271BCC0;
	// li r4,111
	ctx.r4.s64 = 111;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BC48;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271bcc0
	if (ctx.cr0.eq) goto loc_8271BCC0;
	// li r4,112
	ctx.r4.s64 = 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BC5C;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271bcc0
	if (ctx.cr0.eq) goto loc_8271BCC0;
	// li r4,113
	ctx.r4.s64 = 113;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BC70;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271bcc0
	if (ctx.cr0.eq) goto loc_8271BCC0;
	// li r4,114
	ctx.r4.s64 = 114;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BC84;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271bcc0
	if (ctx.cr0.eq) goto loc_8271BCC0;
	// li r4,115
	ctx.r4.s64 = 115;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BC98;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271bcc0
	if (ctx.cr0.eq) goto loc_8271BCC0;
	// li r4,116
	ctx.r4.s64 = 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BCAC;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271bcc0
	if (ctx.cr0.eq) goto loc_8271BCC0;
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a7388
	ctx.lr = 0x8271BCC0;
	sub_824A7388(ctx, base);
loc_8271BCC0:
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BCCC;
	sub_824B7438(ctx, base);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271bce4
	if (ctx.cr0.eq) goto loc_8271BCE4;
	// lwz r11,10548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x8271BCE4;
	sub_82409BE0(ctx, base);
loc_8271BCE4:
	// li r4,105
	ctx.r4.s64 = 105;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BCF0;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271bd04
	if (ctx.cr0.eq) goto loc_8271BD04;
	// lwz r11,10548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x8271BD04;
	sub_82409BE0(ctx, base);
loc_8271BD04:
	// li r4,108
	ctx.r4.s64 = 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BD10;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271bd24
	if (ctx.cr0.eq) goto loc_8271BD24;
	// lwz r11,10548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x8271BD24;
	sub_82409BE0(ctx, base);
loc_8271BD24:
	// li r4,115
	ctx.r4.s64 = 115;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b7438
	ctx.lr = 0x8271BD30;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271bd44
	if (ctx.cr0.eq) goto loc_8271BD44;
	// lwz r11,10548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x8271BD44;
	sub_82409BE0(ctx, base);
loc_8271BD44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271BD60"))) PPC_WEAK_FUNC(sub_8271BD60);
PPC_FUNC_IMPL(__imp__sub_8271BD60) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r4,10548(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x82439c68
	ctx.lr = 0x8271BD8C;
	sub_82439C68(ctx, base);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8271bde8
	if (!ctx.cr6.gt) goto loc_8271BDE8;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8271BDA4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8271bddc
	if (ctx.cr6.eq) goto loc_8271BDDC;
	// lwz r6,2112(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2112);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8271bddc
	if (!ctx.cr6.gt) goto loc_8271BDDC;
	// lwz r6,84(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// rlwinm. r6,r6,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x8271bddc
	if (!ctx.cr0.eq) goto loc_8271BDDC;
	// lwz r11,6220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6220);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8271bddc
	if (!ctx.cr6.eq) goto loc_8271BDDC;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_8271BDDC:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x8271bda4
	if (!ctx.cr0.eq) goto loc_8271BDA4;
loc_8271BDE8:
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8271bdf4
	if (!ctx.cr6.eq) goto loc_8271BDF4;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8271BDF4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239d768
	ctx.lr = 0x8271BDFC;
	sub_8239D768(ctx, base);
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

__attribute__((alias("__imp__sub_8271BE18"))) PPC_WEAK_FUNC(sub_8271BE18);
PPC_FUNC_IMPL(__imp__sub_8271BE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828b5c60
	ctx.lr = 0x8271BE38;
	sub_828B5C60(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8271be58
	if (ctx.cr6.eq) goto loc_8271BE58;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271BE54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8271be5c
	goto loc_8271BE5C;
loc_8271BE58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8271BE5C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8271bec8
	if (ctx.cr6.eq) goto loc_8271BEC8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271BE74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271bec8
	if (ctx.cr0.eq) goto loc_8271BEC8;
	// lwz r10,1712(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// bne cr6,0x8271be90
	if (!ctx.cr6.eq) goto loc_8271BE90;
	// li r4,13
	ctx.r4.s64 = 13;
	// b 0x8271bebc
	goto loc_8271BEBC;
loc_8271BE90:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r9,788(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8271beb0
	if (!ctx.cr6.eq) goto loc_8271BEB0;
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8271bec8
	if (ctx.cr6.lt) goto loc_8271BEC8;
loc_8271BEB0:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bne cr6,0x8271bec8
	if (!ctx.cr6.eq) goto loc_8271BEC8;
	// li r4,14
	ctx.r4.s64 = 14;
loc_8271BEBC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x824368d8
	ctx.lr = 0x8271BEC8;
	sub_824368D8(ctx, base);
loc_8271BEC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271BEE0"))) PPC_WEAK_FUNC(sub_8271BEE0);
PPC_FUNC_IMPL(__imp__sub_8271BEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8271BEE8;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x828a74e8
	ctx.lr = 0x8271BEF8;
	sub_828A74E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271bf08
	if (!ctx.cr0.eq) goto loc_8271BF08;
loc_8271BF00:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8271c19c
	goto loc_8271C19C;
loc_8271BF08:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8271bf30
	if (ctx.cr6.eq) goto loc_8271BF30;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271BF28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8271bf34
	goto loc_8271BF34;
loc_8271BF30:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8271BF34:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8271c198
	if (ctx.cr6.eq) goto loc_8271C198;
	// lwz r11,8672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8672);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8672, ctx.r11.u32);
	// lwz r11,1144(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271BF5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271bf74
	if (ctx.cr0.eq) goto loc_8271BF74;
	// lwz r11,10548(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10548);
	// stw r27,3668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3668, ctx.r27.u32);
loc_8271BF74:
	// lwz r10,1712(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1712);
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bne cr6,0x8271c17c
	if (!ctx.cr6.eq) goto loc_8271C17C;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r9,788(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8271c17c
	if (!ctx.cr6.eq) goto loc_8271C17C;
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x8271c17c
	if (!ctx.cr6.lt) goto loc_8271C17C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271BFB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271bfd8
	if (ctx.cr0.eq) goto loc_8271BFD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1872);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271BFD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8271c014
	goto loc_8271C014;
loc_8271BFD8:
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8271c018
	if (!ctx.cr6.eq) goto loc_8271C018;
	// lwz r11,956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8271c018
	if (!ctx.cr6.eq) goto loc_8271C018;
	// lwz r11,6148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8271c004
	if (ctx.cr6.eq) goto loc_8271C004;
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8271c008
	goto loc_8271C008;
loc_8271C004:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8271C008:
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// bl 0x8282c9d0
	ctx.lr = 0x8271C010;
	sub_8282C9D0(ctx, base);
	// bl 0x82409be0
	ctx.lr = 0x8271C014;
	sub_82409BE0(ctx, base);
loc_8271C014:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8271C018:
	// lwz r11,2184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2184);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bge cr6,0x8271c040
	if (!ctx.cr6.lt) goto loc_8271C040;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8271c0d8
	if (!ctx.cr6.eq) goto loc_8271C0D8;
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x8271c0d8
	if (!ctx.cr6.lt) goto loc_8271C0D8;
loc_8271C040:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8271c0d8
	if (ctx.cr6.eq) goto loc_8271C0D8;
	// lwz r11,7220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8271c0d8
	if (!ctx.cr6.eq) goto loc_8271C0D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271C068;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271c07c
	if (ctx.cr0.eq) goto loc_8271C07C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e71b8
	ctx.lr = 0x8271C078;
	sub_825E71B8(ctx, base);
	// b 0x8271bf00
	goto loc_8271BF00;
loc_8271C07C:
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8271bf00
	if (!ctx.cr6.eq) goto loc_8271BF00;
	// lwz r11,956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8271bf00
	if (!ctx.cr6.eq) goto loc_8271BF00;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r11,r11,15864
	ctx.r11.s64 = ctx.r11.s64 + 15864;
	// addi r3,r10,20128
	ctx.r3.s64 = ctx.r10.s64 + 20128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x82816528
	ctx.lr = 0x8271C0B4;
	sub_82816528(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r4,6148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6148);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8282c710
	ctx.lr = 0x8271C0D4;
	sub_8282C710(ctx, base);
	// b 0x8271bf00
	goto loc_8271BF00;
loc_8271C0D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271C0EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271c124
	if (ctx.cr0.eq) goto loc_8271C124;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-17336
	ctx.r3.s64 = ctx.r11.s64 + -17336;
	// bl 0x82816528
	ctx.lr = 0x8271C100;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x8271C104;
	sub_828E0D10(ctx, base);
	// bl 0x82438370
	ctx.lr = 0x8271C108;
	sub_82438370(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271c114
	if (ctx.cr0.eq) goto loc_8271C114;
	// stw r27,2792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2792, ctx.r27.u32);
loc_8271C114:
	// lwz r3,10548(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10548);
	// lwz r4,1712(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1712);
	// bl 0x824368d8
	ctx.lr = 0x8271C120;
	sub_824368D8(ctx, base);
	// b 0x8271c198
	goto loc_8271C198;
loc_8271C124:
	// lwz r11,956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8271c198
	if (!ctx.cr6.eq) goto loc_8271C198;
	// lwz r11,1712(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1712);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r10,r10,-26188
	ctx.r10.s64 = ctx.r10.s64 + -26188;
	// addi r3,r9,31920
	ctx.r3.s64 = ctx.r9.s64 + 31920;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r30,r1,88
	ctx.r30.s64 = ctx.r1.s64 + 88;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82816528
	ctx.lr = 0x8271C158;
	sub_82816528(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r4,6148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6148);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8282c710
	ctx.lr = 0x8271C178;
	sub_8282C710(ctx, base);
	// b 0x8271c198
	goto loc_8271C198;
loc_8271C17C:
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// beq cr6,0x8271c18c
	if (ctx.cr6.eq) goto loc_8271C18C;
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bne cr6,0x8271c198
	if (!ctx.cr6.eq) goto loc_8271C198;
loc_8271C18C:
	// lwz r3,6148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6148);
	// bl 0x8263f5e8
	ctx.lr = 0x8271C194;
	sub_8263F5E8(ctx, base);
	// stw r27,1716(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1716, ctx.r27.u32);
loc_8271C198:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8271C19C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271C1A8"))) PPC_WEAK_FUNC(sub_8271C1A8);
PPC_FUNC_IMPL(__imp__sub_8271C1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828a7700
	ctx.lr = 0x8271C1C8;
	sub_828A7700(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8271c1ec
	if (ctx.cr6.eq) goto loc_8271C1EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271C1E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8271c1f0
	goto loc_8271C1F0;
loc_8271C1EC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8271C1F0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8271c244
	if (ctx.cr6.eq) goto loc_8271C244;
	// lwz r11,8672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8672);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8672, ctx.r11.u32);
	// lwz r11,1144(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271C218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271c230
	if (ctx.cr0.eq) goto loc_8271C230;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// stw r10,3668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3668, ctx.r10.u32);
loc_8271C230:
	// lwz r11,1716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271c244
	if (ctx.cr6.eq) goto loc_8271C244;
	// lwz r3,6148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6148);
	// bl 0x8263f6b8
	ctx.lr = 0x8271C244;
	sub_8263F6B8(ctx, base);
loc_8271C244:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271C260"))) PPC_WEAK_FUNC(sub_8271C260);
PPC_FUNC_IMPL(__imp__sub_8271C260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828a74e8
	ctx.lr = 0x8271C280;
	sub_828A74E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271c310
	if (ctx.cr0.eq) goto loc_8271C310;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8271c2ac
	if (ctx.cr6.eq) goto loc_8271C2AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271C2A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8271c2b0
	goto loc_8271C2B0;
loc_8271C2AC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8271C2B0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8271c30c
	if (ctx.cr6.eq) goto loc_8271C30C;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x828e0ad0
	ctx.lr = 0x8271C2C4;
	sub_828E0AD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271c30c
	if (!ctx.cr0.eq) goto loc_8271C30C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-21508
	ctx.r3.s64 = ctx.r11.s64 + -21508;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82766068
	ctx.lr = 0x8271C2E0;
	sub_82766068(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-21480
	ctx.r3.s64 = ctx.r11.s64 + -21480;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82766068
	ctx.lr = 0x8271C2F4;
	sub_82766068(ctx, base);
	// lwz r3,6148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6148);
	// bl 0x8263f5e8
	ctx.lr = 0x8271C2FC;
	sub_8263F5E8(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,1712(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// stw r10,3676(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3676, ctx.r10.u32);
loc_8271C30C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8271C310:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271C328"))) PPC_WEAK_FUNC(sub_8271C328);
PPC_FUNC_IMPL(__imp__sub_8271C328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x828a7700
	ctx.lr = 0x8271C340;
	sub_828A7700(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8271c360
	if (ctx.cr6.eq) goto loc_8271C360;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271C35C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8271c364
	goto loc_8271C364;
loc_8271C360:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8271C364:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8271c374
	if (ctx.cr6.eq) goto loc_8271C374;
	// lwz r3,6148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6148);
	// bl 0x8263f6b8
	ctx.lr = 0x8271C374;
	sub_8263F6B8(ctx, base);
loc_8271C374:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-21508
	ctx.r3.s64 = ctx.r11.s64 + -21508;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82766068
	ctx.lr = 0x8271C388;
	sub_82766068(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271c3a4
	if (ctx.cr0.eq) goto loc_8271C3A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271C3A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8271C3A4:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-21480
	ctx.r3.s64 = ctx.r11.s64 + -21480;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82766068
	ctx.lr = 0x8271C3B8;
	sub_82766068(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271c3d4
	if (ctx.cr0.eq) goto loc_8271C3D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271C3D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8271C3D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271C3E8"))) PPC_WEAK_FUNC(sub_8271C3E8);
PPC_FUNC_IMPL(__imp__sub_8271C3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824090e0
	ctx.lr = 0x8271C40C;
	sub_824090E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271c4d8
	if (ctx.cr0.eq) goto loc_8271C4D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271C424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271c4d8
	if (ctx.cr0.eq) goto loc_8271C4D8;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x828e0ad0
	ctx.lr = 0x8271C438;
	sub_828E0AD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271c4a8
	if (!ctx.cr0.eq) goto loc_8271C4A8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8271c464
	if (ctx.cr6.eq) goto loc_8271C464;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8271C45C;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8271C460;
	sub_82409C40(ctx, base);
	// b 0x8271c468
	goto loc_8271C468;
loc_8271C464:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8271C468:
	// bl 0x82411b98
	ctx.lr = 0x8271C46C;
	sub_82411B98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271c49c
	if (ctx.cr0.eq) goto loc_8271C49C;
	// lwz r11,1900(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8271c49c
	if (ctx.cr6.eq) goto loc_8271C49C;
	// lwz r10,932(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 932);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,932(r11)
	PPC_STORE_U32(ctx.r11.u32 + 932, ctx.r10.u32);
	// lwz r11,1900(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1900);
	// lwz r10,932(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 932);
	// rlwinm r10,r10,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r10,932(r11)
	PPC_STORE_U32(ctx.r11.u32 + 932, ctx.r10.u32);
loc_8271C49C:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826f41e0
	ctx.lr = 0x8271C4A8;
	sub_826F41E0(ctx, base);
loc_8271C4A8:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x8271C4B8;
	sub_82409BE0(ctx, base);
	// addi r11,r3,652
	ctx.r11.s64 = ctx.r3.s64 + 652;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// ble cr6,0x8271c4d8
	if (!ctx.cr6.gt) goto loc_8271C4D8;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_8271C4D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b5c60
	ctx.lr = 0x8271C4E4;
	sub_828B5C60(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271C500"))) PPC_WEAK_FUNC(sub_8271C500);
PPC_FUNC_IMPL(__imp__sub_8271C500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-21508
	ctx.r3.s64 = ctx.r11.s64 + -21508;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82766068
	ctx.lr = 0x8271C528;
	sub_82766068(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271c544
	if (ctx.cr0.eq) goto loc_8271C544;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271C544;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8271C544:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-21480
	ctx.r3.s64 = ctx.r11.s64 + -21480;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82766068
	ctx.lr = 0x8271C558;
	sub_82766068(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271c574
	if (ctx.cr0.eq) goto loc_8271C574;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271C574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8271C574:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828a79e0
	ctx.lr = 0x8271C57C;
	sub_828A79E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271C590"))) PPC_WEAK_FUNC(sub_8271C590);
PPC_FUNC_IMPL(__imp__sub_8271C590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828a74e8
	ctx.lr = 0x8271C5B0;
	sub_828A74E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271c674
	if (ctx.cr0.eq) goto loc_8271C674;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824ba060
	ctx.lr = 0x8271C5C0;
	sub_824BA060(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8271c670
	if (ctx.cr0.eq) goto loc_8271C670;
	// lwz r11,1712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8271c644
	if (ctx.cr6.eq) goto loc_8271C644;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8271c614
	if (ctx.cr6.eq) goto loc_8271C614;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8271c670
	if (!ctx.cr6.eq) goto loc_8271C670;
	// lwz r11,6632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8271c604
	if (!ctx.cr6.eq) goto loc_8271C604;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2396);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271C604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8271C604:
	// lwz r11,6632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6632);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,6632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6632, ctx.r11.u32);
	// b 0x8271c670
	goto loc_8271C670;
loc_8271C614:
	// lwz r11,6624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8271c634
	if (!ctx.cr6.eq) goto loc_8271C634;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2372);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271C634;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8271C634:
	// lwz r11,6624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6624);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,6624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6624, ctx.r11.u32);
	// b 0x8271c670
	goto loc_8271C670;
loc_8271C644:
	// lwz r11,6620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6620);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8271c664
	if (!ctx.cr6.eq) goto loc_8271C664;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271C664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8271C664:
	// lwz r11,6620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6620);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,6620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6620, ctx.r11.u32);
loc_8271C670:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8271C674:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271C690"))) PPC_WEAK_FUNC(sub_8271C690);
PPC_FUNC_IMPL(__imp__sub_8271C690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828a7700
	ctx.lr = 0x8271C6B0;
	sub_828A7700(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ba060
	ctx.lr = 0x8271C6B8;
	sub_824BA060(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271c734
	if (ctx.cr0.eq) goto loc_8271C734;
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8271c714
	if (ctx.cr6.eq) goto loc_8271C714;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8271c6f8
	if (ctx.cr6.eq) goto loc_8271C6F8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8271c734
	if (!ctx.cr6.eq) goto loc_8271C734;
	// lwz r11,6632(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6632);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,6632(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6632, ctx.r11.u32);
	// bne 0x8271c734
	if (!ctx.cr0.eq) goto loc_8271C734;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2400);
	// b 0x8271c72c
	goto loc_8271C72C;
loc_8271C6F8:
	// lwz r11,6624(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6624);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,6624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6624, ctx.r11.u32);
	// bne 0x8271c734
	if (!ctx.cr0.eq) goto loc_8271C734;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2376);
	// b 0x8271c72c
	goto loc_8271C72C;
loc_8271C714:
	// lwz r11,6620(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6620);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,6620(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6620, ctx.r11.u32);
	// bne 0x8271c734
	if (!ctx.cr0.eq) goto loc_8271C734;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2384);
loc_8271C72C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271C734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8271C734:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271C750"))) PPC_WEAK_FUNC(sub_8271C750);
PPC_FUNC_IMPL(__imp__sub_8271C750) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,200(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 200);
	// stw r11,1712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1712, ctx.r11.u32);
	// b 0x828a6d60
	sub_828A6D60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271C760"))) PPC_WEAK_FUNC(sub_8271C760);
PPC_FUNC_IMPL(__imp__sub_8271C760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8271C768;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x829bcd88
	ctx.lr = 0x8271C77C;
	sub_829BCD88(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r7,152(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r5,200(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// addi r4,r31,1736
	ctx.r4.s64 = ctx.r31.s64 + 1736;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8271C79C;
	sub_823CF190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// bl 0x82816528
	ctx.lr = 0x8271C7A8;
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
	ctx.lr = 0x8271C7BC;
	sub_82846E98(ctx, base);
	// addi r31,r31,1712
	ctx.r31.s64 = ctx.r31.s64 + 1712;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271c7ec
	if (ctx.cr6.eq) goto loc_8271C7EC;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x8271C7EC;
	sub_82332C38(ctx, base);
loc_8271C7EC:
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r10,204(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8271c888
	if (!ctx.cr6.gt) goto loc_8271C888;
loc_8271C800:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// rlwinm r10,r9,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x82332d50
	ctx.lr = 0x8271C840;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8271c874
	if (ctx.cr0.eq) goto loc_8271C874;
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
loc_8271C874:
	// lwz r10,204(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8271c800
	if (ctx.cr6.lt) goto loc_8271C800;
loc_8271C888:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271C890"))) PPC_WEAK_FUNC(sub_8271C890);
PPC_FUNC_IMPL(__imp__sub_8271C890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8271C898;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,1736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1736);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8271c984
	if (ctx.cr6.eq) goto loc_8271C984;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829c2520
	ctx.lr = 0x8271C8BC;
	sub_829C2520(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271c984
	if (ctx.cr0.eq) goto loc_8271C984;
	// lwz r9,244(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8271c904
	if (!ctx.cr6.gt) goto loc_8271C904;
	// lwz r10,1724(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1724);
	// rlwinm r8,r28,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
loc_8271C8E8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8271c908
	if (ctx.cr6.eq) goto loc_8271C908;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8271c8e8
	if (ctx.cr6.lt) goto loc_8271C8E8;
loc_8271C904:
	// li r5,-1
	ctx.r5.s64 = -1;
loc_8271C908:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,852(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 852);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271C920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-31949
	ctx.r7.s64 = -2093809664;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r3,13024(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13024);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,1724(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1724);
	// lfs f0,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,1736(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1736);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// rldicr r10,r30,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8282b1e0
	ctx.lr = 0x8271C984;
	sub_8282B1E0(ctx, base);
loc_8271C984:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271C990"))) PPC_WEAK_FUNC(sub_8271C990);
PPC_FUNC_IMPL(__imp__sub_8271C990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,1712(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x8271C9C0;
	sub_829B98F8(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x8271C9C4;
	sub_82416348(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271c9e0
	if (ctx.cr0.eq) goto loc_8271C9E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 728);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271C9E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8271C9E0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8271c9fc
	if (ctx.cr0.eq) goto loc_8271C9FC;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8271ca28
	goto loc_8271CA28;
loc_8271C9FC:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8271ca10
	if (ctx.cr0.eq) goto loc_8271CA10;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8271ca28
	goto loc_8271CA28;
loc_8271CA10:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8271ca3c
	if (ctx.cr0.eq) goto loc_8271CA3C;
	// lwz r10,1648(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8271CA28:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1052);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271CA3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8271CA3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271CA58"))) PPC_WEAK_FUNC(sub_8271CA58);
PPC_FUNC_IMPL(__imp__sub_8271CA58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8271CA60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x828a74e8
	ctx.lr = 0x8271CA70;
	sub_828A74E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271cb90
	if (ctx.cr0.eq) goto loc_8271CB90;
	// lwz r11,1648(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1648);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271cb90
	if (ctx.cr6.eq) goto loc_8271CB90;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r4,1712(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,1716(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1716, ctx.r11.u32);
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x8271CAA0;
	sub_829B98F8(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x8271CAA4;
	sub_82416348(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// beq 0x8271cb48
	if (ctx.cr0.eq) goto loc_8271CB48;
	// bl 0x823c81b8
	ctx.lr = 0x8271CAB4;
	sub_823C81B8(ctx, base);
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
	ctx.lr = 0x8271CACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271cb48
	if (ctx.cr0.eq) goto loc_8271CB48;
	// bl 0x823c81b8
	ctx.lr = 0x8271CAD8;
	sub_823C81B8(ctx, base);
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
	ctx.lr = 0x8271CAF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271cafc
	if (!ctx.cr0.eq) goto loc_8271CAFC;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8271CAFC:
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271cb1c
	if (ctx.cr6.eq) goto loc_8271CB1C;
	// lwz r11,1488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8271cb1c
	if (!ctx.cr6.eq) goto loc_8271CB1C;
	// stw r29,1716(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1716, ctx.r29.u32);
	// b 0x8271cb48
	goto loc_8271CB48;
loc_8271CB1C:
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r10,r10,0
	ctx.r10.s64 = ctx.r10.s64 + 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f1,-12104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8271cdc8
	ctx.lr = 0x8271CB48;
	sub_8271CDC8(ctx, base);
loc_8271CB48:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8271cb68
	if (ctx.cr6.eq) goto loc_8271CB68;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271CB64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8271cb6c
	goto loc_8271CB6C;
loc_8271CB68:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8271CB6C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8271cb88
	if (ctx.cr6.eq) goto loc_8271CB88;
	// lwz r11,1716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271cb88
	if (ctx.cr6.eq) goto loc_8271CB88;
	// lwz r3,6148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6148);
	// bl 0x8263f5e8
	ctx.lr = 0x8271CB88;
	sub_8263F5E8(ctx, base);
loc_8271CB88:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8271cb94
	goto loc_8271CB94;
loc_8271CB90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8271CB94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271CBA0"))) PPC_WEAK_FUNC(sub_8271CBA0);
PPC_FUNC_IMPL(__imp__sub_8271CBA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828a7700
	ctx.lr = 0x8271CBC0;
	sub_828A7700(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8271cbe0
	if (ctx.cr6.eq) goto loc_8271CBE0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271CBDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8271cbe4
	goto loc_8271CBE4;
loc_8271CBE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8271CBE4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8271cc00
	if (ctx.cr6.eq) goto loc_8271CC00;
	// lwz r11,1716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271cc00
	if (ctx.cr6.eq) goto loc_8271CC00;
	// lwz r3,6148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6148);
	// bl 0x8263f6b8
	ctx.lr = 0x8271CC00;
	sub_8263F6B8(ctx, base);
loc_8271CC00:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,1712(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x8271CC14;
	sub_829B98F8(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x8271CC18;
	sub_82416348(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8271cc60
	if (ctx.cr0.eq) goto loc_8271CC60;
	// bl 0x823c81b8
	ctx.lr = 0x8271CC24;
	sub_823C81B8(ctx, base);
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
	ctx.lr = 0x8271CC3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271cc60
	if (ctx.cr0.eq) goto loc_8271CC60;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,0
	ctx.r4.s64 = ctx.r11.s64 + 0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271CC60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8271CC60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271CC78"))) PPC_WEAK_FUNC(sub_8271CC78);
PPC_FUNC_IMPL(__imp__sub_8271CC78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824381f0
	ctx.lr = 0x8271CC9C;
	sub_824381F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271cce0
	if (ctx.cr0.eq) goto loc_8271CCE0;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,1712(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x8271CCB8;
	sub_829B98F8(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x8271CCBC;
	sub_82416348(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271ccd4
	if (ctx.cr0.eq) goto loc_8271CCD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271CCD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8271CCD4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b5c60
	ctx.lr = 0x8271CCE0;
	sub_828B5C60(ctx, base);
loc_8271CCE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271CCF8"))) PPC_WEAK_FUNC(sub_8271CCF8);
PPC_FUNC_IMPL(__imp__sub_8271CCF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8271CD00;
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
	ctx.lr = 0x8271CD18;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8271cda0
	if (!ctx.cr0.eq) goto loc_8271CDA0;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82482718
	ctx.lr = 0x8271CD28;
	sub_82482718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271CD3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x8271CD48;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8271cd8c
	if (ctx.cr0.eq) goto loc_8271CD8C;
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
	// b 0x8271cd90
	goto loc_8271CD90;
loc_8271CD8C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8271CD90:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x8271CD9C;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8271CDA0:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,-12104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271CDC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271CDC8"))) PPC_WEAK_FUNC(sub_8271CDC8);
PPC_FUNC_IMPL(__imp__sub_8271CDC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8271CDD0;
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
	ctx.lr = 0x8271CDE8;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8271ce70
	if (!ctx.cr0.eq) goto loc_8271CE70;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823be030
	ctx.lr = 0x8271CDF8;
	sub_823BE030(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271CE0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x8271CE18;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8271ce5c
	if (ctx.cr0.eq) goto loc_8271CE5C;
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
	// b 0x8271ce60
	goto loc_8271CE60;
loc_8271CE5C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8271CE60:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x8271CE6C;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8271CE70:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,-12104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271CE90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271CE98"))) PPC_WEAK_FUNC(sub_8271CE98);
PPC_FUNC_IMPL(__imp__sub_8271CE98) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8271aec0
	sub_8271AEC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271CEA0"))) PPC_WEAK_FUNC(sub_8271CEA0);
PPC_FUNC_IMPL(__imp__sub_8271CEA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8271ad68
	sub_8271AD68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271CEA8"))) PPC_WEAK_FUNC(sub_8271CEA8);
PPC_FUNC_IMPL(__imp__sub_8271CEA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8271ac08
	sub_8271AC08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271CEB0"))) PPC_WEAK_FUNC(sub_8271CEB0);
PPC_FUNC_IMPL(__imp__sub_8271CEB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8271af20
	sub_8271AF20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271CEB8"))) PPC_WEAK_FUNC(sub_8271CEB8);
PPC_FUNC_IMPL(__imp__sub_8271CEB8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8271aaa0
	sub_8271AAA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271CEC0"))) PPC_WEAK_FUNC(sub_8271CEC0);
PPC_FUNC_IMPL(__imp__sub_8271CEC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8271cf10
	ctx.lr = 0x8271CEE0;
	sub_8271CF10(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8271cef4
	if (ctx.cr6.eq) goto loc_8271CEF4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x8271CEF4;
	sub_82333B08(ctx, base);
loc_8271CEF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271CF10"))) PPC_WEAK_FUNC(sub_8271CF10);
PPC_FUNC_IMPL(__imp__sub_8271CF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,23492
	ctx.r31.s64 = ctx.r11.s64 + 23492;
	// lwz r11,-19436(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19436);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8271cf58
	if (!ctx.cr0.eq) goto loc_8271CF58;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-16872
	ctx.r9.s64 = ctx.r9.s64 + -16872;
	// stw r11,-19436(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19436, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,30312
	ctx.r3.s64 = ctx.r11.s64 + 30312;
	// bl 0x82a4c758
	ctx.lr = 0x8271CF58;
	sub_82A4C758(ctx, base);
loc_8271CF58:
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

__attribute__((alias("__imp__sub_8271CF70"))) PPC_WEAK_FUNC(sub_8271CF70);
PPC_FUNC_IMPL(__imp__sub_8271CF70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,23488(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23488);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8271cfb0
	if (!ctx.cr0.eq) goto loc_8271CFB0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r11,23488(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23488, ctx.r11.u32);
	// addi r3,r9,-17004
	ctx.r3.s64 = ctx.r9.s64 + -17004;
	// bl 0x82816528
	ctx.lr = 0x8271CFA8;
	sub_82816528(ctx, base);
	// stw r3,23484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23484, ctx.r3.u32);
	// b 0x8271cfb4
	goto loc_8271CFB4;
loc_8271CFB0:
	// lwz r3,23484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23484);
loc_8271CFB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271CFC8"))) PPC_WEAK_FUNC(sub_8271CFC8);
PPC_FUNC_IMPL(__imp__sub_8271CFC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8271cf10
	ctx.lr = 0x8271CFE8;
	sub_8271CF10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271CFFC;
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

__attribute__((alias("__imp__sub_8271D018"))) PPC_WEAK_FUNC(sub_8271D018);
PPC_FUNC_IMPL(__imp__sub_8271D018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8271d050
	if (ctx.cr6.eq) goto loc_8271D050;
	// bl 0x8271cf10
	ctx.lr = 0x8271D040;
	sub_8271CF10(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8271d050
	if (!ctx.cr6.eq) goto loc_8271D050;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8271d05c
	goto loc_8271D05C;
loc_8271D050:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x8271D05C;
	sub_82333C70(ctx, base);
loc_8271D05C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271D078"))) PPC_WEAK_FUNC(sub_8271D078);
PPC_FUNC_IMPL(__imp__sub_8271D078) {
	PPC_FUNC_PROLOGUE();
	// b 0x8271cf10
	sub_8271CF10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271D080"))) PPC_WEAK_FUNC(sub_8271D080);
PPC_FUNC_IMPL(__imp__sub_8271D080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8271D09C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271d0f4
	if (ctx.cr0.eq) goto loc_8271D0F4;
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
	// addi r9,r9,-16952
	ctx.r9.s64 = ctx.r9.s64 + -16952;
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
	// b 0x8271d0f8
	goto loc_8271D0F8;
loc_8271D0F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8271D0F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271D110"))) PPC_WEAK_FUNC(sub_8271D110);
PPC_FUNC_IMPL(__imp__sub_8271D110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,-17004
	ctx.r3.s64 = ctx.r11.s64 + -17004;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271D120"))) PPC_WEAK_FUNC(sub_8271D120);
PPC_FUNC_IMPL(__imp__sub_8271D120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f13,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,240(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfd f13,16376(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16376);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fsel f30,f0,f0,f13
	ctx.f30.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// bl 0x82a4cd78
	ctx.lr = 0x8271D164;
	sub_82A4CD78(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfd f0,16368(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16368);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fsub f11,f30,f0
	ctx.f11.f64 = ctx.f30.f64 - ctx.f0.f64;
	// lfs f13,16388(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16388);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fsel f0,f11,f0,f30
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f30.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8271d1ac
	if (ctx.cr6.lt) goto loc_8271D1AC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8271D1AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271D1C8"))) PPC_WEAK_FUNC(sub_8271D1C8);
PPC_FUNC_IMPL(__imp__sub_8271D1C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x8271D1D0;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8271d214
	if (ctx.cr6.eq) goto loc_8271D214;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8271d214
	if (ctx.cr6.eq) goto loc_8271D214;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8271d634
	if (!ctx.cr6.eq) goto loc_8271D634;
loc_8271D214:
	// lwz r4,448(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 448);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8271D220;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8271D224;
	sub_82333A20(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r28,236(r29)
	PPC_STORE_U32(ctx.r29.u32 + 236, ctx.r28.u32);
	// beq 0x8271d42c
	if (ctx.cr0.eq) goto loc_8271D42C;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r4,448(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 448);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8271D244;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8271D248;
	sub_82333A20(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8271d3dc
	if (ctx.cr0.eq) goto loc_8271D3DC;
	// lwz r11,2316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8271d634
	if (!ctx.cr6.eq) goto loc_8271D634;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271D274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8271d634
	if (!ctx.cr0.gt) goto loc_8271D634;
	// lwz r11,6080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6080);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8271d634
	if (!ctx.cr6.eq) goto loc_8271D634;
	// lwz r3,1608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x8271D290;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271d358
	if (ctx.cr0.eq) goto loc_8271D358;
	// addic. r31,r3,300
	ctx.xer.ca = ctx.r3.u32 > 4294966995;
	ctx.r31.s64 = ctx.r3.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8271d2b8
	if (ctx.cr0.eq) goto loc_8271D2B8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271d2b8
	if (ctx.cr6.eq) goto loc_8271D2B8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8271d2bc
	goto loc_8271D2BC;
loc_8271D2B8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_8271D2BC:
	// lis r4,-4136
	ctx.r4.s64 = -271056896;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,50836
	ctx.r4.u64 = ctx.r4.u64 | 50836;
	// bl 0x829e42d8
	ctx.lr = 0x8271D2D0;
	sub_829E42D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271d634
	if (!ctx.cr0.eq) goto loc_8271D634;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8271d2f8
	if (ctx.cr0.eq) goto loc_8271D2F8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271d2f8
	if (ctx.cr6.eq) goto loc_8271D2F8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8271d2fc
	goto loc_8271D2FC;
loc_8271D2F8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_8271D2FC:
	// lis r4,-10031
	ctx.r4.s64 = -657391616;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,62635
	ctx.r4.u64 = ctx.r4.u64 | 62635;
	// bl 0x829e42d8
	ctx.lr = 0x8271D310;
	sub_829E42D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271d634
	if (!ctx.cr0.eq) goto loc_8271D634;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8271d338
	if (ctx.cr0.eq) goto loc_8271D338;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271d338
	if (ctx.cr6.eq) goto loc_8271D338;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8271d33c
	goto loc_8271D33C;
loc_8271D338:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_8271D33C:
	// lis r4,30926
	ctx.r4.s64 = 2026766336;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,51881
	ctx.r4.u64 = ctx.r4.u64 | 51881;
	// bl 0x829e42d8
	ctx.lr = 0x8271D350;
	sub_829E42D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271d634
	if (!ctx.cr0.eq) goto loc_8271D634;
loc_8271D358:
	// lwz r31,1608(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8271d384
	if (ctx.cr6.eq) goto loc_8271D384;
	// bl 0x8239eca8
	ctx.lr = 0x8271D368;
	sub_8239ECA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271D380;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8271d388
	goto loc_8271D388;
loc_8271D384:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_8271D388:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8271d3dc
	if (ctx.cr6.eq) goto loc_8271D3DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r11,r11,300
	ctx.xer.ca = ctx.r11.u32 > 4294966995;
	ctx.r11.s64 = ctx.r11.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8271d3bc
	if (ctx.cr0.eq) goto loc_8271D3BC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8271d3bc
	if (ctx.cr6.eq) goto loc_8271D3BC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8271d3c0
	goto loc_8271D3C0;
loc_8271D3BC:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_8271D3C0:
	// lis r4,-22628
	ctx.r4.s64 = -1482948608;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,56572
	ctx.r4.u64 = ctx.r4.u64 | 56572;
	// bl 0x829e42d8
	ctx.lr = 0x8271D3D4;
	sub_829E42D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271d634
	if (!ctx.cr0.eq) goto loc_8271D634;
loc_8271D3DC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,1536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1536);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271D3F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,100(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 100, temp.u32);
	// stw r26,136(r29)
	PPC_STORE_U32(ctx.r29.u32 + 136, ctx.r26.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824090e0
	ctx.lr = 0x8271D400;
	sub_824090E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271d410
	if (ctx.cr0.eq) goto loc_8271D410;
	// lfs f0,8456(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8456);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 92, temp.u32);
loc_8271D410:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r4,448(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 448);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8271D420;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8271D424;
	sub_82333A20(ctx, base);
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8271d634
	if (ctx.cr6.eq) goto loc_8271D634;
loc_8271D42C:
	// lwz r31,232(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 232);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8271d444
	if (ctx.cr6.eq) goto loc_8271D444;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8271d448
	if (!ctx.cr0.eq) goto loc_8271D448;
loc_8271D444:
	// lwz r31,236(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 236);
loc_8271D448:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8271d490
	if (ctx.cr6.eq) goto loc_8271D490;
	// lwz r11,228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271d490
	if (ctx.cr6.eq) goto loc_8271D490;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8271d474
	if (!ctx.cr6.eq) goto loc_8271D474;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82331f90
	ctx.lr = 0x8271D46C;
	sub_82331F90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271d490
	if (!ctx.cr0.eq) goto loc_8271D490;
loc_8271D474:
	// lwz r11,228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8271d634
	if (!ctx.cr6.eq) goto loc_8271D634;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82331f90
	ctx.lr = 0x8271D488;
	sub_82331F90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271d634
	if (!ctx.cr0.eq) goto loc_8271D634;
loc_8271D490:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8271d49c
	if (ctx.cr6.eq) goto loc_8271D49C;
	// stw r22,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r22.u32);
loc_8271D49C:
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8271d4d4
	if (!ctx.cr6.eq) goto loc_8271D4D4;
	// lwz r11,76(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8271d4d4
	if (!ctx.cr6.eq) goto loc_8271D4D4;
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8271d634
	if (!ctx.cr6.eq) goto loc_8271D634;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8271d120
	ctx.lr = 0x8271D4CC;
	sub_8271D120(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271d634
	if (ctx.cr0.eq) goto loc_8271D634;
loc_8271D4D4:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r4,448(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 448);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8271D4E4;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8271D4E8;
	sub_82333A20(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8271d540
	if (!ctx.cr0.eq) goto loc_8271D540;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r9,32(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x8271D510;
	sub_8281D960(ctx, base);
	// bl 0x82332928
	ctx.lr = 0x8271D514;
	sub_82332928(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271d54c
	if (ctx.cr0.eq) goto loc_8271D54C;
	// lwz r3,800(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 800);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8271d54c
	if (ctx.cr6.eq) goto loc_8271D54C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271D538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8271d54c
	if (ctx.cr0.eq) goto loc_8271D54C;
loc_8271D540:
	// lwz r30,5352(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8271d550
	if (!ctx.cr6.eq) goto loc_8271D550;
loc_8271D54C:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8271D550:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8271d60c
	if (ctx.cr6.eq) goto loc_8271D60C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1484);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271D574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271d5ac
	if (ctx.cr0.eq) goto loc_8271D5AC;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8271d62c
	if (ctx.cr6.eq) goto loc_8271D62C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,1488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271D598;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271d62c
	if (!ctx.cr0.eq) goto loc_8271D62C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x8271d614
	goto loc_8271D614;
loc_8271D5AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271D5C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8271d60c
	if (ctx.cr0.eq) goto loc_8271D60C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-16852
	ctx.r4.s64 = ctx.r11.s64 + -16852;
	// bl 0x82816c30
	ctx.lr = 0x8271D5D8;
	sub_82816C30(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823339b8
	ctx.lr = 0x8271D5E8;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1764(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1764);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271D600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x8271D608;
	sub_82333960(ctx, base);
	// b 0x8271d62c
	goto loc_8271D62C;
loc_8271D60C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_8271D614:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271D62C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8271D62C:
	// stw r22,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r22.u32);
	// stw r22,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r22.u32);
loc_8271D634:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271D640"))) PPC_WEAK_FUNC(sub_8271D640);
PPC_FUNC_IMPL(__imp__sub_8271D640) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x824090e0
	ctx.lr = 0x8271D664;
	sub_824090E0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f1,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// beq 0x8271d69c
	if (ctx.cr0.eq) goto loc_8271D69C;
	// lfs f0,8456(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8456);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// bne cr6,0x8271d69c
	if (!ctx.cr6.eq) goto loc_8271D69C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,11260(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8271d69c
	if (!ctx.cr6.gt) goto loc_8271D69C;
	// fdivs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
loc_8271D69C:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271d6bc
	if (ctx.cr6.eq) goto loc_8271D6BC;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x8271d6bc
	if (ctx.cr6.eq) goto loc_8271D6BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x8271d6cc
	goto loc_8271D6CC;
loc_8271D6BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8271d120
	ctx.lr = 0x8271D6C4;
	sub_8271D120(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
loc_8271D6CC:
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271D6F0"))) PPC_WEAK_FUNC(sub_8271D6F0);
PPC_FUNC_IMPL(__imp__sub_8271D6F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d0
	ctx.lr = 0x8271D6F8;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,144(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8271da9c
	if (ctx.cr6.eq) goto loc_8271DA9C;
	// bl 0x8271db88
	ctx.lr = 0x8271D71C;
	sub_8271DB88(ctx, base);
	// lwz r30,144(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// lwz r17,36(r29)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lwz r28,28(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r31,r29,140
	ctx.r31.s64 = ctx.r29.s64 + 140;
	// lwz r26,32(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lwz r25,16(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r11,960(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 960);
	// lwz r24,20(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r23,24(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stw r17,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r17.u32);
	// bne cr6,0x8271da9c
	if (!ctx.cr6.eq) goto loc_8271DA9C;
	// addi r16,r30,3676
	ctx.r16.s64 = ctx.r30.s64 + 3676;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r16,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271D770;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3668(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3668);
	// li r20,0
	ctx.r20.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8271d7b0
	if (!ctx.cr6.gt) goto loc_8271D7B0;
	// lwz r10,3664(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3664);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_8271D78C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8271d79c
	if (!ctx.cr6.eq) goto loc_8271D79C;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_8271D79C:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x8271d78c
	if (!ctx.cr0.eq) goto loc_8271D78C;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x8271da88
	if (!ctx.cr6.eq) goto loc_8271DA88;
loc_8271D7B0:
	// addi r3,r30,3652
	ctx.r3.s64 = ctx.r30.s64 + 3652;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x8271D7C4;
	sub_82332D50(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,3664(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3664);
	// li r5,12
	ctx.r5.s64 = 12;
	// mulli r29,r27,12
	ctx.r29.s64 = ctx.r27.s64 * 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82a455d0
	ctx.lr = 0x8271D7E0;
	sub_82A455D0(ctx, base);
	// lwz r11,3664(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3664);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r19,r28
	ctx.r19.u64 = ctx.r28.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// stw r19,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r19.u32);
	// mr r21,r20
	ctx.r21.u64 = ctx.r20.u64;
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// addi r22,r31,80
	ctx.r22.s64 = ctx.r31.s64 + 80;
	// lis r18,-31949
	ctx.r18.s64 = -2093809664;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f30,24000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
loc_8271D824:
	// lwz r11,13024(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 13024);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,-72(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + -72);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8271D844;
	sub_823CF190(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8271d920
	if (ctx.cr6.eq) goto loc_8271D920;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271d86c
	if (ctx.cr6.eq) goto loc_8271D86C;
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// stw r19,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r19.u32);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
loc_8271D86C:
	// lwz r11,-8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271d8d8
	if (ctx.cr6.eq) goto loc_8271D8D8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271D894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f12,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f11,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lwz r24,92(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r23,96(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// lfs f12,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r25,88(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
loc_8271D8D8:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// ld r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rldicr r8,r17,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r17.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r6,r23,32,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r23.u64, 32) & 0xFFFFFFFF00000000;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824f4b30
	ctx.lr = 0x8271D8FC;
	sub_824F4B30(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271d920
	if (ctx.cr0.eq) goto loc_8271D920;
	// mulli r11,r27,3
	ctx.r11.s64 = ctx.r27.s64 * 3;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r9,3664(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3664);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
loc_8271D920:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// blt cr6,0x8271d824
	if (ctx.cr6.lt) goto loc_8271D824;
	// lwz r11,13024(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8271d948
	if (ctx.cr6.eq) goto loc_8271D948;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8271da88
	if (!ctx.cr6.eq) goto loc_8271DA88;
loc_8271D948:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x8271da88
	if (!ctx.cr6.gt) goto loc_8271DA88;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stw r20,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r20.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r11,r11,-10868
	ctx.r11.s64 = ctx.r11.s64 + -10868;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// bl 0x82720a40
	ctx.lr = 0x8271D968;
	sub_82720A40(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r1,152
	ctx.r8.s64 = ctx.r1.s64 + 152;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// addi r29,r1,208
	ctx.r29.s64 = ctx.r1.s64 + 208;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// addi r28,r1,216
	ctx.r28.s64 = ctx.r1.s64 + 216;
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// subf r7,r31,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r31.s64;
	// subf r6,r31,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r31.s64;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// subf r5,r31,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r31.s64;
	// subf r4,r31,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r31.s64;
	// subf r3,r31,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r31.s64;
	// subf r29,r31,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r31.s64;
	// addi r9,r1,184
	ctx.r9.s64 = ctx.r1.s64 + 184;
	// subf r31,r31,r28
	ctx.r31.s64 = ctx.r28.s64 - ctx.r31.s64;
	// li r8,2
	ctx.r8.s64 = 2;
loc_8271D9C0:
	// lwz r28,-8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r22,8(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r21,0(r10)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r20,4(r10)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r18,8(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lwz r17,40(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r16,48(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r15,56(r11)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r14,64(r11)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stwx r28,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r28.u32);
	// stwx r27,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r27.u32);
	// stwx r22,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r22.u32);
	// stw r21,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r21.u32);
	// stw r20,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r20.u32);
	// stw r18,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r18.u32);
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// stwx r17,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r17.u32);
	// stwx r16,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r16.u32);
	// stwx r15,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r15.u32);
	// stwx r14,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r14.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8271d9c0
	if (!ctx.cr0.eq) goto loc_8271D9C0;
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// stfs f29,264(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f31,268(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stw r25,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r25.u32);
	// stw r24,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r24.u32);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// stw r23,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r23.u32);
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// stw r19,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r19.u32);
	// addi r3,r10,-12036
	ctx.r3.s64 = ctx.r10.s64 + -12036;
	// stw r26,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r26.u32);
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// bl 0x82816528
	ctx.lr = 0x8271DA58;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x8282c818
	ctx.lr = 0x8271DA78;
	sub_8282C818(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r16,100(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,16980
	ctx.r11.s64 = ctx.r11.s64 + 16980;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
loc_8271DA88:
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271DA9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8271DA9C:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82a4ea20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271DAB0"))) PPC_WEAK_FUNC(sub_8271DAB0);
PPC_FUNC_IMPL(__imp__sub_8271DAB0) {
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
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271dadc
	if (ctx.cr6.eq) goto loc_8271DADC;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// b 0x8271db70
	goto loc_8271DB70;
loc_8271DADC:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x824090e0
	ctx.lr = 0x8271DAE4;
	sub_824090E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271db3c
	if (ctx.cr0.eq) goto loc_8271DB3C;
	// lwz r11,8460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8460);
	// li r4,60
	ctx.r4.s64 = 60;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,52(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271DB10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x8271db44
	goto loc_8271DB44;
loc_8271DB3C:
	// lwz r30,52(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8271DB44:
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// lfs f0,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8271DB70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271DB88"))) PPC_WEAK_FUNC(sub_8271DB88);
PPC_FUNC_IMPL(__imp__sub_8271DB88) {
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
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271dbb8
	if (ctx.cr6.eq) goto loc_8271DBB8;
	// lfs f1,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8271dc54
	goto loc_8271DC54;
loc_8271DBB8:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x824090e0
	ctx.lr = 0x8271DBC0;
	sub_824090E0(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x8271dbf8
	if (ctx.cr6.eq) goto loc_8271DBF8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,61
	ctx.r4.s64 = 61;
	// lwz r11,2004(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271DBF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_8271DBF8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8271dc44
	if (ctx.cr6.eq) goto loc_8271DC44;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8271dc44
	if (!ctx.cr6.eq) goto loc_8271DC44;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lfs f0,8464(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8464);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// li r4,61
	ctx.r4.s64 = 61;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271DC30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// b 0x8271dc4c
	goto loc_8271DC4C;
loc_8271DC44:
	// lfs f31,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f31.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
loc_8271DC4C:
	// lfs f13,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f13,f31,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f0.f64));
loc_8271DC54:
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

__attribute__((alias("__imp__sub_8271DC70"))) PPC_WEAK_FUNC(sub_8271DC70);
PPC_FUNC_IMPL(__imp__sub_8271DC70) {
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
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r9,32(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x8271DCA0;
	sub_8281D960(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8271dd80
	if (ctx.cr0.eq) goto loc_8271DD80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823329e8
	ctx.lr = 0x8271DCB0;
	sub_823329E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271dcc4
	if (ctx.cr0.eq) goto loc_8271DCC4;
	// lwz r3,800(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 800);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8271dd6c
	if (!ctx.cr6.eq) goto loc_8271DD6C;
loc_8271DCC4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271DCD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8271dcf8
	if (ctx.cr0.eq) goto loc_8271DCF8;
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271DCF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8271dd64
	goto loc_8271DD64;
loc_8271DCF8:
	// lwz r11,536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271DD04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271dd48
	if (ctx.cr0.eq) goto loc_8271DD48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271DD20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,800(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271dd48
	if (ctx.cr6.eq) goto loc_8271DD48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271DD40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,800(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 800);
	// b 0x8271dd64
	goto loc_8271DD64;
loc_8271DD48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332928
	ctx.lr = 0x8271DD50;
	sub_82332928(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271dd80
	if (ctx.cr0.eq) goto loc_8271DD80;
	// lwz r3,800(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 800);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8271dd80
	if (ctx.cr6.eq) goto loc_8271DD80;
loc_8271DD64:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8271dd80
	if (ctx.cr6.eq) goto loc_8271DD80;
loc_8271DD6C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271DD7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8271dd84
	goto loc_8271DD84;
loc_8271DD80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8271DD84:
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

__attribute__((alias("__imp__sub_8271DD98"))) PPC_WEAK_FUNC(sub_8271DD98);
PPC_FUNC_IMPL(__imp__sub_8271DD98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8271DDA0;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,28(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r9,32(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x8271DDD0;
	sub_8281D960(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271ddf4
	if (ctx.cr0.eq) goto loc_8271DDF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271DDEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8271ddf8
	goto loc_8271DDF8;
loc_8271DDF4:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_8271DDF8:
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// lwz r4,448(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 448);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8271DE0C;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8271DE10;
	sub_82333A20(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8271dff8
	if (ctx.cr6.eq) goto loc_8271DFF8;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x82332868
	ctx.lr = 0x8271DE24;
	sub_82332868(ctx, base);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stw r26,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r26.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-16804
	ctx.r3.s64 = ctx.r11.s64 + -16804;
	// bl 0x82816528
	ctx.lr = 0x8271DE3C;
	sub_82816528(ctx, base);
	// lis r10,7385
	ctx.r10.s64 = 483983360;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// ori r10,r10,30940
	ctx.r10.u64 = ctx.r10.u64 | 30940;
	// stw r26,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r26.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271DE78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24000(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24000);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r9,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r9.u32);
	// stw r10,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
	// bl 0x8271d6f0
	ctx.lr = 0x8271DEC0;
	sub_8271D6F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8271db88
	ctx.lr = 0x8271DEC8;
	sub_8271DB88(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8271df18
	if (ctx.cr6.eq) goto loc_8271DF18;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r4,6396(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6396);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8271DEE4;
	sub_829B9720(ctx, base);
	// bl 0x824090e0
	ctx.lr = 0x8271DEE8;
	sub_824090E0(ctx, base);
	// bl 0x824090e0
	ctx.lr = 0x8271DEEC;
	sub_824090E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271df18
	if (ctx.cr0.eq) goto loc_8271DF18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,332
	ctx.r4.s64 = 332;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271DF08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
loc_8271DF18:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f2.f64 = double(temp.f32);
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x824f2f88
	ctx.lr = 0x8271DF2C;
	sub_824F2F88(ctx, base);
	// lfs f10,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// lfs f9,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// lfd f12,16376(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16376);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r8,-16760
	ctx.r4.s64 = ctx.r8.s64 + -16760;
	// lfd f0,16368(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16368);
	// lfs f11,912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 912);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// fsel f13,f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fsub f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f11
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82816c30
	ctx.lr = 0x8271DF98;
	sub_82816C30(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823339b8
	ctx.lr = 0x8271DFA8;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1764);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271DFC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8271dff0
	if (ctx.cr6.eq) goto loc_8271DFF0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823339b8
	ctx.lr = 0x8271DFD8;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1764);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271DFF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8271DFF0:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x8271DFF8;
	sub_82333960(ctx, base);
loc_8271DFF8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271E008"))) PPC_WEAK_FUNC(sub_8271E008);
PPC_FUNC_IMPL(__imp__sub_8271E008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8271E010;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,448(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 448);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8271E038;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8271E03C;
	sub_82333A20(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,448(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8271E050;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8271E054;
	sub_82333A20(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8271e174
	if (ctx.cr6.eq) goto loc_8271E174;
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// lfs f0,16620(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x8271db88
	ctx.lr = 0x8271E090;
	sub_8271DB88(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r9,200
	ctx.r9.s64 = 200;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stfs f1,492(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 492, temp.u32);
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stfs f31,496(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// stw r9,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// stfs f0,500(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// stw r10,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r10.u32);
	// stw r8,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r8.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r7,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r7.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x8271E0D4;
	sub_82A4EA80(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ld r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ld r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// ld r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// bl 0x82331920
	ctx.lr = 0x8271E0F8;
	sub_82331920(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r27,8(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,876(r29)
	PPC_STORE_U32(ctx.r29.u32 + 876, ctx.r11.u32);
	// lfs f13,632(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,636(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	ctx.f0.f64 = double(temp.f32);
	// lwz r26,52(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stfs f0,528(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stfs f13,524(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 524, temp.u32);
	// lwz r11,956(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 956);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// bne cr6,0x8271e148
	if (!ctx.cr6.eq) goto loc_8271E148;
	// bl 0x8271db88
	ctx.lr = 0x8271E140;
	sub_8271DB88(ctx, base);
	// lwz r10,1660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	// b 0x8271e150
	goto loc_8271E150;
loc_8271E148:
	// bl 0x8271db88
	ctx.lr = 0x8271E14C;
	sub_8271DB88(ctx, base);
	// lwz r10,2184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2184);
loc_8271E150:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 4);
	// rldicr r5,r27,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8271E174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8271E174:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271E180"))) PPC_WEAK_FUNC(sub_8271E180);
PPC_FUNC_IMPL(__imp__sub_8271E180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8271E1A0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8271e1c8
	if (ctx.cr0.eq) goto loc_8271E1C8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f14e0
	ctx.lr = 0x8271E1B4;
	sub_823F14E0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-25072
	ctx.r11.s64 = ctx.r11.s64 + -25072;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8271e1cc
	goto loc_8271E1CC;
loc_8271E1C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8271E1CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271E1E8"))) PPC_WEAK_FUNC(sub_8271E1E8);
PPC_FUNC_IMPL(__imp__sub_8271E1E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8271E1F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,448(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 448);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8271E214;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8271E218;
	sub_82333A20(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,448(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 448);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8271E22C;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8271E230;
	sub_82333A20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8271db88
	ctx.lr = 0x8271E23C;
	sub_8271DB88(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8271e3c4
	if (ctx.cr6.eq) goto loc_8271E3C4;
	// lwz r11,2824(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8271e3c4
	if (!ctx.cr6.eq) goto loc_8271E3C4;
	// lwz r11,2208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8271e3c4
	if (!ctx.cr6.eq) goto loc_8271E3C4;
	// lwz r11,4192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8271e3c4
	if (!ctx.cr6.eq) goto loc_8271E3C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824e9ed0
	ctx.lr = 0x8271E274;
	sub_824E9ED0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8271e3c4
	if (!ctx.cr0.eq) goto loc_8271E3C4;
	// lwz r11,3896(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3896);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8271e3c4
	if (!ctx.cr6.eq) goto loc_8271E3C4;
	// lwz r11,6080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6080);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8271e3c4
	if (!ctx.cr6.eq) goto loc_8271E3C4;
	// lwz r11,2576(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2576);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8271e3c4
	if (!ctx.cr6.eq) goto loc_8271E3C4;
	// lwz r11,2204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271e2b4
	if (ctx.cr6.eq) goto loc_8271E2B4;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f2,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f2.f64 = double(temp.f32);
loc_8271E2B4:
	// lfs f0,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lfd f12,16376(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16376);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lfd f0,16368(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16368);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-16672
	ctx.r4.s64 = ctx.r11.s64 + -16672;
	// lfs f11,912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 912);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// fsel f13,f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fsub f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f11
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82816c30
	ctx.lr = 0x8271E31C;
	sub_82816C30(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r26,0(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823339b8
	ctx.lr = 0x8271E32C;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1764(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1764);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271E344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8271e374
	if (ctx.cr6.eq) goto loc_8271E374;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r26,0(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823339b8
	ctx.lr = 0x8271E35C;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1764(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1764);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271E374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8271E374:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// addi r3,r10,-16588
	ctx.r3.s64 = ctx.r10.s64 + -16588;
	// bl 0x82816528
	ctx.lr = 0x8271E38C;
	sub_82816528(ctx, base);
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bl 0x8271d6f0
	ctx.lr = 0x8271E3A0;
	sub_8271D6F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8271db88
	ctx.lr = 0x8271E3A8;
	sub_8271DB88(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lfs f2,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x824f2f88
	ctx.lr = 0x8271E3BC;
	sub_824F2F88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x8271E3C4;
	sub_82333960(ctx, base);
loc_8271E3C4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271E3D0"))) PPC_WEAK_FUNC(sub_8271E3D0);
PPC_FUNC_IMPL(__imp__sub_8271E3D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8271E3D8;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,448(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 448);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8271E400;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8271E404;
	sub_82333A20(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,448(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 448);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8271E418;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8271E41C;
	sub_82333A20(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8271e5d4
	if (ctx.cr6.eq) goto loc_8271E5D4;
	// lfs f13,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfd f13,16376(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16376);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fsel f31,f0,f0,f13
	ctx.f31.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// bl 0x8271db88
	ctx.lr = 0x8271E458;
	sub_8271DB88(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r9,-16544
	ctx.r4.s64 = ctx.r9.s64 + -16544;
	// lfd f0,16368(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16368);
	// fsub f12,f31,f0
	ctx.f12.f64 = ctx.f31.f64 - ctx.f0.f64;
	// lfs f13,912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f12,f0,f31
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f31.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82816c30
	ctx.lr = 0x8271E49C;
	sub_82816C30(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r25,0(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823339b8
	ctx.lr = 0x8271E4AC;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1764(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1764);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271E4C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8271e4f4
	if (ctx.cr6.eq) goto loc_8271E4F4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r25,0(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823339b8
	ctx.lr = 0x8271E4DC;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1764(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1764);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271E4F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8271E4F4:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// addi r3,r10,-16460
	ctx.r3.s64 = ctx.r10.s64 + -16460;
	// bl 0x82816528
	ctx.lr = 0x8271E50C;
	sub_82816528(ctx, base);
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// lwz r11,52(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bl 0x8271d6f0
	ctx.lr = 0x8271E520;
	sub_8271D6F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8271db88
	ctx.lr = 0x8271E528;
	sub_8271DB88(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lfs f2,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x824f2f88
	ctx.lr = 0x8271E53C;
	sub_824F2F88(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r4,448(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 448);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8271E54C;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8271E550;
	sub_82333A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271e594
	if (ctx.cr0.eq) goto loc_8271E594;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r4,448(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 448);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8271E568;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8271E56C;
	sub_82333A20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,148(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r28,1608(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// bl 0x8271db88
	ctx.lr = 0x8271E580;
	sub_8271DB88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8271dab0
	ctx.lr = 0x8271E58C;
	sub_8271DAB0(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// b 0x8271e5b0
	goto loc_8271E5B0;
loc_8271E594:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,148(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x8271db88
	ctx.lr = 0x8271E5A0;
	sub_8271DB88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8271dab0
	ctx.lr = 0x8271E5AC;
	sub_8271DAB0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
loc_8271E5B0:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824e4258
	ctx.lr = 0x8271E5CC;
	sub_824E4258(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x8271E5D4;
	sub_82333960(ctx, base);
loc_8271E5D4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271E5E0"))) PPC_WEAK_FUNC(sub_8271E5E0);
PPC_FUNC_IMPL(__imp__sub_8271E5E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8271E5E8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,28(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,32(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x8271E61C;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271e63c
	if (ctx.cr0.eq) goto loc_8271E63C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271E634;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8271e640
	goto loc_8271E640;
loc_8271E63C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8271E640:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8271e70c
	if (ctx.cr6.eq) goto loc_8271E70C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8271e70c
	if (ctx.cr6.eq) goto loc_8271E70C;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r4,448(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 448);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8271E664;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8271E668;
	sub_82333A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271e70c
	if (ctx.cr0.eq) goto loc_8271E70C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// addi r3,r10,-16416
	ctx.r3.s64 = ctx.r10.s64 + -16416;
	// bl 0x82816528
	ctx.lr = 0x8271E688;
	sub_82816528(ctx, base);
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bl 0x8271d6f0
	ctx.lr = 0x8271E69C;
	sub_8271D6F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8271db88
	ctx.lr = 0x8271E6A4;
	sub_8271DB88(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lfs f2,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x824f2f88
	ctx.lr = 0x8271E6B8;
	sub_824F2F88(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r4,448(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 448);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8271E6C8;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8271E6CC;
	sub_82333A20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,148(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r28,1608(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// bl 0x8271db88
	ctx.lr = 0x8271E6E0;
	sub_8271DB88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8271dab0
	ctx.lr = 0x8271E6EC;
	sub_8271DAB0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lfs f1,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824e4258
	ctx.lr = 0x8271E70C;
	sub_824E4258(ctx, base);
loc_8271E70C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271E718"))) PPC_WEAK_FUNC(sub_8271E718);
PPC_FUNC_IMPL(__imp__sub_8271E718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8271E720;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,28(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,32(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x8271E754;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271e774
	if (ctx.cr0.eq) goto loc_8271E774;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271E76C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8271e778
	goto loc_8271E778;
loc_8271E774:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8271E778:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8271e844
	if (ctx.cr6.eq) goto loc_8271E844;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8271e844
	if (ctx.cr6.eq) goto loc_8271E844;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r4,448(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 448);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8271E79C;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8271E7A0;
	sub_82333A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271e844
	if (ctx.cr0.eq) goto loc_8271E844;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// addi r3,r10,-16372
	ctx.r3.s64 = ctx.r10.s64 + -16372;
	// bl 0x82816528
	ctx.lr = 0x8271E7C0;
	sub_82816528(ctx, base);
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bl 0x8271d6f0
	ctx.lr = 0x8271E7D4;
	sub_8271D6F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8271db88
	ctx.lr = 0x8271E7DC;
	sub_8271DB88(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lfs f2,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x824f2f88
	ctx.lr = 0x8271E7F0;
	sub_824F2F88(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r4,448(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 448);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8271E800;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8271E804;
	sub_82333A20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,148(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r28,1608(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// bl 0x8271db88
	ctx.lr = 0x8271E818;
	sub_8271DB88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8271dab0
	ctx.lr = 0x8271E824;
	sub_8271DAB0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lfs f1,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824e4258
	ctx.lr = 0x8271E844;
	sub_824E4258(ctx, base);
loc_8271E844:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271E850"))) PPC_WEAK_FUNC(sub_8271E850);
PPC_FUNC_IMPL(__imp__sub_8271E850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8271E858;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,28(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r9,32(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x8271E888;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271e8a8
	if (ctx.cr0.eq) goto loc_8271E8A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271E8A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8271e8ac
	goto loc_8271E8AC;
loc_8271E8A8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8271E8AC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,448(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 448);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8271E8C0;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8271E8C4;
	sub_82333A20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824090e0
	ctx.lr = 0x8271E8D0;
	sub_824090E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8271ea14
	if (!ctx.cr0.eq) goto loc_8271EA14;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8271ea14
	if (ctx.cr6.eq) goto loc_8271EA14;
	// lwz r11,2212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8271ea14
	if (!ctx.cr6.eq) goto loc_8271EA14;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// addi r3,r10,-16328
	ctx.r3.s64 = ctx.r10.s64 + -16328;
	// bl 0x82816528
	ctx.lr = 0x8271E904;
	sub_82816528(ctx, base);
	// lis r11,-23022
	ctx.r11.s64 = -1508769792;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// ori r11,r11,52136
	ctx.r11.u64 = ctx.r11.u64 | 52136;
	// stw r10,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bl 0x8271d6f0
	ctx.lr = 0x8271E924;
	sub_8271D6F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8271db88
	ctx.lr = 0x8271E92C;
	sub_8271DB88(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lfs f2,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x824f2f88
	ctx.lr = 0x8271E940;
	sub_824F2F88(ctx, base);
	// lfs f12,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f11,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfd f13,16376(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16376);
	// lfs f12,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fsel f31,f0,f0,f13
	ctx.f31.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// bl 0x8271db88
	ctx.lr = 0x8271E970;
	sub_8271DB88(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r9,-16280
	ctx.r4.s64 = ctx.r9.s64 + -16280;
	// lfd f0,16368(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16368);
	// fsub f12,f31,f0
	ctx.f12.f64 = ctx.f31.f64 - ctx.f0.f64;
	// lfs f13,912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f12,f0,f31
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f31.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82816c30
	ctx.lr = 0x8271E9B4;
	sub_82816C30(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823339b8
	ctx.lr = 0x8271E9C4;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1764);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271E9DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8271ea0c
	if (ctx.cr6.eq) goto loc_8271EA0C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823339b8
	ctx.lr = 0x8271E9F4;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1764);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271EA0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8271EA0C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x8271EA14;
	sub_82333960(ctx, base);
loc_8271EA14:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271EA20"))) PPC_WEAK_FUNC(sub_8271EA20);
PPC_FUNC_IMPL(__imp__sub_8271EA20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8271EA28;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r4,448(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 448);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8271EA54;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8271EA58;
	sub_82333A20(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,448(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 448);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8271EA6C;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8271EA70;
	sub_82333A20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8271ec6c
	if (ctx.cr6.eq) goto loc_8271EC6C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8271ec6c
	if (ctx.cr6.eq) goto loc_8271EC6C;
	// lwz r11,2836(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8271ec6c
	if (!ctx.cr6.eq) goto loc_8271EC6C;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// addi r3,r10,-16192
	ctx.r3.s64 = ctx.r10.s64 + -16192;
	// bl 0x82816528
	ctx.lr = 0x8271EAA8;
	sub_82816528(ctx, base);
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// addi r11,r29,620
	ctx.r11.s64 = ctx.r29.s64 + 620;
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r10,620(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,624(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	// lwz r9,628(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// lfs f12,624(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,628(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,620(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x8271EB14;
	sub_82817280(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8271d6f0
	ctx.lr = 0x8271EB38;
	sub_8271D6F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8271db88
	ctx.lr = 0x8271EB40;
	sub_8271DB88(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lfs f2,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x824f2f88
	ctx.lr = 0x8271EB54;
	sub_824F2F88(ctx, base);
	// lfs f12,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f11,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfd f13,16376(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16376);
	// lfs f12,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fsel f31,f0,f0,f13
	ctx.f31.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// bl 0x8271db88
	ctx.lr = 0x8271EB84;
	sub_8271DB88(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r9,-16144
	ctx.r4.s64 = ctx.r9.s64 + -16144;
	// lfd f0,16368(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16368);
	// fsub f12,f31,f0
	ctx.f12.f64 = ctx.f31.f64 - ctx.f0.f64;
	// lfs f13,912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f12,f0,f31
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f31.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82816c30
	ctx.lr = 0x8271EBC8;
	sub_82816C30(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823339b8
	ctx.lr = 0x8271EBD8;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1764(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1764);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271EBF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8271dab0
	ctx.lr = 0x8271EBF8;
	sub_8271DAB0(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8271ec0c
	if (ctx.cr6.eq) goto loc_8271EC0C;
	// lwz r31,452(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 452);
loc_8271EC0C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271EC24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271EC3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x8271ec4c
	if (!ctx.cr6.lt) goto loc_8271EC4C;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8271ec58
	goto loc_8271EC58;
loc_8271EC4C:
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8271ec58
	if (ctx.cr6.lt) goto loc_8271EC58;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8271EC58:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8289f1a8
	ctx.lr = 0x8271EC64;
	sub_8289F1A8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x8271EC6C;
	sub_82333960(ctx, base);
loc_8271EC6C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271EC78"))) PPC_WEAK_FUNC(sub_8271EC78);
PPC_FUNC_IMPL(__imp__sub_8271EC78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8271EC98;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8271ecc0
	if (ctx.cr0.eq) goto loc_8271ECC0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f14e0
	ctx.lr = 0x8271ECAC;
	sub_823F14E0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-26424
	ctx.r11.s64 = ctx.r11.s64 + -26424;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8271ecc4
	goto loc_8271ECC4;
loc_8271ECC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8271ECC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271ECE0"))) PPC_WEAK_FUNC(sub_8271ECE0);
PPC_FUNC_IMPL(__imp__sub_8271ECE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8271ED00;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8271ed28
	if (ctx.cr0.eq) goto loc_8271ED28;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f14e0
	ctx.lr = 0x8271ED14;
	sub_823F14E0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24968
	ctx.r11.s64 = ctx.r11.s64 + -24968;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8271ed2c
	goto loc_8271ED2C;
loc_8271ED28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8271ED2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271ED48"))) PPC_WEAK_FUNC(sub_8271ED48);
PPC_FUNC_IMPL(__imp__sub_8271ED48) {
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
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,28(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,32(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x8271ED80;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271eda0
	if (ctx.cr0.eq) goto loc_8271EDA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271ED98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8271eda4
	goto loc_8271EDA4;
loc_8271EDA0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8271EDA4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8271ee00
	if (ctx.cr6.eq) goto loc_8271EE00;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// addi r3,r10,-16068
	ctx.r3.s64 = ctx.r10.s64 + -16068;
	// bl 0x82816528
	ctx.lr = 0x8271EDC4;
	sub_82816528(ctx, base);
	// lis r11,7385
	ctx.r11.s64 = 483983360;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// ori r11,r11,30940
	ctx.r11.u64 = ctx.r11.u64 | 30940;
	// stw r10,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bl 0x8271d6f0
	ctx.lr = 0x8271EDE4;
	sub_8271D6F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8271db88
	ctx.lr = 0x8271EDEC;
	sub_8271DB88(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lfs f2,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x824f2f88
	ctx.lr = 0x8271EE00;
	sub_824F2F88(ctx, base);
loc_8271EE00:
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

__attribute__((alias("__imp__sub_8271EE18"))) PPC_WEAK_FUNC(sub_8271EE18);
PPC_FUNC_IMPL(__imp__sub_8271EE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,28(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r9,32(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x8271EE44;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271ee5c
	if (ctx.cr0.eq) goto loc_8271EE5C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271EE5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8271EE5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271EE70"))) PPC_WEAK_FUNC(sub_8271EE70);
PPC_FUNC_IMPL(__imp__sub_8271EE70) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,28(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,32(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x8271EEAC;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271eecc
	if (ctx.cr0.eq) goto loc_8271EECC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271EEC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8271eed0
	goto loc_8271EED0;
loc_8271EECC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8271EED0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8271ef24
	if (ctx.cr6.eq) goto loc_8271EF24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8271db88
	ctx.lr = 0x8271EEE0;
	sub_8271DB88(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1736);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271EEF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r11,r11,27560
	ctx.r11.s64 = ctx.r11.s64 + 27560;
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
	// bl 0x824d6a48
	ctx.lr = 0x8271EF24;
	sub_824D6A48(ctx, base);
loc_8271EF24:
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

__attribute__((alias("__imp__sub_8271EF40"))) PPC_WEAK_FUNC(sub_8271EF40);
PPC_FUNC_IMPL(__imp__sub_8271EF40) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,28(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,32(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x8271EF7C;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271ef9c
	if (ctx.cr0.eq) goto loc_8271EF9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271EF94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8271efa0
	goto loc_8271EFA0;
loc_8271EF9C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8271EFA0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8271eff4
	if (ctx.cr6.eq) goto loc_8271EFF4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8271db88
	ctx.lr = 0x8271EFB0;
	sub_8271DB88(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1744);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271EFC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r11,r11,27416
	ctx.r11.s64 = ctx.r11.s64 + 27416;
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
	// bl 0x824d6a48
	ctx.lr = 0x8271EFF4;
	sub_824D6A48(ctx, base);
loc_8271EFF4:
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

__attribute__((alias("__imp__sub_8271F010"))) PPC_WEAK_FUNC(sub_8271F010);
PPC_FUNC_IMPL(__imp__sub_8271F010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8271F030;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8271f058
	if (ctx.cr0.eq) goto loc_8271F058;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f14e0
	ctx.lr = 0x8271F044;
	sub_823F14E0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24760
	ctx.r11.s64 = ctx.r11.s64 + -24760;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8271f05c
	goto loc_8271F05C;
loc_8271F058:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8271F05C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271F078"))) PPC_WEAK_FUNC(sub_8271F078);
PPC_FUNC_IMPL(__imp__sub_8271F078) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,28(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,32(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x8271F0B0;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271f0cc
	if (ctx.cr0.eq) goto loc_8271F0CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271F0C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8271f0d0
	goto loc_8271F0D0;
loc_8271F0CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8271F0D0:
	// bl 0x824090e0
	ctx.lr = 0x8271F0D4;
	sub_824090E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8271f0f8
	if (ctx.cr0.eq) goto loc_8271F0F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8271dab0
	ctx.lr = 0x8271F0E4;
	sub_8271DAB0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble 0x8271f0f0
	if (!ctx.cr0.gt) goto loc_8271F0F0;
	// neg r4,r4
	ctx.r4.s64 = -ctx.r4.s64;
loc_8271F0F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825f2a98
	ctx.lr = 0x8271F0F8;
	sub_825F2A98(ctx, base);
loc_8271F0F8:
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

__attribute__((alias("__imp__sub_8271F110"))) PPC_WEAK_FUNC(sub_8271F110);
PPC_FUNC_IMPL(__imp__sub_8271F110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8271F118;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x8271F148;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271f168
	if (ctx.cr0.eq) goto loc_8271F168;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271F160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8271f16c
	goto loc_8271F16C;
loc_8271F168:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8271F16C:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,15834
	ctx.r3.s64 = ctx.r11.s64 + 15834;
	// bl 0x82816528
	ctx.lr = 0x8271F178;
	sub_82816528(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8271f220
	if (ctx.cr6.eq) goto loc_8271F220;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8271f220
	if (ctx.cr6.eq) goto loc_8271F220;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// lwz r4,448(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 448);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8271F19C;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8271F1A0;
	sub_82333A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271f220
	if (ctx.cr0.eq) goto loc_8271F220;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// addi r3,r10,-16024
	ctx.r3.s64 = ctx.r10.s64 + -16024;
	// bl 0x82816528
	ctx.lr = 0x8271F1C0;
	sub_82816528(ctx, base);
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// lwz r11,5344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5344);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bl 0x8271d6f0
	ctx.lr = 0x8271F1D4;
	sub_8271D6F0(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r4,448(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 448);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8271F1E4;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8271F1E8;
	sub_82333A20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,148(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r28,1608(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// bl 0x8271db88
	ctx.lr = 0x8271F1FC;
	sub_8271DB88(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lfs f1,-27300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824e4258
	ctx.lr = 0x8271F21C;
	sub_824E4258(ctx, base);
	// b 0x8271f264
	goto loc_8271F264;
loc_8271F220:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x8271F240;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271f260
	if (ctx.cr0.eq) goto loc_8271F260;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271F258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8271f264
	goto loc_8271F264;
loc_8271F260:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8271F264:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8271f2a0
	if (ctx.cr6.eq) goto loc_8271F2A0;
	// lfs f1,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,1128(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1128);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x8271f2a0
	if (!ctx.cr6.gt) goto loc_8271F2A0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1724(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1724);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271F290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8271db88
	ctx.lr = 0x8271F298;
	sub_8271DB88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824e5358
	ctx.lr = 0x8271F2A0;
	sub_824E5358(ctx, base);
loc_8271F2A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271F2A8"))) PPC_WEAK_FUNC(sub_8271F2A8);
PPC_FUNC_IMPL(__imp__sub_8271F2A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x8271F2B0;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,28(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwz r9,32(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x8271F2E0;
	sub_8281D960(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271f304
	if (ctx.cr0.eq) goto loc_8271F304;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271F2FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8271f308
	goto loc_8271F308;
loc_8271F304:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_8271F308:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8271dc70
	ctx.lr = 0x8271F314;
	sub_8271DC70(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8271f624
	if (ctx.cr6.eq) goto loc_8271F624;
	// lwz r11,2512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8271f624
	if (!ctx.cr6.eq) goto loc_8271F624;
	// lwz r11,924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 924);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8271f624
	if (ctx.cr6.eq) goto loc_8271F624;
	// lwz r11,4104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8271f624
	if (!ctx.cr6.eq) goto loc_8271F624;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271F360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// lwz r9,660(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// lwz r8,664(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// lfs f11,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lfs f13,24000(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24000);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// stw r8,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// lfs f13,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// lwz r30,10548(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 10548);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f0,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lwz r23,160(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lwz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// fadds f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lwz r10,656(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// addi r28,r30,2124
	ctx.r28.s64 = ctx.r30.s64 + 2124;
	// lwz r7,2124(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2124);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r6.u32);
	// stw r23,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r23.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8271F3F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3520);
	// lwz r10,3524(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3524);
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8271f420
	if (!ctx.cr6.gt) goto loc_8271F420;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271F41C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8271f594
	goto loc_8271F594;
loc_8271F420:
	// lwz r10,2176(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2176);
	// lwz r9,2156(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2156);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8271f550
	if (!ctx.cr6.lt) goto loc_8271F550;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// stfs f31,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lis r4,2039
	ctx.r4.s64 = 133627904;
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r3,13024(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13024);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,184
	ctx.r7.s64 = ctx.r1.s64 + 184;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r6,r1,200
	ctx.r6.s64 = ctx.r1.s64 + 200;
	// stw r11,3520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3520, ctx.r11.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// ori r4,r4,41352
	ctx.r4.u64 = ctx.r4.u64 | 41352;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x828250b0
	ctx.lr = 0x8271F48C;
	sub_828250B0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8271f528
	if (ctx.cr0.eq) goto loc_8271F528;
	// lwz r10,1480(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1480);
	// lwz r11,1476(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1476);
	// lwz r9,1472(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1472);
	// lwz r7,1460(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1460);
	// lwz r8,1452(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1452);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// lfs f13,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// lfs f0,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// stw r7,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// lfs f10,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// lfs f11,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// lwz r8,1456(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1456);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r24,1468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1468, ctx.r24.u32);
	// stw r8,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// lfs f0,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,1480(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1480, ctx.r9.u32);
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r11,1460(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1460, ctx.r11.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r11,1456(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1456, ctx.r11.u32);
	// stw r10,1476(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1476, ctx.r10.u32);
	// stw r8,1452(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1452, ctx.r8.u32);
	// stw r7,1472(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1472, ctx.r7.u32);
loc_8271F528:
	// addi r3,r30,2160
	ctx.r3.s64 = ctx.r30.s64 + 2160;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x8271F53C;
	sub_82332D50(ctx, base);
	// lwz r11,2172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2172);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8271f550
	if (ctx.cr0.eq) goto loc_8271F550;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_8271F550:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271F564;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8271f594
	if (ctx.cr6.eq) goto loc_8271F594;
	// bl 0x823aca58
	ctx.lr = 0x8271F570;
	sub_823ACA58(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271F588;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bne 0x8271f598
	if (!ctx.cr0.eq) goto loc_8271F598;
loc_8271F594:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_8271F598:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8271f624
	if (ctx.cr6.eq) goto loc_8271F624;
	// stw r24,2512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2512, ctx.r24.u32);
	// lis r11,-466
	ctx.r11.s64 = -30539776;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r29,r11,47604
	ctx.r29.u64 = ctx.r11.u64 | 47604;
	// bl 0x8271db88
	ctx.lr = 0x8271F5B4;
	sub_8271DB88(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8271dab0
	ctx.lr = 0x8271F5C0;
	sub_8271DAB0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lfs f1,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824e4258
	ctx.lr = 0x8271F5E0;
	sub_824E4258(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8271db88
	ctx.lr = 0x8271F5E8;
	sub_8271DB88(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8271dab0
	ctx.lr = 0x8271F5F4;
	sub_8271DAB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stfs f31,1596(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1596, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,1556(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1556, ctx.r11.u32);
	// bl 0x8271db88
	ctx.lr = 0x8271F608;
	sub_8271DB88(ctx, base);
	// lis r4,2039
	ctx.r4.s64 = 133627904;
	// rldicr r7,r23,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r23.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r3,10548(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 10548);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// ld r6,152(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// ori r4,r4,41352
	ctx.r4.u64 = ctx.r4.u64 | 41352;
	// bl 0x8242f5e8
	ctx.lr = 0x8271F624;
	sub_8242F5E8(ctx, base);
loc_8271F624:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271F630"))) PPC_WEAK_FUNC(sub_8271F630);
PPC_FUNC_IMPL(__imp__sub_8271F630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8271F638;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,28(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,32(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x8271F664;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271f684
	if (ctx.cr0.eq) goto loc_8271F684;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271F67C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8271f688
	goto loc_8271F688;
loc_8271F684:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8271F688:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8271f6d8
	if (ctx.cr6.eq) goto loc_8271F6D8;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// addi r3,r10,-15984
	ctx.r3.s64 = ctx.r10.s64 + -15984;
	// bl 0x82816528
	ctx.lr = 0x8271F6A8;
	sub_82816528(ctx, base);
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bl 0x8271d6f0
	ctx.lr = 0x8271F6BC;
	sub_8271D6F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8271db88
	ctx.lr = 0x8271F6C4;
	sub_8271DB88(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lfs f2,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x824f2f88
	ctx.lr = 0x8271F6D8;
	sub_824F2F88(ctx, base);
loc_8271F6D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271F6E0"))) PPC_WEAK_FUNC(sub_8271F6E0);
PPC_FUNC_IMPL(__imp__sub_8271F6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x8271F6E8;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82a6173c
	ctx.lr = 0x8271F6F0;
	__savefpr_25(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,28(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r9,32(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x8271F720;
	sub_8281D960(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271f744
	if (ctx.cr0.eq) goto loc_8271F744;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271F73C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8271f748
	goto loc_8271F748;
loc_8271F744:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_8271F748:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8271dc70
	ctx.lr = 0x8271F754;
	sub_8271DC70(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8271fa98
	if (ctx.cr6.eq) goto loc_8271FA98;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// addi r3,r10,-15928
	ctx.r3.s64 = ctx.r10.s64 + -15928;
	// bl 0x82816528
	ctx.lr = 0x8271F778;
	sub_82816528(ctx, base);
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bl 0x8271d6f0
	ctx.lr = 0x8271F78C;
	sub_8271D6F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8271db88
	ctx.lr = 0x8271F794;
	sub_8271DB88(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x824f2f88
	ctx.lr = 0x8271F7AC;
	sub_824F2F88(ctx, base);
	// lis r21,-31949
	ctx.r21.s64 = -2093809664;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// lwz r29,10548(r21)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10548);
	// lwz r11,620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// lwz r10,624(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// addi r23,r29,2124
	ctx.r23.s64 = ctx.r29.s64 + 2124;
	// lwz r9,628(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r8,2124(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2124);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271F7FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,7589
	ctx.r11.s64 = 497352704;
	// lwz r10,2156(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2156);
	// ori r26,r11,45789
	ctx.r26.u64 = ctx.r11.u64 | 45789;
	// lwz r11,2176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2176);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8271fa64
	if (!ctx.cr6.lt) goto loc_8271FA64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// stfs f29,116(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// stfs f28,120(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f26,f31
	ctx.f26.f64 = ctx.f31.f64;
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmr f25,f31
	ctx.f25.f64 = ctx.f31.f64;
	// stfs f26,132(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f25,136(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// bl 0x824381f0
	ctx.lr = 0x8271F854;
	sub_824381F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82333a20
	ctx.lr = 0x8271F860;
	sub_82333A20(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x828250b0
	ctx.lr = 0x8271F89C;
	sub_828250B0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8271f908
	if (ctx.cr0.eq) goto loc_8271F908;
	// lwz r11,1460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// lwz r9,1476(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// lwz r7,1456(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// lwz r8,1480(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// lwz r10,1472(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// lfs f28,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f28.f64 = double(temp.f32);
	// lwz r11,1452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// stfs f28,120(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// lfs f26,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f26.f64 = double(temp.f32);
	// stw r7,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r7.u32);
	// lfs f29,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f29.f64 = double(temp.f32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lfs f30,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f30.f64 = double(temp.f32);
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// lfs f27,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f27.f64 = double(temp.f32);
	// lwz r27,1448(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f25,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f25.f64 = double(temp.f32);
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f29,116(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f26,132(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f25,136(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_8271F908:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8271f9e8
	if (ctx.cr6.eq) goto loc_8271F9E8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1512(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1512);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271F938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// fadds f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f28.f64));
	// lwz r11,1516(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1516);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271F97C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r27,r3,r27
	ctx.r27.u64 = ctx.r3.u64 + ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271F998;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// ld r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,1524(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1524);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271F9C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f27,f0
	ctx.f0.f64 = double(float(ctx.f27.f64 + ctx.f0.f64));
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f26.f64));
	// fadds f12,f12,f25
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f25.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_8271F9E8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8271fa3c
	if (ctx.cr6.eq) goto loc_8271FA3C;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x824090e0
	ctx.lr = 0x8271F9F8;
	sub_824090E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271fa04
	if (ctx.cr0.eq) goto loc_8271FA04;
	// stw r24,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r24.u32);
loc_8271FA04:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r6,136(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r27,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r27.u32);
	// stw r25,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r25.u32);
	// stw r11,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r11.u32);
	// stw r10,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r10.u32);
	// stw r9,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r9.u32);
	// stw r8,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r8.u32);
	// stw r7,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r7.u32);
	// stw r6,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r6.u32);
loc_8271FA3C:
	// addi r3,r29,2160
	ctx.r3.s64 = ctx.r29.s64 + 2160;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x8271FA50;
	sub_82332D50(ctx, base);
	// lwz r11,2172(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2172);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8271fa64
	if (ctx.cr0.eq) goto loc_8271FA64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_8271FA64:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271FA78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r3,10548(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10548);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// ld r6,620(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 620);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8242f5e8
	ctx.lr = 0x8271FA98;
	sub_8242F5E8(ctx, base);
loc_8271FA98:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82a61788
	ctx.lr = 0x8271FAA4;
	__restfpr_25(ctx, base);
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271FAA8"))) PPC_WEAK_FUNC(sub_8271FAA8);
PPC_FUNC_IMPL(__imp__sub_8271FAA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e8
	ctx.lr = 0x8271FAB0;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82a61740
	ctx.lr = 0x8271FAB8;
	__savefpr_26(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,28(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r9,32(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x8271FAE4;
	sub_8281D960(ctx, base);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271fb08
	if (ctx.cr0.eq) goto loc_8271FB08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271FB00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8271fb0c
	goto loc_8271FB0C;
loc_8271FB08:
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_8271FB0C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8271dc70
	ctx.lr = 0x8271FB18;
	sub_8271DC70(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8271feb0
	if (ctx.cr6.eq) goto loc_8271FEB0;
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lis r10,7385
	ctx.r10.s64 = 483983360;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r28,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r28.u32);
	// ori r10,r10,30940
	ctx.r10.u64 = ctx.r10.u64 | 30940;
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r9,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r25,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r25.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// bl 0x8271d6f0
	ctx.lr = 0x8271FB54;
	sub_8271D6F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8271db88
	ctx.lr = 0x8271FB5C;
	sub_8271DB88(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x824f2f88
	ctx.lr = 0x8271FB74;
	sub_824F2F88(ctx, base);
	// lis r21,-31949
	ctx.r21.s64 = -2093809664;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// lwz r29,10548(r21)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10548);
	// lwz r11,620(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 620);
	// lwz r10,624(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 624);
	// addi r23,r29,2124
	ctx.r23.s64 = ctx.r29.s64 + 2124;
	// lwz r9,628(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 628);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r8,2124(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2124);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271FBC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,29385
	ctx.r11.s64 = 1925775360;
	// lwz r10,2156(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2156);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// ori r24,r11,7325
	ctx.r24.u64 = ctx.r11.u64 | 7325;
	// lwz r11,2176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2176);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8271fe28
	if (!ctx.cr6.lt) goto loc_8271FE28;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// stfs f29,116(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// stfs f28,120(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f26,f31
	ctx.f26.f64 = ctx.f31.f64;
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f26,132(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x824381f0
	ctx.lr = 0x8271FC18;
	sub_824381F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82333a20
	ctx.lr = 0x8271FC24;
	sub_82333A20(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x828250b0
	ctx.lr = 0x8271FC60;
	sub_828250B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8271fccc
	if (ctx.cr0.eq) goto loc_8271FCCC;
	// lwz r11,1456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// lwz r9,1472(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1472);
	// lwz r8,1476(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1476);
	// lwz r7,1480(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1480);
	// lwz r10,1460(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1460);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// lfs f29,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f29.f64 = double(temp.f32);
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// stfs f29,116(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// lfs f27,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f27.f64 = double(temp.f32);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// lfs f26,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f26.f64 = double(temp.f32);
	// stw r7,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// lfs f31,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f31.f64 = double(temp.f32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lfs f30,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f30.f64 = double(temp.f32);
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// lfs f28,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f28.f64 = double(temp.f32);
	// lwz r26,1448(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1448);
	// stfs f28,120(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f26,132(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_8271FCCC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8271fdac
	if (ctx.cr6.eq) goto loc_8271FDAC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1512(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1512);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271FCFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// fadds f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f28.f64));
	// lwz r11,1516(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1516);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271FD40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r26,r3,r26
	ctx.r26.u64 = ctx.r3.u64 + ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,1520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271FD5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// ld r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,1524(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1524);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271FD88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f26.f64));
	// fadds f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_8271FDAC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8271fe00
	if (ctx.cr6.eq) goto loc_8271FE00;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x824090e0
	ctx.lr = 0x8271FDBC;
	sub_824090E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8271fdc8
	if (ctx.cr0.eq) goto loc_8271FDC8;
	// stw r22,1428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1428, ctx.r22.u32);
loc_8271FDC8:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r6,136(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r26,1448(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1448, ctx.r26.u32);
	// stw r25,1468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1468, ctx.r25.u32);
	// stw r11,1452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1452, ctx.r11.u32);
	// stw r10,1456(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1456, ctx.r10.u32);
	// stw r9,1460(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1460, ctx.r9.u32);
	// stw r8,1472(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1472, ctx.r8.u32);
	// stw r7,1476(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1476, ctx.r7.u32);
	// stw r6,1480(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1480, ctx.r6.u32);
loc_8271FE00:
	// addi r3,r29,2160
	ctx.r3.s64 = ctx.r29.s64 + 2160;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x8271FE14;
	sub_82332D50(ctx, base);
	// lwz r11,2172(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2172);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8271fe28
	if (ctx.cr0.eq) goto loc_8271FE28;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_8271FE28:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271FE3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8271fe68
	if (ctx.cr6.eq) goto loc_8271FE68;
	// bl 0x823adec0
	ctx.lr = 0x8271FE48;
	sub_823ADEC0(ctx, base);
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
	ctx.lr = 0x8271FE60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8271fe6c
	if (!ctx.cr0.eq) goto loc_8271FE6C;
loc_8271FE68:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_8271FE6C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8271feb0
	if (ctx.cr6.eq) goto loc_8271FEB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8271db88
	ctx.lr = 0x8271FE80;
	sub_8271DB88(ctx, base);
	// lwz r11,1040(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1040);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271FE90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,628(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 628);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lwz r3,10548(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10548);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lfs f1,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,620(r28)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r28.u32 + 620);
	// bl 0x8242f5e8
	ctx.lr = 0x8271FEB0;
	sub_8242F5E8(ctx, base);
loc_8271FEB0:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82a6178c
	ctx.lr = 0x8271FEBC;
	__restfpr_26(ctx, base);
	// b 0x82a4ea38
	__restgprlr_20(ctx, base);
	return;
}

