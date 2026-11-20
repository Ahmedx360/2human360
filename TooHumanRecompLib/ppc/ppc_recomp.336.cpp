#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_830A3570"))) PPC_WEAK_FUNC(sub_830A3570);
PPC_FUNC_IMPL(__imp__sub_830A3570) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,-8904
	ctx.r5.s64 = ctx.r10.s64 + -8904;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-17452
	ctx.r4.s64 = ctx.r10.s64 + -17452;
	// addi r11,r11,31260
	ctx.r11.s64 = ctx.r11.s64 + 31260;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-13764
	ctx.r3.s64 = ctx.r10.s64 + -13764;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A35C4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A35D8"))) PPC_WEAK_FUNC(sub_830A35D8);
PPC_FUNC_IMPL(__imp__sub_830A35D8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-9120
	ctx.r5.s64 = ctx.r10.s64 + -9120;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-10788
	ctx.r4.s64 = ctx.r10.s64 + -10788;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-8112
	ctx.r3.s64 = ctx.r10.s64 + -8112;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A3624;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A3638"))) PPC_WEAK_FUNC(sub_830A3638);
PPC_FUNC_IMPL(__imp__sub_830A3638) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-9120
	ctx.r5.s64 = ctx.r10.s64 + -9120;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-10760
	ctx.r4.s64 = ctx.r10.s64 + -10760;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-7932
	ctx.r3.s64 = ctx.r10.s64 + -7932;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A3684;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A3698"))) PPC_WEAK_FUNC(sub_830A3698);
PPC_FUNC_IMPL(__imp__sub_830A3698) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,-8112
	ctx.r5.s64 = ctx.r10.s64 + -8112;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-12000
	ctx.r4.s64 = ctx.r10.s64 + -12000;
	// addi r11,r11,31360
	ctx.r11.s64 = ctx.r11.s64 + 31360;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-6528
	ctx.r3.s64 = ctx.r10.s64 + -6528;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A36EC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A3700"))) PPC_WEAK_FUNC(sub_830A3700);
PPC_FUNC_IMPL(__imp__sub_830A3700) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,-7932
	ctx.r5.s64 = ctx.r10.s64 + -7932;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-11964
	ctx.r4.s64 = ctx.r10.s64 + -11964;
	// addi r11,r11,31440
	ctx.r11.s64 = ctx.r11.s64 + 31440;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-7788
	ctx.r3.s64 = ctx.r10.s64 + -7788;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A3754;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A3768"))) PPC_WEAK_FUNC(sub_830A3768);
PPC_FUNC_IMPL(__imp__sub_830A3768) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-9120
	ctx.r5.s64 = ctx.r10.s64 + -9120;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-10736
	ctx.r4.s64 = ctx.r10.s64 + -10736;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-7608
	ctx.r3.s64 = ctx.r10.s64 + -7608;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A37B4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A37C8"))) PPC_WEAK_FUNC(sub_830A37C8);
PPC_FUNC_IMPL(__imp__sub_830A37C8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r5,r10,-7608
	ctx.r5.s64 = ctx.r10.s64 + -7608;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-11528
	ctx.r4.s64 = ctx.r10.s64 + -11528;
	// addi r11,r11,31520
	ctx.r11.s64 = ctx.r11.s64 + 31520;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-11892
	ctx.r3.s64 = ctx.r10.s64 + -11892;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A381C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A3830"))) PPC_WEAK_FUNC(sub_830A3830);
PPC_FUNC_IMPL(__imp__sub_830A3830) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,10
	ctx.r8.s64 = 10;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-16332
	ctx.r4.s64 = ctx.r10.s64 + -16332;
	// addi r11,r11,31720
	ctx.r11.s64 = ctx.r11.s64 + 31720;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-7392
	ctx.r3.s64 = ctx.r10.s64 + -7392;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A3880;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A3890"))) PPC_WEAK_FUNC(sub_830A3890);
PPC_FUNC_IMPL(__imp__sub_830A3890) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-16288
	ctx.r4.s64 = ctx.r10.s64 + -16288;
	// addi r11,r11,29820
	ctx.r11.s64 = ctx.r11.s64 + 29820;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-4728
	ctx.r3.s64 = ctx.r10.s64 + -4728;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A38E0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A38F0"))) PPC_WEAK_FUNC(sub_830A38F0);
PPC_FUNC_IMPL(__imp__sub_830A38F0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,9
	ctx.r8.s64 = 9;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-16256
	ctx.r4.s64 = ctx.r10.s64 + -16256;
	// addi r11,r11,31920
	ctx.r11.s64 = ctx.r11.s64 + 31920;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-10452
	ctx.r3.s64 = ctx.r10.s64 + -10452;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A3940;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A3950"))) PPC_WEAK_FUNC(sub_830A3950);
PPC_FUNC_IMPL(__imp__sub_830A3950) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-16220
	ctx.r4.s64 = ctx.r10.s64 + -16220;
	// addi r11,r11,30580
	ctx.r11.s64 = ctx.r11.s64 + 30580;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-5448
	ctx.r3.s64 = ctx.r10.s64 + -5448;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A39A0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A39B0"))) PPC_WEAK_FUNC(sub_830A39B0);
PPC_FUNC_IMPL(__imp__sub_830A39B0) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-9120
	ctx.r5.s64 = ctx.r10.s64 + -9120;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-10720
	ctx.r4.s64 = ctx.r10.s64 + -10720;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-5736
	ctx.r3.s64 = ctx.r10.s64 + -5736;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A39FC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A3A10"))) PPC_WEAK_FUNC(sub_830A3A10);
PPC_FUNC_IMPL(__imp__sub_830A3A10) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,-5736
	ctx.r5.s64 = ctx.r10.s64 + -5736;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-11360
	ctx.r4.s64 = ctx.r10.s64 + -11360;
	// addi r11,r11,31100
	ctx.r11.s64 = ctx.r11.s64 + 31100;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-5088
	ctx.r3.s64 = ctx.r10.s64 + -5088;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A3A64;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A3A78"))) PPC_WEAK_FUNC(sub_830A3A78);
PPC_FUNC_IMPL(__imp__sub_830A3A78) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-14512
	ctx.r4.s64 = ctx.r10.s64 + -14512;
	// addi r11,r11,31300
	ctx.r11.s64 = ctx.r11.s64 + 31300;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-15492
	ctx.r3.s64 = ctx.r10.s64 + -15492;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A3AC8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A3AD8"))) PPC_WEAK_FUNC(sub_830A3AD8);
PPC_FUNC_IMPL(__imp__sub_830A3AD8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-9120
	ctx.r5.s64 = ctx.r10.s64 + -9120;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-14464
	ctx.r4.s64 = ctx.r10.s64 + -14464;
	// addi r11,r11,32100
	ctx.r11.s64 = ctx.r11.s64 + 32100;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-12180
	ctx.r3.s64 = ctx.r10.s64 + -12180;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A3B2C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A3B40"))) PPC_WEAK_FUNC(sub_830A3B40);
PPC_FUNC_IMPL(__imp__sub_830A3B40) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-17272
	ctx.r4.s64 = ctx.r10.s64 + -17272;
	// addi r11,r11,32120
	ctx.r11.s64 = ctx.r11.s64 + 32120;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-6636
	ctx.r3.s64 = ctx.r10.s64 + -6636;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A3B90;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A3BA0"))) PPC_WEAK_FUNC(sub_830A3BA0);
PPC_FUNC_IMPL(__imp__sub_830A3BA0) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-12180
	ctx.r5.s64 = ctx.r10.s64 + -12180;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-17212
	ctx.r4.s64 = ctx.r10.s64 + -17212;
	// addi r11,r11,32180
	ctx.r11.s64 = ctx.r11.s64 + 32180;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-9228
	ctx.r3.s64 = ctx.r10.s64 + -9228;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A3BF4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A3C08"))) PPC_WEAK_FUNC(sub_830A3C08);
PPC_FUNC_IMPL(__imp__sub_830A3C08) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-9120
	ctx.r5.s64 = ctx.r10.s64 + -9120;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-10700
	ctx.r4.s64 = ctx.r10.s64 + -10700;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-4944
	ctx.r3.s64 = ctx.r10.s64 + -4944;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A3C54;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A3C68"))) PPC_WEAK_FUNC(sub_830A3C68);
PPC_FUNC_IMPL(__imp__sub_830A3C68) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r5,r10,-4944
	ctx.r5.s64 = ctx.r10.s64 + -4944;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-11032
	ctx.r4.s64 = ctx.r10.s64 + -11032;
	// addi r11,r11,32200
	ctx.r11.s64 = ctx.r11.s64 + 32200;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-12828
	ctx.r3.s64 = ctx.r10.s64 + -12828;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A3CBC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A3CD0"))) PPC_WEAK_FUNC(sub_830A3CD0);
PPC_FUNC_IMPL(__imp__sub_830A3CD0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-13844
	ctx.r4.s64 = ctx.r10.s64 + -13844;
	// addi r11,r11,32340
	ctx.r11.s64 = ctx.r11.s64 + 32340;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-10704
	ctx.r3.s64 = ctx.r10.s64 + -10704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A3D20;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A3D30"))) PPC_WEAK_FUNC(sub_830A3D30);
PPC_FUNC_IMPL(__imp__sub_830A3D30) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,-9120
	ctx.r5.s64 = ctx.r10.s64 + -9120;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-13828
	ctx.r4.s64 = ctx.r10.s64 + -13828;
	// addi r11,r11,32380
	ctx.r11.s64 = ctx.r11.s64 + 32380;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-14880
	ctx.r3.s64 = ctx.r10.s64 + -14880;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A3D84;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A3D98"))) PPC_WEAK_FUNC(sub_830A3D98);
PPC_FUNC_IMPL(__imp__sub_830A3D98) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,-9120
	ctx.r5.s64 = ctx.r10.s64 + -9120;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-13808
	ctx.r4.s64 = ctx.r10.s64 + -13808;
	// addi r11,r11,32440
	ctx.r11.s64 = ctx.r11.s64 + 32440;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-7644
	ctx.r3.s64 = ctx.r10.s64 + -7644;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A3DEC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A3E00"))) PPC_WEAK_FUNC(sub_830A3E00);
PPC_FUNC_IMPL(__imp__sub_830A3E00) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-9120
	ctx.r5.s64 = ctx.r10.s64 + -9120;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-10676
	ctx.r4.s64 = ctx.r10.s64 + -10676;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-8472
	ctx.r3.s64 = ctx.r10.s64 + -8472;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A3E4C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A3E60"))) PPC_WEAK_FUNC(sub_830A3E60);
PPC_FUNC_IMPL(__imp__sub_830A3E60) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,-8472
	ctx.r5.s64 = ctx.r10.s64 + -8472;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-10860
	ctx.r4.s64 = ctx.r10.s64 + -10860;
	// addi r11,r11,32500
	ctx.r11.s64 = ctx.r11.s64 + 32500;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-7068
	ctx.r3.s64 = ctx.r10.s64 + -7068;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A3EB4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A3EC8"))) PPC_WEAK_FUNC(sub_830A3EC8);
PPC_FUNC_IMPL(__imp__sub_830A3EC8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-9120
	ctx.r5.s64 = ctx.r10.s64 + -9120;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-10620
	ctx.r4.s64 = ctx.r10.s64 + -10620;
	// addi r11,r11,32560
	ctx.r11.s64 = ctx.r11.s64 + 32560;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-13512
	ctx.r3.s64 = ctx.r10.s64 + -13512;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A3F1C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A3F30"))) PPC_WEAK_FUNC(sub_830A3F30);
PPC_FUNC_IMPL(__imp__sub_830A3F30) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r5,r10,-9120
	ctx.r5.s64 = ctx.r10.s64 + -9120;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,32580
	ctx.r11.s64 = ctx.r11.s64 + 32580;
	// addi r4,r10,-14220
	ctx.r4.s64 = ctx.r10.s64 + -14220;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r10,-8616
	ctx.r3.s64 = ctx.r10.s64 + -8616;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830A3F80;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A3F90"))) PPC_WEAK_FUNC(sub_830A3F90);
PPC_FUNC_IMPL(__imp__sub_830A3F90) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,-13512
	ctx.r5.s64 = ctx.r10.s64 + -13512;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-14192
	ctx.r4.s64 = ctx.r10.s64 + -14192;
	// addi r11,r11,32600
	ctx.r11.s64 = ctx.r11.s64 + 32600;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-9948
	ctx.r3.s64 = ctx.r10.s64 + -9948;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A3FE4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A3FF8"))) PPC_WEAK_FUNC(sub_830A3FF8);
PPC_FUNC_IMPL(__imp__sub_830A3FF8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,5
	ctx.r8.s64 = 5;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-3704
	ctx.r4.s64 = ctx.r10.s64 + -3704;
	// addi r11,r11,-29784
	ctx.r11.s64 = ctx.r11.s64 + -29784;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,4632
	ctx.r3.s64 = ctx.r10.s64 + 4632;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A4048;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4058"))) PPC_WEAK_FUNC(sub_830A4058);
PPC_FUNC_IMPL(__imp__sub_830A4058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,-8228
	ctx.r10.s64 = ctx.r10.s64 + -8228;
	// lwz r11,-29684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29684);
	// stw r11,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4070"))) PPC_WEAK_FUNC(sub_830A4070);
PPC_FUNC_IMPL(__imp__sub_830A4070) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r11,26952
	ctx.r9.s64 = ctx.r11.s64 + 26952;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-3680
	ctx.r4.s64 = ctx.r10.s64 + -3680;
	// addi r11,r11,-8228
	ctx.r11.s64 = ctx.r11.s64 + -8228;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,816
	ctx.r3.s64 = ctx.r10.s64 + 816;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A40C8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A40D8"))) PPC_WEAK_FUNC(sub_830A40D8);
PPC_FUNC_IMPL(__imp__sub_830A40D8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,596
	ctx.r4.s64 = ctx.r10.s64 + 596;
	// addi r11,r11,-29680
	ctx.r11.s64 = ctx.r11.s64 + -29680;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,5712
	ctx.r3.s64 = ctx.r10.s64 + 5712;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A4128;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4138"))) PPC_WEAK_FUNC(sub_830A4138);
PPC_FUNC_IMPL(__imp__sub_830A4138) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,624
	ctx.r4.s64 = ctx.r10.s64 + 624;
	// addi r11,r11,-29640
	ctx.r11.s64 = ctx.r11.s64 + -29640;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,6396
	ctx.r3.s64 = ctx.r10.s64 + 6396;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A4188;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4198"))) PPC_WEAK_FUNC(sub_830A4198);
PPC_FUNC_IMPL(__imp__sub_830A4198) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,2688
	ctx.r5.s64 = ctx.r10.s64 + 2688;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-8296
	ctx.r4.s64 = ctx.r10.s64 + -8296;
	// addi r11,r11,-29600
	ctx.r11.s64 = ctx.r11.s64 + -29600;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3000
	ctx.r3.s64 = ctx.r10.s64 + -3000;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A41EC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4200"))) PPC_WEAK_FUNC(sub_830A4200);
PPC_FUNC_IMPL(__imp__sub_830A4200) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,5
	ctx.r8.s64 = 5;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,644
	ctx.r4.s64 = ctx.r10.s64 + 644;
	// addi r11,r11,-29520
	ctx.r11.s64 = ctx.r11.s64 + -29520;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,4704
	ctx.r3.s64 = ctx.r10.s64 + 4704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A4250;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4260"))) PPC_WEAK_FUNC(sub_830A4260);
PPC_FUNC_IMPL(__imp__sub_830A4260) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r5,r10,-3000
	ctx.r5.s64 = ctx.r10.s64 + -3000;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,700
	ctx.r4.s64 = ctx.r10.s64 + 700;
	// addi r11,r11,-29400
	ctx.r11.s64 = ctx.r11.s64 + -29400;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,6864
	ctx.r3.s64 = ctx.r10.s64 + 6864;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A42B4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A42C8"))) PPC_WEAK_FUNC(sub_830A42C8);
PPC_FUNC_IMPL(__imp__sub_830A42C8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-3000
	ctx.r5.s64 = ctx.r10.s64 + -3000;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,736
	ctx.r4.s64 = ctx.r10.s64 + 736;
	// addi r11,r11,-29420
	ctx.r11.s64 = ctx.r11.s64 + -29420;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-2424
	ctx.r3.s64 = ctx.r10.s64 + -2424;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A431C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4330"))) PPC_WEAK_FUNC(sub_830A4330);
PPC_FUNC_IMPL(__imp__sub_830A4330) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,5
	ctx.r8.s64 = 5;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,768
	ctx.r4.s64 = ctx.r10.s64 + 768;
	// addi r11,r11,-29240
	ctx.r11.s64 = ctx.r11.s64 + -29240;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,3336
	ctx.r3.s64 = ctx.r10.s64 + 3336;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A4380;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4390"))) PPC_WEAK_FUNC(sub_830A4390);
PPC_FUNC_IMPL(__imp__sub_830A4390) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r5,r10,-3000
	ctx.r5.s64 = ctx.r10.s64 + -3000;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,816
	ctx.r4.s64 = ctx.r10.s64 + 816;
	// addi r11,r11,-29136
	ctx.r11.s64 = ctx.r11.s64 + -29136;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,5496
	ctx.r3.s64 = ctx.r10.s64 + 5496;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A43E4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A43F8"))) PPC_WEAK_FUNC(sub_830A43F8);
PPC_FUNC_IMPL(__imp__sub_830A43F8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,844
	ctx.r4.s64 = ctx.r10.s64 + 844;
	// addi r11,r11,-29260
	ctx.r11.s64 = ctx.r11.s64 + -29260;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-804
	ctx.r3.s64 = ctx.r10.s64 + -804;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A4448;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4458"))) PPC_WEAK_FUNC(sub_830A4458);
PPC_FUNC_IMPL(__imp__sub_830A4458) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,4
	ctx.r8.s64 = 4;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-3432
	ctx.r4.s64 = ctx.r10.s64 + -3432;
	// addi r11,r11,-28976
	ctx.r11.s64 = ctx.r11.s64 + -28976;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,4020
	ctx.r3.s64 = ctx.r10.s64 + 4020;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A44A8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A44B8"))) PPC_WEAK_FUNC(sub_830A44B8);
PPC_FUNC_IMPL(__imp__sub_830A44B8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r10,27004
	ctx.r9.s64 = ctx.r10.s64 + 27004;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r5,r10,2688
	ctx.r5.s64 = ctx.r10.s64 + 2688;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-28996
	ctx.r11.s64 = ctx.r11.s64 + -28996;
	// addi r4,r10,868
	ctx.r4.s64 = ctx.r10.s64 + 868;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,6900
	ctx.r3.s64 = ctx.r10.s64 + 6900;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830A4510;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4520"))) PPC_WEAK_FUNC(sub_830A4520);
PPC_FUNC_IMPL(__imp__sub_830A4520) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,888
	ctx.r4.s64 = ctx.r10.s64 + 888;
	// addi r11,r11,-28896
	ctx.r11.s64 = ctx.r11.s64 + -28896;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-624
	ctx.r3.s64 = ctx.r10.s64 + -624;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A4570;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4580"))) PPC_WEAK_FUNC(sub_830A4580);
PPC_FUNC_IMPL(__imp__sub_830A4580) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,6
	ctx.r8.s64 = 6;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,924
	ctx.r4.s64 = ctx.r10.s64 + 924;
	// addi r11,r11,-28832
	ctx.r11.s64 = ctx.r11.s64 + -28832;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,1968
	ctx.r3.s64 = ctx.r10.s64 + 1968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A45D0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A45E0"))) PPC_WEAK_FUNC(sub_830A45E0);
PPC_FUNC_IMPL(__imp__sub_830A45E0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,6
	ctx.r8.s64 = 6;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,960
	ctx.r4.s64 = ctx.r10.s64 + 960;
	// addi r11,r11,-28712
	ctx.r11.s64 = ctx.r11.s64 + -28712;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,7584
	ctx.r3.s64 = ctx.r10.s64 + 7584;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A4630;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4640"))) PPC_WEAK_FUNC(sub_830A4640);
PPC_FUNC_IMPL(__imp__sub_830A4640) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,2688
	ctx.r5.s64 = ctx.r10.s64 + 2688;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,984
	ctx.r4.s64 = ctx.r10.s64 + 984;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,3408
	ctx.r3.s64 = ctx.r10.s64 + 3408;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A468C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A46A0"))) PPC_WEAK_FUNC(sub_830A46A0);
PPC_FUNC_IMPL(__imp__sub_830A46A0) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,3408
	ctx.r5.s64 = ctx.r10.s64 + 3408;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,1012
	ctx.r4.s64 = ctx.r10.s64 + 1012;
	// addi r11,r11,-28592
	ctx.r11.s64 = ctx.r11.s64 + -28592;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,2328
	ctx.r3.s64 = ctx.r10.s64 + 2328;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A46F4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4708"))) PPC_WEAK_FUNC(sub_830A4708);
PPC_FUNC_IMPL(__imp__sub_830A4708) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-3368
	ctx.r4.s64 = ctx.r10.s64 + -3368;
	// addi r11,r11,-28512
	ctx.r11.s64 = ctx.r11.s64 + -28512;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1740
	ctx.r3.s64 = ctx.r10.s64 + -1740;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A4758;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4768"))) PPC_WEAK_FUNC(sub_830A4768);
PPC_FUNC_IMPL(__imp__sub_830A4768) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,4
	ctx.r8.s64 = 4;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-9408
	ctx.r4.s64 = ctx.r10.s64 + -9408;
	// addi r11,r11,-28472
	ctx.r11.s64 = ctx.r11.s64 + -28472;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,492
	ctx.r3.s64 = ctx.r10.s64 + 492;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A47B8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A47C8"))) PPC_WEAK_FUNC(sub_830A47C8);
PPC_FUNC_IMPL(__imp__sub_830A47C8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,4
	ctx.r8.s64 = 4;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-3360
	ctx.r4.s64 = ctx.r10.s64 + -3360;
	// addi r11,r11,-28392
	ctx.r11.s64 = ctx.r11.s64 + -28392;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3612
	ctx.r3.s64 = ctx.r10.s64 + -3612;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A4818;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4828"))) PPC_WEAK_FUNC(sub_830A4828);
PPC_FUNC_IMPL(__imp__sub_830A4828) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r7,11
	ctx.r7.s64 = 11;
	// addi r9,r10,27048
	ctx.r9.s64 = ctx.r10.s64 + 27048;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,25592
	ctx.r4.s64 = ctx.r10.s64 + 25592;
	// addi r11,r11,-28312
	ctx.r11.s64 = ctx.r11.s64 + -28312;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-4512
	ctx.r3.s64 = ctx.r10.s64 + -4512;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A487C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4890"))) PPC_WEAK_FUNC(sub_830A4890);
PPC_FUNC_IMPL(__imp__sub_830A4890) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,13
	ctx.r8.s64 = 13;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,25616
	ctx.r4.s64 = ctx.r10.s64 + 25616;
	// addi r11,r11,-28072
	ctx.r11.s64 = ctx.r11.s64 + -28072;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3216
	ctx.r3.s64 = ctx.r10.s64 + -3216;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A48E0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A48F0"))) PPC_WEAK_FUNC(sub_830A48F0);
PPC_FUNC_IMPL(__imp__sub_830A48F0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,25636
	ctx.r4.s64 = ctx.r10.s64 + 25636;
	// addi r11,r11,-28092
	ctx.r11.s64 = ctx.r11.s64 + -28092;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3396
	ctx.r3.s64 = ctx.r10.s64 + -3396;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A4940;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4950"))) PPC_WEAK_FUNC(sub_830A4950);
PPC_FUNC_IMPL(__imp__sub_830A4950) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,25648
	ctx.r4.s64 = ctx.r10.s64 + 25648;
	// addi r11,r11,-27812
	ctx.r11.s64 = ctx.r11.s64 + -27812;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,3588
	ctx.r3.s64 = ctx.r10.s64 + 3588;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A49A0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A49B0"))) PPC_WEAK_FUNC(sub_830A49B0);
PPC_FUNC_IMPL(__imp__sub_830A49B0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,25668
	ctx.r4.s64 = ctx.r10.s64 + 25668;
	// addi r11,r11,-27792
	ctx.r11.s64 = ctx.r11.s64 + -27792;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,2796
	ctx.r3.s64 = ctx.r10.s64 + 2796;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A4A00;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4A10"))) PPC_WEAK_FUNC(sub_830A4A10);
PPC_FUNC_IMPL(__imp__sub_830A4A10) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,4956
	ctx.r5.s64 = ctx.r10.s64 + 4956;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,25684
	ctx.r4.s64 = ctx.r10.s64 + 25684;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,7224
	ctx.r3.s64 = ctx.r10.s64 + 7224;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A4A5C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4A70"))) PPC_WEAK_FUNC(sub_830A4A70);
PPC_FUNC_IMPL(__imp__sub_830A4A70) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r5,r10,7224
	ctx.r5.s64 = ctx.r10.s64 + 7224;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,25700
	ctx.r4.s64 = ctx.r10.s64 + 25700;
	// addi r11,r11,-27752
	ctx.r11.s64 = ctx.r11.s64 + -27752;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3972
	ctx.r3.s64 = ctx.r10.s64 + -3972;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A4AC4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4AD8"))) PPC_WEAK_FUNC(sub_830A4AD8);
PPC_FUNC_IMPL(__imp__sub_830A4AD8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-3972
	ctx.r5.s64 = ctx.r10.s64 + -3972;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,25728
	ctx.r4.s64 = ctx.r10.s64 + 25728;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,3084
	ctx.r3.s64 = ctx.r10.s64 + 3084;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A4B24;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4B38"))) PPC_WEAK_FUNC(sub_830A4B38);
PPC_FUNC_IMPL(__imp__sub_830A4B38) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-8324
	ctx.r4.s64 = ctx.r10.s64 + -8324;
	// addi r11,r11,-27632
	ctx.r11.s64 = ctx.r11.s64 + -27632;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,1824
	ctx.r3.s64 = ctx.r10.s64 + 1824;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A4B88;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4B98"))) PPC_WEAK_FUNC(sub_830A4B98);
PPC_FUNC_IMPL(__imp__sub_830A4B98) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r5,r10,7224
	ctx.r5.s64 = ctx.r10.s64 + 7224;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-8344
	ctx.r4.s64 = ctx.r10.s64 + -8344;
	// addi r11,r11,-27512
	ctx.r11.s64 = ctx.r11.s64 + -27512;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,2472
	ctx.r3.s64 = ctx.r10.s64 + 2472;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A4BEC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4C00"))) PPC_WEAK_FUNC(sub_830A4C00);
PPC_FUNC_IMPL(__imp__sub_830A4C00) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-8900
	ctx.r4.s64 = ctx.r10.s64 + -8900;
	// addi r11,r11,-27572
	ctx.r11.s64 = ctx.r11.s64 + -27572;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-12
	ctx.r3.s64 = ctx.r10.s64 + -12;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A4C50;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4C60"))) PPC_WEAK_FUNC(sub_830A4C60);
PPC_FUNC_IMPL(__imp__sub_830A4C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,-6720
	ctx.r10.s64 = ctx.r10.s64 + -6720;
	// lwz r11,-27412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27412);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4C78"))) PPC_WEAK_FUNC(sub_830A4C78);
PPC_FUNC_IMPL(__imp__sub_830A4C78) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// addi r9,r11,27084
	ctx.r9.s64 = ctx.r11.s64 + 27084;
	// addi r5,r10,7224
	ctx.r5.s64 = ctx.r10.s64 + 7224;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// li r7,12
	ctx.r7.s64 = 12;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-8884
	ctx.r4.s64 = ctx.r10.s64 + -8884;
	// addi r11,r11,-6720
	ctx.r11.s64 = ctx.r11.s64 + -6720;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3792
	ctx.r3.s64 = ctx.r10.s64 + -3792;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A4CD4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4CE8"))) PPC_WEAK_FUNC(sub_830A4CE8);
PPC_FUNC_IMPL(__imp__sub_830A4CE8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,7224
	ctx.r5.s64 = ctx.r10.s64 + 7224;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,25916
	ctx.r4.s64 = ctx.r10.s64 + 25916;
	// addi r11,r11,-27408
	ctx.r11.s64 = ctx.r11.s64 + -27408;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-2136
	ctx.r3.s64 = ctx.r10.s64 + -2136;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A4D3C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4D50"))) PPC_WEAK_FUNC(sub_830A4D50);
PPC_FUNC_IMPL(__imp__sub_830A4D50) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,7224
	ctx.r5.s64 = ctx.r10.s64 + 7224;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,25940
	ctx.r4.s64 = ctx.r10.s64 + 25940;
	// addi r11,r11,-27368
	ctx.r11.s64 = ctx.r11.s64 + -27368;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-2496
	ctx.r3.s64 = ctx.r10.s64 + -2496;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A4DA4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4DB8"))) PPC_WEAK_FUNC(sub_830A4DB8);
PPC_FUNC_IMPL(__imp__sub_830A4DB8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,4956
	ctx.r5.s64 = ctx.r10.s64 + 4956;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,25988
	ctx.r4.s64 = ctx.r10.s64 + 25988;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-912
	ctx.r3.s64 = ctx.r10.s64 + -912;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A4E04;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4E18"))) PPC_WEAK_FUNC(sub_830A4E18);
PPC_FUNC_IMPL(__imp__sub_830A4E18) {
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
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r8,r10,-27328
	ctx.r8.s64 = ctx.r10.s64 + -27328;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r10,-912
	ctx.r5.s64 = ctx.r10.s64 + -912;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,27152
	ctx.r11.s64 = ctx.r11.s64 + 27152;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,-9428
	ctx.r4.s64 = ctx.r10.s64 + -9428;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-552
	ctx.r3.s64 = ctx.r10.s64 + -552;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A4E74;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4E88"))) PPC_WEAK_FUNC(sub_830A4E88);
PPC_FUNC_IMPL(__imp__sub_830A4E88) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-912
	ctx.r5.s64 = ctx.r10.s64 + -912;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,26000
	ctx.r4.s64 = ctx.r10.s64 + 26000;
	// addi r11,r11,-27348
	ctx.r11.s64 = ctx.r11.s64 + -27348;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-516
	ctx.r3.s64 = ctx.r10.s64 + -516;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A4EDC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4EF0"))) PPC_WEAK_FUNC(sub_830A4EF0);
PPC_FUNC_IMPL(__imp__sub_830A4EF0) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r5,r10,-912
	ctx.r5.s64 = ctx.r10.s64 + -912;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,26032
	ctx.r4.s64 = ctx.r10.s64 + 26032;
	// addi r11,r11,-26984
	ctx.r11.s64 = ctx.r11.s64 + -26984;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-696
	ctx.r3.s64 = ctx.r10.s64 + -696;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A4F44;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4F58"))) PPC_WEAK_FUNC(sub_830A4F58);
PPC_FUNC_IMPL(__imp__sub_830A4F58) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r5,r10,-912
	ctx.r5.s64 = ctx.r10.s64 + -912;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-8380
	ctx.r4.s64 = ctx.r10.s64 + -8380;
	// addi r11,r11,-26840
	ctx.r11.s64 = ctx.r11.s64 + -26840;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3360
	ctx.r3.s64 = ctx.r10.s64 + -3360;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A4FAC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A4FC0"))) PPC_WEAK_FUNC(sub_830A4FC0);
PPC_FUNC_IMPL(__imp__sub_830A4FC0) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,11
	ctx.r8.s64 = 11;
	// addi r5,r10,-912
	ctx.r5.s64 = ctx.r10.s64 + -912;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,26052
	ctx.r4.s64 = ctx.r10.s64 + 26052;
	// addi r11,r11,-26640
	ctx.r11.s64 = ctx.r11.s64 + -26640;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1668
	ctx.r3.s64 = ctx.r10.s64 + -1668;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A5014;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5028"))) PPC_WEAK_FUNC(sub_830A5028);
PPC_FUNC_IMPL(__imp__sub_830A5028) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,-912
	ctx.r5.s64 = ctx.r10.s64 + -912;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,26072
	ctx.r4.s64 = ctx.r10.s64 + 26072;
	// addi r11,r11,-26420
	ctx.r11.s64 = ctx.r11.s64 + -26420;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24
	ctx.r3.s64 = ctx.r10.s64 + 24;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A507C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5090"))) PPC_WEAK_FUNC(sub_830A5090);
PPC_FUNC_IMPL(__imp__sub_830A5090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,-8888
	ctx.r10.s64 = ctx.r10.s64 + -8888;
	// lwz r11,-26988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26988);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A50A8"))) PPC_WEAK_FUNC(sub_830A50A8);
PPC_FUNC_IMPL(__imp__sub_830A50A8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// addi r9,r11,27244
	ctx.r9.s64 = ctx.r11.s64 + 27244;
	// addi r5,r10,-912
	ctx.r5.s64 = ctx.r10.s64 + -912;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// li r7,17
	ctx.r7.s64 = 17;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,26276
	ctx.r4.s64 = ctx.r10.s64 + 26276;
	// addi r11,r11,-8888
	ctx.r11.s64 = ctx.r11.s64 + -8888;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1920
	ctx.r3.s64 = ctx.r10.s64 + -1920;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A5104;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5118"))) PPC_WEAK_FUNC(sub_830A5118);
PPC_FUNC_IMPL(__imp__sub_830A5118) {
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
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r10,-26380
	ctx.r8.s64 = ctx.r10.s64 + -26380;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r10,2688
	ctx.r5.s64 = ctx.r10.s64 + 2688;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,27348
	ctx.r11.s64 = ctx.r11.s64 + 27348;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,26300
	ctx.r4.s64 = ctx.r10.s64 + 26300;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,7260
	ctx.r3.s64 = ctx.r10.s64 + 7260;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A5174;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5188"))) PPC_WEAK_FUNC(sub_830A5188);
PPC_FUNC_IMPL(__imp__sub_830A5188) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,6
	ctx.r8.s64 = 6;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-9200
	ctx.r4.s64 = ctx.r10.s64 + -9200;
	// addi r11,r11,-26320
	ctx.r11.s64 = ctx.r11.s64 + -26320;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,4596
	ctx.r3.s64 = ctx.r10.s64 + 4596;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A51D8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A51E8"))) PPC_WEAK_FUNC(sub_830A51E8);
PPC_FUNC_IMPL(__imp__sub_830A51E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,-7928
	ctx.r10.s64 = ctx.r10.s64 + -7928;
	// lwz r11,-26844(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26844);
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5200"))) PPC_WEAK_FUNC(sub_830A5200);
PPC_FUNC_IMPL(__imp__sub_830A5200) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// addi r9,r11,27384
	ctx.r9.s64 = ctx.r11.s64 + 27384;
	// addi r5,r10,-912
	ctx.r5.s64 = ctx.r10.s64 + -912;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
	// li r7,14
	ctx.r7.s64 = 14;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-9264
	ctx.r4.s64 = ctx.r10.s64 + -9264;
	// addi r11,r11,-7928
	ctx.r11.s64 = ctx.r11.s64 + -7928;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3504
	ctx.r3.s64 = ctx.r10.s64 + -3504;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A525C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5270"))) PPC_WEAK_FUNC(sub_830A5270);
PPC_FUNC_IMPL(__imp__sub_830A5270) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,-912
	ctx.r5.s64 = ctx.r10.s64 + -912;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-9236
	ctx.r4.s64 = ctx.r10.s64 + -9236;
	// addi r11,r11,-26200
	ctx.r11.s64 = ctx.r11.s64 + -26200;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,6216
	ctx.r3.s64 = ctx.r10.s64 + 6216;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A52C4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A52D8"))) PPC_WEAK_FUNC(sub_830A52D8);
PPC_FUNC_IMPL(__imp__sub_830A52D8) {
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
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r8,r10,-26160
	ctx.r8.s64 = ctx.r10.s64 + -26160;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r10,-912
	ctx.r5.s64 = ctx.r10.s64 + -912;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,27464
	ctx.r11.s64 = ctx.r11.s64 + 27464;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,32016
	ctx.r4.s64 = ctx.r10.s64 + 32016;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-3684
	ctx.r3.s64 = ctx.r10.s64 + -3684;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A5334;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5348"))) PPC_WEAK_FUNC(sub_830A5348);
PPC_FUNC_IMPL(__imp__sub_830A5348) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,13
	ctx.r8.s64 = 13;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-9296
	ctx.r4.s64 = ctx.r10.s64 + -9296;
	// addi r11,r11,-26000
	ctx.r11.s64 = ctx.r11.s64 + -26000;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,6360
	ctx.r3.s64 = ctx.r10.s64 + 6360;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A5398;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A53A8"))) PPC_WEAK_FUNC(sub_830A53A8);
PPC_FUNC_IMPL(__imp__sub_830A53A8) {
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
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r8,r10,-25680
	ctx.r8.s64 = ctx.r10.s64 + -25680;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r10,-912
	ctx.r5.s64 = ctx.r10.s64 + -912;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,27488
	ctx.r11.s64 = ctx.r11.s64 + 27488;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,-9360
	ctx.r4.s64 = ctx.r10.s64 + -9360;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-2100
	ctx.r3.s64 = ctx.r10.s64 + -2100;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A5404;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5418"))) PPC_WEAK_FUNC(sub_830A5418);
PPC_FUNC_IMPL(__imp__sub_830A5418) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-912
	ctx.r5.s64 = ctx.r10.s64 + -912;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-9332
	ctx.r4.s64 = ctx.r10.s64 + -9332;
	// addi r11,r11,-26660
	ctx.r11.s64 = ctx.r11.s64 + -26660;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,1428
	ctx.r3.s64 = ctx.r10.s64 + 1428;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A546C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5480"))) PPC_WEAK_FUNC(sub_830A5480);
PPC_FUNC_IMPL(__imp__sub_830A5480) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r5,r10,-3360
	ctx.r5.s64 = ctx.r10.s64 + -3360;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-8400
	ctx.r4.s64 = ctx.r10.s64 + -8400;
	// addi r11,r11,-25480
	ctx.r11.s64 = ctx.r11.s64 + -25480;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,5064
	ctx.r3.s64 = ctx.r10.s64 + 5064;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A54D4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A54E8"))) PPC_WEAK_FUNC(sub_830A54E8);
PPC_FUNC_IMPL(__imp__sub_830A54E8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,2688
	ctx.r5.s64 = ctx.r10.s64 + 2688;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,26540
	ctx.r4.s64 = ctx.r10.s64 + 26540;
	// addi r11,r11,-26340
	ctx.r11.s64 = ctx.r11.s64 + -26340;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,4956
	ctx.r3.s64 = ctx.r10.s64 + 4956;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A553C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5550"))) PPC_WEAK_FUNC(sub_830A5550);
PPC_FUNC_IMPL(__imp__sub_830A5550) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-9056
	ctx.r4.s64 = ctx.r10.s64 + -9056;
	// addi r11,r11,-26060
	ctx.r11.s64 = ctx.r11.s64 + -26060;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3108
	ctx.r3.s64 = ctx.r10.s64 + -3108;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A55A0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A55B0"))) PPC_WEAK_FUNC(sub_830A55B0);
PPC_FUNC_IMPL(__imp__sub_830A55B0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-8988
	ctx.r4.s64 = ctx.r10.s64 + -8988;
	// addi r11,r11,-25740
	ctx.r11.s64 = ctx.r11.s64 + -25740;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,6072
	ctx.r3.s64 = ctx.r10.s64 + 6072;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A5600;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5610"))) PPC_WEAK_FUNC(sub_830A5610);
PPC_FUNC_IMPL(__imp__sub_830A5610) {
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
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r8,r10,-25376
	ctx.r8.s64 = ctx.r10.s64 + -25376;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r10,7224
	ctx.r5.s64 = ctx.r10.s64 + 7224;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,27544
	ctx.r11.s64 = ctx.r11.s64 + 27544;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,-8960
	ctx.r4.s64 = ctx.r10.s64 + -8960;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-3540
	ctx.r3.s64 = ctx.r10.s64 + -3540;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A566C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5680"))) PPC_WEAK_FUNC(sub_830A5680);
PPC_FUNC_IMPL(__imp__sub_830A5680) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,27628
	ctx.r9.s64 = ctx.r10.s64 + 27628;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,2688
	ctx.r5.s64 = ctx.r10.s64 + 2688;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r4,r10,26548
	ctx.r4.s64 = ctx.r10.s64 + 26548;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,3660
	ctx.r3.s64 = ctx.r10.s64 + 3660;
	// li r10,1
	ctx.r10.s64 = 1;
	// bl 0x82db4000
	ctx.lr = 0x830A56D0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A56E0"))) PPC_WEAK_FUNC(sub_830A56E0);
PPC_FUNC_IMPL(__imp__sub_830A56E0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,26564
	ctx.r4.s64 = ctx.r10.s64 + 26564;
	// addi r11,r11,-25136
	ctx.r11.s64 = ctx.r11.s64 + -25136;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,4236
	ctx.r3.s64 = ctx.r10.s64 + 4236;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A5730;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5740"))) PPC_WEAK_FUNC(sub_830A5740);
PPC_FUNC_IMPL(__imp__sub_830A5740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,-5912
	ctx.r10.s64 = ctx.r10.s64 + -5912;
	// lwz r11,-25076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25076);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5758"))) PPC_WEAK_FUNC(sub_830A5758);
PPC_FUNC_IMPL(__imp__sub_830A5758) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r9,r10,27672
	ctx.r9.s64 = ctx.r10.s64 + 27672;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r5,r10,3660
	ctx.r5.s64 = ctx.r10.s64 + 3660;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-5912
	ctx.r11.s64 = ctx.r11.s64 + -5912;
	// addi r4,r10,26656
	ctx.r4.s64 = ctx.r10.s64 + 26656;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,4200
	ctx.r3.s64 = ctx.r10.s64 + 4200;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830A57B0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A57C0"))) PPC_WEAK_FUNC(sub_830A57C0);
PPC_FUNC_IMPL(__imp__sub_830A57C0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,4
	ctx.r8.s64 = 4;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,26680
	ctx.r4.s64 = ctx.r10.s64 + 26680;
	// addi r11,r11,-25072
	ctx.r11.s64 = ctx.r11.s64 + -25072;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1848
	ctx.r3.s64 = ctx.r10.s64 + -1848;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A5810;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5820"))) PPC_WEAK_FUNC(sub_830A5820);
PPC_FUNC_IMPL(__imp__sub_830A5820) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,26704
	ctx.r4.s64 = ctx.r10.s64 + 26704;
	// addi r11,r11,-24992
	ctx.r11.s64 = ctx.r11.s64 + -24992;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,2832
	ctx.r3.s64 = ctx.r10.s64 + 2832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A5870;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5880"))) PPC_WEAK_FUNC(sub_830A5880);
PPC_FUNC_IMPL(__imp__sub_830A5880) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,26728
	ctx.r4.s64 = ctx.r10.s64 + 26728;
	// addi r11,r11,-24952
	ctx.r11.s64 = ctx.r11.s64 + -24952;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,4380
	ctx.r3.s64 = ctx.r10.s64 + 4380;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A58D0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A58E0"))) PPC_WEAK_FUNC(sub_830A58E0);
PPC_FUNC_IMPL(__imp__sub_830A58E0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,-14832
	ctx.r4.s64 = ctx.r10.s64 + -14832;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,2292
	ctx.r3.s64 = ctx.r10.s64 + 2292;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A5928;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5938"))) PPC_WEAK_FUNC(sub_830A5938);
PPC_FUNC_IMPL(__imp__sub_830A5938) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,2292
	ctx.r5.s64 = ctx.r10.s64 + 2292;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-14744
	ctx.r4.s64 = ctx.r10.s64 + -14744;
	// addi r11,r11,-24932
	ctx.r11.s64 = ctx.r11.s64 + -24932;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,2688
	ctx.r3.s64 = ctx.r10.s64 + 2688;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A598C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A59A0"))) PPC_WEAK_FUNC(sub_830A59A0);
PPC_FUNC_IMPL(__imp__sub_830A59A0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r9,r10,27692
	ctx.r9.s64 = ctx.r10.s64 + 27692;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-16828
	ctx.r4.s64 = ctx.r10.s64 + -16828;
	// addi r11,r11,-24888
	ctx.r11.s64 = ctx.r11.s64 + -24888;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,1464
	ctx.r3.s64 = ctx.r10.s64 + 1464;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A59F4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5A08"))) PPC_WEAK_FUNC(sub_830A5A08);
PPC_FUNC_IMPL(__imp__sub_830A5A08) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-16732
	ctx.r4.s64 = ctx.r10.s64 + -16732;
	// addi r11,r11,-24748
	ctx.r11.s64 = ctx.r11.s64 + -24748;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,708
	ctx.r3.s64 = ctx.r10.s64 + 708;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A5A58;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5A68"))) PPC_WEAK_FUNC(sub_830A5A68);
PPC_FUNC_IMPL(__imp__sub_830A5A68) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-16716
	ctx.r4.s64 = ctx.r10.s64 + -16716;
	// addi r11,r11,-24708
	ctx.r11.s64 = ctx.r11.s64 + -24708;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,1500
	ctx.r3.s64 = ctx.r10.s64 + 1500;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A5AB8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5AC8"))) PPC_WEAK_FUNC(sub_830A5AC8);
PPC_FUNC_IMPL(__imp__sub_830A5AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,-6072
	ctx.r10.s64 = ctx.r10.s64 + -6072;
	// lwz r11,-24668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24668);
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5AE8"))) PPC_WEAK_FUNC(sub_830A5AE8);
PPC_FUNC_IMPL(__imp__sub_830A5AE8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r9,r10,28056
	ctx.r9.s64 = ctx.r10.s64 + 28056;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-15580
	ctx.r4.s64 = ctx.r10.s64 + -15580;
	// addi r11,r11,-6072
	ctx.r11.s64 = ctx.r11.s64 + -6072;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,2868
	ctx.r3.s64 = ctx.r10.s64 + 2868;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A5B3C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5B50"))) PPC_WEAK_FUNC(sub_830A5B50);
PPC_FUNC_IMPL(__imp__sub_830A5B50) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-15284
	ctx.r4.s64 = ctx.r10.s64 + -15284;
	// addi r11,r11,-24656
	ctx.r11.s64 = ctx.r11.s64 + -24656;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-2460
	ctx.r3.s64 = ctx.r10.s64 + -2460;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A5BA0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5BB0"))) PPC_WEAK_FUNC(sub_830A5BB0);
PPC_FUNC_IMPL(__imp__sub_830A5BB0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-15248
	ctx.r4.s64 = ctx.r10.s64 + -15248;
	// addi r11,r11,-24616
	ctx.r11.s64 = ctx.r11.s64 + -24616;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,7620
	ctx.r3.s64 = ctx.r10.s64 + 7620;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A5C00;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5C10"))) PPC_WEAK_FUNC(sub_830A5C10);
PPC_FUNC_IMPL(__imp__sub_830A5C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,-6376
	ctx.r10.s64 = ctx.r10.s64 + -6376;
	// lwz r11,-24596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24596);
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5C28"))) PPC_WEAK_FUNC(sub_830A5C28);
PPC_FUNC_IMPL(__imp__sub_830A5C28) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r9,r10,28116
	ctx.r9.s64 = ctx.r10.s64 + 28116;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-15220
	ctx.r4.s64 = ctx.r10.s64 + -15220;
	// addi r11,r11,-6376
	ctx.r11.s64 = ctx.r11.s64 + -6376;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-1704
	ctx.r3.s64 = ctx.r10.s64 + -1704;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A5C7C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5C90"))) PPC_WEAK_FUNC(sub_830A5C90);
PPC_FUNC_IMPL(__imp__sub_830A5C90) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-12008
	ctx.r4.s64 = ctx.r10.s64 + -12008;
	// addi r11,r11,-24592
	ctx.r11.s64 = ctx.r11.s64 + -24592;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1776
	ctx.r3.s64 = ctx.r10.s64 + -1776;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A5CE0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5CF0"))) PPC_WEAK_FUNC(sub_830A5CF0);
PPC_FUNC_IMPL(__imp__sub_830A5CF0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-11940
	ctx.r4.s64 = ctx.r10.s64 + -11940;
	// addi r11,r11,-24552
	ctx.r11.s64 = ctx.r11.s64 + -24552;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-4332
	ctx.r3.s64 = ctx.r10.s64 + -4332;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A5D40;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5D50"))) PPC_WEAK_FUNC(sub_830A5D50);
PPC_FUNC_IMPL(__imp__sub_830A5D50) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r9,r10,28144
	ctx.r9.s64 = ctx.r10.s64 + 28144;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-11636
	ctx.r4.s64 = ctx.r10.s64 + -11636;
	// addi r11,r11,-24488
	ctx.r11.s64 = ctx.r11.s64 + -24488;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,5820
	ctx.r3.s64 = ctx.r10.s64 + 5820;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A5DA4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5DB8"))) PPC_WEAK_FUNC(sub_830A5DB8);
PPC_FUNC_IMPL(__imp__sub_830A5DB8) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,10
	ctx.r8.s64 = 10;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-11204
	ctx.r4.s64 = ctx.r10.s64 + -11204;
	// addi r11,r11,-24408
	ctx.r11.s64 = ctx.r11.s64 + -24408;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-408
	ctx.r3.s64 = ctx.r10.s64 + -408;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A5E08;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5E18"))) PPC_WEAK_FUNC(sub_830A5E18);
PPC_FUNC_IMPL(__imp__sub_830A5E18) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-11168
	ctx.r4.s64 = ctx.r10.s64 + -11168;
	// addi r11,r11,-24508
	ctx.r11.s64 = ctx.r11.s64 + -24508;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,2616
	ctx.r3.s64 = ctx.r10.s64 + 2616;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A5E68;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5E78"))) PPC_WEAK_FUNC(sub_830A5E78);
PPC_FUNC_IMPL(__imp__sub_830A5E78) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,5
	ctx.r8.s64 = 5;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-10980
	ctx.r4.s64 = ctx.r10.s64 + -10980;
	// addi r11,r11,-24208
	ctx.r11.s64 = ctx.r11.s64 + -24208;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,5280
	ctx.r3.s64 = ctx.r10.s64 + 5280;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A5EC8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5ED8"))) PPC_WEAK_FUNC(sub_830A5ED8);
PPC_FUNC_IMPL(__imp__sub_830A5ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,-8928
	ctx.r10.s64 = ctx.r10.s64 + -8928;
	// lwz r11,-24088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24088);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5EF0"))) PPC_WEAK_FUNC(sub_830A5EF0);
PPC_FUNC_IMPL(__imp__sub_830A5EF0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-6924
	ctx.r4.s64 = ctx.r10.s64 + -6924;
	// addi r11,r11,-8928
	ctx.r11.s64 = ctx.r11.s64 + -8928;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-2820
	ctx.r3.s64 = ctx.r10.s64 + -2820;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A5F40;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5F50"))) PPC_WEAK_FUNC(sub_830A5F50);
PPC_FUNC_IMPL(__imp__sub_830A5F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,-8028
	ctx.r10.s64 = ctx.r10.s64 + -8028;
	// lwz r11,-24088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24088);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5F68"))) PPC_WEAK_FUNC(sub_830A5F68);
PPC_FUNC_IMPL(__imp__sub_830A5F68) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-6384
	ctx.r4.s64 = ctx.r10.s64 + -6384;
	// addi r11,r11,-8028
	ctx.r11.s64 = ctx.r11.s64 + -8028;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,6684
	ctx.r3.s64 = ctx.r10.s64 + 6684;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A5FB8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5FC8"))) PPC_WEAK_FUNC(sub_830A5FC8);
PPC_FUNC_IMPL(__imp__sub_830A5FC8) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-6140
	ctx.r4.s64 = ctx.r10.s64 + -6140;
	// addi r11,r11,-24108
	ctx.r11.s64 = ctx.r11.s64 + -24108;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,1608
	ctx.r3.s64 = ctx.r10.s64 + 1608;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A6018;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6028"))) PPC_WEAK_FUNC(sub_830A6028);
PPC_FUNC_IMPL(__imp__sub_830A6028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,-8068
	ctx.r10.s64 = ctx.r10.s64 + -8068;
	// lwz r11,-24088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24088);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6040"))) PPC_WEAK_FUNC(sub_830A6040);
PPC_FUNC_IMPL(__imp__sub_830A6040) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-8020
	ctx.r4.s64 = ctx.r10.s64 + -8020;
	// addi r11,r11,-8068
	ctx.r11.s64 = ctx.r11.s64 + -8068;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,4776
	ctx.r3.s64 = ctx.r10.s64 + 4776;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A6090;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A60A0"))) PPC_WEAK_FUNC(sub_830A60A0);
PPC_FUNC_IMPL(__imp__sub_830A60A0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r9,r10,28204
	ctx.r9.s64 = ctx.r10.s64 + 28204;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-7800
	ctx.r4.s64 = ctx.r10.s64 + -7800;
	// addi r11,r11,-24084
	ctx.r11.s64 = ctx.r11.s64 + -24084;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,3552
	ctx.r3.s64 = ctx.r10.s64 + 3552;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A60F4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6108"))) PPC_WEAK_FUNC(sub_830A6108);
PPC_FUNC_IMPL(__imp__sub_830A6108) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-7732
	ctx.r4.s64 = ctx.r10.s64 + -7732;
	// addi r11,r11,-24044
	ctx.r11.s64 = ctx.r11.s64 + -24044;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,2400
	ctx.r3.s64 = ctx.r10.s64 + 2400;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A6158;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6168"))) PPC_WEAK_FUNC(sub_830A6168);
PPC_FUNC_IMPL(__imp__sub_830A6168) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-4832
	ctx.r4.s64 = ctx.r10.s64 + -4832;
	// addi r11,r11,-24004
	ctx.r11.s64 = ctx.r11.s64 + -24004;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,60
	ctx.r3.s64 = ctx.r10.s64 + 60;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A61B8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A61C8"))) PPC_WEAK_FUNC(sub_830A61C8);
PPC_FUNC_IMPL(__imp__sub_830A61C8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,276
	ctx.r5.s64 = ctx.r10.s64 + 276;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-4788
	ctx.r4.s64 = ctx.r10.s64 + -4788;
	// addi r11,r11,-23964
	ctx.r11.s64 = ctx.r11.s64 + -23964;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,3624
	ctx.r3.s64 = ctx.r10.s64 + 3624;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A621C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6230"))) PPC_WEAK_FUNC(sub_830A6230);
PPC_FUNC_IMPL(__imp__sub_830A6230) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-4716
	ctx.r4.s64 = ctx.r10.s64 + -4716;
	// addi r11,r11,-23944
	ctx.r11.s64 = ctx.r11.s64 + -23944;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,276
	ctx.r3.s64 = ctx.r10.s64 + 276;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A6280;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6290"))) PPC_WEAK_FUNC(sub_830A6290);
PPC_FUNC_IMPL(__imp__sub_830A6290) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-4624
	ctx.r4.s64 = ctx.r10.s64 + -4624;
	// addi r11,r11,-23904
	ctx.r11.s64 = ctx.r11.s64 + -23904;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1452
	ctx.r3.s64 = ctx.r10.s64 + -1452;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A62E0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A62F0"))) PPC_WEAK_FUNC(sub_830A62F0);
PPC_FUNC_IMPL(__imp__sub_830A62F0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-4588
	ctx.r4.s64 = ctx.r10.s64 + -4588;
	// addi r11,r11,-23884
	ctx.r11.s64 = ctx.r11.s64 + -23884;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,1104
	ctx.r3.s64 = ctx.r10.s64 + 1104;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A6340;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6350"))) PPC_WEAK_FUNC(sub_830A6350);
PPC_FUNC_IMPL(__imp__sub_830A6350) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,7
	ctx.r8.s64 = 7;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-7468
	ctx.r4.s64 = ctx.r10.s64 + -7468;
	// addi r11,r11,-23824
	ctx.r11.s64 = ctx.r11.s64 + -23824;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,1320
	ctx.r3.s64 = ctx.r10.s64 + 1320;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A63A0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A63B0"))) PPC_WEAK_FUNC(sub_830A63B0);
PPC_FUNC_IMPL(__imp__sub_830A63B0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-7336
	ctx.r4.s64 = ctx.r10.s64 + -7336;
	// addi r11,r11,-23684
	ctx.r11.s64 = ctx.r11.s64 + -23684;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,3372
	ctx.r3.s64 = ctx.r10.s64 + 3372;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A6400;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6410"))) PPC_WEAK_FUNC(sub_830A6410);
PPC_FUNC_IMPL(__imp__sub_830A6410) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-7312
	ctx.r4.s64 = ctx.r10.s64 + -7312;
	// addi r11,r11,-23844
	ctx.r11.s64 = ctx.r11.s64 + -23844;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,1032
	ctx.r3.s64 = ctx.r10.s64 + 1032;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A6460;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6470"))) PPC_WEAK_FUNC(sub_830A6470);
PPC_FUNC_IMPL(__imp__sub_830A6470) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-5556
	ctx.r4.s64 = ctx.r10.s64 + -5556;
	// addi r11,r11,-23644
	ctx.r11.s64 = ctx.r11.s64 + -23644;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,4056
	ctx.r3.s64 = ctx.r10.s64 + 4056;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A64C0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A64D0"))) PPC_WEAK_FUNC(sub_830A64D0);
PPC_FUNC_IMPL(__imp__sub_830A64D0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,8
	ctx.r8.s64 = 8;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-5532
	ctx.r4.s64 = ctx.r10.s64 + -5532;
	// addi r11,r11,-23600
	ctx.r11.s64 = ctx.r11.s64 + -23600;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,2256
	ctx.r3.s64 = ctx.r10.s64 + 2256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A6520;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6530"))) PPC_WEAK_FUNC(sub_830A6530);
PPC_FUNC_IMPL(__imp__sub_830A6530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,-8168
	ctx.r10.s64 = ctx.r10.s64 + -8168;
	// lwz r11,-23604(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23604);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6548"))) PPC_WEAK_FUNC(sub_830A6548);
PPC_FUNC_IMPL(__imp__sub_830A6548) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r9,r10,28240
	ctx.r9.s64 = ctx.r10.s64 + 28240;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-6964
	ctx.r4.s64 = ctx.r10.s64 + -6964;
	// addi r11,r11,-8168
	ctx.r11.s64 = ctx.r11.s64 + -8168;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-3324
	ctx.r3.s64 = ctx.r10.s64 + -3324;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A659C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A65B0"))) PPC_WEAK_FUNC(sub_830A65B0);
PPC_FUNC_IMPL(__imp__sub_830A65B0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-6432
	ctx.r4.s64 = ctx.r10.s64 + -6432;
	// addi r11,r11,-23436
	ctx.r11.s64 = ctx.r11.s64 + -23436;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,240
	ctx.r3.s64 = ctx.r10.s64 + 240;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A6600;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6610"))) PPC_WEAK_FUNC(sub_830A6610);
PPC_FUNC_IMPL(__imp__sub_830A6610) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r9,r10,28300
	ctx.r9.s64 = ctx.r10.s64 + 28300;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-6408
	ctx.r4.s64 = ctx.r10.s64 + -6408;
	// addi r11,r11,-23392
	ctx.r11.s64 = ctx.r11.s64 + -23392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,1176
	ctx.r3.s64 = ctx.r10.s64 + 1176;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A6664;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6678"))) PPC_WEAK_FUNC(sub_830A6678);
PPC_FUNC_IMPL(__imp__sub_830A6678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,-8548
	ctx.r10.s64 = ctx.r10.s64 + -8548;
	// lwz r11,-23396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23396);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6690"))) PPC_WEAK_FUNC(sub_830A6690);
PPC_FUNC_IMPL(__imp__sub_830A6690) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r9,r10,28352
	ctx.r9.s64 = ctx.r10.s64 + 28352;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-6200
	ctx.r4.s64 = ctx.r10.s64 + -6200;
	// addi r11,r11,-8548
	ctx.r11.s64 = ctx.r11.s64 + -8548;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-4404
	ctx.r3.s64 = ctx.r10.s64 + -4404;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A66E4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A66F8"))) PPC_WEAK_FUNC(sub_830A66F8);
PPC_FUNC_IMPL(__imp__sub_830A66F8) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-4528
	ctx.r4.s64 = ctx.r10.s64 + -4528;
	// addi r11,r11,-23232
	ctx.r11.s64 = ctx.r11.s64 + -23232;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1344
	ctx.r3.s64 = ctx.r10.s64 + -1344;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A6748;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6758"))) PPC_WEAK_FUNC(sub_830A6758);
PPC_FUNC_IMPL(__imp__sub_830A6758) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-4460
	ctx.r4.s64 = ctx.r10.s64 + -4460;
	// addi r11,r11,-23212
	ctx.r11.s64 = ctx.r11.s64 + -23212;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,2904
	ctx.r3.s64 = ctx.r10.s64 + 2904;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A67A8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A67B8"))) PPC_WEAK_FUNC(sub_830A67B8);
PPC_FUNC_IMPL(__imp__sub_830A67B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,-6480
	ctx.r10.s64 = ctx.r10.s64 + -6480;
	// lwz r11,-23172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23172);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A67D0"))) PPC_WEAK_FUNC(sub_830A67D0);
PPC_FUNC_IMPL(__imp__sub_830A67D0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r9,r10,28404
	ctx.r9.s64 = ctx.r10.s64 + 28404;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-7116
	ctx.r4.s64 = ctx.r10.s64 + -7116;
	// addi r11,r11,-6480
	ctx.r11.s64 = ctx.r11.s64 + -6480;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-2568
	ctx.r3.s64 = ctx.r10.s64 + -2568;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A6824;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6838"))) PPC_WEAK_FUNC(sub_830A6838);
PPC_FUNC_IMPL(__imp__sub_830A6838) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-5980
	ctx.r4.s64 = ctx.r10.s64 + -5980;
	// addi r11,r11,-23168
	ctx.r11.s64 = ctx.r11.s64 + -23168;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,636
	ctx.r3.s64 = ctx.r10.s64 + 636;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A6888;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6898"))) PPC_WEAK_FUNC(sub_830A6898);
PPC_FUNC_IMPL(__imp__sub_830A6898) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-5832
	ctx.r4.s64 = ctx.r10.s64 + -5832;
	// addi r11,r11,-23148
	ctx.r11.s64 = ctx.r11.s64 + -23148;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-2928
	ctx.r3.s64 = ctx.r10.s64 + -2928;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A68E8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A68F8"))) PPC_WEAK_FUNC(sub_830A68F8);
PPC_FUNC_IMPL(__imp__sub_830A68F8) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-4320
	ctx.r4.s64 = ctx.r10.s64 + -4320;
	// addi r11,r11,-23088
	ctx.r11.s64 = ctx.r11.s64 + -23088;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,1356
	ctx.r3.s64 = ctx.r10.s64 + 1356;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A6948;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6958"))) PPC_WEAK_FUNC(sub_830A6958);
PPC_FUNC_IMPL(__imp__sub_830A6958) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,12
	ctx.r8.s64 = 12;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-3792
	ctx.r4.s64 = ctx.r10.s64 + -3792;
	// addi r11,r11,-23048
	ctx.r11.s64 = ctx.r11.s64 + -23048;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3756
	ctx.r3.s64 = ctx.r10.s64 + -3756;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A69A8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A69B8"))) PPC_WEAK_FUNC(sub_830A69B8);
PPC_FUNC_IMPL(__imp__sub_830A69B8) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,6
	ctx.r8.s64 = 6;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-3584
	ctx.r4.s64 = ctx.r10.s64 + -3584;
	// addi r11,r11,-22808
	ctx.r11.s64 = ctx.r11.s64 + -22808;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,4920
	ctx.r3.s64 = ctx.r10.s64 + 4920;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A6A08;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6A18"))) PPC_WEAK_FUNC(sub_830A6A18);
PPC_FUNC_IMPL(__imp__sub_830A6A18) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,8
	ctx.r8.s64 = 8;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-3400
	ctx.r4.s64 = ctx.r10.s64 + -3400;
	// addi r11,r11,-22688
	ctx.r11.s64 = ctx.r11.s64 + -22688;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-264
	ctx.r3.s64 = ctx.r10.s64 + -264;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A6A68;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6A78"))) PPC_WEAK_FUNC(sub_830A6A78);
PPC_FUNC_IMPL(__imp__sub_830A6A78) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,9
	ctx.r8.s64 = 9;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-3172
	ctx.r4.s64 = ctx.r10.s64 + -3172;
	// addi r11,r11,-22528
	ctx.r11.s64 = ctx.r11.s64 + -22528;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,4668
	ctx.r3.s64 = ctx.r10.s64 + 4668;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A6AC8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6AD8"))) PPC_WEAK_FUNC(sub_830A6AD8);
PPC_FUNC_IMPL(__imp__sub_830A6AD8) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,8
	ctx.r8.s64 = 8;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-2976
	ctx.r4.s64 = ctx.r10.s64 + -2976;
	// addi r11,r11,-22288
	ctx.r11.s64 = ctx.r11.s64 + -22288;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,1680
	ctx.r3.s64 = ctx.r10.s64 + 1680;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A6B28;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6B38"))) PPC_WEAK_FUNC(sub_830A6B38);
PPC_FUNC_IMPL(__imp__sub_830A6B38) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,7
	ctx.r8.s64 = 7;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-2812
	ctx.r4.s64 = ctx.r10.s64 + -2812;
	// addi r11,r11,-22128
	ctx.r11.s64 = ctx.r11.s64 + -22128;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,5100
	ctx.r3.s64 = ctx.r10.s64 + 5100;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A6B88;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6B98"))) PPC_WEAK_FUNC(sub_830A6B98);
PPC_FUNC_IMPL(__imp__sub_830A6B98) {
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
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r7,r10,-21968
	ctx.r7.s64 = ctx.r10.s64 + -21968;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r10,-5048
	ctx.r4.s64 = ctx.r10.s64 + -5048;
	// addi r11,r11,28416
	ctx.r11.s64 = ctx.r11.s64 + 28416;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,2040
	ctx.r3.s64 = ctx.r10.s64 + 2040;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A6BF0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6C00"))) PPC_WEAK_FUNC(sub_830A6C00);
PPC_FUNC_IMPL(__imp__sub_830A6C00) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,4
	ctx.r8.s64 = 4;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-4904
	ctx.r4.s64 = ctx.r10.s64 + -4904;
	// addi r11,r11,-21728
	ctx.r11.s64 = ctx.r11.s64 + -21728;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-480
	ctx.r3.s64 = ctx.r10.s64 + -480;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A6C50;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6C60"))) PPC_WEAK_FUNC(sub_830A6C60);
PPC_FUNC_IMPL(__imp__sub_830A6C60) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,11
	ctx.r8.s64 = 11;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-10356
	ctx.r4.s64 = ctx.r10.s64 + -10356;
	// addi r11,r11,-21648
	ctx.r11.s64 = ctx.r11.s64 + -21648;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,7296
	ctx.r3.s64 = ctx.r10.s64 + 7296;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A6CB0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6CC0"))) PPC_WEAK_FUNC(sub_830A6CC0);
PPC_FUNC_IMPL(__imp__sub_830A6CC0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,9
	ctx.r8.s64 = 9;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-10004
	ctx.r4.s64 = ctx.r10.s64 + -10004;
	// addi r11,r11,-21368
	ctx.r11.s64 = ctx.r11.s64 + -21368;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,5568
	ctx.r3.s64 = ctx.r10.s64 + 5568;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A6D10;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6D20"))) PPC_WEAK_FUNC(sub_830A6D20);
PPC_FUNC_IMPL(__imp__sub_830A6D20) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-10836
	ctx.r4.s64 = ctx.r10.s64 + -10836;
	// addi r11,r11,-22348
	ctx.r11.s64 = ctx.r11.s64 + -22348;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-4116
	ctx.r3.s64 = ctx.r10.s64 + -4116;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A6D70;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6D80"))) PPC_WEAK_FUNC(sub_830A6D80);
PPC_FUNC_IMPL(__imp__sub_830A6D80) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-10800
	ctx.r4.s64 = ctx.r10.s64 + -10800;
	// addi r11,r11,-21988
	ctx.r11.s64 = ctx.r11.s64 + -21988;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,3948
	ctx.r3.s64 = ctx.r10.s64 + 3948;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A6DD0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6DE0"))) PPC_WEAK_FUNC(sub_830A6DE0);
PPC_FUNC_IMPL(__imp__sub_830A6DE0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-8796
	ctx.r4.s64 = ctx.r10.s64 + -8796;
	// addi r11,r11,-21428
	ctx.r11.s64 = ctx.r11.s64 + -21428;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-2172
	ctx.r3.s64 = ctx.r10.s64 + -2172;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A6E30;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6E40"))) PPC_WEAK_FUNC(sub_830A6E40);
PPC_FUNC_IMPL(__imp__sub_830A6E40) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-8748
	ctx.r4.s64 = ctx.r10.s64 + -8748;
	// addi r11,r11,-21188
	ctx.r11.s64 = ctx.r11.s64 + -21188;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,132
	ctx.r3.s64 = ctx.r10.s64 + 132;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A6E90;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6EA0"))) PPC_WEAK_FUNC(sub_830A6EA0);
PPC_FUNC_IMPL(__imp__sub_830A6EA0) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,2688
	ctx.r5.s64 = ctx.r10.s64 + 2688;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-8276
	ctx.r4.s64 = ctx.r10.s64 + -8276;
	// addi r11,r11,-21168
	ctx.r11.s64 = ctx.r11.s64 + -21168;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-4584
	ctx.r3.s64 = ctx.r10.s64 + -4584;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A6EF4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6F08"))) PPC_WEAK_FUNC(sub_830A6F08);
PPC_FUNC_IMPL(__imp__sub_830A6F08) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,4
	ctx.r8.s64 = 4;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,26368
	ctx.r4.s64 = ctx.r10.s64 + 26368;
	// addi r11,r11,-21048
	ctx.r11.s64 = ctx.r11.s64 + -21048;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,924
	ctx.r3.s64 = ctx.r10.s64 + 924;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A6F58;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6F68"))) PPC_WEAK_FUNC(sub_830A6F68);
PPC_FUNC_IMPL(__imp__sub_830A6F68) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,924
	ctx.r5.s64 = ctx.r10.s64 + 924;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,27276
	ctx.r4.s64 = ctx.r10.s64 + 27276;
	// addi r11,r11,-21108
	ctx.r11.s64 = ctx.r11.s64 + -21108;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,3120
	ctx.r3.s64 = ctx.r10.s64 + 3120;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A6FBC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6FD0"))) PPC_WEAK_FUNC(sub_830A6FD0);
PPC_FUNC_IMPL(__imp__sub_830A6FD0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,32628
	ctx.r4.s64 = ctx.r10.s64 + 32628;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,1284
	ctx.r3.s64 = ctx.r10.s64 + 1284;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A7018;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7028"))) PPC_WEAK_FUNC(sub_830A7028);
PPC_FUNC_IMPL(__imp__sub_830A7028) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,1644
	ctx.r5.s64 = ctx.r10.s64 + 1644;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,27584
	ctx.r4.s64 = ctx.r10.s64 + 27584;
	// addi r11,r11,-20968
	ctx.r11.s64 = ctx.r11.s64 + -20968;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,5316
	ctx.r3.s64 = ctx.r10.s64 + 5316;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A707C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7090"))) PPC_WEAK_FUNC(sub_830A7090);
PPC_FUNC_IMPL(__imp__sub_830A7090) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,30172
	ctx.r4.s64 = ctx.r10.s64 + 30172;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-3072
	ctx.r3.s64 = ctx.r10.s64 + -3072;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A70D8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A70E8"))) PPC_WEAK_FUNC(sub_830A70E8);
PPC_FUNC_IMPL(__imp__sub_830A70E8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,2688
	ctx.r5.s64 = ctx.r10.s64 + 2688;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,30448
	ctx.r4.s64 = ctx.r10.s64 + 30448;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-1092
	ctx.r3.s64 = ctx.r10.s64 + -1092;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A7134;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7148"))) PPC_WEAK_FUNC(sub_830A7148);
PPC_FUNC_IMPL(__imp__sub_830A7148) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,31512
	ctx.r4.s64 = ctx.r10.s64 + 31512;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-2208
	ctx.r3.s64 = ctx.r10.s64 + -2208;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A7190;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A71A0"))) PPC_WEAK_FUNC(sub_830A71A0);
PPC_FUNC_IMPL(__imp__sub_830A71A0) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,-1092
	ctx.r5.s64 = ctx.r10.s64 + -1092;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,30644
	ctx.r4.s64 = ctx.r10.s64 + 30644;
	// addi r11,r11,-20888
	ctx.r11.s64 = ctx.r11.s64 + -20888;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,1752
	ctx.r3.s64 = ctx.r10.s64 + 1752;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A71F4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7208"))) PPC_WEAK_FUNC(sub_830A7208);
PPC_FUNC_IMPL(__imp__sub_830A7208) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-1092
	ctx.r5.s64 = ctx.r10.s64 + -1092;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,25616
	ctx.r4.s64 = ctx.r10.s64 + 25616;
	// addi r11,r11,-20848
	ctx.r11.s64 = ctx.r11.s64 + -20848;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-2280
	ctx.r3.s64 = ctx.r10.s64 + -2280;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A725C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7270"))) PPC_WEAK_FUNC(sub_830A7270);
PPC_FUNC_IMPL(__imp__sub_830A7270) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-1092
	ctx.r5.s64 = ctx.r10.s64 + -1092;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,29284
	ctx.r4.s64 = ctx.r10.s64 + 29284;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,4524
	ctx.r3.s64 = ctx.r10.s64 + 4524;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A72BC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A72D0"))) PPC_WEAK_FUNC(sub_830A72D0);
PPC_FUNC_IMPL(__imp__sub_830A72D0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,31740
	ctx.r4.s64 = ctx.r10.s64 + 31740;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,4560
	ctx.r3.s64 = ctx.r10.s64 + 4560;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A7318;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7328"))) PPC_WEAK_FUNC(sub_830A7328);
PPC_FUNC_IMPL(__imp__sub_830A7328) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,2688
	ctx.r5.s64 = ctx.r10.s64 + 2688;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,32332
	ctx.r4.s64 = ctx.r10.s64 + 32332;
	// addi r11,r11,-20828
	ctx.r11.s64 = ctx.r11.s64 + -20828;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,5388
	ctx.r3.s64 = ctx.r10.s64 + 5388;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A737C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7390"))) PPC_WEAK_FUNC(sub_830A7390);
PPC_FUNC_IMPL(__imp__sub_830A7390) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,30488
	ctx.r4.s64 = ctx.r10.s64 + 30488;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,888
	ctx.r3.s64 = ctx.r10.s64 + 888;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A73D8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A73E8"))) PPC_WEAK_FUNC(sub_830A73E8);
PPC_FUNC_IMPL(__imp__sub_830A73E8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,888
	ctx.r5.s64 = ctx.r10.s64 + 888;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,30508
	ctx.r4.s64 = ctx.r10.s64 + 30508;
	// addi r11,r11,-20808
	ctx.r11.s64 = ctx.r11.s64 + -20808;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,6324
	ctx.r3.s64 = ctx.r10.s64 + 6324;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A743C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7450"))) PPC_WEAK_FUNC(sub_830A7450);
PPC_FUNC_IMPL(__imp__sub_830A7450) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,4
	ctx.r8.s64 = 4;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,25960
	ctx.r4.s64 = ctx.r10.s64 + 25960;
	// addi r11,r11,-20768
	ctx.r11.s64 = ctx.r11.s64 + -20768;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,3768
	ctx.r3.s64 = ctx.r10.s64 + 3768;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A74A0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A74B0"))) PPC_WEAK_FUNC(sub_830A74B0);
PPC_FUNC_IMPL(__imp__sub_830A74B0) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-1416
	ctx.r5.s64 = ctx.r10.s64 + -1416;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-32484
	ctx.r4.s64 = ctx.r10.s64 + -32484;
	// addi r11,r11,-20788
	ctx.r11.s64 = ctx.r11.s64 + -20788;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,6252
	ctx.r3.s64 = ctx.r10.s64 + 6252;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A7504;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7518"))) PPC_WEAK_FUNC(sub_830A7518);
PPC_FUNC_IMPL(__imp__sub_830A7518) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,5388
	ctx.r5.s64 = ctx.r10.s64 + 5388;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-32376
	ctx.r4.s64 = ctx.r10.s64 + -32376;
	// addi r11,r11,-20688
	ctx.r11.s64 = ctx.r11.s64 + -20688;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-2064
	ctx.r3.s64 = ctx.r10.s64 + -2064;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A756C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7580"))) PPC_WEAK_FUNC(sub_830A7580);
PPC_FUNC_IMPL(__imp__sub_830A7580) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,5388
	ctx.r5.s64 = ctx.r10.s64 + 5388;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,29972
	ctx.r4.s64 = ctx.r10.s64 + 29972;
	// addi r11,r11,-20648
	ctx.r11.s64 = ctx.r11.s64 + -20648;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-300
	ctx.r3.s64 = ctx.r10.s64 + -300;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A75D4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A75E8"))) PPC_WEAK_FUNC(sub_830A75E8);
PPC_FUNC_IMPL(__imp__sub_830A75E8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r9,r10,28536
	ctx.r9.s64 = ctx.r10.s64 + 28536;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r5,r10,-1416
	ctx.r5.s64 = ctx.r10.s64 + -1416;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-20624
	ctx.r11.s64 = ctx.r11.s64 + -20624;
	// addi r4,r10,24728
	ctx.r4.s64 = ctx.r10.s64 + 24728;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-372
	ctx.r3.s64 = ctx.r10.s64 + -372;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830A7640;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7650"))) PPC_WEAK_FUNC(sub_830A7650);
PPC_FUNC_IMPL(__imp__sub_830A7650) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r5,r10,5388
	ctx.r5.s64 = ctx.r10.s64 + 5388;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-20584
	ctx.r11.s64 = ctx.r11.s64 + -20584;
	// addi r4,r10,32456
	ctx.r4.s64 = ctx.r10.s64 + 32456;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r10,-4188
	ctx.r3.s64 = ctx.r10.s64 + -4188;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830A76A0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A76B0"))) PPC_WEAK_FUNC(sub_830A76B0);
PPC_FUNC_IMPL(__imp__sub_830A76B0) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-876
	ctx.r5.s64 = ctx.r10.s64 + -876;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,31032
	ctx.r4.s64 = ctx.r10.s64 + 31032;
	// addi r11,r11,-20564
	ctx.r11.s64 = ctx.r11.s64 + -20564;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1416
	ctx.r3.s64 = ctx.r10.s64 + -1416;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A7704;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7718"))) PPC_WEAK_FUNC(sub_830A7718);
PPC_FUNC_IMPL(__imp__sub_830A7718) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-1200
	ctx.r5.s64 = ctx.r10.s64 + -1200;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,26256
	ctx.r4.s64 = ctx.r10.s64 + 26256;
	// addi r11,r11,-20544
	ctx.r11.s64 = ctx.r11.s64 + -20544;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-192
	ctx.r3.s64 = ctx.r10.s64 + -192;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A776C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7780"))) PPC_WEAK_FUNC(sub_830A7780);
PPC_FUNC_IMPL(__imp__sub_830A7780) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,-4188
	ctx.r5.s64 = ctx.r10.s64 + -4188;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,26916
	ctx.r4.s64 = ctx.r10.s64 + 26916;
	// addi r11,r11,-20524
	ctx.r11.s64 = ctx.r11.s64 + -20524;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3576
	ctx.r3.s64 = ctx.r10.s64 + -3576;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A77D4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A77E8"))) PPC_WEAK_FUNC(sub_830A77E8);
PPC_FUNC_IMPL(__imp__sub_830A77E8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,-1416
	ctx.r5.s64 = ctx.r10.s64 + -1416;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,27760
	ctx.r4.s64 = ctx.r10.s64 + 27760;
	// addi r11,r11,-20464
	ctx.r11.s64 = ctx.r11.s64 + -20464;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,5352
	ctx.r3.s64 = ctx.r10.s64 + 5352;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A783C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7850"))) PPC_WEAK_FUNC(sub_830A7850);
PPC_FUNC_IMPL(__imp__sub_830A7850) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,-1416
	ctx.r5.s64 = ctx.r10.s64 + -1416;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,28680
	ctx.r4.s64 = ctx.r10.s64 + 28680;
	// addi r11,r11,-20424
	ctx.r11.s64 = ctx.r11.s64 + -20424;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,2940
	ctx.r3.s64 = ctx.r10.s64 + 2940;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A78A4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A78B8"))) PPC_WEAK_FUNC(sub_830A78B8);
PPC_FUNC_IMPL(__imp__sub_830A78B8) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,28032
	ctx.r4.s64 = ctx.r10.s64 + 28032;
	// addi r11,r11,-20384
	ctx.r11.s64 = ctx.r11.s64 + -20384;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,4128
	ctx.r3.s64 = ctx.r10.s64 + 4128;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A7908;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7918"))) PPC_WEAK_FUNC(sub_830A7918);
PPC_FUNC_IMPL(__imp__sub_830A7918) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r5,r10,-1416
	ctx.r5.s64 = ctx.r10.s64 + -1416;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,28068
	ctx.r4.s64 = ctx.r10.s64 + 28068;
	// addi r11,r11,-20320
	ctx.r11.s64 = ctx.r11.s64 + -20320;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1884
	ctx.r3.s64 = ctx.r10.s64 + -1884;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A796C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7980"))) PPC_WEAK_FUNC(sub_830A7980);
PPC_FUNC_IMPL(__imp__sub_830A7980) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r9,r10,28588
	ctx.r9.s64 = ctx.r10.s64 + 28588;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r5,r10,-1416
	ctx.r5.s64 = ctx.r10.s64 + -1416;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-20200
	ctx.r11.s64 = ctx.r11.s64 + -20200;
	// addi r4,r10,29800
	ctx.r4.s64 = ctx.r10.s64 + 29800;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,2652
	ctx.r3.s64 = ctx.r10.s64 + 2652;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830A79D8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A79E8"))) PPC_WEAK_FUNC(sub_830A79E8);
PPC_FUNC_IMPL(__imp__sub_830A79E8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-1272
	ctx.r5.s64 = ctx.r10.s64 + -1272;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,30276
	ctx.r4.s64 = ctx.r10.s64 + 30276;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,2148
	ctx.r3.s64 = ctx.r10.s64 + 2148;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A7A34;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7A48"))) PPC_WEAK_FUNC(sub_830A7A48);
PPC_FUNC_IMPL(__imp__sub_830A7A48) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,5388
	ctx.r5.s64 = ctx.r10.s64 + 5388;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,31468
	ctx.r4.s64 = ctx.r10.s64 + 31468;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-4548
	ctx.r3.s64 = ctx.r10.s64 + -4548;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A7A94;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7AA8"))) PPC_WEAK_FUNC(sub_830A7AA8);
PPC_FUNC_IMPL(__imp__sub_830A7AA8) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,24104
	ctx.r4.s64 = ctx.r10.s64 + 24104;
	// addi r11,r11,-20100
	ctx.r11.s64 = ctx.r11.s64 + -20100;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,3444
	ctx.r3.s64 = ctx.r10.s64 + 3444;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A7AF8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7B08"))) PPC_WEAK_FUNC(sub_830A7B08);
PPC_FUNC_IMPL(__imp__sub_830A7B08) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-4188
	ctx.r5.s64 = ctx.r10.s64 + -4188;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,24128
	ctx.r4.s64 = ctx.r10.s64 + 24128;
	// addi r11,r11,-20220
	ctx.r11.s64 = ctx.r11.s64 + -20220;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1200
	ctx.r3.s64 = ctx.r10.s64 + -1200;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A7B5C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7B70"))) PPC_WEAK_FUNC(sub_830A7B70);
PPC_FUNC_IMPL(__imp__sub_830A7B70) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,30156
	ctx.r4.s64 = ctx.r10.s64 + 30156;
	// addi r11,r11,-20060
	ctx.r11.s64 = ctx.r11.s64 + -20060;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,5172
	ctx.r3.s64 = ctx.r10.s64 + 5172;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A7BC0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7BD0"))) PPC_WEAK_FUNC(sub_830A7BD0);
PPC_FUNC_IMPL(__imp__sub_830A7BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,-7528
	ctx.r10.s64 = ctx.r10.s64 + -7528;
	// lwz r11,-20040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20040);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// stw r11,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7BF0"))) PPC_WEAK_FUNC(sub_830A7BF0);
PPC_FUNC_IMPL(__imp__sub_830A7BF0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,13
	ctx.r8.s64 = 13;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,25280
	ctx.r4.s64 = ctx.r10.s64 + 25280;
	// addi r11,r11,-7528
	ctx.r11.s64 = ctx.r11.s64 + -7528;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,600
	ctx.r3.s64 = ctx.r10.s64 + 600;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A7C40;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7C50"))) PPC_WEAK_FUNC(sub_830A7C50);
PPC_FUNC_IMPL(__imp__sub_830A7C50) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r9,r10,28664
	ctx.r9.s64 = ctx.r10.s64 + 28664;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r5,r10,-4188
	ctx.r5.s64 = ctx.r10.s64 + -4188;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-20032
	ctx.r11.s64 = ctx.r11.s64 + -20032;
	// addi r4,r10,25496
	ctx.r4.s64 = ctx.r10.s64 + 25496;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-1272
	ctx.r3.s64 = ctx.r10.s64 + -1272;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830A7CA8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7CB8"))) PPC_WEAK_FUNC(sub_830A7CB8);
PPC_FUNC_IMPL(__imp__sub_830A7CB8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-300
	ctx.r5.s64 = ctx.r10.s64 + -300;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,25816
	ctx.r4.s64 = ctx.r10.s64 + 25816;
	// addi r11,r11,-19932
	ctx.r11.s64 = ctx.r11.s64 + -19932;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-2532
	ctx.r3.s64 = ctx.r10.s64 + -2532;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A7D0C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7D20"))) PPC_WEAK_FUNC(sub_830A7D20);
PPC_FUNC_IMPL(__imp__sub_830A7D20) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,27448
	ctx.r4.s64 = ctx.r10.s64 + 27448;
	// addi r11,r11,-19912
	ctx.r11.s64 = ctx.r11.s64 + -19912;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,744
	ctx.r3.s64 = ctx.r10.s64 + 744;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A7D70;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7D80"))) PPC_WEAK_FUNC(sub_830A7D80);
PPC_FUNC_IMPL(__imp__sub_830A7D80) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,5388
	ctx.r5.s64 = ctx.r10.s64 + 5388;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,27468
	ctx.r4.s64 = ctx.r10.s64 + 27468;
	// addi r11,r11,-19872
	ctx.r11.s64 = ctx.r11.s64 + -19872;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,204
	ctx.r3.s64 = ctx.r10.s64 + 204;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A7DD4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7DE8"))) PPC_WEAK_FUNC(sub_830A7DE8);
PPC_FUNC_IMPL(__imp__sub_830A7DE8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,-876
	ctx.r5.s64 = ctx.r10.s64 + -876;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,28196
	ctx.r4.s64 = ctx.r10.s64 + 28196;
	// addi r11,r11,-19832
	ctx.r11.s64 = ctx.r11.s64 + -19832;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1956
	ctx.r3.s64 = ctx.r10.s64 + -1956;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A7E3C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7E50"))) PPC_WEAK_FUNC(sub_830A7E50);
PPC_FUNC_IMPL(__imp__sub_830A7E50) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,5388
	ctx.r5.s64 = ctx.r10.s64 + 5388;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,31488
	ctx.r4.s64 = ctx.r10.s64 + 31488;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,7080
	ctx.r3.s64 = ctx.r10.s64 + 7080;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A7E9C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7EB0"))) PPC_WEAK_FUNC(sub_830A7EB0);
PPC_FUNC_IMPL(__imp__sub_830A7EB0) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,-4548
	ctx.r5.s64 = ctx.r10.s64 + -4548;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,29928
	ctx.r4.s64 = ctx.r10.s64 + 29928;
	// addi r11,r11,-19792
	ctx.r11.s64 = ctx.r11.s64 + -19792;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,6180
	ctx.r3.s64 = ctx.r10.s64 + 6180;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A7F04;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7F18"))) PPC_WEAK_FUNC(sub_830A7F18);
PPC_FUNC_IMPL(__imp__sub_830A7F18) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r5,r10,-4548
	ctx.r5.s64 = ctx.r10.s64 + -4548;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,32028
	ctx.r4.s64 = ctx.r10.s64 + 32028;
	// addi r11,r11,-19672
	ctx.r11.s64 = ctx.r11.s64 + -19672;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,564
	ctx.r3.s64 = ctx.r10.s64 + 564;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A7F6C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7F80"))) PPC_WEAK_FUNC(sub_830A7F80);
PPC_FUNC_IMPL(__imp__sub_830A7F80) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,26708
	ctx.r4.s64 = ctx.r10.s64 + 26708;
	// addi r11,r11,-19732
	ctx.r11.s64 = ctx.r11.s64 + -19732;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1488
	ctx.r3.s64 = ctx.r10.s64 + -1488;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A7FD0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7FE0"))) PPC_WEAK_FUNC(sub_830A7FE0);
PPC_FUNC_IMPL(__imp__sub_830A7FE0) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,-4188
	ctx.r5.s64 = ctx.r10.s64 + -4188;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,26736
	ctx.r4.s64 = ctx.r10.s64 + 26736;
	// addi r11,r11,-19512
	ctx.r11.s64 = ctx.r11.s64 + -19512;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,2508
	ctx.r3.s64 = ctx.r10.s64 + 2508;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A8034;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8048"))) PPC_WEAK_FUNC(sub_830A8048);
PPC_FUNC_IMPL(__imp__sub_830A8048) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-1416
	ctx.r5.s64 = ctx.r10.s64 + -1416;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,30824
	ctx.r4.s64 = ctx.r10.s64 + 30824;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-2892
	ctx.r3.s64 = ctx.r10.s64 + -2892;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A8094;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A80A8"))) PPC_WEAK_FUNC(sub_830A80A8);
PPC_FUNC_IMPL(__imp__sub_830A80A8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,5388
	ctx.r5.s64 = ctx.r10.s64 + 5388;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-32660
	ctx.r4.s64 = ctx.r10.s64 + -32660;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-876
	ctx.r3.s64 = ctx.r10.s64 + -876;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A80F4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8108"))) PPC_WEAK_FUNC(sub_830A8108);
PPC_FUNC_IMPL(__imp__sub_830A8108) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r5,r10,2688
	ctx.r5.s64 = ctx.r10.s64 + 2688;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,31684
	ctx.r4.s64 = ctx.r10.s64 + 31684;
	// addi r11,r11,-19432
	ctx.r11.s64 = ctx.r11.s64 + -19432;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,5928
	ctx.r3.s64 = ctx.r10.s64 + 5928;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A815C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8170"))) PPC_WEAK_FUNC(sub_830A8170);
PPC_FUNC_IMPL(__imp__sub_830A8170) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-1272
	ctx.r5.s64 = ctx.r10.s64 + -1272;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,31720
	ctx.r4.s64 = ctx.r10.s64 + 31720;
	// addi r11,r11,-19532
	ctx.r11.s64 = ctx.r11.s64 + -19532;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,5604
	ctx.r3.s64 = ctx.r10.s64 + 5604;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A81C4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A81D8"))) PPC_WEAK_FUNC(sub_830A81D8);
PPC_FUNC_IMPL(__imp__sub_830A81D8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,564
	ctx.r5.s64 = ctx.r10.s64 + 564;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,32256
	ctx.r4.s64 = ctx.r10.s64 + 32256;
	// addi r11,r11,-19312
	ctx.r11.s64 = ctx.r11.s64 + -19312;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,2004
	ctx.r3.s64 = ctx.r10.s64 + 2004;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A822C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8240"))) PPC_WEAK_FUNC(sub_830A8240);
PPC_FUNC_IMPL(__imp__sub_830A8240) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,5388
	ctx.r5.s64 = ctx.r10.s64 + 5388;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,32400
	ctx.r4.s64 = ctx.r10.s64 + 32400;
	// addi r11,r11,-19272
	ctx.r11.s64 = ctx.r11.s64 + -19272;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,4812
	ctx.r3.s64 = ctx.r10.s64 + 4812;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A8294;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A82A8"))) PPC_WEAK_FUNC(sub_830A82A8);
PPC_FUNC_IMPL(__imp__sub_830A82A8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,-1416
	ctx.r5.s64 = ctx.r10.s64 + -1416;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-32696
	ctx.r4.s64 = ctx.r10.s64 + -32696;
	// addi r11,r11,-19212
	ctx.r11.s64 = ctx.r11.s64 + -19212;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,2544
	ctx.r3.s64 = ctx.r10.s64 + 2544;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A82FC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8310"))) PPC_WEAK_FUNC(sub_830A8310);
PPC_FUNC_IMPL(__imp__sub_830A8310) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-300
	ctx.r5.s64 = ctx.r10.s64 + -300;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,32592
	ctx.r4.s64 = ctx.r10.s64 + 32592;
	// addi r11,r11,-19152
	ctx.r11.s64 = ctx.r11.s64 + -19152;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-840
	ctx.r3.s64 = ctx.r10.s64 + -840;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A8364;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8378"))) PPC_WEAK_FUNC(sub_830A8378);
PPC_FUNC_IMPL(__imp__sub_830A8378) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,-4188
	ctx.r5.s64 = ctx.r10.s64 + -4188;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-32764
	ctx.r4.s64 = ctx.r10.s64 + -32764;
	// addi r11,r11,-19132
	ctx.r11.s64 = ctx.r11.s64 + -19132;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,5892
	ctx.r3.s64 = ctx.r10.s64 + 5892;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A83CC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A83E0"))) PPC_WEAK_FUNC(sub_830A83E0);
PPC_FUNC_IMPL(__imp__sub_830A83E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,-7548
	ctx.r10.s64 = ctx.r10.s64 + -7548;
	// lwz r11,-19092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19092);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A83F8"))) PPC_WEAK_FUNC(sub_830A83F8);
PPC_FUNC_IMPL(__imp__sub_830A83F8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r10,28936
	ctx.r9.s64 = ctx.r10.s64 + 28936;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,5832
	ctx.r4.s64 = ctx.r10.s64 + 5832;
	// addi r11,r11,-7548
	ctx.r11.s64 = ctx.r11.s64 + -7548;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-3432
	ctx.r3.s64 = ctx.r10.s64 + -3432;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A844C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8460"))) PPC_WEAK_FUNC(sub_830A8460);
PPC_FUNC_IMPL(__imp__sub_830A8460) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,-3432
	ctx.r5.s64 = ctx.r10.s64 + -3432;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,5852
	ctx.r4.s64 = ctx.r10.s64 + 5852;
	// addi r11,r11,-19084
	ctx.r11.s64 = ctx.r11.s64 + -19084;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1992
	ctx.r3.s64 = ctx.r10.s64 + -1992;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A84B4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A84C8"))) PPC_WEAK_FUNC(sub_830A84C8);
PPC_FUNC_IMPL(__imp__sub_830A84C8) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,5876
	ctx.r4.s64 = ctx.r10.s64 + 5876;
	// addi r11,r11,-19044
	ctx.r11.s64 = ctx.r11.s64 + -19044;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,2976
	ctx.r3.s64 = ctx.r10.s64 + 2976;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A8518;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8528"))) PPC_WEAK_FUNC(sub_830A8528);
PPC_FUNC_IMPL(__imp__sub_830A8528) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-3432
	ctx.r5.s64 = ctx.r10.s64 + -3432;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,5924
	ctx.r4.s64 = ctx.r10.s64 + 5924;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,6144
	ctx.r3.s64 = ctx.r10.s64 + 6144;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A8574;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8588"))) PPC_WEAK_FUNC(sub_830A8588);
PPC_FUNC_IMPL(__imp__sub_830A8588) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-3432
	ctx.r5.s64 = ctx.r10.s64 + -3432;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,5952
	ctx.r4.s64 = ctx.r10.s64 + 5952;
	// addi r11,r11,-19024
	ctx.r11.s64 = ctx.r11.s64 + -19024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-84
	ctx.r3.s64 = ctx.r10.s64 + -84;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A85DC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A85F0"))) PPC_WEAK_FUNC(sub_830A85F0);
PPC_FUNC_IMPL(__imp__sub_830A85F0) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,-3432
	ctx.r5.s64 = ctx.r10.s64 + -3432;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,5980
	ctx.r4.s64 = ctx.r10.s64 + 5980;
	// addi r11,r11,-19004
	ctx.r11.s64 = ctx.r11.s64 + -19004;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,780
	ctx.r3.s64 = ctx.r10.s64 + 780;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A8644;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8658"))) PPC_WEAK_FUNC(sub_830A8658);
PPC_FUNC_IMPL(__imp__sub_830A8658) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,-3432
	ctx.r5.s64 = ctx.r10.s64 + -3432;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,6016
	ctx.r4.s64 = ctx.r10.s64 + 6016;
	// addi r11,r11,-18964
	ctx.r11.s64 = ctx.r11.s64 + -18964;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,4452
	ctx.r3.s64 = ctx.r10.s64 + 4452;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A86AC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A86C0"))) PPC_WEAK_FUNC(sub_830A86C0);
PPC_FUNC_IMPL(__imp__sub_830A86C0) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,-3432
	ctx.r5.s64 = ctx.r10.s64 + -3432;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,6056
	ctx.r4.s64 = ctx.r10.s64 + 6056;
	// addi r11,r11,-18924
	ctx.r11.s64 = ctx.r11.s64 + -18924;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1164
	ctx.r3.s64 = ctx.r10.s64 + -1164;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A8714;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8728"))) PPC_WEAK_FUNC(sub_830A8728);
PPC_FUNC_IMPL(__imp__sub_830A8728) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-3432
	ctx.r5.s64 = ctx.r10.s64 + -3432;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,6092
	ctx.r4.s64 = ctx.r10.s64 + 6092;
	// addi r11,r11,-18884
	ctx.r11.s64 = ctx.r11.s64 + -18884;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3648
	ctx.r3.s64 = ctx.r10.s64 + -3648;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A877C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8790"))) PPC_WEAK_FUNC(sub_830A8790);
PPC_FUNC_IMPL(__imp__sub_830A8790) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-3432
	ctx.r5.s64 = ctx.r10.s64 + -3432;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,6124
	ctx.r4.s64 = ctx.r10.s64 + 6124;
	// addi r11,r11,-18864
	ctx.r11.s64 = ctx.r11.s64 + -18864;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,168
	ctx.r3.s64 = ctx.r10.s64 + 168;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A87E4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A87F8"))) PPC_WEAK_FUNC(sub_830A87F8);
PPC_FUNC_IMPL(__imp__sub_830A87F8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,-3432
	ctx.r5.s64 = ctx.r10.s64 + -3432;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,6144
	ctx.r4.s64 = ctx.r10.s64 + 6144;
	// addi r11,r11,-18844
	ctx.r11.s64 = ctx.r11.s64 + -18844;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,1212
	ctx.r3.s64 = ctx.r10.s64 + 1212;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A884C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8860"))) PPC_WEAK_FUNC(sub_830A8860);
PPC_FUNC_IMPL(__imp__sub_830A8860) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,-3432
	ctx.r5.s64 = ctx.r10.s64 + -3432;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,6168
	ctx.r4.s64 = ctx.r10.s64 + 6168;
	// addi r11,r11,-18784
	ctx.r11.s64 = ctx.r11.s64 + -18784;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,6972
	ctx.r3.s64 = ctx.r10.s64 + 6972;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A88B4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A88C8"))) PPC_WEAK_FUNC(sub_830A88C8);
PPC_FUNC_IMPL(__imp__sub_830A88C8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-3432
	ctx.r5.s64 = ctx.r10.s64 + -3432;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,6196
	ctx.r4.s64 = ctx.r10.s64 + 6196;
	// addi r11,r11,-18724
	ctx.r11.s64 = ctx.r11.s64 + -18724;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,5964
	ctx.r3.s64 = ctx.r10.s64 + 5964;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A891C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8930"))) PPC_WEAK_FUNC(sub_830A8930);
PPC_FUNC_IMPL(__imp__sub_830A8930) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,-3432
	ctx.r5.s64 = ctx.r10.s64 + -3432;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,6220
	ctx.r4.s64 = ctx.r10.s64 + 6220;
	// addi r11,r11,-18704
	ctx.r11.s64 = ctx.r11.s64 + -18704;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-2640
	ctx.r3.s64 = ctx.r10.s64 + -2640;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A8984;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8998"))) PPC_WEAK_FUNC(sub_830A8998);
PPC_FUNC_IMPL(__imp__sub_830A8998) {
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
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r8,r10,-18664
	ctx.r8.s64 = ctx.r10.s64 + -18664;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r10,-3432
	ctx.r5.s64 = ctx.r10.s64 + -3432;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,28960
	ctx.r11.s64 = ctx.r11.s64 + 28960;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,6240
	ctx.r4.s64 = ctx.r10.s64 + 6240;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,4092
	ctx.r3.s64 = ctx.r10.s64 + 4092;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A89F4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8A08"))) PPC_WEAK_FUNC(sub_830A8A08);
PPC_FUNC_IMPL(__imp__sub_830A8A08) {
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
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r8,r10,-18560
	ctx.r8.s64 = ctx.r10.s64 + -18560;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r10,-3432
	ctx.r5.s64 = ctx.r10.s64 + -3432;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,28984
	ctx.r11.s64 = ctx.r11.s64 + 28984;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,6268
	ctx.r4.s64 = ctx.r10.s64 + 6268;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-3144
	ctx.r3.s64 = ctx.r10.s64 + -3144;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A8A64;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8A78"))) PPC_WEAK_FUNC(sub_830A8A78);
PPC_FUNC_IMPL(__imp__sub_830A8A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,-8368
	ctx.r10.s64 = ctx.r10.s64 + -8368;
	// lwz r11,-18564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18564);
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8A90"))) PPC_WEAK_FUNC(sub_830A8A90);
PPC_FUNC_IMPL(__imp__sub_830A8A90) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// addi r9,r11,29028
	ctx.r9.s64 = ctx.r11.s64 + 29028;
	// addi r5,r10,-3432
	ctx.r5.s64 = ctx.r10.s64 + -3432;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// li r7,7
	ctx.r7.s64 = 7;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,6296
	ctx.r4.s64 = ctx.r10.s64 + 6296;
	// addi r11,r11,-8368
	ctx.r11.s64 = ctx.r11.s64 + -8368;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,3480
	ctx.r3.s64 = ctx.r10.s64 + 3480;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A8AEC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8B00"))) PPC_WEAK_FUNC(sub_830A8B00);
PPC_FUNC_IMPL(__imp__sub_830A8B00) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,-3432
	ctx.r5.s64 = ctx.r10.s64 + -3432;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,6324
	ctx.r4.s64 = ctx.r10.s64 + 6324;
	// addi r11,r11,-18440
	ctx.r11.s64 = ctx.r11.s64 + -18440;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-660
	ctx.r3.s64 = ctx.r10.s64 + -660;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A8B54;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8B68"))) PPC_WEAK_FUNC(sub_830A8B68);
PPC_FUNC_IMPL(__imp__sub_830A8B68) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r5,r10,-3432
	ctx.r5.s64 = ctx.r10.s64 + -3432;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,6352
	ctx.r4.s64 = ctx.r10.s64 + 6352;
	// addi r11,r11,-18360
	ctx.r11.s64 = ctx.r11.s64 + -18360;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3468
	ctx.r3.s64 = ctx.r10.s64 + -3468;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A8BBC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8BD0"))) PPC_WEAK_FUNC(sub_830A8BD0);
PPC_FUNC_IMPL(__imp__sub_830A8BD0) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r5,r10,-3432
	ctx.r5.s64 = ctx.r10.s64 + -3432;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,6380
	ctx.r4.s64 = ctx.r10.s64 + 6380;
	// addi r11,r11,-18160
	ctx.r11.s64 = ctx.r11.s64 + -18160;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,2436
	ctx.r3.s64 = ctx.r10.s64 + 2436;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A8C24;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8C38"))) PPC_WEAK_FUNC(sub_830A8C38);
PPC_FUNC_IMPL(__imp__sub_830A8C38) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,-3432
	ctx.r5.s64 = ctx.r10.s64 + -3432;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,6412
	ctx.r4.s64 = ctx.r10.s64 + 6412;
	// addi r11,r11,-18220
	ctx.r11.s64 = ctx.r11.s64 + -18220;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,7188
	ctx.r3.s64 = ctx.r10.s64 + 7188;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A8C8C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8CA0"))) PPC_WEAK_FUNC(sub_830A8CA0);
PPC_FUNC_IMPL(__imp__sub_830A8CA0) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r5,r10,-3432
	ctx.r5.s64 = ctx.r10.s64 + -3432;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,6440
	ctx.r4.s64 = ctx.r10.s64 + 6440;
	// addi r11,r11,-18000
	ctx.r11.s64 = ctx.r11.s64 + -18000;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,5640
	ctx.r3.s64 = ctx.r10.s64 + 5640;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A8CF4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8D08"))) PPC_WEAK_FUNC(sub_830A8D08);
PPC_FUNC_IMPL(__imp__sub_830A8D08) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,-3432
	ctx.r5.s64 = ctx.r10.s64 + -3432;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,6468
	ctx.r4.s64 = ctx.r10.s64 + 6468;
	// addi r11,r11,-17880
	ctx.r11.s64 = ctx.r11.s64 + -17880;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,7332
	ctx.r3.s64 = ctx.r10.s64 + 7332;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A8D5C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8D70"))) PPC_WEAK_FUNC(sub_830A8D70);
PPC_FUNC_IMPL(__imp__sub_830A8D70) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,-3432
	ctx.r5.s64 = ctx.r10.s64 + -3432;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,6492
	ctx.r4.s64 = ctx.r10.s64 + 6492;
	// addi r11,r11,-18060
	ctx.r11.s64 = ctx.r11.s64 + -18060;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,7512
	ctx.r3.s64 = ctx.r10.s64 + 7512;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A8DC4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8DD8"))) PPC_WEAK_FUNC(sub_830A8DD8);
PPC_FUNC_IMPL(__imp__sub_830A8DD8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,7512
	ctx.r5.s64 = ctx.r10.s64 + 7512;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,6520
	ctx.r4.s64 = ctx.r10.s64 + 6520;
	// addi r11,r11,-17800
	ctx.r11.s64 = ctx.r11.s64 + -17800;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-120
	ctx.r3.s64 = ctx.r10.s64 + -120;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A8E2C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8E40"))) PPC_WEAK_FUNC(sub_830A8E40);
PPC_FUNC_IMPL(__imp__sub_830A8E40) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,7512
	ctx.r5.s64 = ctx.r10.s64 + 7512;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,6556
	ctx.r4.s64 = ctx.r10.s64 + 6556;
	// addi r11,r11,-17760
	ctx.r11.s64 = ctx.r11.s64 + -17760;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,5208
	ctx.r3.s64 = ctx.r10.s64 + 5208;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A8E94;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8EA8"))) PPC_WEAK_FUNC(sub_830A8EA8);
PPC_FUNC_IMPL(__imp__sub_830A8EA8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,7512
	ctx.r5.s64 = ctx.r10.s64 + 7512;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,6592
	ctx.r4.s64 = ctx.r10.s64 + 6592;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,6504
	ctx.r3.s64 = ctx.r10.s64 + 6504;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A8EF4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8F08"))) PPC_WEAK_FUNC(sub_830A8F08);
PPC_FUNC_IMPL(__imp__sub_830A8F08) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,7512
	ctx.r5.s64 = ctx.r10.s64 + 7512;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,6632
	ctx.r4.s64 = ctx.r10.s64 + 6632;
	// addi r11,r11,-17720
	ctx.r11.s64 = ctx.r11.s64 + -17720;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,6720
	ctx.r3.s64 = ctx.r10.s64 + 6720;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A8F5C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8F70"))) PPC_WEAK_FUNC(sub_830A8F70);
PPC_FUNC_IMPL(__imp__sub_830A8F70) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,2688
	ctx.r5.s64 = ctx.r10.s64 + 2688;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,13880
	ctx.r4.s64 = ctx.r10.s64 + 13880;
	// addi r11,r11,-17680
	ctx.r11.s64 = ctx.r11.s64 + -17680;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,7440
	ctx.r3.s64 = ctx.r10.s64 + 7440;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A8FC4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8FD8"))) PPC_WEAK_FUNC(sub_830A8FD8);
PPC_FUNC_IMPL(__imp__sub_830A8FD8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,7440
	ctx.r5.s64 = ctx.r10.s64 + 7440;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,13924
	ctx.r4.s64 = ctx.r10.s64 + 13924;
	// addi r11,r11,-17700
	ctx.r11.s64 = ctx.r11.s64 + -17700;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,5424
	ctx.r3.s64 = ctx.r10.s64 + 5424;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A902C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A9040"))) PPC_WEAK_FUNC(sub_830A9040);
PPC_FUNC_IMPL(__imp__sub_830A9040) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,7440
	ctx.r5.s64 = ctx.r10.s64 + 7440;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,13996
	ctx.r4.s64 = ctx.r10.s64 + 13996;
	// addi r11,r11,-17600
	ctx.r11.s64 = ctx.r11.s64 + -17600;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,5136
	ctx.r3.s64 = ctx.r10.s64 + 5136;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A9094;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A90A8"))) PPC_WEAK_FUNC(sub_830A90A8);
PPC_FUNC_IMPL(__imp__sub_830A90A8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,7440
	ctx.r5.s64 = ctx.r10.s64 + 7440;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,17524
	ctx.r4.s64 = ctx.r10.s64 + 17524;
	// addi r11,r11,-17560
	ctx.r11.s64 = ctx.r11.s64 + -17560;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,3984
	ctx.r3.s64 = ctx.r10.s64 + 3984;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A90FC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A9110"))) PPC_WEAK_FUNC(sub_830A9110);
PPC_FUNC_IMPL(__imp__sub_830A9110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,-7988
	ctx.r10.s64 = ctx.r10.s64 + -7988;
	// lwz r11,-17540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17540);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A9128"))) PPC_WEAK_FUNC(sub_830A9128);
PPC_FUNC_IMPL(__imp__sub_830A9128) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r9,r10,29112
	ctx.r9.s64 = ctx.r10.s64 + 29112;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,11632
	ctx.r4.s64 = ctx.r10.s64 + 11632;
	// addi r11,r11,-7988
	ctx.r11.s64 = ctx.r11.s64 + -7988;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,6540
	ctx.r3.s64 = ctx.r10.s64 + 6540;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A917C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A9190"))) PPC_WEAK_FUNC(sub_830A9190);
PPC_FUNC_IMPL(__imp__sub_830A9190) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,12760
	ctx.r4.s64 = ctx.r10.s64 + 12760;
	// addi r11,r11,-17536
	ctx.r11.s64 = ctx.r11.s64 + -17536;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,1788
	ctx.r3.s64 = ctx.r10.s64 + 1788;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A91E0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A91F0"))) PPC_WEAK_FUNC(sub_830A91F0);
PPC_FUNC_IMPL(__imp__sub_830A91F0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,12776
	ctx.r4.s64 = ctx.r10.s64 + 12776;
	// addi r11,r11,-17516
	ctx.r11.s64 = ctx.r11.s64 + -17516;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,1860
	ctx.r3.s64 = ctx.r10.s64 + 1860;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A9240;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A9250"))) PPC_WEAK_FUNC(sub_830A9250);
PPC_FUNC_IMPL(__imp__sub_830A9250) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r10,29288
	ctx.r9.s64 = ctx.r10.s64 + 29288;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r5,r10,2688
	ctx.r5.s64 = ctx.r10.s64 + 2688;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-17452
	ctx.r11.s64 = ctx.r11.s64 + -17452;
	// addi r4,r10,15152
	ctx.r4.s64 = ctx.r10.s64 + 15152;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-1020
	ctx.r3.s64 = ctx.r10.s64 + -1020;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830A92A8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A92B8"))) PPC_WEAK_FUNC(sub_830A92B8);
PPC_FUNC_IMPL(__imp__sub_830A92B8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,4
	ctx.r8.s64 = 4;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-3240
	ctx.r4.s64 = ctx.r10.s64 + -3240;
	// addi r11,r11,-17432
	ctx.r11.s64 = ctx.r11.s64 + -17432;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1308
	ctx.r3.s64 = ctx.r10.s64 + -1308;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A9308;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A9318"))) PPC_WEAK_FUNC(sub_830A9318);
PPC_FUNC_IMPL(__imp__sub_830A9318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,-6256
	ctx.r10.s64 = ctx.r10.s64 + -6256;
	// lwz r11,-17352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17352);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A9330"))) PPC_WEAK_FUNC(sub_830A9330);
PPC_FUNC_IMPL(__imp__sub_830A9330) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r7,9
	ctx.r7.s64 = 9;
	// addi r9,r10,29372
	ctx.r9.s64 = ctx.r10.s64 + 29372;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r5,r10,2688
	ctx.r5.s64 = ctx.r10.s64 + 2688;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-6256
	ctx.r11.s64 = ctx.r11.s64 + -6256;
	// addi r4,r10,-9360
	ctx.r4.s64 = ctx.r10.s64 + -9360;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,2076
	ctx.r3.s64 = ctx.r10.s64 + 2076;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830A9388;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A9398"))) PPC_WEAK_FUNC(sub_830A9398);
PPC_FUNC_IMPL(__imp__sub_830A9398) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,7624
	ctx.r4.s64 = ctx.r10.s64 + 7624;
	// addi r11,r11,-17340
	ctx.r11.s64 = ctx.r11.s64 + -17340;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,5028
	ctx.r3.s64 = ctx.r10.s64 + 5028;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A93E8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A93F8"))) PPC_WEAK_FUNC(sub_830A93F8);
PPC_FUNC_IMPL(__imp__sub_830A93F8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-1020
	ctx.r5.s64 = ctx.r10.s64 + -1020;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,7660
	ctx.r4.s64 = ctx.r10.s64 + 7660;
	// addi r11,r11,-17300
	ctx.r11.s64 = ctx.r11.s64 + -17300;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-2316
	ctx.r3.s64 = ctx.r10.s64 + -2316;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A944C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

