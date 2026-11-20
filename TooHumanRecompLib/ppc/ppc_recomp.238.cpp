#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F2A838"))) PPC_WEAK_FUNC(sub_82F2A838);
PPC_FUNC_IMPL(__imp__sub_82F2A838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,32384
	ctx.r3.s64 = ctx.r9.s64 + 32384;
	// stw r10,-19832(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19832, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2A850"))) PPC_WEAK_FUNC(sub_82F2A850);
PPC_FUNC_IMPL(__imp__sub_82F2A850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2A864;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-5984
	ctx.r3.s64 = ctx.r11.s64 + -5984;
	// bl 0x82816528
	ctx.lr = 0x82F2A874;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272b760
	ctx.lr = 0x82F2A888;
	sub_8272B760(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1521(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1521, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A8A8"))) PPC_WEAK_FUNC(sub_82F2A8A8);
PPC_FUNC_IMPL(__imp__sub_82F2A8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2A8BC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-5952
	ctx.r3.s64 = ctx.r11.s64 + -5952;
	// bl 0x82816528
	ctx.lr = 0x82F2A8CC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272b760
	ctx.lr = 0x82F2A8E0;
	sub_8272B760(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1522(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1522, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A900"))) PPC_WEAK_FUNC(sub_82F2A900);
PPC_FUNC_IMPL(__imp__sub_82F2A900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2A914;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-5916
	ctx.r3.s64 = ctx.r11.s64 + -5916;
	// bl 0x82816528
	ctx.lr = 0x82F2A924;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-16312
	ctx.r3.s64 = ctx.r11.s64 + -16312;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272b760
	ctx.lr = 0x82F2A938;
	sub_8272B760(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1523(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1523, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A958"))) PPC_WEAK_FUNC(sub_82F2A958);
PPC_FUNC_IMPL(__imp__sub_82F2A958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2A96C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-5880
	ctx.r3.s64 = ctx.r11.s64 + -5880;
	// bl 0x82816528
	ctx.lr = 0x82F2A97C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-16104
	ctx.r3.s64 = ctx.r11.s64 + -16104;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272b760
	ctx.lr = 0x82F2A990;
	sub_8272B760(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1524(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1524, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2A9B0"))) PPC_WEAK_FUNC(sub_82F2A9B0);
PPC_FUNC_IMPL(__imp__sub_82F2A9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2A9C4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-5844
	ctx.r3.s64 = ctx.r11.s64 + -5844;
	// bl 0x82816528
	ctx.lr = 0x82F2A9D4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-15880
	ctx.r3.s64 = ctx.r11.s64 + -15880;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272b760
	ctx.lr = 0x82F2A9E8;
	sub_8272B760(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1525(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1525, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2AA08"))) PPC_WEAK_FUNC(sub_82F2AA08);
PPC_FUNC_IMPL(__imp__sub_82F2AA08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2AA1C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-5808
	ctx.r3.s64 = ctx.r11.s64 + -5808;
	// bl 0x82816528
	ctx.lr = 0x82F2AA2C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-6568
	ctx.r3.s64 = ctx.r11.s64 + -6568;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272b760
	ctx.lr = 0x82F2AA40;
	sub_8272B760(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1526(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1526, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2AA60"))) PPC_WEAK_FUNC(sub_82F2AA60);
PPC_FUNC_IMPL(__imp__sub_82F2AA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,32496
	ctx.r3.s64 = ctx.r9.s64 + 32496;
	// stw r10,-19808(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19808, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2AA78"))) PPC_WEAK_FUNC(sub_82F2AA78);
PPC_FUNC_IMPL(__imp__sub_82F2AA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2AA8C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-5280
	ctx.r3.s64 = ctx.r11.s64 + -5280;
	// bl 0x82816528
	ctx.lr = 0x82F2AA9C;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272c490
	ctx.lr = 0x82F2AAB0;
	sub_8272C490(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1527(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1527, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2AAD0"))) PPC_WEAK_FUNC(sub_82F2AAD0);
PPC_FUNC_IMPL(__imp__sub_82F2AAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2AAE4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-5248
	ctx.r3.s64 = ctx.r11.s64 + -5248;
	// bl 0x82816528
	ctx.lr = 0x82F2AAF4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272c490
	ctx.lr = 0x82F2AB08;
	sub_8272C490(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1528(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1528, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2AB28"))) PPC_WEAK_FUNC(sub_82F2AB28);
PPC_FUNC_IMPL(__imp__sub_82F2AB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2AB3C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-5212
	ctx.r3.s64 = ctx.r11.s64 + -5212;
	// bl 0x82816528
	ctx.lr = 0x82F2AB4C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-6568
	ctx.r3.s64 = ctx.r11.s64 + -6568;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272c490
	ctx.lr = 0x82F2AB60;
	sub_8272C490(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1529(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1529, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2AB80"))) PPC_WEAK_FUNC(sub_82F2AB80);
PPC_FUNC_IMPL(__imp__sub_82F2AB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,32608
	ctx.r3.s64 = ctx.r9.s64 + 32608;
	// stw r10,-19784(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19784, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2AB98"))) PPC_WEAK_FUNC(sub_82F2AB98);
PPC_FUNC_IMPL(__imp__sub_82F2AB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2ABAC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-5032
	ctx.r3.s64 = ctx.r11.s64 + -5032;
	// bl 0x82816528
	ctx.lr = 0x82F2ABBC;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272ca78
	ctx.lr = 0x82F2ABD0;
	sub_8272CA78(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1530(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1530, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2ABF0"))) PPC_WEAK_FUNC(sub_82F2ABF0);
PPC_FUNC_IMPL(__imp__sub_82F2ABF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2AC04;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-5000
	ctx.r3.s64 = ctx.r11.s64 + -5000;
	// bl 0x82816528
	ctx.lr = 0x82F2AC14;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272ca78
	ctx.lr = 0x82F2AC28;
	sub_8272CA78(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1531(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1531, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2AC48"))) PPC_WEAK_FUNC(sub_82F2AC48);
PPC_FUNC_IMPL(__imp__sub_82F2AC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2AC5C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-4964
	ctx.r3.s64 = ctx.r11.s64 + -4964;
	// bl 0x82816528
	ctx.lr = 0x82F2AC6C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-6568
	ctx.r3.s64 = ctx.r11.s64 + -6568;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272ca78
	ctx.lr = 0x82F2AC80;
	sub_8272CA78(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1532(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1532, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2ACA0"))) PPC_WEAK_FUNC(sub_82F2ACA0);
PPC_FUNC_IMPL(__imp__sub_82F2ACA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2ACB4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-4932
	ctx.r3.s64 = ctx.r11.s64 + -4932;
	// bl 0x82816528
	ctx.lr = 0x82F2ACC4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-12104
	ctx.r3.s64 = ctx.r11.s64 + -12104;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272ca78
	ctx.lr = 0x82F2ACD8;
	sub_8272CA78(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1533(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1533, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2ACF8"))) PPC_WEAK_FUNC(sub_82F2ACF8);
PPC_FUNC_IMPL(__imp__sub_82F2ACF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2AD0C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-4896
	ctx.r3.s64 = ctx.r11.s64 + -4896;
	// bl 0x82816528
	ctx.lr = 0x82F2AD1C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-11808
	ctx.r3.s64 = ctx.r11.s64 + -11808;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272ca78
	ctx.lr = 0x82F2AD30;
	sub_8272CA78(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1534(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1534, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2AD50"))) PPC_WEAK_FUNC(sub_82F2AD50);
PPC_FUNC_IMPL(__imp__sub_82F2AD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31982
	ctx.r9.s64 = -2095972352;
	// addi r3,r9,32720
	ctx.r3.s64 = ctx.r9.s64 + 32720;
	// stw r10,-19760(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19760, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2AD68"))) PPC_WEAK_FUNC(sub_82F2AD68);
PPC_FUNC_IMPL(__imp__sub_82F2AD68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2AD7C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-4504
	ctx.r3.s64 = ctx.r11.s64 + -4504;
	// bl 0x82816528
	ctx.lr = 0x82F2AD8C;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272d428
	ctx.lr = 0x82F2ADA0;
	sub_8272D428(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1535(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1535, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2ADC0"))) PPC_WEAK_FUNC(sub_82F2ADC0);
PPC_FUNC_IMPL(__imp__sub_82F2ADC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2ADD4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-4472
	ctx.r3.s64 = ctx.r11.s64 + -4472;
	// bl 0x82816528
	ctx.lr = 0x82F2ADE4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-9616
	ctx.r3.s64 = ctx.r11.s64 + -9616;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272d428
	ctx.lr = 0x82F2ADF8;
	sub_8272D428(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1536(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1536, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2AE18"))) PPC_WEAK_FUNC(sub_82F2AE18);
PPC_FUNC_IMPL(__imp__sub_82F2AE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2AE2C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-4436
	ctx.r3.s64 = ctx.r11.s64 + -4436;
	// bl 0x82816528
	ctx.lr = 0x82F2AE3C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272d428
	ctx.lr = 0x82F2AE50;
	sub_8272D428(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1537(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1537, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2AE70"))) PPC_WEAK_FUNC(sub_82F2AE70);
PPC_FUNC_IMPL(__imp__sub_82F2AE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2AE84;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-4400
	ctx.r3.s64 = ctx.r11.s64 + -4400;
	// bl 0x82816528
	ctx.lr = 0x82F2AE94;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-6568
	ctx.r3.s64 = ctx.r11.s64 + -6568;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272d428
	ctx.lr = 0x82F2AEA8;
	sub_8272D428(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1538(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1538, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2AEC8"))) PPC_WEAK_FUNC(sub_82F2AEC8);
PPC_FUNC_IMPL(__imp__sub_82F2AEC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2AEDC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-4368
	ctx.r3.s64 = ctx.r11.s64 + -4368;
	// bl 0x82816528
	ctx.lr = 0x82F2AEEC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-9432
	ctx.r3.s64 = ctx.r11.s64 + -9432;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272d428
	ctx.lr = 0x82F2AF00;
	sub_8272D428(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1539(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1539, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2AF20"))) PPC_WEAK_FUNC(sub_82F2AF20);
PPC_FUNC_IMPL(__imp__sub_82F2AF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2AF34;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-4332
	ctx.r3.s64 = ctx.r11.s64 + -4332;
	// bl 0x82816528
	ctx.lr = 0x82F2AF44;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-31504
	ctx.r3.s64 = ctx.r11.s64 + -31504;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272d428
	ctx.lr = 0x82F2AF58;
	sub_8272D428(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1540(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1540, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2AF78"))) PPC_WEAK_FUNC(sub_82F2AF78);
PPC_FUNC_IMPL(__imp__sub_82F2AF78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-32704
	ctx.r3.s64 = ctx.r9.s64 + -32704;
	// stw r10,-19736(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19736, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2AF90"))) PPC_WEAK_FUNC(sub_82F2AF90);
PPC_FUNC_IMPL(__imp__sub_82F2AF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2AFA4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-4048
	ctx.r3.s64 = ctx.r11.s64 + -4048;
	// bl 0x82816528
	ctx.lr = 0x82F2AFB4;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272dc80
	ctx.lr = 0x82F2AFC8;
	sub_8272DC80(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1541(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1541, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2AFE8"))) PPC_WEAK_FUNC(sub_82F2AFE8);
PPC_FUNC_IMPL(__imp__sub_82F2AFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2AFFC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-4016
	ctx.r3.s64 = ctx.r11.s64 + -4016;
	// bl 0x82816528
	ctx.lr = 0x82F2B00C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272dc80
	ctx.lr = 0x82F2B020;
	sub_8272DC80(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1542(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1542, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B040"))) PPC_WEAK_FUNC(sub_82F2B040);
PPC_FUNC_IMPL(__imp__sub_82F2B040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2B054;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-3980
	ctx.r3.s64 = ctx.r11.s64 + -3980;
	// bl 0x82816528
	ctx.lr = 0x82F2B064;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-6568
	ctx.r3.s64 = ctx.r11.s64 + -6568;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272dc80
	ctx.lr = 0x82F2B078;
	sub_8272DC80(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1543(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1543, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B098"))) PPC_WEAK_FUNC(sub_82F2B098);
PPC_FUNC_IMPL(__imp__sub_82F2B098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-32592
	ctx.r3.s64 = ctx.r9.s64 + -32592;
	// stw r10,-19712(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19712, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2B0B0"))) PPC_WEAK_FUNC(sub_82F2B0B0);
PPC_FUNC_IMPL(__imp__sub_82F2B0B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2B0C4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-3656
	ctx.r3.s64 = ctx.r11.s64 + -3656;
	// bl 0x82816528
	ctx.lr = 0x82F2B0D4;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272e228
	ctx.lr = 0x82F2B0E8;
	sub_8272E228(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1544(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1544, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B108"))) PPC_WEAK_FUNC(sub_82F2B108);
PPC_FUNC_IMPL(__imp__sub_82F2B108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2B11C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-3624
	ctx.r3.s64 = ctx.r11.s64 + -3624;
	// bl 0x82816528
	ctx.lr = 0x82F2B12C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272e228
	ctx.lr = 0x82F2B140;
	sub_8272E228(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1545(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1545, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B160"))) PPC_WEAK_FUNC(sub_82F2B160);
PPC_FUNC_IMPL(__imp__sub_82F2B160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2B174;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-3588
	ctx.r3.s64 = ctx.r11.s64 + -3588;
	// bl 0x82816528
	ctx.lr = 0x82F2B184;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-6568
	ctx.r3.s64 = ctx.r11.s64 + -6568;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272e228
	ctx.lr = 0x82F2B198;
	sub_8272E228(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1546(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1546, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B1B8"))) PPC_WEAK_FUNC(sub_82F2B1B8);
PPC_FUNC_IMPL(__imp__sub_82F2B1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-32480
	ctx.r3.s64 = ctx.r9.s64 + -32480;
	// stw r10,-19688(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19688, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2B1D0"))) PPC_WEAK_FUNC(sub_82F2B1D0);
PPC_FUNC_IMPL(__imp__sub_82F2B1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2B1E4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-3416
	ctx.r3.s64 = ctx.r11.s64 + -3416;
	// bl 0x82816528
	ctx.lr = 0x82F2B1F4;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272e790
	ctx.lr = 0x82F2B208;
	sub_8272E790(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1547(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1547, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B228"))) PPC_WEAK_FUNC(sub_82F2B228);
PPC_FUNC_IMPL(__imp__sub_82F2B228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2B23C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-3384
	ctx.r3.s64 = ctx.r11.s64 + -3384;
	// bl 0x82816528
	ctx.lr = 0x82F2B24C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272e790
	ctx.lr = 0x82F2B260;
	sub_8272E790(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1548(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1548, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B280"))) PPC_WEAK_FUNC(sub_82F2B280);
PPC_FUNC_IMPL(__imp__sub_82F2B280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2B294;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-3348
	ctx.r3.s64 = ctx.r11.s64 + -3348;
	// bl 0x82816528
	ctx.lr = 0x82F2B2A4;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272e790
	ctx.lr = 0x82F2B2B8;
	sub_8272E790(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1549(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1549, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B2D8"))) PPC_WEAK_FUNC(sub_82F2B2D8);
PPC_FUNC_IMPL(__imp__sub_82F2B2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2B2EC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-3312
	ctx.r3.s64 = ctx.r11.s64 + -3312;
	// bl 0x82816528
	ctx.lr = 0x82F2B2FC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272e790
	ctx.lr = 0x82F2B310;
	sub_8272E790(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1550(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1550, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B330"))) PPC_WEAK_FUNC(sub_82F2B330);
PPC_FUNC_IMPL(__imp__sub_82F2B330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-32368
	ctx.r3.s64 = ctx.r9.s64 + -32368;
	// stw r10,-19664(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19664, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2B348"))) PPC_WEAK_FUNC(sub_82F2B348);
PPC_FUNC_IMPL(__imp__sub_82F2B348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2B35C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-3104
	ctx.r3.s64 = ctx.r11.s64 + -3104;
	// bl 0x82816528
	ctx.lr = 0x82F2B36C;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272ece0
	ctx.lr = 0x82F2B380;
	sub_8272ECE0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1551(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1551, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B3A0"))) PPC_WEAK_FUNC(sub_82F2B3A0);
PPC_FUNC_IMPL(__imp__sub_82F2B3A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2B3B4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-3072
	ctx.r3.s64 = ctx.r11.s64 + -3072;
	// bl 0x82816528
	ctx.lr = 0x82F2B3C4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272ece0
	ctx.lr = 0x82F2B3D8;
	sub_8272ECE0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1552(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1552, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B3F8"))) PPC_WEAK_FUNC(sub_82F2B3F8);
PPC_FUNC_IMPL(__imp__sub_82F2B3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2B40C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-3036
	ctx.r3.s64 = ctx.r11.s64 + -3036;
	// bl 0x82816528
	ctx.lr = 0x82F2B41C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-3560
	ctx.r3.s64 = ctx.r11.s64 + -3560;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272ece0
	ctx.lr = 0x82F2B430;
	sub_8272ECE0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1553(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1553, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B450"))) PPC_WEAK_FUNC(sub_82F2B450);
PPC_FUNC_IMPL(__imp__sub_82F2B450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2B464;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-3000
	ctx.r3.s64 = ctx.r11.s64 + -3000;
	// bl 0x82816528
	ctx.lr = 0x82F2B474;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-3416
	ctx.r3.s64 = ctx.r11.s64 + -3416;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272ece0
	ctx.lr = 0x82F2B488;
	sub_8272ECE0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1554(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1554, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B4A8"))) PPC_WEAK_FUNC(sub_82F2B4A8);
PPC_FUNC_IMPL(__imp__sub_82F2B4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2B4BC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-2964
	ctx.r3.s64 = ctx.r11.s64 + -2964;
	// bl 0x82816528
	ctx.lr = 0x82F2B4CC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-3376
	ctx.r3.s64 = ctx.r11.s64 + -3376;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272ece0
	ctx.lr = 0x82F2B4E0;
	sub_8272ECE0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1555(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1555, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B500"))) PPC_WEAK_FUNC(sub_82F2B500);
PPC_FUNC_IMPL(__imp__sub_82F2B500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2B514;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-2928
	ctx.r3.s64 = ctx.r11.s64 + -2928;
	// bl 0x82816528
	ctx.lr = 0x82F2B524;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-3264
	ctx.r3.s64 = ctx.r11.s64 + -3264;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272ece0
	ctx.lr = 0x82F2B538;
	sub_8272ECE0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1556(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1556, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B558"))) PPC_WEAK_FUNC(sub_82F2B558);
PPC_FUNC_IMPL(__imp__sub_82F2B558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-32256
	ctx.r3.s64 = ctx.r9.s64 + -32256;
	// stw r10,-19640(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19640, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2B570"))) PPC_WEAK_FUNC(sub_82F2B570);
PPC_FUNC_IMPL(__imp__sub_82F2B570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2B584;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-2704
	ctx.r3.s64 = ctx.r11.s64 + -2704;
	// bl 0x82816528
	ctx.lr = 0x82F2B594;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272f508
	ctx.lr = 0x82F2B5A8;
	sub_8272F508(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1557(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1557, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B5C8"))) PPC_WEAK_FUNC(sub_82F2B5C8);
PPC_FUNC_IMPL(__imp__sub_82F2B5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2B5DC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-2672
	ctx.r3.s64 = ctx.r11.s64 + -2672;
	// bl 0x82816528
	ctx.lr = 0x82F2B5EC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,384
	ctx.r3.s64 = ctx.r11.s64 + 384;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272f508
	ctx.lr = 0x82F2B600;
	sub_8272F508(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1558(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1558, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B620"))) PPC_WEAK_FUNC(sub_82F2B620);
PPC_FUNC_IMPL(__imp__sub_82F2B620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2B634;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-2636
	ctx.r3.s64 = ctx.r11.s64 + -2636;
	// bl 0x82816528
	ctx.lr = 0x82F2B644;
	sub_82816528(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,28408
	ctx.r3.s64 = ctx.r11.s64 + 28408;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272f508
	ctx.lr = 0x82F2B658;
	sub_8272F508(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1559(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1559, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B678"))) PPC_WEAK_FUNC(sub_82F2B678);
PPC_FUNC_IMPL(__imp__sub_82F2B678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-32144
	ctx.r3.s64 = ctx.r9.s64 + -32144;
	// stw r10,-19616(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19616, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2B690"))) PPC_WEAK_FUNC(sub_82F2B690);
PPC_FUNC_IMPL(__imp__sub_82F2B690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2B6A4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-2360
	ctx.r3.s64 = ctx.r11.s64 + -2360;
	// bl 0x82816528
	ctx.lr = 0x82F2B6B4;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272fb60
	ctx.lr = 0x82F2B6C8;
	sub_8272FB60(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1560(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1560, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B6E8"))) PPC_WEAK_FUNC(sub_82F2B6E8);
PPC_FUNC_IMPL(__imp__sub_82F2B6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2B6FC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-2328
	ctx.r3.s64 = ctx.r11.s64 + -2328;
	// bl 0x82816528
	ctx.lr = 0x82F2B70C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,384
	ctx.r3.s64 = ctx.r11.s64 + 384;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272fb60
	ctx.lr = 0x82F2B720;
	sub_8272FB60(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1561(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1561, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B740"))) PPC_WEAK_FUNC(sub_82F2B740);
PPC_FUNC_IMPL(__imp__sub_82F2B740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2B754;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-2292
	ctx.r3.s64 = ctx.r11.s64 + -2292;
	// bl 0x82816528
	ctx.lr = 0x82F2B764;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-6568
	ctx.r3.s64 = ctx.r11.s64 + -6568;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272fb60
	ctx.lr = 0x82F2B778;
	sub_8272FB60(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1562(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1562, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B798"))) PPC_WEAK_FUNC(sub_82F2B798);
PPC_FUNC_IMPL(__imp__sub_82F2B798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2B7AC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-2260
	ctx.r3.s64 = ctx.r11.s64 + -2260;
	// bl 0x82816528
	ctx.lr = 0x82F2B7BC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,496
	ctx.r3.s64 = ctx.r11.s64 + 496;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272fb60
	ctx.lr = 0x82F2B7D0;
	sub_8272FB60(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1563(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1563, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B7F0"))) PPC_WEAK_FUNC(sub_82F2B7F0);
PPC_FUNC_IMPL(__imp__sub_82F2B7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2B804;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-2224
	ctx.r3.s64 = ctx.r11.s64 + -2224;
	// bl 0x82816528
	ctx.lr = 0x82F2B814;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,912
	ctx.r3.s64 = ctx.r11.s64 + 912;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8272fb60
	ctx.lr = 0x82F2B828;
	sub_8272FB60(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1564(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1564, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B848"))) PPC_WEAK_FUNC(sub_82F2B848);
PPC_FUNC_IMPL(__imp__sub_82F2B848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-32032
	ctx.r3.s64 = ctx.r9.s64 + -32032;
	// stw r10,-19592(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19592, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2B860"))) PPC_WEAK_FUNC(sub_82F2B860);
PPC_FUNC_IMPL(__imp__sub_82F2B860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2B874;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-1888
	ctx.r3.s64 = ctx.r11.s64 + -1888;
	// bl 0x82816528
	ctx.lr = 0x82F2B884;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827305b0
	ctx.lr = 0x82F2B898;
	sub_827305B0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1565(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1565, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B8B8"))) PPC_WEAK_FUNC(sub_82F2B8B8);
PPC_FUNC_IMPL(__imp__sub_82F2B8B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2B8CC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-1856
	ctx.r3.s64 = ctx.r11.s64 + -1856;
	// bl 0x82816528
	ctx.lr = 0x82F2B8DC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827305b0
	ctx.lr = 0x82F2B8F0;
	sub_827305B0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1566(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1566, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B910"))) PPC_WEAK_FUNC(sub_82F2B910);
PPC_FUNC_IMPL(__imp__sub_82F2B910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2B924;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-1820
	ctx.r3.s64 = ctx.r11.s64 + -1820;
	// bl 0x82816528
	ctx.lr = 0x82F2B934;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-6568
	ctx.r3.s64 = ctx.r11.s64 + -6568;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827305b0
	ctx.lr = 0x82F2B948;
	sub_827305B0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1567(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1567, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B968"))) PPC_WEAK_FUNC(sub_82F2B968);
PPC_FUNC_IMPL(__imp__sub_82F2B968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-31920
	ctx.r3.s64 = ctx.r9.s64 + -31920;
	// stw r10,-19544(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19544, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2B980"))) PPC_WEAK_FUNC(sub_82F2B980);
PPC_FUNC_IMPL(__imp__sub_82F2B980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2B994;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-1648
	ctx.r3.s64 = ctx.r11.s64 + -1648;
	// bl 0x82816528
	ctx.lr = 0x82F2B9A4;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82730cb0
	ctx.lr = 0x82F2B9B8;
	sub_82730CB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1568(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1568, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2B9D8"))) PPC_WEAK_FUNC(sub_82F2B9D8);
PPC_FUNC_IMPL(__imp__sub_82F2B9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2B9EC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-1616
	ctx.r3.s64 = ctx.r11.s64 + -1616;
	// bl 0x82816528
	ctx.lr = 0x82F2B9FC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82730cb0
	ctx.lr = 0x82F2BA10;
	sub_82730CB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1569(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1569, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BA30"))) PPC_WEAK_FUNC(sub_82F2BA30);
PPC_FUNC_IMPL(__imp__sub_82F2BA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2BA44;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-1580
	ctx.r3.s64 = ctx.r11.s64 + -1580;
	// bl 0x82816528
	ctx.lr = 0x82F2BA54;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5208
	ctx.r3.s64 = ctx.r11.s64 + 5208;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82730cb0
	ctx.lr = 0x82F2BA68;
	sub_82730CB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1570(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1570, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BA88"))) PPC_WEAK_FUNC(sub_82F2BA88);
PPC_FUNC_IMPL(__imp__sub_82F2BA88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2BA9C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-1548
	ctx.r3.s64 = ctx.r11.s64 + -1548;
	// bl 0x82816528
	ctx.lr = 0x82F2BAAC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5344
	ctx.r3.s64 = ctx.r11.s64 + 5344;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82730cb0
	ctx.lr = 0x82F2BAC0;
	sub_82730CB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1571(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1571, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BAE0"))) PPC_WEAK_FUNC(sub_82F2BAE0);
PPC_FUNC_IMPL(__imp__sub_82F2BAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2BAF4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-1512
	ctx.r3.s64 = ctx.r11.s64 + -1512;
	// bl 0x82816528
	ctx.lr = 0x82F2BB04;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5424
	ctx.r3.s64 = ctx.r11.s64 + 5424;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82730cb0
	ctx.lr = 0x82F2BB18;
	sub_82730CB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1572(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1572, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BB38"))) PPC_WEAK_FUNC(sub_82F2BB38);
PPC_FUNC_IMPL(__imp__sub_82F2BB38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2BB4C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-1476
	ctx.r3.s64 = ctx.r11.s64 + -1476;
	// bl 0x82816528
	ctx.lr = 0x82F2BB5C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5632
	ctx.r3.s64 = ctx.r11.s64 + 5632;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82730cb0
	ctx.lr = 0x82F2BB70;
	sub_82730CB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1573(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1573, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BB90"))) PPC_WEAK_FUNC(sub_82F2BB90);
PPC_FUNC_IMPL(__imp__sub_82F2BB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2BBA4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-1440
	ctx.r3.s64 = ctx.r11.s64 + -1440;
	// bl 0x82816528
	ctx.lr = 0x82F2BBB4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-6568
	ctx.r3.s64 = ctx.r11.s64 + -6568;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82730cb0
	ctx.lr = 0x82F2BBC8;
	sub_82730CB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1574(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1574, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BBE8"))) PPC_WEAK_FUNC(sub_82F2BBE8);
PPC_FUNC_IMPL(__imp__sub_82F2BBE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-31808
	ctx.r3.s64 = ctx.r9.s64 + -31808;
	// stw r10,-19520(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19520, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2BC00"))) PPC_WEAK_FUNC(sub_82F2BC00);
PPC_FUNC_IMPL(__imp__sub_82F2BC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2BC14;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-968
	ctx.r3.s64 = ctx.r11.s64 + -968;
	// bl 0x82816528
	ctx.lr = 0x82F2BC24;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827317a0
	ctx.lr = 0x82F2BC38;
	sub_827317A0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1575(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1575, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BC58"))) PPC_WEAK_FUNC(sub_82F2BC58);
PPC_FUNC_IMPL(__imp__sub_82F2BC58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2BC6C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-936
	ctx.r3.s64 = ctx.r11.s64 + -936;
	// bl 0x82816528
	ctx.lr = 0x82F2BC7C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827317a0
	ctx.lr = 0x82F2BC90;
	sub_827317A0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1576(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1576, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BCB0"))) PPC_WEAK_FUNC(sub_82F2BCB0);
PPC_FUNC_IMPL(__imp__sub_82F2BCB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2BCC4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-900
	ctx.r3.s64 = ctx.r11.s64 + -900;
	// bl 0x82816528
	ctx.lr = 0x82F2BCD4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-6568
	ctx.r3.s64 = ctx.r11.s64 + -6568;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827317a0
	ctx.lr = 0x82F2BCE8;
	sub_827317A0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1577(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1577, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BD08"))) PPC_WEAK_FUNC(sub_82F2BD08);
PPC_FUNC_IMPL(__imp__sub_82F2BD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2BD1C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-868
	ctx.r3.s64 = ctx.r11.s64 + -868;
	// bl 0x82816528
	ctx.lr = 0x82F2BD2C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-24840
	ctx.r3.s64 = ctx.r11.s64 + -24840;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827317a0
	ctx.lr = 0x82F2BD40;
	sub_827317A0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1578(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1578, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BD60"))) PPC_WEAK_FUNC(sub_82F2BD60);
PPC_FUNC_IMPL(__imp__sub_82F2BD60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2BD74;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-832
	ctx.r3.s64 = ctx.r11.s64 + -832;
	// bl 0x82816528
	ctx.lr = 0x82F2BD84;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,7968
	ctx.r3.s64 = ctx.r11.s64 + 7968;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827317a0
	ctx.lr = 0x82F2BD98;
	sub_827317A0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1579(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1579, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BDB8"))) PPC_WEAK_FUNC(sub_82F2BDB8);
PPC_FUNC_IMPL(__imp__sub_82F2BDB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2BDCC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-792
	ctx.r3.s64 = ctx.r11.s64 + -792;
	// bl 0x82816528
	ctx.lr = 0x82F2BDDC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,8080
	ctx.r3.s64 = ctx.r11.s64 + 8080;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827317a0
	ctx.lr = 0x82F2BDF0;
	sub_827317A0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1580(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1580, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BE10"))) PPC_WEAK_FUNC(sub_82F2BE10);
PPC_FUNC_IMPL(__imp__sub_82F2BE10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-31696
	ctx.r3.s64 = ctx.r9.s64 + -31696;
	// stw r10,-19496(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19496, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2BE28"))) PPC_WEAK_FUNC(sub_82F2BE28);
PPC_FUNC_IMPL(__imp__sub_82F2BE28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2BE3C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-352
	ctx.r3.s64 = ctx.r11.s64 + -352;
	// bl 0x82816528
	ctx.lr = 0x82F2BE4C;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82732148
	ctx.lr = 0x82F2BE60;
	sub_82732148(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1581(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1581, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BE80"))) PPC_WEAK_FUNC(sub_82F2BE80);
PPC_FUNC_IMPL(__imp__sub_82F2BE80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2BE94;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-320
	ctx.r3.s64 = ctx.r11.s64 + -320;
	// bl 0x82816528
	ctx.lr = 0x82F2BEA4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82732148
	ctx.lr = 0x82F2BEB8;
	sub_82732148(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1582(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1582, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BED8"))) PPC_WEAK_FUNC(sub_82F2BED8);
PPC_FUNC_IMPL(__imp__sub_82F2BED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2BEEC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-284
	ctx.r3.s64 = ctx.r11.s64 + -284;
	// bl 0x82816528
	ctx.lr = 0x82F2BEFC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,10568
	ctx.r3.s64 = ctx.r11.s64 + 10568;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82732148
	ctx.lr = 0x82F2BF10;
	sub_82732148(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1583(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1583, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BF30"))) PPC_WEAK_FUNC(sub_82F2BF30);
PPC_FUNC_IMPL(__imp__sub_82F2BF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2BF44;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-252
	ctx.r3.s64 = ctx.r11.s64 + -252;
	// bl 0x82816528
	ctx.lr = 0x82F2BF54;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,10720
	ctx.r3.s64 = ctx.r11.s64 + 10720;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82732148
	ctx.lr = 0x82F2BF68;
	sub_82732148(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1584(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1584, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BF88"))) PPC_WEAK_FUNC(sub_82F2BF88);
PPC_FUNC_IMPL(__imp__sub_82F2BF88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2BF9C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-220
	ctx.r3.s64 = ctx.r11.s64 + -220;
	// bl 0x82816528
	ctx.lr = 0x82F2BFAC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,10992
	ctx.r3.s64 = ctx.r11.s64 + 10992;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82732148
	ctx.lr = 0x82F2BFC0;
	sub_82732148(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1585(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1585, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2BFE0"))) PPC_WEAK_FUNC(sub_82F2BFE0);
PPC_FUNC_IMPL(__imp__sub_82F2BFE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2BFF4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-188
	ctx.r3.s64 = ctx.r11.s64 + -188;
	// bl 0x82816528
	ctx.lr = 0x82F2C004;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,11232
	ctx.r3.s64 = ctx.r11.s64 + 11232;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82732148
	ctx.lr = 0x82F2C018;
	sub_82732148(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1586(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1586, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C038"))) PPC_WEAK_FUNC(sub_82F2C038);
PPC_FUNC_IMPL(__imp__sub_82F2C038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-31584
	ctx.r3.s64 = ctx.r9.s64 + -31584;
	// stw r10,-19472(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19472, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C050"))) PPC_WEAK_FUNC(sub_82F2C050);
PPC_FUNC_IMPL(__imp__sub_82F2C050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82F2C058;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2C060;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,312
	ctx.r3.s64 = ctx.r11.s64 + 312;
	// bl 0x82816528
	ctx.lr = 0x82F2C070;
	sub_82816528(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-19472
	ctx.r31.s64 = ctx.r11.s64 + -19472;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,5056
	ctx.r28.s64 = ctx.r11.s64 + 5056;
	// bl 0x82332d50
	ctx.lr = 0x82F2C098;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f2c0b4
	if (ctx.cr0.eq) goto loc_82F2C0B4;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_82F2C0B4:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f2c0d8
	if (ctx.cr6.eq) goto loc_82F2C0D8;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82332c38
	ctx.lr = 0x82F2C0D8;
	sub_82332C38(ctx, base);
loc_82F2C0D8:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1587(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1587, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C0F0"))) PPC_WEAK_FUNC(sub_82F2C0F0);
PPC_FUNC_IMPL(__imp__sub_82F2C0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82F2C0F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2C100;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,344
	ctx.r3.s64 = ctx.r11.s64 + 344;
	// bl 0x82816528
	ctx.lr = 0x82F2C110;
	sub_82816528(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-19472
	ctx.r31.s64 = ctx.r11.s64 + -19472;
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,2832
	ctx.r28.s64 = ctx.r11.s64 + 2832;
	// bl 0x82332d50
	ctx.lr = 0x82F2C138;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f2c154
	if (ctx.cr0.eq) goto loc_82F2C154;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_82F2C154:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f2c178
	if (ctx.cr6.eq) goto loc_82F2C178;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82332c38
	ctx.lr = 0x82F2C178;
	sub_82332C38(ctx, base);
loc_82F2C178:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1588(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1588, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C190"))) PPC_WEAK_FUNC(sub_82F2C190);
PPC_FUNC_IMPL(__imp__sub_82F2C190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-31472
	ctx.r3.s64 = ctx.r9.s64 + -31472;
	// stw r10,-19448(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19448, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C1A8"))) PPC_WEAK_FUNC(sub_82F2C1A8);
PPC_FUNC_IMPL(__imp__sub_82F2C1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2C1BC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,536
	ctx.r3.s64 = ctx.r11.s64 + 536;
	// bl 0x82816528
	ctx.lr = 0x82F2C1CC;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82733140
	ctx.lr = 0x82F2C1E0;
	sub_82733140(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1589(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1589, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C200"))) PPC_WEAK_FUNC(sub_82F2C200);
PPC_FUNC_IMPL(__imp__sub_82F2C200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2C214;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,576
	ctx.r3.s64 = ctx.r11.s64 + 576;
	// bl 0x82816528
	ctx.lr = 0x82F2C224;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82733140
	ctx.lr = 0x82F2C238;
	sub_82733140(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1590(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1590, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C258"))) PPC_WEAK_FUNC(sub_82F2C258);
PPC_FUNC_IMPL(__imp__sub_82F2C258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2C26C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,616
	ctx.r3.s64 = ctx.r11.s64 + 616;
	// bl 0x82816528
	ctx.lr = 0x82F2C27C;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82733140
	ctx.lr = 0x82F2C290;
	sub_82733140(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1591(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1591, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C2B0"))) PPC_WEAK_FUNC(sub_82F2C2B0);
PPC_FUNC_IMPL(__imp__sub_82F2C2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2C2C4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,656
	ctx.r3.s64 = ctx.r11.s64 + 656;
	// bl 0x82816528
	ctx.lr = 0x82F2C2D4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,13528
	ctx.r3.s64 = ctx.r11.s64 + 13528;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82733140
	ctx.lr = 0x82F2C2E8;
	sub_82733140(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1592(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1592, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C308"))) PPC_WEAK_FUNC(sub_82F2C308);
PPC_FUNC_IMPL(__imp__sub_82F2C308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2C31C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,696
	ctx.r3.s64 = ctx.r11.s64 + 696;
	// bl 0x82816528
	ctx.lr = 0x82F2C32C;
	sub_82816528(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,28408
	ctx.r3.s64 = ctx.r11.s64 + 28408;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82733140
	ctx.lr = 0x82F2C340;
	sub_82733140(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1593(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1593, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C360"))) PPC_WEAK_FUNC(sub_82F2C360);
PPC_FUNC_IMPL(__imp__sub_82F2C360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2C374;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,748
	ctx.r3.s64 = ctx.r11.s64 + 748;
	// bl 0x82816528
	ctx.lr = 0x82F2C384;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,13736
	ctx.r3.s64 = ctx.r11.s64 + 13736;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82733140
	ctx.lr = 0x82F2C398;
	sub_82733140(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1594(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1594, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C3B8"))) PPC_WEAK_FUNC(sub_82F2C3B8);
PPC_FUNC_IMPL(__imp__sub_82F2C3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2C3CC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,796
	ctx.r3.s64 = ctx.r11.s64 + 796;
	// bl 0x82816528
	ctx.lr = 0x82F2C3DC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,14128
	ctx.r3.s64 = ctx.r11.s64 + 14128;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82733140
	ctx.lr = 0x82F2C3F0;
	sub_82733140(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1595(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1595, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C410"))) PPC_WEAK_FUNC(sub_82F2C410);
PPC_FUNC_IMPL(__imp__sub_82F2C410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2C424;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,844
	ctx.r3.s64 = ctx.r11.s64 + 844;
	// bl 0x82816528
	ctx.lr = 0x82F2C434;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,14576
	ctx.r3.s64 = ctx.r11.s64 + 14576;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82733140
	ctx.lr = 0x82F2C448;
	sub_82733140(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1596(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1596, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C468"))) PPC_WEAK_FUNC(sub_82F2C468);
PPC_FUNC_IMPL(__imp__sub_82F2C468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2C47C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,892
	ctx.r3.s64 = ctx.r11.s64 + 892;
	// bl 0x82816528
	ctx.lr = 0x82F2C48C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,15024
	ctx.r3.s64 = ctx.r11.s64 + 15024;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82733140
	ctx.lr = 0x82F2C4A0;
	sub_82733140(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1597(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1597, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C4C0"))) PPC_WEAK_FUNC(sub_82F2C4C0);
PPC_FUNC_IMPL(__imp__sub_82F2C4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2C4D4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,940
	ctx.r3.s64 = ctx.r11.s64 + 940;
	// bl 0x82816528
	ctx.lr = 0x82F2C4E4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,15392
	ctx.r3.s64 = ctx.r11.s64 + 15392;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82733140
	ctx.lr = 0x82F2C4F8;
	sub_82733140(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1598(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1598, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C518"))) PPC_WEAK_FUNC(sub_82F2C518);
PPC_FUNC_IMPL(__imp__sub_82F2C518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-31360
	ctx.r3.s64 = ctx.r9.s64 + -31360;
	// stw r10,-19424(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19424, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C530"))) PPC_WEAK_FUNC(sub_82F2C530);
PPC_FUNC_IMPL(__imp__sub_82F2C530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82F2C538;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2C540;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,1280
	ctx.r3.s64 = ctx.r11.s64 + 1280;
	// bl 0x82816528
	ctx.lr = 0x82F2C550;
	sub_82816528(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-19424
	ctx.r31.s64 = ctx.r11.s64 + -19424;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,5056
	ctx.r28.s64 = ctx.r11.s64 + 5056;
	// bl 0x82332d50
	ctx.lr = 0x82F2C578;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f2c594
	if (ctx.cr0.eq) goto loc_82F2C594;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_82F2C594:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f2c5b8
	if (ctx.cr6.eq) goto loc_82F2C5B8;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82332c38
	ctx.lr = 0x82F2C5B8;
	sub_82332C38(ctx, base);
loc_82F2C5B8:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1599(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1599, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C5D0"))) PPC_WEAK_FUNC(sub_82F2C5D0);
PPC_FUNC_IMPL(__imp__sub_82F2C5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82F2C5D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2C5E0;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,1324
	ctx.r3.s64 = ctx.r11.s64 + 1324;
	// bl 0x82816528
	ctx.lr = 0x82F2C5F0;
	sub_82816528(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-19424
	ctx.r31.s64 = ctx.r11.s64 + -19424;
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,2832
	ctx.r28.s64 = ctx.r11.s64 + 2832;
	// bl 0x82332d50
	ctx.lr = 0x82F2C618;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f2c634
	if (ctx.cr0.eq) goto loc_82F2C634;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_82F2C634:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f2c658
	if (ctx.cr6.eq) goto loc_82F2C658;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82332c38
	ctx.lr = 0x82F2C658;
	sub_82332C38(ctx, base);
loc_82F2C658:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1600(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1600, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C670"))) PPC_WEAK_FUNC(sub_82F2C670);
PPC_FUNC_IMPL(__imp__sub_82F2C670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-31248
	ctx.r3.s64 = ctx.r9.s64 + -31248;
	// stw r10,-19400(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19400, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C688"))) PPC_WEAK_FUNC(sub_82F2C688);
PPC_FUNC_IMPL(__imp__sub_82F2C688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82F2C690;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2C698;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,1512
	ctx.r3.s64 = ctx.r11.s64 + 1512;
	// bl 0x82816528
	ctx.lr = 0x82F2C6A8;
	sub_82816528(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-19400
	ctx.r31.s64 = ctx.r11.s64 + -19400;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,5056
	ctx.r28.s64 = ctx.r11.s64 + 5056;
	// bl 0x82332d50
	ctx.lr = 0x82F2C6D0;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f2c6ec
	if (ctx.cr0.eq) goto loc_82F2C6EC;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_82F2C6EC:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f2c710
	if (ctx.cr6.eq) goto loc_82F2C710;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82332c38
	ctx.lr = 0x82F2C710;
	sub_82332C38(ctx, base);
loc_82F2C710:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1601(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1601, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C728"))) PPC_WEAK_FUNC(sub_82F2C728);
PPC_FUNC_IMPL(__imp__sub_82F2C728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82F2C730;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2C738;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,1552
	ctx.r3.s64 = ctx.r11.s64 + 1552;
	// bl 0x82816528
	ctx.lr = 0x82F2C748;
	sub_82816528(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-19400
	ctx.r31.s64 = ctx.r11.s64 + -19400;
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,17496
	ctx.r28.s64 = ctx.r11.s64 + 17496;
	// bl 0x82332d50
	ctx.lr = 0x82F2C770;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f2c78c
	if (ctx.cr0.eq) goto loc_82F2C78C;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_82F2C78C:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f2c7b0
	if (ctx.cr6.eq) goto loc_82F2C7B0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82332c38
	ctx.lr = 0x82F2C7B0;
	sub_82332C38(ctx, base);
loc_82F2C7B0:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1602(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1602, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C7C8"))) PPC_WEAK_FUNC(sub_82F2C7C8);
PPC_FUNC_IMPL(__imp__sub_82F2C7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-31136
	ctx.r3.s64 = ctx.r9.s64 + -31136;
	// stw r10,-19376(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19376, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C7E0"))) PPC_WEAK_FUNC(sub_82F2C7E0);
PPC_FUNC_IMPL(__imp__sub_82F2C7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2C7F4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,1760
	ctx.r3.s64 = ctx.r11.s64 + 1760;
	// bl 0x82816528
	ctx.lr = 0x82F2C804;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82734688
	ctx.lr = 0x82F2C818;
	sub_82734688(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1603(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1603, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C838"))) PPC_WEAK_FUNC(sub_82F2C838);
PPC_FUNC_IMPL(__imp__sub_82F2C838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2C84C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,1804
	ctx.r3.s64 = ctx.r11.s64 + 1804;
	// bl 0x82816528
	ctx.lr = 0x82F2C85C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82734688
	ctx.lr = 0x82F2C870;
	sub_82734688(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1604(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1604, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C890"))) PPC_WEAK_FUNC(sub_82F2C890);
PPC_FUNC_IMPL(__imp__sub_82F2C890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2C8A4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,1852
	ctx.r3.s64 = ctx.r11.s64 + 1852;
	// bl 0x82816528
	ctx.lr = 0x82F2C8B4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-24840
	ctx.r3.s64 = ctx.r11.s64 + -24840;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82734688
	ctx.lr = 0x82F2C8C8;
	sub_82734688(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1605(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1605, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C8E8"))) PPC_WEAK_FUNC(sub_82F2C8E8);
PPC_FUNC_IMPL(__imp__sub_82F2C8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-31024
	ctx.r3.s64 = ctx.r9.s64 + -31024;
	// stw r10,-19352(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19352, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C900"))) PPC_WEAK_FUNC(sub_82F2C900);
PPC_FUNC_IMPL(__imp__sub_82F2C900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2C914;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,2064
	ctx.r3.s64 = ctx.r11.s64 + 2064;
	// bl 0x82816528
	ctx.lr = 0x82F2C924;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82734ac8
	ctx.lr = 0x82F2C938;
	sub_82734AC8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1606(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1606, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C958"))) PPC_WEAK_FUNC(sub_82F2C958);
PPC_FUNC_IMPL(__imp__sub_82F2C958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2C96C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,2104
	ctx.r3.s64 = ctx.r11.s64 + 2104;
	// bl 0x82816528
	ctx.lr = 0x82F2C97C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82734ac8
	ctx.lr = 0x82F2C990;
	sub_82734AC8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1607(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1607, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C9B0"))) PPC_WEAK_FUNC(sub_82F2C9B0);
PPC_FUNC_IMPL(__imp__sub_82F2C9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2C9C4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,2152
	ctx.r3.s64 = ctx.r11.s64 + 2152;
	// bl 0x82816528
	ctx.lr = 0x82F2C9D4;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-23384
	ctx.r3.s64 = ctx.r11.s64 + -23384;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82734ac8
	ctx.lr = 0x82F2C9E8;
	sub_82734AC8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1608(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1608, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CA08"))) PPC_WEAK_FUNC(sub_82F2CA08);
PPC_FUNC_IMPL(__imp__sub_82F2CA08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-30912
	ctx.r3.s64 = ctx.r9.s64 + -30912;
	// stw r10,-19328(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19328, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2CA20"))) PPC_WEAK_FUNC(sub_82F2CA20);
PPC_FUNC_IMPL(__imp__sub_82F2CA20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2CA34;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,2344
	ctx.r3.s64 = ctx.r11.s64 + 2344;
	// bl 0x82816528
	ctx.lr = 0x82F2CA44;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,21864
	ctx.r3.s64 = ctx.r11.s64 + 21864;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82734f50
	ctx.lr = 0x82F2CA58;
	sub_82734F50(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1609(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1609, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CA78"))) PPC_WEAK_FUNC(sub_82F2CA78);
PPC_FUNC_IMPL(__imp__sub_82F2CA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2CA8C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,2372
	ctx.r3.s64 = ctx.r11.s64 + 2372;
	// bl 0x82816528
	ctx.lr = 0x82F2CA9C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,21976
	ctx.r3.s64 = ctx.r11.s64 + 21976;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82734f50
	ctx.lr = 0x82F2CAB0;
	sub_82734F50(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1610(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1610, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CAD0"))) PPC_WEAK_FUNC(sub_82F2CAD0);
PPC_FUNC_IMPL(__imp__sub_82F2CAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2CAE4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,2404
	ctx.r3.s64 = ctx.r11.s64 + 2404;
	// bl 0x82816528
	ctx.lr = 0x82F2CAF4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,22112
	ctx.r3.s64 = ctx.r11.s64 + 22112;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82734f50
	ctx.lr = 0x82F2CB08;
	sub_82734F50(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1611(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1611, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CB28"))) PPC_WEAK_FUNC(sub_82F2CB28);
PPC_FUNC_IMPL(__imp__sub_82F2CB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2CB3C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,2440
	ctx.r3.s64 = ctx.r11.s64 + 2440;
	// bl 0x82816528
	ctx.lr = 0x82F2CB4C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,22208
	ctx.r3.s64 = ctx.r11.s64 + 22208;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82734f50
	ctx.lr = 0x82F2CB60;
	sub_82734F50(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1612(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1612, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CB80"))) PPC_WEAK_FUNC(sub_82F2CB80);
PPC_FUNC_IMPL(__imp__sub_82F2CB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2CB94;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,2476
	ctx.r3.s64 = ctx.r11.s64 + 2476;
	// bl 0x82816528
	ctx.lr = 0x82F2CBA4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,22344
	ctx.r3.s64 = ctx.r11.s64 + 22344;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82734f50
	ctx.lr = 0x82F2CBB8;
	sub_82734F50(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1613(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1613, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CBD8"))) PPC_WEAK_FUNC(sub_82F2CBD8);
PPC_FUNC_IMPL(__imp__sub_82F2CBD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2CBEC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,2512
	ctx.r3.s64 = ctx.r11.s64 + 2512;
	// bl 0x82816528
	ctx.lr = 0x82F2CBFC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,22440
	ctx.r3.s64 = ctx.r11.s64 + 22440;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82734f50
	ctx.lr = 0x82F2CC10;
	sub_82734F50(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1614(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1614, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CC30"))) PPC_WEAK_FUNC(sub_82F2CC30);
PPC_FUNC_IMPL(__imp__sub_82F2CC30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2CC44;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,2548
	ctx.r3.s64 = ctx.r11.s64 + 2548;
	// bl 0x82816528
	ctx.lr = 0x82F2CC54;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,22608
	ctx.r3.s64 = ctx.r11.s64 + 22608;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82734f50
	ctx.lr = 0x82F2CC68;
	sub_82734F50(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1615(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1615, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CC88"))) PPC_WEAK_FUNC(sub_82F2CC88);
PPC_FUNC_IMPL(__imp__sub_82F2CC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2CC9C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,2584
	ctx.r3.s64 = ctx.r11.s64 + 2584;
	// bl 0x82816528
	ctx.lr = 0x82F2CCAC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,22720
	ctx.r3.s64 = ctx.r11.s64 + 22720;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82734f50
	ctx.lr = 0x82F2CCC0;
	sub_82734F50(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1616(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1616, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CCE0"))) PPC_WEAK_FUNC(sub_82F2CCE0);
PPC_FUNC_IMPL(__imp__sub_82F2CCE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2CCF4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,2620
	ctx.r3.s64 = ctx.r11.s64 + 2620;
	// bl 0x82816528
	ctx.lr = 0x82F2CD04;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,22800
	ctx.r3.s64 = ctx.r11.s64 + 22800;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82734f50
	ctx.lr = 0x82F2CD18;
	sub_82734F50(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1617(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1617, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CD38"))) PPC_WEAK_FUNC(sub_82F2CD38);
PPC_FUNC_IMPL(__imp__sub_82F2CD38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2CD4C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,2656
	ctx.r3.s64 = ctx.r11.s64 + 2656;
	// bl 0x82816528
	ctx.lr = 0x82F2CD5C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,23016
	ctx.r3.s64 = ctx.r11.s64 + 23016;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82734f50
	ctx.lr = 0x82F2CD70;
	sub_82734F50(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1618(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1618, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CD90"))) PPC_WEAK_FUNC(sub_82F2CD90);
PPC_FUNC_IMPL(__imp__sub_82F2CD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2CDA4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,2692
	ctx.r3.s64 = ctx.r11.s64 + 2692;
	// bl 0x82816528
	ctx.lr = 0x82F2CDB4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,23096
	ctx.r3.s64 = ctx.r11.s64 + 23096;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82734f50
	ctx.lr = 0x82F2CDC8;
	sub_82734F50(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1619(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1619, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CDE8"))) PPC_WEAK_FUNC(sub_82F2CDE8);
PPC_FUNC_IMPL(__imp__sub_82F2CDE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2CDFC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,2728
	ctx.r3.s64 = ctx.r11.s64 + 2728;
	// bl 0x82816528
	ctx.lr = 0x82F2CE0C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,23248
	ctx.r3.s64 = ctx.r11.s64 + 23248;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82734f50
	ctx.lr = 0x82F2CE20;
	sub_82734F50(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1620(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1620, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CE40"))) PPC_WEAK_FUNC(sub_82F2CE40);
PPC_FUNC_IMPL(__imp__sub_82F2CE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2CE54;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,2764
	ctx.r3.s64 = ctx.r11.s64 + 2764;
	// bl 0x82816528
	ctx.lr = 0x82F2CE64;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82734f50
	ctx.lr = 0x82F2CE78;
	sub_82734F50(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1621(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1621, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CE98"))) PPC_WEAK_FUNC(sub_82F2CE98);
PPC_FUNC_IMPL(__imp__sub_82F2CE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2CEAC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,2796
	ctx.r3.s64 = ctx.r11.s64 + 2796;
	// bl 0x82816528
	ctx.lr = 0x82F2CEBC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82734f50
	ctx.lr = 0x82F2CED0;
	sub_82734F50(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1622(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1622, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CEF0"))) PPC_WEAK_FUNC(sub_82F2CEF0);
PPC_FUNC_IMPL(__imp__sub_82F2CEF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2CF04;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// bl 0x82816528
	ctx.lr = 0x82F2CF14;
	sub_82816528(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,28408
	ctx.r3.s64 = ctx.r11.s64 + 28408;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82734f50
	ctx.lr = 0x82F2CF28;
	sub_82734F50(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1623(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1623, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CF48"))) PPC_WEAK_FUNC(sub_82F2CF48);
PPC_FUNC_IMPL(__imp__sub_82F2CF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2CF5C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,2880
	ctx.r3.s64 = ctx.r11.s64 + 2880;
	// bl 0x82816528
	ctx.lr = 0x82F2CF6C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-6568
	ctx.r3.s64 = ctx.r11.s64 + -6568;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82734f50
	ctx.lr = 0x82F2CF80;
	sub_82734F50(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1624(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1624, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CFA0"))) PPC_WEAK_FUNC(sub_82F2CFA0);
PPC_FUNC_IMPL(__imp__sub_82F2CFA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2CFB4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,2912
	ctx.r3.s64 = ctx.r11.s64 + 2912;
	// bl 0x82816528
	ctx.lr = 0x82F2CFC4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,23512
	ctx.r3.s64 = ctx.r11.s64 + 23512;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82734f50
	ctx.lr = 0x82F2CFD8;
	sub_82734F50(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1625(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1625, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CFF8"))) PPC_WEAK_FUNC(sub_82F2CFF8);
PPC_FUNC_IMPL(__imp__sub_82F2CFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-30800
	ctx.r3.s64 = ctx.r9.s64 + -30800;
	// stw r10,-19304(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19304, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D010"))) PPC_WEAK_FUNC(sub_82F2D010);
PPC_FUNC_IMPL(__imp__sub_82F2D010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82F2D018;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2D020;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,3448
	ctx.r3.s64 = ctx.r11.s64 + 3448;
	// bl 0x82816528
	ctx.lr = 0x82F2D030;
	sub_82816528(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-19304
	ctx.r31.s64 = ctx.r11.s64 + -19304;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,5056
	ctx.r28.s64 = ctx.r11.s64 + 5056;
	// bl 0x82332d50
	ctx.lr = 0x82F2D058;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f2d074
	if (ctx.cr0.eq) goto loc_82F2D074;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_82F2D074:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f2d098
	if (ctx.cr6.eq) goto loc_82F2D098;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82332c38
	ctx.lr = 0x82F2D098;
	sub_82332C38(ctx, base);
loc_82F2D098:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1626(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1626, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D0B0"))) PPC_WEAK_FUNC(sub_82F2D0B0);
PPC_FUNC_IMPL(__imp__sub_82F2D0B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82F2D0B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2D0C0;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,3488
	ctx.r3.s64 = ctx.r11.s64 + 3488;
	// bl 0x82816528
	ctx.lr = 0x82F2D0D0;
	sub_82816528(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-19304
	ctx.r31.s64 = ctx.r11.s64 + -19304;
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,2832
	ctx.r28.s64 = ctx.r11.s64 + 2832;
	// bl 0x82332d50
	ctx.lr = 0x82F2D0F8;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f2d114
	if (ctx.cr0.eq) goto loc_82F2D114;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_82F2D114:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f2d138
	if (ctx.cr6.eq) goto loc_82F2D138;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82332c38
	ctx.lr = 0x82F2D138;
	sub_82332C38(ctx, base);
loc_82F2D138:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1627(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1627, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D150"))) PPC_WEAK_FUNC(sub_82F2D150);
PPC_FUNC_IMPL(__imp__sub_82F2D150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-30688
	ctx.r3.s64 = ctx.r9.s64 + -30688;
	// stw r10,-19280(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19280, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D168"))) PPC_WEAK_FUNC(sub_82F2D168);
PPC_FUNC_IMPL(__imp__sub_82F2D168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82F2D170;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2D178;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x82816528
	ctx.lr = 0x82F2D188;
	sub_82816528(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-19280
	ctx.r31.s64 = ctx.r11.s64 + -19280;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,5056
	ctx.r28.s64 = ctx.r11.s64 + 5056;
	// bl 0x82332d50
	ctx.lr = 0x82F2D1B0;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f2d1cc
	if (ctx.cr0.eq) goto loc_82F2D1CC;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_82F2D1CC:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f2d1f0
	if (ctx.cr6.eq) goto loc_82F2D1F0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82332c38
	ctx.lr = 0x82F2D1F0;
	sub_82332C38(ctx, base);
loc_82F2D1F0:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1628(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1628, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D208"))) PPC_WEAK_FUNC(sub_82F2D208);
PPC_FUNC_IMPL(__imp__sub_82F2D208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82F2D210;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2D218;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,3736
	ctx.r3.s64 = ctx.r11.s64 + 3736;
	// bl 0x82816528
	ctx.lr = 0x82F2D228;
	sub_82816528(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-19280
	ctx.r31.s64 = ctx.r11.s64 + -19280;
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,2832
	ctx.r28.s64 = ctx.r11.s64 + 2832;
	// bl 0x82332d50
	ctx.lr = 0x82F2D250;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f2d26c
	if (ctx.cr0.eq) goto loc_82F2D26C;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_82F2D26C:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f2d290
	if (ctx.cr6.eq) goto loc_82F2D290;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82332c38
	ctx.lr = 0x82F2D290;
	sub_82332C38(ctx, base);
loc_82F2D290:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1629(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1629, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D2A8"))) PPC_WEAK_FUNC(sub_82F2D2A8);
PPC_FUNC_IMPL(__imp__sub_82F2D2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-30576
	ctx.r3.s64 = ctx.r9.s64 + -30576;
	// stw r10,-19256(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19256, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D2C0"))) PPC_WEAK_FUNC(sub_82F2D2C0);
PPC_FUNC_IMPL(__imp__sub_82F2D2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2D2D4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,3936
	ctx.r3.s64 = ctx.r11.s64 + 3936;
	// bl 0x82816528
	ctx.lr = 0x82F2D2E4;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827363c8
	ctx.lr = 0x82F2D2F8;
	sub_827363C8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1630(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1630, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D318"))) PPC_WEAK_FUNC(sub_82F2D318);
PPC_FUNC_IMPL(__imp__sub_82F2D318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2D32C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,3972
	ctx.r3.s64 = ctx.r11.s64 + 3972;
	// bl 0x82816528
	ctx.lr = 0x82F2D33C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827363c8
	ctx.lr = 0x82F2D350;
	sub_827363C8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1631(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1631, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D370"))) PPC_WEAK_FUNC(sub_82F2D370);
PPC_FUNC_IMPL(__imp__sub_82F2D370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2D384;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4012
	ctx.r3.s64 = ctx.r11.s64 + 4012;
	// bl 0x82816528
	ctx.lr = 0x82F2D394;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-23384
	ctx.r3.s64 = ctx.r11.s64 + -23384;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827363c8
	ctx.lr = 0x82F2D3A8;
	sub_827363C8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1632(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1632, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D3C8"))) PPC_WEAK_FUNC(sub_82F2D3C8);
PPC_FUNC_IMPL(__imp__sub_82F2D3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-30464
	ctx.r3.s64 = ctx.r9.s64 + -30464;
	// stw r10,-19232(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19232, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D3E0"))) PPC_WEAK_FUNC(sub_82F2D3E0);
PPC_FUNC_IMPL(__imp__sub_82F2D3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2D3F4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4200
	ctx.r3.s64 = ctx.r11.s64 + 4200;
	// bl 0x82816528
	ctx.lr = 0x82F2D404;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827367f0
	ctx.lr = 0x82F2D418;
	sub_827367F0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1633(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1633, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D438"))) PPC_WEAK_FUNC(sub_82F2D438);
PPC_FUNC_IMPL(__imp__sub_82F2D438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2D44C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4232
	ctx.r3.s64 = ctx.r11.s64 + 4232;
	// bl 0x82816528
	ctx.lr = 0x82F2D45C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827367f0
	ctx.lr = 0x82F2D470;
	sub_827367F0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1634(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1634, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D490"))) PPC_WEAK_FUNC(sub_82F2D490);
PPC_FUNC_IMPL(__imp__sub_82F2D490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2D4A4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4268
	ctx.r3.s64 = ctx.r11.s64 + 4268;
	// bl 0x82816528
	ctx.lr = 0x82F2D4B4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-6568
	ctx.r3.s64 = ctx.r11.s64 + -6568;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827367f0
	ctx.lr = 0x82F2D4C8;
	sub_827367F0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1635(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1635, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D4E8"))) PPC_WEAK_FUNC(sub_82F2D4E8);
PPC_FUNC_IMPL(__imp__sub_82F2D4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2D4FC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4300
	ctx.r3.s64 = ctx.r11.s64 + 4300;
	// bl 0x82816528
	ctx.lr = 0x82F2D50C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,28688
	ctx.r3.s64 = ctx.r11.s64 + 28688;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827367f0
	ctx.lr = 0x82F2D520;
	sub_827367F0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1636(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1636, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D540"))) PPC_WEAK_FUNC(sub_82F2D540);
PPC_FUNC_IMPL(__imp__sub_82F2D540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2D554;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4332
	ctx.r3.s64 = ctx.r11.s64 + 4332;
	// bl 0x82816528
	ctx.lr = 0x82F2D564;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,28816
	ctx.r3.s64 = ctx.r11.s64 + 28816;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827367f0
	ctx.lr = 0x82F2D578;
	sub_827367F0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1637(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1637, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D598"))) PPC_WEAK_FUNC(sub_82F2D598);
PPC_FUNC_IMPL(__imp__sub_82F2D598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2D5AC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4364
	ctx.r3.s64 = ctx.r11.s64 + 4364;
	// bl 0x82816528
	ctx.lr = 0x82F2D5BC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,28896
	ctx.r3.s64 = ctx.r11.s64 + 28896;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827367f0
	ctx.lr = 0x82F2D5D0;
	sub_827367F0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1638(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1638, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D5F0"))) PPC_WEAK_FUNC(sub_82F2D5F0);
PPC_FUNC_IMPL(__imp__sub_82F2D5F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2D604;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4400
	ctx.r3.s64 = ctx.r11.s64 + 4400;
	// bl 0x82816528
	ctx.lr = 0x82F2D614;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,29000
	ctx.r3.s64 = ctx.r11.s64 + 29000;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827367f0
	ctx.lr = 0x82F2D628;
	sub_827367F0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1639(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1639, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D648"))) PPC_WEAK_FUNC(sub_82F2D648);
PPC_FUNC_IMPL(__imp__sub_82F2D648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2D65C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4436
	ctx.r3.s64 = ctx.r11.s64 + 4436;
	// bl 0x82816528
	ctx.lr = 0x82F2D66C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,29160
	ctx.r3.s64 = ctx.r11.s64 + 29160;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827367f0
	ctx.lr = 0x82F2D680;
	sub_827367F0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1640(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1640, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D6A0"))) PPC_WEAK_FUNC(sub_82F2D6A0);
PPC_FUNC_IMPL(__imp__sub_82F2D6A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2D6B4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4472
	ctx.r3.s64 = ctx.r11.s64 + 4472;
	// bl 0x82816528
	ctx.lr = 0x82F2D6C4;
	sub_82816528(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,28408
	ctx.r3.s64 = ctx.r11.s64 + 28408;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827367f0
	ctx.lr = 0x82F2D6D8;
	sub_827367F0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1641(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1641, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D6F8"))) PPC_WEAK_FUNC(sub_82F2D6F8);
PPC_FUNC_IMPL(__imp__sub_82F2D6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-30352
	ctx.r3.s64 = ctx.r9.s64 + -30352;
	// stw r10,-19208(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19208, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D710"))) PPC_WEAK_FUNC(sub_82F2D710);
PPC_FUNC_IMPL(__imp__sub_82F2D710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2D724;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,5104
	ctx.r3.s64 = ctx.r11.s64 + 5104;
	// bl 0x82816528
	ctx.lr = 0x82F2D734;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32472
	ctx.r3.s64 = ctx.r11.s64 + -32472;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2D748;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1642(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1642, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D768"))) PPC_WEAK_FUNC(sub_82F2D768);
PPC_FUNC_IMPL(__imp__sub_82F2D768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2D77C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,5136
	ctx.r3.s64 = ctx.r11.s64 + 5136;
	// bl 0x82816528
	ctx.lr = 0x82F2D78C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2D7A0;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1643(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1643, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D7C0"))) PPC_WEAK_FUNC(sub_82F2D7C0);
PPC_FUNC_IMPL(__imp__sub_82F2D7C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2D7D4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,5172
	ctx.r3.s64 = ctx.r11.s64 + 5172;
	// bl 0x82816528
	ctx.lr = 0x82F2D7E4;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32264
	ctx.r3.s64 = ctx.r11.s64 + -32264;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2D7F8;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1644(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1644, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D818"))) PPC_WEAK_FUNC(sub_82F2D818);
PPC_FUNC_IMPL(__imp__sub_82F2D818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2D82C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,5204
	ctx.r3.s64 = ctx.r11.s64 + 5204;
	// bl 0x82816528
	ctx.lr = 0x82F2D83C;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32160
	ctx.r3.s64 = ctx.r11.s64 + -32160;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2D850;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1645(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1645, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D870"))) PPC_WEAK_FUNC(sub_82F2D870);
PPC_FUNC_IMPL(__imp__sub_82F2D870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2D884;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,5240
	ctx.r3.s64 = ctx.r11.s64 + 5240;
	// bl 0x82816528
	ctx.lr = 0x82F2D894;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32120
	ctx.r3.s64 = ctx.r11.s64 + -32120;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2D8A8;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1646(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1646, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D8C8"))) PPC_WEAK_FUNC(sub_82F2D8C8);
PPC_FUNC_IMPL(__imp__sub_82F2D8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2D8DC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,5276
	ctx.r3.s64 = ctx.r11.s64 + 5276;
	// bl 0x82816528
	ctx.lr = 0x82F2D8EC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,32488
	ctx.r3.s64 = ctx.r11.s64 + 32488;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2D900;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1647(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1647, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D920"))) PPC_WEAK_FUNC(sub_82F2D920);
PPC_FUNC_IMPL(__imp__sub_82F2D920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2D934;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,5312
	ctx.r3.s64 = ctx.r11.s64 + 5312;
	// bl 0x82816528
	ctx.lr = 0x82F2D944;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32120
	ctx.r3.s64 = ctx.r11.s64 + -32120;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2D958;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1648(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1648, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D978"))) PPC_WEAK_FUNC(sub_82F2D978);
PPC_FUNC_IMPL(__imp__sub_82F2D978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2D98C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,5348
	ctx.r3.s64 = ctx.r11.s64 + 5348;
	// bl 0x82816528
	ctx.lr = 0x82F2D99C;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-31824
	ctx.r3.s64 = ctx.r11.s64 + -31824;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2D9B0;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1649(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1649, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D9D0"))) PPC_WEAK_FUNC(sub_82F2D9D0);
PPC_FUNC_IMPL(__imp__sub_82F2D9D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2D9E4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,5384
	ctx.r3.s64 = ctx.r11.s64 + 5384;
	// bl 0x82816528
	ctx.lr = 0x82F2D9F4;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-31512
	ctx.r3.s64 = ctx.r11.s64 + -31512;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2DA08;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1650(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1650, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DA28"))) PPC_WEAK_FUNC(sub_82F2DA28);
PPC_FUNC_IMPL(__imp__sub_82F2DA28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2DA3C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,5420
	ctx.r3.s64 = ctx.r11.s64 + 5420;
	// bl 0x82816528
	ctx.lr = 0x82F2DA4C;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32600
	ctx.r3.s64 = ctx.r11.s64 + -32600;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2DA60;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1651(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1651, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DA80"))) PPC_WEAK_FUNC(sub_82F2DA80);
PPC_FUNC_IMPL(__imp__sub_82F2DA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2DA94;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,5456
	ctx.r3.s64 = ctx.r11.s64 + 5456;
	// bl 0x82816528
	ctx.lr = 0x82F2DAA4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,32064
	ctx.r3.s64 = ctx.r11.s64 + 32064;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2DAB8;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1652(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1652, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DAD8"))) PPC_WEAK_FUNC(sub_82F2DAD8);
PPC_FUNC_IMPL(__imp__sub_82F2DAD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2DAEC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,5492
	ctx.r3.s64 = ctx.r11.s64 + 5492;
	// bl 0x82816528
	ctx.lr = 0x82F2DAFC;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32600
	ctx.r3.s64 = ctx.r11.s64 + -32600;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2DB10;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1653(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1653, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DB30"))) PPC_WEAK_FUNC(sub_82F2DB30);
PPC_FUNC_IMPL(__imp__sub_82F2DB30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2DB44;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,5528
	ctx.r3.s64 = ctx.r11.s64 + 5528;
	// bl 0x82816528
	ctx.lr = 0x82F2DB54;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,32064
	ctx.r3.s64 = ctx.r11.s64 + 32064;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2DB68;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1654(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1654, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DB88"))) PPC_WEAK_FUNC(sub_82F2DB88);
PPC_FUNC_IMPL(__imp__sub_82F2DB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2DB9C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,5564
	ctx.r3.s64 = ctx.r11.s64 + 5564;
	// bl 0x82816528
	ctx.lr = 0x82F2DBAC;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32600
	ctx.r3.s64 = ctx.r11.s64 + -32600;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2DBC0;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1655(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1655, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DBE0"))) PPC_WEAK_FUNC(sub_82F2DBE0);
PPC_FUNC_IMPL(__imp__sub_82F2DBE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2DBF4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,5600
	ctx.r3.s64 = ctx.r11.s64 + 5600;
	// bl 0x82816528
	ctx.lr = 0x82F2DC04;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,32064
	ctx.r3.s64 = ctx.r11.s64 + 32064;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2DC18;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1656(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1656, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DC38"))) PPC_WEAK_FUNC(sub_82F2DC38);
PPC_FUNC_IMPL(__imp__sub_82F2DC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2DC4C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,5636
	ctx.r3.s64 = ctx.r11.s64 + 5636;
	// bl 0x82816528
	ctx.lr = 0x82F2DC5C;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32600
	ctx.r3.s64 = ctx.r11.s64 + -32600;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2DC70;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1657(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1657, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DC90"))) PPC_WEAK_FUNC(sub_82F2DC90);
PPC_FUNC_IMPL(__imp__sub_82F2DC90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2DCA4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,5672
	ctx.r3.s64 = ctx.r11.s64 + 5672;
	// bl 0x82816528
	ctx.lr = 0x82F2DCB4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,32064
	ctx.r3.s64 = ctx.r11.s64 + 32064;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2DCC8;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1658(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1658, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DCE8"))) PPC_WEAK_FUNC(sub_82F2DCE8);
PPC_FUNC_IMPL(__imp__sub_82F2DCE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2DCFC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,5708
	ctx.r3.s64 = ctx.r11.s64 + 5708;
	// bl 0x82816528
	ctx.lr = 0x82F2DD0C;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-31200
	ctx.r3.s64 = ctx.r11.s64 + -31200;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2DD20;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1659(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1659, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DD40"))) PPC_WEAK_FUNC(sub_82F2DD40);
PPC_FUNC_IMPL(__imp__sub_82F2DD40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2DD54;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,5744
	ctx.r3.s64 = ctx.r11.s64 + 5744;
	// bl 0x82816528
	ctx.lr = 0x82F2DD64;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,32192
	ctx.r3.s64 = ctx.r11.s64 + 32192;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2DD78;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1660(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1660, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DD98"))) PPC_WEAK_FUNC(sub_82F2DD98);
PPC_FUNC_IMPL(__imp__sub_82F2DD98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2DDAC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,5780
	ctx.r3.s64 = ctx.r11.s64 + 5780;
	// bl 0x82816528
	ctx.lr = 0x82F2DDBC;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32472
	ctx.r3.s64 = ctx.r11.s64 + -32472;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2DDD0;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1661(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1661, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DDF0"))) PPC_WEAK_FUNC(sub_82F2DDF0);
PPC_FUNC_IMPL(__imp__sub_82F2DDF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2DE04;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,5816
	ctx.r3.s64 = ctx.r11.s64 + 5816;
	// bl 0x82816528
	ctx.lr = 0x82F2DE14;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2DE28;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1662(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1662, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DE48"))) PPC_WEAK_FUNC(sub_82F2DE48);
PPC_FUNC_IMPL(__imp__sub_82F2DE48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2DE5C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,5860
	ctx.r3.s64 = ctx.r11.s64 + 5860;
	// bl 0x82816528
	ctx.lr = 0x82F2DE6C;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32264
	ctx.r3.s64 = ctx.r11.s64 + -32264;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2DE80;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1663(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1663, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DEA0"))) PPC_WEAK_FUNC(sub_82F2DEA0);
PPC_FUNC_IMPL(__imp__sub_82F2DEA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2DEB4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,5900
	ctx.r3.s64 = ctx.r11.s64 + 5900;
	// bl 0x82816528
	ctx.lr = 0x82F2DEC4;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32160
	ctx.r3.s64 = ctx.r11.s64 + -32160;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2DED8;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1664(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1664, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DEF8"))) PPC_WEAK_FUNC(sub_82F2DEF8);
PPC_FUNC_IMPL(__imp__sub_82F2DEF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2DF0C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,5940
	ctx.r3.s64 = ctx.r11.s64 + 5940;
	// bl 0x82816528
	ctx.lr = 0x82F2DF1C;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32120
	ctx.r3.s64 = ctx.r11.s64 + -32120;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2DF30;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1665(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1665, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DF50"))) PPC_WEAK_FUNC(sub_82F2DF50);
PPC_FUNC_IMPL(__imp__sub_82F2DF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2DF64;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,5980
	ctx.r3.s64 = ctx.r11.s64 + 5980;
	// bl 0x82816528
	ctx.lr = 0x82F2DF74;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,32488
	ctx.r3.s64 = ctx.r11.s64 + 32488;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2DF88;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1666(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1666, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2DFA8"))) PPC_WEAK_FUNC(sub_82F2DFA8);
PPC_FUNC_IMPL(__imp__sub_82F2DFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2DFBC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,6020
	ctx.r3.s64 = ctx.r11.s64 + 6020;
	// bl 0x82816528
	ctx.lr = 0x82F2DFCC;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32120
	ctx.r3.s64 = ctx.r11.s64 + -32120;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2DFE0;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1667(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1667, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E000"))) PPC_WEAK_FUNC(sub_82F2E000);
PPC_FUNC_IMPL(__imp__sub_82F2E000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2E014;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,6060
	ctx.r3.s64 = ctx.r11.s64 + 6060;
	// bl 0x82816528
	ctx.lr = 0x82F2E024;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-31824
	ctx.r3.s64 = ctx.r11.s64 + -31824;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2E038;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1668(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1668, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E058"))) PPC_WEAK_FUNC(sub_82F2E058);
PPC_FUNC_IMPL(__imp__sub_82F2E058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2E06C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,6100
	ctx.r3.s64 = ctx.r11.s64 + 6100;
	// bl 0x82816528
	ctx.lr = 0x82F2E07C;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-31512
	ctx.r3.s64 = ctx.r11.s64 + -31512;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2E090;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1669(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1669, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E0B0"))) PPC_WEAK_FUNC(sub_82F2E0B0);
PPC_FUNC_IMPL(__imp__sub_82F2E0B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2E0C4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,6140
	ctx.r3.s64 = ctx.r11.s64 + 6140;
	// bl 0x82816528
	ctx.lr = 0x82F2E0D4;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32600
	ctx.r3.s64 = ctx.r11.s64 + -32600;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2E0E8;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1670(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1670, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E108"))) PPC_WEAK_FUNC(sub_82F2E108);
PPC_FUNC_IMPL(__imp__sub_82F2E108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2E11C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,6180
	ctx.r3.s64 = ctx.r11.s64 + 6180;
	// bl 0x82816528
	ctx.lr = 0x82F2E12C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,32064
	ctx.r3.s64 = ctx.r11.s64 + 32064;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2E140;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1671(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1671, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E160"))) PPC_WEAK_FUNC(sub_82F2E160);
PPC_FUNC_IMPL(__imp__sub_82F2E160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2E174;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,6220
	ctx.r3.s64 = ctx.r11.s64 + 6220;
	// bl 0x82816528
	ctx.lr = 0x82F2E184;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32600
	ctx.r3.s64 = ctx.r11.s64 + -32600;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2E198;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1672(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1672, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E1B8"))) PPC_WEAK_FUNC(sub_82F2E1B8);
PPC_FUNC_IMPL(__imp__sub_82F2E1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2E1CC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,6260
	ctx.r3.s64 = ctx.r11.s64 + 6260;
	// bl 0x82816528
	ctx.lr = 0x82F2E1DC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,32064
	ctx.r3.s64 = ctx.r11.s64 + 32064;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2E1F0;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1673(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1673, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E210"))) PPC_WEAK_FUNC(sub_82F2E210);
PPC_FUNC_IMPL(__imp__sub_82F2E210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2E224;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,6300
	ctx.r3.s64 = ctx.r11.s64 + 6300;
	// bl 0x82816528
	ctx.lr = 0x82F2E234;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32600
	ctx.r3.s64 = ctx.r11.s64 + -32600;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2E248;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1674(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1674, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E268"))) PPC_WEAK_FUNC(sub_82F2E268);
PPC_FUNC_IMPL(__imp__sub_82F2E268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2E27C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,6340
	ctx.r3.s64 = ctx.r11.s64 + 6340;
	// bl 0x82816528
	ctx.lr = 0x82F2E28C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,32064
	ctx.r3.s64 = ctx.r11.s64 + 32064;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2E2A0;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1675(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1675, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E2C0"))) PPC_WEAK_FUNC(sub_82F2E2C0);
PPC_FUNC_IMPL(__imp__sub_82F2E2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2E2D4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,6380
	ctx.r3.s64 = ctx.r11.s64 + 6380;
	// bl 0x82816528
	ctx.lr = 0x82F2E2E4;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32600
	ctx.r3.s64 = ctx.r11.s64 + -32600;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2E2F8;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1676(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1676, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E318"))) PPC_WEAK_FUNC(sub_82F2E318);
PPC_FUNC_IMPL(__imp__sub_82F2E318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2E32C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,6420
	ctx.r3.s64 = ctx.r11.s64 + 6420;
	// bl 0x82816528
	ctx.lr = 0x82F2E33C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,32064
	ctx.r3.s64 = ctx.r11.s64 + 32064;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2E350;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1677(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1677, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E370"))) PPC_WEAK_FUNC(sub_82F2E370);
PPC_FUNC_IMPL(__imp__sub_82F2E370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2E384;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,6460
	ctx.r3.s64 = ctx.r11.s64 + 6460;
	// bl 0x82816528
	ctx.lr = 0x82F2E394;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-31200
	ctx.r3.s64 = ctx.r11.s64 + -31200;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2E3A8;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1678(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1678, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E3C8"))) PPC_WEAK_FUNC(sub_82F2E3C8);
PPC_FUNC_IMPL(__imp__sub_82F2E3C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2E3DC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,6500
	ctx.r3.s64 = ctx.r11.s64 + 6500;
	// bl 0x82816528
	ctx.lr = 0x82F2E3EC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,32192
	ctx.r3.s64 = ctx.r11.s64 + 32192;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2E400;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1679(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1679, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E420"))) PPC_WEAK_FUNC(sub_82F2E420);
PPC_FUNC_IMPL(__imp__sub_82F2E420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2E434;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,6540
	ctx.r3.s64 = ctx.r11.s64 + 6540;
	// bl 0x82816528
	ctx.lr = 0x82F2E444;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32472
	ctx.r3.s64 = ctx.r11.s64 + -32472;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2E458;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1680(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1680, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E478"))) PPC_WEAK_FUNC(sub_82F2E478);
PPC_FUNC_IMPL(__imp__sub_82F2E478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2E48C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,6580
	ctx.r3.s64 = ctx.r11.s64 + 6580;
	// bl 0x82816528
	ctx.lr = 0x82F2E49C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2E4B0;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1681(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1681, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E4D0"))) PPC_WEAK_FUNC(sub_82F2E4D0);
PPC_FUNC_IMPL(__imp__sub_82F2E4D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2E4E4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,6624
	ctx.r3.s64 = ctx.r11.s64 + 6624;
	// bl 0x82816528
	ctx.lr = 0x82F2E4F4;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32264
	ctx.r3.s64 = ctx.r11.s64 + -32264;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2E508;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1682(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1682, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E528"))) PPC_WEAK_FUNC(sub_82F2E528);
PPC_FUNC_IMPL(__imp__sub_82F2E528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2E53C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,6664
	ctx.r3.s64 = ctx.r11.s64 + 6664;
	// bl 0x82816528
	ctx.lr = 0x82F2E54C;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32160
	ctx.r3.s64 = ctx.r11.s64 + -32160;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2E560;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1683(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1683, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E580"))) PPC_WEAK_FUNC(sub_82F2E580);
PPC_FUNC_IMPL(__imp__sub_82F2E580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2E594;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,6708
	ctx.r3.s64 = ctx.r11.s64 + 6708;
	// bl 0x82816528
	ctx.lr = 0x82F2E5A4;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32120
	ctx.r3.s64 = ctx.r11.s64 + -32120;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2E5B8;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1684(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1684, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E5D8"))) PPC_WEAK_FUNC(sub_82F2E5D8);
PPC_FUNC_IMPL(__imp__sub_82F2E5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2E5EC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,6752
	ctx.r3.s64 = ctx.r11.s64 + 6752;
	// bl 0x82816528
	ctx.lr = 0x82F2E5FC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,32488
	ctx.r3.s64 = ctx.r11.s64 + 32488;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2E610;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1685(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1685, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E630"))) PPC_WEAK_FUNC(sub_82F2E630);
PPC_FUNC_IMPL(__imp__sub_82F2E630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2E644;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,6796
	ctx.r3.s64 = ctx.r11.s64 + 6796;
	// bl 0x82816528
	ctx.lr = 0x82F2E654;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32120
	ctx.r3.s64 = ctx.r11.s64 + -32120;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2E668;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1686(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1686, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E688"))) PPC_WEAK_FUNC(sub_82F2E688);
PPC_FUNC_IMPL(__imp__sub_82F2E688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2E69C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,6840
	ctx.r3.s64 = ctx.r11.s64 + 6840;
	// bl 0x82816528
	ctx.lr = 0x82F2E6AC;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-31824
	ctx.r3.s64 = ctx.r11.s64 + -31824;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2E6C0;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1687(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1687, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E6E0"))) PPC_WEAK_FUNC(sub_82F2E6E0);
PPC_FUNC_IMPL(__imp__sub_82F2E6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2E6F4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,6884
	ctx.r3.s64 = ctx.r11.s64 + 6884;
	// bl 0x82816528
	ctx.lr = 0x82F2E704;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-31512
	ctx.r3.s64 = ctx.r11.s64 + -31512;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2E718;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1688(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1688, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E738"))) PPC_WEAK_FUNC(sub_82F2E738);
PPC_FUNC_IMPL(__imp__sub_82F2E738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2E74C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,6928
	ctx.r3.s64 = ctx.r11.s64 + 6928;
	// bl 0x82816528
	ctx.lr = 0x82F2E75C;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32600
	ctx.r3.s64 = ctx.r11.s64 + -32600;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2E770;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1689(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1689, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E790"))) PPC_WEAK_FUNC(sub_82F2E790);
PPC_FUNC_IMPL(__imp__sub_82F2E790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2E7A4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,6972
	ctx.r3.s64 = ctx.r11.s64 + 6972;
	// bl 0x82816528
	ctx.lr = 0x82F2E7B4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,32064
	ctx.r3.s64 = ctx.r11.s64 + 32064;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2E7C8;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1690(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1690, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E7E8"))) PPC_WEAK_FUNC(sub_82F2E7E8);
PPC_FUNC_IMPL(__imp__sub_82F2E7E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2E7FC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,7016
	ctx.r3.s64 = ctx.r11.s64 + 7016;
	// bl 0x82816528
	ctx.lr = 0x82F2E80C;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32600
	ctx.r3.s64 = ctx.r11.s64 + -32600;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2E820;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1691(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1691, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E840"))) PPC_WEAK_FUNC(sub_82F2E840);
PPC_FUNC_IMPL(__imp__sub_82F2E840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2E854;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,7060
	ctx.r3.s64 = ctx.r11.s64 + 7060;
	// bl 0x82816528
	ctx.lr = 0x82F2E864;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,32064
	ctx.r3.s64 = ctx.r11.s64 + 32064;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2E878;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1692(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1692, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E898"))) PPC_WEAK_FUNC(sub_82F2E898);
PPC_FUNC_IMPL(__imp__sub_82F2E898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2E8AC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,7104
	ctx.r3.s64 = ctx.r11.s64 + 7104;
	// bl 0x82816528
	ctx.lr = 0x82F2E8BC;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32600
	ctx.r3.s64 = ctx.r11.s64 + -32600;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2E8D0;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1693(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1693, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E8F0"))) PPC_WEAK_FUNC(sub_82F2E8F0);
PPC_FUNC_IMPL(__imp__sub_82F2E8F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2E904;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,7148
	ctx.r3.s64 = ctx.r11.s64 + 7148;
	// bl 0x82816528
	ctx.lr = 0x82F2E914;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,32064
	ctx.r3.s64 = ctx.r11.s64 + 32064;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2E928;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1694(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1694, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E948"))) PPC_WEAK_FUNC(sub_82F2E948);
PPC_FUNC_IMPL(__imp__sub_82F2E948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2E95C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,7192
	ctx.r3.s64 = ctx.r11.s64 + 7192;
	// bl 0x82816528
	ctx.lr = 0x82F2E96C;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32600
	ctx.r3.s64 = ctx.r11.s64 + -32600;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2E980;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1695(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1695, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E9A0"))) PPC_WEAK_FUNC(sub_82F2E9A0);
PPC_FUNC_IMPL(__imp__sub_82F2E9A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2E9B4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,7236
	ctx.r3.s64 = ctx.r11.s64 + 7236;
	// bl 0x82816528
	ctx.lr = 0x82F2E9C4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,32064
	ctx.r3.s64 = ctx.r11.s64 + 32064;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2E9D8;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1696(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1696, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E9F8"))) PPC_WEAK_FUNC(sub_82F2E9F8);
PPC_FUNC_IMPL(__imp__sub_82F2E9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2EA0C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,7280
	ctx.r3.s64 = ctx.r11.s64 + 7280;
	// bl 0x82816528
	ctx.lr = 0x82F2EA1C;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-31200
	ctx.r3.s64 = ctx.r11.s64 + -31200;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2EA30;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1697(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1697, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2EA50"))) PPC_WEAK_FUNC(sub_82F2EA50);
PPC_FUNC_IMPL(__imp__sub_82F2EA50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2EA64;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,7324
	ctx.r3.s64 = ctx.r11.s64 + 7324;
	// bl 0x82816528
	ctx.lr = 0x82F2EA74;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,32192
	ctx.r3.s64 = ctx.r11.s64 + 32192;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82737420
	ctx.lr = 0x82F2EA88;
	sub_82737420(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1698(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1698, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2EAA8"))) PPC_WEAK_FUNC(sub_82F2EAA8);
PPC_FUNC_IMPL(__imp__sub_82F2EAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-30240
	ctx.r3.s64 = ctx.r9.s64 + -30240;
	// stw r10,-19184(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19184, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2EAC0"))) PPC_WEAK_FUNC(sub_82F2EAC0);
PPC_FUNC_IMPL(__imp__sub_82F2EAC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2EAD4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,7960
	ctx.r3.s64 = ctx.r11.s64 + 7960;
	// bl 0x82816528
	ctx.lr = 0x82F2EAE4;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82738840
	ctx.lr = 0x82F2EAF8;
	sub_82738840(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1699(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1699, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2EB18"))) PPC_WEAK_FUNC(sub_82F2EB18);
PPC_FUNC_IMPL(__imp__sub_82F2EB18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2EB2C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,7992
	ctx.r3.s64 = ctx.r11.s64 + 7992;
	// bl 0x82816528
	ctx.lr = 0x82F2EB3C;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82738840
	ctx.lr = 0x82F2EB50;
	sub_82738840(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1700(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1700, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2EB70"))) PPC_WEAK_FUNC(sub_82F2EB70);
PPC_FUNC_IMPL(__imp__sub_82F2EB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2EB84;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,8028
	ctx.r3.s64 = ctx.r11.s64 + 8028;
	// bl 0x82816528
	ctx.lr = 0x82F2EB94;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32600
	ctx.r3.s64 = ctx.r11.s64 + -32600;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82738840
	ctx.lr = 0x82F2EBA8;
	sub_82738840(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1701(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1701, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2EBC8"))) PPC_WEAK_FUNC(sub_82F2EBC8);
PPC_FUNC_IMPL(__imp__sub_82F2EBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2EBDC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,8060
	ctx.r3.s64 = ctx.r11.s64 + 8060;
	// bl 0x82816528
	ctx.lr = 0x82F2EBEC;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32264
	ctx.r3.s64 = ctx.r11.s64 + -32264;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82738840
	ctx.lr = 0x82F2EC00;
	sub_82738840(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1702(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1702, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2EC20"))) PPC_WEAK_FUNC(sub_82F2EC20);
PPC_FUNC_IMPL(__imp__sub_82F2EC20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2EC34;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,8092
	ctx.r3.s64 = ctx.r11.s64 + 8092;
	// bl 0x82816528
	ctx.lr = 0x82F2EC44;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,32064
	ctx.r3.s64 = ctx.r11.s64 + 32064;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82738840
	ctx.lr = 0x82F2EC58;
	sub_82738840(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1703(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1703, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2EC78"))) PPC_WEAK_FUNC(sub_82F2EC78);
PPC_FUNC_IMPL(__imp__sub_82F2EC78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2EC8C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,8124
	ctx.r3.s64 = ctx.r11.s64 + 8124;
	// bl 0x82816528
	ctx.lr = 0x82F2EC9C;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-29208
	ctx.r3.s64 = ctx.r11.s64 + -29208;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82738840
	ctx.lr = 0x82F2ECB0;
	sub_82738840(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1704(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1704, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2ECD0"))) PPC_WEAK_FUNC(sub_82F2ECD0);
PPC_FUNC_IMPL(__imp__sub_82F2ECD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2ECE4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,8160
	ctx.r3.s64 = ctx.r11.s64 + 8160;
	// bl 0x82816528
	ctx.lr = 0x82F2ECF4;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82738840
	ctx.lr = 0x82F2ED08;
	sub_82738840(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1705(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1705, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2ED28"))) PPC_WEAK_FUNC(sub_82F2ED28);
PPC_FUNC_IMPL(__imp__sub_82F2ED28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2ED3C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,8200
	ctx.r3.s64 = ctx.r11.s64 + 8200;
	// bl 0x82816528
	ctx.lr = 0x82F2ED4C;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-29096
	ctx.r3.s64 = ctx.r11.s64 + -29096;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82738840
	ctx.lr = 0x82F2ED60;
	sub_82738840(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1706(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1706, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2ED80"))) PPC_WEAK_FUNC(sub_82F2ED80);
PPC_FUNC_IMPL(__imp__sub_82F2ED80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2ED94;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,8240
	ctx.r3.s64 = ctx.r11.s64 + 8240;
	// bl 0x82816528
	ctx.lr = 0x82F2EDA4;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82738840
	ctx.lr = 0x82F2EDB8;
	sub_82738840(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1707(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1707, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2EDD8"))) PPC_WEAK_FUNC(sub_82F2EDD8);
PPC_FUNC_IMPL(__imp__sub_82F2EDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2EDEC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,8280
	ctx.r3.s64 = ctx.r11.s64 + 8280;
	// bl 0x82816528
	ctx.lr = 0x82F2EDFC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82738840
	ctx.lr = 0x82F2EE10;
	sub_82738840(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1708(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1708, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2EE30"))) PPC_WEAK_FUNC(sub_82F2EE30);
PPC_FUNC_IMPL(__imp__sub_82F2EE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2EE44;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,8324
	ctx.r3.s64 = ctx.r11.s64 + 8324;
	// bl 0x82816528
	ctx.lr = 0x82F2EE54;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82738840
	ctx.lr = 0x82F2EE68;
	sub_82738840(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1709(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1709, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2EE88"))) PPC_WEAK_FUNC(sub_82F2EE88);
PPC_FUNC_IMPL(__imp__sub_82F2EE88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2EE9C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,8372
	ctx.r3.s64 = ctx.r11.s64 + 8372;
	// bl 0x82816528
	ctx.lr = 0x82F2EEAC;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-29096
	ctx.r3.s64 = ctx.r11.s64 + -29096;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82738840
	ctx.lr = 0x82F2EEC0;
	sub_82738840(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1710(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1710, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2EEE0"))) PPC_WEAK_FUNC(sub_82F2EEE0);
PPC_FUNC_IMPL(__imp__sub_82F2EEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2EEF4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,8420
	ctx.r3.s64 = ctx.r11.s64 + 8420;
	// bl 0x82816528
	ctx.lr = 0x82F2EF04;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32600
	ctx.r3.s64 = ctx.r11.s64 + -32600;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82738840
	ctx.lr = 0x82F2EF18;
	sub_82738840(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1711(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1711, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2EF38"))) PPC_WEAK_FUNC(sub_82F2EF38);
PPC_FUNC_IMPL(__imp__sub_82F2EF38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2EF4C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,8460
	ctx.r3.s64 = ctx.r11.s64 + 8460;
	// bl 0x82816528
	ctx.lr = 0x82F2EF5C;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32264
	ctx.r3.s64 = ctx.r11.s64 + -32264;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82738840
	ctx.lr = 0x82F2EF70;
	sub_82738840(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1712(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1712, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2EF90"))) PPC_WEAK_FUNC(sub_82F2EF90);
PPC_FUNC_IMPL(__imp__sub_82F2EF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2EFA4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,8500
	ctx.r3.s64 = ctx.r11.s64 + 8500;
	// bl 0x82816528
	ctx.lr = 0x82F2EFB4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,32064
	ctx.r3.s64 = ctx.r11.s64 + 32064;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82738840
	ctx.lr = 0x82F2EFC8;
	sub_82738840(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1713(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1713, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2EFE8"))) PPC_WEAK_FUNC(sub_82F2EFE8);
PPC_FUNC_IMPL(__imp__sub_82F2EFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2EFFC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,8540
	ctx.r3.s64 = ctx.r11.s64 + 8540;
	// bl 0x82816528
	ctx.lr = 0x82F2F00C;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-29208
	ctx.r3.s64 = ctx.r11.s64 + -29208;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82738840
	ctx.lr = 0x82F2F020;
	sub_82738840(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1714(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1714, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F040"))) PPC_WEAK_FUNC(sub_82F2F040);
PPC_FUNC_IMPL(__imp__sub_82F2F040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2F054;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,8584
	ctx.r3.s64 = ctx.r11.s64 + 8584;
	// bl 0x82816528
	ctx.lr = 0x82F2F064;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82738840
	ctx.lr = 0x82F2F078;
	sub_82738840(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1715(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1715, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F098"))) PPC_WEAK_FUNC(sub_82F2F098);
PPC_FUNC_IMPL(__imp__sub_82F2F098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2F0AC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,8620
	ctx.r3.s64 = ctx.r11.s64 + 8620;
	// bl 0x82816528
	ctx.lr = 0x82F2F0BC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82738840
	ctx.lr = 0x82F2F0D0;
	sub_82738840(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1716(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1716, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F0F0"))) PPC_WEAK_FUNC(sub_82F2F0F0);
PPC_FUNC_IMPL(__imp__sub_82F2F0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2F104;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,8664
	ctx.r3.s64 = ctx.r11.s64 + 8664;
	// bl 0x82816528
	ctx.lr = 0x82F2F114;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82738840
	ctx.lr = 0x82F2F128;
	sub_82738840(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1717(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1717, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F148"))) PPC_WEAK_FUNC(sub_82F2F148);
PPC_FUNC_IMPL(__imp__sub_82F2F148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2F15C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,8712
	ctx.r3.s64 = ctx.r11.s64 + 8712;
	// bl 0x82816528
	ctx.lr = 0x82F2F16C;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-29096
	ctx.r3.s64 = ctx.r11.s64 + -29096;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82738840
	ctx.lr = 0x82F2F180;
	sub_82738840(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1718(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1718, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F1A0"))) PPC_WEAK_FUNC(sub_82F2F1A0);
PPC_FUNC_IMPL(__imp__sub_82F2F1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2F1B4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,8760
	ctx.r3.s64 = ctx.r11.s64 + 8760;
	// bl 0x82816528
	ctx.lr = 0x82F2F1C4;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32600
	ctx.r3.s64 = ctx.r11.s64 + -32600;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82738840
	ctx.lr = 0x82F2F1D8;
	sub_82738840(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1719(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1719, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F1F8"))) PPC_WEAK_FUNC(sub_82F2F1F8);
PPC_FUNC_IMPL(__imp__sub_82F2F1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2F20C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,8796
	ctx.r3.s64 = ctx.r11.s64 + 8796;
	// bl 0x82816528
	ctx.lr = 0x82F2F21C;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32264
	ctx.r3.s64 = ctx.r11.s64 + -32264;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82738840
	ctx.lr = 0x82F2F230;
	sub_82738840(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1720(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1720, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F250"))) PPC_WEAK_FUNC(sub_82F2F250);
PPC_FUNC_IMPL(__imp__sub_82F2F250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2F264;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,8836
	ctx.r3.s64 = ctx.r11.s64 + 8836;
	// bl 0x82816528
	ctx.lr = 0x82F2F274;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,32064
	ctx.r3.s64 = ctx.r11.s64 + 32064;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82738840
	ctx.lr = 0x82F2F288;
	sub_82738840(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1721(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1721, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F2A8"))) PPC_WEAK_FUNC(sub_82F2F2A8);
PPC_FUNC_IMPL(__imp__sub_82F2F2A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2F2BC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,8876
	ctx.r3.s64 = ctx.r11.s64 + 8876;
	// bl 0x82816528
	ctx.lr = 0x82F2F2CC;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-29208
	ctx.r3.s64 = ctx.r11.s64 + -29208;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82738840
	ctx.lr = 0x82F2F2E0;
	sub_82738840(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1722(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1722, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F300"))) PPC_WEAK_FUNC(sub_82F2F300);
PPC_FUNC_IMPL(__imp__sub_82F2F300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-30128
	ctx.r3.s64 = ctx.r9.s64 + -30128;
	// stw r10,-19160(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19160, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F318"))) PPC_WEAK_FUNC(sub_82F2F318);
PPC_FUNC_IMPL(__imp__sub_82F2F318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82F2F320;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2F328;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,9096
	ctx.r3.s64 = ctx.r11.s64 + 9096;
	// bl 0x82816528
	ctx.lr = 0x82F2F338;
	sub_82816528(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-19160
	ctx.r31.s64 = ctx.r11.s64 + -19160;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,5056
	ctx.r28.s64 = ctx.r11.s64 + 5056;
	// bl 0x82332d50
	ctx.lr = 0x82F2F360;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f2f37c
	if (ctx.cr0.eq) goto loc_82F2F37C;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_82F2F37C:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f2f3a0
	if (ctx.cr6.eq) goto loc_82F2F3A0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82332c38
	ctx.lr = 0x82F2F3A0;
	sub_82332C38(ctx, base);
loc_82F2F3A0:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1723(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1723, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F3B8"))) PPC_WEAK_FUNC(sub_82F2F3B8);
PPC_FUNC_IMPL(__imp__sub_82F2F3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82F2F3C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2F3C8;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,9128
	ctx.r3.s64 = ctx.r11.s64 + 9128;
	// bl 0x82816528
	ctx.lr = 0x82F2F3D8;
	sub_82816528(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-19160
	ctx.r31.s64 = ctx.r11.s64 + -19160;
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,2832
	ctx.r28.s64 = ctx.r11.s64 + 2832;
	// bl 0x82332d50
	ctx.lr = 0x82F2F400;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f2f41c
	if (ctx.cr0.eq) goto loc_82F2F41C;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_82F2F41C:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f2f440
	if (ctx.cr6.eq) goto loc_82F2F440;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82332c38
	ctx.lr = 0x82F2F440;
	sub_82332C38(ctx, base);
loc_82F2F440:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1724(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1724, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F458"))) PPC_WEAK_FUNC(sub_82F2F458);
PPC_FUNC_IMPL(__imp__sub_82F2F458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-30016
	ctx.r3.s64 = ctx.r9.s64 + -30016;
	// stw r10,-19136(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19136, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F470"))) PPC_WEAK_FUNC(sub_82F2F470);
PPC_FUNC_IMPL(__imp__sub_82F2F470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82F2F478;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2F480;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,9312
	ctx.r3.s64 = ctx.r11.s64 + 9312;
	// bl 0x82816528
	ctx.lr = 0x82F2F490;
	sub_82816528(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-19136
	ctx.r31.s64 = ctx.r11.s64 + -19136;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,5056
	ctx.r28.s64 = ctx.r11.s64 + 5056;
	// bl 0x82332d50
	ctx.lr = 0x82F2F4B8;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f2f4d4
	if (ctx.cr0.eq) goto loc_82F2F4D4;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_82F2F4D4:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f2f4f8
	if (ctx.cr6.eq) goto loc_82F2F4F8;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82332c38
	ctx.lr = 0x82F2F4F8;
	sub_82332C38(ctx, base);
loc_82F2F4F8:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1725(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1725, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F510"))) PPC_WEAK_FUNC(sub_82F2F510);
PPC_FUNC_IMPL(__imp__sub_82F2F510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82F2F518;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2F520;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,9344
	ctx.r3.s64 = ctx.r11.s64 + 9344;
	// bl 0x82816528
	ctx.lr = 0x82F2F530;
	sub_82816528(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-19136
	ctx.r31.s64 = ctx.r11.s64 + -19136;
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,2832
	ctx.r28.s64 = ctx.r11.s64 + 2832;
	// bl 0x82332d50
	ctx.lr = 0x82F2F558;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f2f574
	if (ctx.cr0.eq) goto loc_82F2F574;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_82F2F574:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f2f598
	if (ctx.cr6.eq) goto loc_82F2F598;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82332c38
	ctx.lr = 0x82F2F598;
	sub_82332C38(ctx, base);
loc_82F2F598:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1726(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1726, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F5B0"))) PPC_WEAK_FUNC(sub_82F2F5B0);
PPC_FUNC_IMPL(__imp__sub_82F2F5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-29904
	ctx.r3.s64 = ctx.r9.s64 + -29904;
	// stw r10,-19112(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19112, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F5C8"))) PPC_WEAK_FUNC(sub_82F2F5C8);
PPC_FUNC_IMPL(__imp__sub_82F2F5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2F5DC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,9528
	ctx.r3.s64 = ctx.r11.s64 + 9528;
	// bl 0x82816528
	ctx.lr = 0x82F2F5EC;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82739630
	ctx.lr = 0x82F2F600;
	sub_82739630(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1727(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1727, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F620"))) PPC_WEAK_FUNC(sub_82F2F620);
PPC_FUNC_IMPL(__imp__sub_82F2F620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2F634;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,9560
	ctx.r3.s64 = ctx.r11.s64 + 9560;
	// bl 0x82816528
	ctx.lr = 0x82F2F644;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82739630
	ctx.lr = 0x82F2F658;
	sub_82739630(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1728(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1728, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F678"))) PPC_WEAK_FUNC(sub_82F2F678);
PPC_FUNC_IMPL(__imp__sub_82F2F678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2F68C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,9596
	ctx.r3.s64 = ctx.r11.s64 + 9596;
	// bl 0x82816528
	ctx.lr = 0x82F2F69C;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-25008
	ctx.r3.s64 = ctx.r11.s64 + -25008;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82739630
	ctx.lr = 0x82F2F6B0;
	sub_82739630(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1729(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1729, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F6D0"))) PPC_WEAK_FUNC(sub_82F2F6D0);
PPC_FUNC_IMPL(__imp__sub_82F2F6D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2F6E4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,9624
	ctx.r3.s64 = ctx.r11.s64 + 9624;
	// bl 0x82816528
	ctx.lr = 0x82F2F6F4;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-24448
	ctx.r3.s64 = ctx.r11.s64 + -24448;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82739630
	ctx.lr = 0x82F2F708;
	sub_82739630(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1730(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1730, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F728"))) PPC_WEAK_FUNC(sub_82F2F728);
PPC_FUNC_IMPL(__imp__sub_82F2F728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-29792
	ctx.r3.s64 = ctx.r9.s64 + -29792;
	// stw r10,-19088(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19088, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F740"))) PPC_WEAK_FUNC(sub_82F2F740);
PPC_FUNC_IMPL(__imp__sub_82F2F740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2F754;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,10224
	ctx.r3.s64 = ctx.r11.s64 + 10224;
	// bl 0x82816528
	ctx.lr = 0x82F2F764;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8273a200
	ctx.lr = 0x82F2F778;
	sub_8273A200(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1731(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1731, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F798"))) PPC_WEAK_FUNC(sub_82F2F798);
PPC_FUNC_IMPL(__imp__sub_82F2F798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2F7AC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,10264
	ctx.r3.s64 = ctx.r11.s64 + 10264;
	// bl 0x82816528
	ctx.lr = 0x82F2F7BC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8273a200
	ctx.lr = 0x82F2F7D0;
	sub_8273A200(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1732(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1732, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F7F0"))) PPC_WEAK_FUNC(sub_82F2F7F0);
PPC_FUNC_IMPL(__imp__sub_82F2F7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2F804;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,10308
	ctx.r3.s64 = ctx.r11.s64 + 10308;
	// bl 0x82816528
	ctx.lr = 0x82F2F814;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-23384
	ctx.r3.s64 = ctx.r11.s64 + -23384;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8273a200
	ctx.lr = 0x82F2F828;
	sub_8273A200(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1733(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1733, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F848"))) PPC_WEAK_FUNC(sub_82F2F848);
PPC_FUNC_IMPL(__imp__sub_82F2F848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-29680
	ctx.r3.s64 = ctx.r9.s64 + -29680;
	// stw r10,-19064(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19064, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F860"))) PPC_WEAK_FUNC(sub_82F2F860);
PPC_FUNC_IMPL(__imp__sub_82F2F860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2F874;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,10504
	ctx.r3.s64 = ctx.r11.s64 + 10504;
	// bl 0x82816528
	ctx.lr = 0x82F2F884;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8273a738
	ctx.lr = 0x82F2F898;
	sub_8273A738(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1734(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1734, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F8B8"))) PPC_WEAK_FUNC(sub_82F2F8B8);
PPC_FUNC_IMPL(__imp__sub_82F2F8B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2F8CC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,10536
	ctx.r3.s64 = ctx.r11.s64 + 10536;
	// bl 0x82816528
	ctx.lr = 0x82F2F8DC;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8273a738
	ctx.lr = 0x82F2F8F0;
	sub_8273A738(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1735(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1735, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F910"))) PPC_WEAK_FUNC(sub_82F2F910);
PPC_FUNC_IMPL(__imp__sub_82F2F910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2F924;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,10572
	ctx.r3.s64 = ctx.r11.s64 + 10572;
	// bl 0x82816528
	ctx.lr = 0x82F2F934;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-21072
	ctx.r3.s64 = ctx.r11.s64 + -21072;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8273a738
	ctx.lr = 0x82F2F948;
	sub_8273A738(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1736(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1736, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F968"))) PPC_WEAK_FUNC(sub_82F2F968);
PPC_FUNC_IMPL(__imp__sub_82F2F968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2F97C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,10608
	ctx.r3.s64 = ctx.r11.s64 + 10608;
	// bl 0x82816528
	ctx.lr = 0x82F2F98C;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-20800
	ctx.r3.s64 = ctx.r11.s64 + -20800;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8273a738
	ctx.lr = 0x82F2F9A0;
	sub_8273A738(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1737(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1737, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F9C0"))) PPC_WEAK_FUNC(sub_82F2F9C0);
PPC_FUNC_IMPL(__imp__sub_82F2F9C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2F9D4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,10644
	ctx.r3.s64 = ctx.r11.s64 + 10644;
	// bl 0x82816528
	ctx.lr = 0x82F2F9E4;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-20576
	ctx.r3.s64 = ctx.r11.s64 + -20576;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8273a738
	ctx.lr = 0x82F2F9F8;
	sub_8273A738(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1738(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1738, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2FA18"))) PPC_WEAK_FUNC(sub_82F2FA18);
PPC_FUNC_IMPL(__imp__sub_82F2FA18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2FA2C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,10680
	ctx.r3.s64 = ctx.r11.s64 + 10680;
	// bl 0x82816528
	ctx.lr = 0x82F2FA3C;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-20408
	ctx.r3.s64 = ctx.r11.s64 + -20408;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8273a738
	ctx.lr = 0x82F2FA50;
	sub_8273A738(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1739(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1739, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2FA70"))) PPC_WEAK_FUNC(sub_82F2FA70);
PPC_FUNC_IMPL(__imp__sub_82F2FA70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2FA84;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,10716
	ctx.r3.s64 = ctx.r11.s64 + 10716;
	// bl 0x82816528
	ctx.lr = 0x82F2FA94;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-20384
	ctx.r3.s64 = ctx.r11.s64 + -20384;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8273a738
	ctx.lr = 0x82F2FAA8;
	sub_8273A738(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1740(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1740, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2FAC8"))) PPC_WEAK_FUNC(sub_82F2FAC8);
PPC_FUNC_IMPL(__imp__sub_82F2FAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2FADC;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,10752
	ctx.r3.s64 = ctx.r11.s64 + 10752;
	// bl 0x82816528
	ctx.lr = 0x82F2FAEC;
	sub_82816528(ctx, base);
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-20216
	ctx.r3.s64 = ctx.r11.s64 + -20216;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8273a738
	ctx.lr = 0x82F2FB00;
	sub_8273A738(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1741(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1741, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2FB20"))) PPC_WEAK_FUNC(sub_82F2FB20);
PPC_FUNC_IMPL(__imp__sub_82F2FB20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r3,r9,-29568
	ctx.r3.s64 = ctx.r9.s64 + -29568;
	// stw r10,-19040(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19040, ctx.r10.u32);
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FB38"))) PPC_WEAK_FUNC(sub_82F2FB38);
PPC_FUNC_IMPL(__imp__sub_82F2FB38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2FB4C;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// bl 0x82816528
	ctx.lr = 0x82F2FB5C;
	sub_82816528(ctx, base);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8273b2b8
	ctx.lr = 0x82F2FB70;
	sub_8273B2B8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1742(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1742, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2FB90"))) PPC_WEAK_FUNC(sub_82F2FB90);
PPC_FUNC_IMPL(__imp__sub_82F2FB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82339c78
	ctx.lr = 0x82F2FBA4;
	sub_82339C78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,11368
	ctx.r3.s64 = ctx.r11.s64 + 11368;
	// bl 0x82816528
	ctx.lr = 0x82F2FBB4;
	sub_82816528(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8273b2b8
	ctx.lr = 0x82F2FBC8;
	sub_8273B2B8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stb r3,1743(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1743, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

