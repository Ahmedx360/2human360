#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_830A9460"))) PPC_WEAK_FUNC(sub_830A9460);
PPC_FUNC_IMPL(__imp__sub_830A9460) {
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
	// addi r9,r10,29416
	ctx.r9.s64 = ctx.r10.s64 + 29416;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,10856
	ctx.r4.s64 = ctx.r10.s64 + 10856;
	// addi r11,r11,-17276
	ctx.r11.s64 = ctx.r11.s64 + -17276;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,6648
	ctx.r3.s64 = ctx.r10.s64 + 6648;
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
	ctx.lr = 0x830A94B4;
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

__attribute__((alias("__imp__sub_830A94C8"))) PPC_WEAK_FUNC(sub_830A94C8);
PPC_FUNC_IMPL(__imp__sub_830A94C8) {
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
	// addi r4,r10,10884
	ctx.r4.s64 = ctx.r10.s64 + 10884;
	// addi r11,r11,-17216
	ctx.r11.s64 = ctx.r11.s64 + -17216;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,3876
	ctx.r3.s64 = ctx.r10.s64 + 3876;
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
	ctx.lr = 0x830A951C;
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

__attribute__((alias("__imp__sub_830A9530"))) PPC_WEAK_FUNC(sub_830A9530);
PPC_FUNC_IMPL(__imp__sub_830A9530) {
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
	// addi r9,r10,29452
	ctx.r9.s64 = ctx.r10.s64 + 29452;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,11384
	ctx.r4.s64 = ctx.r10.s64 + 11384;
	// addi r11,r11,-17192
	ctx.r11.s64 = ctx.r11.s64 + -17192;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,6792
	ctx.r3.s64 = ctx.r10.s64 + 6792;
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
	ctx.lr = 0x830A9584;
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

__attribute__((alias("__imp__sub_830A9598"))) PPC_WEAK_FUNC(sub_830A9598);
PPC_FUNC_IMPL(__imp__sub_830A9598) {
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
	// addi r4,r10,11420
	ctx.r4.s64 = ctx.r10.s64 + 11420;
	// addi r11,r11,-17072
	ctx.r11.s64 = ctx.r11.s64 + -17072;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,4992
	ctx.r3.s64 = ctx.r10.s64 + 4992;
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
	ctx.lr = 0x830A95EC;
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

__attribute__((alias("__imp__sub_830A9600"))) PPC_WEAK_FUNC(sub_830A9600);
PPC_FUNC_IMPL(__imp__sub_830A9600) {
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
	// addi r5,r10,456
	ctx.r5.s64 = ctx.r10.s64 + 456;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,18348
	ctx.r4.s64 = ctx.r10.s64 + 18348;
	// addi r11,r11,-17048
	ctx.r11.s64 = ctx.r11.s64 + -17048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,672
	ctx.r3.s64 = ctx.r10.s64 + 672;
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
	ctx.lr = 0x830A9654;
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

__attribute__((alias("__imp__sub_830A9668"))) PPC_WEAK_FUNC(sub_830A9668);
PPC_FUNC_IMPL(__imp__sub_830A9668) {
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
	// addi r4,r10,17092
	ctx.r4.s64 = ctx.r10.s64 + 17092;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,456
	ctx.r3.s64 = ctx.r10.s64 + 456;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A96B4;
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

__attribute__((alias("__imp__sub_830A96C8"))) PPC_WEAK_FUNC(sub_830A96C8);
PPC_FUNC_IMPL(__imp__sub_830A96C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,-8488
	ctx.r10.s64 = ctx.r10.s64 + -8488;
	// lwz r11,-17052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17052);
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A96E0"))) PPC_WEAK_FUNC(sub_830A96E0);
PPC_FUNC_IMPL(__imp__sub_830A96E0) {
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
	// addi r9,r10,29504
	ctx.r9.s64 = ctx.r10.s64 + 29504;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r5,r10,-1020
	ctx.r5.s64 = ctx.r10.s64 + -1020;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-8488
	ctx.r11.s64 = ctx.r11.s64 + -8488;
	// addi r4,r10,19012
	ctx.r4.s64 = ctx.r10.s64 + 19012;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-2604
	ctx.r3.s64 = ctx.r10.s64 + -2604;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830A9738;
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

__attribute__((alias("__imp__sub_830A9748"))) PPC_WEAK_FUNC(sub_830A9748);
PPC_FUNC_IMPL(__imp__sub_830A9748) {
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
	// addi r4,r10,11756
	ctx.r4.s64 = ctx.r10.s64 + 11756;
	// addi r11,r11,-16948
	ctx.r11.s64 = ctx.r11.s64 + -16948;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,6828
	ctx.r3.s64 = ctx.r10.s64 + 6828;
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
	ctx.lr = 0x830A9798;
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

__attribute__((alias("__imp__sub_830A97A8"))) PPC_WEAK_FUNC(sub_830A97A8);
PPC_FUNC_IMPL(__imp__sub_830A97A8) {
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
	// addi r4,r10,11792
	ctx.r4.s64 = ctx.r10.s64 + 11792;
	// addi r11,r11,-16908
	ctx.r11.s64 = ctx.r11.s64 + -16908;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,384
	ctx.r3.s64 = ctx.r10.s64 + 384;
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
	ctx.lr = 0x830A97FC;
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

__attribute__((alias("__imp__sub_830A9810"))) PPC_WEAK_FUNC(sub_830A9810);
PPC_FUNC_IMPL(__imp__sub_830A9810) {
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
	// addi r9,r10,29532
	ctx.r9.s64 = ctx.r10.s64 + 29532;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,12596
	ctx.r4.s64 = ctx.r10.s64 + 12596;
	// addi r11,r11,-16864
	ctx.r11.s64 = ctx.r11.s64 + -16864;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,4344
	ctx.r3.s64 = ctx.r10.s64 + 4344;
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
	ctx.lr = 0x830A9864;
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

__attribute__((alias("__imp__sub_830A9878"))) PPC_WEAK_FUNC(sub_830A9878);
PPC_FUNC_IMPL(__imp__sub_830A9878) {
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
	// addi r4,r10,12628
	ctx.r4.s64 = ctx.r10.s64 + 12628;
	// addi r11,r11,-16884
	ctx.r11.s64 = ctx.r11.s64 + -16884;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,1248
	ctx.r3.s64 = ctx.r10.s64 + 1248;
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
	ctx.lr = 0x830A98CC;
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

__attribute__((alias("__imp__sub_830A98E0"))) PPC_WEAK_FUNC(sub_830A98E0);
PPC_FUNC_IMPL(__imp__sub_830A98E0) {
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
	// addi r4,r10,9556
	ctx.r4.s64 = ctx.r10.s64 + 9556;
	// addi r11,r11,-16724
	ctx.r11.s64 = ctx.r11.s64 + -16724;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3828
	ctx.r3.s64 = ctx.r10.s64 + -3828;
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
	ctx.lr = 0x830A9930;
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

__attribute__((alias("__imp__sub_830A9940"))) PPC_WEAK_FUNC(sub_830A9940);
PPC_FUNC_IMPL(__imp__sub_830A9940) {
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
	// addi r4,r10,9592
	ctx.r4.s64 = ctx.r10.s64 + 9592;
	// addi r11,r11,-16684
	ctx.r11.s64 = ctx.r11.s64 + -16684;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-4368
	ctx.r3.s64 = ctx.r10.s64 + -4368;
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
	ctx.lr = 0x830A9994;
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

__attribute__((alias("__imp__sub_830A99A8"))) PPC_WEAK_FUNC(sub_830A99A8);
PPC_FUNC_IMPL(__imp__sub_830A99A8) {
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
	// addi r9,r10,29576
	ctx.r9.s64 = ctx.r10.s64 + 29576;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,10644
	ctx.r4.s64 = ctx.r10.s64 + 10644;
	// addi r11,r11,-16600
	ctx.r11.s64 = ctx.r11.s64 + -16600;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,3228
	ctx.r3.s64 = ctx.r10.s64 + 3228;
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
	ctx.lr = 0x830A99FC;
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

__attribute__((alias("__imp__sub_830A9A10"))) PPC_WEAK_FUNC(sub_830A9A10);
PPC_FUNC_IMPL(__imp__sub_830A9A10) {
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
	// addi r5,r10,-1020
	ctx.r5.s64 = ctx.r10.s64 + -1020;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,10672
	ctx.r4.s64 = ctx.r10.s64 + 10672;
	// addi r11,r11,-16660
	ctx.r11.s64 = ctx.r11.s64 + -16660;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,6936
	ctx.r3.s64 = ctx.r10.s64 + 6936;
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
	ctx.lr = 0x830A9A64;
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

__attribute__((alias("__imp__sub_830A9A78"))) PPC_WEAK_FUNC(sub_830A9A78);
PPC_FUNC_IMPL(__imp__sub_830A9A78) {
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
	// addi r5,r10,-1020
	ctx.r5.s64 = ctx.r10.s64 + -1020;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,14336
	ctx.r4.s64 = ctx.r10.s64 + 14336;
	// addi r11,r11,-16440
	ctx.r11.s64 = ctx.r11.s64 + -16440;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,420
	ctx.r3.s64 = ctx.r10.s64 + 420;
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
	ctx.lr = 0x830A9ACC;
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

__attribute__((alias("__imp__sub_830A9AE0"))) PPC_WEAK_FUNC(sub_830A9AE0);
PPC_FUNC_IMPL(__imp__sub_830A9AE0) {
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
	// addi r5,r10,-1020
	ctx.r5.s64 = ctx.r10.s64 + -1020;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,14024
	ctx.r4.s64 = ctx.r10.s64 + 14024;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-2244
	ctx.r3.s64 = ctx.r10.s64 + -2244;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830A9B2C;
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

__attribute__((alias("__imp__sub_830A9B40"))) PPC_WEAK_FUNC(sub_830A9B40);
PPC_FUNC_IMPL(__imp__sub_830A9B40) {
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
	// addi r5,r10,2076
	ctx.r5.s64 = ctx.r10.s64 + 2076;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,15872
	ctx.r4.s64 = ctx.r10.s64 + 15872;
	// addi r11,r11,-16260
	ctx.r11.s64 = ctx.r11.s64 + -16260;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,3804
	ctx.r3.s64 = ctx.r10.s64 + 3804;
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
	ctx.lr = 0x830A9B94;
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

__attribute__((alias("__imp__sub_830A9BA8"))) PPC_WEAK_FUNC(sub_830A9BA8);
PPC_FUNC_IMPL(__imp__sub_830A9BA8) {
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
	// addi r4,r10,15992
	ctx.r4.s64 = ctx.r10.s64 + 15992;
	// addi r11,r11,-16460
	ctx.r11.s64 = ctx.r11.s64 + -16460;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-228
	ctx.r3.s64 = ctx.r10.s64 + -228;
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
	ctx.lr = 0x830A9BFC;
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

__attribute__((alias("__imp__sub_830A9C10"))) PPC_WEAK_FUNC(sub_830A9C10);
PPC_FUNC_IMPL(__imp__sub_830A9C10) {
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
	// addi r4,r10,7936
	ctx.r4.s64 = ctx.r10.s64 + 7936;
	// addi r11,r11,-16220
	ctx.r11.s64 = ctx.r11.s64 + -16220;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,4272
	ctx.r3.s64 = ctx.r10.s64 + 4272;
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
	ctx.lr = 0x830A9C60;
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

__attribute__((alias("__imp__sub_830A9C70"))) PPC_WEAK_FUNC(sub_830A9C70);
PPC_FUNC_IMPL(__imp__sub_830A9C70) {
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
	// addi r5,r10,-2244
	ctx.r5.s64 = ctx.r10.s64 + -2244;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,7972
	ctx.r4.s64 = ctx.r10.s64 + 7972;
	// addi r11,r11,-16176
	ctx.r11.s64 = ctx.r11.s64 + -16176;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,1932
	ctx.r3.s64 = ctx.r10.s64 + 1932;
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
	ctx.lr = 0x830A9CC4;
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

__attribute__((alias("__imp__sub_830A9CD8"))) PPC_WEAK_FUNC(sub_830A9CD8);
PPC_FUNC_IMPL(__imp__sub_830A9CD8) {
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
	// addi r9,r10,29612
	ctx.r9.s64 = ctx.r10.s64 + 29612;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,11136
	ctx.r4.s64 = ctx.r10.s64 + 11136;
	// addi r11,r11,-16056
	ctx.r11.s64 = ctx.r11.s64 + -16056;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,3264
	ctx.r3.s64 = ctx.r10.s64 + 3264;
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
	ctx.lr = 0x830A9D2C;
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

__attribute__((alias("__imp__sub_830A9D40"))) PPC_WEAK_FUNC(sub_830A9D40);
PPC_FUNC_IMPL(__imp__sub_830A9D40) {
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
	// addi r4,r10,11160
	ctx.r4.s64 = ctx.r10.s64 + 11160;
	// addi r11,r11,-15996
	ctx.r11.s64 = ctx.r11.s64 + -15996;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,6000
	ctx.r3.s64 = ctx.r10.s64 + 6000;
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
	ctx.lr = 0x830A9D94;
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

__attribute__((alias("__imp__sub_830A9DA8"))) PPC_WEAK_FUNC(sub_830A9DA8);
PPC_FUNC_IMPL(__imp__sub_830A9DA8) {
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
	// addi r4,r10,12248
	ctx.r4.s64 = ctx.r10.s64 + 12248;
	// addi r11,r11,-15976
	ctx.r11.s64 = ctx.r11.s64 + -15976;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3864
	ctx.r3.s64 = ctx.r10.s64 + -3864;
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
	ctx.lr = 0x830A9DF8;
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

__attribute__((alias("__imp__sub_830A9E08"))) PPC_WEAK_FUNC(sub_830A9E08);
PPC_FUNC_IMPL(__imp__sub_830A9E08) {
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
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r8,r10,-15856
	ctx.r8.s64 = ctx.r10.s64 + -15856;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r10,-2244
	ctx.r5.s64 = ctx.r10.s64 + -2244;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,29624
	ctx.r11.s64 = ctx.r11.s64 + 29624;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,12284
	ctx.r4.s64 = ctx.r10.s64 + 12284;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,7476
	ctx.r3.s64 = ctx.r10.s64 + 7476;
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
	ctx.lr = 0x830A9E64;
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

__attribute__((alias("__imp__sub_830A9E78"))) PPC_WEAK_FUNC(sub_830A9E78);
PPC_FUNC_IMPL(__imp__sub_830A9E78) {
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
	// addi r4,r10,8180
	ctx.r4.s64 = ctx.r10.s64 + 8180;
	// addi r11,r11,-15676
	ctx.r11.s64 = ctx.r11.s64 + -15676;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,1140
	ctx.r3.s64 = ctx.r10.s64 + 1140;
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
	ctx.lr = 0x830A9EC8;
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

__attribute__((alias("__imp__sub_830A9ED8"))) PPC_WEAK_FUNC(sub_830A9ED8);
PPC_FUNC_IMPL(__imp__sub_830A9ED8) {
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
	// addi r5,r10,-2244
	ctx.r5.s64 = ctx.r10.s64 + -2244;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,8220
	ctx.r4.s64 = ctx.r10.s64 + 8220;
	// addi r11,r11,-15616
	ctx.r11.s64 = ctx.r11.s64 + -15616;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1632
	ctx.r3.s64 = ctx.r10.s64 + -1632;
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
	ctx.lr = 0x830A9F2C;
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

__attribute__((alias("__imp__sub_830A9F40"))) PPC_WEAK_FUNC(sub_830A9F40);
PPC_FUNC_IMPL(__imp__sub_830A9F40) {
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
	// addi r5,r10,-1020
	ctx.r5.s64 = ctx.r10.s64 + -1020;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,17272
	ctx.r4.s64 = ctx.r10.s64 + 17272;
	// addi r11,r11,-15516
	ctx.r11.s64 = ctx.r11.s64 + -15516;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,6612
	ctx.r3.s64 = ctx.r10.s64 + 6612;
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
	ctx.lr = 0x830A9F94;
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

__attribute__((alias("__imp__sub_830A9FA8"))) PPC_WEAK_FUNC(sub_830A9FA8);
PPC_FUNC_IMPL(__imp__sub_830A9FA8) {
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
	// addi r4,r10,9960
	ctx.r4.s64 = ctx.r10.s64 + 9960;
	// addi r11,r11,-15416
	ctx.r11.s64 = ctx.r11.s64 + -15416;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,5748
	ctx.r3.s64 = ctx.r10.s64 + 5748;
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
	ctx.lr = 0x830A9FF8;
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

__attribute__((alias("__imp__sub_830AA008"))) PPC_WEAK_FUNC(sub_830AA008);
PPC_FUNC_IMPL(__imp__sub_830AA008) {
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
	// addi r5,r10,-1020
	ctx.r5.s64 = ctx.r10.s64 + -1020;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,18444
	ctx.r4.s64 = ctx.r10.s64 + 18444;
	// addi r11,r11,-15476
	ctx.r11.s64 = ctx.r11.s64 + -15476;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,3192
	ctx.r3.s64 = ctx.r10.s64 + 3192;
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
	ctx.lr = 0x830AA05C;
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

__attribute__((alias("__imp__sub_830AA070"))) PPC_WEAK_FUNC(sub_830AA070);
PPC_FUNC_IMPL(__imp__sub_830AA070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,-8388
	ctx.r10.s64 = ctx.r10.s64 + -8388;
	// lwz r11,-15316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15316);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AA088"))) PPC_WEAK_FUNC(sub_830AA088);
PPC_FUNC_IMPL(__imp__sub_830AA088) {
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
	// addi r9,r10,29716
	ctx.r9.s64 = ctx.r10.s64 + 29716;
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
	// addi r11,r11,-8388
	ctx.r11.s64 = ctx.r11.s64 + -8388;
	// addi r4,r10,15420
	ctx.r4.s64 = ctx.r10.s64 + 15420;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,3156
	ctx.r3.s64 = ctx.r10.s64 + 3156;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830AA0E0;
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

__attribute__((alias("__imp__sub_830AA0F0"))) PPC_WEAK_FUNC(sub_830AA0F0);
PPC_FUNC_IMPL(__imp__sub_830AA0F0) {
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
	// addi r5,r10,3156
	ctx.r5.s64 = ctx.r10.s64 + 3156;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,16088
	ctx.r4.s64 = ctx.r10.s64 + 16088;
	// addi r11,r11,-15312
	ctx.r11.s64 = ctx.r11.s64 + -15312;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-984
	ctx.r3.s64 = ctx.r10.s64 + -984;
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
	ctx.lr = 0x830AA144;
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

__attribute__((alias("__imp__sub_830AA158"))) PPC_WEAK_FUNC(sub_830AA158);
PPC_FUNC_IMPL(__imp__sub_830AA158) {
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
	// addi r5,r10,-984
	ctx.r5.s64 = ctx.r10.s64 + -984;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,19200
	ctx.r4.s64 = ctx.r10.s64 + 19200;
	// addi r11,r11,-15272
	ctx.r11.s64 = ctx.r11.s64 + -15272;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,1392
	ctx.r3.s64 = ctx.r10.s64 + 1392;
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
	ctx.lr = 0x830AA1AC;
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

__attribute__((alias("__imp__sub_830AA1C0"))) PPC_WEAK_FUNC(sub_830AA1C0);
PPC_FUNC_IMPL(__imp__sub_830AA1C0) {
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
	// addi r5,r10,-984
	ctx.r5.s64 = ctx.r10.s64 + -984;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,7480
	ctx.r4.s64 = ctx.r10.s64 + 7480;
	// addi r11,r11,-15192
	ctx.r11.s64 = ctx.r11.s64 + -15192;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,1572
	ctx.r3.s64 = ctx.r10.s64 + 1572;
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
	ctx.lr = 0x830AA214;
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

__attribute__((alias("__imp__sub_830AA228"))) PPC_WEAK_FUNC(sub_830AA228);
PPC_FUNC_IMPL(__imp__sub_830AA228) {
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
	// addi r5,r10,-984
	ctx.r5.s64 = ctx.r10.s64 + -984;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,10124
	ctx.r4.s64 = ctx.r10.s64 + 10124;
	// addi r11,r11,-15152
	ctx.r11.s64 = ctx.r11.s64 + -15152;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-768
	ctx.r3.s64 = ctx.r10.s64 + -768;
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
	ctx.lr = 0x830AA27C;
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

__attribute__((alias("__imp__sub_830AA290"))) PPC_WEAK_FUNC(sub_830AA290);
PPC_FUNC_IMPL(__imp__sub_830AA290) {
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
	// addi r4,r10,12920
	ctx.r4.s64 = ctx.r10.s64 + 12920;
	// addi r11,r11,-15092
	ctx.r11.s64 = ctx.r11.s64 + -15092;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-2784
	ctx.r3.s64 = ctx.r10.s64 + -2784;
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
	ctx.lr = 0x830AA2E0;
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

__attribute__((alias("__imp__sub_830AA2F0"))) PPC_WEAK_FUNC(sub_830AA2F0);
PPC_FUNC_IMPL(__imp__sub_830AA2F0) {
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
	// addi r4,r10,12948
	ctx.r4.s64 = ctx.r10.s64 + 12948;
	// addi r11,r11,-15052
	ctx.r11.s64 = ctx.r11.s64 + -15052;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,348
	ctx.r3.s64 = ctx.r10.s64 + 348;
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
	ctx.lr = 0x830AA344;
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

__attribute__((alias("__imp__sub_830AA358"))) PPC_WEAK_FUNC(sub_830AA358);
PPC_FUNC_IMPL(__imp__sub_830AA358) {
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
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r10,-15032
	ctx.r8.s64 = ctx.r10.s64 + -15032;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r10,-2712
	ctx.r5.s64 = ctx.r10.s64 + -2712;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,29728
	ctx.r11.s64 = ctx.r11.s64 + 29728;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,9428
	ctx.r4.s64 = ctx.r10.s64 + 9428;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,6756
	ctx.r3.s64 = ctx.r10.s64 + 6756;
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
	ctx.lr = 0x830AA3B4;
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

__attribute__((alias("__imp__sub_830AA3C8"))) PPC_WEAK_FUNC(sub_830AA3C8);
PPC_FUNC_IMPL(__imp__sub_830AA3C8) {
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
	// addi r4,r10,15900
	ctx.r4.s64 = ctx.r10.s64 + 15900;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-4080
	ctx.r3.s64 = ctx.r10.s64 + -4080;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830AA414;
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

__attribute__((alias("__imp__sub_830AA428"))) PPC_WEAK_FUNC(sub_830AA428);
PPC_FUNC_IMPL(__imp__sub_830AA428) {
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
	// addi r5,r10,4740
	ctx.r5.s64 = ctx.r10.s64 + 4740;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,17064
	ctx.r4.s64 = ctx.r10.s64 + 17064;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,3732
	ctx.r3.s64 = ctx.r10.s64 + 3732;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830AA474;
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

__attribute__((alias("__imp__sub_830AA488"))) PPC_WEAK_FUNC(sub_830AA488);
PPC_FUNC_IMPL(__imp__sub_830AA488) {
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
	// addi r5,r10,6756
	ctx.r5.s64 = ctx.r10.s64 + 6756;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,2268
	ctx.r4.s64 = ctx.r10.s64 + 2268;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,2184
	ctx.r3.s64 = ctx.r10.s64 + 2184;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830AA4D4;
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

__attribute__((alias("__imp__sub_830AA4E8"))) PPC_WEAK_FUNC(sub_830AA4E8);
PPC_FUNC_IMPL(__imp__sub_830AA4E8) {
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
	// addi r9,r10,29828
	ctx.r9.s64 = ctx.r10.s64 + 29828;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,-4080
	ctx.r5.s64 = ctx.r10.s64 + -4080;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r4,r10,17436
	ctx.r4.s64 = ctx.r10.s64 + 17436;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,4740
	ctx.r3.s64 = ctx.r10.s64 + 4740;
	// li r10,1
	ctx.r10.s64 = 1;
	// bl 0x82db4000
	ctx.lr = 0x830AA538;
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

__attribute__((alias("__imp__sub_830AA548"))) PPC_WEAK_FUNC(sub_830AA548);
PPC_FUNC_IMPL(__imp__sub_830AA548) {
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
	// addi r4,r10,7308
	ctx.r4.s64 = ctx.r10.s64 + 7308;
	// addi r11,r11,-14708
	ctx.r11.s64 = ctx.r11.s64 + -14708;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,5460
	ctx.r3.s64 = ctx.r10.s64 + 5460;
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
	ctx.lr = 0x830AA598;
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

__attribute__((alias("__imp__sub_830AA5A8"))) PPC_WEAK_FUNC(sub_830AA5A8);
PPC_FUNC_IMPL(__imp__sub_830AA5A8) {
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
	// addi r5,r10,4740
	ctx.r5.s64 = ctx.r10.s64 + 4740;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,7344
	ctx.r4.s64 = ctx.r10.s64 + 7344;
	// addi r11,r11,-14664
	ctx.r11.s64 = ctx.r11.s64 + -14664;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,1536
	ctx.r3.s64 = ctx.r10.s64 + 1536;
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
	ctx.lr = 0x830AA5FC;
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

__attribute__((alias("__imp__sub_830AA610"))) PPC_WEAK_FUNC(sub_830AA610);
PPC_FUNC_IMPL(__imp__sub_830AA610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,-7648
	ctx.r10.s64 = ctx.r10.s64 + -7648;
	// lwz r11,-14668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14668);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AA628"))) PPC_WEAK_FUNC(sub_830AA628);
PPC_FUNC_IMPL(__imp__sub_830AA628) {
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
	// addi r9,r10,29920
	ctx.r9.s64 = ctx.r10.s64 + 29920;
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
	// addi r11,r11,-7648
	ctx.r11.s64 = ctx.r11.s64 + -7648;
	// addi r4,r10,17028
	ctx.r4.s64 = ctx.r10.s64 + 17028;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,7404
	ctx.r3.s64 = ctx.r10.s64 + 7404;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830AA680;
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

__attribute__((alias("__imp__sub_830AA690"))) PPC_WEAK_FUNC(sub_830AA690);
PPC_FUNC_IMPL(__imp__sub_830AA690) {
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
	// addi r5,r10,7404
	ctx.r5.s64 = ctx.r10.s64 + 7404;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,14012
	ctx.r4.s64 = ctx.r10.s64 + 14012;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-3180
	ctx.r3.s64 = ctx.r10.s64 + -3180;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830AA6DC;
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

__attribute__((alias("__imp__sub_830AA6F0"))) PPC_WEAK_FUNC(sub_830AA6F0);
PPC_FUNC_IMPL(__imp__sub_830AA6F0) {
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
	// addi r5,r10,6036
	ctx.r5.s64 = ctx.r10.s64 + 6036;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,17112
	ctx.r4.s64 = ctx.r10.s64 + 17112;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,2580
	ctx.r3.s64 = ctx.r10.s64 + 2580;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830AA73C;
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

__attribute__((alias("__imp__sub_830AA750"))) PPC_WEAK_FUNC(sub_830AA750);
PPC_FUNC_IMPL(__imp__sub_830AA750) {
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
	// addi r5,r10,7404
	ctx.r5.s64 = ctx.r10.s64 + 7404;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,17616
	ctx.r4.s64 = ctx.r10.s64 + 17616;
	// addi r11,r11,-14524
	ctx.r11.s64 = ctx.r11.s64 + -14524;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,6036
	ctx.r3.s64 = ctx.r10.s64 + 6036;
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
	ctx.lr = 0x830AA7A4;
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

__attribute__((alias("__imp__sub_830AA7B8"))) PPC_WEAK_FUNC(sub_830AA7B8);
PPC_FUNC_IMPL(__imp__sub_830AA7B8) {
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
	// addi r5,r10,6036
	ctx.r5.s64 = ctx.r10.s64 + 6036;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,17640
	ctx.r4.s64 = ctx.r10.s64 + 17640;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,1068
	ctx.r3.s64 = ctx.r10.s64 + 1068;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830AA804;
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

__attribute__((alias("__imp__sub_830AA818"))) PPC_WEAK_FUNC(sub_830AA818);
PPC_FUNC_IMPL(__imp__sub_830AA818) {
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
	// addi r5,r10,7404
	ctx.r5.s64 = ctx.r10.s64 + 7404;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,7376
	ctx.r4.s64 = ctx.r10.s64 + 7376;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,7116
	ctx.r3.s64 = ctx.r10.s64 + 7116;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830AA864;
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

__attribute__((alias("__imp__sub_830AA878"))) PPC_WEAK_FUNC(sub_830AA878);
PPC_FUNC_IMPL(__imp__sub_830AA878) {
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
	// addi r5,r10,-3180
	ctx.r5.s64 = ctx.r10.s64 + -3180;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,7512
	ctx.r4.s64 = ctx.r10.s64 + 7512;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,4848
	ctx.r3.s64 = ctx.r10.s64 + 4848;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830AA8C4;
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

__attribute__((alias("__imp__sub_830AA8D8"))) PPC_WEAK_FUNC(sub_830AA8D8);
PPC_FUNC_IMPL(__imp__sub_830AA8D8) {
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
	// addi r5,r10,7116
	ctx.r5.s64 = ctx.r10.s64 + 7116;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,7692
	ctx.r4.s64 = ctx.r10.s64 + 7692;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-4296
	ctx.r3.s64 = ctx.r10.s64 + -4296;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830AA924;
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

__attribute__((alias("__imp__sub_830AA938"))) PPC_WEAK_FUNC(sub_830AA938);
PPC_FUNC_IMPL(__imp__sub_830AA938) {
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
	// addi r5,r10,-3180
	ctx.r5.s64 = ctx.r10.s64 + -3180;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,9620
	ctx.r4.s64 = ctx.r10.s64 + 9620;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,1896
	ctx.r3.s64 = ctx.r10.s64 + 1896;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830AA984;
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

__attribute__((alias("__imp__sub_830AA998"))) PPC_WEAK_FUNC(sub_830AA998);
PPC_FUNC_IMPL(__imp__sub_830AA998) {
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
	// addi r5,r10,852
	ctx.r5.s64 = ctx.r10.s64 + 852;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,13532
	ctx.r4.s64 = ctx.r10.s64 + 13532;
	// addi r11,r11,-14484
	ctx.r11.s64 = ctx.r11.s64 + -14484;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-444
	ctx.r3.s64 = ctx.r10.s64 + -444;
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
	ctx.lr = 0x830AA9EC;
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

__attribute__((alias("__imp__sub_830AAA00"))) PPC_WEAK_FUNC(sub_830AAA00);
PPC_FUNC_IMPL(__imp__sub_830AAA00) {
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
	// addi r5,r10,-2028
	ctx.r5.s64 = ctx.r10.s64 + -2028;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,15256
	ctx.r4.s64 = ctx.r10.s64 + 15256;
	// addi r11,r11,-14444
	ctx.r11.s64 = ctx.r11.s64 + -14444;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,3912
	ctx.r3.s64 = ctx.r10.s64 + 3912;
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
	ctx.lr = 0x830AAA54;
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

__attribute__((alias("__imp__sub_830AAA68"))) PPC_WEAK_FUNC(sub_830AAA68);
PPC_FUNC_IMPL(__imp__sub_830AAA68) {
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
	// addi r5,r10,-2712
	ctx.r5.s64 = ctx.r10.s64 + -2712;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,17212
	ctx.r4.s64 = ctx.r10.s64 + 17212;
	// addi r11,r11,-14424
	ctx.r11.s64 = ctx.r11.s64 + -14424;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,852
	ctx.r3.s64 = ctx.r10.s64 + 852;
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
	ctx.lr = 0x830AAABC;
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

__attribute__((alias("__imp__sub_830AAAD0"))) PPC_WEAK_FUNC(sub_830AAAD0);
PPC_FUNC_IMPL(__imp__sub_830AAAD0) {
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
	// addi r5,r10,852
	ctx.r5.s64 = ctx.r10.s64 + 852;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,17480
	ctx.r4.s64 = ctx.r10.s64 + 17480;
	// addi r11,r11,-14384
	ctx.r11.s64 = ctx.r11.s64 + -14384;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-2028
	ctx.r3.s64 = ctx.r10.s64 + -2028;
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
	ctx.lr = 0x830AAB24;
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

__attribute__((alias("__imp__sub_830AAB38"))) PPC_WEAK_FUNC(sub_830AAB38);
PPC_FUNC_IMPL(__imp__sub_830AAB38) {
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
	// addi r5,r10,-2028
	ctx.r5.s64 = ctx.r10.s64 + -2028;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,6896
	ctx.r4.s64 = ctx.r10.s64 + 6896;
	// addi r11,r11,-14364
	ctx.r11.s64 = ctx.r11.s64 + -14364;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-4044
	ctx.r3.s64 = ctx.r10.s64 + -4044;
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
	ctx.lr = 0x830AAB8C;
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

__attribute__((alias("__imp__sub_830AABA0"))) PPC_WEAK_FUNC(sub_830AABA0);
PPC_FUNC_IMPL(__imp__sub_830AABA0) {
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
	// addi r9,r10,29956
	ctx.r9.s64 = ctx.r10.s64 + 29956;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-8080
	ctx.r4.s64 = ctx.r10.s64 + -8080;
	// addi r11,r11,-14340
	ctx.r11.s64 = ctx.r11.s64 + -14340;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,2364
	ctx.r3.s64 = ctx.r10.s64 + 2364;
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
	ctx.lr = 0x830AABF4;
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

__attribute__((alias("__imp__sub_830AAC08"))) PPC_WEAK_FUNC(sub_830AAC08);
PPC_FUNC_IMPL(__imp__sub_830AAC08) {
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
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r8,r10,-14296
	ctx.r8.s64 = ctx.r10.s64 + -14296;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r10,2688
	ctx.r5.s64 = ctx.r10.s64 + 2688;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,29968
	ctx.r11.s64 = ctx.r11.s64 + 29968;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,18684
	ctx.r4.s64 = ctx.r10.s64 + 18684;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-1524
	ctx.r3.s64 = ctx.r10.s64 + -1524;
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
	ctx.lr = 0x830AAC64;
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

__attribute__((alias("__imp__sub_830AAC78"))) PPC_WEAK_FUNC(sub_830AAC78);
PPC_FUNC_IMPL(__imp__sub_830AAC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lwz r10,-14148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14148);
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r11,r11,-7264
	ctx.r11.s64 = ctx.r11.s64 + -7264;
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// lwz r10,-14152(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14152);
	// stw r10,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r10.u32);
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// lwz r10,-14156(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14156);
	// stw r10,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AACA8"))) PPC_WEAK_FUNC(sub_830AACA8);
PPC_FUNC_IMPL(__imp__sub_830AACA8) {
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
	// addi r9,r11,30176
	ctx.r9.s64 = ctx.r11.s64 + 30176;
	// addi r5,r10,2688
	ctx.r5.s64 = ctx.r10.s64 + 2688;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r8,r9,48
	ctx.r8.s64 = ctx.r9.s64 + 48;
	// li r7,27
	ctx.r7.s64 = 27;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,1284
	ctx.r4.s64 = ctx.r10.s64 + 1284;
	// addi r11,r11,-7264
	ctx.r11.s64 = ctx.r11.s64 + -7264;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,3048
	ctx.r3.s64 = ctx.r10.s64 + 3048;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830AAD04;
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

__attribute__((alias("__imp__sub_830AAD18"))) PPC_WEAK_FUNC(sub_830AAD18);
PPC_FUNC_IMPL(__imp__sub_830AAD18) {
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
	// addi r9,r10,30440
	ctx.r9.s64 = ctx.r10.s64 + 30440;
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
	// addi r11,r11,-14120
	ctx.r11.s64 = ctx.r11.s64 + -14120;
	// addi r4,r10,18104
	ctx.r4.s64 = ctx.r10.s64 + 18104;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-2712
	ctx.r3.s64 = ctx.r10.s64 + -2712;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830AAD70;
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

__attribute__((alias("__imp__sub_830AAD80"))) PPC_WEAK_FUNC(sub_830AAD80);
PPC_FUNC_IMPL(__imp__sub_830AAD80) {
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
	// addi r4,r10,17688
	ctx.r4.s64 = ctx.r10.s64 + 17688;
	// addi r11,r11,-14140
	ctx.r11.s64 = ctx.r11.s64 + -14140;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1056
	ctx.r3.s64 = ctx.r10.s64 + -1056;
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
	ctx.lr = 0x830AADD4;
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

__attribute__((alias("__imp__sub_830AADE8"))) PPC_WEAK_FUNC(sub_830AADE8);
PPC_FUNC_IMPL(__imp__sub_830AADE8) {
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
	// addi r5,r10,3120
	ctx.r5.s64 = ctx.r10.s64 + 3120;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-20140
	ctx.r4.s64 = ctx.r10.s64 + -20140;
	// addi r11,r11,-14000
	ctx.r11.s64 = ctx.r11.s64 + -14000;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,2724
	ctx.r3.s64 = ctx.r10.s64 + 2724;
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
	ctx.lr = 0x830AAE3C;
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

__attribute__((alias("__imp__sub_830AAE50"))) PPC_WEAK_FUNC(sub_830AAE50);
PPC_FUNC_IMPL(__imp__sub_830AAE50) {
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
	// addi r4,r10,-20200
	ctx.r4.s64 = ctx.r10.s64 + -20200;
	// addi r11,r11,-13980
	ctx.r11.s64 = ctx.r11.s64 + -13980;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,1644
	ctx.r3.s64 = ctx.r10.s64 + 1644;
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
	ctx.lr = 0x830AAEA0;
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

__attribute__((alias("__imp__sub_830AAEB0"))) PPC_WEAK_FUNC(sub_830AAEB0);
PPC_FUNC_IMPL(__imp__sub_830AAEB0) {
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
	// addi r4,r10,-20596
	ctx.r4.s64 = ctx.r10.s64 + -20596;
	// addi r11,r11,-13960
	ctx.r11.s64 = ctx.r11.s64 + -13960;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,3840
	ctx.r3.s64 = ctx.r10.s64 + 3840;
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
	ctx.lr = 0x830AAF04;
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

__attribute__((alias("__imp__sub_830AAF18"))) PPC_WEAK_FUNC(sub_830AAF18);
PPC_FUNC_IMPL(__imp__sub_830AAF18) {
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
	// addi r4,r10,-20408
	ctx.r4.s64 = ctx.r10.s64 + -20408;
	// addi r11,r11,-13900
	ctx.r11.s64 = ctx.r11.s64 + -13900;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,6576
	ctx.r3.s64 = ctx.r10.s64 + 6576;
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
	ctx.lr = 0x830AAF68;
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

__attribute__((alias("__imp__sub_830AAF78"))) PPC_WEAK_FUNC(sub_830AAF78);
PPC_FUNC_IMPL(__imp__sub_830AAF78) {
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
	// addi r5,r10,2688
	ctx.r5.s64 = ctx.r10.s64 + 2688;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-20388
	ctx.r4.s64 = ctx.r10.s64 + -20388;
	// addi r11,r11,-13880
	ctx.r11.s64 = ctx.r11.s64 + -13880;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,3696
	ctx.r3.s64 = ctx.r10.s64 + 3696;
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
	ctx.lr = 0x830AAFCC;
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

__attribute__((alias("__imp__sub_830AAFE0"))) PPC_WEAK_FUNC(sub_830AAFE0);
PPC_FUNC_IMPL(__imp__sub_830AAFE0) {
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
	// addi r9,r10,30512
	ctx.r9.s64 = ctx.r10.s64 + 30512;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,13352
	ctx.r4.s64 = ctx.r10.s64 + 13352;
	// addi r11,r11,-13832
	ctx.r11.s64 = ctx.r11.s64 + -13832;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-1236
	ctx.r3.s64 = ctx.r10.s64 + -1236;
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
	ctx.lr = 0x830AB034;
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

__attribute__((alias("__imp__sub_830AB048"))) PPC_WEAK_FUNC(sub_830AB048);
PPC_FUNC_IMPL(__imp__sub_830AB048) {
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
	// addi r9,r10,30476
	ctx.r9.s64 = ctx.r10.s64 + 30476;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r5,r10,-1020
	ctx.r5.s64 = ctx.r10.s64 + -1020;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-13692
	ctx.r11.s64 = ctx.r11.s64 + -13692;
	// addi r4,r10,13384
	ctx.r4.s64 = ctx.r10.s64 + 13384;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-156
	ctx.r3.s64 = ctx.r10.s64 + -156;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830AB0A0;
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

__attribute__((alias("__imp__sub_830AB0B0"))) PPC_WEAK_FUNC(sub_830AB0B0);
PPC_FUNC_IMPL(__imp__sub_830AB0B0) {
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
	// addi r9,r10,30548
	ctx.r9.s64 = ctx.r10.s64 + 30548;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,13736
	ctx.r4.s64 = ctx.r10.s64 + 13736;
	// addi r11,r11,-13648
	ctx.r11.s64 = ctx.r11.s64 + -13648;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-3036
	ctx.r3.s64 = ctx.r10.s64 + -3036;
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
	ctx.lr = 0x830AB104;
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

__attribute__((alias("__imp__sub_830AB118"))) PPC_WEAK_FUNC(sub_830AB118);
PPC_FUNC_IMPL(__imp__sub_830AB118) {
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
	// addi r4,r10,13764
	ctx.r4.s64 = ctx.r10.s64 + 13764;
	// addi r11,r11,-13668
	ctx.r11.s64 = ctx.r11.s64 + -13668;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-4224
	ctx.r3.s64 = ctx.r10.s64 + -4224;
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
	ctx.lr = 0x830AB16C;
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

__attribute__((alias("__imp__sub_830AB180"))) PPC_WEAK_FUNC(sub_830AB180);
PPC_FUNC_IMPL(__imp__sub_830AB180) {
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
	// addi r5,r10,5136
	ctx.r5.s64 = ctx.r10.s64 + 5136;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-26268
	ctx.r4.s64 = ctx.r10.s64 + -26268;
	// addi r11,r11,-13568
	ctx.r11.s64 = ctx.r11.s64 + -13568;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3900
	ctx.r3.s64 = ctx.r10.s64 + -3900;
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
	ctx.lr = 0x830AB1D4;
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

__attribute__((alias("__imp__sub_830AB1E8"))) PPC_WEAK_FUNC(sub_830AB1E8);
PPC_FUNC_IMPL(__imp__sub_830AB1E8) {
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
	// addi r5,r10,5136
	ctx.r5.s64 = ctx.r10.s64 + 5136;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-25968
	ctx.r4.s64 = ctx.r10.s64 + -25968;
	// addi r11,r11,-13488
	ctx.r11.s64 = ctx.r11.s64 + -13488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-2676
	ctx.r3.s64 = ctx.r10.s64 + -2676;
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
	ctx.lr = 0x830AB23C;
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

__attribute__((alias("__imp__sub_830AB250"))) PPC_WEAK_FUNC(sub_830AB250);
PPC_FUNC_IMPL(__imp__sub_830AB250) {
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
	// addi r5,r10,3984
	ctx.r5.s64 = ctx.r10.s64 + 3984;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-25464
	ctx.r4.s64 = ctx.r10.s64 + -25464;
	// addi r11,r11,-13408
	ctx.r11.s64 = ctx.r11.s64 + -13408;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,4488
	ctx.r3.s64 = ctx.r10.s64 + 4488;
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
	ctx.lr = 0x830AB2A4;
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

__attribute__((alias("__imp__sub_830AB2B8"))) PPC_WEAK_FUNC(sub_830AB2B8);
PPC_FUNC_IMPL(__imp__sub_830AB2B8) {
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
	// addi r5,r10,3984
	ctx.r5.s64 = ctx.r10.s64 + 3984;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-24232
	ctx.r4.s64 = ctx.r10.s64 + -24232;
	// addi r11,r11,-13328
	ctx.r11.s64 = ctx.r11.s64 + -13328;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3936
	ctx.r3.s64 = ctx.r10.s64 + -3936;
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
	ctx.lr = 0x830AB30C;
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

__attribute__((alias("__imp__sub_830AB320"))) PPC_WEAK_FUNC(sub_830AB320);
PPC_FUNC_IMPL(__imp__sub_830AB320) {
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
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r5,r10,5136
	ctx.r5.s64 = ctx.r10.s64 + 5136;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-22904
	ctx.r4.s64 = ctx.r10.s64 + -22904;
	// addi r11,r11,-13248
	ctx.r11.s64 = ctx.r11.s64 + -13248;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,3516
	ctx.r3.s64 = ctx.r10.s64 + 3516;
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
	ctx.lr = 0x830AB374;
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

__attribute__((alias("__imp__sub_830AB388"))) PPC_WEAK_FUNC(sub_830AB388);
PPC_FUNC_IMPL(__imp__sub_830AB388) {
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
	// li r8,19
	ctx.r8.s64 = 19;
	// addi r7,r10,-13088
	ctx.r7.s64 = ctx.r10.s64 + -13088;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r10,-22092
	ctx.r4.s64 = ctx.r10.s64 + -22092;
	// addi r11,r11,30560
	ctx.r11.s64 = ctx.r11.s64 + 30560;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,4308
	ctx.r3.s64 = ctx.r10.s64 + 4308;
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
	ctx.lr = 0x830AB3E0;
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

__attribute__((alias("__imp__sub_830AB3F0"))) PPC_WEAK_FUNC(sub_830AB3F0);
PPC_FUNC_IMPL(__imp__sub_830AB3F0) {
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
	// addi r5,r10,-1092
	ctx.r5.s64 = ctx.r10.s64 + -1092;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,-13508
	ctx.r11.s64 = ctx.r11.s64 + -13508;
	// addi r4,r10,-26120
	ctx.r4.s64 = ctx.r10.s64 + -26120;
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
	// addi r3,r10,1716
	ctx.r3.s64 = ctx.r10.s64 + 1716;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830AB440;
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

__attribute__((alias("__imp__sub_830AB450"))) PPC_WEAK_FUNC(sub_830AB450);
PPC_FUNC_IMPL(__imp__sub_830AB450) {
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
	// addi r5,r10,-1092
	ctx.r5.s64 = ctx.r10.s64 + -1092;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,-12708
	ctx.r11.s64 = ctx.r11.s64 + -12708;
	// addi r4,r10,-25804
	ctx.r4.s64 = ctx.r10.s64 + -25804;
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
	// addi r3,r10,6288
	ctx.r3.s64 = ctx.r10.s64 + 6288;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830AB4A0;
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

__attribute__((alias("__imp__sub_830AB4B0"))) PPC_WEAK_FUNC(sub_830AB4B0);
PPC_FUNC_IMPL(__imp__sub_830AB4B0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-25632
	ctx.r4.s64 = ctx.r10.s64 + -25632;
	// addi r11,r11,-12688
	ctx.r11.s64 = ctx.r11.s64 + -12688;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3720
	ctx.r3.s64 = ctx.r10.s64 + -3720;
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
	ctx.lr = 0x830AB504;
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

__attribute__((alias("__imp__sub_830AB518"))) PPC_WEAK_FUNC(sub_830AB518);
PPC_FUNC_IMPL(__imp__sub_830AB518) {
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
	// addi r4,r10,-25008
	ctx.r4.s64 = ctx.r10.s64 + -25008;
	// addi r11,r11,-12648
	ctx.r11.s64 = ctx.r11.s64 + -12648;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,6108
	ctx.r3.s64 = ctx.r10.s64 + 6108;
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
	ctx.lr = 0x830AB568;
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

__attribute__((alias("__imp__sub_830AB578"))) PPC_WEAK_FUNC(sub_830AB578);
PPC_FUNC_IMPL(__imp__sub_830AB578) {
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
	// addi r5,r10,-1092
	ctx.r5.s64 = ctx.r10.s64 + -1092;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,-12608
	ctx.r11.s64 = ctx.r11.s64 + -12608;
	// addi r4,r10,-24968
	ctx.r4.s64 = ctx.r10.s64 + -24968;
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
	// addi r3,r10,-3252
	ctx.r3.s64 = ctx.r10.s64 + -3252;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830AB5C8;
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

__attribute__((alias("__imp__sub_830AB5D8"))) PPC_WEAK_FUNC(sub_830AB5D8);
PPC_FUNC_IMPL(__imp__sub_830AB5D8) {
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
	// addi r4,r10,-24452
	ctx.r4.s64 = ctx.r10.s64 + -24452;
	// addi r11,r11,-12588
	ctx.r11.s64 = ctx.r11.s64 + -12588;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-948
	ctx.r3.s64 = ctx.r10.s64 + -948;
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
	ctx.lr = 0x830AB628;
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

__attribute__((alias("__imp__sub_830AB638"))) PPC_WEAK_FUNC(sub_830AB638);
PPC_FUNC_IMPL(__imp__sub_830AB638) {
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
	// addi r4,r10,-24424
	ctx.r4.s64 = ctx.r10.s64 + -24424;
	// addi r11,r11,-12548
	ctx.r11.s64 = ctx.r11.s64 + -12548;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-4260
	ctx.r3.s64 = ctx.r10.s64 + -4260;
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
	ctx.lr = 0x830AB688;
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

__attribute__((alias("__imp__sub_830AB698"))) PPC_WEAK_FUNC(sub_830AB698);
PPC_FUNC_IMPL(__imp__sub_830AB698) {
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
	// addi r4,r10,-24392
	ctx.r4.s64 = ctx.r10.s64 + -24392;
	// addi r11,r11,-12488
	ctx.r11.s64 = ctx.r11.s64 + -12488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,2112
	ctx.r3.s64 = ctx.r10.s64 + 2112;
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
	ctx.lr = 0x830AB6EC;
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

__attribute__((alias("__imp__sub_830AB700"))) PPC_WEAK_FUNC(sub_830AB700);
PPC_FUNC_IMPL(__imp__sub_830AB700) {
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
	// addi r5,r10,3984
	ctx.r5.s64 = ctx.r10.s64 + 3984;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-25192
	ctx.r4.s64 = ctx.r10.s64 + -25192;
	// addi r11,r11,-12368
	ctx.r11.s64 = ctx.r11.s64 + -12368;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-2388
	ctx.r3.s64 = ctx.r10.s64 + -2388;
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
	ctx.lr = 0x830AB754;
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

__attribute__((alias("__imp__sub_830AB768"))) PPC_WEAK_FUNC(sub_830AB768);
PPC_FUNC_IMPL(__imp__sub_830AB768) {
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
	// addi r4,r10,-21800
	ctx.r4.s64 = ctx.r10.s64 + -21800;
	// addi r11,r11,-12428
	ctx.r11.s64 = ctx.r11.s64 + -12428;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,312
	ctx.r3.s64 = ctx.r10.s64 + 312;
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
	ctx.lr = 0x830AB7B8;
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

__attribute__((alias("__imp__sub_830AB7C8"))) PPC_WEAK_FUNC(sub_830AB7C8);
PPC_FUNC_IMPL(__imp__sub_830AB7C8) {
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
	// addi r4,r10,-21772
	ctx.r4.s64 = ctx.r10.s64 + -21772;
	// addi r11,r11,-12248
	ctx.r11.s64 = ctx.r11.s64 + -12248;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,4416
	ctx.r3.s64 = ctx.r10.s64 + 4416;
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
	ctx.lr = 0x830AB818;
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

__attribute__((alias("__imp__sub_830AB828"))) PPC_WEAK_FUNC(sub_830AB828);
PPC_FUNC_IMPL(__imp__sub_830AB828) {
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
	// addi r4,r10,-21740
	ctx.r4.s64 = ctx.r10.s64 + -21740;
	// addi r11,r11,-12208
	ctx.r11.s64 = ctx.r11.s64 + -12208;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,528
	ctx.r3.s64 = ctx.r10.s64 + 528;
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
	ctx.lr = 0x830AB878;
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

__attribute__((alias("__imp__sub_830AB888"))) PPC_WEAK_FUNC(sub_830AB888);
PPC_FUNC_IMPL(__imp__sub_830AB888) {
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
	// addi r5,r10,2688
	ctx.r5.s64 = ctx.r10.s64 + 2688;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-24868
	ctx.r4.s64 = ctx.r10.s64 + -24868;
	// addi r11,r11,-12168
	ctx.r11.s64 = ctx.r11.s64 + -12168;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,3012
	ctx.r3.s64 = ctx.r10.s64 + 3012;
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
	ctx.lr = 0x830AB8DC;
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

__attribute__((alias("__imp__sub_830AB8F0"))) PPC_WEAK_FUNC(sub_830AB8F0);
PPC_FUNC_IMPL(__imp__sub_830AB8F0) {
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
	// addi r4,r10,-23456
	ctx.r4.s64 = ctx.r10.s64 + -23456;
	// addi r11,r11,-12128
	ctx.r11.s64 = ctx.r11.s64 + -12128;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-732
	ctx.r3.s64 = ctx.r10.s64 + -732;
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
	ctx.lr = 0x830AB944;
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

__attribute__((alias("__imp__sub_830AB958"))) PPC_WEAK_FUNC(sub_830AB958);
PPC_FUNC_IMPL(__imp__sub_830AB958) {
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
	// addi r4,r10,-23388
	ctx.r4.s64 = ctx.r10.s64 + -23388;
	// addi r11,r11,-12108
	ctx.r11.s64 = ctx.r11.s64 + -12108;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,3300
	ctx.r3.s64 = ctx.r10.s64 + 3300;
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
	ctx.lr = 0x830AB9AC;
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

__attribute__((alias("__imp__sub_830AB9C0"))) PPC_WEAK_FUNC(sub_830AB9C0);
PPC_FUNC_IMPL(__imp__sub_830AB9C0) {
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
	// addi r4,r10,-23268
	ctx.r4.s64 = ctx.r10.s64 + -23268;
	// addi r11,r11,-12088
	ctx.r11.s64 = ctx.r11.s64 + -12088;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,5856
	ctx.r3.s64 = ctx.r10.s64 + 5856;
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
	ctx.lr = 0x830ABA10;
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

__attribute__((alias("__imp__sub_830ABA20"))) PPC_WEAK_FUNC(sub_830ABA20);
PPC_FUNC_IMPL(__imp__sub_830ABA20) {
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
	// addi r4,r10,-23216
	ctx.r4.s64 = ctx.r10.s64 + -23216;
	// addi r11,r11,-12048
	ctx.r11.s64 = ctx.r11.s64 + -12048;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,7008
	ctx.r3.s64 = ctx.r10.s64 + 7008;
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
	ctx.lr = 0x830ABA74;
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

__attribute__((alias("__imp__sub_830ABA88"))) PPC_WEAK_FUNC(sub_830ABA88);
PPC_FUNC_IMPL(__imp__sub_830ABA88) {
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
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-12624
	ctx.r4.s64 = ctx.r10.s64 + -12624;
	// addi r11,r11,-11968
	ctx.r11.s64 = ctx.r11.s64 + -11968;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,6468
	ctx.r3.s64 = ctx.r10.s64 + 6468;
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
	ctx.lr = 0x830ABAD8;
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

__attribute__((alias("__imp__sub_830ABAE8"))) PPC_WEAK_FUNC(sub_830ABAE8);
PPC_FUNC_IMPL(__imp__sub_830ABAE8) {
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
	// li r8,18
	ctx.r8.s64 = 18;
	// addi r5,r10,2688
	ctx.r5.s64 = ctx.r10.s64 + 2688;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-12588
	ctx.r4.s64 = ctx.r10.s64 + -12588;
	// addi r11,r11,-11768
	ctx.r11.s64 = ctx.r11.s64 + -11768;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,5244
	ctx.r3.s64 = ctx.r10.s64 + 5244;
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
	ctx.lr = 0x830ABB3C;
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

__attribute__((alias("__imp__sub_830ABB50"))) PPC_WEAK_FUNC(sub_830ABB50);
PPC_FUNC_IMPL(__imp__sub_830ABB50) {
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
	// li r8,17
	ctx.r8.s64 = 17;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-14676
	ctx.r4.s64 = ctx.r10.s64 + -14676;
	// addi r11,r11,-11408
	ctx.r11.s64 = ctx.r11.s64 + -11408;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3288
	ctx.r3.s64 = ctx.r10.s64 + -3288;
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
	ctx.lr = 0x830ABBA0;
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

__attribute__((alias("__imp__sub_830ABBB0"))) PPC_WEAK_FUNC(sub_830ABBB0);
PPC_FUNC_IMPL(__imp__sub_830ABBB0) {
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
	// li r8,25
	ctx.r8.s64 = 25;
	// addi r5,r10,3984
	ctx.r5.s64 = ctx.r10.s64 + 3984;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-14648
	ctx.r4.s64 = ctx.r10.s64 + -14648;
	// addi r11,r11,-11008
	ctx.r11.s64 = ctx.r11.s64 + -11008;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1380
	ctx.r3.s64 = ctx.r10.s64 + -1380;
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
	ctx.lr = 0x830ABC04;
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

__attribute__((alias("__imp__sub_830ABC18"))) PPC_WEAK_FUNC(sub_830ABC18);
PPC_FUNC_IMPL(__imp__sub_830ABC18) {
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
	// addi r4,r10,-10828
	ctx.r4.s64 = ctx.r10.s64 + -10828;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-2352
	ctx.r3.s64 = ctx.r10.s64 + -2352;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830ABC64;
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

__attribute__((alias("__imp__sub_830ABC78"))) PPC_WEAK_FUNC(sub_830ABC78);
PPC_FUNC_IMPL(__imp__sub_830ABC78) {
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
	// addi r5,r10,-2352
	ctx.r5.s64 = ctx.r10.s64 + -2352;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-12372
	ctx.r4.s64 = ctx.r10.s64 + -12372;
	// addi r11,r11,-10488
	ctx.r11.s64 = ctx.r11.s64 + -10488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-4008
	ctx.r3.s64 = ctx.r10.s64 + -4008;
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
	ctx.lr = 0x830ABCCC;
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

__attribute__((alias("__imp__sub_830ABCE0"))) PPC_WEAK_FUNC(sub_830ABCE0);
PPC_FUNC_IMPL(__imp__sub_830ABCE0) {
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
	// addi r4,r10,-10804
	ctx.r4.s64 = ctx.r10.s64 + -10804;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,996
	ctx.r3.s64 = ctx.r10.s64 + 996;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830ABD2C;
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

__attribute__((alias("__imp__sub_830ABD40"))) PPC_WEAK_FUNC(sub_830ABD40);
PPC_FUNC_IMPL(__imp__sub_830ABD40) {
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
	// addi r4,r10,-17496
	ctx.r4.s64 = ctx.r10.s64 + -17496;
	// addi r11,r11,-12028
	ctx.r11.s64 = ctx.r11.s64 + -12028;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1812
	ctx.r3.s64 = ctx.r10.s64 + -1812;
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
	ctx.lr = 0x830ABD90;
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

__attribute__((alias("__imp__sub_830ABDA0"))) PPC_WEAK_FUNC(sub_830ABDA0);
PPC_FUNC_IMPL(__imp__sub_830ABDA0) {
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
	// addi r5,r10,996
	ctx.r5.s64 = ctx.r10.s64 + 996;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-17452
	ctx.r4.s64 = ctx.r10.s64 + -17452;
	// addi r11,r11,-10388
	ctx.r11.s64 = ctx.r11.s64 + -10388;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,7044
	ctx.r3.s64 = ctx.r10.s64 + 7044;
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
	ctx.lr = 0x830ABDF4;
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

__attribute__((alias("__imp__sub_830ABE08"))) PPC_WEAK_FUNC(sub_830ABE08);
PPC_FUNC_IMPL(__imp__sub_830ABE08) {
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
	// addi r3,r10,-4476
	ctx.r3.s64 = ctx.r10.s64 + -4476;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830ABE54;
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

__attribute__((alias("__imp__sub_830ABE68"))) PPC_WEAK_FUNC(sub_830ABE68);
PPC_FUNC_IMPL(__imp__sub_830ABE68) {
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
	// addi r3,r10,-588
	ctx.r3.s64 = ctx.r10.s64 + -588;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830ABEB4;
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

__attribute__((alias("__imp__sub_830ABEC8"))) PPC_WEAK_FUNC(sub_830ABEC8);
PPC_FUNC_IMPL(__imp__sub_830ABEC8) {
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
	// addi r5,r10,-4476
	ctx.r5.s64 = ctx.r10.s64 + -4476;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-12000
	ctx.r4.s64 = ctx.r10.s64 + -12000;
	// addi r11,r11,-10288
	ctx.r11.s64 = ctx.r11.s64 + -10288;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,6432
	ctx.r3.s64 = ctx.r10.s64 + 6432;
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
	ctx.lr = 0x830ABF1C;
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

__attribute__((alias("__imp__sub_830ABF30"))) PPC_WEAK_FUNC(sub_830ABF30);
PPC_FUNC_IMPL(__imp__sub_830ABF30) {
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
	// addi r5,r10,-588
	ctx.r5.s64 = ctx.r10.s64 + -588;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-11964
	ctx.r4.s64 = ctx.r10.s64 + -11964;
	// addi r11,r11,-10208
	ctx.r11.s64 = ctx.r11.s64 + -10208;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1128
	ctx.r3.s64 = ctx.r10.s64 + -1128;
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
	ctx.lr = 0x830ABF84;
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

__attribute__((alias("__imp__sub_830ABF98"))) PPC_WEAK_FUNC(sub_830ABF98);
PPC_FUNC_IMPL(__imp__sub_830ABF98) {
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
	// addi r3,r10,5676
	ctx.r3.s64 = ctx.r10.s64 + 5676;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830ABFE4;
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

__attribute__((alias("__imp__sub_830ABFF8"))) PPC_WEAK_FUNC(sub_830ABFF8);
PPC_FUNC_IMPL(__imp__sub_830ABFF8) {
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
	// addi r5,r10,5676
	ctx.r5.s64 = ctx.r10.s64 + 5676;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-11528
	ctx.r4.s64 = ctx.r10.s64 + -11528;
	// addi r11,r11,-10128
	ctx.r11.s64 = ctx.r11.s64 + -10128;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-4620
	ctx.r3.s64 = ctx.r10.s64 + -4620;
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
	ctx.lr = 0x830AC04C;
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

__attribute__((alias("__imp__sub_830AC060"))) PPC_WEAK_FUNC(sub_830AC060);
PPC_FUNC_IMPL(__imp__sub_830AC060) {
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
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-16332
	ctx.r4.s64 = ctx.r10.s64 + -16332;
	// addi r11,r11,-9928
	ctx.r11.s64 = ctx.r11.s64 + -9928;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,5532
	ctx.r3.s64 = ctx.r10.s64 + 5532;
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
	ctx.lr = 0x830AC0B0;
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

__attribute__((alias("__imp__sub_830AC0C0"))) PPC_WEAK_FUNC(sub_830AC0C0);
PPC_FUNC_IMPL(__imp__sub_830AC0C0) {
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
	// addi r4,r10,-16288
	ctx.r4.s64 = ctx.r10.s64 + -16288;
	// addi r11,r11,-11068
	ctx.r11.s64 = ctx.r11.s64 + -11068;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,7548
	ctx.r3.s64 = ctx.r10.s64 + 7548;
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
	ctx.lr = 0x830AC110;
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

__attribute__((alias("__imp__sub_830AC120"))) PPC_WEAK_FUNC(sub_830AC120);
PPC_FUNC_IMPL(__imp__sub_830AC120) {
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
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-16256
	ctx.r4.s64 = ctx.r10.s64 + -16256;
	// addi r11,r11,-9728
	ctx.r11.s64 = ctx.r11.s64 + -9728;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-2964
	ctx.r3.s64 = ctx.r10.s64 + -2964;
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
	ctx.lr = 0x830AC170;
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

__attribute__((alias("__imp__sub_830AC180"))) PPC_WEAK_FUNC(sub_830AC180);
PPC_FUNC_IMPL(__imp__sub_830AC180) {
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
	// addi r4,r10,-16220
	ctx.r4.s64 = ctx.r10.s64 + -16220;
	// addi r11,r11,-10508
	ctx.r11.s64 = ctx.r11.s64 + -10508;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-4440
	ctx.r3.s64 = ctx.r10.s64 + -4440;
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
	ctx.lr = 0x830AC1D0;
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

__attribute__((alias("__imp__sub_830AC1E0"))) PPC_WEAK_FUNC(sub_830AC1E0);
PPC_FUNC_IMPL(__imp__sub_830AC1E0) {
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
	// addi r3,r10,-2856
	ctx.r3.s64 = ctx.r10.s64 + -2856;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830AC22C;
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

__attribute__((alias("__imp__sub_830AC240"))) PPC_WEAK_FUNC(sub_830AC240);
PPC_FUNC_IMPL(__imp__sub_830AC240) {
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
	// addi r5,r10,-2856
	ctx.r5.s64 = ctx.r10.s64 + -2856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-11360
	ctx.r4.s64 = ctx.r10.s64 + -11360;
	// addi r11,r11,-10348
	ctx.r11.s64 = ctx.r11.s64 + -10348;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,7152
	ctx.r3.s64 = ctx.r10.s64 + 7152;
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
	ctx.lr = 0x830AC294;
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

__attribute__((alias("__imp__sub_830AC2A8"))) PPC_WEAK_FUNC(sub_830AC2A8);
PPC_FUNC_IMPL(__imp__sub_830AC2A8) {
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
	// addi r4,r10,-14512
	ctx.r4.s64 = ctx.r10.s64 + -14512;
	// addi r11,r11,-9548
	ctx.r11.s64 = ctx.r11.s64 + -9548;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-48
	ctx.r3.s64 = ctx.r10.s64 + -48;
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
	ctx.lr = 0x830AC2F8;
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

__attribute__((alias("__imp__sub_830AC308"))) PPC_WEAK_FUNC(sub_830AC308);
PPC_FUNC_IMPL(__imp__sub_830AC308) {
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
	// addi r4,r10,-14464
	ctx.r4.s64 = ctx.r10.s64 + -14464;
	// addi r11,r11,-9488
	ctx.r11.s64 = ctx.r11.s64 + -9488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-336
	ctx.r3.s64 = ctx.r10.s64 + -336;
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
	ctx.lr = 0x830AC35C;
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

__attribute__((alias("__imp__sub_830AC370"))) PPC_WEAK_FUNC(sub_830AC370);
PPC_FUNC_IMPL(__imp__sub_830AC370) {
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
	// addi r4,r10,-17272
	ctx.r4.s64 = ctx.r10.s64 + -17272;
	// addi r11,r11,-9468
	ctx.r11.s64 = ctx.r11.s64 + -9468;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1560
	ctx.r3.s64 = ctx.r10.s64 + -1560;
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
	ctx.lr = 0x830AC3C0;
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

__attribute__((alias("__imp__sub_830AC3D0"))) PPC_WEAK_FUNC(sub_830AC3D0);
PPC_FUNC_IMPL(__imp__sub_830AC3D0) {
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
	// addi r5,r10,-336
	ctx.r5.s64 = ctx.r10.s64 + -336;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-17212
	ctx.r4.s64 = ctx.r10.s64 + -17212;
	// addi r11,r11,-9408
	ctx.r11.s64 = ctx.r11.s64 + -9408;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,96
	ctx.r3.s64 = ctx.r10.s64 + 96;
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
	ctx.lr = 0x830AC424;
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

__attribute__((alias("__imp__sub_830AC438"))) PPC_WEAK_FUNC(sub_830AC438);
PPC_FUNC_IMPL(__imp__sub_830AC438) {
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
	// addi r3,r10,7368
	ctx.r3.s64 = ctx.r10.s64 + 7368;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830AC484;
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

__attribute__((alias("__imp__sub_830AC498"))) PPC_WEAK_FUNC(sub_830AC498);
PPC_FUNC_IMPL(__imp__sub_830AC498) {
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
	// addi r5,r10,7368
	ctx.r5.s64 = ctx.r10.s64 + 7368;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-11032
	ctx.r4.s64 = ctx.r10.s64 + -11032;
	// addi r11,r11,-9328
	ctx.r11.s64 = ctx.r11.s64 + -9328;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,960
	ctx.r3.s64 = ctx.r10.s64 + 960;
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
	ctx.lr = 0x830AC4EC;
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

__attribute__((alias("__imp__sub_830AC500"))) PPC_WEAK_FUNC(sub_830AC500);
PPC_FUNC_IMPL(__imp__sub_830AC500) {
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
	// addi r4,r10,-13844
	ctx.r4.s64 = ctx.r10.s64 + -13844;
	// addi r11,r11,-9188
	ctx.r11.s64 = ctx.r11.s64 + -9188;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,4164
	ctx.r3.s64 = ctx.r10.s64 + 4164;
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
	ctx.lr = 0x830AC550;
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

__attribute__((alias("__imp__sub_830AC560"))) PPC_WEAK_FUNC(sub_830AC560);
PPC_FUNC_IMPL(__imp__sub_830AC560) {
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
	// addi r4,r10,-13828
	ctx.r4.s64 = ctx.r10.s64 + -13828;
	// addi r11,r11,-9388
	ctx.r11.s64 = ctx.r11.s64 + -9388;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,2220
	ctx.r3.s64 = ctx.r10.s64 + 2220;
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
	ctx.lr = 0x830AC5B4;
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

__attribute__((alias("__imp__sub_830AC5C8"))) PPC_WEAK_FUNC(sub_830AC5C8);
PPC_FUNC_IMPL(__imp__sub_830AC5C8) {
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
	// addi r4,r10,-13808
	ctx.r4.s64 = ctx.r10.s64 + -13808;
	// addi r11,r11,-9148
	ctx.r11.s64 = ctx.r11.s64 + -9148;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-2748
	ctx.r3.s64 = ctx.r10.s64 + -2748;
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
	ctx.lr = 0x830AC61C;
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

__attribute__((alias("__imp__sub_830AC630"))) PPC_WEAK_FUNC(sub_830AC630);
PPC_FUNC_IMPL(__imp__sub_830AC630) {
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
	// addi r3,r10,-1596
	ctx.r3.s64 = ctx.r10.s64 + -1596;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830AC67C;
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

__attribute__((alias("__imp__sub_830AC690"))) PPC_WEAK_FUNC(sub_830AC690);
PPC_FUNC_IMPL(__imp__sub_830AC690) {
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
	// addi r5,r10,-1596
	ctx.r5.s64 = ctx.r10.s64 + -1596;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-10860
	ctx.r4.s64 = ctx.r10.s64 + -10860;
	// addi r11,r11,-9088
	ctx.r11.s64 = ctx.r11.s64 + -9088;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,5784
	ctx.r3.s64 = ctx.r10.s64 + 5784;
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
	ctx.lr = 0x830AC6E4;
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

__attribute__((alias("__imp__sub_830AC6F8"))) PPC_WEAK_FUNC(sub_830AC6F8);
PPC_FUNC_IMPL(__imp__sub_830AC6F8) {
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
	// addi r4,r10,-10620
	ctx.r4.s64 = ctx.r10.s64 + -10620;
	// addi r11,r11,-9028
	ctx.r11.s64 = ctx.r11.s64 + -9028;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,4884
	ctx.r3.s64 = ctx.r10.s64 + 4884;
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
	ctx.lr = 0x830AC74C;
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

__attribute__((alias("__imp__sub_830AC760"))) PPC_WEAK_FUNC(sub_830AC760);
PPC_FUNC_IMPL(__imp__sub_830AC760) {
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
	// addi r5,r10,2688
	ctx.r5.s64 = ctx.r10.s64 + 2688;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,-9008
	ctx.r11.s64 = ctx.r11.s64 + -9008;
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
	// addi r3,r10,-4152
	ctx.r3.s64 = ctx.r10.s64 + -4152;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830AC7B0;
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

__attribute__((alias("__imp__sub_830AC7C0"))) PPC_WEAK_FUNC(sub_830AC7C0);
PPC_FUNC_IMPL(__imp__sub_830AC7C0) {
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
	// addi r5,r10,4884
	ctx.r5.s64 = ctx.r10.s64 + 4884;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-14192
	ctx.r4.s64 = ctx.r10.s64 + -14192;
	// addi r11,r11,-8988
	ctx.r11.s64 = ctx.r11.s64 + -8988;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,2760
	ctx.r3.s64 = ctx.r10.s64 + 2760;
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
	ctx.lr = 0x830AC814;
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

__attribute__((alias("__imp__sub_830AC828"))) PPC_WEAK_FUNC(sub_830AC828);
PPC_FUNC_IMPL(__imp__sub_830AC828) {
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
	// addi r11,r11,-5872
	ctx.r11.s64 = ctx.r11.s64 + -5872;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,15468
	ctx.r3.s64 = ctx.r10.s64 + 15468;
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
	ctx.lr = 0x830AC878;
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

__attribute__((alias("__imp__sub_830AC888"))) PPC_WEAK_FUNC(sub_830AC888);
PPC_FUNC_IMPL(__imp__sub_830AC888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,16236
	ctx.r10.s64 = ctx.r10.s64 + 16236;
	// lwz r11,-5772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5772);
	// stw r11,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AC8A0"))) PPC_WEAK_FUNC(sub_830AC8A0);
PPC_FUNC_IMPL(__imp__sub_830AC8A0) {
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
	// addi r9,r11,32280
	ctx.r9.s64 = ctx.r11.s64 + 32280;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-3680
	ctx.r4.s64 = ctx.r10.s64 + -3680;
	// addi r11,r11,16236
	ctx.r11.s64 = ctx.r11.s64 + 16236;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,12948
	ctx.r3.s64 = ctx.r10.s64 + 12948;
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
	ctx.lr = 0x830AC8F8;
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

__attribute__((alias("__imp__sub_830AC908"))) PPC_WEAK_FUNC(sub_830AC908);
PPC_FUNC_IMPL(__imp__sub_830AC908) {
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
	// addi r11,r11,-5768
	ctx.r11.s64 = ctx.r11.s64 + -5768;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,13056
	ctx.r3.s64 = ctx.r10.s64 + 13056;
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
	ctx.lr = 0x830AC958;
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

__attribute__((alias("__imp__sub_830AC968"))) PPC_WEAK_FUNC(sub_830AC968);
PPC_FUNC_IMPL(__imp__sub_830AC968) {
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
	// addi r11,r11,-5728
	ctx.r11.s64 = ctx.r11.s64 + -5728;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,9420
	ctx.r3.s64 = ctx.r10.s64 + 9420;
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
	ctx.lr = 0x830AC9B8;
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

__attribute__((alias("__imp__sub_830AC9C8"))) PPC_WEAK_FUNC(sub_830AC9C8);
PPC_FUNC_IMPL(__imp__sub_830AC9C8) {
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
	// addi r5,r10,15180
	ctx.r5.s64 = ctx.r10.s64 + 15180;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-8296
	ctx.r4.s64 = ctx.r10.s64 + -8296;
	// addi r11,r11,-5688
	ctx.r11.s64 = ctx.r11.s64 + -5688;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,12804
	ctx.r3.s64 = ctx.r10.s64 + 12804;
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
	ctx.lr = 0x830ACA1C;
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

__attribute__((alias("__imp__sub_830ACA30"))) PPC_WEAK_FUNC(sub_830ACA30);
PPC_FUNC_IMPL(__imp__sub_830ACA30) {
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
	// addi r11,r11,-5608
	ctx.r11.s64 = ctx.r11.s64 + -5608;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,12660
	ctx.r3.s64 = ctx.r10.s64 + 12660;
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
	ctx.lr = 0x830ACA80;
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

__attribute__((alias("__imp__sub_830ACA90"))) PPC_WEAK_FUNC(sub_830ACA90);
PPC_FUNC_IMPL(__imp__sub_830ACA90) {
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
	// addi r5,r10,12804
	ctx.r5.s64 = ctx.r10.s64 + 12804;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,700
	ctx.r4.s64 = ctx.r10.s64 + 700;
	// addi r11,r11,-5488
	ctx.r11.s64 = ctx.r11.s64 + -5488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,11940
	ctx.r3.s64 = ctx.r10.s64 + 11940;
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
	ctx.lr = 0x830ACAE4;
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

__attribute__((alias("__imp__sub_830ACAF8"))) PPC_WEAK_FUNC(sub_830ACAF8);
PPC_FUNC_IMPL(__imp__sub_830ACAF8) {
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
	// addi r5,r10,12804
	ctx.r5.s64 = ctx.r10.s64 + 12804;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,736
	ctx.r4.s64 = ctx.r10.s64 + 736;
	// addi r11,r11,-5508
	ctx.r11.s64 = ctx.r11.s64 + -5508;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,17160
	ctx.r3.s64 = ctx.r10.s64 + 17160;
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
	ctx.lr = 0x830ACB4C;
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

__attribute__((alias("__imp__sub_830ACB60"))) PPC_WEAK_FUNC(sub_830ACB60);
PPC_FUNC_IMPL(__imp__sub_830ACB60) {
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
	// addi r11,r11,-5328
	ctx.r11.s64 = ctx.r11.s64 + -5328;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,14496
	ctx.r3.s64 = ctx.r10.s64 + 14496;
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
	ctx.lr = 0x830ACBB0;
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

__attribute__((alias("__imp__sub_830ACBC0"))) PPC_WEAK_FUNC(sub_830ACBC0);
PPC_FUNC_IMPL(__imp__sub_830ACBC0) {
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
	// addi r5,r10,12804
	ctx.r5.s64 = ctx.r10.s64 + 12804;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,816
	ctx.r4.s64 = ctx.r10.s64 + 816;
	// addi r11,r11,-5224
	ctx.r11.s64 = ctx.r11.s64 + -5224;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,11220
	ctx.r3.s64 = ctx.r10.s64 + 11220;
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
	ctx.lr = 0x830ACC14;
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

__attribute__((alias("__imp__sub_830ACC28"))) PPC_WEAK_FUNC(sub_830ACC28);
PPC_FUNC_IMPL(__imp__sub_830ACC28) {
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
	// addi r11,r11,-5348
	ctx.r11.s64 = ctx.r11.s64 + -5348;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,18132
	ctx.r3.s64 = ctx.r10.s64 + 18132;
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
	ctx.lr = 0x830ACC78;
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

__attribute__((alias("__imp__sub_830ACC88"))) PPC_WEAK_FUNC(sub_830ACC88);
PPC_FUNC_IMPL(__imp__sub_830ACC88) {
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
	// addi r11,r11,-5064
	ctx.r11.s64 = ctx.r11.s64 + -5064;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,12696
	ctx.r3.s64 = ctx.r10.s64 + 12696;
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
	ctx.lr = 0x830ACCD8;
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

__attribute__((alias("__imp__sub_830ACCE8"))) PPC_WEAK_FUNC(sub_830ACCE8);
PPC_FUNC_IMPL(__imp__sub_830ACCE8) {
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
	// addi r9,r10,32332
	ctx.r9.s64 = ctx.r10.s64 + 32332;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r5,r10,15180
	ctx.r5.s64 = ctx.r10.s64 + 15180;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-5084
	ctx.r11.s64 = ctx.r11.s64 + -5084;
	// addi r4,r10,868
	ctx.r4.s64 = ctx.r10.s64 + 868;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,12336
	ctx.r3.s64 = ctx.r10.s64 + 12336;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830ACD40;
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

__attribute__((alias("__imp__sub_830ACD50"))) PPC_WEAK_FUNC(sub_830ACD50);
PPC_FUNC_IMPL(__imp__sub_830ACD50) {
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
	// addi r11,r11,-4984
	ctx.r11.s64 = ctx.r11.s64 + -4984;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,8376
	ctx.r3.s64 = ctx.r10.s64 + 8376;
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
	ctx.lr = 0x830ACDA0;
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

__attribute__((alias("__imp__sub_830ACDB0"))) PPC_WEAK_FUNC(sub_830ACDB0);
PPC_FUNC_IMPL(__imp__sub_830ACDB0) {
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
	// addi r11,r11,-4920
	ctx.r11.s64 = ctx.r11.s64 + -4920;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,8808
	ctx.r3.s64 = ctx.r10.s64 + 8808;
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
	ctx.lr = 0x830ACE00;
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

__attribute__((alias("__imp__sub_830ACE10"))) PPC_WEAK_FUNC(sub_830ACE10);
PPC_FUNC_IMPL(__imp__sub_830ACE10) {
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
	// addi r11,r11,-4800
	ctx.r11.s64 = ctx.r11.s64 + -4800;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,19824
	ctx.r3.s64 = ctx.r10.s64 + 19824;
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
	ctx.lr = 0x830ACE60;
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

__attribute__((alias("__imp__sub_830ACE70"))) PPC_WEAK_FUNC(sub_830ACE70);
PPC_FUNC_IMPL(__imp__sub_830ACE70) {
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
	// addi r5,r10,15180
	ctx.r5.s64 = ctx.r10.s64 + 15180;
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
	// addi r3,r10,9096
	ctx.r3.s64 = ctx.r10.s64 + 9096;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830ACEBC;
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

__attribute__((alias("__imp__sub_830ACED0"))) PPC_WEAK_FUNC(sub_830ACED0);
PPC_FUNC_IMPL(__imp__sub_830ACED0) {
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
	// addi r5,r10,9096
	ctx.r5.s64 = ctx.r10.s64 + 9096;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,1012
	ctx.r4.s64 = ctx.r10.s64 + 1012;
	// addi r11,r11,-4680
	ctx.r11.s64 = ctx.r11.s64 + -4680;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,15288
	ctx.r3.s64 = ctx.r10.s64 + 15288;
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
	ctx.lr = 0x830ACF24;
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

__attribute__((alias("__imp__sub_830ACF38"))) PPC_WEAK_FUNC(sub_830ACF38);
PPC_FUNC_IMPL(__imp__sub_830ACF38) {
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
	// addi r11,r11,-4600
	ctx.r11.s64 = ctx.r11.s64 + -4600;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,8052
	ctx.r3.s64 = ctx.r10.s64 + 8052;
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
	ctx.lr = 0x830ACF88;
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

__attribute__((alias("__imp__sub_830ACF98"))) PPC_WEAK_FUNC(sub_830ACF98);
PPC_FUNC_IMPL(__imp__sub_830ACF98) {
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
	// addi r11,r11,-4560
	ctx.r11.s64 = ctx.r11.s64 + -4560;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,13560
	ctx.r3.s64 = ctx.r10.s64 + 13560;
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
	ctx.lr = 0x830ACFE8;
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

__attribute__((alias("__imp__sub_830ACFF8"))) PPC_WEAK_FUNC(sub_830ACFF8);
PPC_FUNC_IMPL(__imp__sub_830ACFF8) {
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
	// addi r11,r11,-4480
	ctx.r11.s64 = ctx.r11.s64 + -4480;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,17988
	ctx.r3.s64 = ctx.r10.s64 + 17988;
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
	ctx.lr = 0x830AD048;
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

__attribute__((alias("__imp__sub_830AD058"))) PPC_WEAK_FUNC(sub_830AD058);
PPC_FUNC_IMPL(__imp__sub_830AD058) {
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
	// addi r9,r10,32376
	ctx.r9.s64 = ctx.r10.s64 + 32376;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,25592
	ctx.r4.s64 = ctx.r10.s64 + 25592;
	// addi r11,r11,-4400
	ctx.r11.s64 = ctx.r11.s64 + -4400;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,15936
	ctx.r3.s64 = ctx.r10.s64 + 15936;
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
	ctx.lr = 0x830AD0AC;
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

__attribute__((alias("__imp__sub_830AD0C0"))) PPC_WEAK_FUNC(sub_830AD0C0);
PPC_FUNC_IMPL(__imp__sub_830AD0C0) {
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
	// li r8,12
	ctx.r8.s64 = 12;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,25616
	ctx.r4.s64 = ctx.r10.s64 + 25616;
	// addi r11,r11,-4176
	ctx.r11.s64 = ctx.r11.s64 + -4176;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,7800
	ctx.r3.s64 = ctx.r10.s64 + 7800;
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
	ctx.lr = 0x830AD110;
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

__attribute__((alias("__imp__sub_830AD120"))) PPC_WEAK_FUNC(sub_830AD120);
PPC_FUNC_IMPL(__imp__sub_830AD120) {
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
	// addi r9,r10,32396
	ctx.r9.s64 = ctx.r10.s64 + 32396;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,25636
	ctx.r4.s64 = ctx.r10.s64 + 25636;
	// addi r11,r11,-3936
	ctx.r11.s64 = ctx.r11.s64 + -3936;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,18816
	ctx.r3.s64 = ctx.r10.s64 + 18816;
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
	ctx.lr = 0x830AD174;
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

__attribute__((alias("__imp__sub_830AD188"))) PPC_WEAK_FUNC(sub_830AD188);
PPC_FUNC_IMPL(__imp__sub_830AD188) {
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
	// addi r5,r10,16116
	ctx.r5.s64 = ctx.r10.s64 + 16116;
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
	// addi r3,r10,19464
	ctx.r3.s64 = ctx.r10.s64 + 19464;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830AD1D4;
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

__attribute__((alias("__imp__sub_830AD1E8"))) PPC_WEAK_FUNC(sub_830AD1E8);
PPC_FUNC_IMPL(__imp__sub_830AD1E8) {
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
	// addi r8,r10,-3856
	ctx.r8.s64 = ctx.r10.s64 + -3856;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r10,19464
	ctx.r5.s64 = ctx.r10.s64 + 19464;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,32408
	ctx.r11.s64 = ctx.r11.s64 + 32408;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,25700
	ctx.r4.s64 = ctx.r10.s64 + 25700;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,12552
	ctx.r3.s64 = ctx.r10.s64 + 12552;
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
	ctx.lr = 0x830AD244;
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

__attribute__((alias("__imp__sub_830AD258"))) PPC_WEAK_FUNC(sub_830AD258);
PPC_FUNC_IMPL(__imp__sub_830AD258) {
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
	// addi r5,r10,12552
	ctx.r5.s64 = ctx.r10.s64 + 12552;
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
	// addi r3,r10,10680
	ctx.r3.s64 = ctx.r10.s64 + 10680;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830AD2A4;
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

__attribute__((alias("__imp__sub_830AD2B8"))) PPC_WEAK_FUNC(sub_830AD2B8);
PPC_FUNC_IMPL(__imp__sub_830AD2B8) {
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
	// addi r5,r10,15180
	ctx.r5.s64 = ctx.r10.s64 + 15180;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-8324
	ctx.r4.s64 = ctx.r10.s64 + -8324;
	// addi r11,r11,-3916
	ctx.r11.s64 = ctx.r11.s64 + -3916;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,9672
	ctx.r3.s64 = ctx.r10.s64 + 9672;
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
	ctx.lr = 0x830AD30C;
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

__attribute__((alias("__imp__sub_830AD320"))) PPC_WEAK_FUNC(sub_830AD320);
PPC_FUNC_IMPL(__imp__sub_830AD320) {
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
	// addi r8,r10,-3736
	ctx.r8.s64 = ctx.r10.s64 + -3736;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r10,19464
	ctx.r5.s64 = ctx.r10.s64 + 19464;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,32440
	ctx.r11.s64 = ctx.r11.s64 + 32440;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,-8344
	ctx.r4.s64 = ctx.r10.s64 + -8344;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,10464
	ctx.r3.s64 = ctx.r10.s64 + 10464;
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
	ctx.lr = 0x830AD37C;
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

__attribute__((alias("__imp__sub_830AD390"))) PPC_WEAK_FUNC(sub_830AD390);
PPC_FUNC_IMPL(__imp__sub_830AD390) {
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
	// addi r11,r11,-3616
	ctx.r11.s64 = ctx.r11.s64 + -3616;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,14064
	ctx.r3.s64 = ctx.r10.s64 + 14064;
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
	ctx.lr = 0x830AD3E0;
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

__attribute__((alias("__imp__sub_830AD3F0"))) PPC_WEAK_FUNC(sub_830AD3F0);
PPC_FUNC_IMPL(__imp__sub_830AD3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,15736
	ctx.r10.s64 = ctx.r10.s64 + 15736;
	// lwz r11,-3556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3556);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AD408"))) PPC_WEAK_FUNC(sub_830AD408);
PPC_FUNC_IMPL(__imp__sub_830AD408) {
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
	// addi r9,r11,32492
	ctx.r9.s64 = ctx.r11.s64 + 32492;
	// addi r5,r10,19464
	ctx.r5.s64 = ctx.r10.s64 + 19464;
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
	// addi r11,r11,15736
	ctx.r11.s64 = ctx.r11.s64 + 15736;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,14532
	ctx.r3.s64 = ctx.r10.s64 + 14532;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830AD464;
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

__attribute__((alias("__imp__sub_830AD478"))) PPC_WEAK_FUNC(sub_830AD478);
PPC_FUNC_IMPL(__imp__sub_830AD478) {
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
	// addi r5,r10,19464
	ctx.r5.s64 = ctx.r10.s64 + 19464;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,25916
	ctx.r4.s64 = ctx.r10.s64 + 25916;
	// addi r11,r11,-3552
	ctx.r11.s64 = ctx.r11.s64 + -3552;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,16908
	ctx.r3.s64 = ctx.r10.s64 + 16908;
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
	ctx.lr = 0x830AD4CC;
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

__attribute__((alias("__imp__sub_830AD4E0"))) PPC_WEAK_FUNC(sub_830AD4E0);
PPC_FUNC_IMPL(__imp__sub_830AD4E0) {
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
	// addi r5,r10,19464
	ctx.r5.s64 = ctx.r10.s64 + 19464;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,25940
	ctx.r4.s64 = ctx.r10.s64 + 25940;
	// addi r11,r11,-3512
	ctx.r11.s64 = ctx.r11.s64 + -3512;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,14676
	ctx.r3.s64 = ctx.r10.s64 + 14676;
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
	ctx.lr = 0x830AD534;
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

__attribute__((alias("__imp__sub_830AD548"))) PPC_WEAK_FUNC(sub_830AD548);
PPC_FUNC_IMPL(__imp__sub_830AD548) {
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
	// addi r5,r10,16116
	ctx.r5.s64 = ctx.r10.s64 + 16116;
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
	// addi r3,r10,12624
	ctx.r3.s64 = ctx.r10.s64 + 12624;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830AD594;
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

__attribute__((alias("__imp__sub_830AD5A8"))) PPC_WEAK_FUNC(sub_830AD5A8);
PPC_FUNC_IMPL(__imp__sub_830AD5A8) {
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
	// addi r8,r10,-3472
	ctx.r8.s64 = ctx.r10.s64 + -3472;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r10,12624
	ctx.r5.s64 = ctx.r10.s64 + 12624;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,32560
	ctx.r11.s64 = ctx.r11.s64 + 32560;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,-9428
	ctx.r4.s64 = ctx.r10.s64 + -9428;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,13416
	ctx.r3.s64 = ctx.r10.s64 + 13416;
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
	ctx.lr = 0x830AD604;
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

__attribute__((alias("__imp__sub_830AD618"))) PPC_WEAK_FUNC(sub_830AD618);
PPC_FUNC_IMPL(__imp__sub_830AD618) {
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
	// addi r5,r10,12624
	ctx.r5.s64 = ctx.r10.s64 + 12624;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,26000
	ctx.r4.s64 = ctx.r10.s64 + 26000;
	// addi r11,r11,-3492
	ctx.r11.s64 = ctx.r11.s64 + -3492;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,18708
	ctx.r3.s64 = ctx.r10.s64 + 18708;
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
	ctx.lr = 0x830AD66C;
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

__attribute__((alias("__imp__sub_830AD680"))) PPC_WEAK_FUNC(sub_830AD680);
PPC_FUNC_IMPL(__imp__sub_830AD680) {
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
	// addi r5,r10,12624
	ctx.r5.s64 = ctx.r10.s64 + 12624;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,26032
	ctx.r4.s64 = ctx.r10.s64 + 26032;
	// addi r11,r11,-3128
	ctx.r11.s64 = ctx.r11.s64 + -3128;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,10824
	ctx.r3.s64 = ctx.r10.s64 + 10824;
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
	ctx.lr = 0x830AD6D4;
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

__attribute__((alias("__imp__sub_830AD6E8"))) PPC_WEAK_FUNC(sub_830AD6E8);
PPC_FUNC_IMPL(__imp__sub_830AD6E8) {
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
	// addi r5,r10,12624
	ctx.r5.s64 = ctx.r10.s64 + 12624;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-8380
	ctx.r4.s64 = ctx.r10.s64 + -8380;
	// addi r11,r11,-2984
	ctx.r11.s64 = ctx.r11.s64 + -2984;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,10176
	ctx.r3.s64 = ctx.r10.s64 + 10176;
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
	ctx.lr = 0x830AD73C;
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

__attribute__((alias("__imp__sub_830AD750"))) PPC_WEAK_FUNC(sub_830AD750);
PPC_FUNC_IMPL(__imp__sub_830AD750) {
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
	// addi r5,r10,12624
	ctx.r5.s64 = ctx.r10.s64 + 12624;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,26052
	ctx.r4.s64 = ctx.r10.s64 + 26052;
	// addi r11,r11,-2784
	ctx.r11.s64 = ctx.r11.s64 + -2784;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,15000
	ctx.r3.s64 = ctx.r10.s64 + 15000;
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
	ctx.lr = 0x830AD7A4;
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

__attribute__((alias("__imp__sub_830AD7B8"))) PPC_WEAK_FUNC(sub_830AD7B8);
PPC_FUNC_IMPL(__imp__sub_830AD7B8) {
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
	// addi r5,r10,12624
	ctx.r5.s64 = ctx.r10.s64 + 12624;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,26072
	ctx.r4.s64 = ctx.r10.s64 + 26072;
	// addi r11,r11,-2564
	ctx.r11.s64 = ctx.r11.s64 + -2564;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,14604
	ctx.r3.s64 = ctx.r10.s64 + 14604;
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
	ctx.lr = 0x830AD80C;
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

__attribute__((alias("__imp__sub_830AD820"))) PPC_WEAK_FUNC(sub_830AD820);
PPC_FUNC_IMPL(__imp__sub_830AD820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,15096
	ctx.r10.s64 = ctx.r10.s64 + 15096;
	// lwz r11,-3132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3132);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AD838"))) PPC_WEAK_FUNC(sub_830AD838);
PPC_FUNC_IMPL(__imp__sub_830AD838) {
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
	// addi r9,r11,32652
	ctx.r9.s64 = ctx.r11.s64 + 32652;
	// addi r5,r10,12624
	ctx.r5.s64 = ctx.r10.s64 + 12624;
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
	// addi r11,r11,15096
	ctx.r11.s64 = ctx.r11.s64 + 15096;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,11544
	ctx.r3.s64 = ctx.r10.s64 + 11544;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830AD894;
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

__attribute__((alias("__imp__sub_830AD8A8"))) PPC_WEAK_FUNC(sub_830AD8A8);
PPC_FUNC_IMPL(__imp__sub_830AD8A8) {
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
	// addi r8,r10,-2524
	ctx.r8.s64 = ctx.r10.s64 + -2524;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r10,15180
	ctx.r5.s64 = ctx.r10.s64 + 15180;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,32756
	ctx.r11.s64 = ctx.r11.s64 + 32756;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,26300
	ctx.r4.s64 = ctx.r10.s64 + 26300;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,19500
	ctx.r3.s64 = ctx.r10.s64 + 19500;
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
	ctx.lr = 0x830AD904;
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

__attribute__((alias("__imp__sub_830AD918"))) PPC_WEAK_FUNC(sub_830AD918);
PPC_FUNC_IMPL(__imp__sub_830AD918) {
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
	// addi r11,r11,-2464
	ctx.r11.s64 = ctx.r11.s64 + -2464;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,16368
	ctx.r3.s64 = ctx.r10.s64 + 16368;
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
	ctx.lr = 0x830AD968;
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

__attribute__((alias("__imp__sub_830AD978"))) PPC_WEAK_FUNC(sub_830AD978);
PPC_FUNC_IMPL(__imp__sub_830AD978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,16296
	ctx.r10.s64 = ctx.r10.s64 + 16296;
	// lwz r11,-2988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2988);
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AD990"))) PPC_WEAK_FUNC(sub_830AD990);
PPC_FUNC_IMPL(__imp__sub_830AD990) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// addi r9,r11,-32744
	ctx.r9.s64 = ctx.r11.s64 + -32744;
	// addi r5,r10,12624
	ctx.r5.s64 = ctx.r10.s64 + 12624;
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
	// addi r11,r11,16296
	ctx.r11.s64 = ctx.r11.s64 + 16296;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,13128
	ctx.r3.s64 = ctx.r10.s64 + 13128;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830AD9EC;
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

__attribute__((alias("__imp__sub_830ADA00"))) PPC_WEAK_FUNC(sub_830ADA00);
PPC_FUNC_IMPL(__imp__sub_830ADA00) {
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
	// addi r5,r10,12624
	ctx.r5.s64 = ctx.r10.s64 + 12624;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-9236
	ctx.r4.s64 = ctx.r10.s64 + -9236;
	// addi r11,r11,-2344
	ctx.r11.s64 = ctx.r11.s64 + -2344;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,11652
	ctx.r3.s64 = ctx.r10.s64 + 11652;
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
	ctx.lr = 0x830ADA54;
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

__attribute__((alias("__imp__sub_830ADA68"))) PPC_WEAK_FUNC(sub_830ADA68);
PPC_FUNC_IMPL(__imp__sub_830ADA68) {
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
	// addi r8,r10,-2304
	ctx.r8.s64 = ctx.r10.s64 + -2304;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r10,12624
	ctx.r5.s64 = ctx.r10.s64 + 12624;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,-32664
	ctx.r11.s64 = ctx.r11.s64 + -32664;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,32016
	ctx.r4.s64 = ctx.r10.s64 + 32016;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,14316
	ctx.r3.s64 = ctx.r10.s64 + 14316;
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
	ctx.lr = 0x830ADAC4;
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

__attribute__((alias("__imp__sub_830ADAD8"))) PPC_WEAK_FUNC(sub_830ADAD8);
PPC_FUNC_IMPL(__imp__sub_830ADAD8) {
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
	// addi r11,r11,-2200
	ctx.r11.s64 = ctx.r11.s64 + -2200;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,9384
	ctx.r3.s64 = ctx.r10.s64 + 9384;
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
	ctx.lr = 0x830ADB28;
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

__attribute__((alias("__imp__sub_830ADB38"))) PPC_WEAK_FUNC(sub_830ADB38);
PPC_FUNC_IMPL(__imp__sub_830ADB38) {
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
	// addi r8,r10,-1920
	ctx.r8.s64 = ctx.r10.s64 + -1920;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r10,12624
	ctx.r5.s64 = ctx.r10.s64 + 12624;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,-32640
	ctx.r11.s64 = ctx.r11.s64 + -32640;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,-9360
	ctx.r4.s64 = ctx.r10.s64 + -9360;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,15504
	ctx.r3.s64 = ctx.r10.s64 + 15504;
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
	ctx.lr = 0x830ADB94;
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

__attribute__((alias("__imp__sub_830ADBA8"))) PPC_WEAK_FUNC(sub_830ADBA8);
PPC_FUNC_IMPL(__imp__sub_830ADBA8) {
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
	// addi r5,r10,12624
	ctx.r5.s64 = ctx.r10.s64 + 12624;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-9332
	ctx.r4.s64 = ctx.r10.s64 + -9332;
	// addi r11,r11,-2804
	ctx.r11.s64 = ctx.r11.s64 + -2804;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,8664
	ctx.r3.s64 = ctx.r10.s64 + 8664;
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
	ctx.lr = 0x830ADBFC;
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

__attribute__((alias("__imp__sub_830ADC10"))) PPC_WEAK_FUNC(sub_830ADC10);
PPC_FUNC_IMPL(__imp__sub_830ADC10) {
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
	// addi r5,r10,10176
	ctx.r5.s64 = ctx.r10.s64 + 10176;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-8400
	ctx.r4.s64 = ctx.r10.s64 + -8400;
	// addi r11,r11,-1720
	ctx.r11.s64 = ctx.r11.s64 + -1720;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,19284
	ctx.r3.s64 = ctx.r10.s64 + 19284;
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
	ctx.lr = 0x830ADC64;
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

__attribute__((alias("__imp__sub_830ADC78"))) PPC_WEAK_FUNC(sub_830ADC78);
PPC_FUNC_IMPL(__imp__sub_830ADC78) {
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
	// addi r5,r10,12624
	ctx.r5.s64 = ctx.r10.s64 + 12624;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-28020
	ctx.r4.s64 = ctx.r10.s64 + -28020;
	// addi r11,r11,-2484
	ctx.r11.s64 = ctx.r11.s64 + -2484;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,9780
	ctx.r3.s64 = ctx.r10.s64 + 9780;
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
	ctx.lr = 0x830ADCCC;
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

__attribute__((alias("__imp__sub_830ADCE0"))) PPC_WEAK_FUNC(sub_830ADCE0);
PPC_FUNC_IMPL(__imp__sub_830ADCE0) {
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
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r10,-32564
	ctx.r9.s64 = ctx.r10.s64 + -32564;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r5,r10,15180
	ctx.r5.s64 = ctx.r10.s64 + 15180;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-1940
	ctx.r11.s64 = ctx.r11.s64 + -1940;
	// addi r4,r10,26540
	ctx.r4.s64 = ctx.r10.s64 + 26540;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,16116
	ctx.r3.s64 = ctx.r10.s64 + 16116;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830ADD38;
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

__attribute__((alias("__imp__sub_830ADD48"))) PPC_WEAK_FUNC(sub_830ADD48);
PPC_FUNC_IMPL(__imp__sub_830ADD48) {
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
	// addi r11,r11,-1600
	ctx.r11.s64 = ctx.r11.s64 + -1600;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,14640
	ctx.r3.s64 = ctx.r10.s64 + 14640;
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
	ctx.lr = 0x830ADD98;
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

__attribute__((alias("__imp__sub_830ADDA8"))) PPC_WEAK_FUNC(sub_830ADDA8);
PPC_FUNC_IMPL(__imp__sub_830ADDA8) {
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
	// addi r11,r11,-1540
	ctx.r11.s64 = ctx.r11.s64 + -1540;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,16620
	ctx.r3.s64 = ctx.r10.s64 + 16620;
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
	ctx.lr = 0x830ADDF8;
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

__attribute__((alias("__imp__sub_830ADE08"))) PPC_WEAK_FUNC(sub_830ADE08);
PPC_FUNC_IMPL(__imp__sub_830ADE08) {
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
	// addi r8,r10,-1480
	ctx.r8.s64 = ctx.r10.s64 + -1480;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r10,19464
	ctx.r5.s64 = ctx.r10.s64 + 19464;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,-32552
	ctx.r11.s64 = ctx.r11.s64 + -32552;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,-8960
	ctx.r4.s64 = ctx.r10.s64 + -8960;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,18888
	ctx.r3.s64 = ctx.r10.s64 + 18888;
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
	ctx.lr = 0x830ADE64;
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

__attribute__((alias("__imp__sub_830ADE78"))) PPC_WEAK_FUNC(sub_830ADE78);
PPC_FUNC_IMPL(__imp__sub_830ADE78) {
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
	// addi r11,r11,-1240
	ctx.r11.s64 = ctx.r11.s64 + -1240;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,15720
	ctx.r3.s64 = ctx.r10.s64 + 15720;
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
	ctx.lr = 0x830ADEC8;
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

__attribute__((alias("__imp__sub_830ADED8"))) PPC_WEAK_FUNC(sub_830ADED8);
PPC_FUNC_IMPL(__imp__sub_830ADED8) {
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
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-32468
	ctx.r9.s64 = ctx.r10.s64 + -32468;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,15180
	ctx.r5.s64 = ctx.r10.s64 + 15180;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r4,r10,-28000
	ctx.r4.s64 = ctx.r10.s64 + -28000;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,7944
	ctx.r3.s64 = ctx.r10.s64 + 7944;
	// li r10,1
	ctx.r10.s64 = 1;
	// bl 0x82db4000
	ctx.lr = 0x830ADF28;
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

__attribute__((alias("__imp__sub_830ADF38"))) PPC_WEAK_FUNC(sub_830ADF38);
PPC_FUNC_IMPL(__imp__sub_830ADF38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,15696
	ctx.r10.s64 = ctx.r10.s64 + 15696;
	// lwz r11,-1176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1176);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ADF50"))) PPC_WEAK_FUNC(sub_830ADF50);
PPC_FUNC_IMPL(__imp__sub_830ADF50) {
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
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r9,r10,-32440
	ctx.r9.s64 = ctx.r10.s64 + -32440;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r5,r10,7944
	ctx.r5.s64 = ctx.r10.s64 + 7944;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,15696
	ctx.r11.s64 = ctx.r11.s64 + 15696;
	// addi r4,r10,-27980
	ctx.r4.s64 = ctx.r10.s64 + -27980;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,14028
	ctx.r3.s64 = ctx.r10.s64 + 14028;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830ADFA8;
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

__attribute__((alias("__imp__sub_830ADFB8"))) PPC_WEAK_FUNC(sub_830ADFB8);
PPC_FUNC_IMPL(__imp__sub_830ADFB8) {
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
	// addi r11,r11,-1168
	ctx.r11.s64 = ctx.r11.s64 + -1168;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,17484
	ctx.r3.s64 = ctx.r10.s64 + 17484;
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
	ctx.lr = 0x830AE008;
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

__attribute__((alias("__imp__sub_830AE018"))) PPC_WEAK_FUNC(sub_830AE018);
PPC_FUNC_IMPL(__imp__sub_830AE018) {
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
	// addi r11,r11,-1088
	ctx.r11.s64 = ctx.r11.s64 + -1088;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,15324
	ctx.r3.s64 = ctx.r10.s64 + 15324;
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
	ctx.lr = 0x830AE068;
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

__attribute__((alias("__imp__sub_830AE078"))) PPC_WEAK_FUNC(sub_830AE078);
PPC_FUNC_IMPL(__imp__sub_830AE078) {
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
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r7,r10,-1048
	ctx.r7.s64 = ctx.r10.s64 + -1048;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r10,26728
	ctx.r4.s64 = ctx.r10.s64 + 26728;
	// addi r11,r11,-32428
	ctx.r11.s64 = ctx.r11.s64 + -32428;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,10860
	ctx.r3.s64 = ctx.r10.s64 + 10860;
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
	ctx.lr = 0x830AE0D0;
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

__attribute__((alias("__imp__sub_830AE0E0"))) PPC_WEAK_FUNC(sub_830AE0E0);
PPC_FUNC_IMPL(__imp__sub_830AE0E0) {
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
	// addi r3,r10,16404
	ctx.r3.s64 = ctx.r10.s64 + 16404;
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
	ctx.lr = 0x830AE128;
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

__attribute__((alias("__imp__sub_830AE138"))) PPC_WEAK_FUNC(sub_830AE138);
PPC_FUNC_IMPL(__imp__sub_830AE138) {
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
	// addi r5,r10,16404
	ctx.r5.s64 = ctx.r10.s64 + 16404;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-14744
	ctx.r4.s64 = ctx.r10.s64 + -14744;
	// addi r11,r11,-1008
	ctx.r11.s64 = ctx.r11.s64 + -1008;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,15180
	ctx.r3.s64 = ctx.r10.s64 + 15180;
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
	ctx.lr = 0x830AE18C;
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

__attribute__((alias("__imp__sub_830AE1A0"))) PPC_WEAK_FUNC(sub_830AE1A0);
PPC_FUNC_IMPL(__imp__sub_830AE1A0) {
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
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r9,r10,-32408
	ctx.r9.s64 = ctx.r10.s64 + -32408;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-16828
	ctx.r4.s64 = ctx.r10.s64 + -16828;
	// addi r11,r11,-968
	ctx.r11.s64 = ctx.r11.s64 + -968;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,18348
	ctx.r3.s64 = ctx.r10.s64 + 18348;
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
	ctx.lr = 0x830AE1F4;
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

__attribute__((alias("__imp__sub_830AE208"))) PPC_WEAK_FUNC(sub_830AE208);
PPC_FUNC_IMPL(__imp__sub_830AE208) {
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
	// addi r11,r11,-828
	ctx.r11.s64 = ctx.r11.s64 + -828;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,10104
	ctx.r3.s64 = ctx.r10.s64 + 10104;
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
	ctx.lr = 0x830AE258;
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

__attribute__((alias("__imp__sub_830AE268"))) PPC_WEAK_FUNC(sub_830AE268);
PPC_FUNC_IMPL(__imp__sub_830AE268) {
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
	// addi r11,r11,-788
	ctx.r11.s64 = ctx.r11.s64 + -788;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,10032
	ctx.r3.s64 = ctx.r10.s64 + 10032;
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
	ctx.lr = 0x830AE2B8;
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

__attribute__((alias("__imp__sub_830AE2C8"))) PPC_WEAK_FUNC(sub_830AE2C8);
PPC_FUNC_IMPL(__imp__sub_830AE2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,15536
	ctx.r10.s64 = ctx.r10.s64 + 15536;
	// lwz r11,-748(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -748);
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AE2E8"))) PPC_WEAK_FUNC(sub_830AE2E8);
PPC_FUNC_IMPL(__imp__sub_830AE2E8) {
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
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r9,r10,-32040
	ctx.r9.s64 = ctx.r10.s64 + -32040;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-15580
	ctx.r4.s64 = ctx.r10.s64 + -15580;
	// addi r11,r11,15536
	ctx.r11.s64 = ctx.r11.s64 + 15536;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,10572
	ctx.r3.s64 = ctx.r10.s64 + 10572;
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
	ctx.lr = 0x830AE33C;
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

__attribute__((alias("__imp__sub_830AE350"))) PPC_WEAK_FUNC(sub_830AE350);
PPC_FUNC_IMPL(__imp__sub_830AE350) {
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
	// addi r11,r11,-736
	ctx.r11.s64 = ctx.r11.s64 + -736;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,9888
	ctx.r3.s64 = ctx.r10.s64 + 9888;
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
	ctx.lr = 0x830AE3A0;
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

__attribute__((alias("__imp__sub_830AE3B0"))) PPC_WEAK_FUNC(sub_830AE3B0);
PPC_FUNC_IMPL(__imp__sub_830AE3B0) {
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
	// addi r11,r11,-696
	ctx.r11.s64 = ctx.r11.s64 + -696;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,19860
	ctx.r3.s64 = ctx.r10.s64 + 19860;
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
	ctx.lr = 0x830AE400;
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

__attribute__((alias("__imp__sub_830AE410"))) PPC_WEAK_FUNC(sub_830AE410);
PPC_FUNC_IMPL(__imp__sub_830AE410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,15976
	ctx.r10.s64 = ctx.r10.s64 + 15976;
	// lwz r11,-676(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -676);
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AE428"))) PPC_WEAK_FUNC(sub_830AE428);
PPC_FUNC_IMPL(__imp__sub_830AE428) {
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
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r9,r10,-31980
	ctx.r9.s64 = ctx.r10.s64 + -31980;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-15220
	ctx.r4.s64 = ctx.r10.s64 + -15220;
	// addi r11,r11,15976
	ctx.r11.s64 = ctx.r11.s64 + 15976;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,17448
	ctx.r3.s64 = ctx.r10.s64 + 17448;
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
	ctx.lr = 0x830AE47C;
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

__attribute__((alias("__imp__sub_830AE490"))) PPC_WEAK_FUNC(sub_830AE490);
PPC_FUNC_IMPL(__imp__sub_830AE490) {
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
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r9,r10,-31928
	ctx.r9.s64 = ctx.r10.s64 + -31928;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-8080
	ctx.r4.s64 = ctx.r10.s64 + -8080;
	// addi r11,r11,-664
	ctx.r11.s64 = ctx.r11.s64 + -664;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,10212
	ctx.r3.s64 = ctx.r10.s64 + 10212;
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
	ctx.lr = 0x830AE4E4;
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

__attribute__((alias("__imp__sub_830AE4F8"))) PPC_WEAK_FUNC(sub_830AE4F8);
PPC_FUNC_IMPL(__imp__sub_830AE4F8) {
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
	// addi r11,r11,-604
	ctx.r11.s64 = ctx.r11.s64 + -604;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,10896
	ctx.r3.s64 = ctx.r10.s64 + 10896;
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
	ctx.lr = 0x830AE548;
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

__attribute__((alias("__imp__sub_830AE558"))) PPC_WEAK_FUNC(sub_830AE558);
PPC_FUNC_IMPL(__imp__sub_830AE558) {
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
	// addi r11,r11,-564
	ctx.r11.s64 = ctx.r11.s64 + -564;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,13020
	ctx.r3.s64 = ctx.r10.s64 + 13020;
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
	ctx.lr = 0x830AE5A8;
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

__attribute__((alias("__imp__sub_830AE5B8"))) PPC_WEAK_FUNC(sub_830AE5B8);
PPC_FUNC_IMPL(__imp__sub_830AE5B8) {
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
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r9,r10,-31888
	ctx.r9.s64 = ctx.r10.s64 + -31888;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-11636
	ctx.r4.s64 = ctx.r10.s64 + -11636;
	// addi r11,r11,-520
	ctx.r11.s64 = ctx.r11.s64 + -520;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,10608
	ctx.r3.s64 = ctx.r10.s64 + 10608;
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
	ctx.lr = 0x830AE60C;
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

__attribute__((alias("__imp__sub_830AE620"))) PPC_WEAK_FUNC(sub_830AE620);
PPC_FUNC_IMPL(__imp__sub_830AE620) {
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
	// addi r11,r11,-440
	ctx.r11.s64 = ctx.r11.s64 + -440;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,14784
	ctx.r3.s64 = ctx.r10.s64 + 14784;
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
	ctx.lr = 0x830AE670;
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

__attribute__((alias("__imp__sub_830AE680"))) PPC_WEAK_FUNC(sub_830AE680);
PPC_FUNC_IMPL(__imp__sub_830AE680) {
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
	// addi r11,r11,-240
	ctx.r11.s64 = ctx.r11.s64 + -240;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,8988
	ctx.r3.s64 = ctx.r10.s64 + 8988;
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
	ctx.lr = 0x830AE6D0;
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

__attribute__((alias("__imp__sub_830AE6E0"))) PPC_WEAK_FUNC(sub_830AE6E0);
PPC_FUNC_IMPL(__imp__sub_830AE6E0) {
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
	// addi r11,r11,-200
	ctx.r11.s64 = ctx.r11.s64 + -200;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,9276
	ctx.r3.s64 = ctx.r10.s64 + 9276;
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
	ctx.lr = 0x830AE730;
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

__attribute__((alias("__imp__sub_830AE740"))) PPC_WEAK_FUNC(sub_830AE740);
PPC_FUNC_IMPL(__imp__sub_830AE740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,15036
	ctx.r10.s64 = ctx.r10.s64 + 15036;
	// lwz r11,-100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AE758"))) PPC_WEAK_FUNC(sub_830AE758);
PPC_FUNC_IMPL(__imp__sub_830AE758) {
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
	// addi r11,r11,15036
	ctx.r11.s64 = ctx.r11.s64 + 15036;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,19248
	ctx.r3.s64 = ctx.r10.s64 + 19248;
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
	ctx.lr = 0x830AE7A8;
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

__attribute__((alias("__imp__sub_830AE7B8"))) PPC_WEAK_FUNC(sub_830AE7B8);
PPC_FUNC_IMPL(__imp__sub_830AE7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,15436
	ctx.r10.s64 = ctx.r10.s64 + 15436;
	// lwz r11,-100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AE7D0"))) PPC_WEAK_FUNC(sub_830AE7D0);
PPC_FUNC_IMPL(__imp__sub_830AE7D0) {
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
	// addi r11,r11,15436
	ctx.r11.s64 = ctx.r11.s64 + 15436;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,18852
	ctx.r3.s64 = ctx.r10.s64 + 18852;
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
	ctx.lr = 0x830AE820;
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

__attribute__((alias("__imp__sub_830AE830"))) PPC_WEAK_FUNC(sub_830AE830);
PPC_FUNC_IMPL(__imp__sub_830AE830) {
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
	// addi r11,r11,-220
	ctx.r11.s64 = ctx.r11.s64 + -220;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,8736
	ctx.r3.s64 = ctx.r10.s64 + 8736;
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
	ctx.lr = 0x830AE880;
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

__attribute__((alias("__imp__sub_830AE890"))) PPC_WEAK_FUNC(sub_830AE890);
PPC_FUNC_IMPL(__imp__sub_830AE890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,16096
	ctx.r10.s64 = ctx.r10.s64 + 16096;
	// lwz r11,-100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AE8A8"))) PPC_WEAK_FUNC(sub_830AE8A8);
PPC_FUNC_IMPL(__imp__sub_830AE8A8) {
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
	// addi r11,r11,16096
	ctx.r11.s64 = ctx.r11.s64 + 16096;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,9636
	ctx.r3.s64 = ctx.r10.s64 + 9636;
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
	ctx.lr = 0x830AE8F8;
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

__attribute__((alias("__imp__sub_830AE908"))) PPC_WEAK_FUNC(sub_830AE908);
PPC_FUNC_IMPL(__imp__sub_830AE908) {
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
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r9,r10,-31828
	ctx.r9.s64 = ctx.r10.s64 + -31828;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-7800
	ctx.r4.s64 = ctx.r10.s64 + -7800;
	// addi r11,r11,-96
	ctx.r11.s64 = ctx.r11.s64 + -96;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,10788
	ctx.r3.s64 = ctx.r10.s64 + 10788;
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
	ctx.lr = 0x830AE95C;
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

__attribute__((alias("__imp__sub_830AE970"))) PPC_WEAK_FUNC(sub_830AE970);
PPC_FUNC_IMPL(__imp__sub_830AE970) {
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
	// addi r11,r11,-56
	ctx.r11.s64 = ctx.r11.s64 + -56;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,11184
	ctx.r3.s64 = ctx.r10.s64 + 11184;
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
	ctx.lr = 0x830AE9C0;
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

__attribute__((alias("__imp__sub_830AE9D0"))) PPC_WEAK_FUNC(sub_830AE9D0);
PPC_FUNC_IMPL(__imp__sub_830AE9D0) {
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
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,8520
	ctx.r3.s64 = ctx.r10.s64 + 8520;
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
	ctx.lr = 0x830AEA20;
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

__attribute__((alias("__imp__sub_830AEA30"))) PPC_WEAK_FUNC(sub_830AEA30);
PPC_FUNC_IMPL(__imp__sub_830AEA30) {
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
	// addi r5,r10,11796
	ctx.r5.s64 = ctx.r10.s64 + 11796;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-4788
	ctx.r4.s64 = ctx.r10.s64 + -4788;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,18564
	ctx.r3.s64 = ctx.r10.s64 + 18564;
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
	ctx.lr = 0x830AEA84;
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

__attribute__((alias("__imp__sub_830AEA98"))) PPC_WEAK_FUNC(sub_830AEA98);
PPC_FUNC_IMPL(__imp__sub_830AEA98) {
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
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,11796
	ctx.r3.s64 = ctx.r10.s64 + 11796;
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
	ctx.lr = 0x830AEAE8;
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

__attribute__((alias("__imp__sub_830AEAF8"))) PPC_WEAK_FUNC(sub_830AEAF8);
PPC_FUNC_IMPL(__imp__sub_830AEAF8) {
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
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,8160
	ctx.r3.s64 = ctx.r10.s64 + 8160;
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
	ctx.lr = 0x830AEB48;
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

__attribute__((alias("__imp__sub_830AEB58"))) PPC_WEAK_FUNC(sub_830AEB58);
PPC_FUNC_IMPL(__imp__sub_830AEB58) {
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
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,11472
	ctx.r3.s64 = ctx.r10.s64 + 11472;
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
	ctx.lr = 0x830AEBA8;
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

__attribute__((alias("__imp__sub_830AEBB8"))) PPC_WEAK_FUNC(sub_830AEBB8);
PPC_FUNC_IMPL(__imp__sub_830AEBB8) {
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
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,13632
	ctx.r3.s64 = ctx.r10.s64 + 13632;
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
	ctx.lr = 0x830AEC08;
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

__attribute__((alias("__imp__sub_830AEC18"))) PPC_WEAK_FUNC(sub_830AEC18);
PPC_FUNC_IMPL(__imp__sub_830AEC18) {
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
	// addi r11,r11,284
	ctx.r11.s64 = ctx.r11.s64 + 284;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,11868
	ctx.r3.s64 = ctx.r10.s64 + 11868;
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
	ctx.lr = 0x830AEC68;
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

__attribute__((alias("__imp__sub_830AEC78"))) PPC_WEAK_FUNC(sub_830AEC78);
PPC_FUNC_IMPL(__imp__sub_830AEC78) {
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
	// addi r11,r11,324
	ctx.r11.s64 = ctx.r11.s64 + 324;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,11688
	ctx.r3.s64 = ctx.r10.s64 + 11688;
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
	ctx.lr = 0x830AECC8;
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

__attribute__((alias("__imp__sub_830AECD8"))) PPC_WEAK_FUNC(sub_830AECD8);
PPC_FUNC_IMPL(__imp__sub_830AECD8) {
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
	// addi r11,r11,344
	ctx.r11.s64 = ctx.r11.s64 + 344;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,18456
	ctx.r3.s64 = ctx.r10.s64 + 18456;
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
	ctx.lr = 0x830AED28;
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

__attribute__((alias("__imp__sub_830AED38"))) PPC_WEAK_FUNC(sub_830AED38);
PPC_FUNC_IMPL(__imp__sub_830AED38) {
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
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,14424
	ctx.r3.s64 = ctx.r10.s64 + 14424;
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
	ctx.lr = 0x830AED88;
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

__attribute__((alias("__imp__sub_830AED98"))) PPC_WEAK_FUNC(sub_830AED98);
PPC_FUNC_IMPL(__imp__sub_830AED98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,17992
	ctx.r10.s64 = ctx.r10.s64 + 17992;
	// lwz r11,544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AEDB0"))) PPC_WEAK_FUNC(sub_830AEDB0);
PPC_FUNC_IMPL(__imp__sub_830AEDB0) {
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
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r9,r10,-31792
	ctx.r9.s64 = ctx.r10.s64 + -31792;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-6964
	ctx.r4.s64 = ctx.r10.s64 + -6964;
	// addi r11,r11,17992
	ctx.r11.s64 = ctx.r11.s64 + 17992;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,7764
	ctx.r3.s64 = ctx.r10.s64 + 7764;
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
	ctx.lr = 0x830AEE04;
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

__attribute__((alias("__imp__sub_830AEE18"))) PPC_WEAK_FUNC(sub_830AEE18);
PPC_FUNC_IMPL(__imp__sub_830AEE18) {
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
	// addi r11,r11,552
	ctx.r11.s64 = ctx.r11.s64 + 552;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,19140
	ctx.r3.s64 = ctx.r10.s64 + 19140;
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
	ctx.lr = 0x830AEE68;
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

__attribute__((alias("__imp__sub_830AEE78"))) PPC_WEAK_FUNC(sub_830AEE78);
PPC_FUNC_IMPL(__imp__sub_830AEE78) {
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
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r9,r10,-31732
	ctx.r9.s64 = ctx.r10.s64 + -31732;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-6408
	ctx.r4.s64 = ctx.r10.s64 + -6408;
	// addi r11,r11,592
	ctx.r11.s64 = ctx.r11.s64 + 592;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,19320
	ctx.r3.s64 = ctx.r10.s64 + 19320;
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
	ctx.lr = 0x830AEECC;
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

__attribute__((alias("__imp__sub_830AEEE0"))) PPC_WEAK_FUNC(sub_830AEEE0);
PPC_FUNC_IMPL(__imp__sub_830AEEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,16756
	ctx.r10.s64 = ctx.r10.s64 + 16756;
	// lwz r11,752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 752);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AEEF8"))) PPC_WEAK_FUNC(sub_830AEEF8);
PPC_FUNC_IMPL(__imp__sub_830AEEF8) {
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
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r9,r10,-31680
	ctx.r9.s64 = ctx.r10.s64 + -31680;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-6200
	ctx.r4.s64 = ctx.r10.s64 + -6200;
	// addi r11,r11,16756
	ctx.r11.s64 = ctx.r11.s64 + 16756;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,15900
	ctx.r3.s64 = ctx.r10.s64 + 15900;
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
	ctx.lr = 0x830AEF4C;
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

__attribute__((alias("__imp__sub_830AEF60"))) PPC_WEAK_FUNC(sub_830AEF60);
PPC_FUNC_IMPL(__imp__sub_830AEF60) {
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
	// addi r11,r11,756
	ctx.r11.s64 = ctx.r11.s64 + 756;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,12984
	ctx.r3.s64 = ctx.r10.s64 + 12984;
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
	ctx.lr = 0x830AEFB0;
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

__attribute__((alias("__imp__sub_830AEFC0"))) PPC_WEAK_FUNC(sub_830AEFC0);
PPC_FUNC_IMPL(__imp__sub_830AEFC0) {
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
	// addi r11,r11,776
	ctx.r11.s64 = ctx.r11.s64 + 776;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,9024
	ctx.r3.s64 = ctx.r10.s64 + 9024;
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
	ctx.lr = 0x830AF010;
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

__attribute__((alias("__imp__sub_830AF020"))) PPC_WEAK_FUNC(sub_830AF020);
PPC_FUNC_IMPL(__imp__sub_830AF020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,16136
	ctx.r10.s64 = ctx.r10.s64 + 16136;
	// lwz r11,816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 816);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AF038"))) PPC_WEAK_FUNC(sub_830AF038);
PPC_FUNC_IMPL(__imp__sub_830AF038) {
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
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r9,r10,-31628
	ctx.r9.s64 = ctx.r10.s64 + -31628;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-7116
	ctx.r4.s64 = ctx.r10.s64 + -7116;
	// addi r11,r11,16136
	ctx.r11.s64 = ctx.r11.s64 + 16136;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,15648
	ctx.r3.s64 = ctx.r10.s64 + 15648;
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
	ctx.lr = 0x830AF08C;
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

__attribute__((alias("__imp__sub_830AF0A0"))) PPC_WEAK_FUNC(sub_830AF0A0);
PPC_FUNC_IMPL(__imp__sub_830AF0A0) {
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
	// addi r11,r11,820
	ctx.r11.s64 = ctx.r11.s64 + 820;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,12912
	ctx.r3.s64 = ctx.r10.s64 + 12912;
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
	ctx.lr = 0x830AF0F0;
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

__attribute__((alias("__imp__sub_830AF100"))) PPC_WEAK_FUNC(sub_830AF100);
PPC_FUNC_IMPL(__imp__sub_830AF100) {
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
	// addi r11,r11,840
	ctx.r11.s64 = ctx.r11.s64 + 840;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,7872
	ctx.r3.s64 = ctx.r10.s64 + 7872;
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
	ctx.lr = 0x830AF150;
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

__attribute__((alias("__imp__sub_830AF160"))) PPC_WEAK_FUNC(sub_830AF160);
PPC_FUNC_IMPL(__imp__sub_830AF160) {
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
	// addi r11,r11,900
	ctx.r11.s64 = ctx.r11.s64 + 900;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,11040
	ctx.r3.s64 = ctx.r10.s64 + 11040;
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
	ctx.lr = 0x830AF1B0;
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

__attribute__((alias("__imp__sub_830AF1C0"))) PPC_WEAK_FUNC(sub_830AF1C0);
PPC_FUNC_IMPL(__imp__sub_830AF1C0) {
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
	// addi r11,r11,1000
	ctx.r11.s64 = ctx.r11.s64 + 1000;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,10932
	ctx.r3.s64 = ctx.r10.s64 + 10932;
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
	ctx.lr = 0x830AF210;
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

__attribute__((alias("__imp__sub_830AF220"))) PPC_WEAK_FUNC(sub_830AF220);
PPC_FUNC_IMPL(__imp__sub_830AF220) {
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
	// addi r11,r11,1240
	ctx.r11.s64 = ctx.r11.s64 + 1240;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,19068
	ctx.r3.s64 = ctx.r10.s64 + 19068;
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
	ctx.lr = 0x830AF270;
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

__attribute__((alias("__imp__sub_830AF280"))) PPC_WEAK_FUNC(sub_830AF280);
PPC_FUNC_IMPL(__imp__sub_830AF280) {
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
	// addi r11,r11,1360
	ctx.r11.s64 = ctx.r11.s64 + 1360;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,13884
	ctx.r3.s64 = ctx.r10.s64 + 13884;
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
	ctx.lr = 0x830AF2D0;
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

__attribute__((alias("__imp__sub_830AF2E0"))) PPC_WEAK_FUNC(sub_830AF2E0);
PPC_FUNC_IMPL(__imp__sub_830AF2E0) {
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
	// addi r11,r11,1520
	ctx.r11.s64 = ctx.r11.s64 + 1520;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,13092
	ctx.r3.s64 = ctx.r10.s64 + 13092;
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
	ctx.lr = 0x830AF330;
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

__attribute__((alias("__imp__sub_830AF340"))) PPC_WEAK_FUNC(sub_830AF340);
PPC_FUNC_IMPL(__imp__sub_830AF340) {
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
	// addi r11,r11,1720
	ctx.r11.s64 = ctx.r11.s64 + 1720;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,12156
	ctx.r3.s64 = ctx.r10.s64 + 12156;
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
	ctx.lr = 0x830AF390;
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

__attribute__((alias("__imp__sub_830AF3A0"))) PPC_WEAK_FUNC(sub_830AF3A0);
PPC_FUNC_IMPL(__imp__sub_830AF3A0) {
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
	// addi r11,r11,1880
	ctx.r11.s64 = ctx.r11.s64 + 1880;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,18312
	ctx.r3.s64 = ctx.r10.s64 + 18312;
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
	ctx.lr = 0x830AF3F0;
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

