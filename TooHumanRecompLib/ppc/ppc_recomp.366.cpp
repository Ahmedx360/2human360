#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83128120"))) PPC_WEAK_FUNC(sub_83128120);
PPC_FUNC_IMPL(__imp__sub_83128120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-19688
	ctx.r31.s64 = ctx.r11.s64 + -19688;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x83128150;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83128160
	if (ctx.cr6.eq) goto loc_83128160;
	// bl 0x82332db8
	ctx.lr = 0x83128160;
	sub_82332DB8(ctx, base);
loc_83128160:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128190"))) PPC_WEAK_FUNC(sub_83128190);
PPC_FUNC_IMPL(__imp__sub_83128190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-19664
	ctx.r31.s64 = ctx.r11.s64 + -19664;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x831281C0;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831281d0
	if (ctx.cr6.eq) goto loc_831281D0;
	// bl 0x82332db8
	ctx.lr = 0x831281D0;
	sub_82332DB8(ctx, base);
loc_831281D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128200"))) PPC_WEAK_FUNC(sub_83128200);
PPC_FUNC_IMPL(__imp__sub_83128200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-19640
	ctx.r31.s64 = ctx.r11.s64 + -19640;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x83128230;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83128240
	if (ctx.cr6.eq) goto loc_83128240;
	// bl 0x82332db8
	ctx.lr = 0x83128240;
	sub_82332DB8(ctx, base);
loc_83128240:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128270"))) PPC_WEAK_FUNC(sub_83128270);
PPC_FUNC_IMPL(__imp__sub_83128270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-19616
	ctx.r31.s64 = ctx.r11.s64 + -19616;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x831282A0;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831282b0
	if (ctx.cr6.eq) goto loc_831282B0;
	// bl 0x82332db8
	ctx.lr = 0x831282B0;
	sub_82332DB8(ctx, base);
loc_831282B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831282E0"))) PPC_WEAK_FUNC(sub_831282E0);
PPC_FUNC_IMPL(__imp__sub_831282E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-19592
	ctx.r31.s64 = ctx.r11.s64 + -19592;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x83128310;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83128320
	if (ctx.cr6.eq) goto loc_83128320;
	// bl 0x82332db8
	ctx.lr = 0x83128320;
	sub_82332DB8(ctx, base);
loc_83128320:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128350"))) PPC_WEAK_FUNC(sub_83128350);
PPC_FUNC_IMPL(__imp__sub_83128350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-19544
	ctx.r31.s64 = ctx.r11.s64 + -19544;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x83128380;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83128390
	if (ctx.cr6.eq) goto loc_83128390;
	// bl 0x82332db8
	ctx.lr = 0x83128390;
	sub_82332DB8(ctx, base);
loc_83128390:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831283C0"))) PPC_WEAK_FUNC(sub_831283C0);
PPC_FUNC_IMPL(__imp__sub_831283C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-19520
	ctx.r31.s64 = ctx.r11.s64 + -19520;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x831283F0;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83128400
	if (ctx.cr6.eq) goto loc_83128400;
	// bl 0x82332db8
	ctx.lr = 0x83128400;
	sub_82332DB8(ctx, base);
loc_83128400:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128430"))) PPC_WEAK_FUNC(sub_83128430);
PPC_FUNC_IMPL(__imp__sub_83128430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-19496
	ctx.r31.s64 = ctx.r11.s64 + -19496;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x83128460;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83128470
	if (ctx.cr6.eq) goto loc_83128470;
	// bl 0x82332db8
	ctx.lr = 0x83128470;
	sub_82332DB8(ctx, base);
loc_83128470:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831284A0"))) PPC_WEAK_FUNC(sub_831284A0);
PPC_FUNC_IMPL(__imp__sub_831284A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-19472
	ctx.r31.s64 = ctx.r11.s64 + -19472;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x831284D0;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831284e0
	if (ctx.cr6.eq) goto loc_831284E0;
	// bl 0x82332db8
	ctx.lr = 0x831284E0;
	sub_82332DB8(ctx, base);
loc_831284E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128510"))) PPC_WEAK_FUNC(sub_83128510);
PPC_FUNC_IMPL(__imp__sub_83128510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-19448
	ctx.r31.s64 = ctx.r11.s64 + -19448;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x83128540;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83128550
	if (ctx.cr6.eq) goto loc_83128550;
	// bl 0x82332db8
	ctx.lr = 0x83128550;
	sub_82332DB8(ctx, base);
loc_83128550:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128580"))) PPC_WEAK_FUNC(sub_83128580);
PPC_FUNC_IMPL(__imp__sub_83128580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-19424
	ctx.r31.s64 = ctx.r11.s64 + -19424;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x831285B0;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831285c0
	if (ctx.cr6.eq) goto loc_831285C0;
	// bl 0x82332db8
	ctx.lr = 0x831285C0;
	sub_82332DB8(ctx, base);
loc_831285C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831285F0"))) PPC_WEAK_FUNC(sub_831285F0);
PPC_FUNC_IMPL(__imp__sub_831285F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-19400
	ctx.r31.s64 = ctx.r11.s64 + -19400;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x83128620;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83128630
	if (ctx.cr6.eq) goto loc_83128630;
	// bl 0x82332db8
	ctx.lr = 0x83128630;
	sub_82332DB8(ctx, base);
loc_83128630:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128660"))) PPC_WEAK_FUNC(sub_83128660);
PPC_FUNC_IMPL(__imp__sub_83128660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-19376
	ctx.r31.s64 = ctx.r11.s64 + -19376;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x83128690;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831286a0
	if (ctx.cr6.eq) goto loc_831286A0;
	// bl 0x82332db8
	ctx.lr = 0x831286A0;
	sub_82332DB8(ctx, base);
loc_831286A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831286D0"))) PPC_WEAK_FUNC(sub_831286D0);
PPC_FUNC_IMPL(__imp__sub_831286D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-19352
	ctx.r31.s64 = ctx.r11.s64 + -19352;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x83128700;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83128710
	if (ctx.cr6.eq) goto loc_83128710;
	// bl 0x82332db8
	ctx.lr = 0x83128710;
	sub_82332DB8(ctx, base);
loc_83128710:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128740"))) PPC_WEAK_FUNC(sub_83128740);
PPC_FUNC_IMPL(__imp__sub_83128740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-19328
	ctx.r31.s64 = ctx.r11.s64 + -19328;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x83128770;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83128780
	if (ctx.cr6.eq) goto loc_83128780;
	// bl 0x82332db8
	ctx.lr = 0x83128780;
	sub_82332DB8(ctx, base);
loc_83128780:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831287B0"))) PPC_WEAK_FUNC(sub_831287B0);
PPC_FUNC_IMPL(__imp__sub_831287B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-19304
	ctx.r31.s64 = ctx.r11.s64 + -19304;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x831287E0;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831287f0
	if (ctx.cr6.eq) goto loc_831287F0;
	// bl 0x82332db8
	ctx.lr = 0x831287F0;
	sub_82332DB8(ctx, base);
loc_831287F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128820"))) PPC_WEAK_FUNC(sub_83128820);
PPC_FUNC_IMPL(__imp__sub_83128820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-19280
	ctx.r31.s64 = ctx.r11.s64 + -19280;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x83128850;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83128860
	if (ctx.cr6.eq) goto loc_83128860;
	// bl 0x82332db8
	ctx.lr = 0x83128860;
	sub_82332DB8(ctx, base);
loc_83128860:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128890"))) PPC_WEAK_FUNC(sub_83128890);
PPC_FUNC_IMPL(__imp__sub_83128890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-19256
	ctx.r31.s64 = ctx.r11.s64 + -19256;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x831288C0;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831288d0
	if (ctx.cr6.eq) goto loc_831288D0;
	// bl 0x82332db8
	ctx.lr = 0x831288D0;
	sub_82332DB8(ctx, base);
loc_831288D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128900"))) PPC_WEAK_FUNC(sub_83128900);
PPC_FUNC_IMPL(__imp__sub_83128900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-19232
	ctx.r31.s64 = ctx.r11.s64 + -19232;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x83128930;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83128940
	if (ctx.cr6.eq) goto loc_83128940;
	// bl 0x82332db8
	ctx.lr = 0x83128940;
	sub_82332DB8(ctx, base);
loc_83128940:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128970"))) PPC_WEAK_FUNC(sub_83128970);
PPC_FUNC_IMPL(__imp__sub_83128970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-19208
	ctx.r31.s64 = ctx.r11.s64 + -19208;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x831289A0;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831289b0
	if (ctx.cr6.eq) goto loc_831289B0;
	// bl 0x82332db8
	ctx.lr = 0x831289B0;
	sub_82332DB8(ctx, base);
loc_831289B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831289E0"))) PPC_WEAK_FUNC(sub_831289E0);
PPC_FUNC_IMPL(__imp__sub_831289E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-19184
	ctx.r31.s64 = ctx.r11.s64 + -19184;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x83128A10;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83128a20
	if (ctx.cr6.eq) goto loc_83128A20;
	// bl 0x82332db8
	ctx.lr = 0x83128A20;
	sub_82332DB8(ctx, base);
loc_83128A20:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128A50"))) PPC_WEAK_FUNC(sub_83128A50);
PPC_FUNC_IMPL(__imp__sub_83128A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-19160
	ctx.r31.s64 = ctx.r11.s64 + -19160;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x83128A80;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83128a90
	if (ctx.cr6.eq) goto loc_83128A90;
	// bl 0x82332db8
	ctx.lr = 0x83128A90;
	sub_82332DB8(ctx, base);
loc_83128A90:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128AC0"))) PPC_WEAK_FUNC(sub_83128AC0);
PPC_FUNC_IMPL(__imp__sub_83128AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-19136
	ctx.r31.s64 = ctx.r11.s64 + -19136;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x83128AF0;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83128b00
	if (ctx.cr6.eq) goto loc_83128B00;
	// bl 0x82332db8
	ctx.lr = 0x83128B00;
	sub_82332DB8(ctx, base);
loc_83128B00:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128B30"))) PPC_WEAK_FUNC(sub_83128B30);
PPC_FUNC_IMPL(__imp__sub_83128B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-19112
	ctx.r31.s64 = ctx.r11.s64 + -19112;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x83128B60;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83128b70
	if (ctx.cr6.eq) goto loc_83128B70;
	// bl 0x82332db8
	ctx.lr = 0x83128B70;
	sub_82332DB8(ctx, base);
loc_83128B70:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128BA0"))) PPC_WEAK_FUNC(sub_83128BA0);
PPC_FUNC_IMPL(__imp__sub_83128BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-19088
	ctx.r31.s64 = ctx.r11.s64 + -19088;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x83128BD0;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83128be0
	if (ctx.cr6.eq) goto loc_83128BE0;
	// bl 0x82332db8
	ctx.lr = 0x83128BE0;
	sub_82332DB8(ctx, base);
loc_83128BE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128C10"))) PPC_WEAK_FUNC(sub_83128C10);
PPC_FUNC_IMPL(__imp__sub_83128C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-19064
	ctx.r31.s64 = ctx.r11.s64 + -19064;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x83128C40;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83128c50
	if (ctx.cr6.eq) goto loc_83128C50;
	// bl 0x82332db8
	ctx.lr = 0x83128C50;
	sub_82332DB8(ctx, base);
loc_83128C50:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128C80"))) PPC_WEAK_FUNC(sub_83128C80);
PPC_FUNC_IMPL(__imp__sub_83128C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-19040
	ctx.r31.s64 = ctx.r11.s64 + -19040;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x83128CB0;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83128cc0
	if (ctx.cr6.eq) goto loc_83128CC0;
	// bl 0x82332db8
	ctx.lr = 0x83128CC0;
	sub_82332DB8(ctx, base);
loc_83128CC0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128CF0"))) PPC_WEAK_FUNC(sub_83128CF0);
PPC_FUNC_IMPL(__imp__sub_83128CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-19016
	ctx.r31.s64 = ctx.r11.s64 + -19016;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x83128D20;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83128d30
	if (ctx.cr6.eq) goto loc_83128D30;
	// bl 0x82332db8
	ctx.lr = 0x83128D30;
	sub_82332DB8(ctx, base);
loc_83128D30:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128D60"))) PPC_WEAK_FUNC(sub_83128D60);
PPC_FUNC_IMPL(__imp__sub_83128D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-18992
	ctx.r31.s64 = ctx.r11.s64 + -18992;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x83128D90;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83128da0
	if (ctx.cr6.eq) goto loc_83128DA0;
	// bl 0x82332db8
	ctx.lr = 0x83128DA0;
	sub_82332DB8(ctx, base);
loc_83128DA0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128DD0"))) PPC_WEAK_FUNC(sub_83128DD0);
PPC_FUNC_IMPL(__imp__sub_83128DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-18968
	ctx.r31.s64 = ctx.r11.s64 + -18968;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x83128E00;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83128e10
	if (ctx.cr6.eq) goto loc_83128E10;
	// bl 0x82332db8
	ctx.lr = 0x83128E10;
	sub_82332DB8(ctx, base);
loc_83128E10:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128E40"))) PPC_WEAK_FUNC(sub_83128E40);
PPC_FUNC_IMPL(__imp__sub_83128E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-18944
	ctx.r31.s64 = ctx.r11.s64 + -18944;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x83128E70;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83128e80
	if (ctx.cr6.eq) goto loc_83128E80;
	// bl 0x82332db8
	ctx.lr = 0x83128E80;
	sub_82332DB8(ctx, base);
loc_83128E80:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128EB0"))) PPC_WEAK_FUNC(sub_83128EB0);
PPC_FUNC_IMPL(__imp__sub_83128EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-18920
	ctx.r31.s64 = ctx.r11.s64 + -18920;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x83128EE0;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83128ef0
	if (ctx.cr6.eq) goto loc_83128EF0;
	// bl 0x82332db8
	ctx.lr = 0x83128EF0;
	sub_82332DB8(ctx, base);
loc_83128EF0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128F20"))) PPC_WEAK_FUNC(sub_83128F20);
PPC_FUNC_IMPL(__imp__sub_83128F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-18896
	ctx.r31.s64 = ctx.r11.s64 + -18896;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x83128F50;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83128f60
	if (ctx.cr6.eq) goto loc_83128F60;
	// bl 0x82332db8
	ctx.lr = 0x83128F60;
	sub_82332DB8(ctx, base);
loc_83128F60:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83128F90"))) PPC_WEAK_FUNC(sub_83128F90);
PPC_FUNC_IMPL(__imp__sub_83128F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r31,r11,-18872
	ctx.r31.s64 = ctx.r11.s64 + -18872;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x83128FC0;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83128fd0
	if (ctx.cr6.eq) goto loc_83128FD0;
	// bl 0x82332db8
	ctx.lr = 0x83128FD0;
	sub_82332DB8(ctx, base);
loc_83128FD0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129000"))) PPC_WEAK_FUNC(sub_83129000);
PPC_FUNC_IMPL(__imp__sub_83129000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-29556
	ctx.r11.s64 = ctx.r11.s64 + -29556;
	// stw r11,-18824(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18824, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129018"))) PPC_WEAK_FUNC(sub_83129018);
PPC_FUNC_IMPL(__imp__sub_83129018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r31,r11,-18792
	ctx.r31.s64 = ctx.r11.s64 + -18792;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83129040
	if (ctx.cr6.eq) goto loc_83129040;
	// bl 0x82332db8
	ctx.lr = 0x83129040;
	sub_82332DB8(ctx, base);
loc_83129040:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82332ca8
	ctx.lr = 0x83129068;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83129078
	if (ctx.cr6.eq) goto loc_83129078;
	// bl 0x82332db8
	ctx.lr = 0x83129078;
	sub_82332DB8(ctx, base);
loc_83129078:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831290A8"))) PPC_WEAK_FUNC(sub_831290A8);
PPC_FUNC_IMPL(__imp__sub_831290A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r3,r11,-18760
	ctx.r3.s64 = ctx.r11.s64 + -18760;
	// b 0x8239d768
	sub_8239D768(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831290B8"))) PPC_WEAK_FUNC(sub_831290B8);
PPC_FUNC_IMPL(__imp__sub_831290B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-29556
	ctx.r11.s64 = ctx.r11.s64 + -29556;
	// stw r11,-18736(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18736, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831290D0"))) PPC_WEAK_FUNC(sub_831290D0);
PPC_FUNC_IMPL(__imp__sub_831290D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r3,r11,-18688
	ctx.r3.s64 = ctx.r11.s64 + -18688;
	// b 0x82767728
	sub_82767728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831290E0"))) PPC_WEAK_FUNC(sub_831290E0);
PPC_FUNC_IMPL(__imp__sub_831290E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-29556
	ctx.r11.s64 = ctx.r11.s64 + -29556;
	// stw r11,-18620(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18620, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831290F8"))) PPC_WEAK_FUNC(sub_831290F8);
PPC_FUNC_IMPL(__imp__sub_831290F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-29556
	ctx.r11.s64 = ctx.r11.s64 + -29556;
	// stw r11,-18588(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18588, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129110"))) PPC_WEAK_FUNC(sub_83129110);
PPC_FUNC_IMPL(__imp__sub_83129110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r31,r11,6792
	ctx.r31.s64 = ctx.r11.s64 + 6792;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83129138
	if (ctx.cr6.eq) goto loc_83129138;
	// bl 0x82332db8
	ctx.lr = 0x83129138;
	sub_82332DB8(ctx, base);
loc_83129138:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129168"))) PPC_WEAK_FUNC(sub_83129168);
PPC_FUNC_IMPL(__imp__sub_83129168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lwz r3,6808(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6808);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831291a0
	if (ctx.cr6.eq) goto loc_831291A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83129198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6808, ctx.r11.u32);
loc_831291A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831291B8"))) PPC_WEAK_FUNC(sub_831291B8);
PPC_FUNC_IMPL(__imp__sub_831291B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r31,r11,7260
	ctx.r31.s64 = ctx.r11.s64 + 7260;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x831291e0
	if (ctx.cr6.eq) goto loc_831291E0;
	// bl 0x82332db8
	ctx.lr = 0x831291E0;
	sub_82332DB8(ctx, base);
loc_831291E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129210"))) PPC_WEAK_FUNC(sub_83129210);
PPC_FUNC_IMPL(__imp__sub_83129210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x83129218;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r31,r11,-18444
	ctx.r31.s64 = ctx.r11.s64 + -18444;
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x83129250
	if (!ctx.cr6.gt) goto loc_83129250;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_83129238:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82333960
	ctx.lr = 0x83129244;
	sub_82333960(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// bne 0x83129238
	if (!ctx.cr0.eq) goto loc_83129238;
loc_83129250:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,28
	ctx.r6.s64 = 28;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82332ca8
	ctx.lr = 0x83129268;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83129278
	if (ctx.cr6.eq) goto loc_83129278;
	// bl 0x82332db8
	ctx.lr = 0x83129278;
	sub_82332DB8(ctx, base);
loc_83129278:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83129298"))) PPC_WEAK_FUNC(sub_83129298);
PPC_FUNC_IMPL(__imp__sub_83129298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14028(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14028, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831292B0"))) PPC_WEAK_FUNC(sub_831292B0);
PPC_FUNC_IMPL(__imp__sub_831292B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14024(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14024, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831292C8"))) PPC_WEAK_FUNC(sub_831292C8);
PPC_FUNC_IMPL(__imp__sub_831292C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14044(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14044, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831292E0"))) PPC_WEAK_FUNC(sub_831292E0);
PPC_FUNC_IMPL(__imp__sub_831292E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14032(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14032, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831292F8"))) PPC_WEAK_FUNC(sub_831292F8);
PPC_FUNC_IMPL(__imp__sub_831292F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-29556
	ctx.r11.s64 = ctx.r11.s64 + -29556;
	// stw r11,-18404(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18404, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129310"))) PPC_WEAK_FUNC(sub_83129310);
PPC_FUNC_IMPL(__imp__sub_83129310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14052(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14052, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129328"))) PPC_WEAK_FUNC(sub_83129328);
PPC_FUNC_IMPL(__imp__sub_83129328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14064(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14064, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129340"))) PPC_WEAK_FUNC(sub_83129340);
PPC_FUNC_IMPL(__imp__sub_83129340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14080(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14080, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129358"))) PPC_WEAK_FUNC(sub_83129358);
PPC_FUNC_IMPL(__imp__sub_83129358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,23380(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23380, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129370"))) PPC_WEAK_FUNC(sub_83129370);
PPC_FUNC_IMPL(__imp__sub_83129370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,23356(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23356, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129388"))) PPC_WEAK_FUNC(sub_83129388);
PPC_FUNC_IMPL(__imp__sub_83129388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,23344(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23344, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831293A0"))) PPC_WEAK_FUNC(sub_831293A0);
PPC_FUNC_IMPL(__imp__sub_831293A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14084(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14084, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831293B8"))) PPC_WEAK_FUNC(sub_831293B8);
PPC_FUNC_IMPL(__imp__sub_831293B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,10572
	ctx.r3.s64 = ctx.r11.s64 + 10572;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8249d108
	sub_8249D108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831293D0"))) PPC_WEAK_FUNC(sub_831293D0);
PPC_FUNC_IMPL(__imp__sub_831293D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,29072
	ctx.r11.s64 = ctx.r11.s64 + 29072;
	// stw r11,-18260(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18260, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831293E8"))) PPC_WEAK_FUNC(sub_831293E8);
PPC_FUNC_IMPL(__imp__sub_831293E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-29556
	ctx.r11.s64 = ctx.r11.s64 + -29556;
	// stw r11,-18228(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18228, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129400"))) PPC_WEAK_FUNC(sub_83129400);
PPC_FUNC_IMPL(__imp__sub_83129400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x83129408;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r10,10924
	ctx.r31.s64 = ctx.r10.s64 + 10924;
	// addi r29,r11,21288
	ctx.r29.s64 = ctx.r11.s64 + 21288;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,10924(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10924);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x83129484
	if (ctx.cr6.eq) goto loc_83129484;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_83129430:
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x83129458
	if (!ctx.cr6.lt) goto loc_83129458;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83129430
	if (!ctx.cr6.eq) goto loc_83129430;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// blt cr6,0x83129484
	if (ctx.cr6.lt) goto loc_83129484;
loc_83129458:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lis r8,-32218
	ctx.r8.s64 = -2111438848;
	// addi r6,r10,-23760
	ctx.r6.s64 = ctx.r10.s64 + -23760;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,-23896
	ctx.r4.s64 = ctx.r9.s64 + -23896;
	// addi r3,r8,-23784
	ctx.r3.s64 = ctx.r8.s64 + -23784;
	// li r5,82
	ctx.r5.s64 = 82;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83129484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83129484:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8312949c
	if (!ctx.cr6.eq) goto loc_8312949C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_8312949C:
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,10920(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10920);
	// addi r10,r10,-64
	ctx.r10.s64 = ctx.r10.s64 + -64;
loc_831294AC:
	// addi r10,r10,-64
	ctx.r10.s64 = ctx.r10.s64 + -64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-64
	ctx.r10.s64 = ctx.r10.s64 + -64;
	// bge 0x831294ac
	if (!ctx.cr0.lt) goto loc_831294AC;
	// stw r10,10920(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10920, ctx.r10.u32);
	// li r30,8
	ctx.r30.s64 = 8;
	// addi r31,r29,824
	ctx.r31.s64 = ctx.r29.s64 + 824;
loc_831294C8:
	// addi r31,r31,-88
	ctx.r31.s64 = ctx.r31.s64 + -88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a6de0
	ctx.lr = 0x831294D4;
	sub_827A6DE0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x831294c8
	if (!ctx.cr0.lt) goto loc_831294C8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831294E8"))) PPC_WEAK_FUNC(sub_831294E8);
PPC_FUNC_IMPL(__imp__sub_831294E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,18224
	ctx.r3.s64 = ctx.r11.s64 + 18224;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8249d108
	sub_8249D108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83129500"))) PPC_WEAK_FUNC(sub_83129500);
PPC_FUNC_IMPL(__imp__sub_83129500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,25780
	ctx.r3.s64 = ctx.r11.s64 + 25780;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8249d108
	sub_8249D108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83129518"))) PPC_WEAK_FUNC(sub_83129518);
PPC_FUNC_IMPL(__imp__sub_83129518) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r11,10920(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10920);
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// stw r11,10920(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10920, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129530"))) PPC_WEAK_FUNC(sub_83129530);
PPC_FUNC_IMPL(__imp__sub_83129530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14096(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14096, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129548"))) PPC_WEAK_FUNC(sub_83129548);
PPC_FUNC_IMPL(__imp__sub_83129548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14260, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129560"))) PPC_WEAK_FUNC(sub_83129560);
PPC_FUNC_IMPL(__imp__sub_83129560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14276(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14276, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129578"))) PPC_WEAK_FUNC(sub_83129578);
PPC_FUNC_IMPL(__imp__sub_83129578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14268, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129590"))) PPC_WEAK_FUNC(sub_83129590);
PPC_FUNC_IMPL(__imp__sub_83129590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14200, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831295A8"))) PPC_WEAK_FUNC(sub_831295A8);
PPC_FUNC_IMPL(__imp__sub_831295A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14156, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831295C0"))) PPC_WEAK_FUNC(sub_831295C0);
PPC_FUNC_IMPL(__imp__sub_831295C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831295D8"))) PPC_WEAK_FUNC(sub_831295D8);
PPC_FUNC_IMPL(__imp__sub_831295D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14236(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14236, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831295F0"))) PPC_WEAK_FUNC(sub_831295F0);
PPC_FUNC_IMPL(__imp__sub_831295F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14148, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129608"))) PPC_WEAK_FUNC(sub_83129608);
PPC_FUNC_IMPL(__imp__sub_83129608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14208(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14208, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129620"))) PPC_WEAK_FUNC(sub_83129620);
PPC_FUNC_IMPL(__imp__sub_83129620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14184, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129638"))) PPC_WEAK_FUNC(sub_83129638);
PPC_FUNC_IMPL(__imp__sub_83129638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14240(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14240, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129650"))) PPC_WEAK_FUNC(sub_83129650);
PPC_FUNC_IMPL(__imp__sub_83129650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14116, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129668"))) PPC_WEAK_FUNC(sub_83129668);
PPC_FUNC_IMPL(__imp__sub_83129668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14216, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129680"))) PPC_WEAK_FUNC(sub_83129680);
PPC_FUNC_IMPL(__imp__sub_83129680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14196, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129698"))) PPC_WEAK_FUNC(sub_83129698);
PPC_FUNC_IMPL(__imp__sub_83129698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14220, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831296B0"))) PPC_WEAK_FUNC(sub_831296B0);
PPC_FUNC_IMPL(__imp__sub_831296B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14168, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831296C8"))) PPC_WEAK_FUNC(sub_831296C8);
PPC_FUNC_IMPL(__imp__sub_831296C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14248, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831296E0"))) PPC_WEAK_FUNC(sub_831296E0);
PPC_FUNC_IMPL(__imp__sub_831296E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14136, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831296F8"))) PPC_WEAK_FUNC(sub_831296F8);
PPC_FUNC_IMPL(__imp__sub_831296F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14224, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129710"))) PPC_WEAK_FUNC(sub_83129710);
PPC_FUNC_IMPL(__imp__sub_83129710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14160, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129728"))) PPC_WEAK_FUNC(sub_83129728);
PPC_FUNC_IMPL(__imp__sub_83129728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14176, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129740"))) PPC_WEAK_FUNC(sub_83129740);
PPC_FUNC_IMPL(__imp__sub_83129740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14232, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129758"))) PPC_WEAK_FUNC(sub_83129758);
PPC_FUNC_IMPL(__imp__sub_83129758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14284(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14284, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129770"))) PPC_WEAK_FUNC(sub_83129770);
PPC_FUNC_IMPL(__imp__sub_83129770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14292, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129788"))) PPC_WEAK_FUNC(sub_83129788);
PPC_FUNC_IMPL(__imp__sub_83129788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14296, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831297A0"))) PPC_WEAK_FUNC(sub_831297A0);
PPC_FUNC_IMPL(__imp__sub_831297A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14316(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14316, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831297B8"))) PPC_WEAK_FUNC(sub_831297B8);
PPC_FUNC_IMPL(__imp__sub_831297B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14308, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831297D0"))) PPC_WEAK_FUNC(sub_831297D0);
PPC_FUNC_IMPL(__imp__sub_831297D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14324, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831297E8"))) PPC_WEAK_FUNC(sub_831297E8);
PPC_FUNC_IMPL(__imp__sub_831297E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14332(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14332, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129800"))) PPC_WEAK_FUNC(sub_83129800);
PPC_FUNC_IMPL(__imp__sub_83129800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14336(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14336, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129818"))) PPC_WEAK_FUNC(sub_83129818);
PPC_FUNC_IMPL(__imp__sub_83129818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14392, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129830"))) PPC_WEAK_FUNC(sub_83129830);
PPC_FUNC_IMPL(__imp__sub_83129830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14348, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129848"))) PPC_WEAK_FUNC(sub_83129848);
PPC_FUNC_IMPL(__imp__sub_83129848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14420(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14420, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129860"))) PPC_WEAK_FUNC(sub_83129860);
PPC_FUNC_IMPL(__imp__sub_83129860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14364(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14364, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129878"))) PPC_WEAK_FUNC(sub_83129878);
PPC_FUNC_IMPL(__imp__sub_83129878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14372(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14372, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129890"))) PPC_WEAK_FUNC(sub_83129890);
PPC_FUNC_IMPL(__imp__sub_83129890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14384(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14384, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831298A8"))) PPC_WEAK_FUNC(sub_831298A8);
PPC_FUNC_IMPL(__imp__sub_831298A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14368(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14368, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831298C0"))) PPC_WEAK_FUNC(sub_831298C0);
PPC_FUNC_IMPL(__imp__sub_831298C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14344(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14344, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831298D8"))) PPC_WEAK_FUNC(sub_831298D8);
PPC_FUNC_IMPL(__imp__sub_831298D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14376(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14376, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831298F0"))) PPC_WEAK_FUNC(sub_831298F0);
PPC_FUNC_IMPL(__imp__sub_831298F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14416(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14416, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129908"))) PPC_WEAK_FUNC(sub_83129908);
PPC_FUNC_IMPL(__imp__sub_83129908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14428(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14428, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129920"))) PPC_WEAK_FUNC(sub_83129920);
PPC_FUNC_IMPL(__imp__sub_83129920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14436, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129938"))) PPC_WEAK_FUNC(sub_83129938);
PPC_FUNC_IMPL(__imp__sub_83129938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14444, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129950"))) PPC_WEAK_FUNC(sub_83129950);
PPC_FUNC_IMPL(__imp__sub_83129950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14448(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14448, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129968"))) PPC_WEAK_FUNC(sub_83129968);
PPC_FUNC_IMPL(__imp__sub_83129968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14456(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14456, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129980"))) PPC_WEAK_FUNC(sub_83129980);
PPC_FUNC_IMPL(__imp__sub_83129980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14476(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14476, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129998"))) PPC_WEAK_FUNC(sub_83129998);
PPC_FUNC_IMPL(__imp__sub_83129998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14468, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831299B0"))) PPC_WEAK_FUNC(sub_831299B0);
PPC_FUNC_IMPL(__imp__sub_831299B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,20656(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20656, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831299C8"))) PPC_WEAK_FUNC(sub_831299C8);
PPC_FUNC_IMPL(__imp__sub_831299C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14484(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14484, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831299E0"))) PPC_WEAK_FUNC(sub_831299E0);
PPC_FUNC_IMPL(__imp__sub_831299E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14488(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14488, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831299F8"))) PPC_WEAK_FUNC(sub_831299F8);
PPC_FUNC_IMPL(__imp__sub_831299F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,20628(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20628, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129A10"))) PPC_WEAK_FUNC(sub_83129A10);
PPC_FUNC_IMPL(__imp__sub_83129A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,20604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20604, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129A28"))) PPC_WEAK_FUNC(sub_83129A28);
PPC_FUNC_IMPL(__imp__sub_83129A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,20608(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20608, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129A40"))) PPC_WEAK_FUNC(sub_83129A40);
PPC_FUNC_IMPL(__imp__sub_83129A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,20580(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20580, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129A58"))) PPC_WEAK_FUNC(sub_83129A58);
PPC_FUNC_IMPL(__imp__sub_83129A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,20564(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20564, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129A70"))) PPC_WEAK_FUNC(sub_83129A70);
PPC_FUNC_IMPL(__imp__sub_83129A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,20548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20548, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129A88"))) PPC_WEAK_FUNC(sub_83129A88);
PPC_FUNC_IMPL(__imp__sub_83129A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,20532(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20532, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129AA0"))) PPC_WEAK_FUNC(sub_83129AA0);
PPC_FUNC_IMPL(__imp__sub_83129AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,20516(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20516, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129AB8"))) PPC_WEAK_FUNC(sub_83129AB8);
PPC_FUNC_IMPL(__imp__sub_83129AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,20500(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20500, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129AD0"))) PPC_WEAK_FUNC(sub_83129AD0);
PPC_FUNC_IMPL(__imp__sub_83129AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,20484(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20484, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129AE8"))) PPC_WEAK_FUNC(sub_83129AE8);
PPC_FUNC_IMPL(__imp__sub_83129AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,22156
	ctx.r11.s64 = ctx.r11.s64 + 22156;
	// stw r11,-17876(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17876, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129B00"))) PPC_WEAK_FUNC(sub_83129B00);
PPC_FUNC_IMPL(__imp__sub_83129B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14500(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14500, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129B18"))) PPC_WEAK_FUNC(sub_83129B18);
PPC_FUNC_IMPL(__imp__sub_83129B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14512(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14512, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129B30"))) PPC_WEAK_FUNC(sub_83129B30);
PPC_FUNC_IMPL(__imp__sub_83129B30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129B38"))) PPC_WEAK_FUNC(sub_83129B38);
PPC_FUNC_IMPL(__imp__sub_83129B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r3,r11,-15648
	ctx.r3.s64 = ctx.r11.s64 + -15648;
	// b 0x8239d768
	sub_8239D768(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83129B48"))) PPC_WEAK_FUNC(sub_83129B48);
PPC_FUNC_IMPL(__imp__sub_83129B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,20452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20452, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129B60"))) PPC_WEAK_FUNC(sub_83129B60);
PPC_FUNC_IMPL(__imp__sub_83129B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,20176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20176, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129B78"))) PPC_WEAK_FUNC(sub_83129B78);
PPC_FUNC_IMPL(__imp__sub_83129B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14524(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14524, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129B90"))) PPC_WEAK_FUNC(sub_83129B90);
PPC_FUNC_IMPL(__imp__sub_83129B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14888(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14888, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129BA8"))) PPC_WEAK_FUNC(sub_83129BA8);
PPC_FUNC_IMPL(__imp__sub_83129BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14880(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14880, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129BC0"))) PPC_WEAK_FUNC(sub_83129BC0);
PPC_FUNC_IMPL(__imp__sub_83129BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14872, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129BD8"))) PPC_WEAK_FUNC(sub_83129BD8);
PPC_FUNC_IMPL(__imp__sub_83129BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14864(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14864, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129BF0"))) PPC_WEAK_FUNC(sub_83129BF0);
PPC_FUNC_IMPL(__imp__sub_83129BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14856(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14856, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129C08"))) PPC_WEAK_FUNC(sub_83129C08);
PPC_FUNC_IMPL(__imp__sub_83129C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14848(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14848, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129C20"))) PPC_WEAK_FUNC(sub_83129C20);
PPC_FUNC_IMPL(__imp__sub_83129C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14840(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14840, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129C38"))) PPC_WEAK_FUNC(sub_83129C38);
PPC_FUNC_IMPL(__imp__sub_83129C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14832(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14832, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129C50"))) PPC_WEAK_FUNC(sub_83129C50);
PPC_FUNC_IMPL(__imp__sub_83129C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14824(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14824, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129C68"))) PPC_WEAK_FUNC(sub_83129C68);
PPC_FUNC_IMPL(__imp__sub_83129C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14816(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14816, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129C80"))) PPC_WEAK_FUNC(sub_83129C80);
PPC_FUNC_IMPL(__imp__sub_83129C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14808(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14808, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129C98"))) PPC_WEAK_FUNC(sub_83129C98);
PPC_FUNC_IMPL(__imp__sub_83129C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14800(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14800, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129CB0"))) PPC_WEAK_FUNC(sub_83129CB0);
PPC_FUNC_IMPL(__imp__sub_83129CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14792(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14792, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129CC8"))) PPC_WEAK_FUNC(sub_83129CC8);
PPC_FUNC_IMPL(__imp__sub_83129CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14784(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14784, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129CE0"))) PPC_WEAK_FUNC(sub_83129CE0);
PPC_FUNC_IMPL(__imp__sub_83129CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14776(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14776, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129CF8"))) PPC_WEAK_FUNC(sub_83129CF8);
PPC_FUNC_IMPL(__imp__sub_83129CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14768(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14768, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129D10"))) PPC_WEAK_FUNC(sub_83129D10);
PPC_FUNC_IMPL(__imp__sub_83129D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14760(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14760, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129D28"))) PPC_WEAK_FUNC(sub_83129D28);
PPC_FUNC_IMPL(__imp__sub_83129D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14752, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129D40"))) PPC_WEAK_FUNC(sub_83129D40);
PPC_FUNC_IMPL(__imp__sub_83129D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14744(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14744, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129D58"))) PPC_WEAK_FUNC(sub_83129D58);
PPC_FUNC_IMPL(__imp__sub_83129D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14736(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14736, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129D70"))) PPC_WEAK_FUNC(sub_83129D70);
PPC_FUNC_IMPL(__imp__sub_83129D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14728(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14728, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129D88"))) PPC_WEAK_FUNC(sub_83129D88);
PPC_FUNC_IMPL(__imp__sub_83129D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14720(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14720, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129DA0"))) PPC_WEAK_FUNC(sub_83129DA0);
PPC_FUNC_IMPL(__imp__sub_83129DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14712(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14712, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129DB8"))) PPC_WEAK_FUNC(sub_83129DB8);
PPC_FUNC_IMPL(__imp__sub_83129DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14704(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14704, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129DD0"))) PPC_WEAK_FUNC(sub_83129DD0);
PPC_FUNC_IMPL(__imp__sub_83129DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14696, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129DE8"))) PPC_WEAK_FUNC(sub_83129DE8);
PPC_FUNC_IMPL(__imp__sub_83129DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14688(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14688, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129E00"))) PPC_WEAK_FUNC(sub_83129E00);
PPC_FUNC_IMPL(__imp__sub_83129E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14680, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129E18"))) PPC_WEAK_FUNC(sub_83129E18);
PPC_FUNC_IMPL(__imp__sub_83129E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14672(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14672, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129E30"))) PPC_WEAK_FUNC(sub_83129E30);
PPC_FUNC_IMPL(__imp__sub_83129E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14656(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14656, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129E48"))) PPC_WEAK_FUNC(sub_83129E48);
PPC_FUNC_IMPL(__imp__sub_83129E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14648(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14648, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129E60"))) PPC_WEAK_FUNC(sub_83129E60);
PPC_FUNC_IMPL(__imp__sub_83129E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14664(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14664, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129E78"))) PPC_WEAK_FUNC(sub_83129E78);
PPC_FUNC_IMPL(__imp__sub_83129E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14904(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14904, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129E90"))) PPC_WEAK_FUNC(sub_83129E90);
PPC_FUNC_IMPL(__imp__sub_83129E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14952(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14952, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129EA8"))) PPC_WEAK_FUNC(sub_83129EA8);
PPC_FUNC_IMPL(__imp__sub_83129EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14944(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14944, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129EC0"))) PPC_WEAK_FUNC(sub_83129EC0);
PPC_FUNC_IMPL(__imp__sub_83129EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14936(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14936, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129ED8"))) PPC_WEAK_FUNC(sub_83129ED8);
PPC_FUNC_IMPL(__imp__sub_83129ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14928(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14928, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129EF0"))) PPC_WEAK_FUNC(sub_83129EF0);
PPC_FUNC_IMPL(__imp__sub_83129EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14920(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14920, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129F08"))) PPC_WEAK_FUNC(sub_83129F08);
PPC_FUNC_IMPL(__imp__sub_83129F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14912, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129F20"))) PPC_WEAK_FUNC(sub_83129F20);
PPC_FUNC_IMPL(__imp__sub_83129F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,20444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20444, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129F38"))) PPC_WEAK_FUNC(sub_83129F38);
PPC_FUNC_IMPL(__imp__sub_83129F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14572, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129F50"))) PPC_WEAK_FUNC(sub_83129F50);
PPC_FUNC_IMPL(__imp__sub_83129F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14636(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14636, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129F68"))) PPC_WEAK_FUNC(sub_83129F68);
PPC_FUNC_IMPL(__imp__sub_83129F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14548, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129F80"))) PPC_WEAK_FUNC(sub_83129F80);
PPC_FUNC_IMPL(__imp__sub_83129F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14620(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14620, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129F98"))) PPC_WEAK_FUNC(sub_83129F98);
PPC_FUNC_IMPL(__imp__sub_83129F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14956(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14956, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129FB0"))) PPC_WEAK_FUNC(sub_83129FB0);
PPC_FUNC_IMPL(__imp__sub_83129FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129FC8"))) PPC_WEAK_FUNC(sub_83129FC8);
PPC_FUNC_IMPL(__imp__sub_83129FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14628(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14628, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129FE0"))) PPC_WEAK_FUNC(sub_83129FE0);
PPC_FUNC_IMPL(__imp__sub_83129FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14580(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14580, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83129FF8"))) PPC_WEAK_FUNC(sub_83129FF8);
PPC_FUNC_IMPL(__imp__sub_83129FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14600(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14600, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A010"))) PPC_WEAK_FUNC(sub_8312A010);
PPC_FUNC_IMPL(__imp__sub_8312A010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14592, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A028"))) PPC_WEAK_FUNC(sub_8312A028);
PPC_FUNC_IMPL(__imp__sub_8312A028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14892(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14892, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A040"))) PPC_WEAK_FUNC(sub_8312A040);
PPC_FUNC_IMPL(__imp__sub_8312A040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14540(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14540, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A058"))) PPC_WEAK_FUNC(sub_8312A058);
PPC_FUNC_IMPL(__imp__sub_8312A058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14544, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A070"))) PPC_WEAK_FUNC(sub_8312A070);
PPC_FUNC_IMPL(__imp__sub_8312A070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14556(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14556, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A088"))) PPC_WEAK_FUNC(sub_8312A088);
PPC_FUNC_IMPL(__imp__sub_8312A088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,14528(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14528, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A0A0"))) PPC_WEAK_FUNC(sub_8312A0A0);
PPC_FUNC_IMPL(__imp__sub_8312A0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r31,r11,-15568
	ctx.r31.s64 = ctx.r11.s64 + -15568;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8312a0c8
	if (ctx.cr6.eq) goto loc_8312A0C8;
	// bl 0x82332db8
	ctx.lr = 0x8312A0C8;
	sub_82332DB8(ctx, base);
loc_8312A0C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82332ca8
	ctx.lr = 0x8312A0F0;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8312a100
	if (ctx.cr6.eq) goto loc_8312A100;
	// bl 0x82332db8
	ctx.lr = 0x8312A100;
	sub_82332DB8(ctx, base);
loc_8312A100:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A130"))) PPC_WEAK_FUNC(sub_8312A130);
PPC_FUNC_IMPL(__imp__sub_8312A130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,15040(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15040, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A148"))) PPC_WEAK_FUNC(sub_8312A148);
PPC_FUNC_IMPL(__imp__sub_8312A148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,15092(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15092, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A160"))) PPC_WEAK_FUNC(sub_8312A160);
PPC_FUNC_IMPL(__imp__sub_8312A160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,15084(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15084, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A178"))) PPC_WEAK_FUNC(sub_8312A178);
PPC_FUNC_IMPL(__imp__sub_8312A178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,15076(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15076, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A190"))) PPC_WEAK_FUNC(sub_8312A190);
PPC_FUNC_IMPL(__imp__sub_8312A190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,15068(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15068, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A1A8"))) PPC_WEAK_FUNC(sub_8312A1A8);
PPC_FUNC_IMPL(__imp__sub_8312A1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,15060(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15060, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A1C0"))) PPC_WEAK_FUNC(sub_8312A1C0);
PPC_FUNC_IMPL(__imp__sub_8312A1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,15052(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15052, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A1D8"))) PPC_WEAK_FUNC(sub_8312A1D8);
PPC_FUNC_IMPL(__imp__sub_8312A1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r31,r11,-15488
	ctx.r31.s64 = ctx.r11.s64 + -15488;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8312a200
	if (ctx.cr6.eq) goto loc_8312A200;
	// bl 0x82332db8
	ctx.lr = 0x8312A200;
	sub_82332DB8(ctx, base);
loc_8312A200:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82332ca8
	ctx.lr = 0x8312A228;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8312a238
	if (ctx.cr6.eq) goto loc_8312A238;
	// bl 0x82332db8
	ctx.lr = 0x8312A238;
	sub_82332DB8(ctx, base);
loc_8312A238:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A268"))) PPC_WEAK_FUNC(sub_8312A268);
PPC_FUNC_IMPL(__imp__sub_8312A268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r31,r11,-15456
	ctx.r31.s64 = ctx.r11.s64 + -15456;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8312a290
	if (ctx.cr6.eq) goto loc_8312A290;
	// bl 0x82332db8
	ctx.lr = 0x8312A290;
	sub_82332DB8(ctx, base);
loc_8312A290:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312A400"))) PPC_WEAK_FUNC(sub_8312A400);
PPC_FUNC_IMPL(__imp__sub_8312A400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,15140(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15140, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A418"))) PPC_WEAK_FUNC(sub_8312A418);
PPC_FUNC_IMPL(__imp__sub_8312A418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,15224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15224, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A430"))) PPC_WEAK_FUNC(sub_8312A430);
PPC_FUNC_IMPL(__imp__sub_8312A430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,15216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15216, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A448"))) PPC_WEAK_FUNC(sub_8312A448);
PPC_FUNC_IMPL(__imp__sub_8312A448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,15212(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15212, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A460"))) PPC_WEAK_FUNC(sub_8312A460);
PPC_FUNC_IMPL(__imp__sub_8312A460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,20420(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20420, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A478"))) PPC_WEAK_FUNC(sub_8312A478);
PPC_FUNC_IMPL(__imp__sub_8312A478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r11,r11,-29556
	ctx.r11.s64 = ctx.r11.s64 + -29556;
	// stw r11,-15412(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15412, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A490"))) PPC_WEAK_FUNC(sub_8312A490);
PPC_FUNC_IMPL(__imp__sub_8312A490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,15232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15232, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A4A8"))) PPC_WEAK_FUNC(sub_8312A4A8);
PPC_FUNC_IMPL(__imp__sub_8312A4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,16316(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16316, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A4C0"))) PPC_WEAK_FUNC(sub_8312A4C0);
PPC_FUNC_IMPL(__imp__sub_8312A4C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,15392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15392, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A4D8"))) PPC_WEAK_FUNC(sub_8312A4D8);
PPC_FUNC_IMPL(__imp__sub_8312A4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,16108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16108, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A4F0"))) PPC_WEAK_FUNC(sub_8312A4F0);
PPC_FUNC_IMPL(__imp__sub_8312A4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,15328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15328, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A508"))) PPC_WEAK_FUNC(sub_8312A508);
PPC_FUNC_IMPL(__imp__sub_8312A508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,15384(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15384, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A520"))) PPC_WEAK_FUNC(sub_8312A520);
PPC_FUNC_IMPL(__imp__sub_8312A520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,15320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15320, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A538"))) PPC_WEAK_FUNC(sub_8312A538);
PPC_FUNC_IMPL(__imp__sub_8312A538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,16100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16100, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A550"))) PPC_WEAK_FUNC(sub_8312A550);
PPC_FUNC_IMPL(__imp__sub_8312A550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,16436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16436, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A568"))) PPC_WEAK_FUNC(sub_8312A568);
PPC_FUNC_IMPL(__imp__sub_8312A568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,15376(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15376, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A580"))) PPC_WEAK_FUNC(sub_8312A580);
PPC_FUNC_IMPL(__imp__sub_8312A580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,16116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16116, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A598"))) PPC_WEAK_FUNC(sub_8312A598);
PPC_FUNC_IMPL(__imp__sub_8312A598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,15260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15260, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A5B0"))) PPC_WEAK_FUNC(sub_8312A5B0);
PPC_FUNC_IMPL(__imp__sub_8312A5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,15252(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15252, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A5C8"))) PPC_WEAK_FUNC(sub_8312A5C8);
PPC_FUNC_IMPL(__imp__sub_8312A5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,15240(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15240, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A5E0"))) PPC_WEAK_FUNC(sub_8312A5E0);
PPC_FUNC_IMPL(__imp__sub_8312A5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,15264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15264, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A5F8"))) PPC_WEAK_FUNC(sub_8312A5F8);
PPC_FUNC_IMPL(__imp__sub_8312A5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,15272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15272, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A610"))) PPC_WEAK_FUNC(sub_8312A610);
PPC_FUNC_IMPL(__imp__sub_8312A610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,15280(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15280, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A628"))) PPC_WEAK_FUNC(sub_8312A628);
PPC_FUNC_IMPL(__imp__sub_8312A628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,15288(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15288, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A640"))) PPC_WEAK_FUNC(sub_8312A640);
PPC_FUNC_IMPL(__imp__sub_8312A640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,15296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15296, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A658"))) PPC_WEAK_FUNC(sub_8312A658);
PPC_FUNC_IMPL(__imp__sub_8312A658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,17272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17272, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A670"))) PPC_WEAK_FUNC(sub_8312A670);
PPC_FUNC_IMPL(__imp__sub_8312A670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,17264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17264, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A688"))) PPC_WEAK_FUNC(sub_8312A688);
PPC_FUNC_IMPL(__imp__sub_8312A688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,17256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17256, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A6A0"))) PPC_WEAK_FUNC(sub_8312A6A0);
PPC_FUNC_IMPL(__imp__sub_8312A6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,17248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17248, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A6B8"))) PPC_WEAK_FUNC(sub_8312A6B8);
PPC_FUNC_IMPL(__imp__sub_8312A6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,17240(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17240, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A6D0"))) PPC_WEAK_FUNC(sub_8312A6D0);
PPC_FUNC_IMPL(__imp__sub_8312A6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,15360(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15360, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A6E8"))) PPC_WEAK_FUNC(sub_8312A6E8);
PPC_FUNC_IMPL(__imp__sub_8312A6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,15368(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15368, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A700"))) PPC_WEAK_FUNC(sub_8312A700);
PPC_FUNC_IMPL(__imp__sub_8312A700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,16564(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16564, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A718"))) PPC_WEAK_FUNC(sub_8312A718);
PPC_FUNC_IMPL(__imp__sub_8312A718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,16572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16572, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A730"))) PPC_WEAK_FUNC(sub_8312A730);
PPC_FUNC_IMPL(__imp__sub_8312A730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,16556(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16556, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A748"))) PPC_WEAK_FUNC(sub_8312A748);
PPC_FUNC_IMPL(__imp__sub_8312A748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,16548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16548, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A760"))) PPC_WEAK_FUNC(sub_8312A760);
PPC_FUNC_IMPL(__imp__sub_8312A760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,17232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17232, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A778"))) PPC_WEAK_FUNC(sub_8312A778);
PPC_FUNC_IMPL(__imp__sub_8312A778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,17224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17224, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A790"))) PPC_WEAK_FUNC(sub_8312A790);
PPC_FUNC_IMPL(__imp__sub_8312A790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,17216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17216, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A7A8"))) PPC_WEAK_FUNC(sub_8312A7A8);
PPC_FUNC_IMPL(__imp__sub_8312A7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,17208(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17208, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A7C0"))) PPC_WEAK_FUNC(sub_8312A7C0);
PPC_FUNC_IMPL(__imp__sub_8312A7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,17200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17200, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A7D8"))) PPC_WEAK_FUNC(sub_8312A7D8);
PPC_FUNC_IMPL(__imp__sub_8312A7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,17192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17192, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A7F0"))) PPC_WEAK_FUNC(sub_8312A7F0);
PPC_FUNC_IMPL(__imp__sub_8312A7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,17184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17184, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A808"))) PPC_WEAK_FUNC(sub_8312A808);
PPC_FUNC_IMPL(__imp__sub_8312A808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,17360(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17360, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A820"))) PPC_WEAK_FUNC(sub_8312A820);
PPC_FUNC_IMPL(__imp__sub_8312A820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,17352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17352, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A838"))) PPC_WEAK_FUNC(sub_8312A838);
PPC_FUNC_IMPL(__imp__sub_8312A838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,17344(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17344, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A850"))) PPC_WEAK_FUNC(sub_8312A850);
PPC_FUNC_IMPL(__imp__sub_8312A850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,17336(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17336, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A868"))) PPC_WEAK_FUNC(sub_8312A868);
PPC_FUNC_IMPL(__imp__sub_8312A868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,17328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17328, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A880"))) PPC_WEAK_FUNC(sub_8312A880);
PPC_FUNC_IMPL(__imp__sub_8312A880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,17320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17320, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A898"))) PPC_WEAK_FUNC(sub_8312A898);
PPC_FUNC_IMPL(__imp__sub_8312A898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,17176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17176, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A8B0"))) PPC_WEAK_FUNC(sub_8312A8B0);
PPC_FUNC_IMPL(__imp__sub_8312A8B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,17168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17168, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A8C8"))) PPC_WEAK_FUNC(sub_8312A8C8);
PPC_FUNC_IMPL(__imp__sub_8312A8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,17160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17160, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A8E0"))) PPC_WEAK_FUNC(sub_8312A8E0);
PPC_FUNC_IMPL(__imp__sub_8312A8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,17152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17152, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A8F8"))) PPC_WEAK_FUNC(sub_8312A8F8);
PPC_FUNC_IMPL(__imp__sub_8312A8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,17144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17144, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A910"))) PPC_WEAK_FUNC(sub_8312A910);
PPC_FUNC_IMPL(__imp__sub_8312A910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,17136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17136, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A928"))) PPC_WEAK_FUNC(sub_8312A928);
PPC_FUNC_IMPL(__imp__sub_8312A928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,17128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A940"))) PPC_WEAK_FUNC(sub_8312A940);
PPC_FUNC_IMPL(__imp__sub_8312A940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,17120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17120, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A958"))) PPC_WEAK_FUNC(sub_8312A958);
PPC_FUNC_IMPL(__imp__sub_8312A958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,17112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17112, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312A970"))) PPC_WEAK_FUNC(sub_8312A970);
PPC_FUNC_IMPL(__imp__sub_8312A970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,17104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17104, ctx.r11.u32);
	// blr 
	return;
}

