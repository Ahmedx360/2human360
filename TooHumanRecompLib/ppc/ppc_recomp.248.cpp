#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F4F870"))) PPC_WEAK_FUNC(sub_82F4F870);
PPC_FUNC_IMPL(__imp__sub_82F4F870) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1624
	ctx.r4.s64 = ctx.r11.s64 + -1624;
	// bl 0x8277b880
	ctx.lr = 0x82F4F88C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16728(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16728, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4F8A8"))) PPC_WEAK_FUNC(sub_82F4F8A8);
PPC_FUNC_IMPL(__imp__sub_82F4F8A8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1612
	ctx.r4.s64 = ctx.r11.s64 + -1612;
	// bl 0x8277b880
	ctx.lr = 0x82F4F8C4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16040(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16040, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4F8E0"))) PPC_WEAK_FUNC(sub_82F4F8E0);
PPC_FUNC_IMPL(__imp__sub_82F4F8E0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1592
	ctx.r4.s64 = ctx.r11.s64 + -1592;
	// bl 0x8277b880
	ctx.lr = 0x82F4F8FC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,15908(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15908, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4F918"))) PPC_WEAK_FUNC(sub_82F4F918);
PPC_FUNC_IMPL(__imp__sub_82F4F918) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1576
	ctx.r4.s64 = ctx.r11.s64 + -1576;
	// bl 0x8277b880
	ctx.lr = 0x82F4F934;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17092(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17092, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4F950"))) PPC_WEAK_FUNC(sub_82F4F950);
PPC_FUNC_IMPL(__imp__sub_82F4F950) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1568
	ctx.r4.s64 = ctx.r11.s64 + -1568;
	// bl 0x8277b880
	ctx.lr = 0x82F4F96C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,15916(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15916, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4F988"))) PPC_WEAK_FUNC(sub_82F4F988);
PPC_FUNC_IMPL(__imp__sub_82F4F988) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1560
	ctx.r4.s64 = ctx.r11.s64 + -1560;
	// bl 0x8277b880
	ctx.lr = 0x82F4F9A4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16444, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4F9C0"))) PPC_WEAK_FUNC(sub_82F4F9C0);
PPC_FUNC_IMPL(__imp__sub_82F4F9C0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1548
	ctx.r4.s64 = ctx.r11.s64 + -1548;
	// bl 0x8277b880
	ctx.lr = 0x82F4F9DC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17096(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17096, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4F9F8"))) PPC_WEAK_FUNC(sub_82F4F9F8);
PPC_FUNC_IMPL(__imp__sub_82F4F9F8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1536
	ctx.r4.s64 = ctx.r11.s64 + -1536;
	// bl 0x8277b880
	ctx.lr = 0x82F4FA14;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16760(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16760, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4FA30"))) PPC_WEAK_FUNC(sub_82F4FA30);
PPC_FUNC_IMPL(__imp__sub_82F4FA30) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1520
	ctx.r4.s64 = ctx.r11.s64 + -1520;
	// bl 0x8277b880
	ctx.lr = 0x82F4FA4C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16724(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16724, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4FA68"))) PPC_WEAK_FUNC(sub_82F4FA68);
PPC_FUNC_IMPL(__imp__sub_82F4FA68) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1504
	ctx.r4.s64 = ctx.r11.s64 + -1504;
	// bl 0x8277b880
	ctx.lr = 0x82F4FA84;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,15968(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15968, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4FAA0"))) PPC_WEAK_FUNC(sub_82F4FAA0);
PPC_FUNC_IMPL(__imp__sub_82F4FAA0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1492
	ctx.r4.s64 = ctx.r11.s64 + -1492;
	// bl 0x8277b880
	ctx.lr = 0x82F4FABC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16564(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16564, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4FAD8"))) PPC_WEAK_FUNC(sub_82F4FAD8);
PPC_FUNC_IMPL(__imp__sub_82F4FAD8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1480
	ctx.r4.s64 = ctx.r11.s64 + -1480;
	// bl 0x8277b880
	ctx.lr = 0x82F4FAF4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16348, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4FB10"))) PPC_WEAK_FUNC(sub_82F4FB10);
PPC_FUNC_IMPL(__imp__sub_82F4FB10) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1468
	ctx.r4.s64 = ctx.r11.s64 + -1468;
	// bl 0x8277b880
	ctx.lr = 0x82F4FB2C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16692(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16692, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4FB48"))) PPC_WEAK_FUNC(sub_82F4FB48);
PPC_FUNC_IMPL(__imp__sub_82F4FB48) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1460
	ctx.r4.s64 = ctx.r11.s64 + -1460;
	// bl 0x8277b880
	ctx.lr = 0x82F4FB64;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16232, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4FB80"))) PPC_WEAK_FUNC(sub_82F4FB80);
PPC_FUNC_IMPL(__imp__sub_82F4FB80) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1592
	ctx.r4.s64 = ctx.r11.s64 + -1592;
	// bl 0x8277b880
	ctx.lr = 0x82F4FB9C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16000(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16000, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4FBB8"))) PPC_WEAK_FUNC(sub_82F4FBB8);
PPC_FUNC_IMPL(__imp__sub_82F4FBB8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1444
	ctx.r4.s64 = ctx.r11.s64 + -1444;
	// bl 0x8277b880
	ctx.lr = 0x82F4FBD4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17048(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17048, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4FBF0"))) PPC_WEAK_FUNC(sub_82F4FBF0);
PPC_FUNC_IMPL(__imp__sub_82F4FBF0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1436
	ctx.r4.s64 = ctx.r11.s64 + -1436;
	// bl 0x8277b880
	ctx.lr = 0x82F4FC0C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16784(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16784, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4FC28"))) PPC_WEAK_FUNC(sub_82F4FC28);
PPC_FUNC_IMPL(__imp__sub_82F4FC28) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1468
	ctx.r4.s64 = ctx.r11.s64 + -1468;
	// bl 0x8277b880
	ctx.lr = 0x82F4FC44;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16340(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16340, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4FC60"))) PPC_WEAK_FUNC(sub_82F4FC60);
PPC_FUNC_IMPL(__imp__sub_82F4FC60) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1444
	ctx.r4.s64 = ctx.r11.s64 + -1444;
	// bl 0x8277b880
	ctx.lr = 0x82F4FC7C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16920(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16920, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4FC98"))) PPC_WEAK_FUNC(sub_82F4FC98);
PPC_FUNC_IMPL(__imp__sub_82F4FC98) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1436
	ctx.r4.s64 = ctx.r11.s64 + -1436;
	// bl 0x8277b880
	ctx.lr = 0x82F4FCB4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16888(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16888, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4FCD0"))) PPC_WEAK_FUNC(sub_82F4FCD0);
PPC_FUNC_IMPL(__imp__sub_82F4FCD0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1428
	ctx.r4.s64 = ctx.r11.s64 + -1428;
	// bl 0x8277b880
	ctx.lr = 0x82F4FCEC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17004(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17004, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4FD08"))) PPC_WEAK_FUNC(sub_82F4FD08);
PPC_FUNC_IMPL(__imp__sub_82F4FD08) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1416
	ctx.r4.s64 = ctx.r11.s64 + -1416;
	// bl 0x8277b880
	ctx.lr = 0x82F4FD24;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16952(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16952, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4FD40"))) PPC_WEAK_FUNC(sub_82F4FD40);
PPC_FUNC_IMPL(__imp__sub_82F4FD40) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1404
	ctx.r4.s64 = ctx.r11.s64 + -1404;
	// bl 0x8277b880
	ctx.lr = 0x82F4FD5C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16508, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4FD78"))) PPC_WEAK_FUNC(sub_82F4FD78);
PPC_FUNC_IMPL(__imp__sub_82F4FD78) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1392
	ctx.r4.s64 = ctx.r11.s64 + -1392;
	// bl 0x8277b880
	ctx.lr = 0x82F4FD94;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16520(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16520, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4FDB0"))) PPC_WEAK_FUNC(sub_82F4FDB0);
PPC_FUNC_IMPL(__imp__sub_82F4FDB0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1384
	ctx.r4.s64 = ctx.r11.s64 + -1384;
	// bl 0x8277b880
	ctx.lr = 0x82F4FDCC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16100, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4FDE8"))) PPC_WEAK_FUNC(sub_82F4FDE8);
PPC_FUNC_IMPL(__imp__sub_82F4FDE8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1372
	ctx.r4.s64 = ctx.r11.s64 + -1372;
	// bl 0x8277b880
	ctx.lr = 0x82F4FE04;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16308, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4FE20"))) PPC_WEAK_FUNC(sub_82F4FE20);
PPC_FUNC_IMPL(__imp__sub_82F4FE20) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1364
	ctx.r4.s64 = ctx.r11.s64 + -1364;
	// bl 0x8277b880
	ctx.lr = 0x82F4FE3C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,15912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15912, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4FE58"))) PPC_WEAK_FUNC(sub_82F4FE58);
PPC_FUNC_IMPL(__imp__sub_82F4FE58) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1356
	ctx.r4.s64 = ctx.r11.s64 + -1356;
	// bl 0x8277b880
	ctx.lr = 0x82F4FE74;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16584(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16584, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4FE90"))) PPC_WEAK_FUNC(sub_82F4FE90);
PPC_FUNC_IMPL(__imp__sub_82F4FE90) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1344
	ctx.r4.s64 = ctx.r11.s64 + -1344;
	// bl 0x8277b880
	ctx.lr = 0x82F4FEAC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16332(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16332, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4FEC8"))) PPC_WEAK_FUNC(sub_82F4FEC8);
PPC_FUNC_IMPL(__imp__sub_82F4FEC8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1332
	ctx.r4.s64 = ctx.r11.s64 + -1332;
	// bl 0x8277b880
	ctx.lr = 0x82F4FEE4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16044(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16044, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4FF00"))) PPC_WEAK_FUNC(sub_82F4FF00);
PPC_FUNC_IMPL(__imp__sub_82F4FF00) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1320
	ctx.r4.s64 = ctx.r11.s64 + -1320;
	// bl 0x8277b880
	ctx.lr = 0x82F4FF1C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16968(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16968, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4FF38"))) PPC_WEAK_FUNC(sub_82F4FF38);
PPC_FUNC_IMPL(__imp__sub_82F4FF38) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1308
	ctx.r4.s64 = ctx.r11.s64 + -1308;
	// bl 0x8277b880
	ctx.lr = 0x82F4FF54;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16828(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16828, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4FF70"))) PPC_WEAK_FUNC(sub_82F4FF70);
PPC_FUNC_IMPL(__imp__sub_82F4FF70) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1288
	ctx.r4.s64 = ctx.r11.s64 + -1288;
	// bl 0x8277b880
	ctx.lr = 0x82F4FF8C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16312(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16312, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4FFA8"))) PPC_WEAK_FUNC(sub_82F4FFA8);
PPC_FUNC_IMPL(__imp__sub_82F4FFA8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1276
	ctx.r4.s64 = ctx.r11.s64 + -1276;
	// bl 0x8277b880
	ctx.lr = 0x82F4FFC4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16212(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16212, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4FFE0"))) PPC_WEAK_FUNC(sub_82F4FFE0);
PPC_FUNC_IMPL(__imp__sub_82F4FFE0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1260
	ctx.r4.s64 = ctx.r11.s64 + -1260;
	// bl 0x8277b880
	ctx.lr = 0x82F4FFFC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17072(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17072, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50018"))) PPC_WEAK_FUNC(sub_82F50018);
PPC_FUNC_IMPL(__imp__sub_82F50018) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1248
	ctx.r4.s64 = ctx.r11.s64 + -1248;
	// bl 0x8277b880
	ctx.lr = 0x82F50034;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16636(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16636, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50050"))) PPC_WEAK_FUNC(sub_82F50050);
PPC_FUNC_IMPL(__imp__sub_82F50050) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1236
	ctx.r4.s64 = ctx.r11.s64 + -1236;
	// bl 0x8277b880
	ctx.lr = 0x82F5006C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16732(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16732, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50088"))) PPC_WEAK_FUNC(sub_82F50088);
PPC_FUNC_IMPL(__imp__sub_82F50088) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1224
	ctx.r4.s64 = ctx.r11.s64 + -1224;
	// bl 0x8277b880
	ctx.lr = 0x82F500A4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17100, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F500C0"))) PPC_WEAK_FUNC(sub_82F500C0);
PPC_FUNC_IMPL(__imp__sub_82F500C0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1212
	ctx.r4.s64 = ctx.r11.s64 + -1212;
	// bl 0x8277b880
	ctx.lr = 0x82F500DC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17064(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17064, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F500F8"))) PPC_WEAK_FUNC(sub_82F500F8);
PPC_FUNC_IMPL(__imp__sub_82F500F8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1200
	ctx.r4.s64 = ctx.r11.s64 + -1200;
	// bl 0x8277b880
	ctx.lr = 0x82F50114;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16652(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16652, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50130"))) PPC_WEAK_FUNC(sub_82F50130);
PPC_FUNC_IMPL(__imp__sub_82F50130) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1180
	ctx.r4.s64 = ctx.r11.s64 + -1180;
	// bl 0x8277b880
	ctx.lr = 0x82F5014C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16272, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50168"))) PPC_WEAK_FUNC(sub_82F50168);
PPC_FUNC_IMPL(__imp__sub_82F50168) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1168
	ctx.r4.s64 = ctx.r11.s64 + -1168;
	// bl 0x8277b880
	ctx.lr = 0x82F50184;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16216, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F501A0"))) PPC_WEAK_FUNC(sub_82F501A0);
PPC_FUNC_IMPL(__imp__sub_82F501A0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1156
	ctx.r4.s64 = ctx.r11.s64 + -1156;
	// bl 0x8277b880
	ctx.lr = 0x82F501BC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17052(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17052, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F501D8"))) PPC_WEAK_FUNC(sub_82F501D8);
PPC_FUNC_IMPL(__imp__sub_82F501D8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1148
	ctx.r4.s64 = ctx.r11.s64 + -1148;
	// bl 0x8277b880
	ctx.lr = 0x82F501F4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16436, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50210"))) PPC_WEAK_FUNC(sub_82F50210);
PPC_FUNC_IMPL(__imp__sub_82F50210) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1140
	ctx.r4.s64 = ctx.r11.s64 + -1140;
	// bl 0x8277b880
	ctx.lr = 0x82F5022C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16220, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50248"))) PPC_WEAK_FUNC(sub_82F50248);
PPC_FUNC_IMPL(__imp__sub_82F50248) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1132
	ctx.r4.s64 = ctx.r11.s64 + -1132;
	// bl 0x8277b880
	ctx.lr = 0x82F50264;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16188(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16188, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50280"))) PPC_WEAK_FUNC(sub_82F50280);
PPC_FUNC_IMPL(__imp__sub_82F50280) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1120
	ctx.r4.s64 = ctx.r11.s64 + -1120;
	// bl 0x8277b880
	ctx.lr = 0x82F5029C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16004(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16004, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F502B8"))) PPC_WEAK_FUNC(sub_82F502B8);
PPC_FUNC_IMPL(__imp__sub_82F502B8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1112
	ctx.r4.s64 = ctx.r11.s64 + -1112;
	// bl 0x8277b880
	ctx.lr = 0x82F502D4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16640(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16640, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F502F0"))) PPC_WEAK_FUNC(sub_82F502F0);
PPC_FUNC_IMPL(__imp__sub_82F502F0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1100
	ctx.r4.s64 = ctx.r11.s64 + -1100;
	// bl 0x8277b880
	ctx.lr = 0x82F5030C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16224, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50328"))) PPC_WEAK_FUNC(sub_82F50328);
PPC_FUNC_IMPL(__imp__sub_82F50328) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1088
	ctx.r4.s64 = ctx.r11.s64 + -1088;
	// bl 0x8277b880
	ctx.lr = 0x82F50344;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16908(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16908, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50360"))) PPC_WEAK_FUNC(sub_82F50360);
PPC_FUNC_IMPL(__imp__sub_82F50360) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1076
	ctx.r4.s64 = ctx.r11.s64 + -1076;
	// bl 0x8277b880
	ctx.lr = 0x82F5037C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17040(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17040, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50398"))) PPC_WEAK_FUNC(sub_82F50398);
PPC_FUNC_IMPL(__imp__sub_82F50398) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1064
	ctx.r4.s64 = ctx.r11.s64 + -1064;
	// bl 0x8277b880
	ctx.lr = 0x82F503B4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16616(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16616, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F503D0"))) PPC_WEAK_FUNC(sub_82F503D0);
PPC_FUNC_IMPL(__imp__sub_82F503D0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1048
	ctx.r4.s64 = ctx.r11.s64 + -1048;
	// bl 0x8277b880
	ctx.lr = 0x82F503EC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,15936(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15936, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50408"))) PPC_WEAK_FUNC(sub_82F50408);
PPC_FUNC_IMPL(__imp__sub_82F50408) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1032
	ctx.r4.s64 = ctx.r11.s64 + -1032;
	// bl 0x8277b880
	ctx.lr = 0x82F50424;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16996, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50440"))) PPC_WEAK_FUNC(sub_82F50440);
PPC_FUNC_IMPL(__imp__sub_82F50440) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1020
	ctx.r4.s64 = ctx.r11.s64 + -1020;
	// bl 0x8277b880
	ctx.lr = 0x82F5045C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16056(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16056, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50478"))) PPC_WEAK_FUNC(sub_82F50478);
PPC_FUNC_IMPL(__imp__sub_82F50478) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1004
	ctx.r4.s64 = ctx.r11.s64 + -1004;
	// bl 0x8277b880
	ctx.lr = 0x82F50494;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,15920(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15920, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F504B0"))) PPC_WEAK_FUNC(sub_82F504B0);
PPC_FUNC_IMPL(__imp__sub_82F504B0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-992
	ctx.r4.s64 = ctx.r11.s64 + -992;
	// bl 0x8277b880
	ctx.lr = 0x82F504CC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16008, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F504E8"))) PPC_WEAK_FUNC(sub_82F504E8);
PPC_FUNC_IMPL(__imp__sub_82F504E8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-980
	ctx.r4.s64 = ctx.r11.s64 + -980;
	// bl 0x8277b880
	ctx.lr = 0x82F50504;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16360(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16360, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50520"))) PPC_WEAK_FUNC(sub_82F50520);
PPC_FUNC_IMPL(__imp__sub_82F50520) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-968
	ctx.r4.s64 = ctx.r11.s64 + -968;
	// bl 0x8277b880
	ctx.lr = 0x82F5053C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16592, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50558"))) PPC_WEAK_FUNC(sub_82F50558);
PPC_FUNC_IMPL(__imp__sub_82F50558) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-956
	ctx.r4.s64 = ctx.r11.s64 + -956;
	// bl 0x8277b880
	ctx.lr = 0x82F50574;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16144, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50590"))) PPC_WEAK_FUNC(sub_82F50590);
PPC_FUNC_IMPL(__imp__sub_82F50590) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-948
	ctx.r4.s64 = ctx.r11.s64 + -948;
	// bl 0x8277b880
	ctx.lr = 0x82F505AC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16976(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16976, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F505C8"))) PPC_WEAK_FUNC(sub_82F505C8);
PPC_FUNC_IMPL(__imp__sub_82F505C8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-2488
	ctx.r4.s64 = ctx.r11.s64 + -2488;
	// bl 0x8277b880
	ctx.lr = 0x82F505E4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16172, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50600"))) PPC_WEAK_FUNC(sub_82F50600);
PPC_FUNC_IMPL(__imp__sub_82F50600) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-940
	ctx.r4.s64 = ctx.r11.s64 + -940;
	// bl 0x8277b880
	ctx.lr = 0x82F5061C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17080(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17080, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50638"))) PPC_WEAK_FUNC(sub_82F50638);
PPC_FUNC_IMPL(__imp__sub_82F50638) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-928
	ctx.r4.s64 = ctx.r11.s64 + -928;
	// bl 0x8277b880
	ctx.lr = 0x82F50654;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16752, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50670"))) PPC_WEAK_FUNC(sub_82F50670);
PPC_FUNC_IMPL(__imp__sub_82F50670) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-916
	ctx.r4.s64 = ctx.r11.s64 + -916;
	// bl 0x8277b880
	ctx.lr = 0x82F5068C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16988(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16988, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F506A8"))) PPC_WEAK_FUNC(sub_82F506A8);
PPC_FUNC_IMPL(__imp__sub_82F506A8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-2488
	ctx.r4.s64 = ctx.r11.s64 + -2488;
	// bl 0x8277b880
	ctx.lr = 0x82F506C4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16804(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16804, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F506E0"))) PPC_WEAK_FUNC(sub_82F506E0);
PPC_FUNC_IMPL(__imp__sub_82F506E0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-940
	ctx.r4.s64 = ctx.r11.s64 + -940;
	// bl 0x8277b880
	ctx.lr = 0x82F506FC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16228, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50718"))) PPC_WEAK_FUNC(sub_82F50718);
PPC_FUNC_IMPL(__imp__sub_82F50718) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-928
	ctx.r4.s64 = ctx.r11.s64 + -928;
	// bl 0x8277b880
	ctx.lr = 0x82F50734;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16184, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50750"))) PPC_WEAK_FUNC(sub_82F50750);
PPC_FUNC_IMPL(__imp__sub_82F50750) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-916
	ctx.r4.s64 = ctx.r11.s64 + -916;
	// bl 0x8277b880
	ctx.lr = 0x82F5076C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16840(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16840, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50788"))) PPC_WEAK_FUNC(sub_82F50788);
PPC_FUNC_IMPL(__imp__sub_82F50788) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-904
	ctx.r4.s64 = ctx.r11.s64 + -904;
	// bl 0x8277b880
	ctx.lr = 0x82F507A4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16268, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F507C0"))) PPC_WEAK_FUNC(sub_82F507C0);
PPC_FUNC_IMPL(__imp__sub_82F507C0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-888
	ctx.r4.s64 = ctx.r11.s64 + -888;
	// bl 0x8277b880
	ctx.lr = 0x82F507DC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16088(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16088, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F507F8"))) PPC_WEAK_FUNC(sub_82F507F8);
PPC_FUNC_IMPL(__imp__sub_82F507F8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-880
	ctx.r4.s64 = ctx.r11.s64 + -880;
	// bl 0x8277b880
	ctx.lr = 0x82F50814;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16260, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50830"))) PPC_WEAK_FUNC(sub_82F50830);
PPC_FUNC_IMPL(__imp__sub_82F50830) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-2488
	ctx.r4.s64 = ctx.r11.s64 + -2488;
	// bl 0x8277b880
	ctx.lr = 0x82F5084C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16364(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16364, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50868"))) PPC_WEAK_FUNC(sub_82F50868);
PPC_FUNC_IMPL(__imp__sub_82F50868) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-868
	ctx.r4.s64 = ctx.r11.s64 + -868;
	// bl 0x8277b880
	ctx.lr = 0x82F50884;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17024(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17024, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F508A0"))) PPC_WEAK_FUNC(sub_82F508A0);
PPC_FUNC_IMPL(__imp__sub_82F508A0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-856
	ctx.r4.s64 = ctx.r11.s64 + -856;
	// bl 0x8277b880
	ctx.lr = 0x82F508BC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16756(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16756, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F508D8"))) PPC_WEAK_FUNC(sub_82F508D8);
PPC_FUNC_IMPL(__imp__sub_82F508D8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-840
	ctx.r4.s64 = ctx.r11.s64 + -840;
	// bl 0x8277b880
	ctx.lr = 0x82F508F4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16936(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16936, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50910"))) PPC_WEAK_FUNC(sub_82F50910);
PPC_FUNC_IMPL(__imp__sub_82F50910) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-2152
	ctx.r4.s64 = ctx.r11.s64 + -2152;
	// bl 0x8277b880
	ctx.lr = 0x82F5092C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17112, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50948"))) PPC_WEAK_FUNC(sub_82F50948);
PPC_FUNC_IMPL(__imp__sub_82F50948) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-828
	ctx.r4.s64 = ctx.r11.s64 + -828;
	// bl 0x8277b880
	ctx.lr = 0x82F50964;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16120, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50980"))) PPC_WEAK_FUNC(sub_82F50980);
PPC_FUNC_IMPL(__imp__sub_82F50980) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-816
	ctx.r4.s64 = ctx.r11.s64 + -816;
	// bl 0x8277b880
	ctx.lr = 0x82F5099C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,15904(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15904, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F509B8"))) PPC_WEAK_FUNC(sub_82F509B8);
PPC_FUNC_IMPL(__imp__sub_82F509B8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-808
	ctx.r4.s64 = ctx.r11.s64 + -808;
	// bl 0x8277b880
	ctx.lr = 0x82F509D4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16064(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16064, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F509F0"))) PPC_WEAK_FUNC(sub_82F509F0);
PPC_FUNC_IMPL(__imp__sub_82F509F0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-800
	ctx.r4.s64 = ctx.r11.s64 + -800;
	// bl 0x8277b880
	ctx.lr = 0x82F50A0C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,15948(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15948, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50A28"))) PPC_WEAK_FUNC(sub_82F50A28);
PPC_FUNC_IMPL(__imp__sub_82F50A28) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-792
	ctx.r4.s64 = ctx.r11.s64 + -792;
	// bl 0x8277b880
	ctx.lr = 0x82F50A44;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17044(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17044, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50A60"))) PPC_WEAK_FUNC(sub_82F50A60);
PPC_FUNC_IMPL(__imp__sub_82F50A60) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-772
	ctx.r4.s64 = ctx.r11.s64 + -772;
	// bl 0x8277b880
	ctx.lr = 0x82F50A7C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17000(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17000, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50A98"))) PPC_WEAK_FUNC(sub_82F50A98);
PPC_FUNC_IMPL(__imp__sub_82F50A98) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-760
	ctx.r4.s64 = ctx.r11.s64 + -760;
	// bl 0x8277b880
	ctx.lr = 0x82F50AB4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16524(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16524, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50AD0"))) PPC_WEAK_FUNC(sub_82F50AD0);
PPC_FUNC_IMPL(__imp__sub_82F50AD0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-748
	ctx.r4.s64 = ctx.r11.s64 + -748;
	// bl 0x8277b880
	ctx.lr = 0x82F50AEC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16788(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16788, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50B08"))) PPC_WEAK_FUNC(sub_82F50B08);
PPC_FUNC_IMPL(__imp__sub_82F50B08) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-736
	ctx.r4.s64 = ctx.r11.s64 + -736;
	// bl 0x8277b880
	ctx.lr = 0x82F50B24;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,15940(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15940, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50B40"))) PPC_WEAK_FUNC(sub_82F50B40);
PPC_FUNC_IMPL(__imp__sub_82F50B40) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-712
	ctx.r4.s64 = ctx.r11.s64 + -712;
	// bl 0x8277b880
	ctx.lr = 0x82F50B5C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16036(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16036, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50B78"))) PPC_WEAK_FUNC(sub_82F50B78);
PPC_FUNC_IMPL(__imp__sub_82F50B78) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-680
	ctx.r4.s64 = ctx.r11.s64 + -680;
	// bl 0x8277b880
	ctx.lr = 0x82F50B94;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16456(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16456, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50BB0"))) PPC_WEAK_FUNC(sub_82F50BB0);
PPC_FUNC_IMPL(__imp__sub_82F50BB0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-664
	ctx.r4.s64 = ctx.r11.s64 + -664;
	// bl 0x8277b880
	ctx.lr = 0x82F50BCC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16164, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50BE8"))) PPC_WEAK_FUNC(sub_82F50BE8);
PPC_FUNC_IMPL(__imp__sub_82F50BE8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-644
	ctx.r4.s64 = ctx.r11.s64 + -644;
	// bl 0x8277b880
	ctx.lr = 0x82F50C04;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16324, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50C20"))) PPC_WEAK_FUNC(sub_82F50C20);
PPC_FUNC_IMPL(__imp__sub_82F50C20) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-628
	ctx.r4.s64 = ctx.r11.s64 + -628;
	// bl 0x8277b880
	ctx.lr = 0x82F50C3C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16460(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16460, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50C58"))) PPC_WEAK_FUNC(sub_82F50C58);
PPC_FUNC_IMPL(__imp__sub_82F50C58) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-600
	ctx.r4.s64 = ctx.r11.s64 + -600;
	// bl 0x8277b880
	ctx.lr = 0x82F50C74;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16512(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16512, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50C90"))) PPC_WEAK_FUNC(sub_82F50C90);
PPC_FUNC_IMPL(__imp__sub_82F50C90) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-580
	ctx.r4.s64 = ctx.r11.s64 + -580;
	// bl 0x8277b880
	ctx.lr = 0x82F50CAC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16600(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16600, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50CC8"))) PPC_WEAK_FUNC(sub_82F50CC8);
PPC_FUNC_IMPL(__imp__sub_82F50CC8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-552
	ctx.r4.s64 = ctx.r11.s64 + -552;
	// bl 0x8277b880
	ctx.lr = 0x82F50CE4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16240(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16240, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50D00"))) PPC_WEAK_FUNC(sub_82F50D00);
PPC_FUNC_IMPL(__imp__sub_82F50D00) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-528
	ctx.r4.s64 = ctx.r11.s64 + -528;
	// bl 0x8277b880
	ctx.lr = 0x82F50D1C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16604, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50D38"))) PPC_WEAK_FUNC(sub_82F50D38);
PPC_FUNC_IMPL(__imp__sub_82F50D38) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-504
	ctx.r4.s64 = ctx.r11.s64 + -504;
	// bl 0x8277b880
	ctx.lr = 0x82F50D54;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17008, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50D70"))) PPC_WEAK_FUNC(sub_82F50D70);
PPC_FUNC_IMPL(__imp__sub_82F50D70) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-480
	ctx.r4.s64 = ctx.r11.s64 + -480;
	// bl 0x8277b880
	ctx.lr = 0x82F50D8C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16072(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16072, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50DA8"))) PPC_WEAK_FUNC(sub_82F50DA8);
PPC_FUNC_IMPL(__imp__sub_82F50DA8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-460
	ctx.r4.s64 = ctx.r11.s64 + -460;
	// bl 0x8277b880
	ctx.lr = 0x82F50DC4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16900(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16900, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50DE0"))) PPC_WEAK_FUNC(sub_82F50DE0);
PPC_FUNC_IMPL(__imp__sub_82F50DE0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-440
	ctx.r4.s64 = ctx.r11.s64 + -440;
	// bl 0x8277b880
	ctx.lr = 0x82F50DFC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16964(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16964, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50E18"))) PPC_WEAK_FUNC(sub_82F50E18);
PPC_FUNC_IMPL(__imp__sub_82F50E18) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-420
	ctx.r4.s64 = ctx.r11.s64 + -420;
	// bl 0x8277b880
	ctx.lr = 0x82F50E34;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,15988(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15988, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50E50"))) PPC_WEAK_FUNC(sub_82F50E50);
PPC_FUNC_IMPL(__imp__sub_82F50E50) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-412
	ctx.r4.s64 = ctx.r11.s64 + -412;
	// bl 0x8277b880
	ctx.lr = 0x82F50E6C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16800(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16800, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50E88"))) PPC_WEAK_FUNC(sub_82F50E88);
PPC_FUNC_IMPL(__imp__sub_82F50E88) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-396
	ctx.r4.s64 = ctx.r11.s64 + -396;
	// bl 0x8277b880
	ctx.lr = 0x82F50EA4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16548, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50EC0"))) PPC_WEAK_FUNC(sub_82F50EC0);
PPC_FUNC_IMPL(__imp__sub_82F50EC0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-388
	ctx.r4.s64 = ctx.r11.s64 + -388;
	// bl 0x8277b880
	ctx.lr = 0x82F50EDC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17060(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17060, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50EF8"))) PPC_WEAK_FUNC(sub_82F50EF8);
PPC_FUNC_IMPL(__imp__sub_82F50EF8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-380
	ctx.r4.s64 = ctx.r11.s64 + -380;
	// bl 0x8277b880
	ctx.lr = 0x82F50F14;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16736(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16736, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50F30"))) PPC_WEAK_FUNC(sub_82F50F30);
PPC_FUNC_IMPL(__imp__sub_82F50F30) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-364
	ctx.r4.s64 = ctx.r11.s64 + -364;
	// bl 0x8277b880
	ctx.lr = 0x82F50F4C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16404(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16404, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50F68"))) PPC_WEAK_FUNC(sub_82F50F68);
PPC_FUNC_IMPL(__imp__sub_82F50F68) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-352
	ctx.r4.s64 = ctx.r11.s64 + -352;
	// bl 0x8277b880
	ctx.lr = 0x82F50F84;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,15980(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15980, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50FA0"))) PPC_WEAK_FUNC(sub_82F50FA0);
PPC_FUNC_IMPL(__imp__sub_82F50FA0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-340
	ctx.r4.s64 = ctx.r11.s64 + -340;
	// bl 0x8277b880
	ctx.lr = 0x82F50FBC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16060(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16060, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F50FD8"))) PPC_WEAK_FUNC(sub_82F50FD8);
PPC_FUNC_IMPL(__imp__sub_82F50FD8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-328
	ctx.r4.s64 = ctx.r11.s64 + -328;
	// bl 0x8277b880
	ctx.lr = 0x82F50FF4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16148, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51010"))) PPC_WEAK_FUNC(sub_82F51010);
PPC_FUNC_IMPL(__imp__sub_82F51010) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-316
	ctx.r4.s64 = ctx.r11.s64 + -316;
	// bl 0x8277b880
	ctx.lr = 0x82F5102C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16032(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16032, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51048"))) PPC_WEAK_FUNC(sub_82F51048);
PPC_FUNC_IMPL(__imp__sub_82F51048) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-304
	ctx.r4.s64 = ctx.r11.s64 + -304;
	// bl 0x8277b880
	ctx.lr = 0x82F51064;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16432(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16432, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51080"))) PPC_WEAK_FUNC(sub_82F51080);
PPC_FUNC_IMPL(__imp__sub_82F51080) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-292
	ctx.r4.s64 = ctx.r11.s64 + -292;
	// bl 0x8277b880
	ctx.lr = 0x82F5109C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16832(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16832, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F510B8"))) PPC_WEAK_FUNC(sub_82F510B8);
PPC_FUNC_IMPL(__imp__sub_82F510B8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-280
	ctx.r4.s64 = ctx.r11.s64 + -280;
	// bl 0x8277b880
	ctx.lr = 0x82F510D4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17084(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17084, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F510F0"))) PPC_WEAK_FUNC(sub_82F510F0);
PPC_FUNC_IMPL(__imp__sub_82F510F0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-268
	ctx.r4.s64 = ctx.r11.s64 + -268;
	// bl 0x8277b880
	ctx.lr = 0x82F5110C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16852(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16852, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51128"))) PPC_WEAK_FUNC(sub_82F51128);
PPC_FUNC_IMPL(__imp__sub_82F51128) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-256
	ctx.r4.s64 = ctx.r11.s64 + -256;
	// bl 0x8277b880
	ctx.lr = 0x82F51144;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16664(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16664, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51160"))) PPC_WEAK_FUNC(sub_82F51160);
PPC_FUNC_IMPL(__imp__sub_82F51160) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-244
	ctx.r4.s64 = ctx.r11.s64 + -244;
	// bl 0x8277b880
	ctx.lr = 0x82F5117C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16280(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16280, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51198"))) PPC_WEAK_FUNC(sub_82F51198);
PPC_FUNC_IMPL(__imp__sub_82F51198) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-232
	ctx.r4.s64 = ctx.r11.s64 + -232;
	// bl 0x8277b880
	ctx.lr = 0x82F511B4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16608(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16608, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F511D0"))) PPC_WEAK_FUNC(sub_82F511D0);
PPC_FUNC_IMPL(__imp__sub_82F511D0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-220
	ctx.r4.s64 = ctx.r11.s64 + -220;
	// bl 0x8277b880
	ctx.lr = 0x82F511EC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16092(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16092, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51208"))) PPC_WEAK_FUNC(sub_82F51208);
PPC_FUNC_IMPL(__imp__sub_82F51208) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-208
	ctx.r4.s64 = ctx.r11.s64 + -208;
	// bl 0x8277b880
	ctx.lr = 0x82F51224;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16552(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16552, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51240"))) PPC_WEAK_FUNC(sub_82F51240);
PPC_FUNC_IMPL(__imp__sub_82F51240) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-196
	ctx.r4.s64 = ctx.r11.s64 + -196;
	// bl 0x8277b880
	ctx.lr = 0x82F5125C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16012(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16012, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51278"))) PPC_WEAK_FUNC(sub_82F51278);
PPC_FUNC_IMPL(__imp__sub_82F51278) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-184
	ctx.r4.s64 = ctx.r11.s64 + -184;
	// bl 0x8277b880
	ctx.lr = 0x82F51294;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16772(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16772, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F512B0"))) PPC_WEAK_FUNC(sub_82F512B0);
PPC_FUNC_IMPL(__imp__sub_82F512B0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-172
	ctx.r4.s64 = ctx.r11.s64 + -172;
	// bl 0x8277b880
	ctx.lr = 0x82F512CC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16440(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16440, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F512E8"))) PPC_WEAK_FUNC(sub_82F512E8);
PPC_FUNC_IMPL(__imp__sub_82F512E8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-156
	ctx.r4.s64 = ctx.r11.s64 + -156;
	// bl 0x8277b880
	ctx.lr = 0x82F51304;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16492(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16492, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51320"))) PPC_WEAK_FUNC(sub_82F51320);
PPC_FUNC_IMPL(__imp__sub_82F51320) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-140
	ctx.r4.s64 = ctx.r11.s64 + -140;
	// bl 0x8277b880
	ctx.lr = 0x82F5133C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16504(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16504, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51358"))) PPC_WEAK_FUNC(sub_82F51358);
PPC_FUNC_IMPL(__imp__sub_82F51358) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-132
	ctx.r4.s64 = ctx.r11.s64 + -132;
	// bl 0x8277b880
	ctx.lr = 0x82F51374;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16244, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51390"))) PPC_WEAK_FUNC(sub_82F51390);
PPC_FUNC_IMPL(__imp__sub_82F51390) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-120
	ctx.r4.s64 = ctx.r11.s64 + -120;
	// bl 0x8277b880
	ctx.lr = 0x82F513AC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16912, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F513C8"))) PPC_WEAK_FUNC(sub_82F513C8);
PPC_FUNC_IMPL(__imp__sub_82F513C8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-108
	ctx.r4.s64 = ctx.r11.s64 + -108;
	// bl 0x8277b880
	ctx.lr = 0x82F513E4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16704(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16704, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51400"))) PPC_WEAK_FUNC(sub_82F51400);
PPC_FUNC_IMPL(__imp__sub_82F51400) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-96
	ctx.r4.s64 = ctx.r11.s64 + -96;
	// bl 0x8277b880
	ctx.lr = 0x82F5141C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16496(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16496, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51438"))) PPC_WEAK_FUNC(sub_82F51438);
PPC_FUNC_IMPL(__imp__sub_82F51438) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-84
	ctx.r4.s64 = ctx.r11.s64 + -84;
	// bl 0x8277b880
	ctx.lr = 0x82F51454;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17016(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17016, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51470"))) PPC_WEAK_FUNC(sub_82F51470);
PPC_FUNC_IMPL(__imp__sub_82F51470) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-72
	ctx.r4.s64 = ctx.r11.s64 + -72;
	// bl 0x8277b880
	ctx.lr = 0x82F5148C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16836(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16836, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F514A8"))) PPC_WEAK_FUNC(sub_82F514A8);
PPC_FUNC_IMPL(__imp__sub_82F514A8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-60
	ctx.r4.s64 = ctx.r11.s64 + -60;
	// bl 0x8277b880
	ctx.lr = 0x82F514C4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17028(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17028, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F514E0"))) PPC_WEAK_FUNC(sub_82F514E0);
PPC_FUNC_IMPL(__imp__sub_82F514E0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x8277b880
	ctx.lr = 0x82F514FC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16236(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16236, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51518"))) PPC_WEAK_FUNC(sub_82F51518);
PPC_FUNC_IMPL(__imp__sub_82F51518) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x8277b880
	ctx.lr = 0x82F51534;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17076(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17076, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51550"))) PPC_WEAK_FUNC(sub_82F51550);
PPC_FUNC_IMPL(__imp__sub_82F51550) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x8277b880
	ctx.lr = 0x82F5156C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16572, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51588"))) PPC_WEAK_FUNC(sub_82F51588);
PPC_FUNC_IMPL(__imp__sub_82F51588) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// bl 0x8277b880
	ctx.lr = 0x82F515A4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16744(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16744, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F515C0"))) PPC_WEAK_FUNC(sub_82F515C0);
PPC_FUNC_IMPL(__imp__sub_82F515C0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// bl 0x8277b880
	ctx.lr = 0x82F515DC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16712(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16712, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F515F8"))) PPC_WEAK_FUNC(sub_82F515F8);
PPC_FUNC_IMPL(__imp__sub_82F515F8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x8277b880
	ctx.lr = 0x82F51614;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16104, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51630"))) PPC_WEAK_FUNC(sub_82F51630);
PPC_FUNC_IMPL(__imp__sub_82F51630) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x8277b880
	ctx.lr = 0x82F5164C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16376(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16376, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51668"))) PPC_WEAK_FUNC(sub_82F51668);
PPC_FUNC_IMPL(__imp__sub_82F51668) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// bl 0x8277b880
	ctx.lr = 0x82F51684;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,15956(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15956, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F516A0"))) PPC_WEAK_FUNC(sub_82F516A0);
PPC_FUNC_IMPL(__imp__sub_82F516A0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// bl 0x8277b880
	ctx.lr = 0x82F516BC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16932(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16932, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F516D8"))) PPC_WEAK_FUNC(sub_82F516D8);
PPC_FUNC_IMPL(__imp__sub_82F516D8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// bl 0x8277b880
	ctx.lr = 0x82F516F4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16896(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16896, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51710"))) PPC_WEAK_FUNC(sub_82F51710);
PPC_FUNC_IMPL(__imp__sub_82F51710) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,68
	ctx.r4.s64 = ctx.r11.s64 + 68;
	// bl 0x8277b880
	ctx.lr = 0x82F5172C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17068(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17068, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51748"))) PPC_WEAK_FUNC(sub_82F51748);
PPC_FUNC_IMPL(__imp__sub_82F51748) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,76
	ctx.r4.s64 = ctx.r11.s64 + 76;
	// bl 0x8277b880
	ctx.lr = 0x82F51764;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16276(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16276, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51780"))) PPC_WEAK_FUNC(sub_82F51780);
PPC_FUNC_IMPL(__imp__sub_82F51780) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,84
	ctx.r4.s64 = ctx.r11.s64 + 84;
	// bl 0x8277b880
	ctx.lr = 0x82F5179C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17104, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F517B8"))) PPC_WEAK_FUNC(sub_82F517B8);
PPC_FUNC_IMPL(__imp__sub_82F517B8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,92
	ctx.r4.s64 = ctx.r11.s64 + 92;
	// bl 0x8277b880
	ctx.lr = 0x82F517D4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,15984(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15984, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F517F0"))) PPC_WEAK_FUNC(sub_82F517F0);
PPC_FUNC_IMPL(__imp__sub_82F517F0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// bl 0x8277b880
	ctx.lr = 0x82F5180C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16384(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16384, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51828"))) PPC_WEAK_FUNC(sub_82F51828);
PPC_FUNC_IMPL(__imp__sub_82F51828) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,108
	ctx.r4.s64 = ctx.r11.s64 + 108;
	// bl 0x8277b880
	ctx.lr = 0x82F51844;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,15972(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15972, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51860"))) PPC_WEAK_FUNC(sub_82F51860);
PPC_FUNC_IMPL(__imp__sub_82F51860) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,116
	ctx.r4.s64 = ctx.r11.s64 + 116;
	// bl 0x8277b880
	ctx.lr = 0x82F5187C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16304(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16304, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51898"))) PPC_WEAK_FUNC(sub_82F51898);
PPC_FUNC_IMPL(__imp__sub_82F51898) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,124
	ctx.r4.s64 = ctx.r11.s64 + 124;
	// bl 0x8277b880
	ctx.lr = 0x82F518B4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16076(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16076, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F518D0"))) PPC_WEAK_FUNC(sub_82F518D0);
PPC_FUNC_IMPL(__imp__sub_82F518D0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,132
	ctx.r4.s64 = ctx.r11.s64 + 132;
	// bl 0x8277b880
	ctx.lr = 0x82F518EC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16596(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16596, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51908"))) PPC_WEAK_FUNC(sub_82F51908);
PPC_FUNC_IMPL(__imp__sub_82F51908) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,140
	ctx.r4.s64 = ctx.r11.s64 + 140;
	// bl 0x8277b880
	ctx.lr = 0x82F51924;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16424(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16424, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51940"))) PPC_WEAK_FUNC(sub_82F51940);
PPC_FUNC_IMPL(__imp__sub_82F51940) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,148
	ctx.r4.s64 = ctx.r11.s64 + 148;
	// bl 0x8277b880
	ctx.lr = 0x82F5195C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16876, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51978"))) PPC_WEAK_FUNC(sub_82F51978);
PPC_FUNC_IMPL(__imp__sub_82F51978) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,156
	ctx.r4.s64 = ctx.r11.s64 + 156;
	// bl 0x8277b880
	ctx.lr = 0x82F51994;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16388(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16388, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F519B0"))) PPC_WEAK_FUNC(sub_82F519B0);
PPC_FUNC_IMPL(__imp__sub_82F519B0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,164
	ctx.r4.s64 = ctx.r11.s64 + 164;
	// bl 0x8277b880
	ctx.lr = 0x82F519CC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16708(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16708, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F519E8"))) PPC_WEAK_FUNC(sub_82F519E8);
PPC_FUNC_IMPL(__imp__sub_82F519E8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,172
	ctx.r4.s64 = ctx.r11.s64 + 172;
	// bl 0x8277b880
	ctx.lr = 0x82F51A04;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16128, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51A20"))) PPC_WEAK_FUNC(sub_82F51A20);
PPC_FUNC_IMPL(__imp__sub_82F51A20) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,180
	ctx.r4.s64 = ctx.r11.s64 + 180;
	// bl 0x8277b880
	ctx.lr = 0x82F51A3C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16656(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16656, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51A58"))) PPC_WEAK_FUNC(sub_82F51A58);
PPC_FUNC_IMPL(__imp__sub_82F51A58) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,188
	ctx.r4.s64 = ctx.r11.s64 + 188;
	// bl 0x8277b880
	ctx.lr = 0x82F51A74;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16448(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16448, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51A90"))) PPC_WEAK_FUNC(sub_82F51A90);
PPC_FUNC_IMPL(__imp__sub_82F51A90) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,200
	ctx.r4.s64 = ctx.r11.s64 + 200;
	// bl 0x8277b880
	ctx.lr = 0x82F51AAC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17128, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51AC8"))) PPC_WEAK_FUNC(sub_82F51AC8);
PPC_FUNC_IMPL(__imp__sub_82F51AC8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,212
	ctx.r4.s64 = ctx.r11.s64 + 212;
	// bl 0x8277b880
	ctx.lr = 0x82F51AE4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16416(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16416, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51B00"))) PPC_WEAK_FUNC(sub_82F51B00);
PPC_FUNC_IMPL(__imp__sub_82F51B00) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,228
	ctx.r4.s64 = ctx.r11.s64 + 228;
	// bl 0x8277b880
	ctx.lr = 0x82F51B1C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17088(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17088, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51B38"))) PPC_WEAK_FUNC(sub_82F51B38);
PPC_FUNC_IMPL(__imp__sub_82F51B38) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,240
	ctx.r4.s64 = ctx.r11.s64 + 240;
	// bl 0x8277b880
	ctx.lr = 0x82F51B54;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16992(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16992, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51B70"))) PPC_WEAK_FUNC(sub_82F51B70);
PPC_FUNC_IMPL(__imp__sub_82F51B70) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,252
	ctx.r4.s64 = ctx.r11.s64 + 252;
	// bl 0x8277b880
	ctx.lr = 0x82F51B8C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16068(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16068, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51BA8"))) PPC_WEAK_FUNC(sub_82F51BA8);
PPC_FUNC_IMPL(__imp__sub_82F51BA8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,260
	ctx.r4.s64 = ctx.r11.s64 + 260;
	// bl 0x8277b880
	ctx.lr = 0x82F51BC4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16532(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16532, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51BE0"))) PPC_WEAK_FUNC(sub_82F51BE0);
PPC_FUNC_IMPL(__imp__sub_82F51BE0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,272
	ctx.r4.s64 = ctx.r11.s64 + 272;
	// bl 0x8277b880
	ctx.lr = 0x82F51BFC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16080(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16080, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51C18"))) PPC_WEAK_FUNC(sub_82F51C18);
PPC_FUNC_IMPL(__imp__sub_82F51C18) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,292
	ctx.r4.s64 = ctx.r11.s64 + 292;
	// bl 0x8277b880
	ctx.lr = 0x82F51C34;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16316(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16316, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51C50"))) PPC_WEAK_FUNC(sub_82F51C50);
PPC_FUNC_IMPL(__imp__sub_82F51C50) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,312
	ctx.r4.s64 = ctx.r11.s64 + 312;
	// bl 0x8277b880
	ctx.lr = 0x82F51C6C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16668(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16668, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51C88"))) PPC_WEAK_FUNC(sub_82F51C88);
PPC_FUNC_IMPL(__imp__sub_82F51C88) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,336
	ctx.r4.s64 = ctx.r11.s64 + 336;
	// bl 0x8277b880
	ctx.lr = 0x82F51CA4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16464(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16464, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51CC0"))) PPC_WEAK_FUNC(sub_82F51CC0);
PPC_FUNC_IMPL(__imp__sub_82F51CC0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,360
	ctx.r4.s64 = ctx.r11.s64 + 360;
	// bl 0x8277b880
	ctx.lr = 0x82F51CDC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16084(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16084, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51CF8"))) PPC_WEAK_FUNC(sub_82F51CF8);
PPC_FUNC_IMPL(__imp__sub_82F51CF8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,384
	ctx.r4.s64 = ctx.r11.s64 + 384;
	// bl 0x8277b880
	ctx.lr = 0x82F51D14;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17124, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51D30"))) PPC_WEAK_FUNC(sub_82F51D30);
PPC_FUNC_IMPL(__imp__sub_82F51D30) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,400
	ctx.r4.s64 = ctx.r11.s64 + 400;
	// bl 0x8277b880
	ctx.lr = 0x82F51D4C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16960(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16960, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51D68"))) PPC_WEAK_FUNC(sub_82F51D68);
PPC_FUNC_IMPL(__imp__sub_82F51D68) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,416
	ctx.r4.s64 = ctx.r11.s64 + 416;
	// bl 0x8277b880
	ctx.lr = 0x82F51D84;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16812(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16812, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51DA0"))) PPC_WEAK_FUNC(sub_82F51DA0);
PPC_FUNC_IMPL(__imp__sub_82F51DA0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,436
	ctx.r4.s64 = ctx.r11.s64 + 436;
	// bl 0x8277b880
	ctx.lr = 0x82F51DBC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16768(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16768, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51DD8"))) PPC_WEAK_FUNC(sub_82F51DD8);
PPC_FUNC_IMPL(__imp__sub_82F51DD8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,456
	ctx.r4.s64 = ctx.r11.s64 + 456;
	// bl 0x8277b880
	ctx.lr = 0x82F51DF4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16252(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16252, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51E10"))) PPC_WEAK_FUNC(sub_82F51E10);
PPC_FUNC_IMPL(__imp__sub_82F51E10) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,472
	ctx.r4.s64 = ctx.r11.s64 + 472;
	// bl 0x8277b880
	ctx.lr = 0x82F51E2C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16192, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51E48"))) PPC_WEAK_FUNC(sub_82F51E48);
PPC_FUNC_IMPL(__imp__sub_82F51E48) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,488
	ctx.r4.s64 = ctx.r11.s64 + 488;
	// bl 0x8277b880
	ctx.lr = 0x82F51E64;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16152, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51E80"))) PPC_WEAK_FUNC(sub_82F51E80);
PPC_FUNC_IMPL(__imp__sub_82F51E80) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,500
	ctx.r4.s64 = ctx.r11.s64 + 500;
	// bl 0x8277b880
	ctx.lr = 0x82F51E9C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16576, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51EB8"))) PPC_WEAK_FUNC(sub_82F51EB8);
PPC_FUNC_IMPL(__imp__sub_82F51EB8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,512
	ctx.r4.s64 = ctx.r11.s64 + 512;
	// bl 0x8277b880
	ctx.lr = 0x82F51ED4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16628(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16628, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51EF0"))) PPC_WEAK_FUNC(sub_82F51EF0);
PPC_FUNC_IMPL(__imp__sub_82F51EF0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,524
	ctx.r4.s64 = ctx.r11.s64 + 524;
	// bl 0x8277b880
	ctx.lr = 0x82F51F0C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,15924(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15924, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51F28"))) PPC_WEAK_FUNC(sub_82F51F28);
PPC_FUNC_IMPL(__imp__sub_82F51F28) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,540
	ctx.r4.s64 = ctx.r11.s64 + 540;
	// bl 0x8277b880
	ctx.lr = 0x82F51F44;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16168, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51F60"))) PPC_WEAK_FUNC(sub_82F51F60);
PPC_FUNC_IMPL(__imp__sub_82F51F60) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,560
	ctx.r4.s64 = ctx.r11.s64 + 560;
	// bl 0x8277b880
	ctx.lr = 0x82F51F7C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16924(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16924, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51F98"))) PPC_WEAK_FUNC(sub_82F51F98);
PPC_FUNC_IMPL(__imp__sub_82F51F98) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,576
	ctx.r4.s64 = ctx.r11.s64 + 576;
	// bl 0x8277b880
	ctx.lr = 0x82F51FB4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16904(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16904, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F51FD0"))) PPC_WEAK_FUNC(sub_82F51FD0);
PPC_FUNC_IMPL(__imp__sub_82F51FD0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,592
	ctx.r4.s64 = ctx.r11.s64 + 592;
	// bl 0x8277b880
	ctx.lr = 0x82F51FEC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16972(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16972, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52008"))) PPC_WEAK_FUNC(sub_82F52008);
PPC_FUNC_IMPL(__imp__sub_82F52008) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,608
	ctx.r4.s64 = ctx.r11.s64 + 608;
	// bl 0x8277b880
	ctx.lr = 0x82F52024;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16452, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52040"))) PPC_WEAK_FUNC(sub_82F52040);
PPC_FUNC_IMPL(__imp__sub_82F52040) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,624
	ctx.r4.s64 = ctx.r11.s64 + 624;
	// bl 0x8277b880
	ctx.lr = 0x82F5205C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,15976(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15976, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52078"))) PPC_WEAK_FUNC(sub_82F52078);
PPC_FUNC_IMPL(__imp__sub_82F52078) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,640
	ctx.r4.s64 = ctx.r11.s64 + 640;
	// bl 0x8277b880
	ctx.lr = 0x82F52094;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16540(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16540, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F520B0"))) PPC_WEAK_FUNC(sub_82F520B0);
PPC_FUNC_IMPL(__imp__sub_82F520B0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,648
	ctx.r4.s64 = ctx.r11.s64 + 648;
	// bl 0x8277b880
	ctx.lr = 0x82F520CC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16568, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F520E8"))) PPC_WEAK_FUNC(sub_82F520E8);
PPC_FUNC_IMPL(__imp__sub_82F520E8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,668
	ctx.r4.s64 = ctx.r11.s64 + 668;
	// bl 0x8277b880
	ctx.lr = 0x82F52104;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16588(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16588, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52120"))) PPC_WEAK_FUNC(sub_82F52120);
PPC_FUNC_IMPL(__imp__sub_82F52120) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,684
	ctx.r4.s64 = ctx.r11.s64 + 684;
	// bl 0x8277b880
	ctx.lr = 0x82F5213C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16132, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52158"))) PPC_WEAK_FUNC(sub_82F52158);
PPC_FUNC_IMPL(__imp__sub_82F52158) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,704
	ctx.r4.s64 = ctx.r11.s64 + 704;
	// bl 0x8277b880
	ctx.lr = 0x82F52174;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16472(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16472, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52190"))) PPC_WEAK_FUNC(sub_82F52190);
PPC_FUNC_IMPL(__imp__sub_82F52190) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,724
	ctx.r4.s64 = ctx.r11.s64 + 724;
	// bl 0x8277b880
	ctx.lr = 0x82F521AC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16624(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16624, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F521C8"))) PPC_WEAK_FUNC(sub_82F521C8);
PPC_FUNC_IMPL(__imp__sub_82F521C8) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4472
	ctx.r4.s64 = ctx.r11.s64 + 4472;
	// bl 0x8277b880
	ctx.lr = 0x82F521E4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16248, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52200"))) PPC_WEAK_FUNC(sub_82F52200);
PPC_FUNC_IMPL(__imp__sub_82F52200) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4480
	ctx.r4.s64 = ctx.r11.s64 + 4480;
	// bl 0x8277b880
	ctx.lr = 0x82F5221C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16396(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16396, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52238"))) PPC_WEAK_FUNC(sub_82F52238);
PPC_FUNC_IMPL(__imp__sub_82F52238) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4488
	ctx.r4.s64 = ctx.r11.s64 + 4488;
	// bl 0x8277b880
	ctx.lr = 0x82F52254;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16844, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52270"))) PPC_WEAK_FUNC(sub_82F52270);
PPC_FUNC_IMPL(__imp__sub_82F52270) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4500
	ctx.r4.s64 = ctx.r11.s64 + 4500;
	// bl 0x8277b880
	ctx.lr = 0x82F5228C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16684(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16684, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F522A8"))) PPC_WEAK_FUNC(sub_82F522A8);
PPC_FUNC_IMPL(__imp__sub_82F522A8) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4508
	ctx.r4.s64 = ctx.r11.s64 + 4508;
	// bl 0x8277b880
	ctx.lr = 0x82F522C4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16016(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16016, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F522E0"))) PPC_WEAK_FUNC(sub_82F522E0);
PPC_FUNC_IMPL(__imp__sub_82F522E0) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4520
	ctx.r4.s64 = ctx.r11.s64 + 4520;
	// bl 0x8277b880
	ctx.lr = 0x82F522FC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16556(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16556, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52318"))) PPC_WEAK_FUNC(sub_82F52318);
PPC_FUNC_IMPL(__imp__sub_82F52318) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4532
	ctx.r4.s64 = ctx.r11.s64 + 4532;
	// bl 0x8277b880
	ctx.lr = 0x82F52334;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16428(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16428, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52350"))) PPC_WEAK_FUNC(sub_82F52350);
PPC_FUNC_IMPL(__imp__sub_82F52350) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4540
	ctx.r4.s64 = ctx.r11.s64 + 4540;
	// bl 0x8277b880
	ctx.lr = 0x82F5236C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16408(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16408, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52388"))) PPC_WEAK_FUNC(sub_82F52388);
PPC_FUNC_IMPL(__imp__sub_82F52388) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4552
	ctx.r4.s64 = ctx.r11.s64 + 4552;
	// bl 0x8277b880
	ctx.lr = 0x82F523A4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16620(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16620, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F523C0"))) PPC_WEAK_FUNC(sub_82F523C0);
PPC_FUNC_IMPL(__imp__sub_82F523C0) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4560
	ctx.r4.s64 = ctx.r11.s64 + 4560;
	// bl 0x8277b880
	ctx.lr = 0x82F523DC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16048(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16048, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F523F8"))) PPC_WEAK_FUNC(sub_82F523F8);
PPC_FUNC_IMPL(__imp__sub_82F523F8) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4572
	ctx.r4.s64 = ctx.r11.s64 + 4572;
	// bl 0x8277b880
	ctx.lr = 0x82F52414;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16808(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16808, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52430"))) PPC_WEAK_FUNC(sub_82F52430);
PPC_FUNC_IMPL(__imp__sub_82F52430) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4580
	ctx.r4.s64 = ctx.r11.s64 + 4580;
	// bl 0x8277b880
	ctx.lr = 0x82F5244C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16412(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16412, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52468"))) PPC_WEAK_FUNC(sub_82F52468);
PPC_FUNC_IMPL(__imp__sub_82F52468) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4588
	ctx.r4.s64 = ctx.r11.s64 + 4588;
	// bl 0x8277b880
	ctx.lr = 0x82F52484;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16660(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16660, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F524A0"))) PPC_WEAK_FUNC(sub_82F524A0);
PPC_FUNC_IMPL(__imp__sub_82F524A0) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4596
	ctx.r4.s64 = ctx.r11.s64 + 4596;
	// bl 0x8277b880
	ctx.lr = 0x82F524BC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16108, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F524D8"))) PPC_WEAK_FUNC(sub_82F524D8);
PPC_FUNC_IMPL(__imp__sub_82F524D8) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4604
	ctx.r4.s64 = ctx.r11.s64 + 4604;
	// bl 0x8277b880
	ctx.lr = 0x82F524F4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16544, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52510"))) PPC_WEAK_FUNC(sub_82F52510);
PPC_FUNC_IMPL(__imp__sub_82F52510) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4616
	ctx.r4.s64 = ctx.r11.s64 + 4616;
	// bl 0x8277b880
	ctx.lr = 0x82F5252C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16672(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16672, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52548"))) PPC_WEAK_FUNC(sub_82F52548);
PPC_FUNC_IMPL(__imp__sub_82F52548) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4628
	ctx.r4.s64 = ctx.r11.s64 + 4628;
	// bl 0x8277b880
	ctx.lr = 0x82F52564;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16928(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16928, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52580"))) PPC_WEAK_FUNC(sub_82F52580);
PPC_FUNC_IMPL(__imp__sub_82F52580) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4636
	ctx.r4.s64 = ctx.r11.s64 + 4636;
	// bl 0x8277b880
	ctx.lr = 0x82F5259C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16112, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F525B8"))) PPC_WEAK_FUNC(sub_82F525B8);
PPC_FUNC_IMPL(__imp__sub_82F525B8) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4648
	ctx.r4.s64 = ctx.r11.s64 + 4648;
	// bl 0x8277b880
	ctx.lr = 0x82F525D4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,15928(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15928, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F525F0"))) PPC_WEAK_FUNC(sub_82F525F0);
PPC_FUNC_IMPL(__imp__sub_82F525F0) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4656
	ctx.r4.s64 = ctx.r11.s64 + 4656;
	// bl 0x8277b880
	ctx.lr = 0x82F5260C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16296, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52628"))) PPC_WEAK_FUNC(sub_82F52628);
PPC_FUNC_IMPL(__imp__sub_82F52628) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4664
	ctx.r4.s64 = ctx.r11.s64 + 4664;
	// bl 0x8277b880
	ctx.lr = 0x82F52644;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16500(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16500, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52660"))) PPC_WEAK_FUNC(sub_82F52660);
PPC_FUNC_IMPL(__imp__sub_82F52660) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4672
	ctx.r4.s64 = ctx.r11.s64 + 4672;
	// bl 0x8277b880
	ctx.lr = 0x82F5267C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16352, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52698"))) PPC_WEAK_FUNC(sub_82F52698);
PPC_FUNC_IMPL(__imp__sub_82F52698) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4680
	ctx.r4.s64 = ctx.r11.s64 + 4680;
	// bl 0x8277b880
	ctx.lr = 0x82F526B4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16096(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16096, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F526D0"))) PPC_WEAK_FUNC(sub_82F526D0);
PPC_FUNC_IMPL(__imp__sub_82F526D0) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4688
	ctx.r4.s64 = ctx.r11.s64 + 4688;
	// bl 0x8277b880
	ctx.lr = 0x82F526EC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16816(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16816, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52708"))) PPC_WEAK_FUNC(sub_82F52708);
PPC_FUNC_IMPL(__imp__sub_82F52708) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4700
	ctx.r4.s64 = ctx.r11.s64 + 4700;
	// bl 0x8277b880
	ctx.lr = 0x82F52724;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17116, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52740"))) PPC_WEAK_FUNC(sub_82F52740);
PPC_FUNC_IMPL(__imp__sub_82F52740) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4712
	ctx.r4.s64 = ctx.r11.s64 + 4712;
	// bl 0x8277b880
	ctx.lr = 0x82F5275C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16676(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16676, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52778"))) PPC_WEAK_FUNC(sub_82F52778);
PPC_FUNC_IMPL(__imp__sub_82F52778) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4728
	ctx.r4.s64 = ctx.r11.s64 + 4728;
	// bl 0x8277b880
	ctx.lr = 0x82F52794;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,15992(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15992, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F527B0"))) PPC_WEAK_FUNC(sub_82F527B0);
PPC_FUNC_IMPL(__imp__sub_82F527B0) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4740
	ctx.r4.s64 = ctx.r11.s64 + 4740;
	// bl 0x8277b880
	ctx.lr = 0x82F527CC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16580(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16580, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F527E8"))) PPC_WEAK_FUNC(sub_82F527E8);
PPC_FUNC_IMPL(__imp__sub_82F527E8) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4752
	ctx.r4.s64 = ctx.r11.s64 + 4752;
	// bl 0x8277b880
	ctx.lr = 0x82F52804;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16688(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16688, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52820"))) PPC_WEAK_FUNC(sub_82F52820);
PPC_FUNC_IMPL(__imp__sub_82F52820) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4768
	ctx.r4.s64 = ctx.r11.s64 + 4768;
	// bl 0x8277b880
	ctx.lr = 0x82F5283C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16328, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52858"))) PPC_WEAK_FUNC(sub_82F52858);
PPC_FUNC_IMPL(__imp__sub_82F52858) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4780
	ctx.r4.s64 = ctx.r11.s64 + 4780;
	// bl 0x8277b880
	ctx.lr = 0x82F52874;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16196, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52890"))) PPC_WEAK_FUNC(sub_82F52890);
PPC_FUNC_IMPL(__imp__sub_82F52890) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4796
	ctx.r4.s64 = ctx.r11.s64 + 4796;
	// bl 0x8277b880
	ctx.lr = 0x82F528AC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16560, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F528C8"))) PPC_WEAK_FUNC(sub_82F528C8);
PPC_FUNC_IMPL(__imp__sub_82F528C8) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4804
	ctx.r4.s64 = ctx.r11.s64 + 4804;
	// bl 0x8277b880
	ctx.lr = 0x82F528E4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16680, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52900"))) PPC_WEAK_FUNC(sub_82F52900);
PPC_FUNC_IMPL(__imp__sub_82F52900) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4816
	ctx.r4.s64 = ctx.r11.s64 + 4816;
	// bl 0x8277b880
	ctx.lr = 0x82F5291C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16136, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52938"))) PPC_WEAK_FUNC(sub_82F52938);
PPC_FUNC_IMPL(__imp__sub_82F52938) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4832
	ctx.r4.s64 = ctx.r11.s64 + 4832;
	// bl 0x8277b880
	ctx.lr = 0x82F52954;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16284(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16284, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52970"))) PPC_WEAK_FUNC(sub_82F52970);
PPC_FUNC_IMPL(__imp__sub_82F52970) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4840
	ctx.r4.s64 = ctx.r11.s64 + 4840;
	// bl 0x8277b880
	ctx.lr = 0x82F5298C;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16864(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16864, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F529A8"))) PPC_WEAK_FUNC(sub_82F529A8);
PPC_FUNC_IMPL(__imp__sub_82F529A8) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4852
	ctx.r4.s64 = ctx.r11.s64 + 4852;
	// bl 0x8277b880
	ctx.lr = 0x82F529C4;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16720(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16720, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F529E0"))) PPC_WEAK_FUNC(sub_82F529E0);
PPC_FUNC_IMPL(__imp__sub_82F529E0) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4864
	ctx.r4.s64 = ctx.r11.s64 + 4864;
	// bl 0x8277b880
	ctx.lr = 0x82F529FC;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,17012(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17012, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52A18"))) PPC_WEAK_FUNC(sub_82F52A18);
PPC_FUNC_IMPL(__imp__sub_82F52A18) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4872
	ctx.r4.s64 = ctx.r11.s64 + 4872;
	// bl 0x8277b880
	ctx.lr = 0x82F52A34;
	sub_8277B880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,16516(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16516, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52A50"))) PPC_WEAK_FUNC(sub_82F52A50);
PPC_FUNC_IMPL(__imp__sub_82F52A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,248
	ctx.r5.s64 = 248;
	// addi r31,r10,4008
	ctx.r31.s64 = ctx.r10.s64 + 4008;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16248);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F52A84;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// li r5,248
	ctx.r5.s64 = 248;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// addi r3,r31,292
	ctx.r3.s64 = ctx.r31.s64 + 292;
	// bl 0x82a4efb0
	ctx.lr = 0x82F52AAC;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r5,248
	ctx.r5.s64 = 248;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,548
	ctx.r3.s64 = ctx.r31.s64 + 548;
	// lwz r11,16028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16028);
	// lwz r10,16380(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16380);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F52AD4;
	sub_82A4EFB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r5,62
	ctx.r5.s64 = 62;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// addi r3,r31,798
	ctx.r3.s64 = ctx.r31.s64 + 798;
	// bl 0x82a4efb0
	ctx.lr = 0x82F52AF4;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,248
	ctx.r5.s64 = 248;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// addi r3,r31,868
	ctx.r3.s64 = ctx.r31.s64 + 868;
	// bl 0x82a4efb0
	ctx.lr = 0x82F52B14;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52B38"))) PPC_WEAK_FUNC(sub_82F52B38);
PPC_FUNC_IMPL(__imp__sub_82F52B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,228
	ctx.r5.s64 = 228;
	// addi r31,r10,-9432
	ctx.r31.s64 = ctx.r10.s64 + -9432;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16396);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F52B70;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// addi r9,r9,-2488
	ctx.r9.s64 = ctx.r9.s64 + -2488;
	// addi r11,r8,-2480
	ctx.r11.s64 = ctx.r8.s64 + -2480;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// addi r10,r7,-2468
	ctx.r10.s64 = ctx.r7.s64 + -2468;
	// addi r11,r5,-2444
	ctx.r11.s64 = ctx.r5.s64 + -2444;
	// addi r9,r6,-2456
	ctx.r9.s64 = ctx.r6.s64 + -2456;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// li r5,228
	ctx.r5.s64 = 228;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// bl 0x82a4efb0
	ctx.lr = 0x82F52BD4;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lwz r11,16780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16780);
	// lis r30,-31948
	ctx.r30.s64 = -2093744128;
	// lwz r10,17108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17108);
	// lwz r9,16536(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16536);
	// li r5,228
	ctx.r5.s64 = 228;
	// lwz r8,16356(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16356);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,16028(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16028);
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// lwz r6,16380(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16380);
	// lwz r30,16180(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16180);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// stw r7,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r7.u32);
	// stw r6,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r6.u32);
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F52C38;
	sub_82A4EFB0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// stb r10,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r10.u8);
	// li r5,57
	ctx.r5.s64 = 57;
	// stb r11,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r9,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r9.u8);
	// addi r3,r31,803
	ctx.r3.s64 = ctx.r31.s64 + 803;
	// bl 0x82a4efb0
	ctx.lr = 0x82F52C80;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// li r5,228
	ctx.r5.s64 = 228;
	// stw r9,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// bl 0x82a4efb0
	ctx.lr = 0x82F52CC8;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F52CF0"))) PPC_WEAK_FUNC(sub_82F52CF0);
PPC_FUNC_IMPL(__imp__sub_82F52CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82F52CF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,220
	ctx.r5.s64 = 220;
	// addi r31,r10,26408
	ctx.r31.s64 = ctx.r10.s64 + 26408;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16844(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16844);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F52D20;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// addi r9,r9,-2488
	ctx.r9.s64 = ctx.r9.s64 + -2488;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// addi r11,r8,-2480
	ctx.r11.s64 = ctx.r8.s64 + -2480;
	// addi r10,r7,-2468
	ctx.r10.s64 = ctx.r7.s64 + -2468;
	// addi r9,r6,-2456
	ctx.r9.s64 = ctx.r6.s64 + -2456;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// addi r11,r5,-2444
	ctx.r11.s64 = ctx.r5.s64 + -2444;
	// addi r10,r4,-2432
	ctx.r10.s64 = ctx.r4.s64 + -2432;
	// addi r9,r3,-2416
	ctx.r9.s64 = ctx.r3.s64 + -2416;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// li r5,220
	ctx.r5.s64 = 220;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// bl 0x82a4efb0
	ctx.lr = 0x82F52D9C;
	sub_82A4EFB0(ctx, base);
	// lis r3,-31948
	ctx.r3.s64 = -2093744128;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lwz r30,16200(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16200);
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lwz r11,16780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16780);
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// lwz r10,17108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17108);
	// lis r28,-31948
	ctx.r28.s64 = -2093744128;
	// lwz r9,16536(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16536);
	// lwz r8,16356(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16356);
	// li r5,220
	ctx.r5.s64 = 220;
	// lwz r7,16028(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16028);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,16380(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16380);
	// addi r3,r31,576
	ctx.r3.s64 = ctx.r31.s64 + 576;
	// lwz r29,16180(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16180);
	// lwz r28,16940(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16940);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// stw r7,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r7.u32);
	// stw r6,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r6.u32);
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// stw r29,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r29.u32);
	// stw r28,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r28.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F52E18;
	sub_82A4EFB0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// stb r10,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r10.u8);
	// li r11,7
	ctx.r11.s64 = 7;
	// stb r9,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r9.u8);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,8
	ctx.r9.s64 = 8;
	// stb r11,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r11.u8);
	// li r5,55
	ctx.r5.s64 = 55;
	// stb r10,803(r31)
	PPC_STORE_U8(ctx.r31.u32 + 803, ctx.r10.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r9,804(r31)
	PPC_STORE_U8(ctx.r31.u32 + 804, ctx.r9.u8);
	// addi r3,r31,805
	ctx.r3.s64 = ctx.r31.s64 + 805;
	// bl 0x82a4efb0
	ctx.lr = 0x82F52E70;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,23
	ctx.r9.s64 = 23;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// li r10,19
	ctx.r10.s64 = 19;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r9,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r9.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// li r5,220
	ctx.r5.s64 = 220;
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r9.u32);
	// addi r3,r31,896
	ctx.r3.s64 = ctx.r31.s64 + 896;
	// bl 0x82a4efb0
	ctx.lr = 0x82F52EC8;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F52EE0"))) PPC_WEAK_FUNC(sub_82F52EE0);
PPC_FUNC_IMPL(__imp__sub_82F52EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9dc
	ctx.lr = 0x82F52EE8;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,172
	ctx.r5.s64 = 172;
	// addi r31,r10,17448
	ctx.r31.s64 = ctx.r10.s64 + 17448;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16684);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F52F10;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// addi r9,r9,-2488
	ctx.r9.s64 = ctx.r9.s64 + -2488;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// addi r11,r8,-2480
	ctx.r11.s64 = ctx.r8.s64 + -2480;
	// addi r10,r7,-2468
	ctx.r10.s64 = ctx.r7.s64 + -2468;
	// addi r9,r6,-2456
	ctx.r9.s64 = ctx.r6.s64 + -2456;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// addi r11,r5,-2444
	ctx.r11.s64 = ctx.r5.s64 + -2444;
	// addi r10,r4,-2432
	ctx.r10.s64 = ctx.r4.s64 + -2432;
	// addi r9,r3,-2416
	ctx.r9.s64 = ctx.r3.s64 + -2416;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// lis r30,-32234
	ctx.r30.s64 = -2112487424;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// lis r29,-32234
	ctx.r29.s64 = -2112487424;
	// stw r9,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// lis r28,-32234
	ctx.r28.s64 = -2112487424;
	// addi r11,r30,-2408
	ctx.r11.s64 = ctx.r30.s64 + -2408;
	// addi r10,r29,-2400
	ctx.r10.s64 = ctx.r29.s64 + -2400;
	// addi r9,r28,-2380
	ctx.r9.s64 = ctx.r28.s64 + -2380;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// lis r27,-32234
	ctx.r27.s64 = -2112487424;
	// stw r10,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// lis r26,-32234
	ctx.r26.s64 = -2112487424;
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// lis r25,-32234
	ctx.r25.s64 = -2112487424;
	// addi r11,r27,-2368
	ctx.r11.s64 = ctx.r27.s64 + -2368;
	// addi r10,r26,-2348
	ctx.r10.s64 = ctx.r26.s64 + -2348;
	// addi r9,r25,-2340
	ctx.r9.s64 = ctx.r25.s64 + -2340;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// lis r24,-32234
	ctx.r24.s64 = -2112487424;
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// lis r23,-32234
	ctx.r23.s64 = -2112487424;
	// stw r9,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r9.u32);
	// lis r22,-32234
	ctx.r22.s64 = -2112487424;
	// addi r11,r24,-2324
	ctx.r11.s64 = ctx.r24.s64 + -2324;
	// addi r10,r23,-2300
	ctx.r10.s64 = ctx.r23.s64 + -2300;
	// addi r9,r22,-2280
	ctx.r9.s64 = ctx.r22.s64 + -2280;
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// lis r21,-32234
	ctx.r21.s64 = -2112487424;
	// stw r10,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r10.u32);
	// lis r20,-32234
	ctx.r20.s64 = -2112487424;
	// stw r9,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r9.u32);
	// lis r19,-32234
	ctx.r19.s64 = -2112487424;
	// addi r11,r21,-2268
	ctx.r11.s64 = ctx.r21.s64 + -2268;
	// addi r10,r20,-2252
	ctx.r10.s64 = ctx.r20.s64 + -2252;
	// addi r9,r19,-2236
	ctx.r9.s64 = ctx.r19.s64 + -2236;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// li r5,172
	ctx.r5.s64 = 172;
	// stw r10,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r9.u32);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x82a4efb0
	ctx.lr = 0x82F5301C;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lwz r11,16644(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16644);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// lwz r11,16764(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16764);
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lwz r10,16612(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16612);
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lis r30,-31948
	ctx.r30.s64 = -2093744128;
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// lwz r5,16052(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16052);
	// lis r28,-31948
	ctx.r28.s64 = -2093744128;
	// lwz r4,16204(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16204);
	// lis r27,-31948
	ctx.r27.s64 = -2093744128;
	// lwz r3,16156(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16156);
	// lis r26,-31948
	ctx.r26.s64 = -2093744128;
	// lwz r9,15944(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 15944);
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
	// lwz r8,16780(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16780);
	// lis r24,-31948
	ctx.r24.s64 = -2093744128;
	// lwz r7,17108(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17108);
	// lis r23,-31948
	ctx.r23.s64 = -2093744128;
	// lwz r6,15964(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 15964);
	// lis r22,-31948
	ctx.r22.s64 = -2093744128;
	// lwz r30,16536(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16536);
	// lis r21,-31948
	ctx.r21.s64 = -2093744128;
	// lwz r29,16344(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16344);
	// lis r20,-31948
	ctx.r20.s64 = -2093744128;
	// lwz r28,16356(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16356);
	// lis r19,-31948
	ctx.r19.s64 = -2093744128;
	// lwz r27,16028(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16028);
	// lis r18,-31948
	ctx.r18.s64 = -2093744128;
	// lwz r26,16856(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16856);
	// lis r17,-31948
	ctx.r17.s64 = -2093744128;
	// lwz r25,16380(r22)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16380);
	// lwz r24,16480(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16480);
	// lwz r23,16528(r20)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16528);
	// lwz r22,16200(r19)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16200);
	// lwz r21,16180(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16180);
	// lwz r20,16940(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16940);
	// stw r5,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r5.u32);
	// li r5,172
	ctx.r5.s64 = 172;
	// stw r4,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r3.u32);
	// addi r3,r31,624
	ctx.r3.s64 = ctx.r31.s64 + 624;
	// stw r11,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r11.u32);
	// stw r10,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r10.u32);
	// stw r9,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r9.u32);
	// stw r8,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r8.u32);
	// stw r7,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r7.u32);
	// stw r6,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r6.u32);
	// stw r30,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r30.u32);
	// stw r29,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r29.u32);
	// stw r28,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r28.u32);
	// stw r27,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r27.u32);
	// stw r26,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r26.u32);
	// stw r25,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r25.u32);
	// stw r24,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r24.u32);
	// stw r23,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r23.u32);
	// stw r22,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r22.u32);
	// stw r21,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r21.u32);
	// stw r20,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r20.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F53128;
	sub_82A4EFB0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r9,11
	ctx.r9.s64 = 11;
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// li r9,3
	ctx.r9.s64 = 3;
	// stb r10,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r10.u8);
	// li r11,13
	ctx.r11.s64 = 13;
	// li r10,14
	ctx.r10.s64 = 14;
	// stb r9,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r9.u8);
	// stb r11,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r11.u8);
	// li r9,15
	ctx.r9.s64 = 15;
	// stb r10,803(r31)
	PPC_STORE_U8(ctx.r31.u32 + 803, ctx.r10.u8);
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r9,804(r31)
	PPC_STORE_U8(ctx.r31.u32 + 804, ctx.r9.u8);
	// li r9,17
	ctx.r9.s64 = 17;
	// stb r11,805(r31)
	PPC_STORE_U8(ctx.r31.u32 + 805, ctx.r11.u8);
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r10,806(r31)
	PPC_STORE_U8(ctx.r31.u32 + 806, ctx.r10.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r9,807(r31)
	PPC_STORE_U8(ctx.r31.u32 + 807, ctx.r9.u8);
	// li r9,18
	ctx.r9.s64 = 18;
	// stb r11,808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 808, ctx.r11.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r10,809(r31)
	PPC_STORE_U8(ctx.r31.u32 + 809, ctx.r10.u8);
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r9,810(r31)
	PPC_STORE_U8(ctx.r31.u32 + 810, ctx.r9.u8);
	// li r9,20
	ctx.r9.s64 = 20;
	// stb r11,811(r31)
	PPC_STORE_U8(ctx.r31.u32 + 811, ctx.r11.u8);
	// li r11,7
	ctx.r11.s64 = 7;
	// stb r10,812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 812, ctx.r10.u8);
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r9,813(r31)
	PPC_STORE_U8(ctx.r31.u32 + 813, ctx.r9.u8);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r5,43
	ctx.r5.s64 = 43;
	// stb r11,814(r31)
	PPC_STORE_U8(ctx.r31.u32 + 814, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r10,815(r31)
	PPC_STORE_U8(ctx.r31.u32 + 815, ctx.r10.u8);
	// addi r3,r31,817
	ctx.r3.s64 = ctx.r31.s64 + 817;
	// stb r9,816(r31)
	PPC_STORE_U8(ctx.r31.u32 + 816, ctx.r9.u8);
	// bl 0x82a4efb0
	ctx.lr = 0x82F531E0;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// li r9,129
	ctx.r9.s64 = 129;
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// li r10,21
	ctx.r10.s64 = 21;
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// li r11,33
	ctx.r11.s64 = 33;
	// stw r9,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r9.u32);
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r11,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,81
	ctx.r10.s64 = 81;
	// stw r9,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r9.u32);
	// stw r11,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r11.u32);
	// li r9,65
	ctx.r9.s64 = 65;
	// stw r10,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r10.u32);
	// li r11,113
	ctx.r11.s64 = 113;
	// li r10,29
	ctx.r10.s64 = 29;
	// stw r9,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r9.u32);
	// stw r11,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r10.u32);
	// li r11,97
	ctx.r11.s64 = 97;
	// li r10,49
	ctx.r10.s64 = 49;
	// stw r9,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r9.u32);
	// stw r11,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r11.u32);
	// li r9,157
	ctx.r9.s64 = 157;
	// stw r10,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r10.u32);
	// li r11,221
	ctx.r11.s64 = 221;
	// li r10,25
	ctx.r10.s64 = 25;
	// stw r9,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r9.u32);
	// li r5,172
	ctx.r5.s64 = 172;
	// stw r11,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r10.u32);
	// addi r3,r31,944
	ctx.r3.s64 = ctx.r31.s64 + 944;
	// bl 0x82a4efb0
	ctx.lr = 0x82F53298;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F532B0"))) PPC_WEAK_FUNC(sub_82F532B0);
PPC_FUNC_IMPL(__imp__sub_82F532B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82F532B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,224
	ctx.r5.s64 = 224;
	// addi r31,r10,23048
	ctx.r31.s64 = ctx.r10.s64 + 23048;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16016);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F532E0;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r11,r8,-2480
	ctx.r11.s64 = ctx.r8.s64 + -2480;
	// addi r9,r9,-2488
	ctx.r9.s64 = ctx.r9.s64 + -2488;
	// addi r10,r7,-2468
	ctx.r10.s64 = ctx.r7.s64 + -2468;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// addi r11,r5,-2444
	ctx.r11.s64 = ctx.r5.s64 + -2444;
	// addi r10,r4,-2224
	ctx.r10.s64 = ctx.r4.s64 + -2224;
	// addi r9,r6,-2456
	ctx.r9.s64 = ctx.r6.s64 + -2456;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// li r5,224
	ctx.r5.s64 = 224;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// bl 0x82a4efb0
	ctx.lr = 0x82F53350;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lwz r11,16780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16780);
	// lis r30,-31948
	ctx.r30.s64 = -2093744128;
	// lwz r10,17108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17108);
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// lwz r9,16140(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16140);
	// lwz r8,16536(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16536);
	// li r5,224
	ctx.r5.s64 = 224;
	// lwz r7,16356(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16356);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,16028(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16028);
	// addi r3,r31,572
	ctx.r3.s64 = ctx.r31.s64 + 572;
	// lwz r30,16380(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16380);
	// lwz r29,16180(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16180);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// stw r7,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r7.u32);
	// stw r6,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r6.u32);
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// stw r29,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r29.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F533C0;
	sub_82A4EFB0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r10,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r10.u8);
	// stb r11,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r11.u8);
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r9,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r9.u8);
	// li r5,56
	ctx.r5.s64 = 56;
	// stb r11,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,804
	ctx.r3.s64 = ctx.r31.s64 + 804;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,6
	ctx.r11.s64 = 6;
	// stb r10,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r10.u8);
	// stb r9,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r9.u8);
	// stb r11,803(r31)
	PPC_STORE_U8(ctx.r31.u32 + 803, ctx.r11.u8);
	// bl 0x82a4efb0
	ctx.lr = 0x82F53410;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r9,19
	ctx.r9.s64 = 19;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// li r11,11
	ctx.r11.s64 = 11;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r9.u32);
	// li r5,224
	ctx.r5.s64 = 224;
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// addi r3,r31,892
	ctx.r3.s64 = ctx.r31.s64 + 892;
	// bl 0x82a4efb0
	ctx.lr = 0x82F53460;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F53478"))) PPC_WEAK_FUNC(sub_82F53478);
PPC_FUNC_IMPL(__imp__sub_82F53478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82F53480;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,224
	ctx.r5.s64 = 224;
	// addi r31,r10,-2712
	ctx.r31.s64 = ctx.r10.s64 + -2712;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16556);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F534A8;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r11,r8,-2480
	ctx.r11.s64 = ctx.r8.s64 + -2480;
	// addi r9,r9,-2488
	ctx.r9.s64 = ctx.r9.s64 + -2488;
	// addi r10,r7,-2468
	ctx.r10.s64 = ctx.r7.s64 + -2468;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// addi r11,r5,-2444
	ctx.r11.s64 = ctx.r5.s64 + -2444;
	// addi r10,r4,-2224
	ctx.r10.s64 = ctx.r4.s64 + -2224;
	// addi r9,r6,-2456
	ctx.r9.s64 = ctx.r6.s64 + -2456;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// li r5,224
	ctx.r5.s64 = 224;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// bl 0x82a4efb0
	ctx.lr = 0x82F53518;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lwz r11,16780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16780);
	// lis r30,-31948
	ctx.r30.s64 = -2093744128;
	// lwz r10,17108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17108);
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// lwz r9,16140(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16140);
	// lwz r8,16536(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16536);
	// li r5,224
	ctx.r5.s64 = 224;
	// lwz r7,16356(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16356);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,16028(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16028);
	// addi r3,r31,572
	ctx.r3.s64 = ctx.r31.s64 + 572;
	// lwz r30,16380(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16380);
	// lwz r29,16180(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16180);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// stw r7,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r7.u32);
	// stw r6,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r6.u32);
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// stw r29,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r29.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F53588;
	sub_82A4EFB0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r10,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r10.u8);
	// stb r11,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r11.u8);
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r9,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r9.u8);
	// li r5,56
	ctx.r5.s64 = 56;
	// stb r11,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,804
	ctx.r3.s64 = ctx.r31.s64 + 804;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,6
	ctx.r11.s64 = 6;
	// stb r10,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r10.u8);
	// stb r9,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r9.u8);
	// stb r11,803(r31)
	PPC_STORE_U8(ctx.r31.u32 + 803, ctx.r11.u8);
	// bl 0x82a4efb0
	ctx.lr = 0x82F535D8;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r9,19
	ctx.r9.s64 = 19;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// li r11,11
	ctx.r11.s64 = 11;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r9.u32);
	// li r5,224
	ctx.r5.s64 = 224;
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// addi r3,r31,892
	ctx.r3.s64 = ctx.r31.s64 + 892;
	// bl 0x82a4efb0
	ctx.lr = 0x82F53628;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F53640"))) PPC_WEAK_FUNC(sub_82F53640);
PPC_FUNC_IMPL(__imp__sub_82F53640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9dc
	ctx.lr = 0x82F53648;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,172
	ctx.r5.s64 = 172;
	// addi r31,r10,9608
	ctx.r31.s64 = ctx.r10.s64 + 9608;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16428);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F53670;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// addi r9,r9,-2488
	ctx.r9.s64 = ctx.r9.s64 + -2488;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// addi r11,r8,-2480
	ctx.r11.s64 = ctx.r8.s64 + -2480;
	// addi r10,r7,-2468
	ctx.r10.s64 = ctx.r7.s64 + -2468;
	// addi r9,r6,-2456
	ctx.r9.s64 = ctx.r6.s64 + -2456;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// addi r11,r5,-2444
	ctx.r11.s64 = ctx.r5.s64 + -2444;
	// addi r10,r4,-2432
	ctx.r10.s64 = ctx.r4.s64 + -2432;
	// addi r9,r3,-2416
	ctx.r9.s64 = ctx.r3.s64 + -2416;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// lis r30,-32234
	ctx.r30.s64 = -2112487424;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// lis r29,-32234
	ctx.r29.s64 = -2112487424;
	// stw r9,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// lis r28,-32234
	ctx.r28.s64 = -2112487424;
	// addi r11,r30,-2408
	ctx.r11.s64 = ctx.r30.s64 + -2408;
	// addi r10,r29,-2400
	ctx.r10.s64 = ctx.r29.s64 + -2400;
	// addi r9,r28,-2380
	ctx.r9.s64 = ctx.r28.s64 + -2380;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// lis r27,-32234
	ctx.r27.s64 = -2112487424;
	// stw r10,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// lis r26,-32234
	ctx.r26.s64 = -2112487424;
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// lis r25,-32234
	ctx.r25.s64 = -2112487424;
	// addi r11,r27,-2368
	ctx.r11.s64 = ctx.r27.s64 + -2368;
	// addi r10,r26,-2348
	ctx.r10.s64 = ctx.r26.s64 + -2348;
	// addi r9,r25,-2340
	ctx.r9.s64 = ctx.r25.s64 + -2340;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// lis r24,-32234
	ctx.r24.s64 = -2112487424;
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// lis r23,-32234
	ctx.r23.s64 = -2112487424;
	// stw r9,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r9.u32);
	// lis r22,-32234
	ctx.r22.s64 = -2112487424;
	// addi r11,r24,-2324
	ctx.r11.s64 = ctx.r24.s64 + -2324;
	// addi r10,r23,-2300
	ctx.r10.s64 = ctx.r23.s64 + -2300;
	// addi r9,r22,-2280
	ctx.r9.s64 = ctx.r22.s64 + -2280;
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// lis r21,-32234
	ctx.r21.s64 = -2112487424;
	// stw r10,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r10.u32);
	// lis r20,-32234
	ctx.r20.s64 = -2112487424;
	// stw r9,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r9.u32);
	// lis r19,-32234
	ctx.r19.s64 = -2112487424;
	// addi r11,r21,-2268
	ctx.r11.s64 = ctx.r21.s64 + -2268;
	// addi r10,r20,-2252
	ctx.r10.s64 = ctx.r20.s64 + -2252;
	// addi r9,r19,-2236
	ctx.r9.s64 = ctx.r19.s64 + -2236;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// li r5,172
	ctx.r5.s64 = 172;
	// stw r10,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r9.u32);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x82a4efb0
	ctx.lr = 0x82F5377C;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lwz r11,16644(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16644);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// lwz r11,16764(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16764);
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lwz r10,16612(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16612);
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lis r30,-31948
	ctx.r30.s64 = -2093744128;
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// lwz r5,16052(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16052);
	// lis r28,-31948
	ctx.r28.s64 = -2093744128;
	// lwz r4,16204(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16204);
	// lis r27,-31948
	ctx.r27.s64 = -2093744128;
	// lwz r3,16156(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16156);
	// lis r26,-31948
	ctx.r26.s64 = -2093744128;
	// lwz r9,15944(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 15944);
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
	// lwz r8,16780(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16780);
	// lis r24,-31948
	ctx.r24.s64 = -2093744128;
	// lwz r7,17108(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17108);
	// lis r23,-31948
	ctx.r23.s64 = -2093744128;
	// lwz r6,15964(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 15964);
	// lis r22,-31948
	ctx.r22.s64 = -2093744128;
	// lwz r30,16536(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16536);
	// lis r21,-31948
	ctx.r21.s64 = -2093744128;
	// lwz r29,16344(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16344);
	// lis r20,-31948
	ctx.r20.s64 = -2093744128;
	// lwz r28,16356(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16356);
	// lis r19,-31948
	ctx.r19.s64 = -2093744128;
	// lwz r27,16028(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16028);
	// lis r18,-31948
	ctx.r18.s64 = -2093744128;
	// lwz r26,16856(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16856);
	// lis r17,-31948
	ctx.r17.s64 = -2093744128;
	// lwz r25,16380(r22)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16380);
	// lwz r24,16480(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16480);
	// lwz r23,16528(r20)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16528);
	// lwz r22,16200(r19)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16200);
	// lwz r21,16180(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16180);
	// lwz r20,16940(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16940);
	// stw r5,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r5.u32);
	// li r5,172
	ctx.r5.s64 = 172;
	// stw r4,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r3.u32);
	// addi r3,r31,624
	ctx.r3.s64 = ctx.r31.s64 + 624;
	// stw r11,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r11.u32);
	// stw r10,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r10.u32);
	// stw r9,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r9.u32);
	// stw r8,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r8.u32);
	// stw r7,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r7.u32);
	// stw r6,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r6.u32);
	// stw r30,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r30.u32);
	// stw r29,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r29.u32);
	// stw r28,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r28.u32);
	// stw r27,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r27.u32);
	// stw r26,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r26.u32);
	// stw r25,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r25.u32);
	// stw r24,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r24.u32);
	// stw r23,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r23.u32);
	// stw r22,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r22.u32);
	// stw r21,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r21.u32);
	// stw r20,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r20.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F53888;
	sub_82A4EFB0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r9,11
	ctx.r9.s64 = 11;
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// li r9,3
	ctx.r9.s64 = 3;
	// stb r10,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r10.u8);
	// li r11,13
	ctx.r11.s64 = 13;
	// li r10,14
	ctx.r10.s64 = 14;
	// stb r9,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r9.u8);
	// stb r11,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r11.u8);
	// li r9,15
	ctx.r9.s64 = 15;
	// stb r10,803(r31)
	PPC_STORE_U8(ctx.r31.u32 + 803, ctx.r10.u8);
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r9,804(r31)
	PPC_STORE_U8(ctx.r31.u32 + 804, ctx.r9.u8);
	// li r9,17
	ctx.r9.s64 = 17;
	// stb r11,805(r31)
	PPC_STORE_U8(ctx.r31.u32 + 805, ctx.r11.u8);
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r10,806(r31)
	PPC_STORE_U8(ctx.r31.u32 + 806, ctx.r10.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r9,807(r31)
	PPC_STORE_U8(ctx.r31.u32 + 807, ctx.r9.u8);
	// li r9,18
	ctx.r9.s64 = 18;
	// stb r11,808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 808, ctx.r11.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r10,809(r31)
	PPC_STORE_U8(ctx.r31.u32 + 809, ctx.r10.u8);
	// li r10,19
	ctx.r10.s64 = 19;
	// stb r9,810(r31)
	PPC_STORE_U8(ctx.r31.u32 + 810, ctx.r9.u8);
	// li r9,20
	ctx.r9.s64 = 20;
	// stb r11,811(r31)
	PPC_STORE_U8(ctx.r31.u32 + 811, ctx.r11.u8);
	// li r11,7
	ctx.r11.s64 = 7;
	// stb r10,812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 812, ctx.r10.u8);
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r9,813(r31)
	PPC_STORE_U8(ctx.r31.u32 + 813, ctx.r9.u8);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r5,43
	ctx.r5.s64 = 43;
	// stb r11,814(r31)
	PPC_STORE_U8(ctx.r31.u32 + 814, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r10,815(r31)
	PPC_STORE_U8(ctx.r31.u32 + 815, ctx.r10.u8);
	// addi r3,r31,817
	ctx.r3.s64 = ctx.r31.s64 + 817;
	// stb r9,816(r31)
	PPC_STORE_U8(ctx.r31.u32 + 816, ctx.r9.u8);
	// bl 0x82a4efb0
	ctx.lr = 0x82F53940;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// li r9,129
	ctx.r9.s64 = 129;
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// li r10,21
	ctx.r10.s64 = 21;
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// li r11,33
	ctx.r11.s64 = 33;
	// stw r9,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r9.u32);
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r11,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,81
	ctx.r10.s64 = 81;
	// stw r9,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r9.u32);
	// stw r11,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r11.u32);
	// li r9,65
	ctx.r9.s64 = 65;
	// stw r10,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r10.u32);
	// li r11,113
	ctx.r11.s64 = 113;
	// li r10,29
	ctx.r10.s64 = 29;
	// stw r9,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r9.u32);
	// stw r11,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r10.u32);
	// li r11,97
	ctx.r11.s64 = 97;
	// li r10,49
	ctx.r10.s64 = 49;
	// stw r9,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r9.u32);
	// stw r11,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r11.u32);
	// li r9,157
	ctx.r9.s64 = 157;
	// stw r10,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r10.u32);
	// li r11,221
	ctx.r11.s64 = 221;
	// li r10,25
	ctx.r10.s64 = 25;
	// stw r9,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r9.u32);
	// li r5,172
	ctx.r5.s64 = 172;
	// stw r11,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r10.u32);
	// addi r3,r31,944
	ctx.r3.s64 = ctx.r31.s64 + 944;
	// bl 0x82a4efb0
	ctx.lr = 0x82F539F8;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F53A10"))) PPC_WEAK_FUNC(sub_82F53A10);
PPC_FUNC_IMPL(__imp__sub_82F53A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d0
	ctx.lr = 0x82F53A18;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,144
	ctx.r5.s64 = 144;
	// addi r31,r10,-8312
	ctx.r31.s64 = ctx.r10.s64 + -8312;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16408);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F53A40;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// addi r9,r9,-2488
	ctx.r9.s64 = ctx.r9.s64 + -2488;
	// addi r11,r8,-2480
	ctx.r11.s64 = ctx.r8.s64 + -2480;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// addi r10,r7,-2468
	ctx.r10.s64 = ctx.r7.s64 + -2468;
	// addi r9,r6,-2456
	ctx.r9.s64 = ctx.r6.s64 + -2456;
	// addi r11,r5,-2444
	ctx.r11.s64 = ctx.r5.s64 + -2444;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// lis r30,-32234
	ctx.r30.s64 = -2112487424;
	// addi r10,r4,-2432
	ctx.r10.s64 = ctx.r4.s64 + -2432;
	// addi r9,r3,-2416
	ctx.r9.s64 = ctx.r3.s64 + -2416;
	// addi r11,r30,-2408
	ctx.r11.s64 = ctx.r30.s64 + -2408;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// lis r29,-32234
	ctx.r29.s64 = -2112487424;
	// stw r9,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// lis r28,-32234
	ctx.r28.s64 = -2112487424;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// addi r10,r29,-2400
	ctx.r10.s64 = ctx.r29.s64 + -2400;
	// addi r9,r28,-2380
	ctx.r9.s64 = ctx.r28.s64 + -2380;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// stw r10,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// lis r27,-32234
	ctx.r27.s64 = -2112487424;
	// lis r26,-32234
	ctx.r26.s64 = -2112487424;
	// lis r25,-32234
	ctx.r25.s64 = -2112487424;
	// lis r24,-32234
	ctx.r24.s64 = -2112487424;
	// lis r23,-32234
	ctx.r23.s64 = -2112487424;
	// lis r22,-32234
	ctx.r22.s64 = -2112487424;
	// lis r21,-32234
	ctx.r21.s64 = -2112487424;
	// addi r11,r11,-2368
	ctx.r11.s64 = ctx.r11.s64 + -2368;
	// addi r30,r5,-2268
	ctx.r30.s64 = ctx.r5.s64 + -2268;
	// addi r29,r4,-2252
	ctx.r29.s64 = ctx.r4.s64 + -2252;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// addi r28,r3,-2236
	ctx.r28.s64 = ctx.r3.s64 + -2236;
	// addi r10,r10,-2348
	ctx.r10.s64 = ctx.r10.s64 + -2348;
	// addi r9,r9,-2340
	ctx.r9.s64 = ctx.r9.s64 + -2340;
	// addi r8,r8,-2324
	ctx.r8.s64 = ctx.r8.s64 + -2324;
	// addi r7,r7,-2300
	ctx.r7.s64 = ctx.r7.s64 + -2300;
	// addi r6,r6,-2280
	ctx.r6.s64 = ctx.r6.s64 + -2280;
	// addi r27,r27,-2208
	ctx.r27.s64 = ctx.r27.s64 + -2208;
	// addi r26,r26,-2196
	ctx.r26.s64 = ctx.r26.s64 + -2196;
	// addi r25,r25,-2176
	ctx.r25.s64 = ctx.r25.s64 + -2176;
	// addi r24,r24,-2164
	ctx.r24.s64 = ctx.r24.s64 + -2164;
	// addi r23,r23,-2152
	ctx.r23.s64 = ctx.r23.s64 + -2152;
	// addi r22,r22,-2144
	ctx.r22.s64 = ctx.r22.s64 + -2144;
	// addi r21,r21,-2132
	ctx.r21.s64 = ctx.r21.s64 + -2132;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,396
	ctx.r3.s64 = ctx.r31.s64 + 396;
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// stw r9,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r9.u32);
	// stw r8,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r8.u32);
	// stw r7,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r7.u32);
	// stw r6,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r6.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// stw r29,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r29.u32);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r27,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r27.u32);
	// stw r26,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r26.u32);
	// stw r25,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r25.u32);
	// stw r24,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r24.u32);
	// stw r23,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r23.u32);
	// stw r22,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r22.u32);
	// stw r21,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r21.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F53BA0;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lwz r11,16644(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16644);
	// lis r5,-31948
	ctx.r5.s64 = -2093744128;
	// lwz r10,16764(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16764);
	// lis r4,-31948
	ctx.r4.s64 = -2093744128;
	// lwz r9,16612(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16612);
	// lis r3,-31948
	ctx.r3.s64 = -2093744128;
	// lwz r8,16336(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16336);
	// lis r30,-31948
	ctx.r30.s64 = -2093744128;
	// lwz r7,16872(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16872);
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// lwz r6,15944(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 15944);
	// lis r28,-31948
	ctx.r28.s64 = -2093744128;
	// lwz r5,16780(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16780);
	// lis r27,-31948
	ctx.r27.s64 = -2093744128;
	// lwz r4,17108(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 17108);
	// lis r26,-31948
	ctx.r26.s64 = -2093744128;
	// lwz r3,15964(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15964);
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
	// lwz r30,16884(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16884);
	// lwz r29,16052(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16052);
	// lis r24,-31948
	ctx.r24.s64 = -2093744128;
	// lwz r28,16204(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16204);
	// lis r23,-31948
	ctx.r23.s64 = -2093744128;
	// lwz r27,16156(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16156);
	// lis r22,-31948
	ctx.r22.s64 = -2093744128;
	// lwz r26,16648(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16648);
	// lis r21,-31948
	ctx.r21.s64 = -2093744128;
	// lwz r25,16948(r25)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16948);
	// lis r20,-31948
	ctx.r20.s64 = -2093744128;
	// lis r19,-31948
	ctx.r19.s64 = -2093744128;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// lis r18,-31948
	ctx.r18.s64 = -2093744128;
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// lis r17,-31948
	ctx.r17.s64 = -2093744128;
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// lis r16,-31948
	ctx.r16.s64 = -2093744128;
	// stw r7,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r7.u32);
	// lis r15,-31948
	ctx.r15.s64 = -2093744128;
	// stw r6,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r6.u32);
	// lis r14,-31948
	ctx.r14.s64 = -2093744128;
	// stw r5,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r5.u32);
	// li r5,144
	ctx.r5.s64 = 144;
	// stw r4,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r3.u32);
	// addi r3,r31,652
	ctx.r3.s64 = ctx.r31.s64 + 652;
	// lwz r11,16536(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16536);
	// lwz r10,16344(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16344);
	// lwz r9,16356(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16356);
	// lwz r8,16028(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16028);
	// lwz r7,16880(r20)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16880);
	// lwz r6,16856(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16856);
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// stw r29,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r29.u32);
	// stw r28,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r28.u32);
	// stw r27,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r27.u32);
	// stw r26,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r26.u32);
	// stw r25,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r25.u32);
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
	// lwz r30,16484(r18)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16484);
	// lis r24,-31948
	ctx.r24.s64 = -2093744128;
	// lwz r29,16380(r17)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16380);
	// lwz r28,16480(r16)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16480);
	// lwz r27,16528(r15)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r15.u32 + 16528);
	// lwz r26,16200(r14)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r14.u32 + 16200);
	// lwz r25,16180(r25)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16180);
	// lwz r24,16940(r24)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16940);
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
	// stw r10,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r10.u32);
	// stw r9,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r9.u32);
	// stw r8,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r8.u32);
	// stw r7,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r7.u32);
	// stw r6,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r6.u32);
	// stw r30,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r30.u32);
	// stw r29,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r29.u32);
	// stw r28,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r28.u32);
	// stw r27,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r27.u32);
	// stw r26,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r26.u32);
	// stw r25,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r25.u32);
	// stw r24,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r24.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F53D00;
	sub_82A4EFB0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r11,21
	ctx.r11.s64 = 21;
	// li r9,11
	ctx.r9.s64 = 11;
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// li r10,22
	ctx.r10.s64 = 22;
	// li r9,12
	ctx.r9.s64 = 12;
	// stb r11,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r11.u8);
	// stb r10,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r10.u8);
	// li r11,23
	ctx.r11.s64 = 23;
	// stb r9,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r9.u8);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,13
	ctx.r9.s64 = 13;
	// stb r11,805(r31)
	PPC_STORE_U8(ctx.r31.u32 + 805, ctx.r11.u8);
	// stb r10,803(r31)
	PPC_STORE_U8(ctx.r31.u32 + 803, ctx.r10.u8);
	// addi r11,r31,824
	ctx.r11.s64 = ctx.r31.s64 + 824;
	// stb r9,804(r31)
	PPC_STORE_U8(ctx.r31.u32 + 804, ctx.r9.u8);
	// li r11,14
	ctx.r11.s64 = 14;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,16
	ctx.r9.s64 = 16;
	// stb r11,806(r31)
	PPC_STORE_U8(ctx.r31.u32 + 806, ctx.r11.u8);
	// stb r10,807(r31)
	PPC_STORE_U8(ctx.r31.u32 + 807, ctx.r10.u8);
	// li r11,24
	ctx.r11.s64 = 24;
	// stb r9,808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 808, ctx.r9.u8);
	// li r10,25
	ctx.r10.s64 = 25;
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r11,809(r31)
	PPC_STORE_U8(ctx.r31.u32 + 809, ctx.r11.u8);
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r10,810(r31)
	PPC_STORE_U8(ctx.r31.u32 + 810, ctx.r10.u8);
	// stb r9,811(r31)
	PPC_STORE_U8(ctx.r31.u32 + 811, ctx.r9.u8);
	// li r11,17
	ctx.r11.s64 = 17;
	// li r10,5
	ctx.r10.s64 = 5;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stb r11,812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 812, ctx.r11.u8);
	// stb r10,813(r31)
	PPC_STORE_U8(ctx.r31.u32 + 813, ctx.r10.u8);
	// li r11,26
	ctx.r11.s64 = 26;
	// stb r9,814(r31)
	PPC_STORE_U8(ctx.r31.u32 + 814, ctx.r9.u8);
	// li r10,18
	ctx.r10.s64 = 18;
	// li r9,27
	ctx.r9.s64 = 27;
	// stb r11,815(r31)
	PPC_STORE_U8(ctx.r31.u32 + 815, ctx.r11.u8);
	// stb r10,816(r31)
	PPC_STORE_U8(ctx.r31.u32 + 816, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r9,817(r31)
	PPC_STORE_U8(ctx.r31.u32 + 817, ctx.r9.u8);
	// li r10,19
	ctx.r10.s64 = 19;
	// li r9,20
	ctx.r9.s64 = 20;
	// stb r11,818(r31)
	PPC_STORE_U8(ctx.r31.u32 + 818, ctx.r11.u8);
	// stb r10,819(r31)
	PPC_STORE_U8(ctx.r31.u32 + 819, ctx.r10.u8);
	// li r11,7
	ctx.r11.s64 = 7;
	// stb r9,820(r31)
	PPC_STORE_U8(ctx.r31.u32 + 820, ctx.r9.u8);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,8
	ctx.r9.s64 = 8;
	// stb r11,821(r31)
	PPC_STORE_U8(ctx.r31.u32 + 821, ctx.r11.u8);
	// stb r10,822(r31)
	PPC_STORE_U8(ctx.r31.u32 + 822, ctx.r10.u8);
	// stb r9,823(r31)
	PPC_STORE_U8(ctx.r31.u32 + 823, ctx.r9.u8);
	// std r30,824(r31)
	PPC_STORE_U64(ctx.r31.u32 + 824, ctx.r30.u64);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r30,832(r31)
	PPC_STORE_U64(ctx.r31.u32 + 832, ctx.r30.u64);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// std r30,840(r31)
	PPC_STORE_U64(ctx.r31.u32 + 840, ctx.r30.u64);
	// li r9,157
	ctx.r9.s64 = 157;
	// std r30,848(r31)
	PPC_STORE_U64(ctx.r31.u32 + 848, ctx.r30.u64);
	// stw r30,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r30.u32);
	// li r8,37
	ctx.r8.s64 = 37;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r11,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r10,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r10.u32);
	// li r10,109
	ctx.r10.s64 = 109;
	// stw r9,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r9.u32);
	// li r9,93
	ctx.r9.s64 = 93;
	// stw r11,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r10.u32);
	// li r10,125
	ctx.r10.s64 = 125;
	// stw r9,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r9.u32);
	// li r9,185
	ctx.r9.s64 = 185;
	// stw r11,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r11.u32);
	// li r11,77
	ctx.r11.s64 = 77;
	// stw r10,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r10.u32);
	// li r7,49
	ctx.r7.s64 = 49;
	// stw r11,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r11.u32);
	// li r10,249
	ctx.r10.s64 = 249;
	// stw r9,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r9.u32);
	// li r11,53
	ctx.r11.s64 = 53;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r8,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r8.u32);
	// stw r7,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r7.u32);
	// li r8,9
	ctx.r8.s64 = 9;
	// stw r10,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r10.u32);
	// li r7,61
	ctx.r7.s64 = 61;
	// stw r11,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r11.u32);
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r9,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r9.u32);
	// li r11,33
	ctx.r11.s64 = 33;
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r8,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r8.u32);
	// stw r7,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r7.u32);
	// li r8,141
	ctx.r8.s64 = 141;
	// stw r10,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r10.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r11,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r11.u32);
	// li r10,45
	ctx.r10.s64 = 45;
	// stw r9,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r9.u32);
	// li r11,41
	ctx.r11.s64 = 41;
	// li r9,25
	ctx.r9.s64 = 25;
	// stw r8,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r8.u32);
	// li r5,144
	ctx.r5.s64 = 144;
	// stw r7,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r10.u32);
	// addi r3,r31,972
	ctx.r3.s64 = ctx.r31.s64 + 972;
	// stw r11,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r11.u32);
	// stw r9,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r9.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F53EEC;
	sub_82A4EFB0(ctx, base);
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r30,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r30.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F53F00"))) PPC_WEAK_FUNC(sub_82F53F00);
PPC_FUNC_IMPL(__imp__sub_82F53F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d4
	ctx.lr = 0x82F53F08;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,140
	ctx.r5.s64 = 140;
	// addi r31,r10,29768
	ctx.r31.s64 = ctx.r10.s64 + 29768;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16620(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16620);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F53F30;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// addi r9,r9,-2488
	ctx.r9.s64 = ctx.r9.s64 + -2488;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// addi r11,r8,-2480
	ctx.r11.s64 = ctx.r8.s64 + -2480;
	// addi r10,r7,-2468
	ctx.r10.s64 = ctx.r7.s64 + -2468;
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// addi r9,r6,-2456
	ctx.r9.s64 = ctx.r6.s64 + -2456;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// addi r11,r5,-2444
	ctx.r11.s64 = ctx.r5.s64 + -2444;
	// addi r10,r4,-2432
	ctx.r10.s64 = ctx.r4.s64 + -2432;
	// lis r30,-32234
	ctx.r30.s64 = -2112487424;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// addi r9,r3,-2416
	ctx.r9.s64 = ctx.r3.s64 + -2416;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// addi r11,r30,-2408
	ctx.r11.s64 = ctx.r30.s64 + -2408;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// stw r9,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// addi r11,r10,-2400
	ctx.r11.s64 = ctx.r10.s64 + -2400;
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// addi r10,r9,-2380
	ctx.r10.s64 = ctx.r9.s64 + -2380;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// addi r9,r8,-2368
	ctx.r9.s64 = ctx.r8.s64 + -2368;
	// lis r28,-32234
	ctx.r28.s64 = -2112487424;
	// lis r27,-32234
	ctx.r27.s64 = -2112487424;
	// lis r26,-32234
	ctx.r26.s64 = -2112487424;
	// lis r25,-32234
	ctx.r25.s64 = -2112487424;
	// lis r24,-32234
	ctx.r24.s64 = -2112487424;
	// lis r23,-32234
	ctx.r23.s64 = -2112487424;
	// lis r22,-32234
	ctx.r22.s64 = -2112487424;
	// lis r21,-32234
	ctx.r21.s64 = -2112487424;
	// lis r20,-32234
	ctx.r20.s64 = -2112487424;
	// lis r19,-32234
	ctx.r19.s64 = -2112487424;
	// lis r18,-32234
	ctx.r18.s64 = -2112487424;
	// addi r8,r7,-2348
	ctx.r8.s64 = ctx.r7.s64 + -2348;
	// addi r7,r6,-2340
	ctx.r7.s64 = ctx.r6.s64 + -2340;
	// addi r6,r5,-2324
	ctx.r6.s64 = ctx.r5.s64 + -2324;
	// addi r30,r4,-2300
	ctx.r30.s64 = ctx.r4.s64 + -2300;
	// addi r29,r3,-2280
	ctx.r29.s64 = ctx.r3.s64 + -2280;
	// addi r28,r28,-2268
	ctx.r28.s64 = ctx.r28.s64 + -2268;
	// addi r27,r27,-2252
	ctx.r27.s64 = ctx.r27.s64 + -2252;
	// addi r26,r26,-2236
	ctx.r26.s64 = ctx.r26.s64 + -2236;
	// addi r25,r25,-2208
	ctx.r25.s64 = ctx.r25.s64 + -2208;
	// addi r24,r24,-2196
	ctx.r24.s64 = ctx.r24.s64 + -2196;
	// addi r23,r23,-2176
	ctx.r23.s64 = ctx.r23.s64 + -2176;
	// addi r22,r22,-2164
	ctx.r22.s64 = ctx.r22.s64 + -2164;
	// addi r21,r21,-2152
	ctx.r21.s64 = ctx.r21.s64 + -2152;
	// addi r20,r20,-2144
	ctx.r20.s64 = ctx.r20.s64 + -2144;
	// addi r19,r19,-2132
	ctx.r19.s64 = ctx.r19.s64 + -2132;
	// addi r18,r18,-2124
	ctx.r18.s64 = ctx.r18.s64 + -2124;
	// li r5,140
	ctx.r5.s64 = 140;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// stw r9,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r9.u32);
	// stw r8,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r8.u32);
	// stw r7,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r7.u32);
	// stw r6,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r6.u32);
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// stw r29,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r29.u32);
	// stw r28,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r28.u32);
	// stw r27,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r27.u32);
	// stw r26,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r26.u32);
	// stw r25,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r25.u32);
	// stw r24,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r24.u32);
	// stw r23,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r23.u32);
	// stw r22,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r22.u32);
	// stw r21,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r21.u32);
	// stw r20,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r20.u32);
	// stw r19,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r19.u32);
	// stw r18,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r18.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F5409C;
	sub_82A4EFB0(ctx, base);
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lis r30,-31948
	ctx.r30.s64 = -2093744128;
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// lis r28,-31948
	ctx.r28.s64 = -2093744128;
	// lis r27,-31948
	ctx.r27.s64 = -2093744128;
	// lis r26,-31948
	ctx.r26.s64 = -2093744128;
	// lwz r5,15944(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 15944);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r6,16872(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16872);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lwz r30,15964(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15964);
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lwz r29,16884(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16884);
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lwz r28,16052(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16052);
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lwz r27,16204(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16204);
	// lis r4,-31948
	ctx.r4.s64 = -2093744128;
	// lwz r11,16644(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16644);
	// lis r3,-31948
	ctx.r3.s64 = -2093744128;
	// lwz r10,16764(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16764);
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
	// lwz r9,17032(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17032);
	// lwz r8,16612(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16612);
	// lis r24,-31948
	ctx.r24.s64 = -2093744128;
	// lwz r7,16336(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16336);
	// lis r23,-31948
	ctx.r23.s64 = -2093744128;
	// lwz r4,16780(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16780);
	// lis r22,-31948
	ctx.r22.s64 = -2093744128;
	// lwz r3,17108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17108);
	// lis r21,-31948
	ctx.r21.s64 = -2093744128;
	// lwz r26,16156(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16156);
	// lis r20,-31948
	ctx.r20.s64 = -2093744128;
	// lis r19,-31948
	ctx.r19.s64 = -2093744128;
	// lwz r25,16648(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16648);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// lis r18,-31948
	ctx.r18.s64 = -2093744128;
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// lis r17,-31948
	ctx.r17.s64 = -2093744128;
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// lis r16,-31948
	ctx.r16.s64 = -2093744128;
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// lis r15,-31948
	ctx.r15.s64 = -2093744128;
	// stw r7,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r7.u32);
	// lis r24,-31948
	ctx.r24.s64 = -2093744128;
	// stw r5,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r5.u32);
	// li r5,140
	ctx.r5.s64 = 140;
	// stw r4,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r3.u32);
	// addi r3,r31,656
	ctx.r3.s64 = ctx.r31.s64 + 656;
	// lwz r11,16948(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16948);
	// lwz r10,16536(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16536);
	// lwz r9,16344(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16344);
	// lwz r8,16356(r20)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16356);
	// lwz r7,16028(r19)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16028);
	// stw r6,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r6.u32);
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// stw r29,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r29.u32);
	// stw r28,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r28.u32);
	// stw r27,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r27.u32);
	// stw r26,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r26.u32);
	// lis r23,-31948
	ctx.r23.s64 = -2093744128;
	// lwz r27,16480(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16480);
	// lis r22,-31948
	ctx.r22.s64 = -2093744128;
	// lwz r6,16880(r18)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16880);
	// lis r26,-31948
	ctx.r26.s64 = -2093744128;
	// lwz r30,16856(r17)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16856);
	// lis r21,-31948
	ctx.r21.s64 = -2093744128;
	// lwz r29,16484(r16)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16484);
	// lwz r28,16380(r15)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r15.u32 + 16380);
	// lwz r24,16200(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16200);
	// lwz r23,16180(r22)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16180);
	// lwz r26,16528(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16528);
	// lwz r22,16940(r21)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16940);
	// stw r25,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r25.u32);
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
	// stw r10,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r10.u32);
	// stw r9,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r9.u32);
	// stw r8,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r8.u32);
	// stw r7,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r7.u32);
	// stw r6,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r6.u32);
	// stw r30,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r30.u32);
	// stw r29,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r29.u32);
	// stw r28,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r28.u32);
	// stw r27,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r27.u32);
	// stw r26,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r26.u32);
	// stw r24,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r24.u32);
	// stw r23,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r23.u32);
	// stw r22,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r22.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F54208;
	sub_82A4EFB0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r9,28
	ctx.r9.s64 = 28;
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// li r11,11
	ctx.r11.s64 = 11;
	// li r10,21
	ctx.r10.s64 = 21;
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// li r9,22
	ctx.r9.s64 = 22;
	// stb r10,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r10.u8);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r9,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r9.u8);
	// stb r11,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r11.u8);
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r10,803(r31)
	PPC_STORE_U8(ctx.r31.u32 + 803, ctx.r10.u8);
	// li r10,13
	ctx.r10.s64 = 13;
	// li r9,23
	ctx.r9.s64 = 23;
	// stb r11,804(r31)
	PPC_STORE_U8(ctx.r31.u32 + 804, ctx.r11.u8);
	// stb r10,805(r31)
	PPC_STORE_U8(ctx.r31.u32 + 805, ctx.r10.u8);
	// li r11,14
	ctx.r11.s64 = 14;
	// stb r9,806(r31)
	PPC_STORE_U8(ctx.r31.u32 + 806, ctx.r9.u8);
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,16
	ctx.r9.s64 = 16;
	// stb r11,807(r31)
	PPC_STORE_U8(ctx.r31.u32 + 807, ctx.r11.u8);
	// stb r10,808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 808, ctx.r10.u8);
	// li r11,24
	ctx.r11.s64 = 24;
	// stb r9,809(r31)
	PPC_STORE_U8(ctx.r31.u32 + 809, ctx.r9.u8);
	// li r10,25
	ctx.r10.s64 = 25;
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r11,810(r31)
	PPC_STORE_U8(ctx.r31.u32 + 810, ctx.r11.u8);
	// stb r10,811(r31)
	PPC_STORE_U8(ctx.r31.u32 + 811, ctx.r10.u8);
	// li r11,17
	ctx.r11.s64 = 17;
	// stb r9,812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 812, ctx.r9.u8);
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,813(r31)
	PPC_STORE_U8(ctx.r31.u32 + 813, ctx.r11.u8);
	// stb r10,814(r31)
	PPC_STORE_U8(ctx.r31.u32 + 814, ctx.r10.u8);
	// li r11,26
	ctx.r11.s64 = 26;
	// stb r9,815(r31)
	PPC_STORE_U8(ctx.r31.u32 + 815, ctx.r9.u8);
	// li r10,18
	ctx.r10.s64 = 18;
	// li r9,27
	ctx.r9.s64 = 27;
	// stb r11,816(r31)
	PPC_STORE_U8(ctx.r31.u32 + 816, ctx.r11.u8);
	// stb r10,817(r31)
	PPC_STORE_U8(ctx.r31.u32 + 817, ctx.r10.u8);
	// li r5,35
	ctx.r5.s64 = 35;
	// stb r9,818(r31)
	PPC_STORE_U8(ctx.r31.u32 + 818, ctx.r9.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,825
	ctx.r3.s64 = ctx.r31.s64 + 825;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,19
	ctx.r10.s64 = 19;
	// li r9,20
	ctx.r9.s64 = 20;
	// stb r11,819(r31)
	PPC_STORE_U8(ctx.r31.u32 + 819, ctx.r11.u8);
	// li r11,7
	ctx.r11.s64 = 7;
	// stb r10,820(r31)
	PPC_STORE_U8(ctx.r31.u32 + 820, ctx.r10.u8);
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r9,821(r31)
	PPC_STORE_U8(ctx.r31.u32 + 821, ctx.r9.u8);
	// li r9,8
	ctx.r9.s64 = 8;
	// stb r11,822(r31)
	PPC_STORE_U8(ctx.r31.u32 + 822, ctx.r11.u8);
	// stb r10,823(r31)
	PPC_STORE_U8(ctx.r31.u32 + 823, ctx.r10.u8);
	// stb r9,824(r31)
	PPC_STORE_U8(ctx.r31.u32 + 824, ctx.r9.u8);
	// bl 0x82a4efb0
	ctx.lr = 0x82F54300;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r9,161
	ctx.r9.s64 = 161;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// li r11,41
	ctx.r11.s64 = 41;
	// li r10,53
	ctx.r10.s64 = 53;
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// li r11,17
	ctx.r11.s64 = 17;
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r9,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r9.u32);
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// li r9,13
	ctx.r9.s64 = 13;
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// li r11,65
	ctx.r11.s64 = 65;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r9.u32);
	// stw r11,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r11.u32);
	// li r9,113
	ctx.r9.s64 = 113;
	// stw r10,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r10.u32);
	// li r11,97
	ctx.r11.s64 = 97;
	// li r10,145
	ctx.r10.s64 = 145;
	// stw r9,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r9.u32);
	// stw r11,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r11.u32);
	// li r9,61
	ctx.r9.s64 = 61;
	// stw r10,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r10.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,129
	ctx.r10.s64 = 129;
	// stw r9,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r9.u32);
	// stw r11,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r11.u32);
	// li r9,81
	ctx.r9.s64 = 81;
	// stw r10,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r10.u32);
	// li r11,189
	ctx.r11.s64 = 189;
	// li r10,253
	ctx.r10.s64 = 253;
	// stw r9,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r9.u32);
	// stw r11,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r11.u32);
	// li r9,57
	ctx.r9.s64 = 57;
	// stw r10,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r10.u32);
	// li r11,33
	ctx.r11.s64 = 33;
	// li r10,21
	ctx.r10.s64 = 21;
	// stw r9,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r9.u32);
	// stw r11,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r11.u32);
	// li r9,37
	ctx.r9.s64 = 37;
	// stw r10,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r10.u32);
	// li r11,25
	ctx.r11.s64 = 25;
	// li r10,49
	ctx.r10.s64 = 49;
	// stw r9,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r9.u32);
	// stw r11,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r11.u32);
	// li r9,45
	ctx.r9.s64 = 45;
	// stw r10,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r10.u32);
	// li r11,29
	ctx.r11.s64 = 29;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r9,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r9.u32);
	// li r5,140
	ctx.r5.s64 = 140;
	// stw r11,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r10.u32);
	// addi r3,r31,976
	ctx.r3.s64 = ctx.r31.s64 + 976;
	// bl 0x82a4efb0
	ctx.lr = 0x82F543F8;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea24
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F54410"))) PPC_WEAK_FUNC(sub_82F54410);
PPC_FUNC_IMPL(__imp__sub_82F54410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d4
	ctx.lr = 0x82F54418;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,140
	ctx.r5.s64 = 140;
	// addi r31,r10,-1592
	ctx.r31.s64 = ctx.r10.s64 + -1592;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16048);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F54440;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// addi r9,r9,-2488
	ctx.r9.s64 = ctx.r9.s64 + -2488;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// addi r11,r8,-2480
	ctx.r11.s64 = ctx.r8.s64 + -2480;
	// addi r10,r7,-2468
	ctx.r10.s64 = ctx.r7.s64 + -2468;
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// addi r9,r6,-2456
	ctx.r9.s64 = ctx.r6.s64 + -2456;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// addi r11,r5,-2444
	ctx.r11.s64 = ctx.r5.s64 + -2444;
	// addi r10,r4,-2432
	ctx.r10.s64 = ctx.r4.s64 + -2432;
	// lis r30,-32234
	ctx.r30.s64 = -2112487424;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// addi r9,r3,-2416
	ctx.r9.s64 = ctx.r3.s64 + -2416;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// addi r11,r30,-2408
	ctx.r11.s64 = ctx.r30.s64 + -2408;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// stw r9,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// addi r11,r10,-2400
	ctx.r11.s64 = ctx.r10.s64 + -2400;
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// addi r10,r9,-2380
	ctx.r10.s64 = ctx.r9.s64 + -2380;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// addi r9,r8,-2368
	ctx.r9.s64 = ctx.r8.s64 + -2368;
	// lis r28,-32234
	ctx.r28.s64 = -2112487424;
	// lis r27,-32234
	ctx.r27.s64 = -2112487424;
	// lis r26,-32234
	ctx.r26.s64 = -2112487424;
	// lis r25,-32234
	ctx.r25.s64 = -2112487424;
	// lis r24,-32234
	ctx.r24.s64 = -2112487424;
	// lis r23,-32234
	ctx.r23.s64 = -2112487424;
	// lis r22,-32234
	ctx.r22.s64 = -2112487424;
	// lis r21,-32234
	ctx.r21.s64 = -2112487424;
	// lis r20,-32234
	ctx.r20.s64 = -2112487424;
	// lis r19,-32234
	ctx.r19.s64 = -2112487424;
	// lis r18,-32234
	ctx.r18.s64 = -2112487424;
	// addi r8,r7,-2348
	ctx.r8.s64 = ctx.r7.s64 + -2348;
	// addi r7,r6,-2340
	ctx.r7.s64 = ctx.r6.s64 + -2340;
	// addi r6,r5,-2324
	ctx.r6.s64 = ctx.r5.s64 + -2324;
	// addi r30,r4,-2300
	ctx.r30.s64 = ctx.r4.s64 + -2300;
	// addi r29,r3,-2280
	ctx.r29.s64 = ctx.r3.s64 + -2280;
	// addi r28,r28,-2268
	ctx.r28.s64 = ctx.r28.s64 + -2268;
	// addi r27,r27,-2252
	ctx.r27.s64 = ctx.r27.s64 + -2252;
	// addi r26,r26,-2236
	ctx.r26.s64 = ctx.r26.s64 + -2236;
	// addi r25,r25,-2208
	ctx.r25.s64 = ctx.r25.s64 + -2208;
	// addi r24,r24,-2196
	ctx.r24.s64 = ctx.r24.s64 + -2196;
	// addi r23,r23,-2176
	ctx.r23.s64 = ctx.r23.s64 + -2176;
	// addi r22,r22,-2164
	ctx.r22.s64 = ctx.r22.s64 + -2164;
	// addi r21,r21,-2152
	ctx.r21.s64 = ctx.r21.s64 + -2152;
	// addi r20,r20,-2144
	ctx.r20.s64 = ctx.r20.s64 + -2144;
	// addi r19,r19,-2132
	ctx.r19.s64 = ctx.r19.s64 + -2132;
	// addi r18,r18,-2108
	ctx.r18.s64 = ctx.r18.s64 + -2108;
	// li r5,140
	ctx.r5.s64 = 140;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// stw r9,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r9.u32);
	// stw r8,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r8.u32);
	// stw r7,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r7.u32);
	// stw r6,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r6.u32);
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// stw r29,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r29.u32);
	// stw r28,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r28.u32);
	// stw r27,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r27.u32);
	// stw r26,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r26.u32);
	// stw r25,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r25.u32);
	// stw r24,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r24.u32);
	// stw r23,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r23.u32);
	// stw r22,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r22.u32);
	// stw r21,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r21.u32);
	// stw r20,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r20.u32);
	// stw r19,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r19.u32);
	// stw r18,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r18.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F545AC;
	sub_82A4EFB0(ctx, base);
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lis r30,-31948
	ctx.r30.s64 = -2093744128;
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// lis r28,-31948
	ctx.r28.s64 = -2093744128;
	// lis r27,-31948
	ctx.r27.s64 = -2093744128;
	// lis r26,-31948
	ctx.r26.s64 = -2093744128;
	// lwz r5,16780(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16780);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r6,15944(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15944);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lwz r30,16884(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16884);
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lwz r29,16052(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16052);
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lwz r28,16204(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16204);
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lwz r27,16156(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16156);
	// lis r4,-31948
	ctx.r4.s64 = -2093744128;
	// lwz r11,16644(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16644);
	// lis r3,-31948
	ctx.r3.s64 = -2093744128;
	// lwz r10,16764(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16764);
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
	// lwz r9,16612(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16612);
	// lwz r8,16336(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16336);
	// lis r24,-31948
	ctx.r24.s64 = -2093744128;
	// lwz r7,16872(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16872);
	// lis r23,-31948
	ctx.r23.s64 = -2093744128;
	// lwz r4,17108(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 17108);
	// lis r22,-31948
	ctx.r22.s64 = -2093744128;
	// lwz r3,15964(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15964);
	// lis r21,-31948
	ctx.r21.s64 = -2093744128;
	// lwz r26,16648(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16648);
	// lis r20,-31948
	ctx.r20.s64 = -2093744128;
	// lis r19,-31948
	ctx.r19.s64 = -2093744128;
	// lwz r25,16948(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16948);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// lis r18,-31948
	ctx.r18.s64 = -2093744128;
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// lis r17,-31948
	ctx.r17.s64 = -2093744128;
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// lis r16,-31948
	ctx.r16.s64 = -2093744128;
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// lis r15,-31948
	ctx.r15.s64 = -2093744128;
	// stw r7,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r7.u32);
	// lis r24,-31948
	ctx.r24.s64 = -2093744128;
	// stw r5,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r5.u32);
	// li r5,140
	ctx.r5.s64 = 140;
	// stw r4,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r3.u32);
	// addi r3,r31,656
	ctx.r3.s64 = ctx.r31.s64 + 656;
	// lwz r11,16536(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16536);
	// lwz r10,16344(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16344);
	// lwz r9,16356(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16356);
	// lwz r8,16288(r20)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16288);
	// lwz r7,16028(r19)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16028);
	// stw r6,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r6.u32);
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// stw r29,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r29.u32);
	// stw r28,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r28.u32);
	// stw r27,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r27.u32);
	// stw r26,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r26.u32);
	// lis r23,-31948
	ctx.r23.s64 = -2093744128;
	// lwz r27,16480(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16480);
	// lis r22,-31948
	ctx.r22.s64 = -2093744128;
	// lwz r6,16880(r18)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16880);
	// lis r26,-31948
	ctx.r26.s64 = -2093744128;
	// lwz r30,16856(r17)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16856);
	// lis r21,-31948
	ctx.r21.s64 = -2093744128;
	// lwz r29,16484(r16)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16484);
	// lwz r28,16380(r15)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r15.u32 + 16380);
	// lwz r24,16200(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16200);
	// lwz r23,16180(r22)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16180);
	// lwz r26,16528(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16528);
	// lwz r22,16940(r21)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16940);
	// stw r25,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r25.u32);
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
	// stw r10,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r10.u32);
	// stw r9,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r9.u32);
	// stw r8,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r8.u32);
	// stw r7,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r7.u32);
	// stw r6,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r6.u32);
	// stw r30,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r30.u32);
	// stw r29,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r29.u32);
	// stw r28,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r28.u32);
	// stw r27,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r27.u32);
	// stw r26,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r26.u32);
	// stw r24,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r24.u32);
	// stw r23,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r23.u32);
	// stw r22,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r22.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F54718;
	sub_82A4EFB0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r11,21
	ctx.r11.s64 = 21;
	// li r9,11
	ctx.r9.s64 = 11;
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// li r10,22
	ctx.r10.s64 = 22;
	// stb r11,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r11.u8);
	// li r9,12
	ctx.r9.s64 = 12;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r10,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r10.u8);
	// stb r9,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r9.u8);
	// li r10,13
	ctx.r10.s64 = 13;
	// stb r11,803(r31)
	PPC_STORE_U8(ctx.r31.u32 + 803, ctx.r11.u8);
	// li r9,23
	ctx.r9.s64 = 23;
	// li r11,14
	ctx.r11.s64 = 14;
	// stb r10,804(r31)
	PPC_STORE_U8(ctx.r31.u32 + 804, ctx.r10.u8);
	// stb r9,805(r31)
	PPC_STORE_U8(ctx.r31.u32 + 805, ctx.r9.u8);
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r11,806(r31)
	PPC_STORE_U8(ctx.r31.u32 + 806, ctx.r11.u8);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r11,24
	ctx.r11.s64 = 24;
	// stb r10,807(r31)
	PPC_STORE_U8(ctx.r31.u32 + 807, ctx.r10.u8);
	// stb r9,808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 808, ctx.r9.u8);
	// li r10,25
	ctx.r10.s64 = 25;
	// stb r11,809(r31)
	PPC_STORE_U8(ctx.r31.u32 + 809, ctx.r11.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r11,17
	ctx.r11.s64 = 17;
	// stb r10,810(r31)
	PPC_STORE_U8(ctx.r31.u32 + 810, ctx.r10.u8);
	// stb r9,811(r31)
	PPC_STORE_U8(ctx.r31.u32 + 811, ctx.r9.u8);
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r11,812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 812, ctx.r11.u8);
	// li r9,28
	ctx.r9.s64 = 28;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,813(r31)
	PPC_STORE_U8(ctx.r31.u32 + 813, ctx.r10.u8);
	// stb r9,814(r31)
	PPC_STORE_U8(ctx.r31.u32 + 814, ctx.r9.u8);
	// li r10,26
	ctx.r10.s64 = 26;
	// stb r11,815(r31)
	PPC_STORE_U8(ctx.r31.u32 + 815, ctx.r11.u8);
	// li r9,18
	ctx.r9.s64 = 18;
	// li r11,27
	ctx.r11.s64 = 27;
	// stb r10,816(r31)
	PPC_STORE_U8(ctx.r31.u32 + 816, ctx.r10.u8);
	// stb r9,817(r31)
	PPC_STORE_U8(ctx.r31.u32 + 817, ctx.r9.u8);
	// li r5,35
	ctx.r5.s64 = 35;
	// stb r11,818(r31)
	PPC_STORE_U8(ctx.r31.u32 + 818, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,825
	ctx.r3.s64 = ctx.r31.s64 + 825;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,19
	ctx.r9.s64 = 19;
	// li r11,20
	ctx.r11.s64 = 20;
	// stb r10,819(r31)
	PPC_STORE_U8(ctx.r31.u32 + 819, ctx.r10.u8);
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r9,820(r31)
	PPC_STORE_U8(ctx.r31.u32 + 820, ctx.r9.u8);
	// li r9,6
	ctx.r9.s64 = 6;
	// stb r11,821(r31)
	PPC_STORE_U8(ctx.r31.u32 + 821, ctx.r11.u8);
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r10,822(r31)
	PPC_STORE_U8(ctx.r31.u32 + 822, ctx.r10.u8);
	// stb r9,823(r31)
	PPC_STORE_U8(ctx.r31.u32 + 823, ctx.r9.u8);
	// stb r11,824(r31)
	PPC_STORE_U8(ctx.r31.u32 + 824, ctx.r11.u8);
	// bl 0x82a4efb0
	ctx.lr = 0x82F54810;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r9,161
	ctx.r9.s64 = 161;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// li r11,37
	ctx.r11.s64 = 37;
	// li r10,53
	ctx.r10.s64 = 53;
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// li r11,13
	ctx.r11.s64 = 13;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r9,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r9.u32);
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// li r11,65
	ctx.r11.s64 = 65;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r9.u32);
	// stw r11,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r11.u32);
	// li r9,113
	ctx.r9.s64 = 113;
	// stw r10,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r10.u32);
	// li r11,97
	ctx.r11.s64 = 97;
	// li r10,145
	ctx.r10.s64 = 145;
	// stw r9,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r9.u32);
	// stw r11,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r11.u32);
	// li r9,61
	ctx.r9.s64 = 61;
	// stw r10,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r10.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,129
	ctx.r10.s64 = 129;
	// stw r9,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r9.u32);
	// stw r11,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r11.u32);
	// li r9,81
	ctx.r9.s64 = 81;
	// stw r10,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r10.u32);
	// li r11,189
	ctx.r11.s64 = 189;
	// li r10,253
	ctx.r10.s64 = 253;
	// stw r9,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r9.u32);
	// stw r11,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r11.u32);
	// li r9,57
	ctx.r9.s64 = 57;
	// stw r10,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r10.u32);
	// li r11,29
	ctx.r11.s64 = 29;
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r9,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r9.u32);
	// stw r11,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r11.u32);
	// li r9,33
	ctx.r9.s64 = 33;
	// stw r10,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r10.u32);
	// li r11,21
	ctx.r11.s64 = 21;
	// li r10,49
	ctx.r10.s64 = 49;
	// stw r9,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r9.u32);
	// stw r11,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r11.u32);
	// li r9,41
	ctx.r9.s64 = 41;
	// stw r10,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r10.u32);
	// li r11,25
	ctx.r11.s64 = 25;
	// li r10,45
	ctx.r10.s64 = 45;
	// stw r9,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r9.u32);
	// li r5,140
	ctx.r5.s64 = 140;
	// stw r11,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r10.u32);
	// addi r3,r31,976
	ctx.r3.s64 = ctx.r31.s64 + 976;
	// bl 0x82a4efb0
	ctx.lr = 0x82F54908;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea24
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F54920"))) PPC_WEAK_FUNC(sub_82F54920);
PPC_FUNC_IMPL(__imp__sub_82F54920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9dc
	ctx.lr = 0x82F54928;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,164
	ctx.r5.s64 = 164;
	// addi r31,r10,19688
	ctx.r31.s64 = ctx.r10.s64 + 19688;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16808(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16808);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F54950;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// addi r11,r8,-2480
	ctx.r11.s64 = ctx.r8.s64 + -2480;
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// addi r10,r7,-2468
	ctx.r10.s64 = ctx.r7.s64 + -2468;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// addi r9,r9,-2488
	ctx.r9.s64 = ctx.r9.s64 + -2488;
	// addi r11,r5,-2444
	ctx.r11.s64 = ctx.r5.s64 + -2444;
	// addi r10,r4,-2432
	ctx.r10.s64 = ctx.r4.s64 + -2432;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// lis r30,-32234
	ctx.r30.s64 = -2112487424;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// lis r29,-32234
	ctx.r29.s64 = -2112487424;
	// addi r9,r6,-2456
	ctx.r9.s64 = ctx.r6.s64 + -2456;
	// addi r11,r30,-2408
	ctx.r11.s64 = ctx.r30.s64 + -2408;
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// addi r10,r29,-2400
	ctx.r10.s64 = ctx.r29.s64 + -2400;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// lis r27,-32234
	ctx.r27.s64 = -2112487424;
	// lis r26,-32234
	ctx.r26.s64 = -2112487424;
	// stw r10,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// addi r9,r3,-2416
	ctx.r9.s64 = ctx.r3.s64 + -2416;
	// addi r11,r27,-2368
	ctx.r11.s64 = ctx.r27.s64 + -2368;
	// addi r10,r26,-2348
	ctx.r10.s64 = ctx.r26.s64 + -2348;
	// stw r9,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// lis r28,-32234
	ctx.r28.s64 = -2112487424;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// lis r24,-32234
	ctx.r24.s64 = -2112487424;
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// lis r23,-32234
	ctx.r23.s64 = -2112487424;
	// addi r9,r28,-2380
	ctx.r9.s64 = ctx.r28.s64 + -2380;
	// addi r11,r24,-2324
	ctx.r11.s64 = ctx.r24.s64 + -2324;
	// addi r10,r23,-2300
	ctx.r10.s64 = ctx.r23.s64 + -2300;
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// lis r25,-32234
	ctx.r25.s64 = -2112487424;
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// lis r21,-32234
	ctx.r21.s64 = -2112487424;
	// stw r10,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r10.u32);
	// lis r20,-32234
	ctx.r20.s64 = -2112487424;
	// addi r9,r25,-2340
	ctx.r9.s64 = ctx.r25.s64 + -2340;
	// addi r11,r21,-2268
	ctx.r11.s64 = ctx.r21.s64 + -2268;
	// addi r10,r20,-2252
	ctx.r10.s64 = ctx.r20.s64 + -2252;
	// stw r9,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r9.u32);
	// lis r22,-32234
	ctx.r22.s64 = -2112487424;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// lis r18,-32234
	ctx.r18.s64 = -2112487424;
	// stw r10,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r10.u32);
	// addi r9,r22,-2280
	ctx.r9.s64 = ctx.r22.s64 + -2280;
	// addi r11,r18,-2100
	ctx.r11.s64 = ctx.r18.s64 + -2100;
	// lis r19,-32234
	ctx.r19.s64 = -2112487424;
	// stw r9,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r9.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// addi r9,r19,-2236
	ctx.r9.s64 = ctx.r19.s64 + -2236;
	// addi r11,r10,-2088
	ctx.r11.s64 = ctx.r10.s64 + -2088;
	// stw r9,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r9.u32);
	// li r5,164
	ctx.r5.s64 = 164;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x82a4efb0
	ctx.lr = 0x82F54A74;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lwz r11,17056(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17056);
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lwz r10,16644(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16644);
	// lis r30,-31948
	ctx.r30.s64 = -2093744128;
	// lwz r9,16764(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16764);
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// lis r28,-31948
	ctx.r28.s64 = -2093744128;
	// lwz r5,17108(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17108);
	// lis r27,-31948
	ctx.r27.s64 = -2093744128;
	// lwz r4,15964(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15964);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// lis r26,-31948
	ctx.r26.s64 = -2093744128;
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lwz r3,16052(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16052);
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lwz r8,16612(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16612);
	// lis r24,-31948
	ctx.r24.s64 = -2093744128;
	// lwz r7,15944(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15944);
	// lis r23,-31948
	ctx.r23.s64 = -2093744128;
	// lwz r6,16780(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16780);
	// lis r22,-31948
	ctx.r22.s64 = -2093744128;
	// lwz r30,16204(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16204);
	// lis r21,-31948
	ctx.r21.s64 = -2093744128;
	// lwz r29,16156(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16156);
	// lis r20,-31948
	ctx.r20.s64 = -2093744128;
	// lwz r28,16536(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16536);
	// lis r19,-31948
	ctx.r19.s64 = -2093744128;
	// lwz r27,16344(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16344);
	// lis r18,-31948
	ctx.r18.s64 = -2093744128;
	// lwz r26,16356(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16356);
	// lis r17,-31948
	ctx.r17.s64 = -2093744128;
	// lwz r25,16028(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16028);
	// lwz r24,16856(r24)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16856);
	// lwz r23,16380(r23)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16380);
	// lwz r11,16180(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16180);
	// lwz r10,16740(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16740);
	// lwz r9,16940(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16940);
	// lwz r22,16480(r22)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16480);
	// lwz r21,16528(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16528);
	// lwz r20,16200(r20)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16200);
	// stw r5,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r5.u32);
	// li r5,164
	ctx.r5.s64 = 164;
	// stw r4,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r3.u32);
	// addi r3,r31,632
	ctx.r3.s64 = ctx.r31.s64 + 632;
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// stw r7,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r7.u32);
	// stw r6,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r6.u32);
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// stw r29,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r29.u32);
	// stw r28,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r28.u32);
	// stw r27,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r27.u32);
	// stw r26,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r26.u32);
	// stw r25,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r25.u32);
	// stw r24,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r24.u32);
	// stw r23,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r23.u32);
	// stw r22,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r22.u32);
	// stw r21,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r21.u32);
	// stw r20,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r20.u32);
	// stw r11,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r11.u32);
	// stw r10,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r10.u32);
	// stw r9,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r9.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F54B98;
	sub_82A4EFB0(ctx, base);
	// li r11,21
	ctx.r11.s64 = 21;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r9,10
	ctx.r9.s64 = 10;
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// li r11,11
	ctx.r11.s64 = 11;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r10,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r10.u8);
	// li r10,13
	ctx.r10.s64 = 13;
	// stb r9,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r9.u8);
	// li r9,14
	ctx.r9.s64 = 14;
	// stb r11,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r11.u8);
	// li r11,15
	ctx.r11.s64 = 15;
	// stb r10,803(r31)
	PPC_STORE_U8(ctx.r31.u32 + 803, ctx.r10.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r9,804(r31)
	PPC_STORE_U8(ctx.r31.u32 + 804, ctx.r9.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r11,805(r31)
	PPC_STORE_U8(ctx.r31.u32 + 805, ctx.r11.u8);
	// li r11,17
	ctx.r11.s64 = 17;
	// stb r10,806(r31)
	PPC_STORE_U8(ctx.r31.u32 + 806, ctx.r10.u8);
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r9,807(r31)
	PPC_STORE_U8(ctx.r31.u32 + 807, ctx.r9.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 808, ctx.r11.u8);
	// li r11,18
	ctx.r11.s64 = 18;
	// stb r10,809(r31)
	PPC_STORE_U8(ctx.r31.u32 + 809, ctx.r10.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r9,810(r31)
	PPC_STORE_U8(ctx.r31.u32 + 810, ctx.r9.u8);
	// li r9,19
	ctx.r9.s64 = 19;
	// stb r11,811(r31)
	PPC_STORE_U8(ctx.r31.u32 + 811, ctx.r11.u8);
	// li r11,20
	ctx.r11.s64 = 20;
	// stb r10,812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 812, ctx.r10.u8);
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r9,813(r31)
	PPC_STORE_U8(ctx.r31.u32 + 813, ctx.r9.u8);
	// li r9,6
	ctx.r9.s64 = 6;
	// stb r11,814(r31)
	PPC_STORE_U8(ctx.r31.u32 + 814, ctx.r11.u8);
	// li r11,22
	ctx.r11.s64 = 22;
	// stb r10,815(r31)
	PPC_STORE_U8(ctx.r31.u32 + 815, ctx.r10.u8);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r5,41
	ctx.r5.s64 = 41;
	// stb r9,816(r31)
	PPC_STORE_U8(ctx.r31.u32 + 816, ctx.r9.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,817(r31)
	PPC_STORE_U8(ctx.r31.u32 + 817, ctx.r11.u8);
	// addi r3,r31,819
	ctx.r3.s64 = ctx.r31.s64 + 819;
	// stb r10,818(r31)
	PPC_STORE_U8(ctx.r31.u32 + 818, ctx.r10.u8);
	// bl 0x82a4efb0
	ctx.lr = 0x82F54C60;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r11,137
	ctx.r11.s64 = 137;
	// li r9,25
	ctx.r9.s64 = 25;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// stw r11,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r11.u32);
	// li r10,29
	ctx.r10.s64 = 29;
	// stw r9,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r9.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// stw r11,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r11.u32);
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r9,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r9.u32);
	// li r11,17
	ctx.r11.s64 = 17;
	// li r9,41
	ctx.r9.s64 = 41;
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// stw r11,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r9.u32);
	// li r11,89
	ctx.r11.s64 = 89;
	// li r9,73
	ctx.r9.s64 = 73;
	// stw r10,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r10.u32);
	// stw r11,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r11.u32);
	// li r10,121
	ctx.r10.s64 = 121;
	// stw r9,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r9.u32);
	// li r11,37
	ctx.r11.s64 = 37;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r10.u32);
	// stw r11,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r11.u32);
	// li r5,164
	ctx.r5.s64 = 164;
	// stw r9,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,952
	ctx.r3.s64 = ctx.r31.s64 + 952;
	// li r10,105
	ctx.r10.s64 = 105;
	// li r11,57
	ctx.r11.s64 = 57;
	// li r9,165
	ctx.r9.s64 = 165;
	// stw r10,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r10.u32);
	// li r10,229
	ctx.r10.s64 = 229;
	// stw r11,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r11.u32);
	// li r11,33
	ctx.r11.s64 = 33;
	// stw r9,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r9.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r10,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r10.u32);
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r11,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r11.u32);
	// stw r9,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r9.u32);
	// stw r10,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r10.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F54D28;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F54D40"))) PPC_WEAK_FUNC(sub_82F54D40);
PPC_FUNC_IMPL(__imp__sub_82F54D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d0
	ctx.lr = 0x82F54D48;
	__savegprlr_14(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,124
	ctx.r5.s64 = 124;
	// addi r31,r10,20808
	ctx.r31.s64 = ctx.r10.s64 + 20808;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16412);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F54D70;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// std r31,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r31.u64);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r31,-32234
	ctx.r31.s64 = -2112487424;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r11,r11,-2020
	ctx.r11.s64 = ctx.r11.s64 + -2020;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r3,r3,-2032
	ctx.r3.s64 = ctx.r3.s64 + -2032;
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r30,-32234
	ctx.r30.s64 = -2112487424;
	// lis r29,-32234
	ctx.r29.s64 = -2112487424;
	// lis r28,-32234
	ctx.r28.s64 = -2112487424;
	// lis r27,-32234
	ctx.r27.s64 = -2112487424;
	// lis r26,-32234
	ctx.r26.s64 = -2112487424;
	// lis r25,-32234
	ctx.r25.s64 = -2112487424;
	// lis r24,-32234
	ctx.r24.s64 = -2112487424;
	// lis r23,-32234
	ctx.r23.s64 = -2112487424;
	// lis r22,-32234
	ctx.r22.s64 = -2112487424;
	// lis r21,-32234
	ctx.r21.s64 = -2112487424;
	// lis r20,-32234
	ctx.r20.s64 = -2112487424;
	// lis r19,-32234
	ctx.r19.s64 = -2112487424;
	// lis r31,-32234
	ctx.r31.s64 = -2112487424;
	// addi r11,r9,-2488
	ctx.r11.s64 = ctx.r9.s64 + -2488;
	// addi r10,r8,-2480
	ctx.r10.s64 = ctx.r8.s64 + -2480;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r9,r7,-2468
	ctx.r9.s64 = ctx.r7.s64 + -2468;
	// addi r8,r6,-2456
	ctx.r8.s64 = ctx.r6.s64 + -2456;
	// lis r18,-32234
	ctx.r18.s64 = -2112487424;
	// lis r17,-32234
	ctx.r17.s64 = -2112487424;
	// lis r16,-32234
	ctx.r16.s64 = -2112487424;
	// lis r15,-32234
	ctx.r15.s64 = -2112487424;
	// lis r14,-32234
	ctx.r14.s64 = -2112487424;
	// addi r7,r5,-2444
	ctx.r7.s64 = ctx.r5.s64 + -2444;
	// addi r6,r4,-2432
	ctx.r6.s64 = ctx.r4.s64 + -2432;
	// addi r30,r30,-2416
	ctx.r30.s64 = ctx.r30.s64 + -2416;
	// addi r29,r29,-2408
	ctx.r29.s64 = ctx.r29.s64 + -2408;
	// addi r28,r28,-2400
	ctx.r28.s64 = ctx.r28.s64 + -2400;
	// addi r27,r27,-2380
	ctx.r27.s64 = ctx.r27.s64 + -2380;
	// addi r26,r26,-2368
	ctx.r26.s64 = ctx.r26.s64 + -2368;
	// addi r25,r25,-2348
	ctx.r25.s64 = ctx.r25.s64 + -2348;
	// addi r24,r24,-2340
	ctx.r24.s64 = ctx.r24.s64 + -2340;
	// addi r23,r23,-2324
	ctx.r23.s64 = ctx.r23.s64 + -2324;
	// addi r22,r22,-2300
	ctx.r22.s64 = ctx.r22.s64 + -2300;
	// addi r21,r21,-2280
	ctx.r21.s64 = ctx.r21.s64 + -2280;
	// addi r20,r20,-2268
	ctx.r20.s64 = ctx.r20.s64 + -2268;
	// addi r19,r19,-2252
	ctx.r19.s64 = ctx.r19.s64 + -2252;
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r14,r14,-2040
	ctx.r14.s64 = ctx.r14.s64 + -2040;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r15,r15,-2052
	ctx.r15.s64 = ctx.r15.s64 + -2052;
	// addi r31,r31,-1996
	ctx.r31.s64 = ctx.r31.s64 + -1996;
	// std r14,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r14.u64);
	// addi r3,r3,-2016
	ctx.r3.s64 = ctx.r3.s64 + -2016;
	// lwz r14,100(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r5,124
	ctx.r5.s64 = 124;
	// ld r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// addi r14,r14,-1976
	ctx.r14.s64 = ctx.r14.s64 + -1976;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r18,r18,-2236
	ctx.r18.s64 = ctx.r18.s64 + -2236;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r17,r17,-2076
	ctx.r17.s64 = ctx.r17.s64 + -2076;
	// std r15,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r15.u64);
	// addi r16,r16,-2060
	ctx.r16.s64 = ctx.r16.s64 + -2060;
	// lwz r15,104(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// stw r9,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r9.u32);
	// addi r3,r15,-1964
	ctx.r3.s64 = ctx.r15.s64 + -1964;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r5,r5,-1988
	ctx.r5.s64 = ctx.r5.s64 + -1988;
	// addi r4,r4,-2008
	ctx.r4.s64 = ctx.r4.s64 + -2008;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// stw r7,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r7.u32);
	// rotlwi r7,r14,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r14.u32, 0);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r10.u32);
	// stw r8,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r8.u32);
	// stw r6,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r6.u32);
	// stw r14,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// ld r15,128(r1)
	ctx.r15.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r14,136(r1)
	ctx.r14.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// stw r5,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r5.u32);
	// stw r4,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r4.u32);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// stw r29,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r29.u32);
	// stw r28,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r28.u32);
	// stw r27,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r27.u32);
	// stw r26,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r26.u32);
	// stw r25,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r25.u32);
	// stw r24,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r24.u32);
	// stw r23,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r23.u32);
	// stw r22,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r22.u32);
	// stw r21,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r21.u32);
	// stw r20,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r20.u32);
	// stw r19,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r19.u32);
	// stw r18,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r18.u32);
	// stw r17,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r17.u32);
	// stw r16,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r16.u32);
	// stw r15,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r15.u32);
	// stw r14,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r14.u32);
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// stw r9,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r9.u32);
	// stw r8,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r8.u32);
	// stw r7,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r7.u32);
	// stw r6,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r6.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F54FCC;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lwz r10,16764(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16764);
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lwz r11,16644(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16644);
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lis r28,-31948
	ctx.r28.s64 = -2093744128;
	// lis r30,-31948
	ctx.r30.s64 = -2093744128;
	// lwz r9,16208(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16208);
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// lwz r8,16612(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16612);
	// lis r5,-31948
	ctx.r5.s64 = -2093744128;
	// lwz r7,16476(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16476);
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lwz r28,17108(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17108);
	// lis r21,-31948
	ctx.r21.s64 = -2093744128;
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lis r20,-31948
	ctx.r20.s64 = -2093744128;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lis r19,-31948
	ctx.r19.s64 = -2093744128;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// lis r27,-31948
	ctx.r27.s64 = -2093744128;
	// stw r7,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r7.u32);
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lwz r30,16256(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16256);
	// lis r26,-31948
	ctx.r26.s64 = -2093744128;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
	// lwz r29,16780(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16780);
	// lis r24,-31948
	ctx.r24.s64 = -2093744128;
	// lwz r6,16020(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16020);
	// lis r23,-31948
	ctx.r23.s64 = -2093744128;
	// lwz r4,16820(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16820);
	// lis r5,-31948
	ctx.r5.s64 = -2093744128;
	// stw r28,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r28.u32);
	// lis r28,-31948
	ctx.r28.s64 = -2093744128;
	// stw r30,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r30.u32);
	// lis r22,-31948
	ctx.r22.s64 = -2093744128;
	// stw r29,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r29.u32);
	// lis r18,-31948
	ctx.r18.s64 = -2093744128;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// lis r3,-31948
	ctx.r3.s64 = -2093744128;
	// lwz r30,16792(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16792);
	// lis r17,-31948
	ctx.r17.s64 = -2093744128;
	// lwz r29,16536(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16536);
	// lis r16,-31948
	ctx.r16.s64 = -2093744128;
	// lwz r28,16344(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16344);
	// lis r15,-31948
	ctx.r15.s64 = -2093744128;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// lis r14,-31948
	ctx.r14.s64 = -2093744128;
	// lwz r11,16160(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16160);
	// stw r6,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r6.u32);
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lwz r27,15964(r5)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + 15964);
	// lis r5,-31948
	ctx.r5.s64 = -2093744128;
	// lwz r21,116(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r20,112(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r19,108(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,16916(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16916);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lwz r9,16468(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16468);
	// lwz r8,16052(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16052);
	// lwz r7,16204(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16204);
	// lwz r6,16156(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16156);
	// lwz r26,16356(r18)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16356);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r5,124
	ctx.r5.s64 = 124;
	// lwz r3,15944(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15944);
	// lwz r25,16028(r17)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16028);
	// lwz r24,16024(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16024);
	// lwz r23,16856(r15)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r15.u32 + 16856);
	// lwz r22,16716(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + 16716);
	// lwz r21,16380(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16380);
	// lwz r20,16480(r20)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16480);
	// lwz r19,16944(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16944);
	// lwz r18,104(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r17,100(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r16,96(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r15,92(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// lwz r18,16528(r18)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16528);
	// lwz r17,16200(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16200);
	// lwz r16,16180(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16180);
	// lwz r11,16940(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 16940);
	// stw r4,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r3.u32);
	// addi r3,r31,672
	ctx.r3.s64 = ctx.r31.s64 + 672;
	// stw r27,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r27.u32);
	// stw r10,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r10.u32);
	// stw r9,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r9.u32);
	// stw r8,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r8.u32);
	// stw r7,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r7.u32);
	// stw r6,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r6.u32);
	// stw r30,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r30.u32);
	// stw r29,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r29.u32);
	// stw r28,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r28.u32);
	// stw r26,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r26.u32);
	// stw r25,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r25.u32);
	// stw r24,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r24.u32);
	// stw r23,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r23.u32);
	// stw r22,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r22.u32);
	// stw r21,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r21.u32);
	// stw r20,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r20.u32);
	// stw r19,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r19.u32);
	// stw r18,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r18.u32);
	// stw r17,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r17.u32);
	// stw r16,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r16.u32);
	// stw r11,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F551A0;
	sub_82A4EFB0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r11,11
	ctx.r11.s64 = 11;
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// li r9,21
	ctx.r9.s64 = 21;
	// li r10,22
	ctx.r10.s64 = 22;
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// li r11,24
	ctx.r11.s64 = 24;
	// stb r10,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r10.u8);
	// li r9,23
	ctx.r9.s64 = 23;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r11,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r11.u8);
	// stb r9,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r9.u8);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r10,803(r31)
	PPC_STORE_U8(ctx.r31.u32 + 803, ctx.r10.u8);
	// li r9,25
	ctx.r9.s64 = 25;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r11,805(r31)
	PPC_STORE_U8(ctx.r31.u32 + 805, ctx.r11.u8);
	// stb r9,804(r31)
	PPC_STORE_U8(ctx.r31.u32 + 804, ctx.r9.u8);
	// li r11,26
	ctx.r11.s64 = 26;
	// stb r10,806(r31)
	PPC_STORE_U8(ctx.r31.u32 + 806, ctx.r10.u8);
	// li r9,13
	ctx.r9.s64 = 13;
	// li r10,27
	ctx.r10.s64 = 27;
	// stb r11,808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 808, ctx.r11.u8);
	// stb r9,807(r31)
	PPC_STORE_U8(ctx.r31.u32 + 807, ctx.r9.u8);
	// li r11,14
	ctx.r11.s64 = 14;
	// stb r10,809(r31)
	PPC_STORE_U8(ctx.r31.u32 + 809, ctx.r10.u8);
	// li r9,28
	ctx.r9.s64 = 28;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r11,811(r31)
	PPC_STORE_U8(ctx.r31.u32 + 811, ctx.r11.u8);
	// li r11,29
	ctx.r11.s64 = 29;
	// stb r9,810(r31)
	PPC_STORE_U8(ctx.r31.u32 + 810, ctx.r9.u8);
	// stb r10,812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 812, ctx.r10.u8);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r11,814(r31)
	PPC_STORE_U8(ctx.r31.u32 + 814, ctx.r11.u8);
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r9,813(r31)
	PPC_STORE_U8(ctx.r31.u32 + 813, ctx.r9.u8);
	// stb r10,815(r31)
	PPC_STORE_U8(ctx.r31.u32 + 815, ctx.r10.u8);
	// li r9,17
	ctx.r9.s64 = 17;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,817(r31)
	PPC_STORE_U8(ctx.r31.u32 + 817, ctx.r11.u8);
	// li r11,18
	ctx.r11.s64 = 18;
	// stb r9,816(r31)
	PPC_STORE_U8(ctx.r31.u32 + 816, ctx.r9.u8);
	// stb r10,818(r31)
	PPC_STORE_U8(ctx.r31.u32 + 818, ctx.r10.u8);
	// stb r11,820(r31)
	PPC_STORE_U8(ctx.r31.u32 + 820, ctx.r11.u8);
	// li r9,30
	ctx.r9.s64 = 30;
	// li r10,31
	ctx.r10.s64 = 31;
	// li r11,19
	ctx.r11.s64 = 19;
	// stb r9,819(r31)
	PPC_STORE_U8(ctx.r31.u32 + 819, ctx.r9.u8);
	// stb r10,821(r31)
	PPC_STORE_U8(ctx.r31.u32 + 821, ctx.r10.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r11,823(r31)
	PPC_STORE_U8(ctx.r31.u32 + 823, ctx.r11.u8);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,20
	ctx.r11.s64 = 20;
	// stb r9,822(r31)
	PPC_STORE_U8(ctx.r31.u32 + 822, ctx.r9.u8);
	// stb r10,824(r31)
	PPC_STORE_U8(ctx.r31.u32 + 824, ctx.r10.u8);
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r11,825(r31)
	PPC_STORE_U8(ctx.r31.u32 + 825, ctx.r11.u8);
	// li r9,6
	ctx.r9.s64 = 6;
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r10,826(r31)
	PPC_STORE_U8(ctx.r31.u32 + 826, ctx.r10.u8);
	// li r5,31
	ctx.r5.s64 = 31;
	// stb r9,827(r31)
	PPC_STORE_U8(ctx.r31.u32 + 827, ctx.r9.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,828(r31)
	PPC_STORE_U8(ctx.r31.u32 + 828, ctx.r11.u8);
	// addi r3,r31,829
	ctx.r3.s64 = ctx.r31.s64 + 829;
	// bl 0x82a4efb0
	ctx.lr = 0x82F552B8;
	sub_82A4EFB0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r9,174
	ctx.r9.s64 = 174;
	// li r11,46
	ctx.r11.s64 = 46;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// li r10,50
	ctx.r10.s64 = 50;
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// li r9,7
	ctx.r9.s64 = 7;
	// li r11,42
	ctx.r11.s64 = 42;
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// stw r9,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r9.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// li r9,38
	ctx.r9.s64 = 38;
	// li r11,78
	ctx.r11.s64 = 78;
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// stw r9,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r9.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r11.u32);
	// li r9,126
	ctx.r9.s64 = 126;
	// li r11,110
	ctx.r11.s64 = 110;
	// stw r10,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r10.u32);
	// stw r9,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r9.u32);
	// li r10,158
	ctx.r10.s64 = 158;
	// stw r11,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r11.u32);
	// li r9,58
	ctx.r9.s64 = 58;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r10,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r10.u32);
	// stw r9,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r9.u32);
	// li r10,142
	ctx.r10.s64 = 142;
	// stw r11,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r11.u32);
	// li r9,94
	ctx.r9.s64 = 94;
	// li r11,202
	ctx.r11.s64 = 202;
	// stw r10,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r10.u32);
	// stw r9,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r9.u32);
	// li r10,266
	ctx.r10.s64 = 266;
	// stw r11,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r11.u32);
	// li r9,54
	ctx.r9.s64 = 54;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r10,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r10.u32);
	// stw r9,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r9.u32);
	// li r10,14
	ctx.r10.s64 = 14;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r11,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r11.u32);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r10,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r10.u32);
	// stw r9,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r9.u32);
	// li r10,62
	ctx.r10.s64 = 62;
	// li r9,30
	ctx.r9.s64 = 30;
	// stw r11,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r11.u32);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r10,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r10.u32);
	// stw r9,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r11.u32);
	// stw r10,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r10.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r9,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r9.u32);
	// li r10,18
	ctx.r10.s64 = 18;
	// li r9,26
	ctx.r9.s64 = 26;
	// stw r11,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r11.u32);
	// li r5,124
	ctx.r5.s64 = 124;
	// stw r10,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 988, ctx.r9.u32);
	// addi r3,r31,992
	ctx.r3.s64 = ctx.r31.s64 + 992;
	// bl 0x82a4efb0
	ctx.lr = 0x82F553D0;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82a4ea20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F553E8"))) PPC_WEAK_FUNC(sub_82F553E8);
PPC_FUNC_IMPL(__imp__sub_82F553E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d0
	ctx.lr = 0x82F553F0;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,132
	ctx.r5.s64 = 132;
	// addi r31,r10,7368
	ctx.r31.s64 = ctx.r10.s64 + 7368;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16660);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F55418;
	sub_82A4EFB0(ctx, base);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r9,r9,-2488
	ctx.r9.s64 = ctx.r9.s64 + -2488;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r8,-2480
	ctx.r11.s64 = ctx.r8.s64 + -2480;
	// addi r10,r7,-2468
	ctx.r10.s64 = ctx.r7.s64 + -2468;
	// addi r9,r6,-2456
	ctx.r9.s64 = ctx.r6.s64 + -2456;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// addi r30,r30,-1864
	ctx.r30.s64 = ctx.r30.s64 + -1864;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// lis r28,-32234
	ctx.r28.s64 = -2112487424;
	// lis r27,-32234
	ctx.r27.s64 = -2112487424;
	// lis r26,-32234
	ctx.r26.s64 = -2112487424;
	// lis r25,-32234
	ctx.r25.s64 = -2112487424;
	// lis r24,-32234
	ctx.r24.s64 = -2112487424;
	// lis r23,-32234
	ctx.r23.s64 = -2112487424;
	// lis r22,-32234
	ctx.r22.s64 = -2112487424;
	// lis r21,-32234
	ctx.r21.s64 = -2112487424;
	// lis r20,-32234
	ctx.r20.s64 = -2112487424;
	// lis r19,-32234
	ctx.r19.s64 = -2112487424;
	// lis r18,-32234
	ctx.r18.s64 = -2112487424;
	// lis r17,-32234
	ctx.r17.s64 = -2112487424;
	// lis r16,-32234
	ctx.r16.s64 = -2112487424;
	// lis r15,-32234
	ctx.r15.s64 = -2112487424;
	// lis r14,-32234
	ctx.r14.s64 = -2112487424;
	// addi r3,r3,-1876
	ctx.r3.s64 = ctx.r3.s64 + -1876;
	// addi r11,r11,-2444
	ctx.r11.s64 = ctx.r11.s64 + -2444;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r10,r10,-2432
	ctx.r10.s64 = ctx.r10.s64 + -2432;
	// addi r9,r9,-2416
	ctx.r9.s64 = ctx.r9.s64 + -2416;
	// addi r8,r8,-2408
	ctx.r8.s64 = ctx.r8.s64 + -2408;
	// addi r7,r7,-2400
	ctx.r7.s64 = ctx.r7.s64 + -2400;
	// addi r6,r6,-2380
	ctx.r6.s64 = ctx.r6.s64 + -2380;
	// addi r30,r5,-2368
	ctx.r30.s64 = ctx.r5.s64 + -2368;
	// addi r29,r4,-2348
	ctx.r29.s64 = ctx.r4.s64 + -2348;
	// addi r28,r28,-2340
	ctx.r28.s64 = ctx.r28.s64 + -2340;
	// addi r27,r27,-2324
	ctx.r27.s64 = ctx.r27.s64 + -2324;
	// addi r26,r26,-2300
	ctx.r26.s64 = ctx.r26.s64 + -2300;
	// addi r25,r25,-2280
	ctx.r25.s64 = ctx.r25.s64 + -2280;
	// addi r24,r24,-2268
	ctx.r24.s64 = ctx.r24.s64 + -2268;
	// addi r23,r23,-2252
	ctx.r23.s64 = ctx.r23.s64 + -2252;
	// addi r22,r22,-2236
	ctx.r22.s64 = ctx.r22.s64 + -2236;
	// addi r21,r21,-1956
	ctx.r21.s64 = ctx.r21.s64 + -1956;
	// addi r20,r20,-1940
	ctx.r20.s64 = ctx.r20.s64 + -1940;
	// addi r19,r19,-1932
	ctx.r19.s64 = ctx.r19.s64 + -1932;
	// addi r18,r18,-1924
	ctx.r18.s64 = ctx.r18.s64 + -1924;
	// addi r17,r17,-1916
	ctx.r17.s64 = ctx.r17.s64 + -1916;
	// addi r16,r16,-1904
	ctx.r16.s64 = ctx.r16.s64 + -1904;
	// addi r15,r15,-1896
	ctx.r15.s64 = ctx.r15.s64 + -1896;
	// addi r14,r14,-1888
	ctx.r14.s64 = ctx.r14.s64 + -1888;
	// rotlwi r5,r3,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// li r5,132
	ctx.r5.s64 = 132;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// stw r9,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r8.u32);
	// stw r7,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r7.u32);
	// stw r6,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// stw r29,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r29.u32);
	// stw r28,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r28.u32);
	// stw r27,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r27.u32);
	// stw r26,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r26.u32);
	// stw r25,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r25.u32);
	// stw r24,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r24.u32);
	// stw r23,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r23.u32);
	// stw r22,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r22.u32);
	// stw r21,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r21.u32);
	// stw r20,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r20.u32);
	// stw r19,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r19.u32);
	// stw r18,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r18.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r17,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r17.u32);
	// stw r16,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r16.u32);
	// stw r15,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r15.u32);
	// stw r14,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r14.u32);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F555C4;
	sub_82A4EFB0(ctx, base);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lwz r5,15944(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15944);
	// lis r30,-31948
	ctx.r30.s64 = -2093744128;
	// lwz r4,16780(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16780);
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// lwz r11,16644(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16644);
	// lis r28,-31948
	ctx.r28.s64 = -2093744128;
	// lwz r3,17108(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17108);
	// lis r27,-31948
	ctx.r27.s64 = -2093744128;
	// lwz r10,16764(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16764);
	// lwz r9,16612(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16612);
	// lis r26,-31948
	ctx.r26.s64 = -2093744128;
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
	// lwz r8,16320(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16320);
	// lis r24,-31948
	ctx.r24.s64 = -2093744128;
	// lwz r7,16300(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16300);
	// lis r23,-31948
	ctx.r23.s64 = -2093744128;
	// lwz r6,15996(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 15996);
	// lwz r30,15964(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 15964);
	// lis r22,-31948
	ctx.r22.s64 = -2093744128;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// lis r21,-31948
	ctx.r21.s64 = -2093744128;
	// lwz r29,16052(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16052);
	// lis r26,-31948
	ctx.r26.s64 = -2093744128;
	// lwz r28,16204(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16204);
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
	// lwz r27,16156(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16156);
	// lis r24,-31948
	ctx.r24.s64 = -2093744128;
	// lwz r11,16536(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16536);
	// lis r23,-31948
	ctx.r23.s64 = -2093744128;
	// stw r5,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r5.u32);
	// li r5,132
	ctx.r5.s64 = 132;
	// stw r4,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r3.u32);
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// stw r7,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r7.u32);
	// stw r6,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r6.u32);
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// lis r20,-31948
	ctx.r20.s64 = -2093744128;
	// lwz r10,16344(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16344);
	// lis r22,-31948
	ctx.r22.s64 = -2093744128;
	// lwz r9,16356(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16356);
	// lis r26,-31948
	ctx.r26.s64 = -2093744128;
	// lwz r8,16980(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16980);
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
	// lwz r7,16392(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16392);
	// lis r24,-31948
	ctx.r24.s64 = -2093744128;
	// lwz r6,16028(r21)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16028);
	// lis r21,-31948
	ctx.r21.s64 = -2093744128;
	// lwz r30,16776(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16776);
	// lis r23,-31948
	ctx.r23.s64 = -2093744128;
	// stw r29,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r29.u32);
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// stw r28,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r28.u32);
	// lis r28,-31948
	ctx.r28.s64 = -2093744128;
	// stw r27,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r27.u32);
	// lis r27,-31948
	ctx.r27.s64 = -2093744128;
	// lis r19,-31948
	ctx.r19.s64 = -2093744128;
	// lwz r26,16796(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16796);
	// lwz r25,16380(r25)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16380);
	// lwz r29,16848(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16848);
	// lwz r28,16856(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16856);
	// lwz r27,16292(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16292);
	// lwz r24,16480(r24)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16480);
	// lwz r23,16528(r23)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16528);
	// lwz r22,16200(r22)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16200);
	// lwz r21,15960(r21)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + 15960);
	// lwz r20,16180(r20)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16180);
	// lwz r19,16940(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16940);
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// stw r10,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r10.u32);
	// stw r9,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r9.u32);
	// stw r8,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r8.u32);
	// stw r7,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r7.u32);
	// stw r6,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r6.u32);
	// stw r30,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r30.u32);
	// stw r29,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r29.u32);
	// stw r28,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r28.u32);
	// stw r27,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r27.u32);
	// stw r26,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r26.u32);
	// stw r25,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r25.u32);
	// stw r24,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r24.u32);
	// stw r23,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r23.u32);
	// stw r22,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r22.u32);
	// stw r21,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r21.u32);
	// stw r20,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r20.u32);
	// stw r19,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r19.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F55748;
	sub_82A4EFB0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r11,11
	ctx.r11.s64 = 11;
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// li r10,21
	ctx.r10.s64 = 21;
	// li r9,22
	ctx.r9.s64 = 22;
	// stb r11,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r11.u8);
	// stb r10,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r10.u8);
	// li r11,23
	ctx.r11.s64 = 23;
	// stb r9,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r9.u8);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r11,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r11.u8);
	// stb r10,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r10.u8);
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r9,803(r31)
	PPC_STORE_U8(ctx.r31.u32 + 803, ctx.r9.u8);
	// li r10,13
	ctx.r10.s64 = 13;
	// li r9,14
	ctx.r9.s64 = 14;
	// stb r11,804(r31)
	PPC_STORE_U8(ctx.r31.u32 + 804, ctx.r11.u8);
	// stb r10,805(r31)
	PPC_STORE_U8(ctx.r31.u32 + 805, ctx.r10.u8);
	// li r11,15
	ctx.r11.s64 = 15;
	// stb r9,806(r31)
	PPC_STORE_U8(ctx.r31.u32 + 806, ctx.r9.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r11,807(r31)
	PPC_STORE_U8(ctx.r31.u32 + 807, ctx.r11.u8);
	// stb r10,808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 808, ctx.r10.u8);
	// li r5,33
	ctx.r5.s64 = 33;
	// stb r9,809(r31)
	PPC_STORE_U8(ctx.r31.u32 + 809, ctx.r9.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r11,17
	ctx.r11.s64 = 17;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r11,810(r31)
	PPC_STORE_U8(ctx.r31.u32 + 810, ctx.r11.u8);
	// li r9,24
	ctx.r9.s64 = 24;
	// stb r10,811(r31)
	PPC_STORE_U8(ctx.r31.u32 + 811, ctx.r10.u8);
	// li r11,25
	ctx.r11.s64 = 25;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r9,812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 812, ctx.r9.u8);
	// stb r11,813(r31)
	PPC_STORE_U8(ctx.r31.u32 + 813, ctx.r11.u8);
	// li r9,26
	ctx.r9.s64 = 26;
	// stb r10,814(r31)
	PPC_STORE_U8(ctx.r31.u32 + 814, ctx.r10.u8);
	// li r11,27
	ctx.r11.s64 = 27;
	// li r10,18
	ctx.r10.s64 = 18;
	// stb r9,815(r31)
	PPC_STORE_U8(ctx.r31.u32 + 815, ctx.r9.u8);
	// stb r11,816(r31)
	PPC_STORE_U8(ctx.r31.u32 + 816, ctx.r11.u8);
	// li r9,28
	ctx.r9.s64 = 28;
	// stb r10,817(r31)
	PPC_STORE_U8(ctx.r31.u32 + 817, ctx.r10.u8);
	// li r11,29
	ctx.r11.s64 = 29;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r9,818(r31)
	PPC_STORE_U8(ctx.r31.u32 + 818, ctx.r9.u8);
	// stb r11,819(r31)
	PPC_STORE_U8(ctx.r31.u32 + 819, ctx.r11.u8);
	// li r9,19
	ctx.r9.s64 = 19;
	// stb r10,820(r31)
	PPC_STORE_U8(ctx.r31.u32 + 820, ctx.r10.u8);
	// li r11,20
	ctx.r11.s64 = 20;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r9,821(r31)
	PPC_STORE_U8(ctx.r31.u32 + 821, ctx.r9.u8);
	// stb r11,822(r31)
	PPC_STORE_U8(ctx.r31.u32 + 822, ctx.r11.u8);
	// li r9,30
	ctx.r9.s64 = 30;
	// stb r10,823(r31)
	PPC_STORE_U8(ctx.r31.u32 + 823, ctx.r10.u8);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r9,824(r31)
	PPC_STORE_U8(ctx.r31.u32 + 824, ctx.r9.u8);
	// addi r3,r31,827
	ctx.r3.s64 = ctx.r31.s64 + 827;
	// stb r11,825(r31)
	PPC_STORE_U8(ctx.r31.u32 + 825, ctx.r11.u8);
	// stb r10,826(r31)
	PPC_STORE_U8(ctx.r31.u32 + 826, ctx.r10.u8);
	// bl 0x82a4efb0
	ctx.lr = 0x82F55850;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r11,54
	ctx.r11.s64 = 54;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// li r10,58
	ctx.r10.s64 = 58;
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// li r9,166
	ctx.r9.s64 = 166;
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,50
	ctx.r10.s64 = 50;
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// stw r11,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r11.u32);
	// li r9,26
	ctx.r9.s64 = 26;
	// stw r10,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r10.u32);
	// li r11,38
	ctx.r11.s64 = 38;
	// li r10,70
	ctx.r10.s64 = 70;
	// stw r9,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r9.u32);
	// stw r11,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r11.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r10.u32);
	// li r11,118
	ctx.r11.s64 = 118;
	// li r10,102
	ctx.r10.s64 = 102;
	// stw r9,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r9.u32);
	// stw r11,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r11.u32);
	// li r9,150
	ctx.r9.s64 = 150;
	// stw r10,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r10.u32);
	// li r11,66
	ctx.r11.s64 = 66;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r9.u32);
	// li r9,134
	ctx.r9.s64 = 134;
	// stw r11,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r11.u32);
	// stw r10,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r10.u32);
	// li r11,86
	ctx.r11.s64 = 86;
	// li r10,194
	ctx.r10.s64 = 194;
	// stw r9,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r9.u32);
	// li r9,258
	ctx.r9.s64 = 258;
	// stw r11,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r11.u32);
	// stw r10,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r10.u32);
	// li r11,62
	ctx.r11.s64 = 62;
	// li r10,42
	ctx.r10.s64 = 42;
	// stw r9,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r9.u32);
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r11,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r11.u32);
	// stw r10,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r10.u32);
	// li r11,46
	ctx.r11.s64 = 46;
	// stw r9,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r9.u32);
	// li r10,22
	ctx.r10.s64 = 22;
	// stw r11,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r11.u32);
	// li r9,34
	ctx.r9.s64 = 34;
	// stw r10,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r10.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r9,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r9.u32);
	// stw r11,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r11.u32);
	// li r9,18
	ctx.r9.s64 = 18;
	// stw r10,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r10.u32);
	// li r11,14
	ctx.r11.s64 = 14;
	// li r10,30
	ctx.r10.s64 = 30;
	// stw r9,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r9.u32);
	// li r5,132
	ctx.r5.s64 = 132;
	// stw r11,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r10.u32);
	// addi r3,r31,984
	ctx.r3.s64 = ctx.r31.s64 + 984;
	// bl 0x82a4efb0
	ctx.lr = 0x82F55958;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F55970"))) PPC_WEAK_FUNC(sub_82F55970);
PPC_FUNC_IMPL(__imp__sub_82F55970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d4
	ctx.lr = 0x82F55978;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,136
	ctx.r5.s64 = 136;
	// addi r31,r10,27528
	ctx.r31.s64 = ctx.r10.s64 + 27528;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16108);
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F559A0;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// addi r9,r9,-2488
	ctx.r9.s64 = ctx.r9.s64 + -2488;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// addi r11,r8,-2480
	ctx.r11.s64 = ctx.r8.s64 + -2480;
	// addi r10,r7,-2468
	ctx.r10.s64 = ctx.r7.s64 + -2468;
	// addi r9,r6,-2456
	ctx.r9.s64 = ctx.r6.s64 + -2456;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// addi r11,r5,-2444
	ctx.r11.s64 = ctx.r5.s64 + -2444;
	// addi r10,r4,-2432
	ctx.r10.s64 = ctx.r4.s64 + -2432;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// addi r11,r9,-2416
	ctx.r11.s64 = ctx.r9.s64 + -2416;
	// lis r29,-32234
	ctx.r29.s64 = -2112487424;
	// lis r28,-32234
	ctx.r28.s64 = -2112487424;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// lis r27,-32234
	ctx.r27.s64 = -2112487424;
	// lis r26,-32234
	ctx.r26.s64 = -2112487424;
	// lis r25,-32234
	ctx.r25.s64 = -2112487424;
	// lis r24,-32234
	ctx.r24.s64 = -2112487424;
	// lis r23,-32234
	ctx.r23.s64 = -2112487424;
	// lis r22,-32234
	ctx.r22.s64 = -2112487424;
	// lis r21,-32234
	ctx.r21.s64 = -2112487424;
	// lis r20,-32234
	ctx.r20.s64 = -2112487424;
	// lis r19,-32234
	ctx.r19.s64 = -2112487424;
	// lis r18,-32234
	ctx.r18.s64 = -2112487424;
	// lis r17,-32234
	ctx.r17.s64 = -2112487424;
	// lis r16,-32234
	ctx.r16.s64 = -2112487424;
	// lis r15,-32234
	ctx.r15.s64 = -2112487424;
	// addi r10,r8,-2408
	ctx.r10.s64 = ctx.r8.s64 + -2408;
	// addi r9,r7,-2400
	ctx.r9.s64 = ctx.r7.s64 + -2400;
	// addi r8,r6,-2380
	ctx.r8.s64 = ctx.r6.s64 + -2380;
	// addi r7,r5,-2368
	ctx.r7.s64 = ctx.r5.s64 + -2368;
	// addi r6,r4,-2348
	ctx.r6.s64 = ctx.r4.s64 + -2348;
	// addi r30,r3,-2340
	ctx.r30.s64 = ctx.r3.s64 + -2340;
	// addi r29,r29,-2324
	ctx.r29.s64 = ctx.r29.s64 + -2324;
	// addi r28,r28,-2300
	ctx.r28.s64 = ctx.r28.s64 + -2300;
	// addi r27,r27,-2280
	ctx.r27.s64 = ctx.r27.s64 + -2280;
	// addi r26,r26,-2268
	ctx.r26.s64 = ctx.r26.s64 + -2268;
	// addi r25,r25,-2252
	ctx.r25.s64 = ctx.r25.s64 + -2252;
	// addi r24,r24,-2236
	ctx.r24.s64 = ctx.r24.s64 + -2236;
	// addi r23,r23,-1848
	ctx.r23.s64 = ctx.r23.s64 + -1848;
	// addi r22,r22,-1844
	ctx.r22.s64 = ctx.r22.s64 + -1844;
	// addi r21,r21,-1840
	ctx.r21.s64 = ctx.r21.s64 + -1840;
	// addi r20,r20,-1828
	ctx.r20.s64 = ctx.r20.s64 + -1828;
	// addi r19,r19,-1816
	ctx.r19.s64 = ctx.r19.s64 + -1816;
	// addi r18,r18,-1804
	ctx.r18.s64 = ctx.r18.s64 + -1804;
	// addi r17,r17,-1796
	ctx.r17.s64 = ctx.r17.s64 + -1796;
	// addi r16,r16,-1788
	ctx.r16.s64 = ctx.r16.s64 + -1788;
	// addi r15,r15,-1780
	ctx.r15.s64 = ctx.r15.s64 + -1780;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// stw r10,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
	// stw r9,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r9.u32);
	// stw r8,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r8.u32);
	// stw r7,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r7.u32);
	// stw r6,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r6.u32);
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// stw r29,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r29.u32);
	// stw r28,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r28.u32);
	// stw r27,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r27.u32);
	// stw r26,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r26.u32);
	// stw r25,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r25.u32);
	// stw r24,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r24.u32);
	// stw r23,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r23.u32);
	// stw r22,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r22.u32);
	// stw r21,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r21.u32);
	// stw r20,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r20.u32);
	// stw r19,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r19.u32);
	// stw r18,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r18.u32);
	// stw r17,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r17.u32);
	// stw r16,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r16.u32);
	// stw r15,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r15.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F55B18;
	sub_82A4EFB0(ctx, base);
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lis r30,-31948
	ctx.r30.s64 = -2093744128;
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// lis r28,-31948
	ctx.r28.s64 = -2093744128;
	// lis r27,-31948
	ctx.r27.s64 = -2093744128;
	// lwz r5,16368(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16368);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r4,16116(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16116);
	// lis r26,-31948
	ctx.r26.s64 = -2093744128;
	// lwz r7,16612(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16612);
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
	// lwz r6,16868(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16868);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lwz r30,16860(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16860);
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lwz r29,16780(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16780);
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lwz r11,16984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16984);
	// lis r3,-31948
	ctx.r3.s64 = -2093744128;
	// lwz r28,17108(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17108);
	// lis r24,-31948
	ctx.r24.s64 = -2093744128;
	// lwz r27,15964(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15964);
	// lwz r10,16700(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16700);
	// lis r23,-31948
	ctx.r23.s64 = -2093744128;
	// lwz r9,16644(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16644);
	// lis r22,-31948
	ctx.r22.s64 = -2093744128;
	// lwz r8,16764(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16764);
	// lis r21,-31948
	ctx.r21.s64 = -2093744128;
	// lwz r3,15944(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15944);
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
	// lwz r26,15952(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 15952);
	// lis r24,-31948
	ctx.r24.s64 = -2093744128;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// lis r20,-31948
	ctx.r20.s64 = -2093744128;
	// lwz r11,17036(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 17036);
	// lis r19,-31948
	ctx.r19.s64 = -2093744128;
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// lis r18,-31948
	ctx.r18.s64 = -2093744128;
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// lis r17,-31948
	ctx.r17.s64 = -2093744128;
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// lis r23,-31948
	ctx.r23.s64 = -2093744128;
	// stw r5,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r5.u32);
	// li r5,136
	ctx.r5.s64 = 136;
	// stw r4,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r3.u32);
	// addi r3,r31,660
	ctx.r3.s64 = ctx.r31.s64 + 660;
	// lwz r10,16052(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16052);
	// lwz r9,16204(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16204);
	// lwz r8,16156(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16156);
	// stw r7,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r7.u32);
	// stw r6,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r6.u32);
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// stw r29,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r29.u32);
	// stw r28,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r28.u32);
	// stw r27,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r27.u32);
	// stw r26,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r26.u32);
	// lis r22,-31948
	ctx.r22.s64 = -2093744128;
	// lwz r7,16536(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16536);
	// lwz r6,16344(r20)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16344);
	// lis r21,-31948
	ctx.r21.s64 = -2093744128;
	// lis r26,-31948
	ctx.r26.s64 = -2093744128;
	// lwz r27,16856(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16856);
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
	// lwz r30,16356(r19)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16356);
	// lis r24,-31948
	ctx.r24.s64 = -2093744128;
	// lwz r29,16176(r18)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16176);
	// lis r20,-31948
	ctx.r20.s64 = -2093744128;
	// lwz r23,16200(r22)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16200);
	// lwz r22,16180(r21)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16180);
	// lwz r28,16028(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16028);
	// lwz r26,16380(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16380);
	// lwz r25,16480(r25)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16480);
	// lwz r24,16528(r24)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16528);
	// lwz r21,16940(r20)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16940);
	// stw r11,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r11.u32);
	// stw r10,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r10.u32);
	// stw r9,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r9.u32);
	// stw r8,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r8.u32);
	// stw r7,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r7.u32);
	// stw r6,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r6.u32);
	// stw r30,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r30.u32);
	// stw r29,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r29.u32);
	// stw r28,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r28.u32);
	// stw r27,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r27.u32);
	// stw r26,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r26.u32);
	// stw r25,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r25.u32);
	// stw r24,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r24.u32);
	// stw r23,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r23.u32);
	// stw r22,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r22.u32);
	// stw r21,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r21.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F55C90;
	sub_82A4EFB0(ctx, base);
	// li r11,21
	ctx.r11.s64 = 21;
	// li r10,22
	ctx.r10.s64 = 22;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r9,9
	ctx.r9.s64 = 9;
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// li r11,23
	ctx.r11.s64 = 23;
	// stb r10,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r10.u8);
	// li r10,24
	ctx.r10.s64 = 24;
	// li r9,25
	ctx.r9.s64 = 25;
	// stb r11,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r11.u8);
	// stb r10,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r10.u8);
	// li r11,12
	ctx.r11.s64 = 12;
	// stb r9,803(r31)
	PPC_STORE_U8(ctx.r31.u32 + 803, ctx.r9.u8);
	// li r10,26
	ctx.r10.s64 = 26;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r11,804(r31)
	PPC_STORE_U8(ctx.r31.u32 + 804, ctx.r11.u8);
	// stb r10,805(r31)
	PPC_STORE_U8(ctx.r31.u32 + 805, ctx.r10.u8);
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r9,806(r31)
	PPC_STORE_U8(ctx.r31.u32 + 806, ctx.r9.u8);
	// li r10,13
	ctx.r10.s64 = 13;
	// li r9,27
	ctx.r9.s64 = 27;
	// stb r11,807(r31)
	PPC_STORE_U8(ctx.r31.u32 + 807, ctx.r11.u8);
	// stb r10,808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 808, ctx.r10.u8);
	// li r11,28
	ctx.r11.s64 = 28;
	// stb r9,809(r31)
	PPC_STORE_U8(ctx.r31.u32 + 809, ctx.r9.u8);
	// li r10,14
	ctx.r10.s64 = 14;
	// li r9,15
	ctx.r9.s64 = 15;
	// stb r11,810(r31)
	PPC_STORE_U8(ctx.r31.u32 + 810, ctx.r11.u8);
	// stb r10,811(r31)
	PPC_STORE_U8(ctx.r31.u32 + 811, ctx.r10.u8);
	// li r11,16
	ctx.r11.s64 = 16;
	// stb r9,812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 812, ctx.r9.u8);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,17
	ctx.r9.s64 = 17;
	// stb r11,813(r31)
	PPC_STORE_U8(ctx.r31.u32 + 813, ctx.r11.u8);
	// stb r10,814(r31)
	PPC_STORE_U8(ctx.r31.u32 + 814, ctx.r10.u8);
	// li r5,34
	ctx.r5.s64 = 34;
	// stb r9,815(r31)
	PPC_STORE_U8(ctx.r31.u32 + 815, ctx.r9.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,826
	ctx.r3.s64 = ctx.r31.s64 + 826;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,29
	ctx.r10.s64 = 29;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,816(r31)
	PPC_STORE_U8(ctx.r31.u32 + 816, ctx.r11.u8);
	// li r11,18
	ctx.r11.s64 = 18;
	// stb r10,817(r31)
	PPC_STORE_U8(ctx.r31.u32 + 817, ctx.r10.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r9,818(r31)
	PPC_STORE_U8(ctx.r31.u32 + 818, ctx.r9.u8);
	// li r9,19
	ctx.r9.s64 = 19;
	// stb r11,819(r31)
	PPC_STORE_U8(ctx.r31.u32 + 819, ctx.r11.u8);
	// li r11,20
	ctx.r11.s64 = 20;
	// stb r10,820(r31)
	PPC_STORE_U8(ctx.r31.u32 + 820, ctx.r10.u8);
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r9,821(r31)
	PPC_STORE_U8(ctx.r31.u32 + 821, ctx.r9.u8);
	// li r9,6
	ctx.r9.s64 = 6;
	// stb r11,822(r31)
	PPC_STORE_U8(ctx.r31.u32 + 822, ctx.r11.u8);
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r10,823(r31)
	PPC_STORE_U8(ctx.r31.u32 + 823, ctx.r10.u8);
	// stb r9,824(r31)
	PPC_STORE_U8(ctx.r31.u32 + 824, ctx.r9.u8);
	// stb r11,825(r31)
	PPC_STORE_U8(ctx.r31.u32 + 825, ctx.r11.u8);
	// bl 0x82a4efb0
	ctx.lr = 0x82F55D90;
	sub_82A4EFB0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r11,47
	ctx.r11.s64 = 47;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// li r9,159
	ctx.r9.s64 = 159;
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// li r10,51
	ctx.r10.s64 = 51;
	// li r11,43
	ctx.r11.s64 = 43;
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// li r11,63
	ctx.r11.s64 = 63;
	// stw r9,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r9.u32);
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// li r9,23
	ctx.r9.s64 = 23;
	// stw r11,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r11.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,111
	ctx.r11.s64 = 111;
	// stw r9,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r9.u32);
	// stw r10,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r10.u32);
	// li r9,95
	ctx.r9.s64 = 95;
	// stw r11,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r11.u32);
	// li r10,143
	ctx.r10.s64 = 143;
	// li r11,59
	ctx.r11.s64 = 59;
	// stw r9,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r9.u32);
	// stw r10,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r10.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r11.u32);
	// li r10,127
	ctx.r10.s64 = 127;
	// li r11,79
	ctx.r11.s64 = 79;
	// stw r9,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r9.u32);
	// stw r10,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r10.u32);
	// li r9,187
	ctx.r9.s64 = 187;
	// stw r11,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r11.u32);
	// li r10,251
	ctx.r10.s64 = 251;
	// li r11,55
	ctx.r11.s64 = 55;
	// stw r9,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r9.u32);
	// stw r10,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r10.u32);
	// li r9,35
	ctx.r9.s64 = 35;
	// stw r11,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r11.u32);
	// li r10,39
	ctx.r10.s64 = 39;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r9,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r9.u32);
	// stw r10,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r10.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r11,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r11.u32);
	// li r10,19
	ctx.r10.s64 = 19;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r9,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r9.u32);
	// stw r10,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r10.u32);
	// li r9,27
	ctx.r9.s64 = 27;
	// stw r11,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r11.u32);
	// li r10,31
	ctx.r10.s64 = 31;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r9.u32);
	// li r5,136
	ctx.r5.s64 = 136;
	// stw r10,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r11.u32);
	// addi r3,r31,980
	ctx.r3.s64 = ctx.r31.s64 + 980;
	// bl 0x82a4efb0
	ctx.lr = 0x82F55E90;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea24
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F55EA8"))) PPC_WEAK_FUNC(sub_82F55EA8);
PPC_FUNC_IMPL(__imp__sub_82F55EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9dc
	ctx.lr = 0x82F55EB0;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,168
	ctx.r5.s64 = 168;
	// addi r31,r10,-7192
	ctx.r31.s64 = ctx.r10.s64 + -7192;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16544);
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F55ED8;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// addi r9,r9,-2488
	ctx.r9.s64 = ctx.r9.s64 + -2488;
	// addi r11,r8,-2480
	ctx.r11.s64 = ctx.r8.s64 + -2480;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// addi r10,r7,-2468
	ctx.r10.s64 = ctx.r7.s64 + -2468;
	// addi r11,r5,-2444
	ctx.r11.s64 = ctx.r5.s64 + -2444;
	// addi r9,r6,-2456
	ctx.r9.s64 = ctx.r6.s64 + -2456;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// lis r30,-32234
	ctx.r30.s64 = -2112487424;
	// addi r10,r4,-2432
	ctx.r10.s64 = ctx.r4.s64 + -2432;
	// addi r9,r3,-2416
	ctx.r9.s64 = ctx.r3.s64 + -2416;
	// addi r11,r30,-1772
	ctx.r11.s64 = ctx.r30.s64 + -1772;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// lis r29,-32234
	ctx.r29.s64 = -2112487424;
	// stw r9,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// lis r28,-32234
	ctx.r28.s64 = -2112487424;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// lis r27,-32234
	ctx.r27.s64 = -2112487424;
	// addi r10,r29,-1760
	ctx.r10.s64 = ctx.r29.s64 + -1760;
	// addi r9,r28,-1744
	ctx.r9.s64 = ctx.r28.s64 + -1744;
	// addi r11,r27,-1940
	ctx.r11.s64 = ctx.r27.s64 + -1940;
	// stw r10,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// lis r26,-32234
	ctx.r26.s64 = -2112487424;
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// lis r25,-32234
	ctx.r25.s64 = -2112487424;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// lis r24,-32234
	ctx.r24.s64 = -2112487424;
	// addi r10,r26,-1732
	ctx.r10.s64 = ctx.r26.s64 + -1732;
	// addi r9,r25,-1716
	ctx.r9.s64 = ctx.r25.s64 + -1716;
	// addi r11,r24,-1704
	ctx.r11.s64 = ctx.r24.s64 + -1704;
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// lis r23,-32234
	ctx.r23.s64 = -2112487424;
	// stw r9,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r9.u32);
	// lis r22,-32234
	ctx.r22.s64 = -2112487424;
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// lis r21,-32234
	ctx.r21.s64 = -2112487424;
	// addi r10,r23,-1688
	ctx.r10.s64 = ctx.r23.s64 + -1688;
	// addi r9,r22,-1676
	ctx.r9.s64 = ctx.r22.s64 + -1676;
	// addi r11,r21,-1660
	ctx.r11.s64 = ctx.r21.s64 + -1660;
	// stw r10,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r10.u32);
	// lis r20,-32234
	ctx.r20.s64 = -2112487424;
	// stw r9,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r9.u32);
	// lis r19,-32234
	ctx.r19.s64 = -2112487424;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// lis r18,-32234
	ctx.r18.s64 = -2112487424;
	// addi r10,r20,-1904
	ctx.r10.s64 = ctx.r20.s64 + -1904;
	// addi r9,r19,-1876
	ctx.r9.s64 = ctx.r19.s64 + -1876;
	// addi r11,r18,-1648
	ctx.r11.s64 = ctx.r18.s64 + -1648;
	// stw r10,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r10.u32);
	// li r5,168
	ctx.r5.s64 = 168;
	// stw r9,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// bl 0x82a4efb0
	ctx.lr = 0x82F55FF0;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lwz r11,16420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16420);
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lwz r10,17020(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17020);
	// lis r28,-31948
	ctx.r28.s64 = -2093744128;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r30,-31948
	ctx.r30.s64 = -2093744128;
	// lwz r5,17108(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17108);
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// lwz r9,15932(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 15932);
	// lis r27,-31948
	ctx.r27.s64 = -2093744128;
	// lwz r6,16780(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16780);
	// lis r26,-31948
	ctx.r26.s64 = -2093744128;
	// lwz r4,16264(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16264);
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
	// lwz r28,16124(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16124);
	// lis r24,-31948
	ctx.r24.s64 = -2093744128;
	// lwz r3,16488(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16488);
	// lis r23,-31948
	ctx.r23.s64 = -2093744128;
	// lwz r8,16400(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16400);
	// lis r22,-31948
	ctx.r22.s64 = -2093744128;
	// lwz r7,16748(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16748);
	// lis r21,-31948
	ctx.r21.s64 = -2093744128;
	// lwz r30,16372(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16372);
	// lis r20,-31948
	ctx.r20.s64 = -2093744128;
	// lwz r29,16536(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16536);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r27,16356(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16356);
	// lis r19,-31948
	ctx.r19.s64 = -2093744128;
	// lwz r26,16632(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16632);
	// lis r18,-31948
	ctx.r18.s64 = -2093744128;
	// lwz r25,16028(r23)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16028);
	// lis r17,-31948
	ctx.r17.s64 = -2093744128;
	// lwz r24,16892(r22)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16892);
	// lwz r23,16956(r21)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16956);
	// lwz r22,17120(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + 17120);
	// lwz r21,16380(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16380);
	// lwz r20,16200(r19)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16200);
	// lwz r11,16940(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16940);
	// lwz r19,16180(r18)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16180);
	// stw r5,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r5.u32);
	// li r5,168
	ctx.r5.s64 = 168;
	// stw r4,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r3.u32);
	// addi r3,r31,628
	ctx.r3.s64 = ctx.r31.s64 + 628;
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// stw r7,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r7.u32);
	// stw r6,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r6.u32);
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// stw r29,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r29.u32);
	// stw r28,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r28.u32);
	// stw r27,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r27.u32);
	// stw r26,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r26.u32);
	// stw r25,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r25.u32);
	// stw r24,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r24.u32);
	// stw r23,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r23.u32);
	// stw r22,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r22.u32);
	// stw r21,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r21.u32);
	// stw r20,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r20.u32);
	// stw r19,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r19.u32);
	// stw r11,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F56108;
	sub_82A4EFB0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r9,11
	ctx.r9.s64 = 11;
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,13
	ctx.r10.s64 = 13;
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r10,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r10.u8);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,14
	ctx.r10.s64 = 14;
	// stb r9,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r9.u8);
	// li r9,15
	ctx.r9.s64 = 15;
	// stb r11,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r11.u8);
	// li r11,16
	ctx.r11.s64 = 16;
	// stb r10,803(r31)
	PPC_STORE_U8(ctx.r31.u32 + 803, ctx.r10.u8);
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r9,804(r31)
	PPC_STORE_U8(ctx.r31.u32 + 804, ctx.r9.u8);
	// li r9,17
	ctx.r9.s64 = 17;
	// stb r11,805(r31)
	PPC_STORE_U8(ctx.r31.u32 + 805, ctx.r11.u8);
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r10,806(r31)
	PPC_STORE_U8(ctx.r31.u32 + 806, ctx.r10.u8);
	// li r10,18
	ctx.r10.s64 = 18;
	// stb r9,807(r31)
	PPC_STORE_U8(ctx.r31.u32 + 807, ctx.r9.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 808, ctx.r11.u8);
	// li r11,19
	ctx.r11.s64 = 19;
	// stb r10,809(r31)
	PPC_STORE_U8(ctx.r31.u32 + 809, ctx.r10.u8);
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r9,810(r31)
	PPC_STORE_U8(ctx.r31.u32 + 810, ctx.r9.u8);
	// li r9,21
	ctx.r9.s64 = 21;
	// stb r11,811(r31)
	PPC_STORE_U8(ctx.r31.u32 + 811, ctx.r11.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r10,812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 812, ctx.r10.u8);
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r9,813(r31)
	PPC_STORE_U8(ctx.r31.u32 + 813, ctx.r9.u8);
	// li r9,6
	ctx.r9.s64 = 6;
	// stb r11,814(r31)
	PPC_STORE_U8(ctx.r31.u32 + 814, ctx.r11.u8);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r5,42
	ctx.r5.s64 = 42;
	// stb r10,815(r31)
	PPC_STORE_U8(ctx.r31.u32 + 815, ctx.r10.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r9,816(r31)
	PPC_STORE_U8(ctx.r31.u32 + 816, ctx.r9.u8);
	// addi r3,r31,818
	ctx.r3.s64 = ctx.r31.s64 + 818;
	// stb r11,817(r31)
	PPC_STORE_U8(ctx.r31.u32 + 817, ctx.r11.u8);
	// bl 0x82a4efb0
	ctx.lr = 0x82F561C8;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r11,45
	ctx.r11.s64 = 45;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// li r9,57
	ctx.r9.s64 = 57;
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// li r10,53
	ctx.r10.s64 = 53;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// li r9,41
	ctx.r9.s64 = 41;
	// stw r11,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r11.u32);
	// li r10,29
	ctx.r10.s64 = 29;
	// li r11,33
	ctx.r11.s64 = 33;
	// stw r9,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r9.u32);
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r11.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r9,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r9.u32);
	// stw r10,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r10.u32);
	// li r9,13
	ctx.r9.s64 = 13;
	// stw r11,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r11.u32);
	// li r10,37
	ctx.r10.s64 = 37;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r9,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r9.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r10.u32);
	// stw r11,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r11.u32);
	// li r10,49
	ctx.r10.s64 = 49;
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r9,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r9.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r10.u32);
	// stw r11,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r11.u32);
	// li r10,9
	ctx.r10.s64 = 9;
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r9,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r9.u32);
	// li r5,168
	ctx.r5.s64 = 168;
	// stw r10,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r11.u32);
	// addi r3,r31,948
	ctx.r3.s64 = ctx.r31.s64 + 948;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r9,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r9.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F56288;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F562A0"))) PPC_WEAK_FUNC(sub_82F562A0);
PPC_FUNC_IMPL(__imp__sub_82F562A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9dc
	ctx.lr = 0x82F562A8;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,172
	ctx.r5.s64 = 172;
	// addi r31,r10,1768
	ctx.r31.s64 = ctx.r10.s64 + 1768;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16672);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F562D0;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// addi r9,r9,-2488
	ctx.r9.s64 = ctx.r9.s64 + -2488;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// addi r11,r8,-2480
	ctx.r11.s64 = ctx.r8.s64 + -2480;
	// addi r10,r7,-2468
	ctx.r10.s64 = ctx.r7.s64 + -2468;
	// addi r9,r6,-2456
	ctx.r9.s64 = ctx.r6.s64 + -2456;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// addi r11,r5,-2444
	ctx.r11.s64 = ctx.r5.s64 + -2444;
	// addi r10,r4,-1640
	ctx.r10.s64 = ctx.r4.s64 + -1640;
	// addi r9,r3,-1632
	ctx.r9.s64 = ctx.r3.s64 + -1632;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// lis r30,-32234
	ctx.r30.s64 = -2112487424;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// lis r29,-32234
	ctx.r29.s64 = -2112487424;
	// stw r9,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// lis r28,-32234
	ctx.r28.s64 = -2112487424;
	// addi r11,r30,-1624
	ctx.r11.s64 = ctx.r30.s64 + -1624;
	// addi r10,r29,-1612
	ctx.r10.s64 = ctx.r29.s64 + -1612;
	// addi r9,r28,-1592
	ctx.r9.s64 = ctx.r28.s64 + -1592;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// lis r27,-32234
	ctx.r27.s64 = -2112487424;
	// stw r10,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// lis r26,-32234
	ctx.r26.s64 = -2112487424;
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// lis r25,-32234
	ctx.r25.s64 = -2112487424;
	// addi r11,r27,-1576
	ctx.r11.s64 = ctx.r27.s64 + -1576;
	// addi r10,r26,-1568
	ctx.r10.s64 = ctx.r26.s64 + -1568;
	// addi r9,r25,-1560
	ctx.r9.s64 = ctx.r25.s64 + -1560;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// lis r24,-32234
	ctx.r24.s64 = -2112487424;
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// lis r23,-32234
	ctx.r23.s64 = -2112487424;
	// stw r9,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r9.u32);
	// lis r22,-32234
	ctx.r22.s64 = -2112487424;
	// addi r11,r24,-1548
	ctx.r11.s64 = ctx.r24.s64 + -1548;
	// addi r10,r23,-1536
	ctx.r10.s64 = ctx.r23.s64 + -1536;
	// addi r9,r22,-1520
	ctx.r9.s64 = ctx.r22.s64 + -1520;
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// lis r21,-32234
	ctx.r21.s64 = -2112487424;
	// stw r10,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r10.u32);
	// lis r20,-32234
	ctx.r20.s64 = -2112487424;
	// stw r9,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r9.u32);
	// lis r19,-32234
	ctx.r19.s64 = -2112487424;
	// addi r11,r21,-1504
	ctx.r11.s64 = ctx.r21.s64 + -1504;
	// addi r10,r20,-1492
	ctx.r10.s64 = ctx.r20.s64 + -1492;
	// addi r9,r19,-1480
	ctx.r9.s64 = ctx.r19.s64 + -1480;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// li r5,172
	ctx.r5.s64 = 172;
	// stw r10,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r9.u32);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x82a4efb0
	ctx.lr = 0x82F563DC;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lwz r11,16696(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16696);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// lwz r11,16824(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16824);
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lwz r10,16728(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16728);
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lis r30,-31948
	ctx.r30.s64 = -2093744128;
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// lwz r5,17092(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17092);
	// lis r28,-31948
	ctx.r28.s64 = -2093744128;
	// lwz r4,15916(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15916);
	// lis r27,-31948
	ctx.r27.s64 = -2093744128;
	// lwz r3,16444(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16444);
	// lis r26,-31948
	ctx.r26.s64 = -2093744128;
	// lwz r9,16040(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16040);
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
	// lwz r8,15908(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15908);
	// lis r24,-31948
	ctx.r24.s64 = -2093744128;
	// lwz r7,16780(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16780);
	// lis r23,-31948
	ctx.r23.s64 = -2093744128;
	// lwz r6,17108(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17108);
	// lis r22,-31948
	ctx.r22.s64 = -2093744128;
	// lwz r30,16536(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16536);
	// lis r21,-31948
	ctx.r21.s64 = -2093744128;
	// lwz r29,16356(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16356);
	// lis r20,-31948
	ctx.r20.s64 = -2093744128;
	// lwz r28,17096(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 17096);
	// lis r19,-31948
	ctx.r19.s64 = -2093744128;
	// lwz r27,16028(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16028);
	// lis r18,-31948
	ctx.r18.s64 = -2093744128;
	// lwz r26,16760(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16760);
	// lis r17,-31948
	ctx.r17.s64 = -2093744128;
	// lwz r25,16724(r22)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16724);
	// lwz r24,15968(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 15968);
	// lwz r23,16564(r20)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16564);
	// lwz r22,16380(r19)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16380);
	// lwz r21,16348(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16348);
	// lwz r20,16180(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16180);
	// stw r5,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r5.u32);
	// li r5,172
	ctx.r5.s64 = 172;
	// stw r4,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r3.u32);
	// addi r3,r31,624
	ctx.r3.s64 = ctx.r31.s64 + 624;
	// stw r11,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r11.u32);
	// stw r10,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r10.u32);
	// stw r9,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r9.u32);
	// stw r8,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r8.u32);
	// stw r7,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r7.u32);
	// stw r6,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r6.u32);
	// stw r30,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r30.u32);
	// stw r29,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r29.u32);
	// stw r28,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r28.u32);
	// stw r27,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r27.u32);
	// stw r26,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r26.u32);
	// stw r25,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r25.u32);
	// stw r24,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r24.u32);
	// stw r23,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r23.u32);
	// stw r22,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r22.u32);
	// stw r21,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r21.u32);
	// stw r20,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r20.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F564E8;
	sub_82A4EFB0(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r9,9
	ctx.r9.s64 = 9;
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r10,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r10.u8);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r9,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r9.u8);
	// stb r11,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r11.u8);
	// li r9,13
	ctx.r9.s64 = 13;
	// stb r10,803(r31)
	PPC_STORE_U8(ctx.r31.u32 + 803, ctx.r10.u8);
	// li r11,14
	ctx.r11.s64 = 14;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r9,804(r31)
	PPC_STORE_U8(ctx.r31.u32 + 804, ctx.r9.u8);
	// li r9,5
	ctx.r9.s64 = 5;
	// stb r11,805(r31)
	PPC_STORE_U8(ctx.r31.u32 + 805, ctx.r11.u8);
	// li r11,15
	ctx.r11.s64 = 15;
	// stb r10,806(r31)
	PPC_STORE_U8(ctx.r31.u32 + 806, ctx.r10.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r9,807(r31)
	PPC_STORE_U8(ctx.r31.u32 + 807, ctx.r9.u8);
	// li r9,16
	ctx.r9.s64 = 16;
	// stb r11,808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 808, ctx.r11.u8);
	// li r11,17
	ctx.r11.s64 = 17;
	// stb r10,809(r31)
	PPC_STORE_U8(ctx.r31.u32 + 809, ctx.r10.u8);
	// li r10,18
	ctx.r10.s64 = 18;
	// stb r9,810(r31)
	PPC_STORE_U8(ctx.r31.u32 + 810, ctx.r9.u8);
	// li r9,19
	ctx.r9.s64 = 19;
	// stb r11,811(r31)
	PPC_STORE_U8(ctx.r31.u32 + 811, ctx.r11.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r10,812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 812, ctx.r10.u8);
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r9,813(r31)
	PPC_STORE_U8(ctx.r31.u32 + 813, ctx.r9.u8);
	// li r9,6
	ctx.r9.s64 = 6;
	// li r5,43
	ctx.r5.s64 = 43;
	// stb r11,814(r31)
	PPC_STORE_U8(ctx.r31.u32 + 814, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r10,815(r31)
	PPC_STORE_U8(ctx.r31.u32 + 815, ctx.r10.u8);
	// addi r3,r31,817
	ctx.r3.s64 = ctx.r31.s64 + 817;
	// stb r9,816(r31)
	PPC_STORE_U8(ctx.r31.u32 + 816, ctx.r9.u8);
	// bl 0x82a4efb0
	ctx.lr = 0x82F565A0;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r11,44
	ctx.r11.s64 = 44;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// li r9,52
	ctx.r9.s64 = 52;
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// li r10,48
	ctx.r10.s64 = 48;
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,36
	ctx.r11.s64 = 36;
	// stw r9,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r9.u32);
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r11.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r9,80
	ctx.r9.s64 = 80;
	// stw r10,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r10.u32);
	// stw r11,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r11.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r9,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r9.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r10.u32);
	// stw r11,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r11.u32);
	// li r10,28
	ctx.r10.s64 = 28;
	// stw r9,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r9.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r10,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r10.u32);
	// stw r11,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r11.u32);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r9,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r9.u32);
	// li r11,24
	ctx.r11.s64 = 24;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r10,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r10.u32);
	// li r5,172
	ctx.r5.s64 = 172;
	// stw r11,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r9.u32);
	// addi r3,r31,944
	ctx.r3.s64 = ctx.r31.s64 + 944;
	// bl 0x82a4efb0
	ctx.lr = 0x82F56658;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F56670"))) PPC_WEAK_FUNC(sub_82F56670);
PPC_FUNC_IMPL(__imp__sub_82F56670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9dc
	ctx.lr = 0x82F56678;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,172
	ctx.r5.s64 = 172;
	// addi r31,r10,-6072
	ctx.r31.s64 = ctx.r10.s64 + -6072;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16928(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16928);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F566A0;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// addi r9,r9,-2488
	ctx.r9.s64 = ctx.r9.s64 + -2488;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// addi r11,r8,-2480
	ctx.r11.s64 = ctx.r8.s64 + -2480;
	// addi r10,r7,-2468
	ctx.r10.s64 = ctx.r7.s64 + -2468;
	// addi r9,r6,-2456
	ctx.r9.s64 = ctx.r6.s64 + -2456;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// addi r11,r5,-2444
	ctx.r11.s64 = ctx.r5.s64 + -2444;
	// addi r10,r4,-1640
	ctx.r10.s64 = ctx.r4.s64 + -1640;
	// addi r9,r3,-1632
	ctx.r9.s64 = ctx.r3.s64 + -1632;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// lis r30,-32234
	ctx.r30.s64 = -2112487424;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// lis r29,-32234
	ctx.r29.s64 = -2112487424;
	// stw r9,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// lis r28,-32234
	ctx.r28.s64 = -2112487424;
	// addi r11,r30,-1624
	ctx.r11.s64 = ctx.r30.s64 + -1624;
	// addi r10,r29,-1612
	ctx.r10.s64 = ctx.r29.s64 + -1612;
	// addi r9,r28,-1592
	ctx.r9.s64 = ctx.r28.s64 + -1592;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// lis r27,-32234
	ctx.r27.s64 = -2112487424;
	// stw r10,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// lis r26,-32234
	ctx.r26.s64 = -2112487424;
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// lis r25,-32234
	ctx.r25.s64 = -2112487424;
	// addi r11,r27,-1576
	ctx.r11.s64 = ctx.r27.s64 + -1576;
	// addi r10,r26,-1568
	ctx.r10.s64 = ctx.r26.s64 + -1568;
	// addi r9,r25,-1560
	ctx.r9.s64 = ctx.r25.s64 + -1560;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// lis r24,-32234
	ctx.r24.s64 = -2112487424;
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// lis r23,-32234
	ctx.r23.s64 = -2112487424;
	// stw r9,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r9.u32);
	// lis r22,-32234
	ctx.r22.s64 = -2112487424;
	// addi r11,r24,-1548
	ctx.r11.s64 = ctx.r24.s64 + -1548;
	// addi r10,r23,-1536
	ctx.r10.s64 = ctx.r23.s64 + -1536;
	// addi r9,r22,-1520
	ctx.r9.s64 = ctx.r22.s64 + -1520;
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// lis r21,-32234
	ctx.r21.s64 = -2112487424;
	// stw r10,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r10.u32);
	// lis r20,-32234
	ctx.r20.s64 = -2112487424;
	// stw r9,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r9.u32);
	// lis r19,-32234
	ctx.r19.s64 = -2112487424;
	// addi r11,r21,-1504
	ctx.r11.s64 = ctx.r21.s64 + -1504;
	// addi r10,r20,-1492
	ctx.r10.s64 = ctx.r20.s64 + -1492;
	// addi r9,r19,-1480
	ctx.r9.s64 = ctx.r19.s64 + -1480;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// li r5,172
	ctx.r5.s64 = 172;
	// stw r10,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r9.u32);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x82a4efb0
	ctx.lr = 0x82F567AC;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lwz r11,16696(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16696);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// lwz r11,16824(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16824);
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lwz r10,16728(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16728);
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lis r30,-31948
	ctx.r30.s64 = -2093744128;
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// lwz r5,17092(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17092);
	// lis r28,-31948
	ctx.r28.s64 = -2093744128;
	// lwz r4,15916(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15916);
	// lis r27,-31948
	ctx.r27.s64 = -2093744128;
	// lwz r3,16444(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16444);
	// lis r26,-31948
	ctx.r26.s64 = -2093744128;
	// lwz r9,16040(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16040);
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
	// lwz r8,15908(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15908);
	// lis r24,-31948
	ctx.r24.s64 = -2093744128;
	// lwz r7,16780(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16780);
	// lis r23,-31948
	ctx.r23.s64 = -2093744128;
	// lwz r6,17108(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17108);
	// lis r22,-31948
	ctx.r22.s64 = -2093744128;
	// lwz r30,16536(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16536);
	// lis r21,-31948
	ctx.r21.s64 = -2093744128;
	// lwz r29,16356(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16356);
	// lis r20,-31948
	ctx.r20.s64 = -2093744128;
	// lwz r28,17096(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 17096);
	// lis r19,-31948
	ctx.r19.s64 = -2093744128;
	// lwz r27,16028(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16028);
	// lis r18,-31948
	ctx.r18.s64 = -2093744128;
	// lwz r26,16760(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16760);
	// lis r17,-31948
	ctx.r17.s64 = -2093744128;
	// lwz r25,16724(r22)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16724);
	// lwz r24,15968(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 15968);
	// lwz r23,16564(r20)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16564);
	// lwz r22,16380(r19)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16380);
	// lwz r21,16348(r18)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16348);
	// lwz r20,16180(r17)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16180);
	// stw r5,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r5.u32);
	// li r5,172
	ctx.r5.s64 = 172;
	// stw r4,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r3.u32);
	// addi r3,r31,624
	ctx.r3.s64 = ctx.r31.s64 + 624;
	// stw r11,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r11.u32);
	// stw r10,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r10.u32);
	// stw r9,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r9.u32);
	// stw r8,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r8.u32);
	// stw r7,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r7.u32);
	// stw r6,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r6.u32);
	// stw r30,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r30.u32);
	// stw r29,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r29.u32);
	// stw r28,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r28.u32);
	// stw r27,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r27.u32);
	// stw r26,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r26.u32);
	// stw r25,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r25.u32);
	// stw r24,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r24.u32);
	// stw r23,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r23.u32);
	// stw r22,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r22.u32);
	// stw r21,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r21.u32);
	// stw r20,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r20.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F568B8;
	sub_82A4EFB0(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r9,9
	ctx.r9.s64 = 9;
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r10,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r10.u8);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r9,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r9.u8);
	// stb r11,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r11.u8);
	// li r9,13
	ctx.r9.s64 = 13;
	// stb r10,803(r31)
	PPC_STORE_U8(ctx.r31.u32 + 803, ctx.r10.u8);
	// li r11,14
	ctx.r11.s64 = 14;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r9,804(r31)
	PPC_STORE_U8(ctx.r31.u32 + 804, ctx.r9.u8);
	// li r9,5
	ctx.r9.s64 = 5;
	// stb r11,805(r31)
	PPC_STORE_U8(ctx.r31.u32 + 805, ctx.r11.u8);
	// li r11,15
	ctx.r11.s64 = 15;
	// stb r10,806(r31)
	PPC_STORE_U8(ctx.r31.u32 + 806, ctx.r10.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r9,807(r31)
	PPC_STORE_U8(ctx.r31.u32 + 807, ctx.r9.u8);
	// li r9,16
	ctx.r9.s64 = 16;
	// stb r11,808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 808, ctx.r11.u8);
	// li r11,17
	ctx.r11.s64 = 17;
	// stb r10,809(r31)
	PPC_STORE_U8(ctx.r31.u32 + 809, ctx.r10.u8);
	// li r10,18
	ctx.r10.s64 = 18;
	// stb r9,810(r31)
	PPC_STORE_U8(ctx.r31.u32 + 810, ctx.r9.u8);
	// li r9,19
	ctx.r9.s64 = 19;
	// stb r11,811(r31)
	PPC_STORE_U8(ctx.r31.u32 + 811, ctx.r11.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r10,812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 812, ctx.r10.u8);
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r9,813(r31)
	PPC_STORE_U8(ctx.r31.u32 + 813, ctx.r9.u8);
	// li r9,6
	ctx.r9.s64 = 6;
	// li r5,43
	ctx.r5.s64 = 43;
	// stb r11,814(r31)
	PPC_STORE_U8(ctx.r31.u32 + 814, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r10,815(r31)
	PPC_STORE_U8(ctx.r31.u32 + 815, ctx.r10.u8);
	// addi r3,r31,817
	ctx.r3.s64 = ctx.r31.s64 + 817;
	// stb r9,816(r31)
	PPC_STORE_U8(ctx.r31.u32 + 816, ctx.r9.u8);
	// bl 0x82a4efb0
	ctx.lr = 0x82F56970;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r11,44
	ctx.r11.s64 = 44;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// li r9,52
	ctx.r9.s64 = 52;
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// li r10,48
	ctx.r10.s64 = 48;
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,36
	ctx.r11.s64 = 36;
	// stw r9,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r9.u32);
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r11.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r9,80
	ctx.r9.s64 = 80;
	// stw r10,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r10.u32);
	// stw r11,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r11.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r9,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r9.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r10.u32);
	// stw r11,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r11.u32);
	// li r10,28
	ctx.r10.s64 = 28;
	// stw r9,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r9.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r10,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r10.u32);
	// stw r11,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r11.u32);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r9,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r9.u32);
	// li r11,24
	ctx.r11.s64 = 24;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r10,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r10.u32);
	// li r5,172
	ctx.r5.s64 = 172;
	// stw r11,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r9.u32);
	// addi r3,r31,944
	ctx.r3.s64 = ctx.r31.s64 + 944;
	// bl 0x82a4efb0
	ctx.lr = 0x82F56A28;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F56A40"))) PPC_WEAK_FUNC(sub_82F56A40);
PPC_FUNC_IMPL(__imp__sub_82F56A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82F56A48;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,208
	ctx.r5.s64 = 208;
	// addi r31,r10,-472
	ctx.r31.s64 = ctx.r10.s64 + -472;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16112);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F56A70;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// addi r9,r9,-2488
	ctx.r9.s64 = ctx.r9.s64 + -2488;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// addi r11,r8,-2480
	ctx.r11.s64 = ctx.r8.s64 + -2480;
	// addi r10,r7,-2468
	ctx.r10.s64 = ctx.r7.s64 + -2468;
	// addi r9,r6,-2456
	ctx.r9.s64 = ctx.r6.s64 + -2456;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// addi r11,r5,-2444
	ctx.r11.s64 = ctx.r5.s64 + -2444;
	// addi r10,r4,-1468
	ctx.r10.s64 = ctx.r4.s64 + -1468;
	// addi r9,r3,-1460
	ctx.r9.s64 = ctx.r3.s64 + -1460;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// lis r30,-32234
	ctx.r30.s64 = -2112487424;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// lis r29,-32234
	ctx.r29.s64 = -2112487424;
	// stw r9,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// lis r28,-32234
	ctx.r28.s64 = -2112487424;
	// addi r11,r30,-1592
	ctx.r11.s64 = ctx.r30.s64 + -1592;
	// addi r10,r29,-1444
	ctx.r10.s64 = ctx.r29.s64 + -1444;
	// addi r9,r28,-1436
	ctx.r9.s64 = ctx.r28.s64 + -1436;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// li r5,208
	ctx.r5.s64 = 208;
	// stw r10,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// addi r3,r31,332
	ctx.r3.s64 = ctx.r31.s64 + 332;
	// bl 0x82a4efb0
	ctx.lr = 0x82F56B10;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r4,-31948
	ctx.r4.s64 = -2093744128;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lwz r11,16692(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16692);
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lwz r10,16232(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16232);
	// lwz r9,16000(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16000);
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// lwz r30,16356(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16356);
	// lis r28,-31948
	ctx.r28.s64 = -2093744128;
	// lwz r8,16780(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16780);
	// lis r27,-31948
	ctx.r27.s64 = -2093744128;
	// lwz r7,17108(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 17108);
	// li r5,208
	ctx.r5.s64 = 208;
	// lwz r6,16536(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16536);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// addi r3,r31,588
	ctx.r3.s64 = ctx.r31.s64 + 588;
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// lis r26,-31948
	ctx.r26.s64 = -2093744128;
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
	// lwz r11,17048(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17048);
	// lwz r10,16028(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16028);
	// lwz r9,16784(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16784);
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// stw r7,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r7.u32);
	// stw r6,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r6.u32);
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// lwz r8,16380(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16380);
	// lwz r7,16180(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16180);
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// stw r10,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r10.u32);
	// stw r9,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r9.u32);
	// stw r8,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r8.u32);
	// stw r7,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r7.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F56BB0;
	sub_82A4EFB0(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,9
	ctx.r9.s64 = 9;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// stb r10,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r10.u8);
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r9,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r9.u8);
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r11.u8);
	// stb r10,803(r31)
	PPC_STORE_U8(ctx.r31.u32 + 803, ctx.r10.u8);
	// li r11,11
	ctx.r11.s64 = 11;
	// stb r9,804(r31)
	PPC_STORE_U8(ctx.r31.u32 + 804, ctx.r9.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,6
	ctx.r9.s64 = 6;
	// stb r11,805(r31)
	PPC_STORE_U8(ctx.r31.u32 + 805, ctx.r11.u8);
	// li r5,52
	ctx.r5.s64 = 52;
	// stb r10,806(r31)
	PPC_STORE_U8(ctx.r31.u32 + 806, ctx.r10.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r9,807(r31)
	PPC_STORE_U8(ctx.r31.u32 + 807, ctx.r9.u8);
	// addi r3,r31,808
	ctx.r3.s64 = ctx.r31.s64 + 808;
	// bl 0x82a4efb0
	ctx.lr = 0x82F56C20;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// li r9,28
	ctx.r9.s64 = 28;
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// li r10,24
	ctx.r10.s64 = 24;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,56
	ctx.r11.s64 = 56;
	// stw r9,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r9.u32);
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r9,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r9.u32);
	// li r5,208
	ctx.r5.s64 = 208;
	// stw r10,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r11.u32);
	// addi r3,r31,908
	ctx.r3.s64 = ctx.r31.s64 + 908;
	// bl 0x82a4efb0
	ctx.lr = 0x82F56C90;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F56CA8"))) PPC_WEAK_FUNC(sub_82F56CA8);
PPC_FUNC_IMPL(__imp__sub_82F56CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82F56CB0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,208
	ctx.r5.s64 = 208;
	// addi r31,r10,12968
	ctx.r31.s64 = ctx.r10.s64 + 12968;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,15928(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15928);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F56CD8;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// addi r9,r9,-2488
	ctx.r9.s64 = ctx.r9.s64 + -2488;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// addi r11,r8,-2480
	ctx.r11.s64 = ctx.r8.s64 + -2480;
	// addi r10,r7,-2468
	ctx.r10.s64 = ctx.r7.s64 + -2468;
	// addi r9,r6,-2456
	ctx.r9.s64 = ctx.r6.s64 + -2456;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// addi r11,r5,-2444
	ctx.r11.s64 = ctx.r5.s64 + -2444;
	// addi r10,r4,-1468
	ctx.r10.s64 = ctx.r4.s64 + -1468;
	// addi r9,r3,-1460
	ctx.r9.s64 = ctx.r3.s64 + -1460;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// lis r30,-32234
	ctx.r30.s64 = -2112487424;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// lis r29,-32234
	ctx.r29.s64 = -2112487424;
	// stw r9,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// lis r28,-32234
	ctx.r28.s64 = -2112487424;
	// addi r11,r30,-1592
	ctx.r11.s64 = ctx.r30.s64 + -1592;
	// addi r10,r29,-1444
	ctx.r10.s64 = ctx.r29.s64 + -1444;
	// addi r9,r28,-1436
	ctx.r9.s64 = ctx.r28.s64 + -1436;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// li r5,208
	ctx.r5.s64 = 208;
	// stw r10,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// addi r3,r31,332
	ctx.r3.s64 = ctx.r31.s64 + 332;
	// bl 0x82a4efb0
	ctx.lr = 0x82F56D78;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r4,-31948
	ctx.r4.s64 = -2093744128;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lwz r11,16692(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16692);
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lwz r10,16232(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16232);
	// lwz r9,16000(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16000);
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// lwz r30,16356(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16356);
	// lis r28,-31948
	ctx.r28.s64 = -2093744128;
	// lwz r8,16780(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16780);
	// lis r27,-31948
	ctx.r27.s64 = -2093744128;
	// lwz r7,17108(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 17108);
	// li r5,208
	ctx.r5.s64 = 208;
	// lwz r6,16536(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16536);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// addi r3,r31,588
	ctx.r3.s64 = ctx.r31.s64 + 588;
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// lis r26,-31948
	ctx.r26.s64 = -2093744128;
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
	// lwz r11,17048(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17048);
	// lwz r10,16028(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16028);
	// lwz r9,16784(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16784);
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// stw r7,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r7.u32);
	// stw r6,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r6.u32);
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// lwz r8,16380(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16380);
	// lwz r7,16180(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16180);
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// stw r10,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r10.u32);
	// stw r9,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r9.u32);
	// stw r8,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r8.u32);
	// stw r7,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r7.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F56E18;
	sub_82A4EFB0(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,9
	ctx.r9.s64 = 9;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// stb r10,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r10.u8);
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r9,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r9.u8);
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r11.u8);
	// stb r10,803(r31)
	PPC_STORE_U8(ctx.r31.u32 + 803, ctx.r10.u8);
	// li r11,11
	ctx.r11.s64 = 11;
	// stb r9,804(r31)
	PPC_STORE_U8(ctx.r31.u32 + 804, ctx.r9.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,6
	ctx.r9.s64 = 6;
	// stb r11,805(r31)
	PPC_STORE_U8(ctx.r31.u32 + 805, ctx.r11.u8);
	// li r5,52
	ctx.r5.s64 = 52;
	// stb r10,806(r31)
	PPC_STORE_U8(ctx.r31.u32 + 806, ctx.r10.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r9,807(r31)
	PPC_STORE_U8(ctx.r31.u32 + 807, ctx.r9.u8);
	// addi r3,r31,808
	ctx.r3.s64 = ctx.r31.s64 + 808;
	// bl 0x82a4efb0
	ctx.lr = 0x82F56E88;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// li r9,28
	ctx.r9.s64 = 28;
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// li r10,24
	ctx.r10.s64 = 24;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,56
	ctx.r11.s64 = 56;
	// stw r9,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r9.u32);
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r9,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r9.u32);
	// li r5,208
	ctx.r5.s64 = 208;
	// stw r10,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r11.u32);
	// addi r3,r31,908
	ctx.r3.s64 = ctx.r31.s64 + 908;
	// bl 0x82a4efb0
	ctx.lr = 0x82F56EF8;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F56F10"))) PPC_WEAK_FUNC(sub_82F56F10);
PPC_FUNC_IMPL(__imp__sub_82F56F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82F56F18;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,208
	ctx.r5.s64 = 208;
	// addi r31,r10,28648
	ctx.r31.s64 = ctx.r10.s64 + 28648;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16296);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F56F40;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// addi r9,r9,-2488
	ctx.r9.s64 = ctx.r9.s64 + -2488;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// addi r11,r8,-2480
	ctx.r11.s64 = ctx.r8.s64 + -2480;
	// addi r10,r7,-2468
	ctx.r10.s64 = ctx.r7.s64 + -2468;
	// addi r9,r6,-2456
	ctx.r9.s64 = ctx.r6.s64 + -2456;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// addi r11,r5,-2444
	ctx.r11.s64 = ctx.r5.s64 + -2444;
	// addi r10,r4,-1468
	ctx.r10.s64 = ctx.r4.s64 + -1468;
	// addi r9,r3,-1460
	ctx.r9.s64 = ctx.r3.s64 + -1460;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// lis r30,-32234
	ctx.r30.s64 = -2112487424;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// lis r29,-32234
	ctx.r29.s64 = -2112487424;
	// stw r9,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// lis r28,-32234
	ctx.r28.s64 = -2112487424;
	// addi r11,r30,-1592
	ctx.r11.s64 = ctx.r30.s64 + -1592;
	// addi r10,r29,-1444
	ctx.r10.s64 = ctx.r29.s64 + -1444;
	// addi r9,r28,-1436
	ctx.r9.s64 = ctx.r28.s64 + -1436;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// li r5,208
	ctx.r5.s64 = 208;
	// stw r10,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// addi r3,r31,332
	ctx.r3.s64 = ctx.r31.s64 + 332;
	// bl 0x82a4efb0
	ctx.lr = 0x82F56FE0;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r4,-31948
	ctx.r4.s64 = -2093744128;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lwz r11,16692(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16692);
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lwz r10,16232(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16232);
	// lwz r9,16000(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16000);
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// lwz r30,16356(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16356);
	// lis r28,-31948
	ctx.r28.s64 = -2093744128;
	// lwz r8,16780(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16780);
	// lis r27,-31948
	ctx.r27.s64 = -2093744128;
	// lwz r7,17108(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 17108);
	// li r5,208
	ctx.r5.s64 = 208;
	// lwz r6,16536(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16536);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// addi r3,r31,588
	ctx.r3.s64 = ctx.r31.s64 + 588;
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// lis r26,-31948
	ctx.r26.s64 = -2093744128;
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
	// lwz r11,17048(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17048);
	// lwz r10,16028(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16028);
	// lwz r9,16784(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16784);
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// stw r7,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r7.u32);
	// stw r6,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r6.u32);
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// lwz r8,16380(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16380);
	// lwz r7,16180(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16180);
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// stw r10,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r10.u32);
	// stw r9,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r9.u32);
	// stw r8,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r8.u32);
	// stw r7,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r7.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F57080;
	sub_82A4EFB0(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,9
	ctx.r9.s64 = 9;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// stb r10,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r10.u8);
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r9,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r9.u8);
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r11.u8);
	// stb r10,803(r31)
	PPC_STORE_U8(ctx.r31.u32 + 803, ctx.r10.u8);
	// li r11,11
	ctx.r11.s64 = 11;
	// stb r9,804(r31)
	PPC_STORE_U8(ctx.r31.u32 + 804, ctx.r9.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,6
	ctx.r9.s64 = 6;
	// stb r11,805(r31)
	PPC_STORE_U8(ctx.r31.u32 + 805, ctx.r11.u8);
	// li r5,52
	ctx.r5.s64 = 52;
	// stb r10,806(r31)
	PPC_STORE_U8(ctx.r31.u32 + 806, ctx.r10.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r9,807(r31)
	PPC_STORE_U8(ctx.r31.u32 + 807, ctx.r9.u8);
	// addi r3,r31,808
	ctx.r3.s64 = ctx.r31.s64 + 808;
	// bl 0x82a4efb0
	ctx.lr = 0x82F570F0;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// li r9,28
	ctx.r9.s64 = 28;
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// li r10,24
	ctx.r10.s64 = 24;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,56
	ctx.r11.s64 = 56;
	// stw r9,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r9.u32);
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r9,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r9.u32);
	// li r5,208
	ctx.r5.s64 = 208;
	// stw r10,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r11.u32);
	// addi r3,r31,908
	ctx.r3.s64 = ctx.r31.s64 + 908;
	// bl 0x82a4efb0
	ctx.lr = 0x82F57160;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F57178"))) PPC_WEAK_FUNC(sub_82F57178);
PPC_FUNC_IMPL(__imp__sub_82F57178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e8
	ctx.lr = 0x82F57180;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,160
	ctx.r5.s64 = 160;
	// addi r31,r10,648
	ctx.r31.s64 = ctx.r10.s64 + 648;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16500);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F571A8;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// addi r9,r9,-2488
	ctx.r9.s64 = ctx.r9.s64 + -2488;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// addi r11,r8,-2480
	ctx.r11.s64 = ctx.r8.s64 + -2480;
	// addi r9,r6,-2456
	ctx.r9.s64 = ctx.r6.s64 + -2456;
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// addi r10,r7,-2468
	ctx.r10.s64 = ctx.r7.s64 + -2468;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// addi r11,r5,-2444
	ctx.r11.s64 = ctx.r5.s64 + -2444;
	// addi r9,r3,-1632
	ctx.r9.s64 = ctx.r3.s64 + -1632;
	// lis r30,-32234
	ctx.r30.s64 = -2112487424;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// addi r10,r4,-1640
	ctx.r10.s64 = ctx.r4.s64 + -1640;
	// stw r9,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// lis r28,-32234
	ctx.r28.s64 = -2112487424;
	// lis r29,-32234
	ctx.r29.s64 = -2112487424;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// addi r11,r30,-1624
	ctx.r11.s64 = ctx.r30.s64 + -1624;
	// addi r9,r28,-1592
	ctx.r9.s64 = ctx.r28.s64 + -1592;
	// lis r27,-32234
	ctx.r27.s64 = -2112487424;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// addi r10,r29,-1612
	ctx.r10.s64 = ctx.r29.s64 + -1612;
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// lis r25,-32234
	ctx.r25.s64 = -2112487424;
	// lis r26,-32234
	ctx.r26.s64 = -2112487424;
	// stw r10,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// addi r11,r27,-1576
	ctx.r11.s64 = ctx.r27.s64 + -1576;
	// addi r9,r25,-1560
	ctx.r9.s64 = ctx.r25.s64 + -1560;
	// lis r24,-32234
	ctx.r24.s64 = -2112487424;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// addi r10,r26,-1568
	ctx.r10.s64 = ctx.r26.s64 + -1568;
	// stw r9,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r9.u32);
	// lis r22,-32234
	ctx.r22.s64 = -2112487424;
	// lis r23,-32234
	ctx.r23.s64 = -2112487424;
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// addi r11,r24,-1548
	ctx.r11.s64 = ctx.r24.s64 + -1548;
	// addi r9,r22,-1520
	ctx.r9.s64 = ctx.r22.s64 + -1520;
	// lis r21,-32234
	ctx.r21.s64 = -2112487424;
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// addi r10,r23,-1536
	ctx.r10.s64 = ctx.r23.s64 + -1536;
	// stw r9,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r9.u32);
	// lis r20,-32234
	ctx.r20.s64 = -2112487424;
	// addi r11,r21,-1504
	ctx.r11.s64 = ctx.r21.s64 + -1504;
	// stw r10,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r10.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r10,r20,-1492
	ctx.r10.s64 = ctx.r20.s64 + -1492;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// addi r11,r9,-1480
	ctx.r11.s64 = ctx.r9.s64 + -1480;
	// stw r10,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r10.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// addi r10,r8,-1468
	ctx.r10.s64 = ctx.r8.s64 + -1468;
	// addi r9,r7,-1444
	ctx.r9.s64 = ctx.r7.s64 + -1444;
	// addi r8,r6,-1436
	ctx.r8.s64 = ctx.r6.s64 + -1436;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,380
	ctx.r3.s64 = ctx.r31.s64 + 380;
	// stw r10,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r10.u32);
	// stw r9,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r9.u32);
	// stw r8,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r8.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F572D8;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lwz r11,16340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16340);
	// lis r30,-31948
	ctx.r30.s64 = -2093744128;
	// lwz r10,16696(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16696);
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// lwz r9,16824(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16824);
	// lis r28,-31948
	ctx.r28.s64 = -2093744128;
	// lwz r8,16728(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16728);
	// lwz r7,16040(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16040);
	// lis r27,-31948
	ctx.r27.s64 = -2093744128;
	// lis r26,-31948
	ctx.r26.s64 = -2093744128;
	// lwz r5,16780(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16780);
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
	// lwz r6,15908(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15908);
	// lis r24,-31948
	ctx.r24.s64 = -2093744128;
	// lwz r30,15916(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15916);
	// lis r23,-31948
	ctx.r23.s64 = -2093744128;
	// lwz r29,16444(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16444);
	// lis r4,-31948
	ctx.r4.s64 = -2093744128;
	// lwz r28,16536(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16536);
	// lis r3,-31948
	ctx.r3.s64 = -2093744128;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// lis r22,-31948
	ctx.r22.s64 = -2093744128;
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// lis r21,-31948
	ctx.r21.s64 = -2093744128;
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// lis r20,-31948
	ctx.r20.s64 = -2093744128;
	// stw r7,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r7.u32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r27,16356(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16356);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lwz r26,17096(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 17096);
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lwz r25,16920(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16920);
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lwz r4,17108(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 17108);
	// lwz r3,17092(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17092);
	// lwz r24,16028(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16028);
	// lwz r23,16888(r22)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16888);
	// lwz r22,16760(r21)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16760);
	// lwz r11,15968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15968);
	// lwz r10,16564(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16564);
	// lwz r9,16380(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16380);
	// lwz r8,16348(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16348);
	// lwz r7,16180(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16180);
	// lwz r21,16724(r20)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16724);
	// stw r5,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r5.u32);
	// li r5,160
	ctx.r5.s64 = 160;
	// stw r4,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r3.u32);
	// addi r3,r31,636
	ctx.r3.s64 = ctx.r31.s64 + 636;
	// stw r6,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r6.u32);
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// stw r29,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r29.u32);
	// stw r28,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r28.u32);
	// stw r27,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r27.u32);
	// stw r26,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r26.u32);
	// stw r25,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r25.u32);
	// stw r24,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r24.u32);
	// stw r23,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r23.u32);
	// stw r22,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r22.u32);
	// stw r21,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r21.u32);
	// stw r11,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r11.u32);
	// stw r10,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r10.u32);
	// stw r9,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r9.u32);
	// stw r8,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r8.u32);
	// stw r7,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r7.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F57408;
	sub_82A4EFB0(ctx, base);
	// li r11,21
	ctx.r11.s64 = 21;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r9,8
	ctx.r9.s64 = 8;
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// li r11,9
	ctx.r11.s64 = 9;
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,11
	ctx.r9.s64 = 11;
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// stb r10,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r10.u8);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r9,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r9.u8);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,12
	ctx.r9.s64 = 12;
	// stb r11,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r11.u8);
	// stb r10,803(r31)
	PPC_STORE_U8(ctx.r31.u32 + 803, ctx.r10.u8);
	// li r11,13
	ctx.r11.s64 = 13;
	// stb r9,804(r31)
	PPC_STORE_U8(ctx.r31.u32 + 804, ctx.r9.u8);
	// li r10,14
	ctx.r10.s64 = 14;
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r11,805(r31)
	PPC_STORE_U8(ctx.r31.u32 + 805, ctx.r11.u8);
	// stb r10,806(r31)
	PPC_STORE_U8(ctx.r31.u32 + 806, ctx.r10.u8);
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r9,807(r31)
	PPC_STORE_U8(ctx.r31.u32 + 807, ctx.r9.u8);
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,22
	ctx.r9.s64 = 22;
	// stb r11,808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 808, ctx.r11.u8);
	// stb r10,809(r31)
	PPC_STORE_U8(ctx.r31.u32 + 809, ctx.r10.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r9,810(r31)
	PPC_STORE_U8(ctx.r31.u32 + 810, ctx.r9.u8);
	// li r10,23
	ctx.r10.s64 = 23;
	// li r9,16
	ctx.r9.s64 = 16;
	// stb r11,811(r31)
	PPC_STORE_U8(ctx.r31.u32 + 811, ctx.r11.u8);
	// stb r10,812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 812, ctx.r10.u8);
	// li r11,17
	ctx.r11.s64 = 17;
	// stb r9,813(r31)
	PPC_STORE_U8(ctx.r31.u32 + 813, ctx.r9.u8);
	// li r10,18
	ctx.r10.s64 = 18;
	// li r9,19
	ctx.r9.s64 = 19;
	// stb r11,814(r31)
	PPC_STORE_U8(ctx.r31.u32 + 814, ctx.r11.u8);
	// stb r10,815(r31)
	PPC_STORE_U8(ctx.r31.u32 + 815, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r9,816(r31)
	PPC_STORE_U8(ctx.r31.u32 + 816, ctx.r9.u8);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r9,6
	ctx.r9.s64 = 6;
	// stb r11,817(r31)
	PPC_STORE_U8(ctx.r31.u32 + 817, ctx.r11.u8);
	// li r5,40
	ctx.r5.s64 = 40;
	// stb r10,818(r31)
	PPC_STORE_U8(ctx.r31.u32 + 818, ctx.r10.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r9,819(r31)
	PPC_STORE_U8(ctx.r31.u32 + 819, ctx.r9.u8);
	// addi r3,r31,820
	ctx.r3.s64 = ctx.r31.s64 + 820;
	// bl 0x82a4efb0
	ctx.lr = 0x82F574D8;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r9,61
	ctx.r9.s64 = 61;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// li r11,53
	ctx.r11.s64 = 53;
	// li r10,57
	ctx.r10.s64 = 57;
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// li r11,49
	ctx.r11.s64 = 49;
	// li r10,37
	ctx.r10.s64 = 37;
	// stw r9,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r9.u32);
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// li r9,41
	ctx.r9.s64 = 41;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r9,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r9.u32);
	// stw r11,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r11.u32);
	// li r9,89
	ctx.r9.s64 = 89;
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r10,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r10.u32);
	// li r10,21
	ctx.r10.s64 = 21;
	// stw r9,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r9.u32);
	// stw r11,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r11.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r11,33
	ctx.r11.s64 = 33;
	// stw r10,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r10.u32);
	// stw r9,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r9.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r11.u32);
	// stw r10,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r10.u32);
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r9,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r9.u32);
	// li r10,29
	ctx.r10.s64 = 29;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r11,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r11.u32);
	// stw r10,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r10.u32);
	// li r11,45
	ctx.r11.s64 = 45;
	// stw r9,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r9.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,13
	ctx.r9.s64 = 13;
	// stw r11,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r11.u32);
	// li r5,160
	ctx.r5.s64 = 160;
	// stw r10,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r9.u32);
	// addi r3,r31,956
	ctx.r3.s64 = ctx.r31.s64 + 956;
	// bl 0x82a4efb0
	ctx.lr = 0x82F575A8;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F575C0"))) PPC_WEAK_FUNC(sub_82F575C0);
PPC_FUNC_IMPL(__imp__sub_82F575C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d0
	ctx.lr = 0x82F575C8;
	__savegprlr_14(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r31,r10,8488
	ctx.r31.s64 = ctx.r10.s64 + 8488;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16352);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F575F0;
	sub_82A4EFB0(ctx, base);
	// lis r15,-32234
	ctx.r15.s64 = -2112487424;
	// std r31,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r31.u64);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// std r15,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r15.u64);
	// lis r16,-32234
	ctx.r16.s64 = -2112487424;
	// lis r31,-32234
	ctx.r31.s64 = -2112487424;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lis r15,-32234
	ctx.r15.s64 = -2112487424;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// std r16,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r16.u64);
	// lis r16,-32234
	ctx.r16.s64 = -2112487424;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lis r31,-32234
	ctx.r31.s64 = -2112487424;
	// stw r15,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r15.u32);
	// lis r15,-32234
	ctx.r15.s64 = -2112487424;
	// lis r14,-32234
	ctx.r14.s64 = -2112487424;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r16,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r16.u32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// stw r15,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r15.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// lis r30,-32234
	ctx.r30.s64 = -2112487424;
	// lis r29,-32234
	ctx.r29.s64 = -2112487424;
	// lis r28,-32234
	ctx.r28.s64 = -2112487424;
	// lis r27,-32234
	ctx.r27.s64 = -2112487424;
	// lis r26,-32234
	ctx.r26.s64 = -2112487424;
	// lis r25,-32234
	ctx.r25.s64 = -2112487424;
	// lis r24,-32234
	ctx.r24.s64 = -2112487424;
	// lis r23,-32234
	ctx.r23.s64 = -2112487424;
	// lis r22,-32234
	ctx.r22.s64 = -2112487424;
	// lis r21,-32234
	ctx.r21.s64 = -2112487424;
	// lis r20,-32234
	ctx.r20.s64 = -2112487424;
	// lis r19,-32234
	ctx.r19.s64 = -2112487424;
	// lis r16,-32234
	ctx.r16.s64 = -2112487424;
	// lis r31,-32234
	ctx.r31.s64 = -2112487424;
	// lis r15,-32234
	ctx.r15.s64 = -2112487424;
	// stw r16,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r16.u32);
	// addi r14,r14,-1384
	ctx.r14.s64 = ctx.r14.s64 + -1384;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// lis r18,-32234
	ctx.r18.s64 = -2112487424;
	// stw r15,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r15.u32);
	// lis r17,-32234
	ctx.r17.s64 = -2112487424;
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// addi r9,r9,-2488
	ctx.r9.s64 = ctx.r9.s64 + -2488;
	// addi r8,r8,-2480
	ctx.r8.s64 = ctx.r8.s64 + -2480;
	// addi r7,r7,-2468
	ctx.r7.s64 = ctx.r7.s64 + -2468;
	// addi r6,r6,-2456
	ctx.r6.s64 = ctx.r6.s64 + -2456;
	// addi r5,r5,-2444
	ctx.r5.s64 = ctx.r5.s64 + -2444;
	// addi r4,r4,-2432
	ctx.r4.s64 = ctx.r4.s64 + -2432;
	// addi r3,r3,-2416
	ctx.r3.s64 = ctx.r3.s64 + -2416;
	// addi r30,r30,-2408
	ctx.r30.s64 = ctx.r30.s64 + -2408;
	// addi r29,r29,-2400
	ctx.r29.s64 = ctx.r29.s64 + -2400;
	// addi r28,r28,-2380
	ctx.r28.s64 = ctx.r28.s64 + -2380;
	// addi r27,r27,-2368
	ctx.r27.s64 = ctx.r27.s64 + -2368;
	// addi r26,r26,-2348
	ctx.r26.s64 = ctx.r26.s64 + -2348;
	// addi r25,r25,-2340
	ctx.r25.s64 = ctx.r25.s64 + -2340;
	// addi r24,r24,-2324
	ctx.r24.s64 = ctx.r24.s64 + -2324;
	// addi r23,r23,-2300
	ctx.r23.s64 = ctx.r23.s64 + -2300;
	// addi r22,r22,-2280
	ctx.r22.s64 = ctx.r22.s64 + -2280;
	// addi r21,r21,-2268
	ctx.r21.s64 = ctx.r21.s64 + -2268;
	// addi r20,r20,-2252
	ctx.r20.s64 = ctx.r20.s64 + -2252;
	// addi r19,r19,-2236
	ctx.r19.s64 = ctx.r19.s64 + -2236;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r18,r18,-1428
	ctx.r18.s64 = ctx.r18.s64 + -1428;
	// std r20,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r20.u64);
	// addi r17,r17,-1416
	ctx.r17.s64 = ctx.r17.s64 + -1416;
	// addi r31,r31,-1372
	ctx.r31.s64 = ctx.r31.s64 + -1372;
	// lwz r20,104(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// std r19,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r19.u64);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// lis r31,-32234
	ctx.r31.s64 = -2112487424;
	// lwz r19,100(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r20,r20,-1308
	ctx.r20.s64 = ctx.r20.s64 + -1308;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// lwz r31,108(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r19,r19,-1320
	ctx.r19.s64 = ctx.r19.s64 + -1320;
	// lwz r14,80(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,-1288
	ctx.r31.s64 = ctx.r31.s64 + -1288;
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// lwz r19,116(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r14,r14,-1364
	ctx.r14.s64 = ctx.r14.s64 + -1364;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// ld r31,144(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ld r15,128(r1)
	ctx.r15.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// stw r14,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r14.u32);
	// lis r14,-32234
	ctx.r14.s64 = -2112487424;
	// stw r20,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r20.u32);
	// addi r15,r15,-1392
	ctx.r15.s64 = ctx.r15.s64 + -1392;
	// lwz r20,112(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// addi r11,r20,-1276
	ctx.r11.s64 = ctx.r20.s64 + -1276;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// ld r16,136(r1)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r16,r16,-1404
	ctx.r16.s64 = ctx.r16.s64 + -1404;
	// std r15,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r15.u64);
	// lwz r15,88(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,-1260
	ctx.r11.s64 = ctx.r11.s64 + -1260;
	// std r16,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r16.u64);
	// lis r16,-32234
	ctx.r16.s64 = -2112487424;
	// addi r15,r15,-1356
	ctx.r15.s64 = ctx.r15.s64 + -1356;
	// std r18,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r18.u64);
	// lwz r18,96(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r16,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r16.u32);
	// rotlwi r16,r16,0
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r16.u32, 0);
	// stw r8,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r8.u32);
	// rotlwi r8,r15,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r15.u32, 0);
	// stw r15,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r15.u32);
	// addi r18,r18,-1332
	ctx.r18.s64 = ctx.r18.s64 + -1332;
	// lwz r15,120(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// std r17,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r17.u64);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r17,92(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r5,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r5.u32);
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r17,r17,-1344
	ctx.r17.s64 = ctx.r17.s64 + -1344;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r18.u32);
	// addi r10,r14,-1248
	ctx.r10.s64 = ctx.r14.s64 + -1248;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// rotlwi r20,r17,0
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r17.u32, 0);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rotlwi r18,r18,0
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r18.u32, 0);
	// stw r17,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r17.u32);
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r3.u32);
	// addi r3,r31,440
	ctx.r3.s64 = ctx.r31.s64 + 440;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// addi r9,r16,-1236
	ctx.r9.s64 = ctx.r16.s64 + -1236;
	// lwz r16,112(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r8,r15,-1224
	ctx.r8.s64 = ctx.r15.s64 + -1224;
	// lwz r14,104(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r17,84(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r16,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// stw r7,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r7.u32);
	// stw r6,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r6.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// stw r29,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r29.u32);
	// stw r20,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// stw r14,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r14.u32);
	// lwz r14,120(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r19,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r19.u32);
	// stw r18,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// stw r17,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r17.u32);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r14,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r14.u32);
	// lwz r14,116(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// ld r20,152(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// ld r19,160(r1)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// ld r18,168(r1)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// ld r17,176(r1)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// stw r14,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r14.u32);
	// ld r16,184(r1)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// ld r15,192(r1)
	ctx.r15.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// stw r5,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r5.u32);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r28,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r28.u32);
	// stw r27,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r27.u32);
	// lwz r14,112(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r26,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r26.u32);
	// stw r25,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r25.u32);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r24,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r24.u32);
	// stw r14,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r14.u32);
	// lwz r14,108(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r23,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
	// stw r7,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r7.u32);
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r22,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r22.u32);
	// stw r14,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r14.u32);
	// lwz r14,104(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r21,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r21.u32);
	// stw r20,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r20.u32);
	// stw r19,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r19.u32);
	// stw r18,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r18.u32);
	// stw r17,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r17.u32);
	// stw r16,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r16.u32);
	// stw r15,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r15.u32);
	// stw r14,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r14.u32);
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// stw r10,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r10.u32);
	// stw r7,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r7.u32);
	// stw r6,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r6.u32);
	// stw r9,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r9.u32);
	// stw r8,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r8.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F57914;
	sub_82A4EFB0(ctx, base);
	// lis r5,-31948
	ctx.r5.s64 = -2093744128;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lwz r30,15944(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 15944);
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lwz r11,16644(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16644);
	// lwz r10,16764(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16764);
	// lis r4,-31948
	ctx.r4.s64 = -2093744128;
	// lwz r9,17004(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17004);
	// lis r3,-31948
	ctx.r3.s64 = -2093744128;
	// lwz r8,16612(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16612);
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// lwz r7,16952(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16952);
	// lis r28,-31948
	ctx.r28.s64 = -2093744128;
	// lwz r6,16508(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16508);
	// lis r5,-31948
	ctx.r5.s64 = -2093744128;
	// lis r27,-31948
	ctx.r27.s64 = -2093744128;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// lis r26,-31948
	ctx.r26.s64 = -2093744128;
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// lis r24,-31948
	ctx.r24.s64 = -2093744128;
	// stw r7,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r7.u32);
	// lis r23,-31948
	ctx.r23.s64 = -2093744128;
	// stw r6,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r6.u32);
	// lis r22,-31948
	ctx.r22.s64 = -2093744128;
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// lis r21,-31948
	ctx.r21.s64 = -2093744128;
	// lwz r7,15964(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 15964);
	// lis r5,-31948
	ctx.r5.s64 = -2093744128;
	// lwz r9,16780(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16780);
	// lis r17,-31948
	ctx.r17.s64 = -2093744128;
	// stw r5,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// lis r20,-31948
	ctx.r20.s64 = -2093744128;
	// lwz r8,17108(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17108);
	// lis r19,-31948
	ctx.r19.s64 = -2093744128;
	// lwz r11,16520(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16520);
	// lis r18,-31948
	ctx.r18.s64 = -2093744128;
	// lwz r10,16100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16100);
	// lis r16,-31948
	ctx.r16.s64 = -2093744128;
	// lwz r29,16204(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16204);
	// lis r15,-31948
	ctx.r15.s64 = -2093744128;
	// lwz r6,16308(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16308);
	// lis r14,-31948
	ctx.r14.s64 = -2093744128;
	// lwz r30,16052(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16052);
	// li r5,100
	ctx.r5.s64 = 100;
	// lwz r25,16332(r21)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16332);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r28,15912(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 15912);
	// addi r3,r31,696
	ctx.r3.s64 = ctx.r31.s64 + 696;
	// lwz r27,16584(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16584);
	// lwz r26,16156(r22)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16156);
	// lwz r21,16044(r17)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16044);
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r10,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r10.u32);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r9,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r9.u32);
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// stw r8,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r8.u32);
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lwz r24,16536(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16536);
	// lwz r23,16344(r19)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16344);
	// lwz r22,16356(r18)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16356);
	// stw r7,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r7.u32);
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lwz r17,136(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r6,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r6.u32);
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
	// lis r30,-31948
	ctx.r30.s64 = -2093744128;
	// stw r29,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r29.u32);
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// stw r28,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r28.u32);
	// lis r28,-31948
	ctx.r28.s64 = -2093744128;
	// stw r27,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r27.u32);
	// lis r27,-31948
	ctx.r27.s64 = -2093744128;
	// stw r26,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r26.u32);
	// lis r26,-31948
	ctx.r26.s64 = -2093744128;
	// stw r25,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r25.u32);
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
	// lwz r20,16968(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16968);
	// lwz r19,16828(r15)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r15.u32 + 16828);
	// lwz r18,16028(r14)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r14.u32 + 16028);
	// lwz r17,16312(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16312);
	// lwz r11,16212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16212);
	// lwz r10,16856(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16856);
	// lwz r9,17072(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17072);
	// lwz r8,16636(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16636);
	// lwz r7,16380(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16380);
	// lwz r6,16480(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16480);
	// lwz r30,16528(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16528);
	// lwz r29,16732(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16732);
	// lwz r28,16200(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16200);
	// lwz r27,16180(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16180);
	// lwz r26,16940(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16940);
	// lwz r25,17100(r25)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + 17100);
	// stw r24,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r24.u32);
	// stw r23,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r23.u32);
	// stw r22,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r22.u32);
	// stw r21,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r21.u32);
	// stw r20,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r20.u32);
	// stw r19,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r19.u32);
	// stw r18,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r18.u32);
	// stw r17,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r17.u32);
	// stw r11,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r11.u32);
	// stw r10,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r10.u32);
	// stw r9,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r9.u32);
	// stw r8,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r8.u32);
	// stw r7,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r7.u32);
	// stw r6,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r6.u32);
	// stw r30,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r30.u32);
	// stw r29,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r29.u32);
	// stw r28,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r28.u32);
	// stw r27,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r27.u32);
	// stw r26,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r26.u32);
	// stw r25,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r25.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F57B00;
	sub_82A4EFB0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r11,11
	ctx.r11.s64 = 11;
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// li r10,22
	ctx.r10.s64 = 22;
	// li r9,21
	ctx.r9.s64 = 21;
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// stb r10,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r10.u8);
	// li r11,12
	ctx.r11.s64 = 12;
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// li r10,24
	ctx.r10.s64 = 24;
	// li r9,23
	ctx.r9.s64 = 23;
	// stb r11,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r11.u8);
	// stb r10,803(r31)
	PPC_STORE_U8(ctx.r31.u32 + 803, ctx.r10.u8);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r9,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r9.u8);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,25
	ctx.r9.s64 = 25;
	// stb r11,805(r31)
	PPC_STORE_U8(ctx.r31.u32 + 805, ctx.r11.u8);
	// stb r10,806(r31)
	PPC_STORE_U8(ctx.r31.u32 + 806, ctx.r10.u8);
	// li r11,26
	ctx.r11.s64 = 26;
	// stb r9,804(r31)
	PPC_STORE_U8(ctx.r31.u32 + 804, ctx.r9.u8);
	// li r10,14
	ctx.r10.s64 = 14;
	// li r9,13
	ctx.r9.s64 = 13;
	// stb r11,808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 808, ctx.r11.u8);
	// stb r10,809(r31)
	PPC_STORE_U8(ctx.r31.u32 + 809, ctx.r10.u8);
	// li r11,15
	ctx.r11.s64 = 15;
	// stb r9,807(r31)
	PPC_STORE_U8(ctx.r31.u32 + 807, ctx.r9.u8);
	// li r10,27
	ctx.r10.s64 = 27;
	// li r9,28
	ctx.r9.s64 = 28;
	// stb r11,810(r31)
	PPC_STORE_U8(ctx.r31.u32 + 810, ctx.r11.u8);
	// stb r10,811(r31)
	PPC_STORE_U8(ctx.r31.u32 + 811, ctx.r10.u8);
	// li r11,16
	ctx.r11.s64 = 16;
	// stb r9,812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 812, ctx.r9.u8);
	// li r10,29
	ctx.r10.s64 = 29;
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r11,813(r31)
	PPC_STORE_U8(ctx.r31.u32 + 813, ctx.r11.u8);
	// stb r10,814(r31)
	PPC_STORE_U8(ctx.r31.u32 + 814, ctx.r10.u8);
	// li r11,17
	ctx.r11.s64 = 17;
	// stb r9,815(r31)
	PPC_STORE_U8(ctx.r31.u32 + 815, ctx.r9.u8);
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,30
	ctx.r9.s64 = 30;
	// stb r11,816(r31)
	PPC_STORE_U8(ctx.r31.u32 + 816, ctx.r11.u8);
	// stb r10,817(r31)
	PPC_STORE_U8(ctx.r31.u32 + 817, ctx.r10.u8);
	// li r11,31
	ctx.r11.s64 = 31;
	// stb r9,818(r31)
	PPC_STORE_U8(ctx.r31.u32 + 818, ctx.r9.u8);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,819(r31)
	PPC_STORE_U8(ctx.r31.u32 + 819, ctx.r11.u8);
	// stb r10,820(r31)
	PPC_STORE_U8(ctx.r31.u32 + 820, ctx.r10.u8);
	// li r11,33
	ctx.r11.s64 = 33;
	// stb r9,821(r31)
	PPC_STORE_U8(ctx.r31.u32 + 821, ctx.r9.u8);
	// li r10,34
	ctx.r10.s64 = 34;
	// li r9,18
	ctx.r9.s64 = 18;
	// stb r11,822(r31)
	PPC_STORE_U8(ctx.r31.u32 + 822, ctx.r11.u8);
	// stb r10,823(r31)
	PPC_STORE_U8(ctx.r31.u32 + 823, ctx.r10.u8);
	// li r11,35
	ctx.r11.s64 = 35;
	// li r10,36
	ctx.r10.s64 = 36;
	// stb r9,824(r31)
	PPC_STORE_U8(ctx.r31.u32 + 824, ctx.r9.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r11,825(r31)
	PPC_STORE_U8(ctx.r31.u32 + 825, ctx.r11.u8);
	// stb r10,826(r31)
	PPC_STORE_U8(ctx.r31.u32 + 826, ctx.r10.u8);
	// li r11,19
	ctx.r11.s64 = 19;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r9,827(r31)
	PPC_STORE_U8(ctx.r31.u32 + 827, ctx.r9.u8);
	// li r9,37
	ctx.r9.s64 = 37;
	// stb r11,828(r31)
	PPC_STORE_U8(ctx.r31.u32 + 828, ctx.r11.u8);
	// stb r10,829(r31)
	PPC_STORE_U8(ctx.r31.u32 + 829, ctx.r10.u8);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r9,830(r31)
	PPC_STORE_U8(ctx.r31.u32 + 830, ctx.r9.u8);
	// stb r11,831(r31)
	PPC_STORE_U8(ctx.r31.u32 + 831, ctx.r11.u8);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r11,38
	ctx.r11.s64 = 38;
	// stb r10,832(r31)
	PPC_STORE_U8(ctx.r31.u32 + 832, ctx.r10.u8);
	// li r5,25
	ctx.r5.s64 = 25;
	// stb r9,833(r31)
	PPC_STORE_U8(ctx.r31.u32 + 833, ctx.r9.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,834(r31)
	PPC_STORE_U8(ctx.r31.u32 + 834, ctx.r11.u8);
	// addi r3,r31,835
	ctx.r3.s64 = ctx.r31.s64 + 835;
	// bl 0x82a4efb0
	ctx.lr = 0x82F57C48;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r11,59
	ctx.r11.s64 = 59;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// li r10,63
	ctx.r10.s64 = 63;
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r9,199
	ctx.r9.s64 = 199;
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// stw r11,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r11.u32);
	// li r10,55
	ctx.r10.s64 = 55;
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// li r11,27
	ctx.r11.s64 = 27;
	// li r9,39
	ctx.r9.s64 = 39;
	// stw r10,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r10.u32);
	// stw r11,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r11.u32);
	// li r10,75
	ctx.r10.s64 = 75;
	// stw r9,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r9.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r9,123
	ctx.r9.s64 = 123;
	// stw r10,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r10.u32);
	// stw r11,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r11.u32);
	// li r10,107
	ctx.r10.s64 = 107;
	// stw r9,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r9.u32);
	// li r11,155
	ctx.r11.s64 = 155;
	// li r9,71
	ctx.r9.s64 = 71;
	// stw r10,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r10.u32);
	// stw r11,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r9.u32);
	// li r11,139
	ctx.r11.s64 = 139;
	// li r9,91
	ctx.r9.s64 = 91;
	// stw r10,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r10.u32);
	// stw r11,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r11.u32);
	// li r10,283
	ctx.r10.s64 = 283;
	// stw r9,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r9.u32);
	// li r11,347
	ctx.r11.s64 = 347;
	// li r9,67
	ctx.r9.s64 = 67;
	// stw r10,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r10.u32);
	// stw r11,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r11.u32);
	// li r10,23
	ctx.r10.s64 = 23;
	// stw r9,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r9.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r9,47
	ctx.r9.s64 = 47;
	// stw r10,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r10.u32);
	// stw r11,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r11.u32);
	// li r10,43
	ctx.r10.s64 = 43;
	// stw r9,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r9.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// li r9,35
	ctx.r9.s64 = 35;
	// stw r10,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r10.u32);
	// stw r11,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r11.u32);
	// li r10,171
	ctx.r10.s64 = 171;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r9,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r9.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// stw r10,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r10.u32);
	// stw r11,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r11.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// li r11,51
	ctx.r11.s64 = 51;
	// stw r9,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r9.u32);
	// li r9,227
	ctx.r9.s64 = 227;
	// stw r10,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r10.u32);
	// stw r11,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r11.u32);
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 988, ctx.r9.u32);
	// addi r3,r31,1016
	ctx.r3.s64 = ctx.r31.s64 + 1016;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r10.u32);
	// stw r11,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r11.u32);
	// li r10,31
	ctx.r10.s64 = 31;
	// stw r9,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r9.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r9,19
	ctx.r9.s64 = 19;
	// stw r10,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r10.u32);
	// stw r11,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r11.u32);
	// stw r9,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r9.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F57D90;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82a4ea20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F57DA8"))) PPC_WEAK_FUNC(sub_82F57DA8);
PPC_FUNC_IMPL(__imp__sub_82F57DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,236
	ctx.r5.s64 = 236;
	// addi r31,r10,-10552
	ctx.r31.s64 = ctx.r10.s64 + -10552;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16096);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F57DDC;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r11,r8,-1200
	ctx.r11.s64 = ctx.r8.s64 + -1200;
	// addi r9,r9,-1212
	ctx.r9.s64 = ctx.r9.s64 + -1212;
	// addi r10,r7,-1180
	ctx.r10.s64 = ctx.r7.s64 + -1180;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// li r5,236
	ctx.r5.s64 = 236;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// bl 0x82a4efb0
	ctx.lr = 0x82F57E28;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lwz r11,17064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17064);
	// li r5,236
	ctx.r5.s64 = 236;
	// lwz r10,16652(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16652);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,16272(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16272);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// lwz r8,16028(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16028);
	// lwz r7,16380(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16380);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// stw r7,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r7.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F57E74;
	sub_82A4EFB0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// li r5,59
	ctx.r5.s64 = 59;
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r10,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r10.u8);
	// addi r3,r31,801
	ctx.r3.s64 = ctx.r31.s64 + 801;
	// bl 0x82a4efb0
	ctx.lr = 0x82F57EAC;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,236
	ctx.r5.s64 = 236;
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r11.u32);
	// addi r3,r31,880
	ctx.r3.s64 = ctx.r31.s64 + 880;
	// bl 0x82a4efb0
	ctx.lr = 0x82F57EE4;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F57F08"))) PPC_WEAK_FUNC(sub_82F57F08);
PPC_FUNC_IMPL(__imp__sub_82F57F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82F57F10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,224
	ctx.r5.s64 = 224;
	// addi r31,r10,2888
	ctx.r31.s64 = ctx.r10.s64 + 2888;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16816);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F57F38;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r11,r8,-1200
	ctx.r11.s64 = ctx.r8.s64 + -1200;
	// addi r9,r9,-1212
	ctx.r9.s64 = ctx.r9.s64 + -1212;
	// addi r10,r7,-1180
	ctx.r10.s64 = ctx.r7.s64 + -1180;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// addi r11,r5,-1156
	ctx.r11.s64 = ctx.r5.s64 + -1156;
	// addi r10,r4,-1148
	ctx.r10.s64 = ctx.r4.s64 + -1148;
	// addi r9,r6,-1168
	ctx.r9.s64 = ctx.r6.s64 + -1168;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// li r5,224
	ctx.r5.s64 = 224;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// bl 0x82a4efb0
	ctx.lr = 0x82F57FA8;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lwz r11,16216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16216);
	// lis r30,-31948
	ctx.r30.s64 = -2093744128;
	// lwz r10,17064(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17064);
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// lwz r9,16652(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16652);
	// lwz r8,16272(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16272);
	// li r5,224
	ctx.r5.s64 = 224;
	// lwz r7,16028(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16028);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,16380(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16380);
	// addi r3,r31,572
	ctx.r3.s64 = ctx.r31.s64 + 572;
	// lwz r30,17052(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 17052);
	// lwz r29,16436(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16436);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// stw r7,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r7.u32);
	// stw r6,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r6.u32);
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// stw r29,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r29.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F58018;
	sub_82A4EFB0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r10,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r10.u8);
	// stb r11,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r11.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r9,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r9.u8);
	// li r5,56
	ctx.r5.s64 = 56;
	// stb r11,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,804
	ctx.r3.s64 = ctx.r31.s64 + 804;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r11,7
	ctx.r11.s64 = 7;
	// stb r10,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r10.u8);
	// stb r9,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r9.u8);
	// stb r11,803(r31)
	PPC_STORE_U8(ctx.r31.u32 + 803, ctx.r11.u8);
	// bl 0x82a4efb0
	ctx.lr = 0x82F58068;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// li r11,42
	ctx.r11.s64 = 42;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// li r9,70
	ctx.r9.s64 = 70;
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,26
	ctx.r10.s64 = 26;
	// stw r9,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r9.u32);
	// li r5,224
	ctx.r5.s64 = 224;
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// addi r3,r31,892
	ctx.r3.s64 = ctx.r31.s64 + 892;
	// bl 0x82a4efb0
	ctx.lr = 0x82F580B8;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F580D0"))) PPC_WEAK_FUNC(sub_82F580D0);
PPC_FUNC_IMPL(__imp__sub_82F580D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82F580D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,216
	ctx.r5.s64 = 216;
	// addi r31,r10,-3832
	ctx.r31.s64 = ctx.r10.s64 + -3832;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,17116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17116);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F58100;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// addi r9,r9,-1212
	ctx.r9.s64 = ctx.r9.s64 + -1212;
	// addi r11,r8,-1200
	ctx.r11.s64 = ctx.r8.s64 + -1200;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// addi r10,r7,-1180
	ctx.r10.s64 = ctx.r7.s64 + -1180;
	// addi r11,r5,-1132
	ctx.r11.s64 = ctx.r5.s64 + -1132;
	// addi r9,r6,-1140
	ctx.r9.s64 = ctx.r6.s64 + -1140;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// lis r30,-32234
	ctx.r30.s64 = -2112487424;
	// addi r10,r4,-1120
	ctx.r10.s64 = ctx.r4.s64 + -1120;
	// addi r9,r3,-1112
	ctx.r9.s64 = ctx.r3.s64 + -1112;
	// addi r11,r30,-1100
	ctx.r11.s64 = ctx.r30.s64 + -1100;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// li r5,216
	ctx.r5.s64 = 216;
	// stw r9,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// addi r3,r31,324
	ctx.r3.s64 = ctx.r31.s64 + 324;
	// bl 0x82a4efb0
	ctx.lr = 0x82F58188;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r3,-31948
	ctx.r3.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lwz r11,17064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17064);
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lwz r30,16028(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16028);
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// lwz r10,16220(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16220);
	// lis r28,-31948
	ctx.r28.s64 = -2093744128;
	// lwz r9,16652(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16652);
	// lis r27,-31948
	ctx.r27.s64 = -2093744128;
	// lwz r8,16188(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16188);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// li r5,216
	ctx.r5.s64 = 216;
	// lwz r7,16272(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16272);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,16004(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16004);
	// addi r3,r31,580
	ctx.r3.s64 = ctx.r31.s64 + 580;
	// lwz r29,16640(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16640);
	// lwz r11,16380(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16380);
	// lwz r28,16224(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16224);
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// stw r7,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r7.u32);
	// stw r6,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r6.u32);
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// stw r29,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r29.u32);
	// stw r28,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r28.u32);
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F58210;
	sub_82A4EFB0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,3
	ctx.r9.s64 = 3;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r11,6
	ctx.r11.s64 = 6;
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// li r9,7
	ctx.r9.s64 = 7;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r10.u8);
	// stb r9,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r9.u8);
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r11,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r11.u8);
	// li r9,9
	ctx.r9.s64 = 9;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r10,803(r31)
	PPC_STORE_U8(ctx.r31.u32 + 803, ctx.r10.u8);
	// li r5,54
	ctx.r5.s64 = 54;
	// stb r9,804(r31)
	PPC_STORE_U8(ctx.r31.u32 + 804, ctx.r9.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,805(r31)
	PPC_STORE_U8(ctx.r31.u32 + 805, ctx.r11.u8);
	// addi r3,r31,806
	ctx.r3.s64 = ctx.r31.s64 + 806;
	// bl 0x82a4efb0
	ctx.lr = 0x82F58270;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r11,48
	ctx.r11.s64 = 48;
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// stw r9,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r9.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// li r5,216
	ctx.r5.s64 = 216;
	// stw r9,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r11.u32);
	// addi r3,r31,900
	ctx.r3.s64 = ctx.r31.s64 + 900;
	// bl 0x82a4efb0
	ctx.lr = 0x82F582D0;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F582E8"))) PPC_WEAK_FUNC(sub_82F582E8);
PPC_FUNC_IMPL(__imp__sub_82F582E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82F582F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,212
	ctx.r5.s64 = 212;
	// addi r31,r10,6248
	ctx.r31.s64 = ctx.r10.s64 + 6248;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16676(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16676);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F58318;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r11,r8,-1200
	ctx.r11.s64 = ctx.r8.s64 + -1200;
	// addi r9,r9,-1212
	ctx.r9.s64 = ctx.r9.s64 + -1212;
	// addi r10,r7,-1180
	ctx.r10.s64 = ctx.r7.s64 + -1180;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// addi r11,r5,-1076
	ctx.r11.s64 = ctx.r5.s64 + -1076;
	// addi r10,r4,-1064
	ctx.r10.s64 = ctx.r4.s64 + -1064;
	// addi r9,r6,-1088
	ctx.r9.s64 = ctx.r6.s64 + -1088;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// lis r30,-32234
	ctx.r30.s64 = -2112487424;
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// lis r29,-32234
	ctx.r29.s64 = -2112487424;
	// addi r9,r3,-1048
	ctx.r9.s64 = ctx.r3.s64 + -1048;
	// addi r11,r30,-1032
	ctx.r11.s64 = ctx.r30.s64 + -1032;
	// addi r10,r29,-1020
	ctx.r10.s64 = ctx.r29.s64 + -1020;
	// stw r9,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// li r5,212
	ctx.r5.s64 = 212;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// bl 0x82a4efb0
	ctx.lr = 0x82F583AC;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r3,-31948
	ctx.r3.s64 = -2093744128;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lwz r11,17064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17064);
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lwz r10,16908(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16908);
	// lis r6,-31948
	ctx.r6.s64 = -2093744128;
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// lwz r9,17040(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17040);
	// lis r28,-31948
	ctx.r28.s64 = -2093744128;
	// lwz r30,16272(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16272);
	// lis r27,-31948
	ctx.r27.s64 = -2093744128;
	// lwz r8,16652(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16652);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// lis r26,-31948
	ctx.r26.s64 = -2093744128;
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// li r5,212
	ctx.r5.s64 = 212;
	// lwz r7,16616(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16616);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,15936(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 15936);
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// lwz r29,16028(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16028);
	// lwz r11,16996(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16996);
	// lwz r10,16056(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16056);
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// lwz r9,16380(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16380);
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// stw r7,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r7.u32);
	// stw r6,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r6.u32);
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// stw r29,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r29.u32);
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// stw r10,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r10.u32);
	// stw r9,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r9.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F58440;
	sub_82A4EFB0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r9,6
	ctx.r9.s64 = 6;
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// li r9,8
	ctx.r9.s64 = 8;
	// stb r10,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r10.u8);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r9,801(r31)
	PPC_STORE_U8(ctx.r31.u32 + 801, ctx.r9.u8);
	// stb r11,802(r31)
	PPC_STORE_U8(ctx.r31.u32 + 802, ctx.r11.u8);
	// li r9,9
	ctx.r9.s64 = 9;
	// stb r10,803(r31)
	PPC_STORE_U8(ctx.r31.u32 + 803, ctx.r10.u8);
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r9,804(r31)
	PPC_STORE_U8(ctx.r31.u32 + 804, ctx.r9.u8);
	// li r5,53
	ctx.r5.s64 = 53;
	// stb r11,805(r31)
	PPC_STORE_U8(ctx.r31.u32 + 805, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r10,806(r31)
	PPC_STORE_U8(ctx.r31.u32 + 806, ctx.r10.u8);
	// addi r3,r31,807
	ctx.r3.s64 = ctx.r31.s64 + 807;
	// bl 0x82a4efb0
	ctx.lr = 0x82F584A8;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r9,18
	ctx.r9.s64 = 18;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// li r9,106
	ctx.r9.s64 = 106;
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// li r11,50
	ctx.r11.s64 = 50;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r9,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r9.u32);
	// stw r11,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
	// li r11,78
	ctx.r11.s64 = 78;
	// li r10,14
	ctx.r10.s64 = 14;
	// stw r9,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r9.u32);
	// li r5,212
	ctx.r5.s64 = 212;
	// stw r11,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r10.u32);
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// bl 0x82a4efb0
	ctx.lr = 0x82F58510;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F58528"))) PPC_WEAK_FUNC(sub_82F58528);
PPC_FUNC_IMPL(__imp__sub_82F58528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,236
	ctx.r5.s64 = 236;
	// addi r31,r10,24168
	ctx.r31.s64 = ctx.r10.s64 + 24168;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,15992(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15992);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F5855C;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r11,r8,-1200
	ctx.r11.s64 = ctx.r8.s64 + -1200;
	// addi r9,r9,-1212
	ctx.r9.s64 = ctx.r9.s64 + -1212;
	// addi r10,r7,-1180
	ctx.r10.s64 = ctx.r7.s64 + -1180;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// li r5,236
	ctx.r5.s64 = 236;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// bl 0x82a4efb0
	ctx.lr = 0x82F585A8;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lwz r11,17064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17064);
	// li r5,236
	ctx.r5.s64 = 236;
	// lwz r10,16652(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16652);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,16272(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16272);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// lwz r8,16028(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16028);
	// lwz r7,16380(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16380);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// stw r7,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r7.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F585F4;
	sub_82A4EFB0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// li r5,59
	ctx.r5.s64 = 59;
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r10,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r10.u8);
	// addi r3,r31,801
	ctx.r3.s64 = ctx.r31.s64 + 801;
	// bl 0x82a4efb0
	ctx.lr = 0x82F5862C;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,236
	ctx.r5.s64 = 236;
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r11.u32);
	// addi r3,r31,880
	ctx.r3.s64 = ctx.r31.s64 + 880;
	// bl 0x82a4efb0
	ctx.lr = 0x82F58664;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F58688"))) PPC_WEAK_FUNC(sub_82F58688);
PPC_FUNC_IMPL(__imp__sub_82F58688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,236
	ctx.r5.s64 = 236;
	// addi r31,r10,-11672
	ctx.r31.s64 = ctx.r10.s64 + -11672;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16580);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F586BC;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r11,r11,-2512
	ctx.r11.s64 = ctx.r11.s64 + -2512;
	// addi r10,r10,-2496
	ctx.r10.s64 = ctx.r10.s64 + -2496;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r11,r8,-1200
	ctx.r11.s64 = ctx.r8.s64 + -1200;
	// addi r9,r9,-1212
	ctx.r9.s64 = ctx.r9.s64 + -1212;
	// addi r10,r7,-1180
	ctx.r10.s64 = ctx.r7.s64 + -1180;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// li r5,236
	ctx.r5.s64 = 236;
	// stw r9,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// bl 0x82a4efb0
	ctx.lr = 0x82F58708;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lwz r11,17064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17064);
	// li r5,236
	ctx.r5.s64 = 236;
	// lwz r10,16652(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16652);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,16272(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16272);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// lwz r8,16028(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16028);
	// lwz r7,16380(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16380);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// stw r8,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r8.u32);
	// stw r7,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r7.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82F58754;
	sub_82A4EFB0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r11,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r11.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r10,797(r31)
	PPC_STORE_U8(ctx.r31.u32 + 797, ctx.r10.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r9,798(r31)
	PPC_STORE_U8(ctx.r31.u32 + 798, ctx.r9.u8);
	// li r5,59
	ctx.r5.s64 = 59;
	// stb r11,799(r31)
	PPC_STORE_U8(ctx.r31.u32 + 799, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r10,800(r31)
	PPC_STORE_U8(ctx.r31.u32 + 800, ctx.r10.u8);
	// addi r3,r31,801
	ctx.r3.s64 = ctx.r31.s64 + 801;
	// bl 0x82a4efb0
	ctx.lr = 0x82F5878C;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,236
	ctx.r5.s64 = 236;
	// stw r9,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r11.u32);
	// addi r3,r31,880
	ctx.r3.s64 = ctx.r31.s64 + 880;
	// bl 0x82a4efb0
	ctx.lr = 0x82F587C4;
	sub_82A4EFB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1116
	ctx.r11.s64 = ctx.r31.s64 + 1116;
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

