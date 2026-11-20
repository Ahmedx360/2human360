#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82698A98"))) PPC_WEAK_FUNC(sub_82698A98);
PPC_FUNC_IMPL(__imp__sub_82698A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,3872
	ctx.r3.s64 = ctx.r11.s64 + 3872;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82698AA8"))) PPC_WEAK_FUNC(sub_82698AA8);
PPC_FUNC_IMPL(__imp__sub_82698AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82698ae0
	if (ctx.cr6.eq) goto loc_82698AE0;
	// bl 0x826994d8
	ctx.lr = 0x82698AD0;
	sub_826994D8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82698ae0
	if (!ctx.cr6.eq) goto loc_82698AE0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82698aec
	goto loc_82698AEC;
loc_82698AE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x82698AEC;
	sub_82333C70(ctx, base);
loc_82698AEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82698B08"))) PPC_WEAK_FUNC(sub_82698B08);
PPC_FUNC_IMPL(__imp__sub_82698B08) {
	PPC_FUNC_PROLOGUE();
	// b 0x826994d8
	sub_826994D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82698B10"))) PPC_WEAK_FUNC(sub_82698B10);
PPC_FUNC_IMPL(__imp__sub_82698B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82698B2C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82698b84
	if (ctx.cr0.eq) goto loc_82698B84;
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
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,3944
	ctx.r9.s64 = ctx.r9.s64 + 3944;
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
	// b 0x82698b88
	goto loc_82698B88;
loc_82698B84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82698B88:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82698BA0"))) PPC_WEAK_FUNC(sub_82698BA0);
PPC_FUNC_IMPL(__imp__sub_82698BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x826994d8
	ctx.lr = 0x82698BC0;
	sub_826994D8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82698bd4
	if (ctx.cr6.eq) goto loc_82698BD4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x82698BD4;
	sub_82333B08(ctx, base);
loc_82698BD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82698BF0"))) PPC_WEAK_FUNC(sub_82698BF0);
PPC_FUNC_IMPL(__imp__sub_82698BF0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82698C20;
	sub_829B9720(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82698c68
	if (ctx.cr6.eq) goto loc_82698C68;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82698c68
	if (ctx.cr6.eq) goto loc_82698C68;
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82698C48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32280
	ctx.r3.s64 = ctx.r11.s64 + -32280;
	// bl 0x825d6ef8
	ctx.lr = 0x82698C58;
	sub_825D6EF8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827da2a8
	ctx.lr = 0x82698C68;
	sub_827DA2A8(ctx, base);
loc_82698C68:
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

__attribute__((alias("__imp__sub_82698C80"))) PPC_WEAK_FUNC(sub_82698C80);
PPC_FUNC_IMPL(__imp__sub_82698C80) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82698CB0;
	sub_829B9720(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82698cf8
	if (ctx.cr6.eq) goto loc_82698CF8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82698cf8
	if (ctx.cr6.eq) goto loc_82698CF8;
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82698CD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32176
	ctx.r3.s64 = ctx.r11.s64 + -32176;
	// bl 0x825d6ef8
	ctx.lr = 0x82698CE8;
	sub_825D6EF8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827da2a8
	ctx.lr = 0x82698CF8;
	sub_827DA2A8(ctx, base);
loc_82698CF8:
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

__attribute__((alias("__imp__sub_82698D10"))) PPC_WEAK_FUNC(sub_82698D10);
PPC_FUNC_IMPL(__imp__sub_82698D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82698D40;
	sub_829B9720(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82698d90
	if (ctx.cr6.eq) goto loc_82698D90;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82698d90
	if (ctx.cr6.eq) goto loc_82698D90;
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82698d88
	if (ctx.cr6.eq) goto loc_82698D88;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82698d7c
	if (ctx.cr6.eq) goto loc_82698D7C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82698d90
	if (!ctx.cr6.eq) goto loc_82698D90;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826a8848
	ctx.lr = 0x82698D78;
	sub_826A8848(ctx, base);
	// b 0x82698d90
	goto loc_82698D90;
loc_82698D7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826a8920
	ctx.lr = 0x82698D84;
	sub_826A8920(ctx, base);
	// b 0x82698d90
	goto loc_82698D90;
loc_82698D88:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826a89e8
	ctx.lr = 0x82698D90;
	sub_826A89E8(ctx, base);
loc_82698D90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82698DA8"))) PPC_WEAK_FUNC(sub_82698DA8);
PPC_FUNC_IMPL(__imp__sub_82698DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82698DD0;
	sub_829B9720(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82698dec
	if (ctx.cr6.eq) goto loc_82698DEC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82698dec
	if (ctx.cr6.eq) goto loc_82698DEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826a8ac8
	ctx.lr = 0x82698DEC;
	sub_826A8AC8(ctx, base);
loc_82698DEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82698E00"))) PPC_WEAK_FUNC(sub_82698E00);
PPC_FUNC_IMPL(__imp__sub_82698E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82698E2C;
	sub_829B9720(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82698e6c
	if (ctx.cr6.eq) goto loc_82698E6C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82698e6c
	if (ctx.cr6.eq) goto loc_82698E6C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827da220
	ctx.lr = 0x82698E50;
	sub_827DA220(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82698e6c
	if (ctx.cr0.eq) goto loc_82698E6C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82698e6c
	if (ctx.cr6.eq) goto loc_82698E6C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x826a7a68
	ctx.lr = 0x82698E6C;
	sub_826A7A68(ctx, base);
loc_82698E6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82698E88"))) PPC_WEAK_FUNC(sub_82698E88);
PPC_FUNC_IMPL(__imp__sub_82698E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82698EB8;
	sub_829B9720(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82698ee4
	if (ctx.cr6.eq) goto loc_82698EE4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82698ee4
	if (ctx.cr6.eq) goto loc_82698EE4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82698ee4
	if (ctx.cr6.eq) goto loc_82698EE4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827da220
	ctx.lr = 0x82698EE4;
	sub_827DA220(ctx, base);
loc_82698EE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82698F00"))) PPC_WEAK_FUNC(sub_82698F00);
PPC_FUNC_IMPL(__imp__sub_82698F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82698F08;
	__savegprlr_24(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82698fb0
	if (ctx.cr6.eq) goto loc_82698FB0;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x82698F44;
	sub_82A4EA80(ctx, base);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// beq cr6,0x82698fb0
	if (ctx.cr6.eq) goto loc_82698FB0;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r29,r1,152
	ctx.r29.s64 = ctx.r1.s64 + 152;
	// lwz r28,64(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r27,r1,176
	ctx.r27.s64 = ctx.r1.s64 + 176;
	// lwz r26,56(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r25,r1,144
	ctx.r25.s64 = ctx.r1.s64 + 144;
	// lwz r24,52(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// bl 0x826a8be0
	ctx.lr = 0x82698FB0;
	sub_826A8BE0(ctx, base);
loc_82698FB0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82698FB8"))) PPC_WEAK_FUNC(sub_82698FB8);
PPC_FUNC_IMPL(__imp__sub_82698FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82699040
	if (ctx.cr6.eq) goto loc_82699040;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x82699004;
	sub_82A4EA80(ctx, base);
	// ld r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 76);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// beq cr6,0x82699040
	if (ctx.cr6.eq) goto loc_82699040;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x826a8f70
	ctx.lr = 0x82699040;
	sub_826A8F70(ctx, base);
loc_82699040:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82699058"))) PPC_WEAK_FUNC(sub_82699058);
PPC_FUNC_IMPL(__imp__sub_82699058) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82699098
	if (ctx.cr6.eq) goto loc_82699098;
	// bl 0x826993d0
	ctx.lr = 0x82699078;
	sub_826993D0(ctx, base);
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
	ctx.lr = 0x82699090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8269909c
	if (!ctx.cr0.eq) goto loc_8269909C;
loc_82699098:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8269909C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826990c0
	if (ctx.cr6.eq) goto loc_826990C0;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x826990B8;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x826990BC;
	sub_82409C40(ctx, base);
	// b 0x826990c4
	goto loc_826990C4;
loc_826990C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826990C4:
	// bl 0x82411b98
	ctx.lr = 0x826990C8;
	sub_82411B98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8269910c
	if (ctx.cr6.eq) goto loc_8269910C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8269910c
	if (ctx.cr6.eq) goto loc_8269910C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x827da008
	ctx.lr = 0x826990F0;
	sub_827DA008(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8269910c
	if (ctx.cr6.eq) goto loc_8269910C;
	// bl 0x82643c20
	ctx.lr = 0x82699100;
	sub_82643C20(ctx, base);
	// lwz r11,1776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1776);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4572, ctx.r10.u32);
loc_8269910C:
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

__attribute__((alias("__imp__sub_82699120"))) PPC_WEAK_FUNC(sub_82699120);
PPC_FUNC_IMPL(__imp__sub_82699120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82699128;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82699670
	ctx.lr = 0x82699138;
	sub_82699670(ctx, base);
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
	ctx.lr = 0x82699150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8269915c
	if (!ctx.cr0.eq) goto loc_8269915C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8269915C:
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82699180
	if (ctx.cr6.eq) goto loc_82699180;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82699178;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8269917C;
	sub_82409C40(ctx, base);
	// b 0x82699184
	goto loc_82699184;
loc_82699180:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82699184:
	// bl 0x82411b98
	ctx.lr = 0x82699188;
	sub_82411B98(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8269919C;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82699218
	if (ctx.cr0.eq) goto loc_82699218;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82699218
	if (ctx.cr6.eq) goto loc_82699218;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827da008
	ctx.lr = 0x826991C4;
	sub_827DA008(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82699218
	if (ctx.cr6.eq) goto loc_82699218;
	// bl 0x82643c20
	ctx.lr = 0x826991D4;
	sub_82643C20(ctx, base);
	// addi r3,r3,1740
	ctx.r3.s64 = ctx.r3.s64 + 1740;
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82699210
	if (!ctx.cr6.gt) goto loc_82699210;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_826991F4:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82699218
	if (ctx.cr6.eq) goto loc_82699218;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826991f4
	if (ctx.cr6.lt) goto loc_826991F4;
loc_82699210:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82699218;
	sub_82410060(ctx, base);
loc_82699218:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82699220"))) PPC_WEAK_FUNC(sub_82699220);
PPC_FUNC_IMPL(__imp__sub_82699220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82699228;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82699670
	ctx.lr = 0x82699238;
	sub_82699670(ctx, base);
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
	ctx.lr = 0x82699250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8269925c
	if (!ctx.cr0.eq) goto loc_8269925C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8269925C:
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82699280
	if (ctx.cr6.eq) goto loc_82699280;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82699278;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8269927C;
	sub_82409C40(ctx, base);
	// b 0x82699284
	goto loc_82699284;
loc_82699280:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82699284:
	// bl 0x82411b98
	ctx.lr = 0x82699288;
	sub_82411B98(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8269929C;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826992e8
	if (ctx.cr0.eq) goto loc_826992E8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826992e8
	if (ctx.cr6.eq) goto loc_826992E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827da008
	ctx.lr = 0x826992C4;
	sub_827DA008(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826992e8
	if (ctx.cr6.eq) goto loc_826992E8;
	// bl 0x82643c20
	ctx.lr = 0x826992D4;
	sub_82643C20(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,1740
	ctx.r3.s64 = ctx.r3.s64 + 1740;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8254f1a8
	ctx.lr = 0x826992E8;
	sub_8254F1A8(ctx, base);
loc_826992E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826992F0"))) PPC_WEAK_FUNC(sub_826992F0);
PPC_FUNC_IMPL(__imp__sub_826992F0) {
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
	ctx.lr = 0x82699304;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82699314
	if (ctx.cr0.eq) goto loc_82699314;
	// bl 0x827d9c50
	ctx.lr = 0x82699310;
	sub_827D9C50(ctx, base);
	// b 0x82699318
	goto loc_82699318;
loc_82699314:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82699318:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82699328"))) PPC_WEAK_FUNC(sub_82699328);
PPC_FUNC_IMPL(__imp__sub_82699328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24480(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24480);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82699368
	if (!ctx.cr0.eq) goto loc_82699368;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,24480(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24480, ctx.r11.u32);
	// addi r3,r9,3856
	ctx.r3.s64 = ctx.r9.s64 + 3856;
	// bl 0x82816528
	ctx.lr = 0x82699360;
	sub_82816528(ctx, base);
	// stw r3,24476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24476, ctx.r3.u32);
	// b 0x8269936c
	goto loc_8269936C;
loc_82699368:
	// lwz r3,24476(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24476);
loc_8269936C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82699380"))) PPC_WEAK_FUNC(sub_82699380);
PPC_FUNC_IMPL(__imp__sub_82699380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826993d0
	ctx.lr = 0x826993A0;
	sub_826993D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826993B4;
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

__attribute__((alias("__imp__sub_826993D0"))) PPC_WEAK_FUNC(sub_826993D0);
PPC_FUNC_IMPL(__imp__sub_826993D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13500
	ctx.r31.s64 = ctx.r11.s64 + 13500;
	// lwz r11,13496(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13496);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82699418
	if (!ctx.cr0.eq) goto loc_82699418;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,3924
	ctx.r9.s64 = ctx.r9.s64 + 3924;
	// stw r11,13496(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13496, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27424
	ctx.r3.s64 = ctx.r11.s64 + 27424;
	// bl 0x82a4c758
	ctx.lr = 0x82699418;
	sub_82A4C758(ctx, base);
loc_82699418:
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

__attribute__((alias("__imp__sub_82699430"))) PPC_WEAK_FUNC(sub_82699430);
PPC_FUNC_IMPL(__imp__sub_82699430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24472(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24472);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82699470
	if (!ctx.cr0.eq) goto loc_82699470;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,24472(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24472, ctx.r11.u32);
	// addi r3,r9,3872
	ctx.r3.s64 = ctx.r9.s64 + 3872;
	// bl 0x82816528
	ctx.lr = 0x82699468;
	sub_82816528(ctx, base);
	// stw r3,24468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24468, ctx.r3.u32);
	// b 0x82699474
	goto loc_82699474;
loc_82699470:
	// lwz r3,24468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24468);
loc_82699474:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82699488"))) PPC_WEAK_FUNC(sub_82699488);
PPC_FUNC_IMPL(__imp__sub_82699488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826994d8
	ctx.lr = 0x826994A8;
	sub_826994D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826994BC;
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

__attribute__((alias("__imp__sub_826994D8"))) PPC_WEAK_FUNC(sub_826994D8);
PPC_FUNC_IMPL(__imp__sub_826994D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13492
	ctx.r31.s64 = ctx.r11.s64 + 13492;
	// lwz r11,13488(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13488);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82699520
	if (!ctx.cr0.eq) goto loc_82699520;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,4024
	ctx.r9.s64 = ctx.r9.s64 + 4024;
	// stw r11,13488(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13488, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27400
	ctx.r3.s64 = ctx.r11.s64 + 27400;
	// bl 0x82a4c758
	ctx.lr = 0x82699520;
	sub_82A4C758(ctx, base);
loc_82699520:
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

__attribute__((alias("__imp__sub_82699538"))) PPC_WEAK_FUNC(sub_82699538);
PPC_FUNC_IMPL(__imp__sub_82699538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1504
	ctx.r3.s64 = 1504;
	// bl 0x82833108
	ctx.lr = 0x82699550;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826995ac
	if (ctx.cr0.eq) goto loc_826995AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827d9c50
	ctx.lr = 0x82699560;
	sub_827D9C50(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,-30624
	ctx.r11.s64 = ctx.r11.s64 + -30624;
	// addi r10,r10,-29572
	ctx.r10.s64 = ctx.r10.s64 + -29572;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-29520
	ctx.r9.s64 = ctx.r9.s64 + -29520;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r11.u32);
	// stw r10,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r10.u32);
	// stw r11,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r11.u32);
	// stw r11,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r11.u32);
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// stw r11,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r11.u32);
	// b 0x826995b0
	goto loc_826995B0;
loc_826995AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826995B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826995C8"))) PPC_WEAK_FUNC(sub_826995C8);
PPC_FUNC_IMPL(__imp__sub_826995C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24464(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24464);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82699608
	if (!ctx.cr0.eq) goto loc_82699608;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,24464(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24464, ctx.r11.u32);
	// addi r3,r9,3904
	ctx.r3.s64 = ctx.r9.s64 + 3904;
	// bl 0x82816528
	ctx.lr = 0x82699600;
	sub_82816528(ctx, base);
	// stw r3,24460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24460, ctx.r3.u32);
	// b 0x8269960c
	goto loc_8269960C;
loc_82699608:
	// lwz r3,24460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24460);
loc_8269960C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82699620"))) PPC_WEAK_FUNC(sub_82699620);
PPC_FUNC_IMPL(__imp__sub_82699620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82699670
	ctx.lr = 0x82699640;
	sub_82699670(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82699654;
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

__attribute__((alias("__imp__sub_82699670"))) PPC_WEAK_FUNC(sub_82699670);
PPC_FUNC_IMPL(__imp__sub_82699670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13484
	ctx.r31.s64 = ctx.r11.s64 + 13484;
	// lwz r11,13480(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13480);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826996b8
	if (!ctx.cr0.eq) goto loc_826996B8;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,4044
	ctx.r9.s64 = ctx.r9.s64 + 4044;
	// stw r11,13480(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13480, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27376
	ctx.r3.s64 = ctx.r11.s64 + 27376;
	// bl 0x82a4c758
	ctx.lr = 0x826996B8;
	sub_82A4C758(ctx, base);
loc_826996B8:
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

__attribute__((alias("__imp__sub_826996D0"))) PPC_WEAK_FUNC(sub_826996D0);
PPC_FUNC_IMPL(__imp__sub_826996D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,4064
	ctx.r3.s64 = ctx.r11.s64 + 4064;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826996E0"))) PPC_WEAK_FUNC(sub_826996E0);
PPC_FUNC_IMPL(__imp__sub_826996E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82699718
	if (ctx.cr6.eq) goto loc_82699718;
	// bl 0x8269b298
	ctx.lr = 0x82699708;
	sub_8269B298(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82699718
	if (!ctx.cr6.eq) goto loc_82699718;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82699724
	goto loc_82699724;
loc_82699718:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a28
	ctx.lr = 0x82699724;
	sub_82338A28(ctx, base);
loc_82699724:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82699740"))) PPC_WEAK_FUNC(sub_82699740);
PPC_FUNC_IMPL(__imp__sub_82699740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1440
	ctx.r3.s64 = 1440;
	// bl 0x82833108
	ctx.lr = 0x82699760;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826997b0
	if (ctx.cr0.eq) goto loc_826997B0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82338b88
	ctx.lr = 0x82699774;
	sub_82338B88(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,5352
	ctx.r11.s64 = ctx.r11.s64 + 5352;
	// addi r10,r10,6364
	ctx.r10.s64 = ctx.r10.s64 + 6364;
	// addi r9,r9,14028
	ctx.r9.s64 = ctx.r9.s64 + 14028;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,1408
	ctx.r4.s64 = ctx.r30.s64 + 1408;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82a4ea80
	ctx.lr = 0x826997A8;
	sub_82A4EA80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x826997b4
	goto loc_826997B4;
loc_826997B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826997B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826997D0"))) PPC_WEAK_FUNC(sub_826997D0);
PPC_FUNC_IMPL(__imp__sub_826997D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x8269b298
	ctx.lr = 0x826997F0;
	sub_8269B298(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82699800
	if (!ctx.cr6.eq) goto loc_82699800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82699818
	goto loc_82699818;
loc_82699800:
	// bl 0x82338750
	ctx.lr = 0x82699804;
	sub_82338750(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82699818
	if (ctx.cr6.eq) goto loc_82699818;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x82699818;
	sub_82338858(ctx, base);
loc_82699818:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82699830"))) PPC_WEAK_FUNC(sub_82699830);
PPC_FUNC_IMPL(__imp__sub_82699830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-21360
	ctx.r3.s64 = ctx.r11.s64 + -21360;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82699840"))) PPC_WEAK_FUNC(sub_82699840);
PPC_FUNC_IMPL(__imp__sub_82699840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82699878
	if (ctx.cr6.eq) goto loc_82699878;
	// bl 0x825873f8
	ctx.lr = 0x82699868;
	sub_825873F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82699878
	if (!ctx.cr6.eq) goto loc_82699878;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82699884
	goto loc_82699884;
loc_82699878:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826996e0
	ctx.lr = 0x82699884;
	sub_826996E0(ctx, base);
loc_82699884:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826998A0"))) PPC_WEAK_FUNC(sub_826998A0);
PPC_FUNC_IMPL(__imp__sub_826998A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1616
	ctx.r3.s64 = 1616;
	// bl 0x82833108
	ctx.lr = 0x826998BC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826998d0
	if (ctx.cr0.eq) goto loc_826998D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82699938
	ctx.lr = 0x826998CC;
	sub_82699938(ctx, base);
	// b 0x826998d4
	goto loc_826998D4;
loc_826998D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826998D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826998E8"))) PPC_WEAK_FUNC(sub_826998E8);
PPC_FUNC_IMPL(__imp__sub_826998E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x825873f8
	ctx.lr = 0x82699908;
	sub_825873F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8269991c
	if (ctx.cr6.eq) goto loc_8269991C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826997d0
	ctx.lr = 0x8269991C;
	sub_826997D0(ctx, base);
loc_8269991C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82699938"))) PPC_WEAK_FUNC(sub_82699938);
PPC_FUNC_IMPL(__imp__sub_82699938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82699940;
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
	ctx.lr = 0x82699950;
	sub_82338B88(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,5352
	ctx.r11.s64 = ctx.r11.s64 + 5352;
	// addi r10,r10,6364
	ctx.r10.s64 = ctx.r10.s64 + 6364;
	// addi r9,r9,14028
	ctx.r9.s64 = ctx.r9.s64 + 14028;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,1408
	ctx.r4.s64 = ctx.r30.s64 + 1408;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82a4ea80
	ctx.lr = 0x82699984;
	sub_82A4EA80(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r9,1452(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// lis r8,-32218
	ctx.r8.s64 = -2111438848;
	// addi r10,r10,5296
	ctx.r10.s64 = ctx.r10.s64 + 5296;
	// addi r11,r11,4184
	ctx.r11.s64 = ctx.r11.s64 + 4184;
	// addi r8,r8,8616
	ctx.r8.s64 = ctx.r8.s64 + 8616;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r29,r31,1552
	ctx.r29.s64 = ctx.r31.s64 + 1552;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// lfs f0,1440(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1440);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1440(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1440, temp.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f0,1444(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1444(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1444, temp.u32);
	// lwz r11,1448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1448);
	// stw r11,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r11.u32);
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// rlwimi r11,r9,0,1,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x7FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFF80000000);
	// stw r11,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r11.u32);
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// lwz r10,1452(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// rlwimi r10,r11,0,1,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// rlwimi r10,r11,0,2,2
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x20000000) | (ctx.r10.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// rlwimi r10,r11,0,3,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x10000000) | (ctx.r10.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// rlwimi r10,r11,0,4,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x8000000) | (ctx.r10.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// rlwimi r10,r11,0,5,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x4000000) | (ctx.r10.u64 & 0xFFFFFFFFFBFFFFFF);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// rlwimi r10,r11,0,6,6
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x2000000) | (ctx.r10.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// rlwimi r10,r11,0,7,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x1000000) | (ctx.r10.u64 & 0xFFFFFFFFFEFFFFFF);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// rlwimi r10,r11,0,8,8
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x800000) | (ctx.r10.u64 & 0xFFFFFFFFFF7FFFFF);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// rlwimi r10,r11,0,9,9
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x400000) | (ctx.r10.u64 & 0xFFFFFFFFFFBFFFFF);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// rlwimi r10,r11,0,10,10
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x200000) | (ctx.r10.u64 & 0xFFFFFFFFFFDFFFFF);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// lwz r11,1456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// stw r11,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r11.u32);
	// lwz r11,1460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1460);
	// stw r11,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r11.u32);
	// lwz r11,1464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1464);
	// addi r27,r30,1552
	ctx.r27.s64 = ctx.r30.s64 + 1552;
	// li r10,40
	ctx.r10.s64 = 40;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// stw r11,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r11.u32);
	// lwz r11,1468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1468);
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
	// lwz r11,1472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1472);
	// stw r11,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r11.u32);
	// lwz r11,1476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1476);
	// stw r11,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r11.u32);
	// lfs f0,1480(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1480);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1480, temp.u32);
	// lfs f0,1484(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1484(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1484, temp.u32);
	// lfs f0,1488(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1488(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1488, temp.u32);
	// lfs f0,1492(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1492);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1492(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1492, temp.u32);
	// lfs f0,1496(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1496);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1496(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1496, temp.u32);
	// lwz r11,1500(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// stw r11,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r11.u32);
	// lwz r11,1504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// stw r11,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r11.u32);
	// lwz r11,1508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1508);
	// stw r11,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r11.u32);
	// lwz r11,1512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1512);
	// stw r11,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r11.u32);
	// lwz r11,1516(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1516);
	// stw r11,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r11.u32);
	// lwz r11,1520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1520);
	// stw r11,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r11.u32);
	// lfs f0,1524(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1524);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1524(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1524, temp.u32);
	// lfs f0,1528(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1528);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1528(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1528, temp.u32);
	// lfs f0,1532(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1532);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1532(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1532, temp.u32);
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
	// stw r10,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r10.u32);
	// stw r28,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r28.u32);
	// stw r28,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r28.u32);
	// stw r28,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r28.u32);
	// stw r28,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r28.u32);
	// stw r28,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r28.u32);
	// beq cr6,0x82699c10
	if (ctx.cr6.eq) goto loc_82699C10;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82699c10
	if (!ctx.cr6.gt) goto loc_82699C10;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82699b8c
	if (ctx.cr0.eq) goto loc_82699B8C;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x82699B8C;
	sub_82332C38(ctx, base);
loc_82699B8C:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82699c10
	if (!ctx.cr6.gt) goto loc_82699C10;
loc_82699B9C:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x82699BB0;
	sub_82332D50(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mulli r10,r3,40
	ctx.r10.s64 = ctx.r3.s64 * 40;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82699bfc
	if (ctx.cr0.eq) goto loc_82699BFC;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwimi r8,r9,0,1,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x7FFFFFFF) | (ctx.r8.u64 & 0xFFFFFFFF80000000);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// bl 0x8282f630
	ctx.lr = 0x82699BFC;
	sub_8282F630(ctx, base);
loc_82699BFC:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82699b9c
	if (ctx.cr6.lt) goto loc_82699B9C;
loc_82699C10:
	// lfs f0,1576(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1576);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,1576(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1576, temp.u32);
	// lfs f0,1580(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1580);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1580(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1580, temp.u32);
	// lfs f0,1584(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1584(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1584, temp.u32);
	// lfs f0,1588(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1588);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1588(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1588, temp.u32);
	// lfs f0,1592(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1592);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1592(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1592, temp.u32);
	// lfs f0,1596(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1596);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1596(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1596, temp.u32);
	// lfs f0,1600(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1600);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1600(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1600, temp.u32);
	// lfs f0,1604(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1604);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1604(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1604, temp.u32);
	// lfs f0,1608(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1608(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1608, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82699C68"))) PPC_WEAK_FUNC(sub_82699C68);
PPC_FUNC_IMPL(__imp__sub_82699C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,1552
	ctx.r3.s64 = ctx.r31.s64 + 1552;
	// bl 0x8269b2f8
	ctx.lr = 0x82699C8C;
	sub_8269B2F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bc9e8
	ctx.lr = 0x82699C94;
	sub_829BC9E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82699ca4
	if (ctx.cr0.eq) goto loc_82699CA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82699CA4;
	sub_82332DB8(ctx, base);
loc_82699CA4:
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

__attribute__((alias("__imp__sub_82699CC0"))) PPC_WEAK_FUNC(sub_82699CC0);
PPC_FUNC_IMPL(__imp__sub_82699CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,4072
	ctx.r3.s64 = ctx.r11.s64 + 4072;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82699CD0"))) PPC_WEAK_FUNC(sub_82699CD0);
PPC_FUNC_IMPL(__imp__sub_82699CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82699d08
	if (ctx.cr6.eq) goto loc_82699D08;
	// bl 0x8269b4d8
	ctx.lr = 0x82699CF8;
	sub_8269B4D8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82699d08
	if (!ctx.cr6.eq) goto loc_82699D08;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82699d14
	goto loc_82699D14;
loc_82699D08:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82699840
	ctx.lr = 0x82699D14;
	sub_82699840(ctx, base);
loc_82699D14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82699D30"))) PPC_WEAK_FUNC(sub_82699D30);
PPC_FUNC_IMPL(__imp__sub_82699D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82699D4C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82699d60
	if (ctx.cr0.eq) goto loc_82699D60;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82699dd8
	ctx.lr = 0x82699D5C;
	sub_82699DD8(ctx, base);
	// b 0x82699d64
	goto loc_82699D64;
loc_82699D60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82699D64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82699D78"))) PPC_WEAK_FUNC(sub_82699D78);
PPC_FUNC_IMPL(__imp__sub_82699D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x8269b4d8
	ctx.lr = 0x82699D98;
	sub_8269B4D8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82699da8
	if (!ctx.cr6.eq) goto loc_82699DA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82699dc0
	goto loc_82699DC0;
loc_82699DA8:
	// bl 0x825873f8
	ctx.lr = 0x82699DAC;
	sub_825873F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82699dc0
	if (ctx.cr6.eq) goto loc_82699DC0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826997d0
	ctx.lr = 0x82699DC0;
	sub_826997D0(ctx, base);
loc_82699DC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82699DD8"))) PPC_WEAK_FUNC(sub_82699DD8);
PPC_FUNC_IMPL(__imp__sub_82699DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82699DE0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82699938
	ctx.lr = 0x82699DF0;
	sub_82699938(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r10,r10,7528
	ctx.r10.s64 = ctx.r10.s64 + 7528;
	// addi r11,r11,6416
	ctx.r11.s64 = ctx.r11.s64 + 6416;
	// addi r9,r9,11172
	ctx.r9.s64 = ctx.r9.s64 + 11172;
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r9,396(r29)
	PPC_STORE_U32(ctx.r29.u32 + 396, ctx.r9.u32);
	// lfs f0,1616(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1616);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1616(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1616, temp.u32);
	// addi r30,r29,1660
	ctx.r30.s64 = ctx.r29.s64 + 1660;
	// lwz r10,1620(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1620);
	// addi r27,r28,1660
	ctx.r27.s64 = ctx.r28.s64 + 1660;
	// stw r10,1620(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1620, ctx.r10.u32);
	// li r11,36
	ctx.r11.s64 = 36;
	// lwz r10,1624(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1624);
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// stw r10,1624(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1624, ctx.r10.u32);
	// lwz r10,1628(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1628);
	// stw r10,1628(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1628, ctx.r10.u32);
	// lwz r10,1632(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1632);
	// stw r10,1632(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1632, ctx.r10.u32);
	// lwz r10,1636(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1636);
	// stw r10,1636(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1636, ctx.r10.u32);
	// lwz r10,1640(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1640);
	// stw r10,1640(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1640, ctx.r10.u32);
	// lwz r10,1644(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1644);
	// stw r10,1644(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1644, ctx.r10.u32);
	// lwz r10,1648(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1648);
	// stw r10,1648(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1648, ctx.r10.u32);
	// lwz r10,1652(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1652);
	// stw r10,1652(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1652, ctx.r10.u32);
	// lwz r10,1656(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1656);
	// stw r10,1656(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1656, ctx.r10.u32);
	// stw r11,1664(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1664, ctx.r11.u32);
	// stw r31,1668(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1668, ctx.r31.u32);
	// stw r31,1672(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1672, ctx.r31.u32);
	// stw r31,1676(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1676, ctx.r31.u32);
	// stw r31,1680(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1680, ctx.r31.u32);
	// stw r31,1660(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1660, ctx.r31.u32);
	// beq cr6,0x82699f40
	if (ctx.cr6.eq) goto loc_82699F40;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82699f40
	if (!ctx.cr6.gt) goto loc_82699F40;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82699ec8
	if (ctx.cr0.eq) goto loc_82699EC8;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x82699EC8;
	sub_82332C38(ctx, base);
loc_82699EC8:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82699f40
	if (!ctx.cr6.gt) goto loc_82699F40;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82699EDC:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332d50
	ctx.lr = 0x82699EF0;
	sub_82332D50(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mulli r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 * 36;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82699f2c
	if (ctx.cr0.eq) goto loc_82699F2C;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// addi r4,r10,12
	ctx.r4.s64 = ctx.r10.s64 + 12;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// bl 0x82873b58
	ctx.lr = 0x82699F2C;
	sub_82873B58(ctx, base);
loc_82699F2C:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,36
	ctx.r26.s64 = ctx.r26.s64 + 36;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82699edc
	if (ctx.cr6.lt) goto loc_82699EDC;
loc_82699F40:
	// addi r30,r29,1684
	ctx.r30.s64 = ctx.r29.s64 + 1684;
	// stw r31,1692(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1692, ctx.r31.u32);
	// li r26,4
	ctx.r26.s64 = 4;
	// stw r31,1696(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1696, ctx.r31.u32);
	// addi r27,r28,1684
	ctx.r27.s64 = ctx.r28.s64 + 1684;
	// stw r31,1700(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1700, ctx.r31.u32);
	// stw r26,1688(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1688, ctx.r26.u32);
	// stw r31,1704(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1704, ctx.r31.u32);
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// stw r31,1684(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1684, ctx.r31.u32);
	// beq cr6,0x82699fb4
	if (ctx.cr6.eq) goto loc_82699FB4;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82699fb4
	if (!ctx.cr6.gt) goto loc_82699FB4;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82699f98
	if (ctx.cr0.eq) goto loc_82699F98;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x82699F98;
	sub_82332C38(ctx, base);
loc_82699F98:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x82699FAC;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_82699FB4:
	// addi r30,r29,1708
	ctx.r30.s64 = ctx.r29.s64 + 1708;
	// stw r26,1712(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1712, ctx.r26.u32);
	// addi r28,r28,1708
	ctx.r28.s64 = ctx.r28.s64 + 1708;
	// stw r31,1716(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1716, ctx.r31.u32);
	// stw r31,1720(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1720, ctx.r31.u32);
	// stw r31,1724(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1724, ctx.r31.u32);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// stw r31,1728(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1728, ctx.r31.u32);
	// stw r31,1708(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1708, ctx.r31.u32);
	// beq cr6,0x8269a024
	if (ctx.cr6.eq) goto loc_8269A024;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8269a024
	if (!ctx.cr6.gt) goto loc_8269A024;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8269a008
	if (ctx.cr0.eq) goto loc_8269A008;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x8269A008;
	sub_82332C38(ctx, base);
loc_8269A008:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x8269A01C;
	sub_82A45878(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_8269A024:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269A030"))) PPC_WEAK_FUNC(sub_8269A030);
PPC_FUNC_IMPL(__imp__sub_8269A030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8269a080
	ctx.lr = 0x8269A050;
	sub_8269A080(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8269a060
	if (ctx.cr0.eq) goto loc_8269A060;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8269A060;
	sub_82332DB8(ctx, base);
loc_8269A060:
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

__attribute__((alias("__imp__sub_8269A080"))) PPC_WEAK_FUNC(sub_8269A080);
PPC_FUNC_IMPL(__imp__sub_8269A080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8269A088;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r30,r28,1708
	ctx.r30.s64 = ctx.r28.s64 + 1708;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,1724(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1724);
	// bl 0x82332ca8
	ctx.lr = 0x8269A0AC;
	sub_82332CA8(ctx, base);
	// lwz r3,1720(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1720);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8269a0bc
	if (ctx.cr6.eq) goto loc_8269A0BC;
	// bl 0x82332db8
	ctx.lr = 0x8269A0BC;
	sub_82332DB8(ctx, base);
loc_8269A0BC:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r28,1684
	ctx.r31.s64 = ctx.r28.s64 + 1684;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1700(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1700);
	// bl 0x82332ca8
	ctx.lr = 0x8269A0E8;
	sub_82332CA8(ctx, base);
	// lwz r3,1696(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1696);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8269a0f8
	if (ctx.cr6.eq) goto loc_8269A0F8;
	// bl 0x82332db8
	ctx.lr = 0x8269A0F8;
	sub_82332DB8(ctx, base);
loc_8269A0F8:
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r3,r28,1660
	ctx.r3.s64 = ctx.r28.s64 + 1660;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// bl 0x8269b378
	ctx.lr = 0x8269A10C;
	sub_8269B378(ctx, base);
	// addi r3,r28,1552
	ctx.r3.s64 = ctx.r28.s64 + 1552;
	// bl 0x8269b2f8
	ctx.lr = 0x8269A114;
	sub_8269B2F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829bc9e8
	ctx.lr = 0x8269A11C;
	sub_829BC9E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269A128"))) PPC_WEAK_FUNC(sub_8269A128);
PPC_FUNC_IMPL(__imp__sub_8269A128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,4096
	ctx.r3.s64 = ctx.r11.s64 + 4096;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269A138"))) PPC_WEAK_FUNC(sub_8269A138);
PPC_FUNC_IMPL(__imp__sub_8269A138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8269a170
	if (ctx.cr6.eq) goto loc_8269A170;
	// bl 0x8269b618
	ctx.lr = 0x8269A160;
	sub_8269B618(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8269a170
	if (!ctx.cr6.eq) goto loc_8269A170;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8269a17c
	goto loc_8269A17C;
loc_8269A170:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82699cd0
	ctx.lr = 0x8269A17C;
	sub_82699CD0(ctx, base);
loc_8269A17C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269A198"))) PPC_WEAK_FUNC(sub_8269A198);
PPC_FUNC_IMPL(__imp__sub_8269A198) {
	PPC_FUNC_PROLOGUE();
	// b 0x8269b618
	sub_8269B618(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269A1A0"))) PPC_WEAK_FUNC(sub_8269A1A0);
PPC_FUNC_IMPL(__imp__sub_8269A1A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8269b4d8
	sub_8269B4D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269A1A8"))) PPC_WEAK_FUNC(sub_8269A1A8);
PPC_FUNC_IMPL(__imp__sub_8269A1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8269A1C4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8269a1d8
	if (ctx.cr0.eq) goto loc_8269A1D8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269a240
	ctx.lr = 0x8269A1D4;
	sub_8269A240(ctx, base);
	// b 0x8269a1dc
	goto loc_8269A1DC;
loc_8269A1D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269A1DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269A1F0"))) PPC_WEAK_FUNC(sub_8269A1F0);
PPC_FUNC_IMPL(__imp__sub_8269A1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x8269b618
	ctx.lr = 0x8269A210;
	sub_8269B618(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8269a224
	if (ctx.cr6.eq) goto loc_8269A224;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82699d78
	ctx.lr = 0x8269A224;
	sub_82699D78(ctx, base);
loc_8269A224:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269A240"))) PPC_WEAK_FUNC(sub_8269A240);
PPC_FUNC_IMPL(__imp__sub_8269A240) {
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
	// bl 0x82699dd8
	ctx.lr = 0x8269A260;
	sub_82699DD8(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,7624
	ctx.r11.s64 = ctx.r11.s64 + 7624;
	// addi r10,r10,8740
	ctx.r10.s64 = ctx.r10.s64 + 8740;
	// addi r9,r9,14760
	ctx.r9.s64 = ctx.r9.s64 + 14760;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r3,r31,1744
	ctx.r3.s64 = ctx.r31.s64 + 1744;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r4,r30,1744
	ctx.r4.s64 = ctx.r30.s64 + 1744;
	// bl 0x82873b58
	ctx.lr = 0x8269A290;
	sub_82873B58(ctx, base);
	// addi r3,r31,1768
	ctx.r3.s64 = ctx.r31.s64 + 1768;
	// addi r4,r30,1768
	ctx.r4.s64 = ctx.r30.s64 + 1768;
	// bl 0x82873b58
	ctx.lr = 0x8269A29C;
	sub_82873B58(ctx, base);
	// lwz r11,1796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1796);
	// lfs f0,1792(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1792);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,1792(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1792, temp.u32);
	// lwz r10,1796(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1796);
	// rlwimi r10,r11,0,1,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x7FFFFFFF) | (ctx.r10.u64 & 0xFFFFFFFF80000000);
	// stw r10,1796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1796, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269A2D0"))) PPC_WEAK_FUNC(sub_8269A2D0);
PPC_FUNC_IMPL(__imp__sub_8269A2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,4116
	ctx.r3.s64 = ctx.r11.s64 + 4116;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269A2E0"))) PPC_WEAK_FUNC(sub_8269A2E0);
PPC_FUNC_IMPL(__imp__sub_8269A2E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8269a318
	if (ctx.cr6.eq) goto loc_8269A318;
	// bl 0x8269b798
	ctx.lr = 0x8269A308;
	sub_8269B798(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8269a318
	if (!ctx.cr6.eq) goto loc_8269A318;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8269a324
	goto loc_8269A324;
loc_8269A318:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8269a138
	ctx.lr = 0x8269A324;
	sub_8269A138(ctx, base);
loc_8269A324:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269A340"))) PPC_WEAK_FUNC(sub_8269A340);
PPC_FUNC_IMPL(__imp__sub_8269A340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	ctx.lr = 0x8269A360;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8269a3a0
	if (ctx.cr0.eq) goto loc_8269A3A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8269a240
	ctx.lr = 0x8269A374;
	sub_8269A240(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,8816
	ctx.r11.s64 = ctx.r11.s64 + 8816;
	// addi r10,r10,9932
	ctx.r10.s64 = ctx.r10.s64 + 9932;
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
	// b 0x8269a3a4
	goto loc_8269A3A4;
loc_8269A3A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269A3A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269A3C0"))) PPC_WEAK_FUNC(sub_8269A3C0);
PPC_FUNC_IMPL(__imp__sub_8269A3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x8269b798
	ctx.lr = 0x8269A3E0;
	sub_8269B798(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8269a3f0
	if (!ctx.cr6.eq) goto loc_8269A3F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8269a408
	goto loc_8269A408;
loc_8269A3F0:
	// bl 0x8269b618
	ctx.lr = 0x8269A3F4;
	sub_8269B618(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8269a408
	if (ctx.cr6.eq) goto loc_8269A408;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82699d78
	ctx.lr = 0x8269A408;
	sub_82699D78(ctx, base);
loc_8269A408:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269A420"))) PPC_WEAK_FUNC(sub_8269A420);
PPC_FUNC_IMPL(__imp__sub_8269A420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,4140
	ctx.r3.s64 = ctx.r11.s64 + 4140;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269A430"))) PPC_WEAK_FUNC(sub_8269A430);
PPC_FUNC_IMPL(__imp__sub_8269A430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8269a468
	if (ctx.cr6.eq) goto loc_8269A468;
	// bl 0x8269b928
	ctx.lr = 0x8269A458;
	sub_8269B928(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8269a468
	if (!ctx.cr6.eq) goto loc_8269A468;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8269a474
	goto loc_8269A474;
loc_8269A468:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82699cd0
	ctx.lr = 0x8269A474;
	sub_82699CD0(ctx, base);
loc_8269A474:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269A490"))) PPC_WEAK_FUNC(sub_8269A490);
PPC_FUNC_IMPL(__imp__sub_8269A490) {
	PPC_FUNC_PROLOGUE();
	// b 0x8269b928
	sub_8269B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269A498"))) PPC_WEAK_FUNC(sub_8269A498);
PPC_FUNC_IMPL(__imp__sub_8269A498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	ctx.lr = 0x8269A4B8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8269a508
	if (ctx.cr0.eq) goto loc_8269A508;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82699dd8
	ctx.lr = 0x8269A4CC;
	sub_82699DD8(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,10008
	ctx.r11.s64 = ctx.r11.s64 + 10008;
	// addi r10,r10,11120
	ctx.r10.s64 = ctx.r10.s64 + 11120;
	// addi r9,r9,11172
	ctx.r9.s64 = ctx.r9.s64 + 11172;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// lwz r10,1744(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1744);
	// rlwimi r10,r11,0,1,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x7FFFFFFF) | (ctx.r10.u64 & 0xFFFFFFFF80000000);
	// stw r10,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r10.u32);
	// b 0x8269a50c
	goto loc_8269A50C;
loc_8269A508:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269A50C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269A528"))) PPC_WEAK_FUNC(sub_8269A528);
PPC_FUNC_IMPL(__imp__sub_8269A528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x8269b928
	ctx.lr = 0x8269A548;
	sub_8269B928(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8269a55c
	if (ctx.cr6.eq) goto loc_8269A55C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82699d78
	ctx.lr = 0x8269A55C;
	sub_82699D78(ctx, base);
loc_8269A55C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269A578"))) PPC_WEAK_FUNC(sub_8269A578);
PPC_FUNC_IMPL(__imp__sub_8269A578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,2684
	ctx.r3.s64 = ctx.r11.s64 + 2684;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269A588"))) PPC_WEAK_FUNC(sub_8269A588);
PPC_FUNC_IMPL(__imp__sub_8269A588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8269a5c0
	if (ctx.cr6.eq) goto loc_8269A5C0;
	// bl 0x82643270
	ctx.lr = 0x8269A5B0;
	sub_82643270(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8269a5c0
	if (!ctx.cr6.eq) goto loc_8269A5C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8269a5cc
	goto loc_8269A5CC;
loc_8269A5C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82699cd0
	ctx.lr = 0x8269A5CC;
	sub_82699CD0(ctx, base);
loc_8269A5CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269A5E8"))) PPC_WEAK_FUNC(sub_8269A5E8);
PPC_FUNC_IMPL(__imp__sub_8269A5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8269A604;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8269a618
	if (ctx.cr0.eq) goto loc_8269A618;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269a680
	ctx.lr = 0x8269A614;
	sub_8269A680(ctx, base);
	// b 0x8269a61c
	goto loc_8269A61C;
loc_8269A618:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269A61C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269A630"))) PPC_WEAK_FUNC(sub_8269A630);
PPC_FUNC_IMPL(__imp__sub_8269A630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82643270
	ctx.lr = 0x8269A650;
	sub_82643270(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8269a664
	if (ctx.cr6.eq) goto loc_8269A664;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82699d78
	ctx.lr = 0x8269A664;
	sub_82699D78(ctx, base);
loc_8269A664:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269A680"))) PPC_WEAK_FUNC(sub_8269A680);
PPC_FUNC_IMPL(__imp__sub_8269A680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8269A688;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82699dd8
	ctx.lr = 0x8269A698;
	sub_82699DD8(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r10,r10,12328
	ctx.r10.s64 = ctx.r10.s64 + 12328;
	// addi r9,r9,18284
	ctx.r9.s64 = ctx.r9.s64 + 18284;
	// addi r11,r11,11216
	ctx.r11.s64 = ctx.r11.s64 + 11216;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r9,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r9.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r31,r30,1748
	ctx.r31.s64 = ctx.r30.s64 + 1748;
	// addi r27,r28,1748
	ctx.r27.s64 = ctx.r28.s64 + 1748;
	// li r11,12
	ctx.r11.s64 = 12;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// lwz r10,1744(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1744);
	// lwz r9,1744(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1744);
	// rlwimi r9,r10,0,1,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x7FFFFFFF) | (ctx.r9.u64 & 0xFFFFFFFF80000000);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,1744(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1744, ctx.r9.u32);
	// lwz r9,1744(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1744);
	// rlwimi r10,r9,0,1,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r10,1744(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1744, ctx.r10.u32);
	// stw r11,1752(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1752, ctx.r11.u32);
	// stw r29,1756(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1756, ctx.r29.u32);
	// stw r29,1760(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1760, ctx.r29.u32);
	// stw r29,1764(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1764, ctx.r29.u32);
	// stw r29,1768(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1768, ctx.r29.u32);
	// stw r29,1748(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1748, ctx.r29.u32);
	// beq cr6,0x8269a754
	if (ctx.cr6.eq) goto loc_8269A754;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8269a754
	if (!ctx.cr6.gt) goto loc_8269A754;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8269a738
	if (ctx.cr0.eq) goto loc_8269A738;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x8269A738;
	sub_82332C38(ctx, base);
loc_8269A738:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mulli r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 * 12;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x8269A74C;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8269A754:
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x823f6de0
	ctx.lr = 0x8269A768;
	sub_823F6DE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269A778"))) PPC_WEAK_FUNC(sub_8269A778);
PPC_FUNC_IMPL(__imp__sub_8269A778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,4160
	ctx.r3.s64 = ctx.r11.s64 + 4160;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269A788"))) PPC_WEAK_FUNC(sub_8269A788);
PPC_FUNC_IMPL(__imp__sub_8269A788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8269a7c0
	if (ctx.cr6.eq) goto loc_8269A7C0;
	// bl 0x8269bae8
	ctx.lr = 0x8269A7B0;
	sub_8269BAE8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8269a7c0
	if (!ctx.cr6.eq) goto loc_8269A7C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8269a7cc
	goto loc_8269A7CC;
loc_8269A7C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82699cd0
	ctx.lr = 0x8269A7CC;
	sub_82699CD0(ctx, base);
loc_8269A7CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269A7E8"))) PPC_WEAK_FUNC(sub_8269A7E8);
PPC_FUNC_IMPL(__imp__sub_8269A7E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8269bae8
	sub_8269BAE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269A7F0"))) PPC_WEAK_FUNC(sub_8269A7F0);
PPC_FUNC_IMPL(__imp__sub_8269A7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8269A80C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8269a820
	if (ctx.cr0.eq) goto loc_8269A820;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269a888
	ctx.lr = 0x8269A81C;
	sub_8269A888(ctx, base);
	// b 0x8269a824
	goto loc_8269A824;
loc_8269A820:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269A824:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269A838"))) PPC_WEAK_FUNC(sub_8269A838);
PPC_FUNC_IMPL(__imp__sub_8269A838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x8269bae8
	ctx.lr = 0x8269A858;
	sub_8269BAE8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8269a86c
	if (ctx.cr6.eq) goto loc_8269A86C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82699d78
	ctx.lr = 0x8269A86C;
	sub_82699D78(ctx, base);
loc_8269A86C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269A888"))) PPC_WEAK_FUNC(sub_8269A888);
PPC_FUNC_IMPL(__imp__sub_8269A888) {
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
	// bl 0x82699dd8
	ctx.lr = 0x8269A8A8;
	sub_82699DD8(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,12384
	ctx.r11.s64 = ctx.r11.s64 + 12384;
	// addi r10,r10,13496
	ctx.r10.s64 = ctx.r10.s64 + 13496;
	// addi r9,r9,13548
	ctx.r9.s64 = ctx.r9.s64 + 13548;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r3,r31,1776
	ctx.r3.s64 = ctx.r31.s64 + 1776;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lfs f0,1744(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1744(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1744, temp.u32);
	// addi r4,r30,1776
	ctx.r4.s64 = ctx.r30.s64 + 1776;
	// lfs f0,1748(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1748);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1752);
	// stfs f0,1748(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1748, temp.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r10,1752(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1752);
	// rlwimi r10,r11,0,1,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x7FFFFFFF) | (ctx.r10.u64 & 0xFFFFFFFF80000000);
	// stw r10,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r10.u32);
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
	// bl 0x82a4ea80
	ctx.lr = 0x8269A914;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,1840
	ctx.r3.s64 = ctx.r31.s64 + 1840;
	// addi r4,r30,1840
	ctx.r4.s64 = ctx.r30.s64 + 1840;
	// bl 0x82873b58
	ctx.lr = 0x8269A920;
	sub_82873B58(ctx, base);
	// addi r3,r31,1864
	ctx.r3.s64 = ctx.r31.s64 + 1864;
	// addi r4,r30,1864
	ctx.r4.s64 = ctx.r30.s64 + 1864;
	// bl 0x82873b58
	ctx.lr = 0x8269A92C;
	sub_82873B58(ctx, base);
	// addi r3,r31,1888
	ctx.r3.s64 = ctx.r31.s64 + 1888;
	// addi r4,r30,1888
	ctx.r4.s64 = ctx.r30.s64 + 1888;
	// bl 0x8282f630
	ctx.lr = 0x8269A938;
	sub_8282F630(ctx, base);
	// addi r3,r31,1912
	ctx.r3.s64 = ctx.r31.s64 + 1912;
	// addi r4,r30,1912
	ctx.r4.s64 = ctx.r30.s64 + 1912;
	// bl 0x8282f630
	ctx.lr = 0x8269A944;
	sub_8282F630(ctx, base);
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

__attribute__((alias("__imp__sub_8269A960"))) PPC_WEAK_FUNC(sub_8269A960);
PPC_FUNC_IMPL(__imp__sub_8269A960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,18288
	ctx.r3.s64 = ctx.r11.s64 + 18288;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269A970"))) PPC_WEAK_FUNC(sub_8269A970);
PPC_FUNC_IMPL(__imp__sub_8269A970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8269a9a8
	if (ctx.cr6.eq) goto loc_8269A9A8;
	// bl 0x824794b8
	ctx.lr = 0x8269A998;
	sub_824794B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8269a9a8
	if (!ctx.cr6.eq) goto loc_8269A9A8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8269a9b4
	goto loc_8269A9B4;
loc_8269A9A8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8269a2e0
	ctx.lr = 0x8269A9B4;
	sub_8269A2E0(ctx, base);
loc_8269A9B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269A9D0"))) PPC_WEAK_FUNC(sub_8269A9D0);
PPC_FUNC_IMPL(__imp__sub_8269A9D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x824794b8
	sub_824794B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269A9D8"))) PPC_WEAK_FUNC(sub_8269A9D8);
PPC_FUNC_IMPL(__imp__sub_8269A9D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8269b798
	sub_8269B798(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269A9E0"))) PPC_WEAK_FUNC(sub_8269A9E0);
PPC_FUNC_IMPL(__imp__sub_8269A9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	ctx.lr = 0x8269AA00;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8269aa40
	if (ctx.cr0.eq) goto loc_8269AA40;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8269a240
	ctx.lr = 0x8269AA14;
	sub_8269A240(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,13592
	ctx.r11.s64 = ctx.r11.s64 + 13592;
	// addi r10,r10,14708
	ctx.r10.s64 = ctx.r10.s64 + 14708;
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
	// b 0x8269aa44
	goto loc_8269AA44;
loc_8269AA40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269AA44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269AA60"))) PPC_WEAK_FUNC(sub_8269AA60);
PPC_FUNC_IMPL(__imp__sub_8269AA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x824794b8
	ctx.lr = 0x8269AA80;
	sub_824794B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8269aa94
	if (ctx.cr6.eq) goto loc_8269AA94;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269a3c0
	ctx.lr = 0x8269AA94;
	sub_8269A3C0(ctx, base);
loc_8269AA94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269AAB0"))) PPC_WEAK_FUNC(sub_8269AAB0);
PPC_FUNC_IMPL(__imp__sub_8269AAB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,18316
	ctx.r3.s64 = ctx.r11.s64 + 18316;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269AAC0"))) PPC_WEAK_FUNC(sub_8269AAC0);
PPC_FUNC_IMPL(__imp__sub_8269AAC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8269aaf8
	if (ctx.cr6.eq) goto loc_8269AAF8;
	// bl 0x82479630
	ctx.lr = 0x8269AAE8;
	sub_82479630(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8269aaf8
	if (!ctx.cr6.eq) goto loc_8269AAF8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8269ab04
	goto loc_8269AB04;
loc_8269AAF8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8269a138
	ctx.lr = 0x8269AB04;
	sub_8269A138(ctx, base);
loc_8269AB04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269AB20"))) PPC_WEAK_FUNC(sub_8269AB20);
PPC_FUNC_IMPL(__imp__sub_8269AB20) {
	PPC_FUNC_PROLOGUE();
	// b 0x82479630
	sub_82479630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269AB28"))) PPC_WEAK_FUNC(sub_8269AB28);
PPC_FUNC_IMPL(__imp__sub_8269AB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	ctx.lr = 0x8269AB48;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8269ab88
	if (ctx.cr0.eq) goto loc_8269AB88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8269a240
	ctx.lr = 0x8269AB5C;
	sub_8269A240(ctx, base);
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
	// b 0x8269ab8c
	goto loc_8269AB8C;
loc_8269AB88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269AB8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269ABA8"))) PPC_WEAK_FUNC(sub_8269ABA8);
PPC_FUNC_IMPL(__imp__sub_8269ABA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82479630
	ctx.lr = 0x8269ABC8;
	sub_82479630(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8269abd8
	if (!ctx.cr6.eq) goto loc_8269ABD8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8269abf0
	goto loc_8269ABF0;
loc_8269ABD8:
	// bl 0x8269b618
	ctx.lr = 0x8269ABDC;
	sub_8269B618(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8269abf0
	if (ctx.cr6.eq) goto loc_8269ABF0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82699d78
	ctx.lr = 0x8269ABF0;
	sub_82699D78(ctx, base);
loc_8269ABF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269AC08"))) PPC_WEAK_FUNC(sub_8269AC08);
PPC_FUNC_IMPL(__imp__sub_8269AC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,1768
	ctx.r3.s64 = ctx.r31.s64 + 1768;
	// bl 0x8239d768
	ctx.lr = 0x8269AC2C;
	sub_8239D768(ctx, base);
	// addi r3,r31,1744
	ctx.r3.s64 = ctx.r31.s64 + 1744;
	// bl 0x8239d768
	ctx.lr = 0x8269AC34;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8269a080
	ctx.lr = 0x8269AC3C;
	sub_8269A080(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8269ac4c
	if (ctx.cr0.eq) goto loc_8269AC4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8269AC4C;
	sub_82332DB8(ctx, base);
loc_8269AC4C:
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

__attribute__((alias("__imp__sub_8269AC68"))) PPC_WEAK_FUNC(sub_8269AC68);
PPC_FUNC_IMPL(__imp__sub_8269AC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,18340
	ctx.r3.s64 = ctx.r11.s64 + 18340;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269AC78"))) PPC_WEAK_FUNC(sub_8269AC78);
PPC_FUNC_IMPL(__imp__sub_8269AC78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8269acb0
	if (ctx.cr6.eq) goto loc_8269ACB0;
	// bl 0x824797c0
	ctx.lr = 0x8269ACA0;
	sub_824797C0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8269acb0
	if (!ctx.cr6.eq) goto loc_8269ACB0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8269acbc
	goto loc_8269ACBC;
loc_8269ACB0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8269a430
	ctx.lr = 0x8269ACBC;
	sub_8269A430(ctx, base);
loc_8269ACBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269ACD8"))) PPC_WEAK_FUNC(sub_8269ACD8);
PPC_FUNC_IMPL(__imp__sub_8269ACD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x824797c0
	sub_824797C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269ACE0"))) PPC_WEAK_FUNC(sub_8269ACE0);
PPC_FUNC_IMPL(__imp__sub_8269ACE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	ctx.lr = 0x8269AD00;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8269ad74
	if (ctx.cr0.eq) goto loc_8269AD74;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82699dd8
	ctx.lr = 0x8269AD14;
	sub_82699DD8(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r8,1744(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,10008
	ctx.r11.s64 = ctx.r11.s64 + 10008;
	// addi r10,r10,11120
	ctx.r10.s64 = ctx.r10.s64 + 11120;
	// addi r9,r9,11172
	ctx.r9.s64 = ctx.r9.s64 + 11172;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r7,1744(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1744);
	// addi r11,r11,15952
	ctx.r11.s64 = ctx.r11.s64 + 15952;
	// addi r10,r10,17064
	ctx.r10.s64 = ctx.r10.s64 + 17064;
	// addi r9,r9,11172
	ctx.r9.s64 = ctx.r9.s64 + 11172;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwimi r7,r8,0,1,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x7FFFFFFF) | (ctx.r7.u64 & 0xFFFFFFFF80000000);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r7.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8269ad78
	goto loc_8269AD78;
loc_8269AD74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269AD78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269AD90"))) PPC_WEAK_FUNC(sub_8269AD90);
PPC_FUNC_IMPL(__imp__sub_8269AD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x824797c0
	ctx.lr = 0x8269ADB0;
	sub_824797C0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8269adc0
	if (!ctx.cr6.eq) goto loc_8269ADC0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8269add8
	goto loc_8269ADD8;
loc_8269ADC0:
	// bl 0x8269b928
	ctx.lr = 0x8269ADC4;
	sub_8269B928(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8269add8
	if (ctx.cr6.eq) goto loc_8269ADD8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82699d78
	ctx.lr = 0x8269ADD8;
	sub_82699D78(ctx, base);
loc_8269ADD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269ADF0"))) PPC_WEAK_FUNC(sub_8269ADF0);
PPC_FUNC_IMPL(__imp__sub_8269ADF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,18364
	ctx.r3.s64 = ctx.r11.s64 + 18364;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269AE00"))) PPC_WEAK_FUNC(sub_8269AE00);
PPC_FUNC_IMPL(__imp__sub_8269AE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8269ae38
	if (ctx.cr6.eq) goto loc_8269AE38;
	// bl 0x82479940
	ctx.lr = 0x8269AE28;
	sub_82479940(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8269ae38
	if (!ctx.cr6.eq) goto loc_8269AE38;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8269ae44
	goto loc_8269AE44;
loc_8269AE38:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8269a588
	ctx.lr = 0x8269AE44;
	sub_8269A588(ctx, base);
loc_8269AE44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269AE60"))) PPC_WEAK_FUNC(sub_8269AE60);
PPC_FUNC_IMPL(__imp__sub_8269AE60) {
	PPC_FUNC_PROLOGUE();
	// b 0x82479940
	sub_82479940(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269AE68"))) PPC_WEAK_FUNC(sub_8269AE68);
PPC_FUNC_IMPL(__imp__sub_8269AE68) {
	PPC_FUNC_PROLOGUE();
	// b 0x82643270
	sub_82643270(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269AE70"))) PPC_WEAK_FUNC(sub_8269AE70);
PPC_FUNC_IMPL(__imp__sub_8269AE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	ctx.lr = 0x8269AE90;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8269aed0
	if (ctx.cr0.eq) goto loc_8269AED0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8269a680
	ctx.lr = 0x8269AEA4;
	sub_8269A680(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,17120
	ctx.r11.s64 = ctx.r11.s64 + 17120;
	// addi r10,r10,18232
	ctx.r10.s64 = ctx.r10.s64 + 18232;
	// addi r9,r9,18284
	ctx.r9.s64 = ctx.r9.s64 + 18284;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8269aed4
	goto loc_8269AED4;
loc_8269AED0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269AED4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269AEF0"))) PPC_WEAK_FUNC(sub_8269AEF0);
PPC_FUNC_IMPL(__imp__sub_8269AEF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82479940
	ctx.lr = 0x8269AF10;
	sub_82479940(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8269af20
	if (!ctx.cr6.eq) goto loc_8269AF20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8269af38
	goto loc_8269AF38;
loc_8269AF20:
	// bl 0x82643270
	ctx.lr = 0x8269AF24;
	sub_82643270(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8269af38
	if (ctx.cr6.eq) goto loc_8269AF38;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82699d78
	ctx.lr = 0x8269AF38;
	sub_82699D78(ctx, base);
loc_8269AF38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269AF50"))) PPC_WEAK_FUNC(sub_8269AF50);
PPC_FUNC_IMPL(__imp__sub_8269AF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827e8468
	ctx.lr = 0x8269AF70;
	sub_827E8468(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8269af80
	if (ctx.cr0.eq) goto loc_8269AF80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8269AF80;
	sub_82332DB8(ctx, base);
loc_8269AF80:
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

__attribute__((alias("__imp__sub_8269AFA0"))) PPC_WEAK_FUNC(sub_8269AFA0);
PPC_FUNC_IMPL(__imp__sub_8269AFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,18388
	ctx.r3.s64 = ctx.r11.s64 + 18388;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269AFB0"))) PPC_WEAK_FUNC(sub_8269AFB0);
PPC_FUNC_IMPL(__imp__sub_8269AFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8269afe8
	if (ctx.cr6.eq) goto loc_8269AFE8;
	// bl 0x82479ac0
	ctx.lr = 0x8269AFD8;
	sub_82479AC0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8269afe8
	if (!ctx.cr6.eq) goto loc_8269AFE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8269aff4
	goto loc_8269AFF4;
loc_8269AFE8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8269a788
	ctx.lr = 0x8269AFF4;
	sub_8269A788(ctx, base);
loc_8269AFF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269B010"))) PPC_WEAK_FUNC(sub_8269B010);
PPC_FUNC_IMPL(__imp__sub_8269B010) {
	PPC_FUNC_PROLOGUE();
	// b 0x82479ac0
	sub_82479AC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269B018"))) PPC_WEAK_FUNC(sub_8269B018);
PPC_FUNC_IMPL(__imp__sub_8269B018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	ctx.lr = 0x8269B038;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8269b078
	if (ctx.cr0.eq) goto loc_8269B078;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8269a888
	ctx.lr = 0x8269B04C;
	sub_8269A888(ctx, base);
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
	// b 0x8269b07c
	goto loc_8269B07C;
loc_8269B078:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269B07C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269B098"))) PPC_WEAK_FUNC(sub_8269B098);
PPC_FUNC_IMPL(__imp__sub_8269B098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82479ac0
	ctx.lr = 0x8269B0B8;
	sub_82479AC0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8269b0c8
	if (!ctx.cr6.eq) goto loc_8269B0C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8269b0e0
	goto loc_8269B0E0;
loc_8269B0C8:
	// bl 0x8269bae8
	ctx.lr = 0x8269B0CC;
	sub_8269BAE8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8269b0e0
	if (ctx.cr6.eq) goto loc_8269B0E0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82699d78
	ctx.lr = 0x8269B0E0;
	sub_82699D78(ctx, base);
loc_8269B0E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269B0F8"))) PPC_WEAK_FUNC(sub_8269B0F8);
PPC_FUNC_IMPL(__imp__sub_8269B0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,1912
	ctx.r3.s64 = ctx.r31.s64 + 1912;
	// bl 0x82400f38
	ctx.lr = 0x8269B11C;
	sub_82400F38(ctx, base);
	// addi r3,r31,1888
	ctx.r3.s64 = ctx.r31.s64 + 1888;
	// bl 0x82400f38
	ctx.lr = 0x8269B124;
	sub_82400F38(ctx, base);
	// addi r3,r31,1864
	ctx.r3.s64 = ctx.r31.s64 + 1864;
	// bl 0x8239d768
	ctx.lr = 0x8269B12C;
	sub_8239D768(ctx, base);
	// addi r3,r31,1840
	ctx.r3.s64 = ctx.r31.s64 + 1840;
	// bl 0x8239d768
	ctx.lr = 0x8269B134;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8269a080
	ctx.lr = 0x8269B13C;
	sub_8269A080(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8269b14c
	if (ctx.cr0.eq) goto loc_8269B14C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8269B14C;
	sub_82332DB8(ctx, base);
loc_8269B14C:
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

__attribute__((alias("__imp__sub_8269B168"))) PPC_WEAK_FUNC(sub_8269B168);
PPC_FUNC_IMPL(__imp__sub_8269B168) {
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
	// li r3,1440
	ctx.r3.s64 = 1440;
	// bl 0x82833108
	ctx.lr = 0x8269B180;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8269b1d4
	if (ctx.cr0.eq) goto loc_8269B1D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bc540
	ctx.lr = 0x8269B190;
	sub_829BC540(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// addi r11,r11,5352
	ctx.r11.s64 = ctx.r11.s64 + 5352;
	// addi r10,r10,6364
	ctx.r10.s64 = ctx.r10.s64 + 6364;
	// addi r9,r9,14028
	ctx.r9.s64 = ctx.r9.s64 + 14028;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,-27328(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27328);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lfs f13,16540(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16540);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stfs f0,1436(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1436, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f13,1432(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1432, temp.u32);
	// b 0x8269b1d8
	goto loc_8269B1D8;
loc_8269B1D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269B1D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269B1F0"))) PPC_WEAK_FUNC(sub_8269B1F0);
PPC_FUNC_IMPL(__imp__sub_8269B1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24456);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8269b230
	if (!ctx.cr0.eq) goto loc_8269B230;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,24456(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24456, ctx.r11.u32);
	// addi r3,r9,4064
	ctx.r3.s64 = ctx.r9.s64 + 4064;
	// bl 0x82816528
	ctx.lr = 0x8269B228;
	sub_82816528(ctx, base);
	// stw r3,24452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24452, ctx.r3.u32);
	// b 0x8269b234
	goto loc_8269B234;
loc_8269B230:
	// lwz r3,24452(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24452);
loc_8269B234:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269B248"))) PPC_WEAK_FUNC(sub_8269B248);
PPC_FUNC_IMPL(__imp__sub_8269B248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8269b298
	ctx.lr = 0x8269B268;
	sub_8269B298(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269B27C;
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

__attribute__((alias("__imp__sub_8269B298"))) PPC_WEAK_FUNC(sub_8269B298);
PPC_FUNC_IMPL(__imp__sub_8269B298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13508
	ctx.r31.s64 = ctx.r11.s64 + 13508;
	// lwz r11,13504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13504);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8269b2e0
	if (!ctx.cr0.eq) goto loc_8269B2E0;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,7580
	ctx.r9.s64 = ctx.r9.s64 + 7580;
	// stw r11,13504(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13504, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27568
	ctx.r3.s64 = ctx.r11.s64 + 27568;
	// bl 0x82a4c758
	ctx.lr = 0x8269B2E0;
	sub_82A4C758(ctx, base);
loc_8269B2E0:
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

__attribute__((alias("__imp__sub_8269B2F8"))) PPC_WEAK_FUNC(sub_8269B2F8);
PPC_FUNC_IMPL(__imp__sub_8269B2F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8269B300;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r28,16(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x8269b33c
	if (!ctx.cr6.gt) goto loc_8269B33C;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8269B320:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82400f38
	ctx.lr = 0x8269B330;
	sub_82400F38(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// bne 0x8269b320
	if (!ctx.cr0.eq) goto loc_8269B320;
loc_8269B33C:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,40
	ctx.r6.s64 = 40;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8269B354;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8269b364
	if (ctx.cr6.eq) goto loc_8269B364;
	// bl 0x82332db8
	ctx.lr = 0x8269B364;
	sub_82332DB8(ctx, base);
loc_8269B364:
	// stw r27,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r27.u32);
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stw r27,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269B378"))) PPC_WEAK_FUNC(sub_8269B378);
PPC_FUNC_IMPL(__imp__sub_8269B378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8269B380;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r28,16(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x8269b3bc
	if (!ctx.cr6.gt) goto loc_8269B3BC;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8269B3A0:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x8239d768
	ctx.lr = 0x8269B3B0;
	sub_8239D768(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// bne 0x8269b3a0
	if (!ctx.cr0.eq) goto loc_8269B3A0;
loc_8269B3BC:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,36
	ctx.r6.s64 = 36;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8269B3D4;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8269b3e4
	if (ctx.cr6.eq) goto loc_8269B3E4;
	// bl 0x82332db8
	ctx.lr = 0x8269B3E4;
	sub_82332DB8(ctx, base);
loc_8269B3E4:
	// stw r27,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r27.u32);
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stw r27,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269B3F8"))) PPC_WEAK_FUNC(sub_8269B3F8);
PPC_FUNC_IMPL(__imp__sub_8269B3F8) {
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
	// li r3,1744
	ctx.r3.s64 = 1744;
	// bl 0x82833108
	ctx.lr = 0x8269B40C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8269b41c
	if (ctx.cr0.eq) goto loc_8269B41C;
	// bl 0x827e9fd8
	ctx.lr = 0x8269B418;
	sub_827E9FD8(ctx, base);
	// b 0x8269b420
	goto loc_8269B420;
loc_8269B41C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269B420:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269B430"))) PPC_WEAK_FUNC(sub_8269B430);
PPC_FUNC_IMPL(__imp__sub_8269B430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24448(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24448);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8269b470
	if (!ctx.cr0.eq) goto loc_8269B470;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,24448(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24448, ctx.r11.u32);
	// addi r3,r9,4072
	ctx.r3.s64 = ctx.r9.s64 + 4072;
	// bl 0x82816528
	ctx.lr = 0x8269B468;
	sub_82816528(ctx, base);
	// stw r3,24444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24444, ctx.r3.u32);
	// b 0x8269b474
	goto loc_8269B474;
loc_8269B470:
	// lwz r3,24444(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24444);
loc_8269B474:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269B488"))) PPC_WEAK_FUNC(sub_8269B488);
PPC_FUNC_IMPL(__imp__sub_8269B488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8269b4d8
	ctx.lr = 0x8269B4A8;
	sub_8269B4D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269B4BC;
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

__attribute__((alias("__imp__sub_8269B4D8"))) PPC_WEAK_FUNC(sub_8269B4D8);
PPC_FUNC_IMPL(__imp__sub_8269B4D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13516
	ctx.r31.s64 = ctx.r11.s64 + 13516;
	// lwz r11,13512(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13512);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8269b520
	if (!ctx.cr0.eq) goto loc_8269B520;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,7600
	ctx.r9.s64 = ctx.r9.s64 + 7600;
	// stw r11,13512(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13512, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27544
	ctx.r3.s64 = ctx.r11.s64 + 27544;
	// bl 0x82a4c758
	ctx.lr = 0x8269B520;
	sub_82A4C758(ctx, base);
loc_8269B520:
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

__attribute__((alias("__imp__sub_8269B538"))) PPC_WEAK_FUNC(sub_8269B538);
PPC_FUNC_IMPL(__imp__sub_8269B538) {
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
	// li r3,1808
	ctx.r3.s64 = 1808;
	// bl 0x82833108
	ctx.lr = 0x8269B54C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8269b55c
	if (ctx.cr0.eq) goto loc_8269B55C;
	// bl 0x827ecc18
	ctx.lr = 0x8269B558;
	sub_827ECC18(ctx, base);
	// b 0x8269b560
	goto loc_8269B560;
loc_8269B55C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269B560:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269B570"))) PPC_WEAK_FUNC(sub_8269B570);
PPC_FUNC_IMPL(__imp__sub_8269B570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24440(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24440);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8269b5b0
	if (!ctx.cr0.eq) goto loc_8269B5B0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,24440(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24440, ctx.r11.u32);
	// addi r3,r9,4096
	ctx.r3.s64 = ctx.r9.s64 + 4096;
	// bl 0x82816528
	ctx.lr = 0x8269B5A8;
	sub_82816528(ctx, base);
	// stw r3,24436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24436, ctx.r3.u32);
	// b 0x8269b5b4
	goto loc_8269B5B4;
loc_8269B5B0:
	// lwz r3,24436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24436);
loc_8269B5B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269B5C8"))) PPC_WEAK_FUNC(sub_8269B5C8);
PPC_FUNC_IMPL(__imp__sub_8269B5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8269b618
	ctx.lr = 0x8269B5E8;
	sub_8269B618(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269B5FC;
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

__attribute__((alias("__imp__sub_8269B618"))) PPC_WEAK_FUNC(sub_8269B618);
PPC_FUNC_IMPL(__imp__sub_8269B618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13524
	ctx.r31.s64 = ctx.r11.s64 + 13524;
	// lwz r11,13520(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13520);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8269b660
	if (!ctx.cr0.eq) goto loc_8269B660;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,8792
	ctx.r9.s64 = ctx.r9.s64 + 8792;
	// stw r11,13520(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13520, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27520
	ctx.r3.s64 = ctx.r11.s64 + 27520;
	// bl 0x82a4c758
	ctx.lr = 0x8269B660;
	sub_82A4C758(ctx, base);
loc_8269B660:
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

__attribute__((alias("__imp__sub_8269B678"))) PPC_WEAK_FUNC(sub_8269B678);
PPC_FUNC_IMPL(__imp__sub_8269B678) {
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
	ctx.lr = 0x8269B690;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8269b6d8
	if (ctx.cr0.eq) goto loc_8269B6D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ecc18
	ctx.lr = 0x8269B6A0;
	sub_827ECC18(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// addi r10,r10,8816
	ctx.r10.s64 = ctx.r10.s64 + 8816;
	// lfs f0,16800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16800);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,9932
	ctx.r9.s64 = ctx.r9.s64 + 9932;
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
	// b 0x8269b6dc
	goto loc_8269B6DC;
loc_8269B6D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269B6DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269B6F0"))) PPC_WEAK_FUNC(sub_8269B6F0);
PPC_FUNC_IMPL(__imp__sub_8269B6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24432(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24432);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8269b730
	if (!ctx.cr0.eq) goto loc_8269B730;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,24432(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24432, ctx.r11.u32);
	// addi r3,r9,4116
	ctx.r3.s64 = ctx.r9.s64 + 4116;
	// bl 0x82816528
	ctx.lr = 0x8269B728;
	sub_82816528(ctx, base);
	// stw r3,24428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24428, ctx.r3.u32);
	// b 0x8269b734
	goto loc_8269B734;
loc_8269B730:
	// lwz r3,24428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24428);
loc_8269B734:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269B748"))) PPC_WEAK_FUNC(sub_8269B748);
PPC_FUNC_IMPL(__imp__sub_8269B748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8269b798
	ctx.lr = 0x8269B768;
	sub_8269B798(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269B77C;
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

__attribute__((alias("__imp__sub_8269B798"))) PPC_WEAK_FUNC(sub_8269B798);
PPC_FUNC_IMPL(__imp__sub_8269B798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13532
	ctx.r31.s64 = ctx.r11.s64 + 13532;
	// lwz r11,13528(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13528);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8269b7e0
	if (!ctx.cr0.eq) goto loc_8269B7E0;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,9984
	ctx.r9.s64 = ctx.r9.s64 + 9984;
	// stw r11,13528(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13528, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27496
	ctx.r3.s64 = ctx.r11.s64 + 27496;
	// bl 0x82a4c758
	ctx.lr = 0x8269B7E0;
	sub_82A4C758(ctx, base);
loc_8269B7E0:
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

__attribute__((alias("__imp__sub_8269B7F8"))) PPC_WEAK_FUNC(sub_8269B7F8);
PPC_FUNC_IMPL(__imp__sub_8269B7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8269B810;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8269b864
	if (ctx.cr0.eq) goto loc_8269B864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e9fd8
	ctx.lr = 0x8269B820;
	sub_827E9FD8(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r11,r11,10008
	ctx.r11.s64 = ctx.r11.s64 + 10008;
	// addi r10,r10,11120
	ctx.r10.s64 = ctx.r10.s64 + 11120;
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
	// rlwinm r10,r10,0,9,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r11.u32);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// b 0x8269b868
	goto loc_8269B868;
loc_8269B864:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269B868:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269B880"))) PPC_WEAK_FUNC(sub_8269B880);
PPC_FUNC_IMPL(__imp__sub_8269B880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24424(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24424);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8269b8c0
	if (!ctx.cr0.eq) goto loc_8269B8C0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,24424(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24424, ctx.r11.u32);
	// addi r3,r9,4140
	ctx.r3.s64 = ctx.r9.s64 + 4140;
	// bl 0x82816528
	ctx.lr = 0x8269B8B8;
	sub_82816528(ctx, base);
	// stw r3,24420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24420, ctx.r3.u32);
	// b 0x8269b8c4
	goto loc_8269B8C4;
loc_8269B8C0:
	// lwz r3,24420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24420);
loc_8269B8C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269B8D8"))) PPC_WEAK_FUNC(sub_8269B8D8);
PPC_FUNC_IMPL(__imp__sub_8269B8D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8269b928
	ctx.lr = 0x8269B8F8;
	sub_8269B928(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269B90C;
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

__attribute__((alias("__imp__sub_8269B928"))) PPC_WEAK_FUNC(sub_8269B928);
PPC_FUNC_IMPL(__imp__sub_8269B928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13540
	ctx.r31.s64 = ctx.r11.s64 + 13540;
	// lwz r11,13536(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13536);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8269b970
	if (!ctx.cr0.eq) goto loc_8269B970;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,11196
	ctx.r9.s64 = ctx.r9.s64 + 11196;
	// stw r11,13536(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13536, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27472
	ctx.r3.s64 = ctx.r11.s64 + 27472;
	// bl 0x82a4c758
	ctx.lr = 0x8269B970;
	sub_82A4C758(ctx, base);
loc_8269B970:
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

__attribute__((alias("__imp__sub_8269B988"))) PPC_WEAK_FUNC(sub_8269B988);
PPC_FUNC_IMPL(__imp__sub_8269B988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8269b9b0
	if (ctx.cr6.eq) goto loc_8269B9B0;
	// bl 0x82332db8
	ctx.lr = 0x8269B9B0;
	sub_82332DB8(ctx, base);
loc_8269B9B0:
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8269B9D4;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8269b9e4
	if (ctx.cr6.eq) goto loc_8269B9E4;
	// bl 0x82332db8
	ctx.lr = 0x8269B9E4;
	sub_82332DB8(ctx, base);
loc_8269B9E4:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269BA08"))) PPC_WEAK_FUNC(sub_8269BA08);
PPC_FUNC_IMPL(__imp__sub_8269BA08) {
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
	// li r3,1936
	ctx.r3.s64 = 1936;
	// bl 0x82833108
	ctx.lr = 0x8269BA1C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8269ba2c
	if (ctx.cr0.eq) goto loc_8269BA2C;
	// bl 0x827e8d80
	ctx.lr = 0x8269BA28;
	sub_827E8D80(ctx, base);
	// b 0x8269ba30
	goto loc_8269BA30;
loc_8269BA2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269BA30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269BA40"))) PPC_WEAK_FUNC(sub_8269BA40);
PPC_FUNC_IMPL(__imp__sub_8269BA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24416(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24416);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8269ba80
	if (!ctx.cr0.eq) goto loc_8269BA80;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,24416(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24416, ctx.r11.u32);
	// addi r3,r9,4160
	ctx.r3.s64 = ctx.r9.s64 + 4160;
	// bl 0x82816528
	ctx.lr = 0x8269BA78;
	sub_82816528(ctx, base);
	// stw r3,24412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24412, ctx.r3.u32);
	// b 0x8269ba84
	goto loc_8269BA84;
loc_8269BA80:
	// lwz r3,24412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24412);
loc_8269BA84:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269BA98"))) PPC_WEAK_FUNC(sub_8269BA98);
PPC_FUNC_IMPL(__imp__sub_8269BA98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8269bae8
	ctx.lr = 0x8269BAB8;
	sub_8269BAE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269BACC;
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

__attribute__((alias("__imp__sub_8269BAE8"))) PPC_WEAK_FUNC(sub_8269BAE8);
PPC_FUNC_IMPL(__imp__sub_8269BAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13548
	ctx.r31.s64 = ctx.r11.s64 + 13548;
	// lwz r11,13544(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13544);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8269bb30
	if (!ctx.cr0.eq) goto loc_8269BB30;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,13572
	ctx.r9.s64 = ctx.r9.s64 + 13572;
	// stw r11,13544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13544, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27448
	ctx.r3.s64 = ctx.r11.s64 + 27448;
	// bl 0x82a4c758
	ctx.lr = 0x8269BB30;
	sub_82A4C758(ctx, base);
loc_8269BB30:
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

__attribute__((alias("__imp__sub_8269BB48"))) PPC_WEAK_FUNC(sub_8269BB48);
PPC_FUNC_IMPL(__imp__sub_8269BB48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8269af50
	sub_8269AF50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269BB50"))) PPC_WEAK_FUNC(sub_8269BB50);
PPC_FUNC_IMPL(__imp__sub_8269BB50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8269aa60
	sub_8269AA60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269BB58"))) PPC_WEAK_FUNC(sub_8269BB58);
PPC_FUNC_IMPL(__imp__sub_8269BB58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8269a528
	sub_8269A528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269BB60"))) PPC_WEAK_FUNC(sub_8269BB60);
PPC_FUNC_IMPL(__imp__sub_8269BB60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82699c68
	sub_82699C68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269BB68"))) PPC_WEAK_FUNC(sub_8269BB68);
PPC_FUNC_IMPL(__imp__sub_8269BB68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8269b0f8
	sub_8269B0F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269BB70"))) PPC_WEAK_FUNC(sub_8269BB70);
PPC_FUNC_IMPL(__imp__sub_8269BB70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8269a030
	sub_8269A030(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269BB78"))) PPC_WEAK_FUNC(sub_8269BB78);
PPC_FUNC_IMPL(__imp__sub_8269BB78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8269af50
	sub_8269AF50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269BB80"))) PPC_WEAK_FUNC(sub_8269BB80);
PPC_FUNC_IMPL(__imp__sub_8269BB80) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8269aef0
	sub_8269AEF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269BB88"))) PPC_WEAK_FUNC(sub_8269BB88);
PPC_FUNC_IMPL(__imp__sub_8269BB88) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8269ad90
	sub_8269AD90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269BB90"))) PPC_WEAK_FUNC(sub_8269BB90);
PPC_FUNC_IMPL(__imp__sub_8269BB90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8269a1f0
	sub_8269A1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269BB98"))) PPC_WEAK_FUNC(sub_8269BB98);
PPC_FUNC_IMPL(__imp__sub_8269BB98) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8269ac08
	sub_8269AC08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269BBA0"))) PPC_WEAK_FUNC(sub_8269BBA0);
PPC_FUNC_IMPL(__imp__sub_8269BBA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8269aba8
	sub_8269ABA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269BBA8"))) PPC_WEAK_FUNC(sub_8269BBA8);
PPC_FUNC_IMPL(__imp__sub_8269BBA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8269a630
	sub_8269A630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269BBB0"))) PPC_WEAK_FUNC(sub_8269BBB0);
PPC_FUNC_IMPL(__imp__sub_8269BBB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826997d0
	sub_826997D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269BBB8"))) PPC_WEAK_FUNC(sub_8269BBB8);
PPC_FUNC_IMPL(__imp__sub_8269BBB8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8269a3c0
	sub_8269A3C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269BBC0"))) PPC_WEAK_FUNC(sub_8269BBC0);
PPC_FUNC_IMPL(__imp__sub_8269BBC0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8269a030
	sub_8269A030(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269BBC8"))) PPC_WEAK_FUNC(sub_8269BBC8);
PPC_FUNC_IMPL(__imp__sub_8269BBC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8269b0f8
	sub_8269B0F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269BBD0"))) PPC_WEAK_FUNC(sub_8269BBD0);
PPC_FUNC_IMPL(__imp__sub_8269BBD0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826998e8
	sub_826998E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269BBD8"))) PPC_WEAK_FUNC(sub_8269BBD8);
PPC_FUNC_IMPL(__imp__sub_8269BBD8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8269b098
	sub_8269B098(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269BBE0"))) PPC_WEAK_FUNC(sub_8269BBE0);
PPC_FUNC_IMPL(__imp__sub_8269BBE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82699d78
	sub_82699D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269BBE8"))) PPC_WEAK_FUNC(sub_8269BBE8);
PPC_FUNC_IMPL(__imp__sub_8269BBE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8269a838
	sub_8269A838(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269BBF0"))) PPC_WEAK_FUNC(sub_8269BBF0);
PPC_FUNC_IMPL(__imp__sub_8269BBF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8269ac08
	sub_8269AC08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269BBF8"))) PPC_WEAK_FUNC(sub_8269BBF8);
PPC_FUNC_IMPL(__imp__sub_8269BBF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,19524
	ctx.r3.s64 = ctx.r11.s64 + 19524;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269BC08"))) PPC_WEAK_FUNC(sub_8269BC08);
PPC_FUNC_IMPL(__imp__sub_8269BC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8269bc40
	if (ctx.cr6.eq) goto loc_8269BC40;
	// bl 0x8269c9d0
	ctx.lr = 0x8269BC30;
	sub_8269C9D0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8269bc40
	if (!ctx.cr6.eq) goto loc_8269BC40;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8269bc4c
	goto loc_8269BC4C;
loc_8269BC40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82699840
	ctx.lr = 0x8269BC4C;
	sub_82699840(ctx, base);
loc_8269BC4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269BC68"))) PPC_WEAK_FUNC(sub_8269BC68);
PPC_FUNC_IMPL(__imp__sub_8269BC68) {
	PPC_FUNC_PROLOGUE();
	// b 0x8269c9d0
	sub_8269C9D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269BC70"))) PPC_WEAK_FUNC(sub_8269BC70);
PPC_FUNC_IMPL(__imp__sub_8269BC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1696
	ctx.r3.s64 = 1696;
	// bl 0x82833108
	ctx.lr = 0x8269BC8C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8269bca0
	if (ctx.cr0.eq) goto loc_8269BCA0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269bd18
	ctx.lr = 0x8269BC9C;
	sub_8269BD18(ctx, base);
	// b 0x8269bca4
	goto loc_8269BCA4;
loc_8269BCA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269BCA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269BCB8"))) PPC_WEAK_FUNC(sub_8269BCB8);
PPC_FUNC_IMPL(__imp__sub_8269BCB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x8269c9d0
	ctx.lr = 0x8269BCD8;
	sub_8269C9D0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8269bce8
	if (!ctx.cr6.eq) goto loc_8269BCE8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8269bd00
	goto loc_8269BD00;
loc_8269BCE8:
	// bl 0x825873f8
	ctx.lr = 0x8269BCEC;
	sub_825873F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8269bd00
	if (ctx.cr6.eq) goto loc_8269BD00;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826997d0
	ctx.lr = 0x8269BD00;
	sub_826997D0(ctx, base);
loc_8269BD00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269BD18"))) PPC_WEAK_FUNC(sub_8269BD18);
PPC_FUNC_IMPL(__imp__sub_8269BD18) {
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
	ctx.lr = 0x8269BD38;
	sub_82699938(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// addi r11,r11,19608
	ctx.r11.s64 = ctx.r11.s64 + 19608;
	// addi r10,r10,20720
	ctx.r10.s64 = ctx.r10.s64 + 20720;
	// addi r9,r9,8616
	ctx.r9.s64 = ctx.r9.s64 + 8616;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1616);
	// stw r11,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r11.u32);
	// lwz r11,1620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1620);
	// stw r11,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r11.u32);
	// lwz r11,1624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1624);
	// stw r11,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r11.u32);
	// lwz r11,1628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1628);
	// stw r11,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r11.u32);
	// lwz r11,1632(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1632);
	// stw r11,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r11.u32);
	// lfs f0,1636(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1636);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1636(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1636, temp.u32);
	// lwz r11,1640(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1640);
	// stw r11,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r11.u32);
	// lwz r11,1644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// lwz r10,1644(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1644);
	// rlwimi r10,r11,0,1,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x7FFFFFFF) | (ctx.r10.u64 & 0xFFFFFFFF80000000);
	// stw r10,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,1644(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1644);
	// rlwimi r10,r11,0,1,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r10,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,1644(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1644);
	// rlwimi r10,r11,0,2,2
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x20000000) | (ctx.r10.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r10,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,1644(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1644);
	// rlwimi r10,r11,0,3,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x10000000) | (ctx.r10.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r10,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,1644(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1644);
	// rlwimi r10,r11,0,4,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x8000000) | (ctx.r10.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r10,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,1644(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1644);
	// rlwimi r10,r11,0,5,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x4000000) | (ctx.r10.u64 & 0xFFFFFFFFFBFFFFFF);
	// stw r10,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,1644(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1644);
	// rlwimi r10,r11,0,6,6
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x2000000) | (ctx.r10.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r10,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,1644(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1644);
	// rlwimi r10,r11,0,7,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x1000000) | (ctx.r10.u64 & 0xFFFFFFFFFEFFFFFF);
	// stw r10,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r10.u32);
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269BE78"))) PPC_WEAK_FUNC(sub_8269BE78);
PPC_FUNC_IMPL(__imp__sub_8269BE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,19544
	ctx.r3.s64 = ctx.r11.s64 + 19544;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269BE88"))) PPC_WEAK_FUNC(sub_8269BE88);
PPC_FUNC_IMPL(__imp__sub_8269BE88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8269bec0
	if (ctx.cr6.eq) goto loc_8269BEC0;
	// bl 0x8269cb10
	ctx.lr = 0x8269BEB0;
	sub_8269CB10(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8269bec0
	if (!ctx.cr6.eq) goto loc_8269BEC0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8269becc
	goto loc_8269BECC;
loc_8269BEC0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8269bc08
	ctx.lr = 0x8269BECC;
	sub_8269BC08(ctx, base);
loc_8269BECC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269BEE8"))) PPC_WEAK_FUNC(sub_8269BEE8);
PPC_FUNC_IMPL(__imp__sub_8269BEE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8269cb10
	sub_8269CB10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269BEF0"))) PPC_WEAK_FUNC(sub_8269BEF0);
PPC_FUNC_IMPL(__imp__sub_8269BEF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8269BF0C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8269bf20
	if (ctx.cr0.eq) goto loc_8269BF20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269bf88
	ctx.lr = 0x8269BF1C;
	sub_8269BF88(ctx, base);
	// b 0x8269bf24
	goto loc_8269BF24;
loc_8269BF20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269BF24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269BF38"))) PPC_WEAK_FUNC(sub_8269BF38);
PPC_FUNC_IMPL(__imp__sub_8269BF38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x8269cb10
	ctx.lr = 0x8269BF58;
	sub_8269CB10(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8269bf6c
	if (ctx.cr6.eq) goto loc_8269BF6C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269bcb8
	ctx.lr = 0x8269BF6C;
	sub_8269BCB8(ctx, base);
loc_8269BF6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269BF88"))) PPC_WEAK_FUNC(sub_8269BF88);
PPC_FUNC_IMPL(__imp__sub_8269BF88) {
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
	// bl 0x8269bd18
	ctx.lr = 0x8269BFA8;
	sub_8269BD18(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// addi r11,r11,20792
	ctx.r11.s64 = ctx.r11.s64 + 20792;
	// addi r10,r10,21904
	ctx.r10.s64 = ctx.r10.s64 + 21904;
	// addi r9,r9,8616
	ctx.r9.s64 = ctx.r9.s64 + 8616;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1696(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1696);
	// stw r11,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r11.u32);
	// lwz r11,1700(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1700);
	// stw r11,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r11.u32);
	// lfs f0,1704(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1704);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1704(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1704, temp.u32);
	// lwz r11,1732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	// lfs f0,1708(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1708);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1708(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1708, temp.u32);
	// lfs f0,1712(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1712(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1712, temp.u32);
	// lfs f0,1716(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1716(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1716, temp.u32);
	// lfs f0,1720(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1720);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1720(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1720, temp.u32);
	// lfs f0,1724(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1724);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1724(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1724, temp.u32);
	// lfs f0,1728(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1728);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1728(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1728, temp.u32);
	// lwz r10,1732(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1732);
	// rlwimi r10,r11,0,1,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x7FFFFFFF) | (ctx.r10.u64 & 0xFFFFFFFF80000000);
	// stw r10,1732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1732, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269C040"))) PPC_WEAK_FUNC(sub_8269C040);
PPC_FUNC_IMPL(__imp__sub_8269C040) {
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
	// bl 0x827d2640
	ctx.lr = 0x8269C058;
	sub_827D2640(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// addi r11,r11,21904
	ctx.r11.s64 = ctx.r11.s64 + 21904;
	// lfs f12,24724(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24724);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lfs f11,20412(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20412);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lfs f10,16540(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16540);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r6,20792
	ctx.r9.s64 = ctx.r6.s64 + 20792;
	// stfs f0,1708(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1708, temp.u32);
	// addi r10,r10,8616
	ctx.r10.s64 = ctx.r10.s64 + 8616;
	// stfs f0,1724(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1724, temp.u32);
	// li r8,7000
	ctx.r8.s64 = 7000;
	// stfs f13,1704(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1704, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f12,1712(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1712, temp.u32);
	// stfs f11,1716(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1716, temp.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stfs f10,1728(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1728, temp.u32);
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// stw r8,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r7.u32);
	// lwz r11,1732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	// lfs f0,1440(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1720(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1720, temp.u32);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,1732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1732, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269C0F8"))) PPC_WEAK_FUNC(sub_8269C0F8);
PPC_FUNC_IMPL(__imp__sub_8269C0F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8269C100;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x827d2a88
	ctx.lr = 0x8269C118;
	sub_827D2A88(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82333a20
	ctx.lr = 0x8269C120;
	sub_82333A20(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8269c5a0
	if (ctx.cr0.eq) goto loc_8269C5A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824e9ed0
	ctx.lr = 0x8269C130;
	sub_824E9ED0(ctx, base);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8269C144;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8269c5a0
	if (ctx.cr0.eq) goto loc_8269C5A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269C15C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x824090e0
	ctx.lr = 0x8269C160;
	sub_824090E0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8269c5a0
	if (ctx.cr0.eq) goto loc_8269C5A0;
	// lwz r11,5596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5596);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// lwz r9,5596(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5596);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// lwa r6,1696(r31)
	ctx.r6.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 1696));
	// lfs f11,16444(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16444);
	ctx.f11.f64 = double(temp.f32);
	// std r6,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfs f10,24000(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24000);
	ctx.f10.f64 = double(temp.f32);
	// lwz r4,5592(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5592);
	// lfs f0,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfd f9,16864(r7)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 16864);
	// lfd f12,16368(r5)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r5.u32 + 16368);
	// lwz r3,5600(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5600);
	// lfd f0,128(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fsubs f10,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lwz r11,1700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1700);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lwz r9,5592(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5592);
	// lwz r8,5600(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5600);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r4.u32);
	// lfs f0,1716(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r3,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// fsel f11,f10,f11,f9
	ctx.f11.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f9.f64;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// fsub f10,f11,f12
	ctx.f10.f64 = ctx.f11.f64 - ctx.f12.f64;
	// fsel f12,f10,f12,f11
	ctx.f12.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f11.f64;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f12.u64);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8269c278
	if (!ctx.cr6.lt) goto loc_8269C278;
	// cmpwi cr6,r11,5000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5000, ctx.xer);
	// ble cr6,0x8269c258
	if (!ctx.cr6.gt) goto loc_8269C258;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f12,128(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f12,23968(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23968);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_8269C258:
	// fmuls f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8269c2d0
	if (!ctx.cr6.gt) goto loc_8269C2D0;
	// b 0x8269c2cc
	goto loc_8269C2CC;
loc_8269C278:
	// ble cr6,0x8269c2d0
	if (!ctx.cr6.gt) goto loc_8269C2D0;
	// cmpwi cr6,r11,-5000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -5000, ctx.xer);
	// bge cr6,0x8269c2b0
	if (!ctx.cr6.lt) goto loc_8269C2B0;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f12,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f12,23968(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23968);
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_8269C2B0:
	// fmuls f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8269c2d0
	if (!ctx.cr6.lt) goto loc_8269C2D0;
loc_8269C2CC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8269C2D0:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x824f97d8
	ctx.lr = 0x8269C2E0;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82817f30
	ctx.lr = 0x8269C2EC;
	sub_82817F30(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x824f97d8
	ctx.lr = 0x8269C320;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82817f30
	ctx.lr = 0x8269C32C;
	sub_82817F30(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lfs f1,1708(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x8269cbe0
	ctx.lr = 0x8269C368;
	sub_8269CBE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82817b48
	ctx.lr = 0x8269C374;
	sub_82817B48(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,1696(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// stw r11,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r11.u32);
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r7.u32);
	// bge cr6,0x8269c3a4
	if (!ctx.cr6.lt) goto loc_8269C3A4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x8269c3b0
	goto loc_8269C3B0;
loc_8269C3A4:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8269c3b0
	if (!ctx.cr6.lt) goto loc_8269C3B0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8269C3B0:
	// stw r10,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r10.u32);
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// lwz r11,11496(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11496);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f0,1720(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x8269c3e0
	if (ctx.cr6.eq) goto loc_8269C3E0;
	// lfs f13,1728(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1728);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8269c3f8
	if (!ctx.cr6.gt) goto loc_8269C3F8;
	// lfs f13,1724(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1724);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x8269c3f4
	goto loc_8269C3F4;
loc_8269C3E0:
	// lfs f13,1440(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8269c3f8
	if (!ctx.cr6.lt) goto loc_8269C3F8;
	// lfs f13,1724(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1724);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_8269C3F4:
	// stfs f0,1720(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1720, temp.u32);
loc_8269C3F8:
	// lfs f0,1720(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1728(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1728);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,1440(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	ctx.f11.f64 = double(temp.f32);
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fsub f13,f0,f11
	ctx.f13.f64 = ctx.f0.f64 - ctx.f11.f64;
	// fsel f0,f13,f11,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,1720(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1720, temp.u32);
	// stfs f0,24(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 24, temp.u32);
	// lwz r3,1608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1608);
	// bl 0x82438130
	ctx.lr = 0x8269C428;
	sub_82438130(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8269c5a0
	if (ctx.cr0.eq) goto loc_8269C5A0;
	// lwz r11,1732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8269c5a0
	if (ctx.cr0.eq) goto loc_8269C5A0;
	// lwz r3,1896(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1896);
	// bl 0x8269cb70
	ctx.lr = 0x8269C444;
	sub_8269CB70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8269c5a0
	if (ctx.cr0.eq) goto loc_8269C5A0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827dff88
	ctx.lr = 0x8269C454;
	sub_827DFF88(ctx, base);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lis r31,-32243
	ctx.r31.s64 = -2113077248;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r30,r31,-24640
	ctx.r30.s64 = ctx.r31.s64 + -24640;
	// lfs f31,-2660(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -2660);
	ctx.f31.f64 = double(temp.f32);
	// lfs f1,-16172(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -16172);
	ctx.f1.f64 = double(temp.f32);
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
	ctx.lr = 0x8269C484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,-24640(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -24640);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r9,r11,32716
	ctx.r9.s64 = ctx.r11.s64 + 32716;
	// lfs f0,13184(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 13184);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lfs f12,32716(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32716);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f9,904(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 904);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lfs f0,-12104(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// stw r6,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r6.u32);
	// lfs f11,304(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 304);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lfs f10,204(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 204);
	ctx.f10.f64 = double(temp.f32);
	// lwz r27,180(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lfs f8,908(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 908);
	ctx.f8.f64 = double(temp.f32);
	// lwz r26,152(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stfs f10,168(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r7,168(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r31,184(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stfs f8,144(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r30,144(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r29,148(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r28,160(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stfs f9,176(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r6,176(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stfs f31,248(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// stfs f12,252(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r8,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r8.u32);
	// stw r7,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r7.u32);
	// stw r6,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r6.u32);
	// stw r27,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r27.u32);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// stw r30,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// stw r29,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
	// stw r26,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r26.u32);
	// lwz r31,96(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a4ea80
	ctx.lr = 0x8269C574;
	sub_82A4EA80(ctx, base);
	// lwz r11,1028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1028);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// ld r5,200(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// ld r6,208(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// ld r7,216(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// ld r8,224(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// ld r9,232(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// ld r10,240(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269C5A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8269C5A0:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269C5B0"))) PPC_WEAK_FUNC(sub_8269C5B0);
PPC_FUNC_IMPL(__imp__sub_8269C5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8269c5f8
	if (ctx.cr6.eq) goto loc_8269C5F8;
	// bl 0x8269c890
	ctx.lr = 0x8269C5D8;
	sub_8269C890(ctx, base);
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
	ctx.lr = 0x8269C5F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8269c5fc
	if (!ctx.cr0.eq) goto loc_8269C5FC;
loc_8269C5F8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8269C5FC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8269c608
	if (ctx.cr6.eq) goto loc_8269C608;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8269C608:
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

__attribute__((alias("__imp__sub_8269C628"))) PPC_WEAK_FUNC(sub_8269C628);
PPC_FUNC_IMPL(__imp__sub_8269C628) {
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
	// li r3,1456
	ctx.r3.s64 = 1456;
	// bl 0x82833108
	ctx.lr = 0x8269C63C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8269c64c
	if (ctx.cr0.eq) goto loc_8269C64C;
	// bl 0x827ed898
	ctx.lr = 0x8269C648;
	sub_827ED898(ctx, base);
	// b 0x8269c650
	goto loc_8269C650;
loc_8269C64C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269C650:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269C660"))) PPC_WEAK_FUNC(sub_8269C660);
PPC_FUNC_IMPL(__imp__sub_8269C660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24408(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24408);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8269c6a0
	if (!ctx.cr0.eq) goto loc_8269C6A0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,24408(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24408, ctx.r11.u32);
	// addi r3,r9,19476
	ctx.r3.s64 = ctx.r9.s64 + 19476;
	// bl 0x82816528
	ctx.lr = 0x8269C698;
	sub_82816528(ctx, base);
	// stw r3,24404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24404, ctx.r3.u32);
	// b 0x8269c6a4
	goto loc_8269C6A4;
loc_8269C6A0:
	// lwz r3,24404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24404);
loc_8269C6A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269C6B8"))) PPC_WEAK_FUNC(sub_8269C6B8);
PPC_FUNC_IMPL(__imp__sub_8269C6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8269c708
	ctx.lr = 0x8269C6D8;
	sub_8269C708(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269C6EC;
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

__attribute__((alias("__imp__sub_8269C708"))) PPC_WEAK_FUNC(sub_8269C708);
PPC_FUNC_IMPL(__imp__sub_8269C708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13556
	ctx.r31.s64 = ctx.r11.s64 + 13556;
	// lwz r11,13552(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13552);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8269c750
	if (!ctx.cr0.eq) goto loc_8269C750;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,19568
	ctx.r9.s64 = ctx.r9.s64 + 19568;
	// stw r11,13552(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13552, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27664
	ctx.r3.s64 = ctx.r11.s64 + 27664;
	// bl 0x82a4c758
	ctx.lr = 0x8269C750;
	sub_82A4C758(ctx, base);
loc_8269C750:
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

__attribute__((alias("__imp__sub_8269C768"))) PPC_WEAK_FUNC(sub_8269C768);
PPC_FUNC_IMPL(__imp__sub_8269C768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8269C780;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8269c7cc
	if (ctx.cr0.eq) goto loc_8269C7CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ee580
	ctx.lr = 0x8269C790;
	sub_827EE580(ctx, base);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,4856
	ctx.r10.s64 = ctx.r10.s64 + 4856;
	// li r9,92
	ctx.r9.s64 = 92;
	// li r8,150
	ctx.r8.s64 = 150;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stb r8,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r8.u8);
	// b 0x8269c7d0
	goto loc_8269C7D0;
loc_8269C7CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269C7D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269C7E8"))) PPC_WEAK_FUNC(sub_8269C7E8);
PPC_FUNC_IMPL(__imp__sub_8269C7E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24400(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24400);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8269c828
	if (!ctx.cr0.eq) goto loc_8269C828;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,24400(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24400, ctx.r11.u32);
	// addi r3,r9,19492
	ctx.r3.s64 = ctx.r9.s64 + 19492;
	// bl 0x82816528
	ctx.lr = 0x8269C820;
	sub_82816528(ctx, base);
	// stw r3,24396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24396, ctx.r3.u32);
	// b 0x8269c82c
	goto loc_8269C82C;
loc_8269C828:
	// lwz r3,24396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24396);
loc_8269C82C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269C840"))) PPC_WEAK_FUNC(sub_8269C840);
PPC_FUNC_IMPL(__imp__sub_8269C840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8269c890
	ctx.lr = 0x8269C860;
	sub_8269C890(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269C874;
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

__attribute__((alias("__imp__sub_8269C890"))) PPC_WEAK_FUNC(sub_8269C890);
PPC_FUNC_IMPL(__imp__sub_8269C890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13564
	ctx.r31.s64 = ctx.r11.s64 + 13564;
	// lwz r11,13560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13560);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8269c8d8
	if (!ctx.cr0.eq) goto loc_8269C8D8;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,19588
	ctx.r9.s64 = ctx.r9.s64 + 19588;
	// stw r11,13560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13560, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27640
	ctx.r3.s64 = ctx.r11.s64 + 27640;
	// bl 0x82a4c758
	ctx.lr = 0x8269C8D8;
	sub_82A4C758(ctx, base);
loc_8269C8D8:
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

__attribute__((alias("__imp__sub_8269C8F0"))) PPC_WEAK_FUNC(sub_8269C8F0);
PPC_FUNC_IMPL(__imp__sub_8269C8F0) {
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
	// li r3,1696
	ctx.r3.s64 = 1696;
	// bl 0x82833108
	ctx.lr = 0x8269C904;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8269c914
	if (ctx.cr0.eq) goto loc_8269C914;
	// bl 0x827d2640
	ctx.lr = 0x8269C910;
	sub_827D2640(ctx, base);
	// b 0x8269c918
	goto loc_8269C918;
loc_8269C914:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269C918:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269C928"))) PPC_WEAK_FUNC(sub_8269C928);
PPC_FUNC_IMPL(__imp__sub_8269C928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24392(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24392);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8269c968
	if (!ctx.cr0.eq) goto loc_8269C968;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,24392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24392, ctx.r11.u32);
	// addi r3,r9,19524
	ctx.r3.s64 = ctx.r9.s64 + 19524;
	// bl 0x82816528
	ctx.lr = 0x8269C960;
	sub_82816528(ctx, base);
	// stw r3,24388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24388, ctx.r3.u32);
	// b 0x8269c96c
	goto loc_8269C96C;
loc_8269C968:
	// lwz r3,24388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24388);
loc_8269C96C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269C980"))) PPC_WEAK_FUNC(sub_8269C980);
PPC_FUNC_IMPL(__imp__sub_8269C980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8269c9d0
	ctx.lr = 0x8269C9A0;
	sub_8269C9D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269C9B4;
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

__attribute__((alias("__imp__sub_8269C9D0"))) PPC_WEAK_FUNC(sub_8269C9D0);
PPC_FUNC_IMPL(__imp__sub_8269C9D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13572
	ctx.r31.s64 = ctx.r11.s64 + 13572;
	// lwz r11,13568(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13568);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8269ca18
	if (!ctx.cr0.eq) goto loc_8269CA18;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,20772
	ctx.r9.s64 = ctx.r9.s64 + 20772;
	// stw r11,13568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13568, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27616
	ctx.r3.s64 = ctx.r11.s64 + 27616;
	// bl 0x82a4c758
	ctx.lr = 0x8269CA18;
	sub_82A4C758(ctx, base);
loc_8269CA18:
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

__attribute__((alias("__imp__sub_8269CA30"))) PPC_WEAK_FUNC(sub_8269CA30);
PPC_FUNC_IMPL(__imp__sub_8269CA30) {
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
	// li r3,1744
	ctx.r3.s64 = 1744;
	// bl 0x82833108
	ctx.lr = 0x8269CA44;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8269ca54
	if (ctx.cr0.eq) goto loc_8269CA54;
	// bl 0x8269c040
	ctx.lr = 0x8269CA50;
	sub_8269C040(ctx, base);
	// b 0x8269ca58
	goto loc_8269CA58;
loc_8269CA54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269CA58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269CA68"))) PPC_WEAK_FUNC(sub_8269CA68);
PPC_FUNC_IMPL(__imp__sub_8269CA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24384(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24384);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8269caa8
	if (!ctx.cr0.eq) goto loc_8269CAA8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,24384(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24384, ctx.r11.u32);
	// addi r3,r9,19544
	ctx.r3.s64 = ctx.r9.s64 + 19544;
	// bl 0x82816528
	ctx.lr = 0x8269CAA0;
	sub_82816528(ctx, base);
	// stw r3,24380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24380, ctx.r3.u32);
	// b 0x8269caac
	goto loc_8269CAAC;
loc_8269CAA8:
	// lwz r3,24380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24380);
loc_8269CAAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269CAC0"))) PPC_WEAK_FUNC(sub_8269CAC0);
PPC_FUNC_IMPL(__imp__sub_8269CAC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8269cb10
	ctx.lr = 0x8269CAE0;
	sub_8269CB10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269CAF4;
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

__attribute__((alias("__imp__sub_8269CB10"))) PPC_WEAK_FUNC(sub_8269CB10);
PPC_FUNC_IMPL(__imp__sub_8269CB10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13580
	ctx.r31.s64 = ctx.r11.s64 + 13580;
	// lwz r11,13576(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13576);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8269cb58
	if (!ctx.cr0.eq) goto loc_8269CB58;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,21956
	ctx.r9.s64 = ctx.r9.s64 + 21956;
	// stw r11,13576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13576, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27592
	ctx.r3.s64 = ctx.r11.s64 + 27592;
	// bl 0x82a4c758
	ctx.lr = 0x8269CB58;
	sub_82A4C758(ctx, base);
loc_8269CB58:
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

__attribute__((alias("__imp__sub_8269CB70"))) PPC_WEAK_FUNC(sub_8269CB70);
PPC_FUNC_IMPL(__imp__sub_8269CB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x8269cbb4
	if (ctx.cr6.eq) goto loc_8269CBB4;
	// bl 0x8269c708
	ctx.lr = 0x8269CB90;
	sub_8269C708(ctx, base);
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
	ctx.lr = 0x8269CBA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8269cbb8
	if (!ctx.cr0.eq) goto loc_8269CBB8;
loc_8269CBB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269CBB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269CBD0"))) PPC_WEAK_FUNC(sub_8269CBD0);
PPC_FUNC_IMPL(__imp__sub_8269CBD0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8269bf38
	sub_8269BF38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269CBD8"))) PPC_WEAK_FUNC(sub_8269CBD8);
PPC_FUNC_IMPL(__imp__sub_8269CBD8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8269bcb8
	sub_8269BCB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269CBE0"))) PPC_WEAK_FUNC(sub_8269CBE0);
PPC_FUNC_IMPL(__imp__sub_8269CBE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8269CBE8;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82a61744
	ctx.lr = 0x8269CBF0;
	__savefpr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f29,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f0,f11,f10,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmadds f30,f8,f9,f0
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fcmpu cr6,f30,f29
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// bge cr6,0x8269cc4c
	if (!ctx.cr6.lt) goto loc_8269CC4C;
	// fneg f1,f30
	ctx.f1.u64 = ctx.f30.u64 ^ 0x8000000000000000;
loc_8269CC4C:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,30328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30328);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8269cca4
	if (!ctx.cr6.lt) goto loc_8269CCA4;
	// bl 0x82a4d550
	ctx.lr = 0x8269CC60;
	sub_82A4D550(ctx, base);
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82a4e038
	ctx.lr = 0x8269CC6C;
	sub_82A4E038(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fdivs f27,f0,f13
	ctx.f27.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f1,f12,f28
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// bl 0x82a4e038
	ctx.lr = 0x8269CC88;
	sub_82A4E038(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f28,f31
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// fmuls f31,f0,f27
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// bl 0x82a4e038
	ctx.lr = 0x8269CC98;
	sub_82A4E038(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// b 0x8269ccb4
	goto loc_8269CCB4;
loc_8269CCA4:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// lfs f13,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f13,f31
	ctx.f31.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
loc_8269CCB4:
	// fcmpu cr6,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// bge cr6,0x8269ccc0
	if (!ctx.cr6.lt) goto loc_8269CCC0;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_8269CCC0:
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f10,f31,f10
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f10.f64));
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f13,f9,f31,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fmadds f13,f8,f31,f12
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fmadds f13,f7,f31,f11
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f13,8(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// fmadds f0,f6,f0,f10
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,12(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82a61790
	ctx.lr = 0x8269CD20;
	__restfpr_27(ctx, base);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269CD28"))) PPC_WEAK_FUNC(sub_8269CD28);
PPC_FUNC_IMPL(__imp__sub_8269CD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,21976
	ctx.r3.s64 = ctx.r11.s64 + 21976;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269CD38"))) PPC_WEAK_FUNC(sub_8269CD38);
PPC_FUNC_IMPL(__imp__sub_8269CD38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x8269cd78
	if (ctx.cr6.eq) goto loc_8269CD78;
	// bl 0x8269cfb0
	ctx.lr = 0x8269CD58;
	sub_8269CFB0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8269cd68
	if (!ctx.cr6.eq) goto loc_8269CD68;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8269cd7c
	goto loc_8269CD7C;
loc_8269CD68:
	// bl 0x82333d20
	ctx.lr = 0x8269CD6C;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8269cd7c
	if (ctx.cr6.eq) goto loc_8269CD7C;
loc_8269CD78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269CD7C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269CD90"))) PPC_WEAK_FUNC(sub_8269CD90);
PPC_FUNC_IMPL(__imp__sub_8269CD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82833108
	ctx.lr = 0x8269CDAC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8269cdc0
	if (ctx.cr0.eq) goto loc_8269CDC0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269ce38
	ctx.lr = 0x8269CDBC;
	sub_8269CE38(ctx, base);
	// b 0x8269cdc4
	goto loc_8269CDC4;
loc_8269CDC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269CDC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269CDD8"))) PPC_WEAK_FUNC(sub_8269CDD8);
PPC_FUNC_IMPL(__imp__sub_8269CDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x8269cfb0
	ctx.lr = 0x8269CDF8;
	sub_8269CFB0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8269ce08
	if (!ctx.cr6.eq) goto loc_8269CE08;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8269ce1c
	goto loc_8269CE1C;
loc_8269CE08:
	// bl 0x82333d20
	ctx.lr = 0x8269CE0C;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8269ce1c
	if (ctx.cr6.eq) goto loc_8269CE1C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269CE1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269CE38"))) PPC_WEAK_FUNC(sub_8269CE38);
PPC_FUNC_IMPL(__imp__sub_8269CE38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r9,r9,22000
	ctx.r9.s64 = ctx.r9.s64 + 22000;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwimi r11,r10,0,1,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x7FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFF80000000);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwimi r10,r11,0,1,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwimi r10,r11,0,2,2
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x20000000) | (ctx.r10.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwimi r10,r11,0,3,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x10000000) | (ctx.r10.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lbz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// lfs f0,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f0,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269CED0"))) PPC_WEAK_FUNC(sub_8269CED0);
PPC_FUNC_IMPL(__imp__sub_8269CED0) {
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
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82833108
	ctx.lr = 0x8269CEE4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8269cef4
	if (ctx.cr0.eq) goto loc_8269CEF4;
	// bl 0x827ee580
	ctx.lr = 0x8269CEF0;
	sub_827EE580(ctx, base);
	// b 0x8269cef8
	goto loc_8269CEF8;
loc_8269CEF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269CEF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269CF08"))) PPC_WEAK_FUNC(sub_8269CF08);
PPC_FUNC_IMPL(__imp__sub_8269CF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24376(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24376);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8269cf48
	if (!ctx.cr0.eq) goto loc_8269CF48;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,24376(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24376, ctx.r11.u32);
	// addi r3,r9,21976
	ctx.r3.s64 = ctx.r9.s64 + 21976;
	// bl 0x82816528
	ctx.lr = 0x8269CF40;
	sub_82816528(ctx, base);
	// stw r3,24372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24372, ctx.r3.u32);
	// b 0x8269cf4c
	goto loc_8269CF4C;
loc_8269CF48:
	// lwz r3,24372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24372);
loc_8269CF4C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269CF60"))) PPC_WEAK_FUNC(sub_8269CF60);
PPC_FUNC_IMPL(__imp__sub_8269CF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8269cfb0
	ctx.lr = 0x8269CF80;
	sub_8269CFB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269CF94;
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

__attribute__((alias("__imp__sub_8269CFB0"))) PPC_WEAK_FUNC(sub_8269CFB0);
PPC_FUNC_IMPL(__imp__sub_8269CFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13588
	ctx.r31.s64 = ctx.r11.s64 + 13588;
	// lwz r11,13584(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13584);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8269cff8
	if (!ctx.cr0.eq) goto loc_8269CFF8;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,22104
	ctx.r9.s64 = ctx.r9.s64 + 22104;
	// stw r11,13584(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13584, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27688
	ctx.r3.s64 = ctx.r11.s64 + 27688;
	// bl 0x82a4c758
	ctx.lr = 0x8269CFF8;
	sub_82A4C758(ctx, base);
loc_8269CFF8:
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

__attribute__((alias("__imp__sub_8269D010"))) PPC_WEAK_FUNC(sub_8269D010);
PPC_FUNC_IMPL(__imp__sub_8269D010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8269D018;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,1968(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// beq cr6,0x8269d2f0
	if (ctx.cr6.eq) goto loc_8269D2F0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8269d2b8
	if (ctx.cr6.eq) goto loc_8269D2B8;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8269d21c
	if (ctx.cr6.eq) goto loc_8269D21C;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x8269d1a0
	if (ctx.cr6.eq) goto loc_8269D1A0;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x8269d16c
	if (ctx.cr6.eq) goto loc_8269D16C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r4,3935
	ctx.r4.s64 = 3935;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lfs f1,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829badb0
	ctx.lr = 0x8269D094;
	sub_829BADB0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,3104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3104);
	// bl 0x8284dfe0
	ctx.lr = 0x8269D0C0;
	sub_8284DFE0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,3104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3104);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x8284dfe0
	ctx.lr = 0x8269D0F0;
	sub_8284DFE0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,3104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3104);
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// bl 0x8284dfe0
	ctx.lr = 0x8269D120;
	sub_8284DFE0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,6000(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6000);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,2180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2180);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r29,3160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3160, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,2180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2180, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,240
	ctx.r4.s64 = ctx.r10.s64 + 240;
	// bl 0x8284e0a0
	ctx.lr = 0x8269D15C;
	sub_8284E0A0(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// stb r29,1942(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1942, ctx.r29.u8);
	// b 0x8269d424
	goto loc_8269D424;
loc_8269D16C:
	// lwz r11,3060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3060);
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r10,-12272
	ctx.r10.s64 = ctx.r10.s64 + -12272;
	// stw r9,3328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3328, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r10,r10,30264
	ctx.r10.s64 = ctx.r10.s64 + 30264;
	// lfs f1,-5540(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -5540);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8269d404
	goto loc_8269D404;
loc_8269D1A0:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,3104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3104);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,912(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 912);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8284dfe0
	ctx.lr = 0x8269D1C4;
	sub_8284DFE0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,30996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,3104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3104);
	// lwz r6,3060(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3060);
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// bl 0x8284def0
	ctx.lr = 0x8269D1FC;
	sub_8284DEF0(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r10,r10,30264
	ctx.r10.s64 = ctx.r10.s64 + 30264;
	// lfs f1,-9848(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9848);
	ctx.f1.f64 = double(temp.f32);
loc_8269D208:
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-12272
	ctx.r11.s64 = ctx.r11.s64 + -12272;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8269d3fc
	goto loc_8269D3FC;
loc_8269D21C:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,3104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3104);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// lfs f1,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8284def0
	ctx.lr = 0x8269D244;
	sub_8284DEF0(ctx, base);
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,-12272
	ctx.r11.s64 = ctx.r11.s64 + -12272;
	// addi r10,r10,30264
	ctx.r10.s64 = ctx.r10.s64 + 30264;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// rldicr r7,r29,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f1,-9848(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9848);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82643db8
	ctx.lr = 0x8269D288;
	sub_82643DB8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,1924(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1924);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269D2B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8269d424
	goto loc_8269D424;
loc_8269D2B8:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,3104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3104);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// lfs f1,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8284def0
	ctx.lr = 0x8269D2E0;
	sub_8284DEF0(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r10,r10,30264
	ctx.r10.s64 = ctx.r10.s64 + 30264;
	// lfs f1,-5540(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -5540);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8269d208
	goto loc_8269D208;
loc_8269D2F0:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// addi r28,r10,30264
	ctx.r28.s64 = ctx.r10.s64 + 30264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,30264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30264);
	ctx.f1.f64 = double(temp.f32);
	// stb r9,1942(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1942, ctx.r9.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r29,3076(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3076, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,3084(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,3084(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3084, ctx.r10.u32);
	// lwz r11,2180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2180);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,2180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2180, ctx.r11.u32);
	// stw r9,3160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3160, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269D368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f1,-9848(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -9848);
	ctx.f1.f64 = double(temp.f32);
	// li r4,3935
	ctx.r4.s64 = 3935;
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829badb0
	ctx.lr = 0x8269D38C;
	sub_829BADB0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,1924(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1924);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269D3B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,3104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3104);
	// bl 0x8284def0
	ctx.lr = 0x8269D3E8;
	sub_8284DEF0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// addi r10,r10,-12272
	ctx.r10.s64 = ctx.r10.s64 + -12272;
	// lfs f1,-32720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32720);
	ctx.f1.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_8269D3FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8269D404:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r7,r29,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82643db8
	ctx.lr = 0x8269D424;
	sub_82643DB8(ctx, base);
loc_8269D424:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269D430"))) PPC_WEAK_FUNC(sub_8269D430);
PPC_FUNC_IMPL(__imp__sub_8269D430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8269D438;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,1968(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// beq cr6,0x8269d714
	if (ctx.cr6.eq) goto loc_8269D714;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8269d6dc
	if (ctx.cr6.eq) goto loc_8269D6DC;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8269d640
	if (ctx.cr6.eq) goto loc_8269D640;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x8269d5c4
	if (ctx.cr6.eq) goto loc_8269D5C4;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x8269d590
	if (ctx.cr6.eq) goto loc_8269D590;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r4,3935
	ctx.r4.s64 = 3935;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lfs f1,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829badb0
	ctx.lr = 0x8269D4B4;
	sub_829BADB0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,3104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3104);
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// bl 0x8284dfe0
	ctx.lr = 0x8269D4E4;
	sub_8284DFE0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,3104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3104);
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// bl 0x8284dfe0
	ctx.lr = 0x8269D514;
	sub_8284DFE0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,3104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3104);
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// bl 0x8284dfe0
	ctx.lr = 0x8269D544;
	sub_8284DFE0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,6000(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6000);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,2180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2180);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r29,3160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3160, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,2180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2180, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,240
	ctx.r4.s64 = ctx.r10.s64 + 240;
	// bl 0x8284e0a0
	ctx.lr = 0x8269D580;
	sub_8284E0A0(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// stb r29,1942(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1942, ctx.r29.u8);
	// b 0x8269d84c
	goto loc_8269D84C;
loc_8269D590:
	// lwz r11,3060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3060);
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r10,-11216
	ctx.r10.s64 = ctx.r10.s64 + -11216;
	// stw r9,3328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3328, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r10,r10,30264
	ctx.r10.s64 = ctx.r10.s64 + 30264;
	// lfs f1,-5540(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -5540);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8269d82c
	goto loc_8269D82C;
loc_8269D5C4:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,3104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3104);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,912(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 912);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8284dfe0
	ctx.lr = 0x8269D5E8;
	sub_8284DFE0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,30996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,3104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3104);
	// lwz r6,3060(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3060);
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// bl 0x8284def0
	ctx.lr = 0x8269D620;
	sub_8284DEF0(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r10,r10,30264
	ctx.r10.s64 = ctx.r10.s64 + 30264;
	// lfs f1,-9848(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9848);
	ctx.f1.f64 = double(temp.f32);
loc_8269D62C:
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-11216
	ctx.r11.s64 = ctx.r11.s64 + -11216;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8269d824
	goto loc_8269D824;
loc_8269D640:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,3104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3104);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// lfs f1,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8284def0
	ctx.lr = 0x8269D668;
	sub_8284DEF0(ctx, base);
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,-11216
	ctx.r11.s64 = ctx.r11.s64 + -11216;
	// addi r10,r10,30264
	ctx.r10.s64 = ctx.r10.s64 + 30264;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// rldicr r7,r29,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f1,-9848(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9848);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82643db8
	ctx.lr = 0x8269D6AC;
	sub_82643DB8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,1924(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1924);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269D6D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8269d84c
	goto loc_8269D84C;
loc_8269D6DC:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,3104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3104);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// lfs f1,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8284def0
	ctx.lr = 0x8269D704;
	sub_8284DEF0(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r10,r10,30264
	ctx.r10.s64 = ctx.r10.s64 + 30264;
	// lfs f1,-5540(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -5540);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8269d62c
	goto loc_8269D62C;
loc_8269D714:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// addi r28,r10,30264
	ctx.r28.s64 = ctx.r10.s64 + 30264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,30264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30264);
	ctx.f1.f64 = double(temp.f32);
	// stb r9,1942(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1942, ctx.r9.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r29,3076(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3076, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,3084(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,3084(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3084, ctx.r10.u32);
	// lwz r11,2180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2180);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,2180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2180, ctx.r11.u32);
	// stw r9,3160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3160, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269D78C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f1,-9848(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -9848);
	ctx.f1.f64 = double(temp.f32);
	// li r4,3935
	ctx.r4.s64 = 3935;
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829badb0
	ctx.lr = 0x8269D7B0;
	sub_829BADB0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,1924(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1924);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269D7DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,3104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3104);
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// bl 0x8284def0
	ctx.lr = 0x8269D810;
	sub_8284DEF0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// addi r10,r10,-11216
	ctx.r10.s64 = ctx.r10.s64 + -11216;
	// lfs f1,-32720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32720);
	ctx.f1.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_8269D824:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8269D82C:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r7,r29,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82643db8
	ctx.lr = 0x8269D84C;
	sub_82643DB8(ctx, base);
loc_8269D84C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269D858"))) PPC_WEAK_FUNC(sub_8269D858);
PPC_FUNC_IMPL(__imp__sub_8269D858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8269D860;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r30,1968(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1968);
	// beq cr6,0x8269dc64
	if (ctx.cr6.eq) goto loc_8269DC64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8269da88
	if (ctx.cr6.eq) goto loc_8269DA88;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8269d9f8
	if (ctx.cr6.eq) goto loc_8269D9F8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8269d9c4
	if (ctx.cr6.eq) goto loc_8269D9C4;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r4,3935
	ctx.r4.s64 = 3935;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lfs f1,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829badb0
	ctx.lr = 0x8269D8D4;
	sub_829BADB0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,3104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3104);
	// addi r4,r11,240
	ctx.r4.s64 = ctx.r11.s64 + 240;
	// bl 0x8284dfe0
	ctx.lr = 0x8269D904;
	sub_8284DFE0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,3104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3104);
	// addi r4,r11,252
	ctx.r4.s64 = ctx.r11.s64 + 252;
	// bl 0x8284dfe0
	ctx.lr = 0x8269D934;
	sub_8284DFE0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,3024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3024);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8269d978
	if (ctx.cr6.eq) goto loc_8269D978;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r11,3012
	ctx.r4.s64 = ctx.r11.s64 + 3012;
	// lwz r3,3024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3024);
	// bl 0x8284dfe0
	ctx.lr = 0x8269D978;
	sub_8284DFE0(ctx, base);
loc_8269D978:
	// li r29,0
	ctx.r29.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,6000(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6000);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,2180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2180);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r29,3160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3160, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,2180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2180, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,240
	ctx.r4.s64 = ctx.r11.s64 + 240;
	// bl 0x8284e0a0
	ctx.lr = 0x8269D9B4;
	sub_8284E0A0(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// stb r29,1942(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1942, ctx.r29.u8);
	// b 0x8269ddcc
	goto loc_8269DDCC;
loc_8269D9C4:
	// lwz r11,3060(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3060);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-32150
	ctx.r8.s64 = -2106982400;
	// addi r9,r9,20416
	ctx.r9.s64 = ctx.r9.s64 + 20416;
	// addi r6,r8,-10152
	ctx.r6.s64 = ctx.r8.s64 + -10152;
	// stw r10,3328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3328, ctx.r10.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// lfs f1,4308(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4308);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8269ddac
	goto loc_8269DDAC;
loc_8269D9F8:
	// lwz r11,3024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8269da64
	if (ctx.cr6.eq) goto loc_8269DA64;
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r11,3012
	ctx.r4.s64 = ctx.r11.s64 + 3012;
	// lwz r3,3024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3024);
	// bl 0x8284dfe0
	ctx.lr = 0x8269DA30;
	sub_8284DFE0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,30996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r11,3012
	ctx.r4.s64 = ctx.r11.s64 + 3012;
	// lwz r6,3060(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3060);
	// lwz r3,3024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3024);
	// bl 0x8284def0
	ctx.lr = 0x8269DA64;
	sub_8284DEF0(ctx, base);
loc_8269DA64:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-32150
	ctx.r8.s64 = -2106982400;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r7,r8,-10152
	ctx.r7.s64 = ctx.r8.s64 + -10152;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f1,20416(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20416);
	ctx.f1.f64 = double(temp.f32);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// b 0x8269ddac
	goto loc_8269DDAC;
loc_8269DA88:
	// lwz r11,3028(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8269da98
	if (!ctx.cr6.eq) goto loc_8269DA98;
	// lwz r11,3032(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3032);
loc_8269DA98:
	// lwz r9,620(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// lwz r8,624(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lwz r11,628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,3060(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3060);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8269dc0c
	if (ctx.cr6.eq) goto loc_8269DC0C;
	// lfs f0,620(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f13,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x8269DAF8;
	sub_82817280(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// divw r11,r10,r11
	ctx.r11.s32 = ctx.r10.s32 / ctx.r11.s32;
	// divw r8,r9,r6
	ctx.r8.s32 = ctx.r9.s32 / ctx.r6.s32;
	// mullw r6,r11,r5
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// addi r11,r11,-8192
	ctx.r11.s64 = ctx.r11.s64 + -8192;
	// mullw r8,r8,r28
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// divw r7,r11,r7
	ctx.r7.s32 = ctx.r11.s32 / ctx.r7.s32;
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// mullw r7,r7,r29
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82817bb8
	ctx.lr = 0x8269DB60;
	sub_82817BB8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,3060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3060);
	// addi r5,r3,5964
	ctx.r5.s64 = ctx.r3.s64 + 5964;
	// bl 0x8284e158
	ctx.lr = 0x8269DB80;
	sub_8284E158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8269dc0c
	if (ctx.cr0.lt) goto loc_8269DC0C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f1,904(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,3060(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3060);
	// stw r5,3024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3024, ctx.r5.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,3060(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 3060);
	// lwz r11,5976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5976);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,3012(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3012, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,3016(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3016, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,3020(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3020, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r11,3012
	ctx.r4.s64 = ctx.r11.s64 + 3012;
	// lwz r3,3024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3024);
	// bl 0x8284def0
	ctx.lr = 0x8269DC0C;
	sub_8284DEF0(ctx, base);
loc_8269DC0C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,1924(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1924);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269DC38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32150
	ctx.r9.s64 = -2106982400;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r9,-10152
	ctx.r11.s64 = ctx.r9.s64 + -10152;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lfs f1,20416(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20416);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// b 0x8269ddb4
	goto loc_8269DDB4;
loc_8269DC64:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stb r9,1942(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1942, ctx.r9.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r29,3076(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3076, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,3084(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,3084(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3084, ctx.r10.u32);
	// lwz r11,2180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2180);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,2180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2180, ctx.r11.u32);
	// stw r9,3160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3160, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269DCDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269DCF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r28,r11,20416
	ctx.r28.s64 = ctx.r11.s64 + 20416;
	// li r4,3935
	ctx.r4.s64 = 3935;
	// lfs f1,20416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20416);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829badb0
	ctx.lr = 0x8269DD24;
	sub_829BADB0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,1924(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1924);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269DD50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,3028(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3028);
	// lwz r11,3104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3104);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r4,r11,240
	ctx.r4.s64 = ctx.r11.s64 + 240;
	// bne cr6,0x8269dd90
	if (!ctx.cr6.eq) goto loc_8269DD90;
	// addi r4,r11,252
	ctx.r4.s64 = ctx.r11.s64 + 252;
loc_8269DD90:
	// bl 0x8284def0
	ctx.lr = 0x8269DD94;
	sub_8284DEF0(ctx, base);
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f1,4308(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4308);
	ctx.f1.f64 = double(temp.f32);
	// addi r10,r10,-10152
	ctx.r10.s64 = ctx.r10.s64 + -10152;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_8269DDAC:
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
loc_8269DDB4:
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// rldicr r7,r29,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82643db8
	ctx.lr = 0x8269DDCC;
	sub_82643DB8(ctx, base);
loc_8269DDCC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269DDD8"))) PPC_WEAK_FUNC(sub_8269DDD8);
PPC_FUNC_IMPL(__imp__sub_8269DDD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8269DDE0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,1968(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// beq cr6,0x8269e1cc
	if (ctx.cr6.eq) goto loc_8269E1CC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8269df20
	if (ctx.cr6.eq) goto loc_8269DF20;
	// lwz r3,1924(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1924);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269DE38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r4,3935
	ctx.r4.s64 = 3935;
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lfs f1,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829badb0
	ctx.lr = 0x8269DE60;
	sub_829BADB0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,3104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3104);
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// bl 0x8284dfe0
	ctx.lr = 0x8269DE90;
	sub_8284DFE0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r11,3012
	ctx.r4.s64 = ctx.r11.s64 + 3012;
	// lwz r3,3024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3024);
	// bl 0x8284dfe0
	ctx.lr = 0x8269DEBC;
	sub_8284DFE0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,1952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1952);
	// stw r29,1116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1116, ctx.r29.u32);
	// lwz r11,2180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2180);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2180, ctx.r11.u32);
	// stw r29,3160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3160, ctx.r29.u32);
	// lwz r11,6000(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6000);
	// addi r4,r11,240
	ctx.r4.s64 = ctx.r11.s64 + 240;
	// bl 0x8284e0a0
	ctx.lr = 0x8269DF10;
	sub_8284E0A0(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// stb r29,1942(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1942, ctx.r29.u8);
	// b 0x8269e32c
	goto loc_8269E32C;
loc_8269DF20:
	// lwz r10,3028(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3028);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8269df44
	if (ctx.cr6.eq) goto loc_8269DF44;
	// lwz r11,620(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 620);
	// lwz r9,624(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 624);
	// lwz r10,628(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 628);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// b 0x8269df5c
	goto loc_8269DF5C;
loc_8269DF44:
	// lwz r11,3032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3032);
	// lwz r10,620(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// lwz r9,624(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lwz r11,628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_8269DF5C:
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x82a4cd78
	ctx.lr = 0x8269DF64;
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
	// bge cr6,0x8269e114
	if (!ctx.cr6.lt) goto loc_8269E114;
	// lfs f0,620(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f13,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x8269DFB8;
	sub_82817280(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// divw r11,r10,r11
	ctx.r11.s32 = ctx.r10.s32 / ctx.r11.s32;
	// divw r8,r9,r6
	ctx.r8.s32 = ctx.r9.s32 / ctx.r6.s32;
	// mullw r6,r11,r5
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// addi r11,r11,-8192
	ctx.r11.s64 = ctx.r11.s64 + -8192;
	// mullw r8,r8,r28
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// divw r7,r11,r7
	ctx.r7.s32 = ctx.r11.s32 / ctx.r7.s32;
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// mullw r7,r7,r29
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82817bb8
	ctx.lr = 0x8269E020;
	sub_82817BB8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,3060(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3060);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8269e1ac
	if (ctx.cr6.eq) goto loc_8269E1AC;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,3060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3060);
	// addi r5,r3,5964
	ctx.r5.s64 = ctx.r3.s64 + 5964;
	// bl 0x8284e158
	ctx.lr = 0x8269E058;
	sub_8284E158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8269e1ac
	if (ctx.cr0.lt) goto loc_8269E1AC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f1,904(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,3060(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3060);
	// stw r5,3024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3024, ctx.r5.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,3060(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 3060);
	// lwz r11,5976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5976);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,3012(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3012, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,3016(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3016, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,3020(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3020, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r11,3012
	ctx.r4.s64 = ctx.r11.s64 + 3012;
	// lwz r3,3024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3024);
	// bl 0x8284def0
	ctx.lr = 0x8269E0E4;
	sub_8284DEF0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,1924(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1924);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269E110;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8269e1ac
	goto loc_8269E1AC;
loc_8269E114:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,3028(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3028);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,3104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3104);
	// beq cr6,0x8269e14c
	if (ctx.cr6.eq) goto loc_8269E14C;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,3012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3012, ctx.r9.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r9,3016(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3016, ctx.r9.u32);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// b 0x8269e160
	goto loc_8269E160;
loc_8269E14C:
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r9,3012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3012, ctx.r9.u32);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r9,3016(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3016, ctx.r9.u32);
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
loc_8269E160:
	// stw r10,3020(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3020, ctx.r10.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r30,3024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3024, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r11,3012
	ctx.r4.s64 = ctx.r11.s64 + 3012;
	// lwz r3,3024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3024);
	// bl 0x8284def0
	ctx.lr = 0x8269E1AC;
	sub_8284DEF0(ctx, base);
loc_8269E1AC:
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r9,r9,-27820
	ctx.r9.s64 = ctx.r9.s64 + -27820;
	// addi r11,r11,-8744
	ctx.r11.s64 = ctx.r11.s64 + -8744;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lfs f1,-7360(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -7360);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8269e304
	goto loc_8269E304;
loc_8269E1CC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stb r9,1942(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1942, ctx.r9.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r29,3076(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3076, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,3084(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,3084(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3084, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,1952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1952);
	// stw r9,1116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1116, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269E24C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269E268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r28,-32243
	ctx.r28.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r9,r28,-27820
	ctx.r9.s64 = ctx.r28.s64 + -27820;
	// li r4,3935
	ctx.r4.s64 = 3935;
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lfs f1,-17300(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -17300);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829badb0
	ctx.lr = 0x8269E294;
	sub_829BADB0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,1924(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1924);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269E2C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,3104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3104);
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// bl 0x8284def0
	ctx.lr = 0x8269E2F4;
	sub_8284DEF0(ctx, base);
	// lis r9,-32150
	ctx.r9.s64 = -2106982400;
	// lfs f1,-27820(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -27820);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r9,-8744
	ctx.r9.s64 = ctx.r9.s64 + -8744;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
loc_8269E304:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// rldicr r7,r29,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// bl 0x82643db8
	ctx.lr = 0x8269E32C;
	sub_82643DB8(ctx, base);
loc_8269E32C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269E338"))) PPC_WEAK_FUNC(sub_8269E338);
PPC_FUNC_IMPL(__imp__sub_8269E338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8269E340;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r3,r9,22124
	ctx.r3.s64 = ctx.r9.s64 + 22124;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,1968(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// bl 0x825d6ef8
	ctx.lr = 0x8269E374;
	sub_825D6EF8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8269e44c
	if (ctx.cr6.eq) goto loc_8269E44C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,1952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8269e3a4
	if (ctx.cr6.eq) goto loc_8269E3A4;
	// stw r29,1116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1116, ctx.r29.u32);
loc_8269E3A4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,1924(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1924);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269E3D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r4,3935
	ctx.r4.s64 = 3935;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lfs f2,30248(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30248);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829badb0
	ctx.lr = 0x8269E3F4;
	sub_829BADB0(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r10,2180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2180);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,2180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2180, ctx.r11.u32);
	// stw r29,3160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3160, ctx.r29.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x827da008
	ctx.lr = 0x8269E42C;
	sub_827DA008(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8269e43c
	if (ctx.cr6.eq) goto loc_8269E43C;
	// bl 0x82643c20
	ctx.lr = 0x8269E43C;
	sub_82643C20(ctx, base);
loc_8269E43C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// stb r29,1942(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1942, ctx.r29.u8);
	// b 0x8269e508
	goto loc_8269E508;
loc_8269E44C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// stb r29,1942(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1942, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,3064(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3064);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269E480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,3076(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3076, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,3084(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,3084(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3084, ctx.r10.u32);
	// lwz r11,2180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2180);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,2180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2180, ctx.r11.u32);
	// stw r29,3160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3160, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,1952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1952);
	// stw r29,1116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1116, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,1924(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1924);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269E508;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8269E508:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269E510"))) PPC_WEAK_FUNC(sub_8269E510);
PPC_FUNC_IMPL(__imp__sub_8269E510) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,22180
	ctx.r3.s64 = ctx.r11.s64 + 22180;
	// lwz r4,2996(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2996);
	// bl 0x825d6ef8
	ctx.lr = 0x8269E53C;
	sub_825D6EF8(ctx, base);
	// lwz r11,2996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2996);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2996, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8269e79c
	if (ctx.cr6.eq) goto loc_8269E79C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8269e6ec
	if (ctx.cr6.eq) goto loc_8269E6EC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8269e688
	if (ctx.cr6.eq) goto loc_8269E688;
	// lwz r3,1924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269E57C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// li r4,3935
	ctx.r4.s64 = 3935;
	// lfs f31,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfs f1,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,1968(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// stw r10,1520(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1520, ctx.r10.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829badb0
	ctx.lr = 0x8269E5B0;
	sub_829BADB0(ctx, base);
	// lwz r11,3104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,168
	ctx.r4.s64 = ctx.r11.s64 + 168;
	// bl 0x8284dfe0
	ctx.lr = 0x8269E5D0;
	sub_8284DFE0(ctx, base);
	// lwz r11,3104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,180
	ctx.r4.s64 = ctx.r11.s64 + 180;
	// bl 0x8284dfe0
	ctx.lr = 0x8269E5F0;
	sub_8284DFE0(ctx, base);
	// lwz r11,3104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,192
	ctx.r4.s64 = ctx.r11.s64 + 192;
	// bl 0x8284dfe0
	ctx.lr = 0x8269E610;
	sub_8284DFE0(ctx, base);
	// lwz r11,3104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,216
	ctx.r4.s64 = ctx.r11.s64 + 216;
	// bl 0x8284dfe0
	ctx.lr = 0x8269E630;
	sub_8284DFE0(ctx, base);
	// lwz r11,3104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,228
	ctx.r4.s64 = ctx.r11.s64 + 228;
	// bl 0x8284dfe0
	ctx.lr = 0x8269E650;
	sub_8284DFE0(ctx, base);
	// lwz r10,1952(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r30,2996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2996, ctx.r30.u32);
	// stw r30,1116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1116, ctx.r30.u32);
	// lwz r9,1968(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r10,2180(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2180);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,2180(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2180, ctx.r10.u32);
	// lwz r10,1968(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r30,3160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3160, ctx.r30.u32);
	// stb r30,1942(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1942, ctx.r30.u8);
	// b 0x8269e858
	goto loc_8269E858;
loc_8269E688:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r10,r10,20416
	ctx.r10.s64 = ctx.r10.s64 + 20416;
	// li r4,3935
	ctx.r4.s64 = 3935;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lfs f31,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lfs f1,9940(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9940);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829badb0
	ctx.lr = 0x8269E6B4;
	sub_829BADB0(ctx, base);
	// lwz r11,3104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,192
	ctx.r4.s64 = ctx.r11.s64 + 192;
	// bl 0x8284def0
	ctx.lr = 0x8269E6D8;
	sub_8284DEF0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lfs f1,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8269e838
	goto loc_8269E838;
loc_8269E6EC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// li r4,3935
	ctx.r4.s64 = 3935;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lfs f1,20416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20416);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829badb0
	ctx.lr = 0x8269E714;
	sub_829BADB0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8262a5d0
	ctx.lr = 0x8269E724;
	sub_8262A5D0(ctx, base);
	// bl 0x8281d960
	ctx.lr = 0x8269E728;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8269e754
	if (ctx.cr0.eq) goto loc_8269E754;
	// lwz r11,3104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,216
	ctx.r4.s64 = ctx.r11.s64 + 216;
	// b 0x8269e794
	goto loc_8269E794;
loc_8269E754:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8262a5d0
	ctx.lr = 0x8269E764;
	sub_8262A5D0(ctx, base);
	// bl 0x8281d960
	ctx.lr = 0x8269E768;
	sub_8281D960(ctx, base);
	// lwz r11,3104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,228
	ctx.r4.s64 = ctx.r11.s64 + 228;
	// bne 0x8269e794
	if (!ctx.cr0.eq) goto loc_8269E794;
	// addi r4,r11,180
	ctx.r4.s64 = ctx.r11.s64 + 180;
loc_8269E794:
	// bl 0x8284def0
	ctx.lr = 0x8269E798;
	sub_8284DEF0(ctx, base);
	// b 0x8269e858
	goto loc_8269E858;
loc_8269E79C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// addi r8,r8,20416
	ctx.r8.s64 = ctx.r8.s64 + 20416;
	// li r4,3935
	ctx.r4.s64 = 3935;
	// stb r10,1942(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1942, ctx.r10.u8);
	// lfs f31,904(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lfs f1,9940(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9940);
	ctx.f1.f64 = double(temp.f32);
	// stw r30,1520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1520, ctx.r30.u32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r11,1952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// stw r10,1116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1116, ctx.r10.u32);
	// lwz r11,13024(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829badb0
	ctx.lr = 0x8269E7EC;
	sub_829BADB0(ctx, base);
	// lwz r3,1924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269E808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,168
	ctx.r4.s64 = ctx.r11.s64 + 168;
	// bl 0x8284def0
	ctx.lr = 0x8269E82C;
	sub_8284DEF0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// lfs f1,-32488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32488);
	ctx.f1.f64 = double(temp.f32);
loc_8269E838:
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r10,r10,-6896
	ctx.r10.s64 = ctx.r10.s64 + -6896;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x826436e8
	ctx.lr = 0x8269E858;
	sub_826436E8(ctx, base);
loc_8269E858:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_8269E878"))) PPC_WEAK_FUNC(sub_8269E878);
PPC_FUNC_IMPL(__imp__sub_8269E878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8269E880;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,628(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,1968(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// lfs f11,628(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f10,624(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,620(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x8269E8DC;
	sub_82817280(ctx, base);
	// bl 0x82a4cd78
	ctx.lr = 0x8269E8E0;
	sub_82A4CD78(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,19140(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19140);
	ctx.f1.f64 = double(temp.f32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,3104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3104);
	// addi r4,r11,168
	ctx.r4.s64 = ctx.r11.s64 + 168;
	// bl 0x8284dfe0
	ctx.lr = 0x8269E914;
	sub_8284DFE0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f1,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,3104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3104);
	// addi r4,r11,168
	ctx.r4.s64 = ctx.r11.s64 + 168;
	// bl 0x8284def0
	ctx.lr = 0x8269E94C;
	sub_8284DEF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269E958"))) PPC_WEAK_FUNC(sub_8269E958);
PPC_FUNC_IMPL(__imp__sub_8269E958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8269E960;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r3,r10,17060
	ctx.r3.s64 = ctx.r10.s64 + 17060;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,1968(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// lwz r30,1428(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// bl 0x82816528
	ctx.lr = 0x8269E98C;
	sub_82816528(ctx, base);
	// lwz r11,464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8269e9c8
	if (!ctx.cr6.gt) goto loc_8269E9C8;
	// lwz r9,460(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 460);
loc_8269E9A4:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8269e9c4
	if (ctx.cr6.eq) goto loc_8269E9C4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8269e9a4
	if (ctx.cr6.lt) goto loc_8269E9A4;
	// b 0x8269e9c8
	goto loc_8269E9C8;
loc_8269E9C4:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_8269E9C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,1056(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1056);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269E9E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6028);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8269ea10
	if (ctx.cr0.lt) goto loc_8269EA10;
	// lwz r10,6024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6024);
	// mulli r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 * 44;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_8269E9F8:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8269eae0
	if (ctx.cr6.eq) goto loc_8269EAE0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r9,-44
	ctx.r9.s64 = ctx.r9.s64 + -44;
	// bge 0x8269e9f8
	if (!ctx.cr0.lt) goto loc_8269E9F8;
loc_8269EA10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8269EA14:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8269ead8
	if (ctx.cr6.eq) goto loc_8269EAD8;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f1,16668(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82332e18
	ctx.lr = 0x8269EA74;
	sub_82332E18(ctx, base);
	// lfs f10,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,17052(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17052);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f13,f12,f10,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmadds f13,f11,f9,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8269ead8
	if (ctx.cr6.lt) goto loc_8269EAD8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8269eaf0
	ctx.lr = 0x8269EAB0;
	sub_8269EAF0(ctx, base);
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r4,r11,-5800
	ctx.r4.s64 = ctx.r11.s64 + -5800;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269EAD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8269EAD8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
loc_8269EAE0:
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8269ea14
	goto loc_8269EA14;
}

__attribute__((alias("__imp__sub_8269EAF0"))) PPC_WEAK_FUNC(sub_8269EAF0);
PPC_FUNC_IMPL(__imp__sub_8269EAF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8269EAF8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,3000(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3000);
	// lwz r30,1968(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1968);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3000(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3000, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,3000(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3000);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8269ebe4
	if (ctx.cr6.eq) goto loc_8269EBE4;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r4,4095
	ctx.r4.s64 = 4095;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lfs f1,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829badb0
	ctx.lr = 0x8269EB68;
	sub_829BADB0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r11,3012
	ctx.r4.s64 = ctx.r11.s64 + 3012;
	// lwz r3,3024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3024);
	// bl 0x8284dfe0
	ctx.lr = 0x8269EB94;
	sub_8284DFE0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r28,3000(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3000, ctx.r28.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,1952(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1952);
	// stw r28,1116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1116, ctx.r28.u32);
	// lwz r10,2180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2180);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r28,3160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3160, ctx.r28.u32);
	// stw r10,2180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2180, ctx.r10.u32);
	// stb r28,1942(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1942, ctx.r28.u8);
	// b 0x8269ef00
	goto loc_8269EF00;
loc_8269EBE4:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// stb r29,1942(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1942, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r28,3076(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3076, ctx.r28.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,3084(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,3084(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3084, ctx.r10.u32);
	// lwz r11,2180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2180);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r29,3160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3160, ctx.r29.u32);
	// stw r11,2180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2180, ctx.r11.u32);
	// bl 0x82a4cd78
	ctx.lr = 0x8269EC3C;
	sub_82A4CD78(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// addi r27,r11,30356
	ctx.r27.s64 = ctx.r11.s64 + 30356;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ble 0x8269ed94
	if (!ctx.cr0.gt) goto loc_8269ED94;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lfs f1,-9940(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -9940);
	ctx.f1.f64 = double(temp.f32);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// li r4,3935
	ctx.r4.s64 = 3935;
	// lwz r11,13024(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13024);
	// lfs f31,904(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r10,1952(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1952);
	// stw r29,1116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1116, ctx.r29.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829badb0
	ctx.lr = 0x8269EC94;
	sub_829BADB0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,3028(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3028);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8269ed0c
	if (ctx.cr6.eq) goto loc_8269ED0C;
	// bl 0x82a4cd78
	ctx.lr = 0x8269ECB4;
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,3104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3104);
	// ble 0x8269ecf4
	if (!ctx.cr0.gt) goto loc_8269ECF4;
	// lwz r9,216(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// stw r9,3012(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3012, ctx.r9.u32);
	// lwz r9,220(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// stw r9,3016(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3016, ctx.r9.u32);
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// b 0x8269ed70
	goto loc_8269ED70;
loc_8269ECF4:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,3012(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3012, ctx.r9.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r9,3016(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3016, ctx.r9.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x8269ed70
	goto loc_8269ED70;
loc_8269ED0C:
	// lwz r11,3032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3032);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8269ed74
	if (ctx.cr6.eq) goto loc_8269ED74;
	// bl 0x82a4cd78
	ctx.lr = 0x8269ED1C;
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,3104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3104);
	// ble 0x8269ed5c
	if (!ctx.cr0.gt) goto loc_8269ED5C;
	// lwz r9,228(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// stw r9,3012(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3012, ctx.r9.u32);
	// lwz r9,232(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// stw r9,3016(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3016, ctx.r9.u32);
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// b 0x8269ed70
	goto loc_8269ED70;
loc_8269ED5C:
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r9,3012(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3012, ctx.r9.u32);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r9,3016(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3016, ctx.r9.u32);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
loc_8269ED70:
	// stw r11,3020(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3020, ctx.r11.u32);
loc_8269ED74:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r30,3024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3024, ctx.r30.u32);
	// b 0x8269eea0
	goto loc_8269EEA0;
loc_8269ED94:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,3060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3060);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8269eec8
	if (ctx.cr6.eq) goto loc_8269EEC8;
	// lwz r10,620(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// lfs f12,628(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,624(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lfs f0,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// lfs f13,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,3060(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3060);
	// addi r5,r3,5988
	ctx.r5.s64 = ctx.r3.s64 + 5988;
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8284e158
	ctx.lr = 0x8269EE14;
	sub_8284E158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8269eec8
	if (ctx.cr0.lt) goto loc_8269EEC8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f1,904(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,1952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1952);
	// stw r29,1116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1116, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,3060(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3060);
	// stw r5,3024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3024, ctx.r5.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,3060(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3060);
	// lwz r11,6000(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 6000);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,3012(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3012, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,3016(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3016, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,3020(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3020, ctx.r11.u32);
loc_8269EEA0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r4,r11,3012
	ctx.r4.s64 = ctx.r11.s64 + 3012;
	// lwz r3,3024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3024);
	// bl 0x8284def0
	ctx.lr = 0x8269EEC8;
	sub_8284DEF0(ctx, base);
loc_8269EEC8:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,-5392
	ctx.r10.s64 = ctx.r10.s64 + -5392;
	// lfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// rldicr r7,r28,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82643db8
	ctx.lr = 0x8269EF00;
	sub_82643DB8(ctx, base);
loc_8269EF00:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269EF10"))) PPC_WEAK_FUNC(sub_8269EF10);
PPC_FUNC_IMPL(__imp__sub_8269EF10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8269EF18;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,3068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3068);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3068, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8269efdc
	if (ctx.cr6.eq) goto loc_8269EFDC;
	// lwz r3,1924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269EF54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r4,3935
	ctx.r4.s64 = 3935;
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lfs f1,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829badb0
	ctx.lr = 0x8269EF7C;
	sub_829BADB0(ctx, base);
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,3008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3008);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mulli r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 * 12;
	// lwz r11,5976(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5976);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8284dfe0
	ctx.lr = 0x8269EFA4;
	sub_8284DFE0(ctx, base);
	// lwz r10,1952(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r28,3068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3068, ctx.r28.u32);
	// stw r28,1116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1116, ctx.r28.u32);
	// lwz r9,1968(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r10,2180(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2180);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,2180(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2180, ctx.r10.u32);
	// lwz r10,1968(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r28,3160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3160, ctx.r28.u32);
	// stb r28,1942(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1942, ctx.r28.u8);
	// b 0x8269f1d4
	goto loc_8269F1D4;
loc_8269EFDC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// stb r29,1942(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1942, ctx.r29.u8);
	// lwz r9,1968(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r10,2180(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2180);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,2180(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2180, ctx.r10.u32);
	// lwz r10,1968(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r29,3160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3160, ctx.r29.u32);
	// lwz r10,2324(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2324);
	// addic. r7,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r7.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt 0x8269f10c
	if (ctx.cr0.lt) goto loc_8269F10C;
	// lwz r11,2320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2320);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,19136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19136);
	ctx.f0.f64 = double(temp.f32);
loc_8269F02C:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8269f100
	if (ctx.cr6.eq) goto loc_8269F100;
	// lwz r10,1528(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1528);
	// addic. r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x8269f100
	if (ctx.cr0.lt) goto loc_8269F100;
	// lwz r10,1524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1524);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8269F050:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8269f098
	if (ctx.cr6.eq) goto loc_8269F098;
	// lwz r10,1968(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lfs f13,624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,624(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 624);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f10,628(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 628);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f10,620(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 620);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8269f0b0
	if (!ctx.cr6.gt) goto loc_8269F0B0;
loc_8269F098:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8269f100
	if (!ctx.cr0.eq) goto loc_8269F100;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// bge 0x8269f050
	if (!ctx.cr0.lt) goto loc_8269F050;
	// b 0x8269f100
	goto loc_8269F100;
loc_8269F0B0:
	// lwz r10,1968(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lfs f13,624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f11,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,624(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 624);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,620(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 620);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// lfs f13,628(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_8269F100:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// bge 0x8269f02c
	if (!ctx.cr0.lt) goto loc_8269F02C;
loc_8269F10C:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8269f1d4
	if (ctx.cr0.eq) goto loc_8269F1D4;
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r3,5940
	ctx.r5.s64 = ctx.r3.s64 + 5940;
	// bl 0x8284e158
	ctx.lr = 0x8269F124;
	sub_8284E158(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,3008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3008, ctx.r3.u32);
	// addi r30,r11,30248
	ctx.r30.s64 = ctx.r11.s64 + 30248;
	// blt 0x8269f1ac
	if (ctx.cr0.lt) goto loc_8269F1AC;
	// lwz r11,1952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,1116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1116, ctx.r29.u32);
	// lwz r3,1924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269F15C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f1,-9832(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -9832);
	ctx.f1.f64 = double(temp.f32);
	// li r4,3935
	ctx.r4.s64 = 3935;
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829badb0
	ctx.lr = 0x8269F180;
	sub_829BADB0(ctx, base);
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,3008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3008);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwz r10,5976(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5976);
	// li r6,0
	ctx.r6.s64 = 0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8284def0
	ctx.lr = 0x8269F1AC;
	sub_8284DEF0(ctx, base);
loc_8269F1AC:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,-4336
	ctx.r11.s64 = ctx.r11.s64 + -4336;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826436e8
	ctx.lr = 0x8269F1D4;
	sub_826436E8(ctx, base);
loc_8269F1D4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269F1E0"))) PPC_WEAK_FUNC(sub_8269F1E0);
PPC_FUNC_IMPL(__imp__sub_8269F1E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8269F1E8;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61744
	ctx.lr = 0x8269F1F0;
	__savefpr_27(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,10548(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10548);
	// lbz r11,1937(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1937);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8269f504
	if (ctx.cr0.eq) goto loc_8269F504;
	// lwz r11,2992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2992);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addi r3,r10,22216
	ctx.r3.s64 = ctx.r10.s64 + 22216;
	// stw r4,2992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2992, ctx.r4.u32);
	// bl 0x825d6ef8
	ctx.lr = 0x8269F224;
	sub_825D6EF8(ctx, base);
	// lwz r11,2992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2992);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8269f2cc
	if (ctx.cr6.eq) goto loc_8269F2CC;
	// lwz r3,1924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269F24C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r4,3935
	ctx.r4.s64 = 3935;
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
	ctx.lr = 0x8269F270;
	sub_829BADB0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-27300
	ctx.r11.s64 = ctx.r11.s64 + -27300;
	// stw r30,2992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2992, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,15844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15844);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,1952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// stw r30,1116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1116, ctx.r30.u32);
	// lwz r10,1968(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,2180(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2180);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2180, ctx.r11.u32);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r30,3160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3160, ctx.r30.u32);
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,3104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// addi r4,r11,264
	ctx.r4.s64 = ctx.r11.s64 + 264;
	// bl 0x8284dfe0
	ctx.lr = 0x8269F2C0;
	sub_8284DFE0(ctx, base);
	// lwz r11,10548(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10548);
	// stb r30,1942(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1942, ctx.r30.u8);
	// b 0x8269f504
	goto loc_8269F504;
loc_8269F2CC:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,2660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2660);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// lfs f30,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// beq cr6,0x8269f500
	if (ctx.cr6.eq) goto loc_8269F500;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r5,1968(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// addi r7,r5,620
	ctx.r7.s64 = ctx.r5.s64 + 620;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,-32516(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32516);
	ctx.f0.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f13,16592(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16592);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r3,13024(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// bl 0x82825330
	ctx.lr = 0x8269F37C;
	sub_82825330(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8269f500
	if (ctx.cr0.eq) goto loc_8269F500;
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lfs f0,1596(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1600(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f12,1604(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// lfs f11,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,660(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// lfs f10,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f10.f64 = double(temp.f32);
	// lwz r8,664(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// lfs f9,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f29,f11,f0
	ctx.f29.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f28,f10,f13
	ctx.f28.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// fsubs f27,f9,f12
	ctx.f27.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// bl 0x82817bb8
	ctx.lr = 0x8269F3D0;
	sub_82817BB8(ctx, base);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f27,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f27.f64 + ctx.f0.f64));
	// fmadds f0,f12,f29,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x8269f500
	if (ctx.cr6.lt) goto loc_8269F500;
	// lwz r11,10548(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10548);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r9,1944(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1944);
	// lwz r10,1948(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1948);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,1944(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1944, ctx.r9.u32);
	// ble cr6,0x8269f440
	if (!ctx.cr6.gt) goto loc_8269F440;
	// rotlwi r8,r9,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r7,r9,r10
	ctx.r7.s32 = ctx.r9.s32 / ctx.r10.s32;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// mullw r7,r7,r10
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// twllei r10,0
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// twlgei r10,-1
	// bne 0x8269f440
	if (!ctx.cr0.eq) goto loc_8269F440;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r30,1944(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1944, ctx.r30.u32);
	// b 0x8269f444
	goto loc_8269F444;
loc_8269F440:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8269F444:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8269f500
	if (ctx.cr0.eq) goto loc_8269F500;
	// lwz r10,1968(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,2180(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2180);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,2180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2180, ctx.r11.u32);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r29,3160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3160, ctx.r29.u32);
	// lwz r11,1952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// stw r29,1116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1116, ctx.r29.u32);
	// lwz r3,1924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269F488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r4,3935
	ctx.r4.s64 = 3935;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lfs f1,30996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x829badb0
	ctx.lr = 0x8269F4A4;
	sub_829BADB0(ctx, base);
	// lwz r11,3104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,264
	ctx.r4.s64 = ctx.r11.s64 + 264;
	// bl 0x8284def0
	ctx.lr = 0x8269F4C8;
	sub_8284DEF0(ctx, base);
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r10,r10,-3616
	ctx.r10.s64 = ctx.r10.s64 + -3616;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfs f1,-27300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826436e8
	ctx.lr = 0x8269F4F4;
	sub_826436E8(ctx, base);
	// lwz r11,10548(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10548);
	// stb r29,1942(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1942, ctx.r29.u8);
	// b 0x8269f504
	goto loc_8269F504;
loc_8269F500:
	// stw r30,2992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2992, ctx.r30.u32);
loc_8269F504:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61790
	ctx.lr = 0x8269F510;
	__restfpr_27(ctx, base);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269F518"))) PPC_WEAK_FUNC(sub_8269F518);
PPC_FUNC_IMPL(__imp__sub_8269F518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,1664
	ctx.r3.s64 = ctx.r11.s64 + 1664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269F528"))) PPC_WEAK_FUNC(sub_8269F528);
PPC_FUNC_IMPL(__imp__sub_8269F528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8269f560
	if (ctx.cr6.eq) goto loc_8269F560;
	// bl 0x82500f58
	ctx.lr = 0x8269F550;
	sub_82500F58(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8269f560
	if (!ctx.cr6.eq) goto loc_8269F560;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8269f56c
	goto loc_8269F56C;
loc_8269F560:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82699840
	ctx.lr = 0x8269F56C;
	sub_82699840(ctx, base);
loc_8269F56C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269F588"))) PPC_WEAK_FUNC(sub_8269F588);
PPC_FUNC_IMPL(__imp__sub_8269F588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,4576
	ctx.r3.s64 = 4576;
	// bl 0x82833108
	ctx.lr = 0x8269F5A4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8269f5b8
	if (ctx.cr0.eq) goto loc_8269F5B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269f630
	ctx.lr = 0x8269F5B4;
	sub_8269F630(ctx, base);
	// b 0x8269f5bc
	goto loc_8269F5BC;
loc_8269F5B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269F5BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269F5D0"))) PPC_WEAK_FUNC(sub_8269F5D0);
PPC_FUNC_IMPL(__imp__sub_8269F5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82500f58
	ctx.lr = 0x8269F5F0;
	sub_82500F58(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8269f600
	if (!ctx.cr6.eq) goto loc_8269F600;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8269f618
	goto loc_8269F618;
loc_8269F600:
	// bl 0x825873f8
	ctx.lr = 0x8269F604;
	sub_825873F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8269f618
	if (ctx.cr6.eq) goto loc_8269F618;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826997d0
	ctx.lr = 0x8269F618;
	sub_826997D0(ctx, base);
loc_8269F618:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269F630"))) PPC_WEAK_FUNC(sub_8269F630);
PPC_FUNC_IMPL(__imp__sub_8269F630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8269F638;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82699938
	ctx.lr = 0x8269F648;
	sub_82699938(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r11,r11,22400
	ctx.r11.s64 = ctx.r11.s64 + 22400;
	// addi r10,r10,23584
	ctx.r10.s64 = ctx.r10.s64 + 23584;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,23636
	ctx.r9.s64 = ctx.r9.s64 + 23636;
	// addi r29,r31,1616
	ctx.r29.s64 = ctx.r31.s64 + 1616;
	// addi r28,r30,1616
	ctx.r28.s64 = ctx.r30.s64 + 1616;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r11.u32);
	// stw r11,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r11.u32);
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// stw r11,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r11.u32);
	// stw r10,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r10.u32);
	// stw r11,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r11.u32);
	// stw r11,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r11.u32);
	// beq cr6,0x8269f6e4
	if (ctx.cr6.eq) goto loc_8269F6E4;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8269f6e4
	if (!ctx.cr6.gt) goto loc_8269F6E4;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8269f6c8
	if (ctx.cr0.eq) goto loc_8269F6C8;
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8269F6C8;
	sub_82332C38(ctx, base);
loc_8269F6C8:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x8269F6DC;
	sub_82A45878(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_8269F6E4:
	// lwz r11,1640(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1640);
	// addi r4,r30,1712
	ctx.r4.s64 = ctx.r30.s64 + 1712;
	// addi r3,r31,1712
	ctx.r3.s64 = ctx.r31.s64 + 1712;
	// li r5,56
	ctx.r5.s64 = 56;
	// stw r11,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r11.u32);
	// lwz r11,1644(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1644);
	// stw r11,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r11.u32);
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
	// lfs f0,1704(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1704);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1704(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1704, temp.u32);
	// lfs f0,1708(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1708);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1708(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1708, temp.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x8269F784;
	sub_82A4EA80(ctx, base);
	// addi r4,r30,1768
	ctx.r4.s64 = ctx.r30.s64 + 1768;
	// addi r3,r31,1768
	ctx.r3.s64 = ctx.r31.s64 + 1768;
	// li r5,108
	ctx.r5.s64 = 108;
	// bl 0x82a4ea80
	ctx.lr = 0x8269F794;
	sub_82A4EA80(ctx, base);
	// addi r4,r30,1876
	ctx.r4.s64 = ctx.r30.s64 + 1876;
	// addi r3,r31,1876
	ctx.r3.s64 = ctx.r31.s64 + 1876;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x82a4ea80
	ctx.lr = 0x8269F7A4;
	sub_82A4EA80(ctx, base);
	// lfs f0,1932(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1932);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1932(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1932, temp.u32);
	// addi r4,r30,1996
	ctx.r4.s64 = ctx.r30.s64 + 1996;
	// addi r3,r31,1996
	ctx.r3.s64 = ctx.r31.s64 + 1996;
	// lfs f0,1936(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1936);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1936(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1936, temp.u32);
	// lfs f0,1940(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1940);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1940(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1940, temp.u32);
	// lfs f0,1944(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1944);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1944(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1944, temp.u32);
	// lfs f0,1948(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1948);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1948(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1948, temp.u32);
	// lfs f0,1952(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1952);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1952(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1952, temp.u32);
	// lfs f0,1956(r30)
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
	// lfs f0,1976(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1976);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1976(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1976, temp.u32);
	// lfs f0,1980(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1980);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1980(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1980, temp.u32);
	// lfs f0,1984(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1984);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1984(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1984, temp.u32);
	// lfs f0,1988(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1988);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1988(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1988, temp.u32);
	// lfs f0,1992(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1992(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1992, temp.u32);
	// bl 0x82873b58
	ctx.lr = 0x8269F830;
	sub_82873B58(ctx, base);
	// lwz r11,2020(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2020);
	// addi r4,r30,2028
	ctx.r4.s64 = ctx.r30.s64 + 2028;
	// addi r3,r31,2028
	ctx.r3.s64 = ctx.r31.s64 + 2028;
	// stw r11,2020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2020, ctx.r11.u32);
	// lwz r11,2024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2024);
	// stw r11,2024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2024, ctx.r11.u32);
	// bl 0x8269f950
	ctx.lr = 0x8269F84C;
	sub_8269F950(ctx, base);
	// addi r4,r30,2836
	ctx.r4.s64 = ctx.r30.s64 + 2836;
	// addi r3,r31,2836
	ctx.r3.s64 = ctx.r31.s64 + 2836;
	// bl 0x8269f950
	ctx.lr = 0x8269F858;
	sub_8269F950(ctx, base);
	// addi r4,r30,3644
	ctx.r4.s64 = ctx.r30.s64 + 3644;
	// addi r3,r31,3644
	ctx.r3.s64 = ctx.r31.s64 + 3644;
	// bl 0x8269f950
	ctx.lr = 0x8269F864;
	sub_8269F950(ctx, base);
	// lwz r11,4452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4452);
	// addi r4,r30,4472
	ctx.r4.s64 = ctx.r30.s64 + 4472;
	// addi r3,r31,4472
	ctx.r3.s64 = ctx.r31.s64 + 4472;
	// stw r11,4452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4452, ctx.r11.u32);
	// lwz r11,4456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4456);
	// stw r11,4456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4456, ctx.r11.u32);
	// lfs f0,4460(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4460);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4460(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4460, temp.u32);
	// lwz r11,4464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4464);
	// stw r11,4464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4464, ctx.r11.u32);
	// lwz r11,4468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4468);
	// stw r11,4468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4468, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x8269F898;
	sub_82873B58(ctx, base);
	// lwz r11,4496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4496);
	// addi r4,r30,4500
	ctx.r4.s64 = ctx.r30.s64 + 4500;
	// addi r3,r31,4500
	ctx.r3.s64 = ctx.r31.s64 + 4500;
	// stw r11,4496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4496, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x8269F8AC;
	sub_82873B58(ctx, base);
	// lwz r11,4524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4524);
	// addi r4,r30,4528
	ctx.r4.s64 = ctx.r30.s64 + 4528;
	// addi r3,r31,4528
	ctx.r3.s64 = ctx.r31.s64 + 4528;
	// stw r11,4524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4524, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x8269F8C0;
	sub_82873B58(ctx, base);
	// lwz r11,4552(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4552);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4552, ctx.r11.u32);
	// lwz r11,4556(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4556);
	// stw r11,4556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4556, ctx.r11.u32);
	// lwz r11,4560(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4560);
	// stw r11,4560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4560, ctx.r11.u32);
	// lwz r11,4564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4564);
	// stw r11,4564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4564, ctx.r11.u32);
	// lfs f0,4568(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4568);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4568(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4568, temp.u32);
	// lwz r11,4572(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4572);
	// stw r11,4572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4572, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269F900"))) PPC_WEAK_FUNC(sub_8269F900);
PPC_FUNC_IMPL(__imp__sub_8269F900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827e1358
	ctx.lr = 0x8269F920;
	sub_827E1358(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8269f930
	if (ctx.cr0.eq) goto loc_8269F930;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8269F930;
	sub_82332DB8(ctx, base);
loc_8269F930:
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

__attribute__((alias("__imp__sub_8269F950"))) PPC_WEAK_FUNC(sub_8269F950);
PPC_FUNC_IMPL(__imp__sub_8269F950) {
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
	// li r5,108
	ctx.r5.s64 = 108;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x8269F974;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// li r5,84
	ctx.r5.s64 = 84;
	// bl 0x82a4ea80
	ctx.lr = 0x8269F984;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r4,r30,192
	ctx.r4.s64 = ctx.r30.s64 + 192;
	// li r5,108
	ctx.r5.s64 = 108;
	// bl 0x82a4ea80
	ctx.lr = 0x8269F994;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,300
	ctx.r3.s64 = ctx.r31.s64 + 300;
	// addi r4,r30,300
	ctx.r4.s64 = ctx.r30.s64 + 300;
	// li r5,108
	ctx.r5.s64 = 108;
	// bl 0x82a4ea80
	ctx.lr = 0x8269F9A4;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// addi r4,r30,408
	ctx.r4.s64 = ctx.r30.s64 + 408;
	// li r5,108
	ctx.r5.s64 = 108;
	// bl 0x82a4ea80
	ctx.lr = 0x8269F9B4;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,516
	ctx.r3.s64 = ctx.r31.s64 + 516;
	// addi r4,r30,516
	ctx.r4.s64 = ctx.r30.s64 + 516;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x82a4ea80
	ctx.lr = 0x8269F9C4;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,572
	ctx.r3.s64 = ctx.r31.s64 + 572;
	// addi r4,r30,572
	ctx.r4.s64 = ctx.r30.s64 + 572;
	// li r5,84
	ctx.r5.s64 = 84;
	// bl 0x82a4ea80
	ctx.lr = 0x8269F9D4;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,656
	ctx.r3.s64 = ctx.r31.s64 + 656;
	// addi r4,r30,656
	ctx.r4.s64 = ctx.r30.s64 + 656;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x82a4ea80
	ctx.lr = 0x8269F9E4;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,712
	ctx.r3.s64 = ctx.r31.s64 + 712;
	// addi r4,r30,712
	ctx.r4.s64 = ctx.r30.s64 + 712;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x82a4ea80
	ctx.lr = 0x8269F9F4;
	sub_82A4EA80(ctx, base);
	// lfs f0,768(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 768);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,768(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 768, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,772(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 772);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,772(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 772, temp.u32);
	// lfs f0,776(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 776);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,776(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 776, temp.u32);
	// lfs f0,780(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 780);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,780(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 780, temp.u32);
	// lfs f0,784(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 784);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,784(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 784, temp.u32);
	// lfs f0,788(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 788);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,788(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 788, temp.u32);
	// lfs f0,792(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 792);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,792(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 792, temp.u32);
	// lfs f0,796(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,796(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 796, temp.u32);
	// lfs f0,800(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,800(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 800, temp.u32);
	// lfs f0,804(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 804);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,804(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 804, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269FA60"))) PPC_WEAK_FUNC(sub_8269FA60);
PPC_FUNC_IMPL(__imp__sub_8269FA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,22232
	ctx.r3.s64 = ctx.r11.s64 + 22232;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269FA70"))) PPC_WEAK_FUNC(sub_8269FA70);
PPC_FUNC_IMPL(__imp__sub_8269FA70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x8269fab0
	if (ctx.cr6.eq) goto loc_8269FAB0;
	// bl 0x826a0b20
	ctx.lr = 0x8269FA90;
	sub_826A0B20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8269faa0
	if (!ctx.cr6.eq) goto loc_8269FAA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8269fab4
	goto loc_8269FAB4;
loc_8269FAA0:
	// bl 0x82333d20
	ctx.lr = 0x8269FAA4;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8269fab4
	if (ctx.cr6.eq) goto loc_8269FAB4;
loc_8269FAB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269FAB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269FAC8"))) PPC_WEAK_FUNC(sub_8269FAC8);
PPC_FUNC_IMPL(__imp__sub_8269FAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x826a0b20
	ctx.lr = 0x8269FAE8;
	sub_826A0B20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8269faf8
	if (!ctx.cr6.eq) goto loc_8269FAF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8269fb0c
	goto loc_8269FB0C;
loc_8269FAF8:
	// bl 0x82333d20
	ctx.lr = 0x8269FAFC;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8269fb0c
	if (ctx.cr6.eq) goto loc_8269FB0C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269FB0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269FB28"))) PPC_WEAK_FUNC(sub_8269FB28);
PPC_FUNC_IMPL(__imp__sub_8269FB28) {
	PPC_FUNC_PROLOGUE();
	// stb r4,820(r3)
	PPC_STORE_U8(ctx.r3.u32 + 820, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269FB30"))) PPC_WEAK_FUNC(sub_8269FB30);
PPC_FUNC_IMPL(__imp__sub_8269FB30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,22260
	ctx.r3.s64 = ctx.r11.s64 + 22260;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269FB40"))) PPC_WEAK_FUNC(sub_8269FB40);
PPC_FUNC_IMPL(__imp__sub_8269FB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8269fb78
	if (ctx.cr6.eq) goto loc_8269FB78;
	// bl 0x826a0c68
	ctx.lr = 0x8269FB68;
	sub_826A0C68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8269fb78
	if (!ctx.cr6.eq) goto loc_8269FB78;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8269fb84
	goto loc_8269FB84;
loc_8269FB78:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8269fa70
	ctx.lr = 0x8269FB84;
	sub_8269FA70(ctx, base);
loc_8269FB84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269FBA0"))) PPC_WEAK_FUNC(sub_8269FBA0);
PPC_FUNC_IMPL(__imp__sub_8269FBA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x826a0c68
	sub_826A0C68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269FBA8"))) PPC_WEAK_FUNC(sub_8269FBA8);
PPC_FUNC_IMPL(__imp__sub_8269FBA8) {
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
	// li r3,916
	ctx.r3.s64 = 916;
	// bl 0x82833108
	ctx.lr = 0x8269FBC8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8269fc48
	if (ctx.cr0.eq) goto loc_8269FC48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8269fcb8
	ctx.lr = 0x8269FBDC;
	sub_8269FCB8(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r30,860
	ctx.r4.s64 = ctx.r30.s64 + 860;
	// addi r11,r11,23680
	ctx.r11.s64 = ctx.r11.s64 + 23680;
	// addi r3,r31,860
	ctx.r3.s64 = ctx.r31.s64 + 860;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,824(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 824);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,824(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 824, temp.u32);
	// li r5,56
	ctx.r5.s64 = 56;
	// lfs f0,828(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 828);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,828(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 828, temp.u32);
	// lfs f0,832(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,832(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 832, temp.u32);
	// lfs f0,836(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 836);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,836(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 836, temp.u32);
	// lfs f0,840(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 840);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,840(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 840, temp.u32);
	// lwz r11,844(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 844);
	// stw r11,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r11.u32);
	// lwz r11,848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	// stw r11,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r11.u32);
	// lwz r11,852(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 852);
	// stw r11,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r11.u32);
	// lwz r11,856(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 856);
	// stw r11,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x8269FC40;
	sub_82A4EA80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8269fc4c
	goto loc_8269FC4C;
loc_8269FC48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269FC4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269FC68"))) PPC_WEAK_FUNC(sub_8269FC68);
PPC_FUNC_IMPL(__imp__sub_8269FC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x826a0c68
	ctx.lr = 0x8269FC88;
	sub_826A0C68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8269fc9c
	if (ctx.cr6.eq) goto loc_8269FC9C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269fac8
	ctx.lr = 0x8269FC9C;
	sub_8269FAC8(ctx, base);
loc_8269FC9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269FCB8"))) PPC_WEAK_FUNC(sub_8269FCB8);
PPC_FUNC_IMPL(__imp__sub_8269FCB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,22304
	ctx.r10.s64 = ctx.r10.s64 + 22304;
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
	// bl 0x8269f950
	ctx.lr = 0x8269FD00;
	sub_8269F950(ctx, base);
	// lwz r11,816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r11.u32);
	// lbz r11,820(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 820);
	// stb r11,820(r31)
	PPC_STORE_U8(ctx.r31.u32 + 820, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269FD30"))) PPC_WEAK_FUNC(sub_8269FD30);
PPC_FUNC_IMPL(__imp__sub_8269FD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,22280
	ctx.r3.s64 = ctx.r11.s64 + 22280;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269FD40"))) PPC_WEAK_FUNC(sub_8269FD40);
PPC_FUNC_IMPL(__imp__sub_8269FD40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8269fd78
	if (ctx.cr6.eq) goto loc_8269FD78;
	// bl 0x826a0df0
	ctx.lr = 0x8269FD68;
	sub_826A0DF0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8269fd78
	if (!ctx.cr6.eq) goto loc_8269FD78;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8269fd84
	goto loc_8269FD84;
loc_8269FD78:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8269f528
	ctx.lr = 0x8269FD84;
	sub_8269F528(ctx, base);
loc_8269FD84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269FDA0"))) PPC_WEAK_FUNC(sub_8269FDA0);
PPC_FUNC_IMPL(__imp__sub_8269FDA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x826a0df0
	sub_826A0DF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269FDA8"))) PPC_WEAK_FUNC(sub_8269FDA8);
PPC_FUNC_IMPL(__imp__sub_8269FDA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82500f58
	sub_82500F58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269FDB0"))) PPC_WEAK_FUNC(sub_8269FDB0);
PPC_FUNC_IMPL(__imp__sub_8269FDB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,4592
	ctx.r3.s64 = 4592;
	// bl 0x82833108
	ctx.lr = 0x8269FDD0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8269fe20
	if (ctx.cr0.eq) goto loc_8269FE20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8269f630
	ctx.lr = 0x8269FDE4;
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,4576(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4576);
	// stw r11,4576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4576, ctx.r11.u32);
	// lwz r11,4580(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4580);
	// stw r11,4580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4580, ctx.r11.u32);
	// b 0x8269fe24
	goto loc_8269FE24;
loc_8269FE20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269FE24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269FE40"))) PPC_WEAK_FUNC(sub_8269FE40);
PPC_FUNC_IMPL(__imp__sub_8269FE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x826a0df0
	ctx.lr = 0x8269FE60;
	sub_826A0DF0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8269fe74
	if (ctx.cr6.eq) goto loc_8269FE74;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269f5d0
	ctx.lr = 0x8269FE74;
	sub_8269F5D0(ctx, base);
loc_8269FE74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269FE90"))) PPC_WEAK_FUNC(sub_8269FE90);
PPC_FUNC_IMPL(__imp__sub_8269FE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x827e1358
	ctx.lr = 0x8269FED4;
	sub_827E1358(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8269fee4
	if (ctx.cr0.eq) goto loc_8269FEE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8269FEE4;
	sub_82332DB8(ctx, base);
loc_8269FEE4:
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

__attribute__((alias("__imp__sub_8269FF00"))) PPC_WEAK_FUNC(sub_8269FF00);
PPC_FUNC_IMPL(__imp__sub_8269FF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8269FF08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x827e1880
	ctx.lr = 0x8269FF14;
	sub_827E1880(ctx, base);
	// li r3,916
	ctx.r3.s64 = 916;
	// bl 0x82833108
	ctx.lr = 0x8269FF1C;
	sub_82833108(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8269ff34
	if (ctx.cr0.eq) goto loc_8269FF34;
	// bl 0x826a0190
	ctx.lr = 0x8269FF2C;
	sub_826A0190(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8269ff38
	goto loc_8269FF38;
loc_8269FF34:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8269FF38:
	// stw r31,4576(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4576, ctx.r31.u32);
	// addi r29,r30,1616
	ctx.r29.s64 = ctx.r30.s64 + 1616;
	// lwz r27,1632(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1632);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x823327e0
	ctx.lr = 0x8269FF5C;
	sub_823327E0(ctx, base);
	// lwz r10,1628(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1628);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8269ff70
	if (ctx.cr0.eq) goto loc_8269FF70;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_8269FF70:
	// lwz r9,1644(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1644);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826a0028
	if (ctx.cr6.eq) goto loc_826A0028;
	// lwz r10,1632(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1632);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826a0028
	if (!ctx.cr6.gt) goto loc_826A0028;
	// lwz r11,1628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1628);
loc_8269FF90:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8269ffb0
	if (ctx.cr6.eq) goto loc_8269FFB0;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8269ff90
	if (ctx.cr6.lt) goto loc_8269FF90;
	// b 0x826a0028
	goto loc_826A0028;
loc_8269FFB0:
	// li r3,852
	ctx.r3.s64 = 852;
	// bl 0x82833108
	ctx.lr = 0x8269FFB8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8269fff4
	if (ctx.cr0.eq) goto loc_8269FFF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ee8f8
	ctx.lr = 0x8269FFC8;
	sub_827EE8F8(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r10,80
	ctx.r10.s64 = 80;
	// stw r28,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r28.u32);
	// addi r11,r11,25312
	ctx.r11.s64 = ctx.r11.s64 + 25312;
	// stw r28,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r28.u32);
	// stw r28,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r28.u32);
	// stw r28,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r28.u32);
	// stw r28,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r28.u32);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// stw r10,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8269FFF4:
	// stw r28,4580(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4580, ctx.r28.u32);
	// addi r31,r27,1
	ctx.r31.s64 = ctx.r27.s64 + 1;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823327e0
	ctx.lr = 0x826A0014;
	sub_823327E0(ctx, base);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a0028
	if (ctx.cr0.eq) goto loc_826A0028;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_826A0028:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A0030"))) PPC_WEAK_FUNC(sub_826A0030);
PPC_FUNC_IMPL(__imp__sub_826A0030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x827ebf48
	ctx.lr = 0x826A0048;
	sub_827EBF48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a0094
	if (ctx.cr0.eq) goto loc_826A0094;
	// lwz r3,1412(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// bl 0x82333a20
	ctx.lr = 0x826A0058;
	sub_82333A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a0094
	if (ctx.cr0.eq) goto loc_826A0094;
	// lwz r11,4104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826a007c
	if (ctx.cr6.eq) goto loc_826A007C;
	// lwz r11,924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 924);
	// li r4,1
	ctx.r4.s64 = 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826a0080
	if (ctx.cr6.eq) goto loc_826A0080;
loc_826A007C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_826A0080:
	// lwz r3,4576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4576);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A0094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826A0094:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A00A8"))) PPC_WEAK_FUNC(sub_826A00A8);
PPC_FUNC_IMPL(__imp__sub_826A00A8) {
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
	// bl 0x823aecd0
	ctx.lr = 0x826A00C0;
	sub_823AECD0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r31,r31,1996
	ctx.r31.s64 = ctx.r31.s64 + 1996;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x826A00D4;
	sub_82410060(ctx, base);
	// bl 0x8239eb50
	ctx.lr = 0x826A00D8;
	sub_8239EB50(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x826A00E8;
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

__attribute__((alias("__imp__sub_826A0100"))) PPC_WEAK_FUNC(sub_826A0100);
PPC_FUNC_IMPL(__imp__sub_826A0100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4580(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4580);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a0138
	if (ctx.cr6.eq) goto loc_826A0138;
	// lwz r10,848(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 848);
	// lwz r11,836(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 836);
	// mulli r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 * 80;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x826A0134;
	sub_823339B8(ctx, base);
	// b 0x826a0144
	goto loc_826A0144;
loc_826A0138:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x826A0144;
	sub_8233A258(ctx, base);
loc_826A0144:
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

__attribute__((alias("__imp__sub_826A0160"))) PPC_WEAK_FUNC(sub_826A0160);
PPC_FUNC_IMPL(__imp__sub_826A0160) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4576(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4576);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826A0178"))) PPC_WEAK_FUNC(sub_826A0178);
PPC_FUNC_IMPL(__imp__sub_826A0178) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4576(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4576);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826A0190"))) PPC_WEAK_FUNC(sub_826A0190);
PPC_FUNC_IMPL(__imp__sub_826A0190) {
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
	// bl 0x827ee8f8
	ctx.lr = 0x826A01A8;
	sub_827EE8F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r9,r11,-29300
	ctx.r9.s64 = ctx.r11.s64 + -29300;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// addi r6,r10,23680
	ctx.r6.s64 = ctx.r10.s64 + 23680;
	// lfs f11,-29300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29300);
	ctx.f11.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lfs f13,4660(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4660);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,904(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,30996(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 30996);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,860(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 860, temp.u32);
	// stfs f12,864(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 864, temp.u32);
	// stfs f11,868(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 868, temp.u32);
	// stfs f0,872(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 872, temp.u32);
	// stfs f0,876(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 876, temp.u32);
	// stfs f0,880(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 880, temp.u32);
	// stfs f0,884(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 884, temp.u32);
	// stb r10,820(r31)
	PPC_STORE_U8(ctx.r31.u32 + 820, ctx.r10.u8);
	// stw r10,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r10.u32);
	// stw r11,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r11.u32);
	// stw r11,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r11.u32);
	// stw r11,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A0228"))) PPC_WEAK_FUNC(sub_826A0228);
PPC_FUNC_IMPL(__imp__sub_826A0228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826A0230;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// clrlwi r29,r27,24
	ctx.r29.u64 = ctx.r27.u32 & 0xFF;
	// lbz r11,820(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 820);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826a0370
	if (ctx.cr6.eq) goto loc_826A0370;
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// bl 0x827ebf48
	ctx.lr = 0x826A0254;
	sub_827EBF48(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x826a0370
	if (ctx.cr0.eq) goto loc_826A0370;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x827da2a8
	ctx.lr = 0x826A0274;
	sub_827DA2A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a0370
	if (ctx.cr0.eq) goto loc_826A0370;
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// lwz r10,1412(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1412);
	// addi r11,r11,2836
	ctx.r11.s64 = ctx.r11.s64 + 2836;
	// lwz r9,628(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 628);
	// lfs f0,444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,620(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 620);
	// lfs f13,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,624(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 624);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x826a02c0
	if (!ctx.cr6.gt) goto loc_826A02C0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x826a0370
	if (!ctx.cr6.eq) goto loc_826A0370;
loc_826A02C0:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x826a02fc
	if (!ctx.cr6.eq) goto loc_826A02FC;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826a02fc
	if (!ctx.cr6.eq) goto loc_826A02FC;
	// lwz r10,1592(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1592);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826a02fc
	if (!ctx.cr0.eq) goto loc_826A02FC;
	// fsubs f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,824(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 824, temp.u32);
	// lfs f13,228(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,828(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 828, temp.u32);
	// b 0x826a0370
	goto loc_826A0370;
loc_826A02FC:
	// stb r27,820(r31)
	PPC_STORE_U8(ctx.r31.u32 + 820, ctx.r27.u8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826a0368
	if (ctx.cr6.eq) goto loc_826A0368;
	// lwz r10,13024(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// stw r9,1456(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1456, ctx.r9.u32);
	// lwz r10,1592(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1592);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826a0330
	if (ctx.cr0.eq) goto loc_826A0330;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r10.u32);
	// b 0x826a0334
	goto loc_826A0334;
loc_826A0330:
	// stw r9,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r9.u32);
loc_826A0334:
	// lfs f13,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,824(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 824, temp.u32);
	// lfs f13,228(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,828(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 828, temp.u32);
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,832(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 832, temp.u32);
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,836(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 836, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,840(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 840, temp.u32);
	// b 0x826a0370
	goto loc_826A0370;
loc_826A0368:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r11.u32);
loc_826A0370:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A0378"))) PPC_WEAK_FUNC(sub_826A0378);
PPC_FUNC_IMPL(__imp__sub_826A0378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826A0380;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82a61748
	ctx.lr = 0x826A0388;
	__savefpr_28(ctx, base);
	// stwu r1,-1120(r1)
	ea = -1120 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// bl 0x827ebf48
	ctx.lr = 0x826A039C;
	sub_827EBF48(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x826a0a5c
	if (ctx.cr0.eq) goto loc_826A0A5C;
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,2836
	ctx.r4.s64 = ctx.r11.s64 + 2836;
	// lwz r11,1412(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1412);
	// lwz r10,620(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// lwz r9,624(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lwz r11,628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x8269f950
	ctx.lr = 0x826A03D0;
	sub_8269F950(ctx, base);
	// lfs f0,668(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 668);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f31,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x826a0a5c
	if (ctx.cr6.gt) goto loc_826A0A5C;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x827da2a8
	ctx.lr = 0x826A0400;
	sub_827DA2A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a0a5c
	if (ctx.cr0.eq) goto loc_826A0A5C;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r11,1456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826a0a5c
	if (!ctx.cr6.eq) goto loc_826A0A5C;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r10,844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// lwz r11,1592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1592);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x826a0a5c
	if (!ctx.cr6.eq) goto loc_826A0A5C;
	// lfs f13,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,472(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	ctx.f0.f64 = double(temp.f32);
	// li r27,-1
	ctx.r27.s64 = -1;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// stw r27,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r27.u32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f11,468(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,824(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f13,828(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 828);
	ctx.f13.f64 = double(temp.f32);
	// fadds f30,f0,f31
	ctx.f30.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fadds f29,f13,f31
	ctx.f29.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r8,8324
	ctx.r8.s64 = 8324;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f0,908(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,1412(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1412);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r30.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// bl 0x82825330
	ctx.lr = 0x826A0518;
	sub_82825330(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a08e4
	if (ctx.cr0.eq) goto loc_826A08E4;
	// lwz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826a0554
	if (!ctx.cr6.eq) goto loc_826A0554;
	// lfs f0,832(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r30.u32);
	// stfs f0,888(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 888, temp.u32);
	// stfs f0,876(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 876, temp.u32);
	// stfs f0,892(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 892, temp.u32);
	// stfs f0,880(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 880, temp.u32);
	// stfs f0,884(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 884, temp.u32);
	// stfs f30,884(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 884, temp.u32);
	// stfs f31,872(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 872, temp.u32);
loc_826A0554:
	// lwz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826a067c
	if (!ctx.cr6.eq) goto loc_826A067C;
	// lwz r11,848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826a067c
	if (!ctx.cr6.eq) goto loc_826A067C;
	// addi r3,r31,860
	ctx.r3.s64 = ctx.r31.s64 + 860;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x827e0668
	ctx.lr = 0x826A0578;
	sub_827E0668(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r8,252(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lfs f0,876(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,272(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r9,284(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r7,256(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,264(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// stw r8,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r8.u32);
	// stw r8,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r8.u32);
	// lwz r6,268(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r5,276(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// stw r11,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// stw r11,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// stw r11,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r11.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// stw r8,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r8.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r4,280(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r7,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r7.u32);
	// stw r7,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
	// stw r6,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r6.u32);
	// stw r6,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r6.u32);
	// stw r5,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// stw r4,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r4.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// b 0x826a0778
	goto loc_826A0778;
loc_826A067C:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,272(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r9,284(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// lwz r6,252(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r5,256(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r11,264(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r7,268(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r4,276(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// stw r6,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r6.u32);
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// stw r11,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r11.u32);
	// stw r5,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r5.u32);
	// stw r6,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r6.u32);
	// stw r5,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r5.u32);
	// stw r7,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r7.u32);
	// stw r7,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r7.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r4,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r4.u32);
	// stw r3,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r3.u32);
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// stw r11,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// stw r11,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_826A0778:
	// stw r10,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r10.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r10,452(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// li r5,808
	ctx.r5.s64 = 808;
	// lwz r9,464(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r11,2836
	ctx.r3.s64 = ctx.r11.s64 + 2836;
	// lwz r7,444(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stfs f29,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r8,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// lwz r8,476(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// stw r11,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r11.u32);
	// stw r11,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,448(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// lwz r6,456(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// lwz r29,460(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r28,468(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r27,472(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 472);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r7,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r7.u32);
	// stw r10,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r10.u32);
	// stw r7,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r7.u32);
	// stw r10,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r10.u32);
	// stw r6,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r6.u32);
	// stw r29,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r29.u32);
	// stw r6,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r6.u32);
	// stw r29,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r29.u32);
	// stw r28,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r28.u32);
	// stw r27,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, ctx.r27.u32);
	// stw r11,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r11.u32);
	// stw r11,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r11.u32);
	// stw r9,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r9.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x826A081C;
	sub_82A4EA80(ctx, base);
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r9,232(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// stw r10,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r10.u32);
	// stw r10,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r10.u32);
	// stw r9,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r9.u32);
	// stw r9,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r9.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f29,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r9,244(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// stw r10,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r10.u32);
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stw r9,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r9.u32);
	// stw r9,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r9.u32);
	// lwz r9,856(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 856);
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// bne cr6,0x826a08d4
	if (!ctx.cr6.eq) goto loc_826A08D4;
	// lfs f0,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,832(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x826a08d4
	if (!ctx.cr6.lt) goto loc_826A08D4;
	// lfs f13,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,832(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 832, temp.u32);
	// stfs f13,836(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 836, temp.u32);
	// stfs f12,840(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 840, temp.u32);
loc_826A08D4:
	// lfs f0,876(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x826a0a5c
	if (ctx.cr6.gt) goto loc_826A0A5C;
	// b 0x826a0a58
	goto loc_826A0A58;
loc_826A08E4:
	// lfs f13,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,468(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	ctx.f13.f64 = double(temp.f32);
	// li r8,8324
	ctx.r8.s64 = 8324;
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,472(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f13,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r5,1412(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1412);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82825330
	ctx.lr = 0x826A095C;
	sub_82825330(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a098c
	if (ctx.cr0.eq) goto loc_826A098C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r11.u32);
	// stfs f0,888(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 888, temp.u32);
	// stfs f0,876(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 876, temp.u32);
	// stfs f0,892(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 892, temp.u32);
	// stfs f0,880(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 880, temp.u32);
	// stfs f0,884(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 884, temp.u32);
	// stfs f30,884(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 884, temp.u32);
	// b 0x826a09bc
	goto loc_826A09BC;
loc_826A098C:
	// lwz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826a09c0
	if (!ctx.cr6.eq) goto loc_826A09C0;
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,884(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 884, temp.u32);
	// stfs f0,888(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 888, temp.u32);
	// stfs f0,876(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 876, temp.u32);
	// stfs f0,892(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 892, temp.u32);
	// stfs f0,880(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 880, temp.u32);
	// stw r30,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r30.u32);
	// lfs f0,832(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,884(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 884, temp.u32);
loc_826A09BC:
	// stfs f31,872(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 872, temp.u32);
loc_826A09C0:
	// addi r3,r31,860
	ctx.r3.s64 = ctx.r31.s64 + 860;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x827e0668
	ctx.lr = 0x826A09CC;
	sub_827E0668(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lfs f0,876(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r30,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r30.u32);
	// stw r9,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
loc_826A0A58:
	// stw r30,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r30.u32);
loc_826A0A5C:
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82a61794
	ctx.lr = 0x826A0A68;
	__restfpr_28(ctx, base);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A0A70"))) PPC_WEAK_FUNC(sub_826A0A70);
PPC_FUNC_IMPL(__imp__sub_826A0A70) {
	PPC_FUNC_PROLOGUE();
	// li r3,824
	ctx.r3.s64 = 824;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A0A78"))) PPC_WEAK_FUNC(sub_826A0A78);
PPC_FUNC_IMPL(__imp__sub_826A0A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24368(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24368);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826a0ab8
	if (!ctx.cr0.eq) goto loc_826A0AB8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,24368(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24368, ctx.r11.u32);
	// addi r3,r9,22232
	ctx.r3.s64 = ctx.r9.s64 + 22232;
	// bl 0x82816528
	ctx.lr = 0x826A0AB0;
	sub_82816528(ctx, base);
	// stw r3,24364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24364, ctx.r3.u32);
	// b 0x826a0abc
	goto loc_826A0ABC;
loc_826A0AB8:
	// lwz r3,24364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24364);
loc_826A0ABC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A0AD0"))) PPC_WEAK_FUNC(sub_826A0AD0);
PPC_FUNC_IMPL(__imp__sub_826A0AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826a0b20
	ctx.lr = 0x826A0AF0;
	sub_826A0B20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A0B04;
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

__attribute__((alias("__imp__sub_826A0B20"))) PPC_WEAK_FUNC(sub_826A0B20);
PPC_FUNC_IMPL(__imp__sub_826A0B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13612
	ctx.r31.s64 = ctx.r11.s64 + 13612;
	// lwz r11,13608(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13608);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826a0b68
	if (!ctx.cr0.eq) goto loc_826A0B68;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,23660
	ctx.r9.s64 = ctx.r9.s64 + 23660;
	// stw r11,13608(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13608, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27760
	ctx.r3.s64 = ctx.r11.s64 + 27760;
	// bl 0x82a4c758
	ctx.lr = 0x826A0B68;
	sub_82A4C758(ctx, base);
loc_826A0B68:
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

__attribute__((alias("__imp__sub_826A0B80"))) PPC_WEAK_FUNC(sub_826A0B80);
PPC_FUNC_IMPL(__imp__sub_826A0B80) {
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
	// li r3,916
	ctx.r3.s64 = 916;
	// bl 0x82833108
	ctx.lr = 0x826A0B94;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a0ba4
	if (ctx.cr0.eq) goto loc_826A0BA4;
	// bl 0x826a0190
	ctx.lr = 0x826A0BA0;
	sub_826A0190(ctx, base);
	// b 0x826a0ba8
	goto loc_826A0BA8;
loc_826A0BA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A0BA8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A0BB8"))) PPC_WEAK_FUNC(sub_826A0BB8);
PPC_FUNC_IMPL(__imp__sub_826A0BB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,916
	ctx.r3.s64 = 916;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A0BC0"))) PPC_WEAK_FUNC(sub_826A0BC0);
PPC_FUNC_IMPL(__imp__sub_826A0BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24360(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24360);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826a0c00
	if (!ctx.cr0.eq) goto loc_826A0C00;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,24360(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24360, ctx.r11.u32);
	// addi r3,r9,22260
	ctx.r3.s64 = ctx.r9.s64 + 22260;
	// bl 0x82816528
	ctx.lr = 0x826A0BF8;
	sub_82816528(ctx, base);
	// stw r3,24356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24356, ctx.r3.u32);
	// b 0x826a0c04
	goto loc_826A0C04;
loc_826A0C00:
	// lwz r3,24356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24356);
loc_826A0C04:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A0C18"))) PPC_WEAK_FUNC(sub_826A0C18);
PPC_FUNC_IMPL(__imp__sub_826A0C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826a0c68
	ctx.lr = 0x826A0C38;
	sub_826A0C68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A0C4C;
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

__attribute__((alias("__imp__sub_826A0C68"))) PPC_WEAK_FUNC(sub_826A0C68);
PPC_FUNC_IMPL(__imp__sub_826A0C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13596
	ctx.r31.s64 = ctx.r11.s64 + 13596;
	// lwz r11,13592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13592);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826a0cb0
	if (!ctx.cr0.eq) goto loc_826A0CB0;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,23776
	ctx.r9.s64 = ctx.r9.s64 + 23776;
	// stw r11,13592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13592, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27736
	ctx.r3.s64 = ctx.r11.s64 + 27736;
	// bl 0x82a4c758
	ctx.lr = 0x826A0CB0;
	sub_82A4C758(ctx, base);
loc_826A0CB0:
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

__attribute__((alias("__imp__sub_826A0CC8"))) PPC_WEAK_FUNC(sub_826A0CC8);
PPC_FUNC_IMPL(__imp__sub_826A0CC8) {
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
	// li r3,4592
	ctx.r3.s64 = 4592;
	// bl 0x82833108
	ctx.lr = 0x826A0CE0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826a0d28
	if (ctx.cr0.eq) goto loc_826A0D28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e0e20
	ctx.lr = 0x826A0CF0;
	sub_827E0E20(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// addi r10,r10,23800
	ctx.r10.s64 = ctx.r10.s64 + 23800;
	// lfs f0,32748(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32748);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,24988
	ctx.r9.s64 = ctx.r9.s64 + 24988;
	// addi r11,r8,25040
	ctx.r11.s64 = ctx.r8.s64 + 25040;
	// stfs f0,2600(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2600, temp.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// b 0x826a0d2c
	goto loc_826A0D2C;
loc_826A0D28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A0D2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A0D40"))) PPC_WEAK_FUNC(sub_826A0D40);
PPC_FUNC_IMPL(__imp__sub_826A0D40) {
	PPC_FUNC_PROLOGUE();
	// li r3,4592
	ctx.r3.s64 = 4592;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A0D48"))) PPC_WEAK_FUNC(sub_826A0D48);
PPC_FUNC_IMPL(__imp__sub_826A0D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24352);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826a0d88
	if (!ctx.cr0.eq) goto loc_826A0D88;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,24352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24352, ctx.r11.u32);
	// addi r3,r9,22280
	ctx.r3.s64 = ctx.r9.s64 + 22280;
	// bl 0x82816528
	ctx.lr = 0x826A0D80;
	sub_82816528(ctx, base);
	// stw r3,24348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24348, ctx.r3.u32);
	// b 0x826a0d8c
	goto loc_826A0D8C;
loc_826A0D88:
	// lwz r3,24348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24348);
loc_826A0D8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A0DA0"))) PPC_WEAK_FUNC(sub_826A0DA0);
PPC_FUNC_IMPL(__imp__sub_826A0DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826a0df0
	ctx.lr = 0x826A0DC0;
	sub_826A0DF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A0DD4;
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

__attribute__((alias("__imp__sub_826A0DF0"))) PPC_WEAK_FUNC(sub_826A0DF0);
PPC_FUNC_IMPL(__imp__sub_826A0DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13604
	ctx.r31.s64 = ctx.r11.s64 + 13604;
	// lwz r11,13600(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13600);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826a0e38
	if (!ctx.cr0.eq) goto loc_826A0E38;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25064
	ctx.r9.s64 = ctx.r9.s64 + 25064;
	// stw r11,13600(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13600, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27712
	ctx.r3.s64 = ctx.r11.s64 + 27712;
	// bl 0x82a4c758
	ctx.lr = 0x826A0E38;
	sub_82A4C758(ctx, base);
loc_826A0E38:
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

__attribute__((alias("__imp__sub_826A0E50"))) PPC_WEAK_FUNC(sub_826A0E50);
PPC_FUNC_IMPL(__imp__sub_826A0E50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8269fe90
	sub_8269FE90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A0E58"))) PPC_WEAK_FUNC(sub_826A0E58);
PPC_FUNC_IMPL(__imp__sub_826A0E58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8269fe40
	sub_8269FE40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A0E60"))) PPC_WEAK_FUNC(sub_826A0E60);
PPC_FUNC_IMPL(__imp__sub_826A0E60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8269f5d0
	sub_8269F5D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A0E68"))) PPC_WEAK_FUNC(sub_826A0E68);
PPC_FUNC_IMPL(__imp__sub_826A0E68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8269f900
	sub_8269F900(ctx, base);
	return;
}

