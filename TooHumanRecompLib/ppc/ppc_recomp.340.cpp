#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_830BB578"))) PPC_WEAK_FUNC(sub_830BB578);
PPC_FUNC_IMPL(__imp__sub_830BB578) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,12920
	ctx.r4.s64 = ctx.r10.s64 + 12920;
	// addi r11,r11,-32404
	ctx.r11.s64 = ctx.r11.s64 + -32404;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,21300
	ctx.r3.s64 = ctx.r10.s64 + 21300;
	// li r10,0
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
	ctx.lr = 0x830BB5C8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BB5D8"))) PPC_WEAK_FUNC(sub_830BB5D8);
PPC_FUNC_IMPL(__imp__sub_830BB5D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,22668
	ctx.r5.s64 = ctx.r10.s64 + 22668;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,12948
	ctx.r4.s64 = ctx.r10.s64 + 12948;
	// addi r11,r11,-32364
	ctx.r11.s64 = ctx.r11.s64 + -32364;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29688
	ctx.r3.s64 = ctx.r10.s64 + 29688;
	// li r10,0
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
	ctx.lr = 0x830BB62C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BB640"))) PPC_WEAK_FUNC(sub_830BB640);
PPC_FUNC_IMPL(__imp__sub_830BB640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r10,-32344
	ctx.r8.s64 = ctx.r10.s64 + -32344;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r10,29544
	ctx.r5.s64 = ctx.r10.s64 + 29544;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,-24080
	ctx.r11.s64 = ctx.r11.s64 + -24080;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,9428
	ctx.r4.s64 = ctx.r10.s64 + 9428;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,28608
	ctx.r3.s64 = ctx.r10.s64 + 28608;
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
	ctx.lr = 0x830BB69C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BB6B0"))) PPC_WEAK_FUNC(sub_830BB6B0);
PPC_FUNC_IMPL(__imp__sub_830BB6B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,25656
	ctx.r5.s64 = ctx.r10.s64 + 25656;
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
	// addi r3,r10,20364
	ctx.r3.s64 = ctx.r10.s64 + 20364;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830BB6FC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BB710"))) PPC_WEAK_FUNC(sub_830BB710);
PPC_FUNC_IMPL(__imp__sub_830BB710) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,27312
	ctx.r5.s64 = ctx.r10.s64 + 27312;
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
	// addi r3,r10,26484
	ctx.r3.s64 = ctx.r10.s64 + 26484;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830BB75C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BB770"))) PPC_WEAK_FUNC(sub_830BB770);
PPC_FUNC_IMPL(__imp__sub_830BB770) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,28608
	ctx.r5.s64 = ctx.r10.s64 + 28608;
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
	// addi r3,r10,30012
	ctx.r3.s64 = ctx.r10.s64 + 30012;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830BB7BC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BB7D0"))) PPC_WEAK_FUNC(sub_830BB7D0);
PPC_FUNC_IMPL(__imp__sub_830BB7D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,-23980
	ctx.r9.s64 = ctx.r10.s64 + -23980;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,20364
	ctx.r5.s64 = ctx.r10.s64 + 20364;
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
	// addi r3,r10,27312
	ctx.r3.s64 = ctx.r10.s64 + 27312;
	// li r10,1
	ctx.r10.s64 = 1;
	// bl 0x82db4000
	ctx.lr = 0x830BB820;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BB830"))) PPC_WEAK_FUNC(sub_830BB830);
PPC_FUNC_IMPL(__imp__sub_830BB830) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,7308
	ctx.r4.s64 = ctx.r10.s64 + 7308;
	// addi r11,r11,-32020
	ctx.r11.s64 = ctx.r11.s64 + -32020;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27708
	ctx.r3.s64 = ctx.r10.s64 + 27708;
	// li r10,0
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
	ctx.lr = 0x830BB880;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BB890"))) PPC_WEAK_FUNC(sub_830BB890);
PPC_FUNC_IMPL(__imp__sub_830BB890) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,27312
	ctx.r5.s64 = ctx.r10.s64 + 27312;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,7344
	ctx.r4.s64 = ctx.r10.s64 + 7344;
	// addi r11,r11,-31976
	ctx.r11.s64 = ctx.r11.s64 + -31976;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24684
	ctx.r3.s64 = ctx.r10.s64 + 24684;
	// li r10,0
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
	ctx.lr = 0x830BB8E4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BB8F8"))) PPC_WEAK_FUNC(sub_830BB8F8);
PPC_FUNC_IMPL(__imp__sub_830BB8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r10,r10,-23736
	ctx.r10.s64 = ctx.r10.s64 + -23736;
	// lwz r11,-31980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31980);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BB910"))) PPC_WEAK_FUNC(sub_830BB910);
PPC_FUNC_IMPL(__imp__sub_830BB910) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,-23888
	ctx.r9.s64 = ctx.r10.s64 + -23888;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r5,r10,25656
	ctx.r5.s64 = ctx.r10.s64 + 25656;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-23736
	ctx.r11.s64 = ctx.r11.s64 + -23736;
	// addi r4,r10,17028
	ctx.r4.s64 = ctx.r10.s64 + 17028;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,32100
	ctx.r3.s64 = ctx.r10.s64 + 32100;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830BB968;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BB978"))) PPC_WEAK_FUNC(sub_830BB978);
PPC_FUNC_IMPL(__imp__sub_830BB978) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,32100
	ctx.r5.s64 = ctx.r10.s64 + 32100;
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
	// addi r3,r10,29832
	ctx.r3.s64 = ctx.r10.s64 + 29832;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830BB9C4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BB9D8"))) PPC_WEAK_FUNC(sub_830BB9D8);
PPC_FUNC_IMPL(__imp__sub_830BB9D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,28104
	ctx.r5.s64 = ctx.r10.s64 + 28104;
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
	// addi r3,r10,25584
	ctx.r3.s64 = ctx.r10.s64 + 25584;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830BBA24;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BBA38"))) PPC_WEAK_FUNC(sub_830BBA38);
PPC_FUNC_IMPL(__imp__sub_830BBA38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,32100
	ctx.r5.s64 = ctx.r10.s64 + 32100;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,17616
	ctx.r4.s64 = ctx.r10.s64 + 17616;
	// addi r11,r11,-31836
	ctx.r11.s64 = ctx.r11.s64 + -31836;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28104
	ctx.r3.s64 = ctx.r10.s64 + 28104;
	// li r10,0
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
	ctx.lr = 0x830BBA8C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BBAA0"))) PPC_WEAK_FUNC(sub_830BBAA0);
PPC_FUNC_IMPL(__imp__sub_830BBAA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,28104
	ctx.r5.s64 = ctx.r10.s64 + 28104;
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
	// addi r3,r10,24396
	ctx.r3.s64 = ctx.r10.s64 + 24396;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830BBAEC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BBB00"))) PPC_WEAK_FUNC(sub_830BBB00);
PPC_FUNC_IMPL(__imp__sub_830BBB00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,32100
	ctx.r5.s64 = ctx.r10.s64 + 32100;
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
	// addi r3,r10,28896
	ctx.r3.s64 = ctx.r10.s64 + 28896;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830BBB4C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BBB60"))) PPC_WEAK_FUNC(sub_830BBB60);
PPC_FUNC_IMPL(__imp__sub_830BBB60) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,29832
	ctx.r5.s64 = ctx.r10.s64 + 29832;
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
	// addi r3,r10,30732
	ctx.r3.s64 = ctx.r10.s64 + 30732;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830BBBAC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BBBC0"))) PPC_WEAK_FUNC(sub_830BBBC0);
PPC_FUNC_IMPL(__imp__sub_830BBBC0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,28896
	ctx.r5.s64 = ctx.r10.s64 + 28896;
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
	// addi r3,r10,20184
	ctx.r3.s64 = ctx.r10.s64 + 20184;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830BBC0C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BBC20"))) PPC_WEAK_FUNC(sub_830BBC20);
PPC_FUNC_IMPL(__imp__sub_830BBC20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,29832
	ctx.r5.s64 = ctx.r10.s64 + 29832;
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
	// addi r3,r10,31128
	ctx.r3.s64 = ctx.r10.s64 + 31128;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830BBC6C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BBC80"))) PPC_WEAK_FUNC(sub_830BBC80);
PPC_FUNC_IMPL(__imp__sub_830BBC80) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,24108
	ctx.r5.s64 = ctx.r10.s64 + 24108;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,13532
	ctx.r4.s64 = ctx.r10.s64 + 13532;
	// addi r11,r11,-31796
	ctx.r11.s64 = ctx.r11.s64 + -31796;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23064
	ctx.r3.s64 = ctx.r10.s64 + 23064;
	// li r10,0
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
	ctx.lr = 0x830BBCD4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BBCE8"))) PPC_WEAK_FUNC(sub_830BBCE8);
PPC_FUNC_IMPL(__imp__sub_830BBCE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,21876
	ctx.r5.s64 = ctx.r10.s64 + 21876;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,15256
	ctx.r4.s64 = ctx.r10.s64 + 15256;
	// addi r11,r11,-31756
	ctx.r11.s64 = ctx.r11.s64 + -31756;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26628
	ctx.r3.s64 = ctx.r10.s64 + 26628;
	// li r10,0
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
	ctx.lr = 0x830BBD3C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BBD50"))) PPC_WEAK_FUNC(sub_830BBD50);
PPC_FUNC_IMPL(__imp__sub_830BBD50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,29544
	ctx.r5.s64 = ctx.r10.s64 + 29544;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,17212
	ctx.r4.s64 = ctx.r10.s64 + 17212;
	// addi r11,r11,-31736
	ctx.r11.s64 = ctx.r11.s64 + -31736;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24108
	ctx.r3.s64 = ctx.r10.s64 + 24108;
	// li r10,0
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
	ctx.lr = 0x830BBDA4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BBDB8"))) PPC_WEAK_FUNC(sub_830BBDB8);
PPC_FUNC_IMPL(__imp__sub_830BBDB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,24108
	ctx.r5.s64 = ctx.r10.s64 + 24108;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,17480
	ctx.r4.s64 = ctx.r10.s64 + 17480;
	// addi r11,r11,-31696
	ctx.r11.s64 = ctx.r11.s64 + -31696;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,21876
	ctx.r3.s64 = ctx.r10.s64 + 21876;
	// li r10,0
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
	ctx.lr = 0x830BBE0C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BBE20"))) PPC_WEAK_FUNC(sub_830BBE20);
PPC_FUNC_IMPL(__imp__sub_830BBE20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,21876
	ctx.r5.s64 = ctx.r10.s64 + 21876;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,6896
	ctx.r4.s64 = ctx.r10.s64 + 6896;
	// addi r11,r11,-31676
	ctx.r11.s64 = ctx.r11.s64 + -31676;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,20400
	ctx.r3.s64 = ctx.r10.s64 + 20400;
	// li r10,0
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
	ctx.lr = 0x830BBE74;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BBE88"))) PPC_WEAK_FUNC(sub_830BBE88);
PPC_FUNC_IMPL(__imp__sub_830BBE88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r8,r10,-31656
	ctx.r8.s64 = ctx.r10.s64 + -31656;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r10,25656
	ctx.r5.s64 = ctx.r10.s64 + 25656;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,-23876
	ctx.r11.s64 = ctx.r11.s64 + -23876;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,18684
	ctx.r4.s64 = ctx.r10.s64 + 18684;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,22272
	ctx.r3.s64 = ctx.r10.s64 + 22272;
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
	ctx.lr = 0x830BBEE4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BBEF8"))) PPC_WEAK_FUNC(sub_830BBEF8);
PPC_FUNC_IMPL(__imp__sub_830BBEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// lwz r10,-31504(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31504);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r11,r11,-24280
	ctx.r11.s64 = ctx.r11.s64 + -24280;
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// lwz r10,-31508(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31508);
	// stw r10,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r10.u32);
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// lwz r10,-31512(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31512);
	// stw r10,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BBF28"))) PPC_WEAK_FUNC(sub_830BBF28);
PPC_FUNC_IMPL(__imp__sub_830BBF28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r11,-23664
	ctx.r9.s64 = ctx.r11.s64 + -23664;
	// addi r5,r10,25656
	ctx.r5.s64 = ctx.r10.s64 + 25656;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r8,r9,48
	ctx.r8.s64 = ctx.r9.s64 + 48;
	// li r7,27
	ctx.r7.s64 = 27;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,1284
	ctx.r4.s64 = ctx.r10.s64 + 1284;
	// addi r11,r11,-24280
	ctx.r11.s64 = ctx.r11.s64 + -24280;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29760
	ctx.r3.s64 = ctx.r10.s64 + 29760;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830BBF84;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BBF98"))) PPC_WEAK_FUNC(sub_830BBF98);
PPC_FUNC_IMPL(__imp__sub_830BBF98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,-23400
	ctx.r9.s64 = ctx.r10.s64 + -23400;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r5,r10,25656
	ctx.r5.s64 = ctx.r10.s64 + 25656;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-31496
	ctx.r11.s64 = ctx.r11.s64 + -31496;
	// addi r4,r10,18104
	ctx.r4.s64 = ctx.r10.s64 + 18104;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,29544
	ctx.r3.s64 = ctx.r10.s64 + 29544;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830BBFF0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BC000"))) PPC_WEAK_FUNC(sub_830BC000);
PPC_FUNC_IMPL(__imp__sub_830BC000) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,25656
	ctx.r5.s64 = ctx.r10.s64 + 25656;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,17688
	ctx.r4.s64 = ctx.r10.s64 + 17688;
	// addi r11,r11,-31376
	ctx.r11.s64 = ctx.r11.s64 + -31376;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22632
	ctx.r3.s64 = ctx.r10.s64 + 22632;
	// li r10,0
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
	ctx.lr = 0x830BC054;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BC068"))) PPC_WEAK_FUNC(sub_830BC068);
PPC_FUNC_IMPL(__imp__sub_830BC068) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,25980
	ctx.r5.s64 = ctx.r10.s64 + 25980;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-20140
	ctx.r4.s64 = ctx.r10.s64 + -20140;
	// addi r11,r11,-31356
	ctx.r11.s64 = ctx.r11.s64 + -31356;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,30120
	ctx.r3.s64 = ctx.r10.s64 + 30120;
	// li r10,0
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
	ctx.lr = 0x830BC0BC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BC0D0"))) PPC_WEAK_FUNC(sub_830BC0D0);
PPC_FUNC_IMPL(__imp__sub_830BC0D0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-20200
	ctx.r4.s64 = ctx.r10.s64 + -20200;
	// addi r11,r11,-31336
	ctx.r11.s64 = ctx.r11.s64 + -31336;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,31488
	ctx.r3.s64 = ctx.r10.s64 + 31488;
	// li r10,0
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
	ctx.lr = 0x830BC120;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BC130"))) PPC_WEAK_FUNC(sub_830BC130);
PPC_FUNC_IMPL(__imp__sub_830BC130) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,25656
	ctx.r5.s64 = ctx.r10.s64 + 25656;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-20596
	ctx.r4.s64 = ctx.r10.s64 + -20596;
	// addi r11,r11,-31316
	ctx.r11.s64 = ctx.r11.s64 + -31316;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26556
	ctx.r3.s64 = ctx.r10.s64 + 26556;
	// li r10,0
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
	ctx.lr = 0x830BC184;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BC198"))) PPC_WEAK_FUNC(sub_830BC198);
PPC_FUNC_IMPL(__imp__sub_830BC198) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-20408
	ctx.r4.s64 = ctx.r10.s64 + -20408;
	// addi r11,r11,-31256
	ctx.r11.s64 = ctx.r11.s64 + -31256;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,30876
	ctx.r3.s64 = ctx.r10.s64 + 30876;
	// li r10,0
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
	ctx.lr = 0x830BC1E8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BC1F8"))) PPC_WEAK_FUNC(sub_830BC1F8);
PPC_FUNC_IMPL(__imp__sub_830BC1F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,25656
	ctx.r5.s64 = ctx.r10.s64 + 25656;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-20388
	ctx.r4.s64 = ctx.r10.s64 + -20388;
	// addi r11,r11,-31236
	ctx.r11.s64 = ctx.r11.s64 + -31236;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26448
	ctx.r3.s64 = ctx.r10.s64 + 26448;
	// li r10,0
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
	ctx.lr = 0x830BC24C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BC260"))) PPC_WEAK_FUNC(sub_830BC260);
PPC_FUNC_IMPL(__imp__sub_830BC260) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,-23328
	ctx.r9.s64 = ctx.r10.s64 + -23328;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,13352
	ctx.r4.s64 = ctx.r10.s64 + 13352;
	// addi r11,r11,-31168
	ctx.r11.s64 = ctx.r11.s64 + -31168;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,22524
	ctx.r3.s64 = ctx.r10.s64 + 22524;
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
	ctx.lr = 0x830BC2B4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BC2C8"))) PPC_WEAK_FUNC(sub_830BC2C8);
PPC_FUNC_IMPL(__imp__sub_830BC2C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,-23364
	ctx.r9.s64 = ctx.r10.s64 + -23364;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r5,r10,22668
	ctx.r5.s64 = ctx.r10.s64 + 22668;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-31188
	ctx.r11.s64 = ctx.r11.s64 + -31188;
	// addi r4,r10,13384
	ctx.r4.s64 = ctx.r10.s64 + 13384;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,23316
	ctx.r3.s64 = ctx.r10.s64 + 23316;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830BC320;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BC330"))) PPC_WEAK_FUNC(sub_830BC330);
PPC_FUNC_IMPL(__imp__sub_830BC330) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,-23292
	ctx.r9.s64 = ctx.r10.s64 + -23292;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,13736
	ctx.r4.s64 = ctx.r10.s64 + 13736;
	// addi r11,r11,-31024
	ctx.r11.s64 = ctx.r11.s64 + -31024;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,21120
	ctx.r3.s64 = ctx.r10.s64 + 21120;
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
	ctx.lr = 0x830BC384;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BC398"))) PPC_WEAK_FUNC(sub_830BC398);
PPC_FUNC_IMPL(__imp__sub_830BC398) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,22668
	ctx.r5.s64 = ctx.r10.s64 + 22668;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,13764
	ctx.r4.s64 = ctx.r10.s64 + 13764;
	// addi r11,r11,-30944
	ctx.r11.s64 = ctx.r11.s64 + -30944;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,30552
	ctx.r3.s64 = ctx.r10.s64 + 30552;
	// li r10,0
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
	ctx.lr = 0x830BC3EC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BC400"))) PPC_WEAK_FUNC(sub_830BC400);
PPC_FUNC_IMPL(__imp__sub_830BC400) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,27528
	ctx.r5.s64 = ctx.r10.s64 + 27528;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-26268
	ctx.r4.s64 = ctx.r10.s64 + -26268;
	// addi r11,r11,-30924
	ctx.r11.s64 = ctx.r11.s64 + -30924;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,20580
	ctx.r3.s64 = ctx.r10.s64 + 20580;
	// li r10,0
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
	ctx.lr = 0x830BC454;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BC468"))) PPC_WEAK_FUNC(sub_830BC468);
PPC_FUNC_IMPL(__imp__sub_830BC468) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,27528
	ctx.r5.s64 = ctx.r10.s64 + 27528;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-25968
	ctx.r4.s64 = ctx.r10.s64 + -25968;
	// addi r11,r11,-30864
	ctx.r11.s64 = ctx.r11.s64 + -30864;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,30048
	ctx.r3.s64 = ctx.r10.s64 + 30048;
	// li r10,0
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
	ctx.lr = 0x830BC4BC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BC4D0"))) PPC_WEAK_FUNC(sub_830BC4D0);
PPC_FUNC_IMPL(__imp__sub_830BC4D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,29292
	ctx.r5.s64 = ctx.r10.s64 + 29292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-25464
	ctx.r4.s64 = ctx.r10.s64 + -25464;
	// addi r11,r11,-30784
	ctx.r11.s64 = ctx.r11.s64 + -30784;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27060
	ctx.r3.s64 = ctx.r10.s64 + 27060;
	// li r10,0
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
	ctx.lr = 0x830BC524;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BC538"))) PPC_WEAK_FUNC(sub_830BC538);
PPC_FUNC_IMPL(__imp__sub_830BC538) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,29292
	ctx.r5.s64 = ctx.r10.s64 + 29292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-24232
	ctx.r4.s64 = ctx.r10.s64 + -24232;
	// addi r11,r11,-30704
	ctx.r11.s64 = ctx.r11.s64 + -30704;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,20544
	ctx.r3.s64 = ctx.r10.s64 + 20544;
	// li r10,0
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
	ctx.lr = 0x830BC58C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BC5A0"))) PPC_WEAK_FUNC(sub_830BC5A0);
PPC_FUNC_IMPL(__imp__sub_830BC5A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,27528
	ctx.r5.s64 = ctx.r10.s64 + 27528;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-22904
	ctx.r4.s64 = ctx.r10.s64 + -22904;
	// addi r11,r11,-30624
	ctx.r11.s64 = ctx.r11.s64 + -30624;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26340
	ctx.r3.s64 = ctx.r10.s64 + 26340;
	// li r10,0
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
	ctx.lr = 0x830BC5F4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BC608"))) PPC_WEAK_FUNC(sub_830BC608);
PPC_FUNC_IMPL(__imp__sub_830BC608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r8,19
	ctx.r8.s64 = 19;
	// addi r7,r10,-30464
	ctx.r7.s64 = ctx.r10.s64 + -30464;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r10,-22092
	ctx.r4.s64 = ctx.r10.s64 + -22092;
	// addi r11,r11,-23280
	ctx.r11.s64 = ctx.r11.s64 + -23280;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,26880
	ctx.r3.s64 = ctx.r10.s64 + 26880;
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
	ctx.lr = 0x830BC660;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BC670"))) PPC_WEAK_FUNC(sub_830BC670);
PPC_FUNC_IMPL(__imp__sub_830BC670) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r5,r10,30984
	ctx.r5.s64 = ctx.r10.s64 + 30984;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,-30084
	ctx.r11.s64 = ctx.r11.s64 + -30084;
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
	// addi r3,r10,24828
	ctx.r3.s64 = ctx.r10.s64 + 24828;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830BC6C0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BC6D0"))) PPC_WEAK_FUNC(sub_830BC6D0);
PPC_FUNC_IMPL(__imp__sub_830BC6D0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r5,r10,30984
	ctx.r5.s64 = ctx.r10.s64 + 30984;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,-30064
	ctx.r11.s64 = ctx.r11.s64 + -30064;
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
	// addi r3,r10,28932
	ctx.r3.s64 = ctx.r10.s64 + 28932;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830BC720;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BC730"))) PPC_WEAK_FUNC(sub_830BC730);
PPC_FUNC_IMPL(__imp__sub_830BC730) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,30984
	ctx.r5.s64 = ctx.r10.s64 + 30984;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-25632
	ctx.r4.s64 = ctx.r10.s64 + -25632;
	// addi r11,r11,-30044
	ctx.r11.s64 = ctx.r11.s64 + -30044;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29976
	ctx.r3.s64 = ctx.r10.s64 + 29976;
	// li r10,0
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
	ctx.lr = 0x830BC784;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BC798"))) PPC_WEAK_FUNC(sub_830BC798);
PPC_FUNC_IMPL(__imp__sub_830BC798) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-25008
	ctx.r4.s64 = ctx.r10.s64 + -25008;
	// addi r11,r11,-30004
	ctx.r11.s64 = ctx.r11.s64 + -30004;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28140
	ctx.r3.s64 = ctx.r10.s64 + 28140;
	// li r10,0
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
	ctx.lr = 0x830BC7E8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BC7F8"))) PPC_WEAK_FUNC(sub_830BC7F8);
PPC_FUNC_IMPL(__imp__sub_830BC7F8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r5,r10,30984
	ctx.r5.s64 = ctx.r10.s64 + 30984;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,-29964
	ctx.r11.s64 = ctx.r11.s64 + -29964;
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
	// addi r3,r10,20904
	ctx.r3.s64 = ctx.r10.s64 + 20904;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830BC848;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BC858"))) PPC_WEAK_FUNC(sub_830BC858);
PPC_FUNC_IMPL(__imp__sub_830BC858) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-24452
	ctx.r4.s64 = ctx.r10.s64 + -24452;
	// addi r11,r11,-29944
	ctx.r11.s64 = ctx.r11.s64 + -29944;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,30768
	ctx.r3.s64 = ctx.r10.s64 + 30768;
	// li r10,0
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
	ctx.lr = 0x830BC8A8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BC8B8"))) PPC_WEAK_FUNC(sub_830BC8B8);
PPC_FUNC_IMPL(__imp__sub_830BC8B8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-24424
	ctx.r4.s64 = ctx.r10.s64 + -24424;
	// addi r11,r11,-29904
	ctx.r11.s64 = ctx.r11.s64 + -29904;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,20220
	ctx.r3.s64 = ctx.r10.s64 + 20220;
	// li r10,0
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
	ctx.lr = 0x830BC908;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BC918"))) PPC_WEAK_FUNC(sub_830BC918);
PPC_FUNC_IMPL(__imp__sub_830BC918) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,25656
	ctx.r5.s64 = ctx.r10.s64 + 25656;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-24392
	ctx.r4.s64 = ctx.r10.s64 + -24392;
	// addi r11,r11,-29844
	ctx.r11.s64 = ctx.r11.s64 + -29844;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25152
	ctx.r3.s64 = ctx.r10.s64 + 25152;
	// li r10,0
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
	ctx.lr = 0x830BC96C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BC980"))) PPC_WEAK_FUNC(sub_830BC980);
PPC_FUNC_IMPL(__imp__sub_830BC980) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,29292
	ctx.r5.s64 = ctx.r10.s64 + 29292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-25192
	ctx.r4.s64 = ctx.r10.s64 + -25192;
	// addi r11,r11,-29784
	ctx.r11.s64 = ctx.r11.s64 + -29784;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,21588
	ctx.r3.s64 = ctx.r10.s64 + 21588;
	// li r10,0
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
	ctx.lr = 0x830BC9D4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BC9E8"))) PPC_WEAK_FUNC(sub_830BC9E8);
PPC_FUNC_IMPL(__imp__sub_830BC9E8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-21800
	ctx.r4.s64 = ctx.r10.s64 + -21800;
	// addi r11,r11,-29664
	ctx.r11.s64 = ctx.r11.s64 + -29664;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23712
	ctx.r3.s64 = ctx.r10.s64 + 23712;
	// li r10,0
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
	ctx.lr = 0x830BCA38;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BCA48"))) PPC_WEAK_FUNC(sub_830BCA48);
PPC_FUNC_IMPL(__imp__sub_830BCA48) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-21772
	ctx.r4.s64 = ctx.r10.s64 + -21772;
	// addi r11,r11,-29604
	ctx.r11.s64 = ctx.r11.s64 + -29604;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26988
	ctx.r3.s64 = ctx.r10.s64 + 26988;
	// li r10,0
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
	ctx.lr = 0x830BCA98;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BCAA8"))) PPC_WEAK_FUNC(sub_830BCAA8);
PPC_FUNC_IMPL(__imp__sub_830BCAA8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-21740
	ctx.r4.s64 = ctx.r10.s64 + -21740;
	// addi r11,r11,-29564
	ctx.r11.s64 = ctx.r11.s64 + -29564;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23856
	ctx.r3.s64 = ctx.r10.s64 + 23856;
	// li r10,0
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
	ctx.lr = 0x830BCAF8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BCB08"))) PPC_WEAK_FUNC(sub_830BCB08);
PPC_FUNC_IMPL(__imp__sub_830BCB08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,25656
	ctx.r5.s64 = ctx.r10.s64 + 25656;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-24868
	ctx.r4.s64 = ctx.r10.s64 + -24868;
	// addi r11,r11,-29524
	ctx.r11.s64 = ctx.r11.s64 + -29524;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25908
	ctx.r3.s64 = ctx.r10.s64 + 25908;
	// li r10,0
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
	ctx.lr = 0x830BCB5C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BCB70"))) PPC_WEAK_FUNC(sub_830BCB70);
PPC_FUNC_IMPL(__imp__sub_830BCB70) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,25656
	ctx.r5.s64 = ctx.r10.s64 + 25656;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-23456
	ctx.r4.s64 = ctx.r10.s64 + -23456;
	// addi r11,r11,-29484
	ctx.r11.s64 = ctx.r11.s64 + -29484;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22812
	ctx.r3.s64 = ctx.r10.s64 + 22812;
	// li r10,0
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
	ctx.lr = 0x830BCBC4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BCBD8"))) PPC_WEAK_FUNC(sub_830BCBD8);
PPC_FUNC_IMPL(__imp__sub_830BCBD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,25656
	ctx.r5.s64 = ctx.r10.s64 + 25656;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-23388
	ctx.r4.s64 = ctx.r10.s64 + -23388;
	// addi r11,r11,-29464
	ctx.r11.s64 = ctx.r11.s64 + -29464;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26088
	ctx.r3.s64 = ctx.r10.s64 + 26088;
	// li r10,0
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
	ctx.lr = 0x830BCC2C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BCC40"))) PPC_WEAK_FUNC(sub_830BCC40);
PPC_FUNC_IMPL(__imp__sub_830BCC40) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-23268
	ctx.r4.s64 = ctx.r10.s64 + -23268;
	// addi r11,r11,-29444
	ctx.r11.s64 = ctx.r11.s64 + -29444;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27960
	ctx.r3.s64 = ctx.r10.s64 + 27960;
	// li r10,0
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
	ctx.lr = 0x830BCC90;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BCCA0"))) PPC_WEAK_FUNC(sub_830BCCA0);
PPC_FUNC_IMPL(__imp__sub_830BCCA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,25656
	ctx.r5.s64 = ctx.r10.s64 + 25656;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-23216
	ctx.r4.s64 = ctx.r10.s64 + -23216;
	// addi r11,r11,-29404
	ctx.r11.s64 = ctx.r11.s64 + -29404;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,31020
	ctx.r3.s64 = ctx.r10.s64 + 31020;
	// li r10,0
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
	ctx.lr = 0x830BCCF4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BCD08"))) PPC_WEAK_FUNC(sub_830BCD08);
PPC_FUNC_IMPL(__imp__sub_830BCD08) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-12624
	ctx.r4.s64 = ctx.r10.s64 + -12624;
	// addi r11,r11,-29384
	ctx.r11.s64 = ctx.r11.s64 + -29384;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28428
	ctx.r3.s64 = ctx.r10.s64 + 28428;
	// li r10,0
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
	ctx.lr = 0x830BCD58;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BCD68"))) PPC_WEAK_FUNC(sub_830BCD68);
PPC_FUNC_IMPL(__imp__sub_830BCD68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,25656
	ctx.r5.s64 = ctx.r10.s64 + 25656;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-12588
	ctx.r4.s64 = ctx.r10.s64 + -12588;
	// addi r11,r11,-29184
	ctx.r11.s64 = ctx.r11.s64 + -29184;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29112
	ctx.r3.s64 = ctx.r10.s64 + 29112;
	// li r10,0
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
	ctx.lr = 0x830BCDBC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BCDD0"))) PPC_WEAK_FUNC(sub_830BCDD0);
PPC_FUNC_IMPL(__imp__sub_830BCDD0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-14676
	ctx.r4.s64 = ctx.r10.s64 + -14676;
	// addi r11,r11,-28824
	ctx.r11.s64 = ctx.r11.s64 + -28824;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,20868
	ctx.r3.s64 = ctx.r10.s64 + 20868;
	// li r10,0
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
	ctx.lr = 0x830BCE20;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BCE30"))) PPC_WEAK_FUNC(sub_830BCE30);
PPC_FUNC_IMPL(__imp__sub_830BCE30) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,29292
	ctx.r5.s64 = ctx.r10.s64 + 29292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-14648
	ctx.r4.s64 = ctx.r10.s64 + -14648;
	// addi r11,r11,-28424
	ctx.r11.s64 = ctx.r11.s64 + -28424;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29796
	ctx.r3.s64 = ctx.r10.s64 + 29796;
	// li r10,0
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
	ctx.lr = 0x830BCE84;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BCE98"))) PPC_WEAK_FUNC(sub_830BCE98);
PPC_FUNC_IMPL(__imp__sub_830BCE98) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,25656
	ctx.r5.s64 = ctx.r10.s64 + 25656;
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
	// addi r3,r10,21624
	ctx.r3.s64 = ctx.r10.s64 + 21624;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830BCEE4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BCEF8"))) PPC_WEAK_FUNC(sub_830BCEF8);
PPC_FUNC_IMPL(__imp__sub_830BCEF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,21624
	ctx.r5.s64 = ctx.r10.s64 + 21624;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-12372
	ctx.r4.s64 = ctx.r10.s64 + -12372;
	// addi r11,r11,-27864
	ctx.r11.s64 = ctx.r11.s64 + -27864;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,20436
	ctx.r3.s64 = ctx.r10.s64 + 20436;
	// li r10,0
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
	ctx.lr = 0x830BCF4C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BCF60"))) PPC_WEAK_FUNC(sub_830BCF60);
PPC_FUNC_IMPL(__imp__sub_830BCF60) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,25656
	ctx.r5.s64 = ctx.r10.s64 + 25656;
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
	// addi r3,r10,24288
	ctx.r3.s64 = ctx.r10.s64 + 24288;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830BCFAC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BCFC0"))) PPC_WEAK_FUNC(sub_830BCFC0);
PPC_FUNC_IMPL(__imp__sub_830BCFC0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-17496
	ctx.r4.s64 = ctx.r10.s64 + -17496;
	// addi r11,r11,-28484
	ctx.r11.s64 = ctx.r11.s64 + -28484;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22056
	ctx.r3.s64 = ctx.r10.s64 + 22056;
	// li r10,0
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
	ctx.lr = 0x830BD010;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BD020"))) PPC_WEAK_FUNC(sub_830BD020);
PPC_FUNC_IMPL(__imp__sub_830BD020) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,24288
	ctx.r5.s64 = ctx.r10.s64 + 24288;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-17452
	ctx.r4.s64 = ctx.r10.s64 + -17452;
	// addi r11,r11,-27764
	ctx.r11.s64 = ctx.r11.s64 + -27764;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28860
	ctx.r3.s64 = ctx.r10.s64 + 28860;
	// li r10,0
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
	ctx.lr = 0x830BD074;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BD088"))) PPC_WEAK_FUNC(sub_830BD088);
PPC_FUNC_IMPL(__imp__sub_830BD088) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,25656
	ctx.r5.s64 = ctx.r10.s64 + 25656;
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
	// addi r3,r10,20040
	ctx.r3.s64 = ctx.r10.s64 + 20040;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830BD0D4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BD0E8"))) PPC_WEAK_FUNC(sub_830BD0E8);
PPC_FUNC_IMPL(__imp__sub_830BD0E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,25656
	ctx.r5.s64 = ctx.r10.s64 + 25656;
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
	// addi r3,r10,22956
	ctx.r3.s64 = ctx.r10.s64 + 22956;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830BD134;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BD148"))) PPC_WEAK_FUNC(sub_830BD148);
PPC_FUNC_IMPL(__imp__sub_830BD148) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,20040
	ctx.r5.s64 = ctx.r10.s64 + 20040;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-12000
	ctx.r4.s64 = ctx.r10.s64 + -12000;
	// addi r11,r11,-27704
	ctx.r11.s64 = ctx.r11.s64 + -27704;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,30300
	ctx.r3.s64 = ctx.r10.s64 + 30300;
	// li r10,0
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
	ctx.lr = 0x830BD19C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BD1B0"))) PPC_WEAK_FUNC(sub_830BD1B0);
PPC_FUNC_IMPL(__imp__sub_830BD1B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,22956
	ctx.r5.s64 = ctx.r10.s64 + 22956;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-11964
	ctx.r4.s64 = ctx.r10.s64 + -11964;
	// addi r11,r11,-27624
	ctx.r11.s64 = ctx.r11.s64 + -27624;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29040
	ctx.r3.s64 = ctx.r10.s64 + 29040;
	// li r10,0
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
	ctx.lr = 0x830BD204;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BD218"))) PPC_WEAK_FUNC(sub_830BD218);
PPC_FUNC_IMPL(__imp__sub_830BD218) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,25656
	ctx.r5.s64 = ctx.r10.s64 + 25656;
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
	// addi r3,r10,29256
	ctx.r3.s64 = ctx.r10.s64 + 29256;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830BD264;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BD278"))) PPC_WEAK_FUNC(sub_830BD278);
PPC_FUNC_IMPL(__imp__sub_830BD278) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,29256
	ctx.r5.s64 = ctx.r10.s64 + 29256;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-11528
	ctx.r4.s64 = ctx.r10.s64 + -11528;
	// addi r11,r11,-27544
	ctx.r11.s64 = ctx.r11.s64 + -27544;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,19896
	ctx.r3.s64 = ctx.r10.s64 + 19896;
	// li r10,0
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
	ctx.lr = 0x830BD2CC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BD2E0"))) PPC_WEAK_FUNC(sub_830BD2E0);
PPC_FUNC_IMPL(__imp__sub_830BD2E0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-16332
	ctx.r4.s64 = ctx.r10.s64 + -16332;
	// addi r11,r11,-27344
	ctx.r11.s64 = ctx.r11.s64 + -27344;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29436
	ctx.r3.s64 = ctx.r10.s64 + 29436;
	// li r10,0
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
	ctx.lr = 0x830BD330;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BD340"))) PPC_WEAK_FUNC(sub_830BD340);
PPC_FUNC_IMPL(__imp__sub_830BD340) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-16288
	ctx.r4.s64 = ctx.r10.s64 + -16288;
	// addi r11,r11,-27924
	ctx.r11.s64 = ctx.r11.s64 + -27924;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,32244
	ctx.r3.s64 = ctx.r10.s64 + 32244;
	// li r10,0
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
	ctx.lr = 0x830BD390;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BD3A0"))) PPC_WEAK_FUNC(sub_830BD3A0);
PPC_FUNC_IMPL(__imp__sub_830BD3A0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-16256
	ctx.r4.s64 = ctx.r10.s64 + -16256;
	// addi r11,r11,-27144
	ctx.r11.s64 = ctx.r11.s64 + -27144;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,21192
	ctx.r3.s64 = ctx.r10.s64 + 21192;
	// li r10,0
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
	ctx.lr = 0x830BD3F0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BD400"))) PPC_WEAK_FUNC(sub_830BD400);
PPC_FUNC_IMPL(__imp__sub_830BD400) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-16220
	ctx.r4.s64 = ctx.r10.s64 + -16220;
	// addi r11,r11,-27724
	ctx.r11.s64 = ctx.r11.s64 + -27724;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,31380
	ctx.r3.s64 = ctx.r10.s64 + 31380;
	// li r10,0
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
	ctx.lr = 0x830BD450;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BD460"))) PPC_WEAK_FUNC(sub_830BD460);
PPC_FUNC_IMPL(__imp__sub_830BD460) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,25656
	ctx.r5.s64 = ctx.r10.s64 + 25656;
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
	// addi r3,r10,31092
	ctx.r3.s64 = ctx.r10.s64 + 31092;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830BD4AC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BD4C0"))) PPC_WEAK_FUNC(sub_830BD4C0);
PPC_FUNC_IMPL(__imp__sub_830BD4C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,31092
	ctx.r5.s64 = ctx.r10.s64 + 31092;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-11360
	ctx.r4.s64 = ctx.r10.s64 + -11360;
	// addi r11,r11,-26964
	ctx.r11.s64 = ctx.r11.s64 + -26964;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,31848
	ctx.r3.s64 = ctx.r10.s64 + 31848;
	// li r10,0
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
	ctx.lr = 0x830BD514;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BD528"))) PPC_WEAK_FUNC(sub_830BD528);
PPC_FUNC_IMPL(__imp__sub_830BD528) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-14512
	ctx.r4.s64 = ctx.r10.s64 + -14512;
	// addi r11,r11,-26904
	ctx.r11.s64 = ctx.r11.s64 + -26904;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23424
	ctx.r3.s64 = ctx.r10.s64 + 23424;
	// li r10,0
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
	ctx.lr = 0x830BD578;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BD588"))) PPC_WEAK_FUNC(sub_830BD588);
PPC_FUNC_IMPL(__imp__sub_830BD588) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,25656
	ctx.r5.s64 = ctx.r10.s64 + 25656;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-14464
	ctx.r4.s64 = ctx.r10.s64 + -14464;
	// addi r11,r11,-26844
	ctx.r11.s64 = ctx.r11.s64 + -26844;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23172
	ctx.r3.s64 = ctx.r10.s64 + 23172;
	// li r10,0
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
	ctx.lr = 0x830BD5DC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BD5F0"))) PPC_WEAK_FUNC(sub_830BD5F0);
PPC_FUNC_IMPL(__imp__sub_830BD5F0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-17272
	ctx.r4.s64 = ctx.r10.s64 + -17272;
	// addi r11,r11,-26824
	ctx.r11.s64 = ctx.r11.s64 + -26824;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,30156
	ctx.r3.s64 = ctx.r10.s64 + 30156;
	// li r10,0
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
	ctx.lr = 0x830BD640;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BD650"))) PPC_WEAK_FUNC(sub_830BD650);
PPC_FUNC_IMPL(__imp__sub_830BD650) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,23172
	ctx.r5.s64 = ctx.r10.s64 + 23172;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-17212
	ctx.r4.s64 = ctx.r10.s64 + -17212;
	// addi r11,r11,-26764
	ctx.r11.s64 = ctx.r11.s64 + -26764;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23568
	ctx.r3.s64 = ctx.r10.s64 + 23568;
	// li r10,0
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
	ctx.lr = 0x830BD6A4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BD6B8"))) PPC_WEAK_FUNC(sub_830BD6B8);
PPC_FUNC_IMPL(__imp__sub_830BD6B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,25656
	ctx.r5.s64 = ctx.r10.s64 + 25656;
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
	// addi r3,r10,32064
	ctx.r3.s64 = ctx.r10.s64 + 32064;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830BD704;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BD718"))) PPC_WEAK_FUNC(sub_830BD718);
PPC_FUNC_IMPL(__imp__sub_830BD718) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,32064
	ctx.r5.s64 = ctx.r10.s64 + 32064;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-11032
	ctx.r4.s64 = ctx.r10.s64 + -11032;
	// addi r11,r11,-26744
	ctx.r11.s64 = ctx.r11.s64 + -26744;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24252
	ctx.r3.s64 = ctx.r10.s64 + 24252;
	// li r10,0
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
	ctx.lr = 0x830BD76C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BD780"))) PPC_WEAK_FUNC(sub_830BD780);
PPC_FUNC_IMPL(__imp__sub_830BD780) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-13844
	ctx.r4.s64 = ctx.r10.s64 + -13844;
	// addi r11,r11,-26604
	ctx.r11.s64 = ctx.r11.s64 + -26604;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26808
	ctx.r3.s64 = ctx.r10.s64 + 26808;
	// li r10,0
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
	ctx.lr = 0x830BD7D0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BD7E0"))) PPC_WEAK_FUNC(sub_830BD7E0);
PPC_FUNC_IMPL(__imp__sub_830BD7E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,25656
	ctx.r5.s64 = ctx.r10.s64 + 25656;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-13828
	ctx.r4.s64 = ctx.r10.s64 + -13828;
	// addi r11,r11,-26564
	ctx.r11.s64 = ctx.r11.s64 + -26564;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25224
	ctx.r3.s64 = ctx.r10.s64 + 25224;
	// li r10,0
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
	ctx.lr = 0x830BD834;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BD848"))) PPC_WEAK_FUNC(sub_830BD848);
PPC_FUNC_IMPL(__imp__sub_830BD848) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,25656
	ctx.r5.s64 = ctx.r10.s64 + 25656;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-13808
	ctx.r4.s64 = ctx.r10.s64 + -13808;
	// addi r11,r11,-26504
	ctx.r11.s64 = ctx.r11.s64 + -26504;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29220
	ctx.r3.s64 = ctx.r10.s64 + 29220;
	// li r10,0
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
	ctx.lr = 0x830BD89C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BD8B0"))) PPC_WEAK_FUNC(sub_830BD8B0);
PPC_FUNC_IMPL(__imp__sub_830BD8B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,25656
	ctx.r5.s64 = ctx.r10.s64 + 25656;
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
	// addi r3,r10,22236
	ctx.r3.s64 = ctx.r10.s64 + 22236;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830BD8FC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BD910"))) PPC_WEAK_FUNC(sub_830BD910);
PPC_FUNC_IMPL(__imp__sub_830BD910) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,22236
	ctx.r5.s64 = ctx.r10.s64 + 22236;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-10860
	ctx.r4.s64 = ctx.r10.s64 + -10860;
	// addi r11,r11,-26444
	ctx.r11.s64 = ctx.r11.s64 + -26444;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29724
	ctx.r3.s64 = ctx.r10.s64 + 29724;
	// li r10,0
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
	ctx.lr = 0x830BD964;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BD978"))) PPC_WEAK_FUNC(sub_830BD978);
PPC_FUNC_IMPL(__imp__sub_830BD978) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,25656
	ctx.r5.s64 = ctx.r10.s64 + 25656;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-10620
	ctx.r4.s64 = ctx.r10.s64 + -10620;
	// addi r11,r11,-26384
	ctx.r11.s64 = ctx.r11.s64 + -26384;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27420
	ctx.r3.s64 = ctx.r10.s64 + 27420;
	// li r10,0
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
	ctx.lr = 0x830BD9CC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BD9E0"))) PPC_WEAK_FUNC(sub_830BD9E0);
PPC_FUNC_IMPL(__imp__sub_830BD9E0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r5,r10,25656
	ctx.r5.s64 = ctx.r10.s64 + 25656;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,-26364
	ctx.r11.s64 = ctx.r11.s64 + -26364;
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
	// addi r3,r10,20292
	ctx.r3.s64 = ctx.r10.s64 + 20292;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830BDA30;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BDA40"))) PPC_WEAK_FUNC(sub_830BDA40);
PPC_FUNC_IMPL(__imp__sub_830BDA40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,27420
	ctx.r5.s64 = ctx.r10.s64 + 27420;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-14192
	ctx.r4.s64 = ctx.r10.s64 + -14192;
	// addi r11,r11,-26344
	ctx.r11.s64 = ctx.r11.s64 + -26344;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25692
	ctx.r3.s64 = ctx.r10.s64 + 25692;
	// li r10,0
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
	ctx.lr = 0x830BDA94;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BDAA8"))) PPC_WEAK_FUNC(sub_830BDAA8);
PPC_FUNC_IMPL(__imp__sub_830BDAA8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-3704
	ctx.r4.s64 = ctx.r10.s64 + -3704;
	// addi r11,r11,-23120
	ctx.r11.s64 = ctx.r11.s64 + -23120;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-23536
	ctx.r3.s64 = ctx.r10.s64 + -23536;
	// li r10,0
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
	ctx.lr = 0x830BDAF8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BDB08"))) PPC_WEAK_FUNC(sub_830BDB08);
PPC_FUNC_IMPL(__imp__sub_830BDB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r10,r10,-964
	ctx.r10.s64 = ctx.r10.s64 + -964;
	// lwz r11,-23020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23020);
	// stw r11,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BDB20"))) PPC_WEAK_FUNC(sub_830BDB20);
PPC_FUNC_IMPL(__imp__sub_830BDB20) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r11,-21008
	ctx.r9.s64 = ctx.r11.s64 + -21008;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-3680
	ctx.r4.s64 = ctx.r10.s64 + -3680;
	// addi r11,r11,-964
	ctx.r11.s64 = ctx.r11.s64 + -964;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-27568
	ctx.r3.s64 = ctx.r10.s64 + -27568;
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
	ctx.lr = 0x830BDB78;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BDB88"))) PPC_WEAK_FUNC(sub_830BDB88);
PPC_FUNC_IMPL(__imp__sub_830BDB88) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,596
	ctx.r4.s64 = ctx.r10.s64 + 596;
	// addi r11,r11,-23016
	ctx.r11.s64 = ctx.r11.s64 + -23016;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-22384
	ctx.r3.s64 = ctx.r10.s64 + -22384;
	// li r10,0
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
	ctx.lr = 0x830BDBD8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BDBE8"))) PPC_WEAK_FUNC(sub_830BDBE8);
PPC_FUNC_IMPL(__imp__sub_830BDBE8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,624
	ctx.r4.s64 = ctx.r10.s64 + 624;
	// addi r11,r11,-22976
	ctx.r11.s64 = ctx.r11.s64 + -22976;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-21628
	ctx.r3.s64 = ctx.r10.s64 + -21628;
	// li r10,0
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
	ctx.lr = 0x830BDC38;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BDC48"))) PPC_WEAK_FUNC(sub_830BDC48);
PPC_FUNC_IMPL(__imp__sub_830BDC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,-25552
	ctx.r5.s64 = ctx.r10.s64 + -25552;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-8296
	ctx.r4.s64 = ctx.r10.s64 + -8296;
	// addi r11,r11,-22936
	ctx.r11.s64 = ctx.r11.s64 + -22936;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-31420
	ctx.r3.s64 = ctx.r10.s64 + -31420;
	// li r10,0
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
	ctx.lr = 0x830BDC9C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BDCB0"))) PPC_WEAK_FUNC(sub_830BDCB0);
PPC_FUNC_IMPL(__imp__sub_830BDCB0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,644
	ctx.r4.s64 = ctx.r10.s64 + 644;
	// addi r11,r11,-22856
	ctx.r11.s64 = ctx.r11.s64 + -22856;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-23464
	ctx.r3.s64 = ctx.r10.s64 + -23464;
	// li r10,0
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
	ctx.lr = 0x830BDD00;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BDD10"))) PPC_WEAK_FUNC(sub_830BDD10);
PPC_FUNC_IMPL(__imp__sub_830BDD10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r5,r10,-31420
	ctx.r5.s64 = ctx.r10.s64 + -31420;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,700
	ctx.r4.s64 = ctx.r10.s64 + 700;
	// addi r11,r11,-22736
	ctx.r11.s64 = ctx.r11.s64 + -22736;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-21160
	ctx.r3.s64 = ctx.r10.s64 + -21160;
	// li r10,0
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
	ctx.lr = 0x830BDD64;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BDD78"))) PPC_WEAK_FUNC(sub_830BDD78);
PPC_FUNC_IMPL(__imp__sub_830BDD78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-31420
	ctx.r5.s64 = ctx.r10.s64 + -31420;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,736
	ctx.r4.s64 = ctx.r10.s64 + 736;
	// addi r11,r11,-22756
	ctx.r11.s64 = ctx.r11.s64 + -22756;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-30808
	ctx.r3.s64 = ctx.r10.s64 + -30808;
	// li r10,0
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
	ctx.lr = 0x830BDDCC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BDDE0"))) PPC_WEAK_FUNC(sub_830BDDE0);
PPC_FUNC_IMPL(__imp__sub_830BDDE0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,768
	ctx.r4.s64 = ctx.r10.s64 + 768;
	// addi r11,r11,-22576
	ctx.r11.s64 = ctx.r11.s64 + -22576;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-24868
	ctx.r3.s64 = ctx.r10.s64 + -24868;
	// li r10,0
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
	ctx.lr = 0x830BDE30;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BDE40"))) PPC_WEAK_FUNC(sub_830BDE40);
PPC_FUNC_IMPL(__imp__sub_830BDE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r5,r10,-31420
	ctx.r5.s64 = ctx.r10.s64 + -31420;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,816
	ctx.r4.s64 = ctx.r10.s64 + 816;
	// addi r11,r11,-22472
	ctx.r11.s64 = ctx.r11.s64 + -22472;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-22600
	ctx.r3.s64 = ctx.r10.s64 + -22600;
	// li r10,0
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
	ctx.lr = 0x830BDE94;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BDEA8"))) PPC_WEAK_FUNC(sub_830BDEA8);
PPC_FUNC_IMPL(__imp__sub_830BDEA8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,844
	ctx.r4.s64 = ctx.r10.s64 + 844;
	// addi r11,r11,-22596
	ctx.r11.s64 = ctx.r11.s64 + -22596;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-29188
	ctx.r3.s64 = ctx.r10.s64 + -29188;
	// li r10,0
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
	ctx.lr = 0x830BDEF8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BDF08"))) PPC_WEAK_FUNC(sub_830BDF08);
PPC_FUNC_IMPL(__imp__sub_830BDF08) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-3432
	ctx.r4.s64 = ctx.r10.s64 + -3432;
	// addi r11,r11,-22312
	ctx.r11.s64 = ctx.r11.s64 + -22312;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-24076
	ctx.r3.s64 = ctx.r10.s64 + -24076;
	// li r10,0
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
	ctx.lr = 0x830BDF58;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BDF68"))) PPC_WEAK_FUNC(sub_830BDF68);
PPC_FUNC_IMPL(__imp__sub_830BDF68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,-20956
	ctx.r9.s64 = ctx.r10.s64 + -20956;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r5,r10,-25552
	ctx.r5.s64 = ctx.r10.s64 + -25552;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-22332
	ctx.r11.s64 = ctx.r11.s64 + -22332;
	// addi r4,r10,868
	ctx.r4.s64 = ctx.r10.s64 + 868;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-21124
	ctx.r3.s64 = ctx.r10.s64 + -21124;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830BDFC0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BDFD0"))) PPC_WEAK_FUNC(sub_830BDFD0);
PPC_FUNC_IMPL(__imp__sub_830BDFD0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,888
	ctx.r4.s64 = ctx.r10.s64 + 888;
	// addi r11,r11,-22232
	ctx.r11.s64 = ctx.r11.s64 + -22232;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-29008
	ctx.r3.s64 = ctx.r10.s64 + -29008;
	// li r10,0
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
	ctx.lr = 0x830BE020;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BE030"))) PPC_WEAK_FUNC(sub_830BE030);
PPC_FUNC_IMPL(__imp__sub_830BE030) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,924
	ctx.r4.s64 = ctx.r10.s64 + 924;
	// addi r11,r11,-22168
	ctx.r11.s64 = ctx.r11.s64 + -22168;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-26308
	ctx.r3.s64 = ctx.r10.s64 + -26308;
	// li r10,0
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
	ctx.lr = 0x830BE080;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BE090"))) PPC_WEAK_FUNC(sub_830BE090);
PPC_FUNC_IMPL(__imp__sub_830BE090) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,960
	ctx.r4.s64 = ctx.r10.s64 + 960;
	// addi r11,r11,-22048
	ctx.r11.s64 = ctx.r11.s64 + -22048;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-20800
	ctx.r3.s64 = ctx.r10.s64 + -20800;
	// li r10,0
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
	ctx.lr = 0x830BE0E0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BE0F0"))) PPC_WEAK_FUNC(sub_830BE0F0);
PPC_FUNC_IMPL(__imp__sub_830BE0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-25552
	ctx.r5.s64 = ctx.r10.s64 + -25552;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,984
	ctx.r4.s64 = ctx.r10.s64 + 984;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-24796
	ctx.r3.s64 = ctx.r10.s64 + -24796;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830BE13C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BE150"))) PPC_WEAK_FUNC(sub_830BE150);
PPC_FUNC_IMPL(__imp__sub_830BE150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,-24796
	ctx.r5.s64 = ctx.r10.s64 + -24796;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,1012
	ctx.r4.s64 = ctx.r10.s64 + 1012;
	// addi r11,r11,-21928
	ctx.r11.s64 = ctx.r11.s64 + -21928;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-25948
	ctx.r3.s64 = ctx.r10.s64 + -25948;
	// li r10,0
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
	ctx.lr = 0x830BE1A4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BE1B8"))) PPC_WEAK_FUNC(sub_830BE1B8);
PPC_FUNC_IMPL(__imp__sub_830BE1B8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-3368
	ctx.r4.s64 = ctx.r10.s64 + -3368;
	// addi r11,r11,-21848
	ctx.r11.s64 = ctx.r11.s64 + -21848;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-30160
	ctx.r3.s64 = ctx.r10.s64 + -30160;
	// li r10,0
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
	ctx.lr = 0x830BE208;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BE218"))) PPC_WEAK_FUNC(sub_830BE218);
PPC_FUNC_IMPL(__imp__sub_830BE218) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-9408
	ctx.r4.s64 = ctx.r10.s64 + -9408;
	// addi r11,r11,-21808
	ctx.r11.s64 = ctx.r11.s64 + -21808;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-27892
	ctx.r3.s64 = ctx.r10.s64 + -27892;
	// li r10,0
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
	ctx.lr = 0x830BE268;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BE278"))) PPC_WEAK_FUNC(sub_830BE278);
PPC_FUNC_IMPL(__imp__sub_830BE278) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-3360
	ctx.r4.s64 = ctx.r10.s64 + -3360;
	// addi r11,r11,-21728
	ctx.r11.s64 = ctx.r11.s64 + -21728;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-32104
	ctx.r3.s64 = ctx.r10.s64 + -32104;
	// li r10,0
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
	ctx.lr = 0x830BE2C8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BE2D8"))) PPC_WEAK_FUNC(sub_830BE2D8);
PPC_FUNC_IMPL(__imp__sub_830BE2D8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-8824
	ctx.r4.s64 = ctx.r10.s64 + -8824;
	// addi r11,r11,-21648
	ctx.r11.s64 = ctx.r11.s64 + -21648;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-32500
	ctx.r3.s64 = ctx.r10.s64 + -32500;
	// li r10,0
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
	ctx.lr = 0x830BE328;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BE338"))) PPC_WEAK_FUNC(sub_830BE338);
PPC_FUNC_IMPL(__imp__sub_830BE338) {
	PPC_FUNC_PROLOGUE();
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
	// li r7,11
	ctx.r7.s64 = 11;
	// addi r9,r10,-20912
	ctx.r9.s64 = ctx.r10.s64 + -20912;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,25592
	ctx.r4.s64 = ctx.r10.s64 + 25592;
	// addi r11,r11,-21544
	ctx.r11.s64 = ctx.r11.s64 + -21544;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,32460
	ctx.r3.s64 = ctx.r10.s64 + 32460;
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
	ctx.lr = 0x830BE38C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BE3A0"))) PPC_WEAK_FUNC(sub_830BE3A0);
PPC_FUNC_IMPL(__imp__sub_830BE3A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r8,11
	ctx.r8.s64 = 11;
	// addi r7,r10,-21264
	ctx.r7.s64 = ctx.r10.s64 + -21264;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r10,-21804
	ctx.r4.s64 = ctx.r10.s64 + -21804;
	// addi r11,r11,-20900
	ctx.r11.s64 = ctx.r11.s64 + -20900;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-21844
	ctx.r3.s64 = ctx.r10.s64 + -21844;
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
	ctx.lr = 0x830BE3F8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BE408"))) PPC_WEAK_FUNC(sub_830BE408);
PPC_FUNC_IMPL(__imp__sub_830BE408) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,-20832
	ctx.r9.s64 = ctx.r10.s64 + -20832;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,25636
	ctx.r4.s64 = ctx.r10.s64 + 25636;
	// addi r11,r11,-21044
	ctx.r11.s64 = ctx.r11.s64 + -21044;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-31852
	ctx.r3.s64 = ctx.r10.s64 + -31852;
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
	ctx.lr = 0x830BE45C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BE470"))) PPC_WEAK_FUNC(sub_830BE470);
PPC_FUNC_IMPL(__imp__sub_830BE470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-23176
	ctx.r5.s64 = ctx.r10.s64 + -23176;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,25684
	ctx.r4.s64 = ctx.r10.s64 + 25684;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-28072
	ctx.r3.s64 = ctx.r10.s64 + -28072;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830BE4BC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BE4D0"))) PPC_WEAK_FUNC(sub_830BE4D0);
PPC_FUNC_IMPL(__imp__sub_830BE4D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r8,r10,-20944
	ctx.r8.s64 = ctx.r10.s64 + -20944;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r10,-28072
	ctx.r5.s64 = ctx.r10.s64 + -28072;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,-20820
	ctx.r11.s64 = ctx.r11.s64 + -20820;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,25700
	ctx.r4.s64 = ctx.r10.s64 + 25700;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-32464
	ctx.r3.s64 = ctx.r10.s64 + -32464;
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
	ctx.lr = 0x830BE52C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BE540"))) PPC_WEAK_FUNC(sub_830BE540);
PPC_FUNC_IMPL(__imp__sub_830BE540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-32464
	ctx.r5.s64 = ctx.r10.s64 + -32464;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,25728
	ctx.r4.s64 = ctx.r10.s64 + 25728;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-25120
	ctx.r3.s64 = ctx.r10.s64 + -25120;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830BE58C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BE5A0"))) PPC_WEAK_FUNC(sub_830BE5A0);
PPC_FUNC_IMPL(__imp__sub_830BE5A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,-25552
	ctx.r5.s64 = ctx.r10.s64 + -25552;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-8324
	ctx.r4.s64 = ctx.r10.s64 + -8324;
	// addi r11,r11,-21324
	ctx.r11.s64 = ctx.r11.s64 + -21324;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-26452
	ctx.r3.s64 = ctx.r10.s64 + -26452;
	// li r10,0
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
	ctx.lr = 0x830BE5F4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BE608"))) PPC_WEAK_FUNC(sub_830BE608);
PPC_FUNC_IMPL(__imp__sub_830BE608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r8,r10,-20800
	ctx.r8.s64 = ctx.r10.s64 + -20800;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r10,-28072
	ctx.r5.s64 = ctx.r10.s64 + -28072;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,-20776
	ctx.r11.s64 = ctx.r11.s64 + -20776;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,-8344
	ctx.r4.s64 = ctx.r10.s64 + -8344;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-25804
	ctx.r3.s64 = ctx.r10.s64 + -25804;
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
	ctx.lr = 0x830BE664;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BE678"))) PPC_WEAK_FUNC(sub_830BE678);
PPC_FUNC_IMPL(__imp__sub_830BE678) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-8900
	ctx.r4.s64 = ctx.r10.s64 + -8900;
	// addi r11,r11,-21004
	ctx.r11.s64 = ctx.r11.s64 + -21004;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-28432
	ctx.r3.s64 = ctx.r10.s64 + -28432;
	// li r10,0
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
	ctx.lr = 0x830BE6C8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BE6D8"))) PPC_WEAK_FUNC(sub_830BE6D8);
PPC_FUNC_IMPL(__imp__sub_830BE6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r10,r10,632
	ctx.r10.s64 = ctx.r10.s64 + 632;
	// lwz r11,-20804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20804);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BE6F0"))) PPC_WEAK_FUNC(sub_830BE6F0);
PPC_FUNC_IMPL(__imp__sub_830BE6F0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r11,-20704
	ctx.r9.s64 = ctx.r11.s64 + -20704;
	// addi r5,r10,-28072
	ctx.r5.s64 = ctx.r10.s64 + -28072;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
	// li r7,15
	ctx.r7.s64 = 15;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-8884
	ctx.r4.s64 = ctx.r10.s64 + -8884;
	// addi r11,r11,632
	ctx.r11.s64 = ctx.r11.s64 + 632;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-32284
	ctx.r3.s64 = ctx.r10.s64 + -32284;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830BE74C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BE760"))) PPC_WEAK_FUNC(sub_830BE760);
PPC_FUNC_IMPL(__imp__sub_830BE760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,-28072
	ctx.r5.s64 = ctx.r10.s64 + -28072;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-21748
	ctx.r4.s64 = ctx.r10.s64 + -21748;
	// addi r11,r11,-20640
	ctx.r11.s64 = ctx.r11.s64 + -20640;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-25408
	ctx.r3.s64 = ctx.r10.s64 + -25408;
	// li r10,0
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
	ctx.lr = 0x830BE7B4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BE7C8"))) PPC_WEAK_FUNC(sub_830BE7C8);
PPC_FUNC_IMPL(__imp__sub_830BE7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-28072
	ctx.r5.s64 = ctx.r10.s64 + -28072;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,25940
	ctx.r4.s64 = ctx.r10.s64 + 25940;
	// addi r11,r11,-20600
	ctx.r11.s64 = ctx.r11.s64 + -20600;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-30916
	ctx.r3.s64 = ctx.r10.s64 + -30916;
	// li r10,0
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
	ctx.lr = 0x830BE81C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BE830"))) PPC_WEAK_FUNC(sub_830BE830);
PPC_FUNC_IMPL(__imp__sub_830BE830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-23176
	ctx.r5.s64 = ctx.r10.s64 + -23176;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,25988
	ctx.r4.s64 = ctx.r10.s64 + 25988;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-29296
	ctx.r3.s64 = ctx.r10.s64 + -29296;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830BE87C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BE890"))) PPC_WEAK_FUNC(sub_830BE890);
PPC_FUNC_IMPL(__imp__sub_830BE890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,-29296
	ctx.r5.s64 = ctx.r10.s64 + -29296;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-21724
	ctx.r4.s64 = ctx.r10.s64 + -21724;
	// addi r11,r11,-20580
	ctx.r11.s64 = ctx.r11.s64 + -20580;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-23320
	ctx.r3.s64 = ctx.r10.s64 + -23320;
	// li r10,0
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
	ctx.lr = 0x830BE8E4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BE8F8"))) PPC_WEAK_FUNC(sub_830BE8F8);
PPC_FUNC_IMPL(__imp__sub_830BE8F8) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,4
	ctx.r8.s64 = 4;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-21700
	ctx.r4.s64 = ctx.r10.s64 + -21700;
	// addi r11,r11,-20520
	ctx.r11.s64 = ctx.r11.s64 + -20520;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-27424
	ctx.r3.s64 = ctx.r10.s64 + -27424;
	// li r10,0
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
	ctx.lr = 0x830BE948;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BE958"))) PPC_WEAK_FUNC(sub_830BE958);
PPC_FUNC_IMPL(__imp__sub_830BE958) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-9080
	ctx.r4.s64 = ctx.r10.s64 + -9080;
	// addi r11,r11,-20440
	ctx.r11.s64 = ctx.r11.s64 + -20440;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-31564
	ctx.r3.s64 = ctx.r10.s64 + -31564;
	// li r10,0
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
	ctx.lr = 0x830BE9A8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BE9B8"))) PPC_WEAK_FUNC(sub_830BE9B8);
PPC_FUNC_IMPL(__imp__sub_830BE9B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r10,-20400
	ctx.r8.s64 = ctx.r10.s64 + -20400;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r10,-29296
	ctx.r5.s64 = ctx.r10.s64 + -29296;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,-20624
	ctx.r11.s64 = ctx.r11.s64 + -20624;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,-9428
	ctx.r4.s64 = ctx.r10.s64 + -9428;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-28936
	ctx.r3.s64 = ctx.r10.s64 + -28936;
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
	ctx.lr = 0x830BEA14;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BEA28"))) PPC_WEAK_FUNC(sub_830BEA28);
PPC_FUNC_IMPL(__imp__sub_830BEA28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-29296
	ctx.r5.s64 = ctx.r10.s64 + -29296;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-9108
	ctx.r4.s64 = ctx.r10.s64 + -9108;
	// addi r11,r11,-20540
	ctx.r11.s64 = ctx.r11.s64 + -20540;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-24724
	ctx.r3.s64 = ctx.r10.s64 + -24724;
	// li r10,0
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
	ctx.lr = 0x830BEA7C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BEA90"))) PPC_WEAK_FUNC(sub_830BEA90);
PPC_FUNC_IMPL(__imp__sub_830BEA90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r8,r10,-20080
	ctx.r8.s64 = ctx.r10.s64 + -20080;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r10,-29296
	ctx.r5.s64 = ctx.r10.s64 + -29296;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,-20548
	ctx.r11.s64 = ctx.r11.s64 + -20548;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,26032
	ctx.r4.s64 = ctx.r10.s64 + 26032;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-29080
	ctx.r3.s64 = ctx.r10.s64 + -29080;
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
	ctx.lr = 0x830BEAEC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BEB00"))) PPC_WEAK_FUNC(sub_830BEB00);
PPC_FUNC_IMPL(__imp__sub_830BEB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r5,r10,-29296
	ctx.r5.s64 = ctx.r10.s64 + -29296;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-8380
	ctx.r4.s64 = ctx.r10.s64 + -8380;
	// addi r11,r11,-20000
	ctx.r11.s64 = ctx.r11.s64 + -20000;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-31816
	ctx.r3.s64 = ctx.r10.s64 + -31816;
	// li r10,0
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
	ctx.lr = 0x830BEB54;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BEB68"))) PPC_WEAK_FUNC(sub_830BEB68);
PPC_FUNC_IMPL(__imp__sub_830BEB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,11
	ctx.r8.s64 = 11;
	// addi r5,r10,-29296
	ctx.r5.s64 = ctx.r10.s64 + -29296;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,26052
	ctx.r4.s64 = ctx.r10.s64 + 26052;
	// addi r11,r11,-19816
	ctx.r11.s64 = ctx.r11.s64 + -19816;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-30088
	ctx.r3.s64 = ctx.r10.s64 + -30088;
	// li r10,0
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
	ctx.lr = 0x830BEBBC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BEBD0"))) PPC_WEAK_FUNC(sub_830BEBD0);
PPC_FUNC_IMPL(__imp__sub_830BEBD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,-29296
	ctx.r5.s64 = ctx.r10.s64 + -29296;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,26072
	ctx.r4.s64 = ctx.r10.s64 + 26072;
	// addi r11,r11,-19596
	ctx.r11.s64 = ctx.r11.s64 + -19596;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-28396
	ctx.r3.s64 = ctx.r10.s64 + -28396;
	// li r10,0
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
	ctx.lr = 0x830BEC24;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BEC38"))) PPC_WEAK_FUNC(sub_830BEC38);
PPC_FUNC_IMPL(__imp__sub_830BEC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r10,r10,-1424
	ctx.r10.s64 = ctx.r10.s64 + -1424;
	// lwz r11,-19820(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19820);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BEC50"))) PPC_WEAK_FUNC(sub_830BEC50);
PPC_FUNC_IMPL(__imp__sub_830BEC50) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r11,-20500
	ctx.r9.s64 = ctx.r11.s64 + -20500;
	// addi r5,r10,-29296
	ctx.r5.s64 = ctx.r10.s64 + -29296;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// li r7,17
	ctx.r7.s64 = 17;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,26276
	ctx.r4.s64 = ctx.r10.s64 + 26276;
	// addi r11,r11,-1424
	ctx.r11.s64 = ctx.r11.s64 + -1424;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-30340
	ctx.r3.s64 = ctx.r10.s64 + -30340;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830BECAC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BECC0"))) PPC_WEAK_FUNC(sub_830BECC0);
PPC_FUNC_IMPL(__imp__sub_830BECC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r10,-19556
	ctx.r8.s64 = ctx.r10.s64 + -19556;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r10,-25552
	ctx.r5.s64 = ctx.r10.s64 + -25552;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,-20396
	ctx.r11.s64 = ctx.r11.s64 + -20396;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,26300
	ctx.r4.s64 = ctx.r10.s64 + 26300;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-26992
	ctx.r3.s64 = ctx.r10.s64 + -26992;
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
	ctx.lr = 0x830BED1C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BED30"))) PPC_WEAK_FUNC(sub_830BED30);
PPC_FUNC_IMPL(__imp__sub_830BED30) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-9200
	ctx.r4.s64 = ctx.r10.s64 + -9200;
	// addi r11,r11,-19512
	ctx.r11.s64 = ctx.r11.s64 + -19512;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-23572
	ctx.r3.s64 = ctx.r10.s64 + -23572;
	// li r10,0
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
	ctx.lr = 0x830BED80;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BED90"))) PPC_WEAK_FUNC(sub_830BED90);
PPC_FUNC_IMPL(__imp__sub_830BED90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r10,r10,-504
	ctx.r10.s64 = ctx.r10.s64 + -504;
	// lwz r11,-19516(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19516);
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BEDA8"))) PPC_WEAK_FUNC(sub_830BEDA8);
PPC_FUNC_IMPL(__imp__sub_830BEDA8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r11,-20360
	ctx.r9.s64 = ctx.r11.s64 + -20360;
	// addi r5,r10,-29296
	ctx.r5.s64 = ctx.r10.s64 + -29296;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// li r7,11
	ctx.r7.s64 = 11;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-9264
	ctx.r4.s64 = ctx.r10.s64 + -9264;
	// addi r11,r11,-504
	ctx.r11.s64 = ctx.r11.s64 + -504;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-31996
	ctx.r3.s64 = ctx.r10.s64 + -31996;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830BEE04;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BEE18"))) PPC_WEAK_FUNC(sub_830BEE18);
PPC_FUNC_IMPL(__imp__sub_830BEE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,-29296
	ctx.r5.s64 = ctx.r10.s64 + -29296;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-9236
	ctx.r4.s64 = ctx.r10.s64 + -9236;
	// addi r11,r11,-19392
	ctx.r11.s64 = ctx.r11.s64 + -19392;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-21808
	ctx.r3.s64 = ctx.r10.s64 + -21808;
	// li r10,0
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
	ctx.lr = 0x830BEE6C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BEE80"))) PPC_WEAK_FUNC(sub_830BEE80);
PPC_FUNC_IMPL(__imp__sub_830BEE80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r8,r10,-19352
	ctx.r8.s64 = ctx.r10.s64 + -19352;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r10,-29296
	ctx.r5.s64 = ctx.r10.s64 + -29296;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,-20296
	ctx.r11.s64 = ctx.r11.s64 + -20296;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,32016
	ctx.r4.s64 = ctx.r10.s64 + 32016;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-32176
	ctx.r3.s64 = ctx.r10.s64 + -32176;
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
	ctx.lr = 0x830BEEDC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BEEF0"))) PPC_WEAK_FUNC(sub_830BEEF0);
PPC_FUNC_IMPL(__imp__sub_830BEEF0) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,14
	ctx.r8.s64 = 14;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-9296
	ctx.r4.s64 = ctx.r10.s64 + -9296;
	// addi r11,r11,-19232
	ctx.r11.s64 = ctx.r11.s64 + -19232;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-21664
	ctx.r3.s64 = ctx.r10.s64 + -21664;
	// li r10,0
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
	ctx.lr = 0x830BEF40;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BEF50"))) PPC_WEAK_FUNC(sub_830BEF50);
PPC_FUNC_IMPL(__imp__sub_830BEF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r8,r10,-18952
	ctx.r8.s64 = ctx.r10.s64 + -18952;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r10,-29296
	ctx.r5.s64 = ctx.r10.s64 + -29296;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,-20260
	ctx.r11.s64 = ctx.r11.s64 + -20260;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,-9360
	ctx.r4.s64 = ctx.r10.s64 + -9360;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-30520
	ctx.r3.s64 = ctx.r10.s64 + -30520;
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
	ctx.lr = 0x830BEFAC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BEFC0"))) PPC_WEAK_FUNC(sub_830BEFC0);
PPC_FUNC_IMPL(__imp__sub_830BEFC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-29296
	ctx.r5.s64 = ctx.r10.s64 + -29296;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-9332
	ctx.r4.s64 = ctx.r10.s64 + -9332;
	// addi r11,r11,-18792
	ctx.r11.s64 = ctx.r11.s64 + -18792;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-26848
	ctx.r3.s64 = ctx.r10.s64 + -26848;
	// li r10,0
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
	ctx.lr = 0x830BF014;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BF028"))) PPC_WEAK_FUNC(sub_830BF028);
PPC_FUNC_IMPL(__imp__sub_830BF028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r5,r10,-31816
	ctx.r5.s64 = ctx.r10.s64 + -31816;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-8400
	ctx.r4.s64 = ctx.r10.s64 + -8400;
	// addi r11,r11,-18752
	ctx.r11.s64 = ctx.r11.s64 + -18752;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-23068
	ctx.r3.s64 = ctx.r10.s64 + -23068;
	// li r10,0
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
	ctx.lr = 0x830BF07C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BF090"))) PPC_WEAK_FUNC(sub_830BF090);
PPC_FUNC_IMPL(__imp__sub_830BF090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-29296
	ctx.r5.s64 = ctx.r10.s64 + -29296;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-28020
	ctx.r4.s64 = ctx.r10.s64 + -28020;
	// addi r11,r11,-18772
	ctx.r11.s64 = ctx.r11.s64 + -18772;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-27280
	ctx.r3.s64 = ctx.r10.s64 + -27280;
	// li r10,0
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
	ctx.lr = 0x830BF0E4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BF0F8"))) PPC_WEAK_FUNC(sub_830BF0F8);
PPC_FUNC_IMPL(__imp__sub_830BF0F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,-20188
	ctx.r9.s64 = ctx.r10.s64 + -20188;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r5,r10,-25552
	ctx.r5.s64 = ctx.r10.s64 + -25552;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-18628
	ctx.r11.s64 = ctx.r11.s64 + -18628;
	// addi r4,r10,26540
	ctx.r4.s64 = ctx.r10.s64 + 26540;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-23176
	ctx.r3.s64 = ctx.r10.s64 + -23176;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830BF150;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BF160"))) PPC_WEAK_FUNC(sub_830BF160);
PPC_FUNC_IMPL(__imp__sub_830BF160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-25552
	ctx.r5.s64 = ctx.r10.s64 + -25552;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-21684
	ctx.r4.s64 = ctx.r10.s64 + -21684;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-31528
	ctx.r3.s64 = ctx.r10.s64 + -31528;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830BF1AC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BF1C0"))) PPC_WEAK_FUNC(sub_830BF1C0);
PPC_FUNC_IMPL(__imp__sub_830BF1C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-31528
	ctx.r5.s64 = ctx.r10.s64 + -31528;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-21668
	ctx.r4.s64 = ctx.r10.s64 + -21668;
	// addi r11,r11,-18608
	ctx.r11.s64 = ctx.r11.s64 + -18608;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-24652
	ctx.r3.s64 = ctx.r10.s64 + -24652;
	// li r10,0
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
	ctx.lr = 0x830BF214;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BF228"))) PPC_WEAK_FUNC(sub_830BF228);
PPC_FUNC_IMPL(__imp__sub_830BF228) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,4
	ctx.r8.s64 = 4;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-15348
	ctx.r4.s64 = ctx.r10.s64 + -15348;
	// addi r11,r11,-18584
	ctx.r11.s64 = ctx.r11.s64 + -18584;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-22960
	ctx.r3.s64 = ctx.r10.s64 + -22960;
	// li r10,0
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
	ctx.lr = 0x830BF278;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BF288"))) PPC_WEAK_FUNC(sub_830BF288);
PPC_FUNC_IMPL(__imp__sub_830BF288) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r11,-20088
	ctx.r9.s64 = ctx.r11.s64 + -20088;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-9056
	ctx.r4.s64 = ctx.r10.s64 + -9056;
	// addi r11,r11,-18504
	ctx.r11.s64 = ctx.r11.s64 + -18504;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-31600
	ctx.r3.s64 = ctx.r10.s64 + -31600;
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
	ctx.lr = 0x830BF2E0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BF2F0"))) PPC_WEAK_FUNC(sub_830BF2F0);
PPC_FUNC_IMPL(__imp__sub_830BF2F0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-8988
	ctx.r4.s64 = ctx.r10.s64 + -8988;
	// addi r11,r11,-18344
	ctx.r11.s64 = ctx.r11.s64 + -18344;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-21988
	ctx.r3.s64 = ctx.r10.s64 + -21988;
	// li r10,0
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
	ctx.lr = 0x830BF340;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BF350"))) PPC_WEAK_FUNC(sub_830BF350);
PPC_FUNC_IMPL(__imp__sub_830BF350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r10,-18280
	ctx.r8.s64 = ctx.r10.s64 + -18280;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r10,-28072
	ctx.r5.s64 = ctx.r10.s64 + -28072;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,-20040
	ctx.r11.s64 = ctx.r11.s64 + -20040;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,-8960
	ctx.r4.s64 = ctx.r10.s64 + -8960;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-32032
	ctx.r3.s64 = ctx.r10.s64 + -32032;
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
	ctx.lr = 0x830BF3AC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BF3C0"))) PPC_WEAK_FUNC(sub_830BF3C0);
PPC_FUNC_IMPL(__imp__sub_830BF3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-28072
	ctx.r5.s64 = ctx.r10.s64 + -28072;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-28000
	ctx.r4.s64 = ctx.r10.s64 + -28000;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-30844
	ctx.r3.s64 = ctx.r10.s64 + -30844;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830BF40C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BF420"))) PPC_WEAK_FUNC(sub_830BF420);
PPC_FUNC_IMPL(__imp__sub_830BF420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r10,r10,-1704
	ctx.r10.s64 = ctx.r10.s64 + -1704;
	// lwz r11,-17960(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17960);
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BF438"))) PPC_WEAK_FUNC(sub_830BF438);
PPC_FUNC_IMPL(__imp__sub_830BF438) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r11,-19912
	ctx.r9.s64 = ctx.r11.s64 + -19912;
	// addi r5,r10,-30844
	ctx.r5.s64 = ctx.r10.s64 + -30844;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r8,r9,24
	ctx.r8.s64 = ctx.r9.s64 + 24;
	// li r7,12
	ctx.r7.s64 = 12;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-27980
	ctx.r4.s64 = ctx.r10.s64 + -27980;
	// addi r11,r11,-1704
	ctx.r11.s64 = ctx.r11.s64 + -1704;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-24508
	ctx.r3.s64 = ctx.r10.s64 + -24508;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830BF494;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BF4A8"))) PPC_WEAK_FUNC(sub_830BF4A8);
PPC_FUNC_IMPL(__imp__sub_830BF4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r7,r10,-17952
	ctx.r7.s64 = ctx.r10.s64 + -17952;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r10,26680
	ctx.r4.s64 = ctx.r10.s64 + 26680;
	// addi r11,r11,-19796
	ctx.r11.s64 = ctx.r11.s64 + -19796;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-30268
	ctx.r3.s64 = ctx.r10.s64 + -30268;
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
	ctx.lr = 0x830BF500;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BF510"))) PPC_WEAK_FUNC(sub_830BF510);
PPC_FUNC_IMPL(__imp__sub_830BF510) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,26704
	ctx.r4.s64 = ctx.r10.s64 + 26704;
	// addi r11,r11,-17872
	ctx.r11.s64 = ctx.r11.s64 + -17872;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-25372
	ctx.r3.s64 = ctx.r10.s64 + -25372;
	// li r10,0
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
	ctx.lr = 0x830BF560;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BF570"))) PPC_WEAK_FUNC(sub_830BF570);
PPC_FUNC_IMPL(__imp__sub_830BF570) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,-19808
	ctx.r9.s64 = ctx.r10.s64 + -19808;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r5,r10,-25552
	ctx.r5.s64 = ctx.r10.s64 + -25552;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-17832
	ctx.r11.s64 = ctx.r11.s64 + -17832;
	// addi r4,r10,26728
	ctx.r4.s64 = ctx.r10.s64 + 26728;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-23788
	ctx.r3.s64 = ctx.r10.s64 + -23788;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830BF5C8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BF5D8"))) PPC_WEAK_FUNC(sub_830BF5D8);
PPC_FUNC_IMPL(__imp__sub_830BF5D8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-25984
	ctx.r3.s64 = ctx.r10.s64 + -25984;
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
	ctx.lr = 0x830BF620;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BF630"))) PPC_WEAK_FUNC(sub_830BF630);
PPC_FUNC_IMPL(__imp__sub_830BF630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,-25984
	ctx.r5.s64 = ctx.r10.s64 + -25984;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-14744
	ctx.r4.s64 = ctx.r10.s64 + -14744;
	// addi r11,r11,-17812
	ctx.r11.s64 = ctx.r11.s64 + -17812;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-25552
	ctx.r3.s64 = ctx.r10.s64 + -25552;
	// li r10,0
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
	ctx.lr = 0x830BF684;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BF698"))) PPC_WEAK_FUNC(sub_830BF698);
PPC_FUNC_IMPL(__imp__sub_830BF698) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,-19768
	ctx.r9.s64 = ctx.r10.s64 + -19768;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-16828
	ctx.r4.s64 = ctx.r10.s64 + -16828;
	// addi r11,r11,-17768
	ctx.r11.s64 = ctx.r11.s64 + -17768;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-26812
	ctx.r3.s64 = ctx.r10.s64 + -26812;
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
	ctx.lr = 0x830BF6EC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BF700"))) PPC_WEAK_FUNC(sub_830BF700);
PPC_FUNC_IMPL(__imp__sub_830BF700) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-16732
	ctx.r4.s64 = ctx.r10.s64 + -16732;
	// addi r11,r11,-17628
	ctx.r11.s64 = ctx.r11.s64 + -17628;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-27676
	ctx.r3.s64 = ctx.r10.s64 + -27676;
	// li r10,0
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
	ctx.lr = 0x830BF750;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BF760"))) PPC_WEAK_FUNC(sub_830BF760);
PPC_FUNC_IMPL(__imp__sub_830BF760) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-16716
	ctx.r4.s64 = ctx.r10.s64 + -16716;
	// addi r11,r11,-17588
	ctx.r11.s64 = ctx.r11.s64 + -17588;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-26776
	ctx.r3.s64 = ctx.r10.s64 + -26776;
	// li r10,0
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
	ctx.lr = 0x830BF7B0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BF7C0"))) PPC_WEAK_FUNC(sub_830BF7C0);
PPC_FUNC_IMPL(__imp__sub_830BF7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r10,r10,1344
	ctx.r10.s64 = ctx.r10.s64 + 1344;
	// lwz r11,-17548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17548);
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BF7E0"))) PPC_WEAK_FUNC(sub_830BF7E0);
PPC_FUNC_IMPL(__imp__sub_830BF7E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,-19400
	ctx.r9.s64 = ctx.r10.s64 + -19400;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-15580
	ctx.r4.s64 = ctx.r10.s64 + -15580;
	// addi r11,r11,1344
	ctx.r11.s64 = ctx.r11.s64 + 1344;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-25336
	ctx.r3.s64 = ctx.r10.s64 + -25336;
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
	ctx.lr = 0x830BF834;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BF848"))) PPC_WEAK_FUNC(sub_830BF848);
PPC_FUNC_IMPL(__imp__sub_830BF848) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-15284
	ctx.r4.s64 = ctx.r10.s64 + -15284;
	// addi r11,r11,-17536
	ctx.r11.s64 = ctx.r11.s64 + -17536;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-30880
	ctx.r3.s64 = ctx.r10.s64 + -30880;
	// li r10,0
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
	ctx.lr = 0x830BF898;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BF8A8"))) PPC_WEAK_FUNC(sub_830BF8A8);
PPC_FUNC_IMPL(__imp__sub_830BF8A8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-15248
	ctx.r4.s64 = ctx.r10.s64 + -15248;
	// addi r11,r11,-17496
	ctx.r11.s64 = ctx.r11.s64 + -17496;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-20764
	ctx.r3.s64 = ctx.r10.s64 + -20764;
	// li r10,0
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
	ctx.lr = 0x830BF8F8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BF908"))) PPC_WEAK_FUNC(sub_830BF908);
PPC_FUNC_IMPL(__imp__sub_830BF908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r10,r10,1040
	ctx.r10.s64 = ctx.r10.s64 + 1040;
	// lwz r11,-17476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17476);
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BF920"))) PPC_WEAK_FUNC(sub_830BF920);
PPC_FUNC_IMPL(__imp__sub_830BF920) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,-19340
	ctx.r9.s64 = ctx.r10.s64 + -19340;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-15220
	ctx.r4.s64 = ctx.r10.s64 + -15220;
	// addi r11,r11,1040
	ctx.r11.s64 = ctx.r11.s64 + 1040;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-30124
	ctx.r3.s64 = ctx.r10.s64 + -30124;
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
	ctx.lr = 0x830BF974;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BF988"))) PPC_WEAK_FUNC(sub_830BF988);
PPC_FUNC_IMPL(__imp__sub_830BF988) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,-19288
	ctx.r9.s64 = ctx.r10.s64 + -19288;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-8080
	ctx.r4.s64 = ctx.r10.s64 + -8080;
	// addi r11,r11,-17464
	ctx.r11.s64 = ctx.r11.s64 + -17464;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-25912
	ctx.r3.s64 = ctx.r10.s64 + -25912;
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
	ctx.lr = 0x830BF9DC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BF9F0"))) PPC_WEAK_FUNC(sub_830BF9F0);
PPC_FUNC_IMPL(__imp__sub_830BF9F0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-12008
	ctx.r4.s64 = ctx.r10.s64 + -12008;
	// addi r11,r11,-17404
	ctx.r11.s64 = ctx.r11.s64 + -17404;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-30196
	ctx.r3.s64 = ctx.r10.s64 + -30196;
	// li r10,0
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
	ctx.lr = 0x830BFA40;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BFA50"))) PPC_WEAK_FUNC(sub_830BFA50);
PPC_FUNC_IMPL(__imp__sub_830BFA50) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-11940
	ctx.r4.s64 = ctx.r10.s64 + -11940;
	// addi r11,r11,-17364
	ctx.r11.s64 = ctx.r11.s64 + -17364;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,32640
	ctx.r3.s64 = ctx.r10.s64 + 32640;
	// li r10,0
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
	ctx.lr = 0x830BFAA0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BFAB0"))) PPC_WEAK_FUNC(sub_830BFAB0);
PPC_FUNC_IMPL(__imp__sub_830BFAB0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,-19248
	ctx.r9.s64 = ctx.r10.s64 + -19248;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-11636
	ctx.r4.s64 = ctx.r10.s64 + -11636;
	// addi r11,r11,-17320
	ctx.r11.s64 = ctx.r11.s64 + -17320;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-22276
	ctx.r3.s64 = ctx.r10.s64 + -22276;
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
	ctx.lr = 0x830BFB04;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BFB18"))) PPC_WEAK_FUNC(sub_830BFB18);
PPC_FUNC_IMPL(__imp__sub_830BFB18) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-11204
	ctx.r4.s64 = ctx.r10.s64 + -11204;
	// addi r11,r11,-17240
	ctx.r11.s64 = ctx.r11.s64 + -17240;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-28828
	ctx.r3.s64 = ctx.r10.s64 + -28828;
	// li r10,0
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
	ctx.lr = 0x830BFB68;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BFB78"))) PPC_WEAK_FUNC(sub_830BFB78);
PPC_FUNC_IMPL(__imp__sub_830BFB78) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-11168
	ctx.r4.s64 = ctx.r10.s64 + -11168;
	// addi r11,r11,-17040
	ctx.r11.s64 = ctx.r11.s64 + -17040;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-25660
	ctx.r3.s64 = ctx.r10.s64 + -25660;
	// li r10,0
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
	ctx.lr = 0x830BFBC8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BFBD8"))) PPC_WEAK_FUNC(sub_830BFBD8);
PPC_FUNC_IMPL(__imp__sub_830BFBD8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-10980
	ctx.r4.s64 = ctx.r10.s64 + -10980;
	// addi r11,r11,-17000
	ctx.r11.s64 = ctx.r11.s64 + -17000;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-22816
	ctx.r3.s64 = ctx.r10.s64 + -22816;
	// li r10,0
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
	ctx.lr = 0x830BFC28;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BFC38"))) PPC_WEAK_FUNC(sub_830BFC38);
PPC_FUNC_IMPL(__imp__sub_830BFC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r10,r10,-1464
	ctx.r10.s64 = ctx.r10.s64 + -1464;
	// lwz r11,-16900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16900);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BFC50"))) PPC_WEAK_FUNC(sub_830BFC50);
PPC_FUNC_IMPL(__imp__sub_830BFC50) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-6924
	ctx.r4.s64 = ctx.r10.s64 + -6924;
	// addi r11,r11,-1464
	ctx.r11.s64 = ctx.r11.s64 + -1464;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-31240
	ctx.r3.s64 = ctx.r10.s64 + -31240;
	// li r10,0
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
	ctx.lr = 0x830BFCA0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BFCB0"))) PPC_WEAK_FUNC(sub_830BFCB0);
PPC_FUNC_IMPL(__imp__sub_830BFCB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r10,r10,-604
	ctx.r10.s64 = ctx.r10.s64 + -604;
	// lwz r11,-16900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16900);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BFCC8"))) PPC_WEAK_FUNC(sub_830BFCC8);
PPC_FUNC_IMPL(__imp__sub_830BFCC8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-6384
	ctx.r4.s64 = ctx.r10.s64 + -6384;
	// addi r11,r11,-604
	ctx.r11.s64 = ctx.r11.s64 + -604;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-21340
	ctx.r3.s64 = ctx.r10.s64 + -21340;
	// li r10,0
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
	ctx.lr = 0x830BFD18;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BFD28"))) PPC_WEAK_FUNC(sub_830BFD28);
PPC_FUNC_IMPL(__imp__sub_830BFD28) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-6140
	ctx.r4.s64 = ctx.r10.s64 + -6140;
	// addi r11,r11,-17020
	ctx.r11.s64 = ctx.r11.s64 + -17020;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-26668
	ctx.r3.s64 = ctx.r10.s64 + -26668;
	// li r10,0
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
	ctx.lr = 0x830BFD78;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BFD88"))) PPC_WEAK_FUNC(sub_830BFD88);
PPC_FUNC_IMPL(__imp__sub_830BFD88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r10,r10,-644
	ctx.r10.s64 = ctx.r10.s64 + -644;
	// lwz r11,-16900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16900);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BFDA0"))) PPC_WEAK_FUNC(sub_830BFDA0);
PPC_FUNC_IMPL(__imp__sub_830BFDA0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-8020
	ctx.r4.s64 = ctx.r10.s64 + -8020;
	// addi r11,r11,-644
	ctx.r11.s64 = ctx.r11.s64 + -644;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-23392
	ctx.r3.s64 = ctx.r10.s64 + -23392;
	// li r10,0
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
	ctx.lr = 0x830BFDF0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BFE00"))) PPC_WEAK_FUNC(sub_830BFE00);
PPC_FUNC_IMPL(__imp__sub_830BFE00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,-19188
	ctx.r9.s64 = ctx.r10.s64 + -19188;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-7800
	ctx.r4.s64 = ctx.r10.s64 + -7800;
	// addi r11,r11,-16896
	ctx.r11.s64 = ctx.r11.s64 + -16896;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-24544
	ctx.r3.s64 = ctx.r10.s64 + -24544;
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
	ctx.lr = 0x830BFE54;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BFE68"))) PPC_WEAK_FUNC(sub_830BFE68);
PPC_FUNC_IMPL(__imp__sub_830BFE68) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-7732
	ctx.r4.s64 = ctx.r10.s64 + -7732;
	// addi r11,r11,-16856
	ctx.r11.s64 = ctx.r11.s64 + -16856;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-25876
	ctx.r3.s64 = ctx.r10.s64 + -25876;
	// li r10,0
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
	ctx.lr = 0x830BFEB8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BFEC8"))) PPC_WEAK_FUNC(sub_830BFEC8);
PPC_FUNC_IMPL(__imp__sub_830BFEC8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-4832
	ctx.r4.s64 = ctx.r10.s64 + -4832;
	// addi r11,r11,-16816
	ctx.r11.s64 = ctx.r11.s64 + -16816;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-28360
	ctx.r3.s64 = ctx.r10.s64 + -28360;
	// li r10,0
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
	ctx.lr = 0x830BFF18;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BFF28"))) PPC_WEAK_FUNC(sub_830BFF28);
PPC_FUNC_IMPL(__imp__sub_830BFF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-28144
	ctx.r5.s64 = ctx.r10.s64 + -28144;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-4788
	ctx.r4.s64 = ctx.r10.s64 + -4788;
	// addi r11,r11,-16776
	ctx.r11.s64 = ctx.r11.s64 + -16776;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-24472
	ctx.r3.s64 = ctx.r10.s64 + -24472;
	// li r10,0
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
	ctx.lr = 0x830BFF7C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BFF90"))) PPC_WEAK_FUNC(sub_830BFF90);
PPC_FUNC_IMPL(__imp__sub_830BFF90) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-4716
	ctx.r4.s64 = ctx.r10.s64 + -4716;
	// addi r11,r11,-16756
	ctx.r11.s64 = ctx.r11.s64 + -16756;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-28144
	ctx.r3.s64 = ctx.r10.s64 + -28144;
	// li r10,0
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
	ctx.lr = 0x830BFFE0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BFFF0"))) PPC_WEAK_FUNC(sub_830BFFF0);
PPC_FUNC_IMPL(__imp__sub_830BFFF0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-4624
	ctx.r4.s64 = ctx.r10.s64 + -4624;
	// addi r11,r11,-16716
	ctx.r11.s64 = ctx.r11.s64 + -16716;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-29836
	ctx.r3.s64 = ctx.r10.s64 + -29836;
	// li r10,0
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
	ctx.lr = 0x830C0040;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0050"))) PPC_WEAK_FUNC(sub_830C0050);
PPC_FUNC_IMPL(__imp__sub_830C0050) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-4588
	ctx.r4.s64 = ctx.r10.s64 + -4588;
	// addi r11,r11,-16696
	ctx.r11.s64 = ctx.r11.s64 + -16696;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-27208
	ctx.r3.s64 = ctx.r10.s64 + -27208;
	// li r10,0
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
	ctx.lr = 0x830C00A0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C00B0"))) PPC_WEAK_FUNC(sub_830C00B0);
PPC_FUNC_IMPL(__imp__sub_830C00B0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-7468
	ctx.r4.s64 = ctx.r10.s64 + -7468;
	// addi r11,r11,-16656
	ctx.r11.s64 = ctx.r11.s64 + -16656;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-26956
	ctx.r3.s64 = ctx.r10.s64 + -26956;
	// li r10,0
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
	ctx.lr = 0x830C0100;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0110"))) PPC_WEAK_FUNC(sub_830C0110);
PPC_FUNC_IMPL(__imp__sub_830C0110) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-7336
	ctx.r4.s64 = ctx.r10.s64 + -7336;
	// addi r11,r11,-16516
	ctx.r11.s64 = ctx.r11.s64 + -16516;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-24832
	ctx.r3.s64 = ctx.r10.s64 + -24832;
	// li r10,0
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
	ctx.lr = 0x830C0160;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0170"))) PPC_WEAK_FUNC(sub_830C0170);
PPC_FUNC_IMPL(__imp__sub_830C0170) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-7312
	ctx.r4.s64 = ctx.r10.s64 + -7312;
	// addi r11,r11,-16476
	ctx.r11.s64 = ctx.r11.s64 + -16476;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-27316
	ctx.r3.s64 = ctx.r10.s64 + -27316;
	// li r10,0
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
	ctx.lr = 0x830C01C0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C01D0"))) PPC_WEAK_FUNC(sub_830C01D0);
PPC_FUNC_IMPL(__imp__sub_830C01D0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-5556
	ctx.r4.s64 = ctx.r10.s64 + -5556;
	// addi r11,r11,-16456
	ctx.r11.s64 = ctx.r11.s64 + -16456;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-24040
	ctx.r3.s64 = ctx.r10.s64 + -24040;
	// li r10,0
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
	ctx.lr = 0x830C0220;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0230"))) PPC_WEAK_FUNC(sub_830C0230);
PPC_FUNC_IMPL(__imp__sub_830C0230) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-5532
	ctx.r4.s64 = ctx.r10.s64 + -5532;
	// addi r11,r11,-16416
	ctx.r11.s64 = ctx.r11.s64 + -16416;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-26020
	ctx.r3.s64 = ctx.r10.s64 + -26020;
	// li r10,0
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
	ctx.lr = 0x830C0280;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0290"))) PPC_WEAK_FUNC(sub_830C0290);
PPC_FUNC_IMPL(__imp__sub_830C0290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r10,r10,-744
	ctx.r10.s64 = ctx.r10.s64 + -744;
	// lwz r11,-16256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16256);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C02A8"))) PPC_WEAK_FUNC(sub_830C02A8);
PPC_FUNC_IMPL(__imp__sub_830C02A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,-19152
	ctx.r9.s64 = ctx.r10.s64 + -19152;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-6964
	ctx.r4.s64 = ctx.r10.s64 + -6964;
	// addi r11,r11,-744
	ctx.r11.s64 = ctx.r11.s64 + -744;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-31780
	ctx.r3.s64 = ctx.r10.s64 + -31780;
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
	ctx.lr = 0x830C02FC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0310"))) PPC_WEAK_FUNC(sub_830C0310);
PPC_FUNC_IMPL(__imp__sub_830C0310) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-6432
	ctx.r4.s64 = ctx.r10.s64 + -6432;
	// addi r11,r11,-16248
	ctx.r11.s64 = ctx.r11.s64 + -16248;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-28180
	ctx.r3.s64 = ctx.r10.s64 + -28180;
	// li r10,0
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
	ctx.lr = 0x830C0360;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0370"))) PPC_WEAK_FUNC(sub_830C0370);
PPC_FUNC_IMPL(__imp__sub_830C0370) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,-19092
	ctx.r9.s64 = ctx.r10.s64 + -19092;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-6408
	ctx.r4.s64 = ctx.r10.s64 + -6408;
	// addi r11,r11,-16208
	ctx.r11.s64 = ctx.r11.s64 + -16208;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-27136
	ctx.r3.s64 = ctx.r10.s64 + -27136;
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
	ctx.lr = 0x830C03C4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C03D8"))) PPC_WEAK_FUNC(sub_830C03D8);
PPC_FUNC_IMPL(__imp__sub_830C03D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r10,r10,-1764
	ctx.r10.s64 = ctx.r10.s64 + -1764;
	// lwz r11,-16048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16048);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C03F0"))) PPC_WEAK_FUNC(sub_830C03F0);
PPC_FUNC_IMPL(__imp__sub_830C03F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,-19040
	ctx.r9.s64 = ctx.r10.s64 + -19040;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-6200
	ctx.r4.s64 = ctx.r10.s64 + -6200;
	// addi r11,r11,-1764
	ctx.r11.s64 = ctx.r11.s64 + -1764;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,32568
	ctx.r3.s64 = ctx.r10.s64 + 32568;
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
	ctx.lr = 0x830C0444;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0458"))) PPC_WEAK_FUNC(sub_830C0458);
PPC_FUNC_IMPL(__imp__sub_830C0458) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-4528
	ctx.r4.s64 = ctx.r10.s64 + -4528;
	// addi r11,r11,-16044
	ctx.r11.s64 = ctx.r11.s64 + -16044;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-29728
	ctx.r3.s64 = ctx.r10.s64 + -29728;
	// li r10,0
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
	ctx.lr = 0x830C04A8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C04B8"))) PPC_WEAK_FUNC(sub_830C04B8);
PPC_FUNC_IMPL(__imp__sub_830C04B8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-4460
	ctx.r4.s64 = ctx.r10.s64 + -4460;
	// addi r11,r11,-16024
	ctx.r11.s64 = ctx.r11.s64 + -16024;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-25300
	ctx.r3.s64 = ctx.r10.s64 + -25300;
	// li r10,0
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
	ctx.lr = 0x830C0508;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0518"))) PPC_WEAK_FUNC(sub_830C0518);
PPC_FUNC_IMPL(__imp__sub_830C0518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r10,r10,936
	ctx.r10.s64 = ctx.r10.s64 + 936;
	// lwz r11,-15984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15984);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0530"))) PPC_WEAK_FUNC(sub_830C0530);
PPC_FUNC_IMPL(__imp__sub_830C0530) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,-18988
	ctx.r9.s64 = ctx.r10.s64 + -18988;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-7116
	ctx.r4.s64 = ctx.r10.s64 + -7116;
	// addi r11,r11,936
	ctx.r11.s64 = ctx.r11.s64 + 936;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-30988
	ctx.r3.s64 = ctx.r10.s64 + -30988;
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
	ctx.lr = 0x830C0584;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0598"))) PPC_WEAK_FUNC(sub_830C0598);
PPC_FUNC_IMPL(__imp__sub_830C0598) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-5980
	ctx.r4.s64 = ctx.r10.s64 + -5980;
	// addi r11,r11,-15980
	ctx.r11.s64 = ctx.r11.s64 + -15980;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-27748
	ctx.r3.s64 = ctx.r10.s64 + -27748;
	// li r10,0
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
	ctx.lr = 0x830C05E8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C05F8"))) PPC_WEAK_FUNC(sub_830C05F8);
PPC_FUNC_IMPL(__imp__sub_830C05F8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-5832
	ctx.r4.s64 = ctx.r10.s64 + -5832;
	// addi r11,r11,-15960
	ctx.r11.s64 = ctx.r11.s64 + -15960;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-31348
	ctx.r3.s64 = ctx.r10.s64 + -31348;
	// li r10,0
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
	ctx.lr = 0x830C0648;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0658"))) PPC_WEAK_FUNC(sub_830C0658);
PPC_FUNC_IMPL(__imp__sub_830C0658) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-4320
	ctx.r4.s64 = ctx.r10.s64 + -4320;
	// addi r11,r11,-15900
	ctx.r11.s64 = ctx.r11.s64 + -15900;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-26920
	ctx.r3.s64 = ctx.r10.s64 + -26920;
	// li r10,0
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
	ctx.lr = 0x830C06A8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C06B8"))) PPC_WEAK_FUNC(sub_830C06B8);
PPC_FUNC_IMPL(__imp__sub_830C06B8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-3792
	ctx.r4.s64 = ctx.r10.s64 + -3792;
	// addi r11,r11,-15800
	ctx.r11.s64 = ctx.r11.s64 + -15800;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-32248
	ctx.r3.s64 = ctx.r10.s64 + -32248;
	// li r10,0
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
	ctx.lr = 0x830C0708;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0718"))) PPC_WEAK_FUNC(sub_830C0718);
PPC_FUNC_IMPL(__imp__sub_830C0718) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-3584
	ctx.r4.s64 = ctx.r10.s64 + -3584;
	// addi r11,r11,-15560
	ctx.r11.s64 = ctx.r11.s64 + -15560;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-23212
	ctx.r3.s64 = ctx.r10.s64 + -23212;
	// li r10,0
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
	ctx.lr = 0x830C0768;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0778"))) PPC_WEAK_FUNC(sub_830C0778);
PPC_FUNC_IMPL(__imp__sub_830C0778) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-3400
	ctx.r4.s64 = ctx.r10.s64 + -3400;
	// addi r11,r11,-15440
	ctx.r11.s64 = ctx.r11.s64 + -15440;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-28684
	ctx.r3.s64 = ctx.r10.s64 + -28684;
	// li r10,0
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
	ctx.lr = 0x830C07C8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C07D8"))) PPC_WEAK_FUNC(sub_830C07D8);
PPC_FUNC_IMPL(__imp__sub_830C07D8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-3172
	ctx.r4.s64 = ctx.r10.s64 + -3172;
	// addi r11,r11,-15280
	ctx.r11.s64 = ctx.r11.s64 + -15280;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-23500
	ctx.r3.s64 = ctx.r10.s64 + -23500;
	// li r10,0
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
	ctx.lr = 0x830C0828;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0838"))) PPC_WEAK_FUNC(sub_830C0838);
PPC_FUNC_IMPL(__imp__sub_830C0838) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-2976
	ctx.r4.s64 = ctx.r10.s64 + -2976;
	// addi r11,r11,-15080
	ctx.r11.s64 = ctx.r11.s64 + -15080;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-26596
	ctx.r3.s64 = ctx.r10.s64 + -26596;
	// li r10,0
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
	ctx.lr = 0x830C0888;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0898"))) PPC_WEAK_FUNC(sub_830C0898);
PPC_FUNC_IMPL(__imp__sub_830C0898) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-2812
	ctx.r4.s64 = ctx.r10.s64 + -2812;
	// addi r11,r11,-14920
	ctx.r11.s64 = ctx.r11.s64 + -14920;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-23032
	ctx.r3.s64 = ctx.r10.s64 + -23032;
	// li r10,0
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
	ctx.lr = 0x830C08E8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C08F8"))) PPC_WEAK_FUNC(sub_830C08F8);
PPC_FUNC_IMPL(__imp__sub_830C08F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r7,r10,-14720
	ctx.r7.s64 = ctx.r10.s64 + -14720;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r10,-5048
	ctx.r4.s64 = ctx.r10.s64 + -5048;
	// addi r11,r11,-18976
	ctx.r11.s64 = ctx.r11.s64 + -18976;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-26236
	ctx.r3.s64 = ctx.r10.s64 + -26236;
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
	ctx.lr = 0x830C0950;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0960"))) PPC_WEAK_FUNC(sub_830C0960);
PPC_FUNC_IMPL(__imp__sub_830C0960) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-4904
	ctx.r4.s64 = ctx.r10.s64 + -4904;
	// addi r11,r11,-14480
	ctx.r11.s64 = ctx.r11.s64 + -14480;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-28900
	ctx.r3.s64 = ctx.r10.s64 + -28900;
	// li r10,0
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
	ctx.lr = 0x830C09B0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C09C0"))) PPC_WEAK_FUNC(sub_830C09C0);
PPC_FUNC_IMPL(__imp__sub_830C09C0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-10356
	ctx.r4.s64 = ctx.r10.s64 + -10356;
	// addi r11,r11,-14400
	ctx.r11.s64 = ctx.r11.s64 + -14400;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-24616
	ctx.r3.s64 = ctx.r10.s64 + -24616;
	// li r10,0
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
	ctx.lr = 0x830C0A10;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0A20"))) PPC_WEAK_FUNC(sub_830C0A20);
PPC_FUNC_IMPL(__imp__sub_830C0A20) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-10004
	ctx.r4.s64 = ctx.r10.s64 + -10004;
	// addi r11,r11,-14160
	ctx.r11.s64 = ctx.r11.s64 + -14160;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-22528
	ctx.r3.s64 = ctx.r10.s64 + -22528;
	// li r10,0
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
	ctx.lr = 0x830C0A70;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0A80"))) PPC_WEAK_FUNC(sub_830C0A80);
PPC_FUNC_IMPL(__imp__sub_830C0A80) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-10836
	ctx.r4.s64 = ctx.r10.s64 + -10836;
	// addi r11,r11,-15860
	ctx.r11.s64 = ctx.r11.s64 + -15860;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-32644
	ctx.r3.s64 = ctx.r10.s64 + -32644;
	// li r10,0
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
	ctx.lr = 0x830C0AD0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0AE0"))) PPC_WEAK_FUNC(sub_830C0AE0);
PPC_FUNC_IMPL(__imp__sub_830C0AE0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-10800
	ctx.r4.s64 = ctx.r10.s64 + -10800;
	// addi r11,r11,-15100
	ctx.r11.s64 = ctx.r11.s64 + -15100;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-24148
	ctx.r3.s64 = ctx.r10.s64 + -24148;
	// li r10,0
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
	ctx.lr = 0x830C0B30;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0B40"))) PPC_WEAK_FUNC(sub_830C0B40);
PPC_FUNC_IMPL(__imp__sub_830C0B40) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-8796
	ctx.r4.s64 = ctx.r10.s64 + -8796;
	// addi r11,r11,-14780
	ctx.r11.s64 = ctx.r11.s64 + -14780;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-30556
	ctx.r3.s64 = ctx.r10.s64 + -30556;
	// li r10,0
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
	ctx.lr = 0x830C0B90;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0BA0"))) PPC_WEAK_FUNC(sub_830C0BA0);
PPC_FUNC_IMPL(__imp__sub_830C0BA0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-8748
	ctx.r4.s64 = ctx.r10.s64 + -8748;
	// addi r11,r11,-14180
	ctx.r11.s64 = ctx.r11.s64 + -14180;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-28288
	ctx.r3.s64 = ctx.r10.s64 + -28288;
	// li r10,0
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
	ctx.lr = 0x830C0BF0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0C00"))) PPC_WEAK_FUNC(sub_830C0C00);
PPC_FUNC_IMPL(__imp__sub_830C0C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,-25552
	ctx.r5.s64 = ctx.r10.s64 + -25552;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-8276
	ctx.r4.s64 = ctx.r10.s64 + -8276;
	// addi r11,r11,-13980
	ctx.r11.s64 = ctx.r11.s64 + -13980;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,32388
	ctx.r3.s64 = ctx.r10.s64 + 32388;
	// li r10,0
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
	ctx.lr = 0x830C0C54;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0C68"))) PPC_WEAK_FUNC(sub_830C0C68);
PPC_FUNC_IMPL(__imp__sub_830C0C68) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,26368
	ctx.r4.s64 = ctx.r10.s64 + 26368;
	// addi r11,r11,-13920
	ctx.r11.s64 = ctx.r11.s64 + -13920;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-27460
	ctx.r3.s64 = ctx.r10.s64 + -27460;
	// li r10,0
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
	ctx.lr = 0x830C0CB8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0CC8"))) PPC_WEAK_FUNC(sub_830C0CC8);
PPC_FUNC_IMPL(__imp__sub_830C0CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,-27460
	ctx.r5.s64 = ctx.r10.s64 + -27460;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,27276
	ctx.r4.s64 = ctx.r10.s64 + 27276;
	// addi r11,r11,-13840
	ctx.r11.s64 = ctx.r11.s64 + -13840;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-25084
	ctx.r3.s64 = ctx.r10.s64 + -25084;
	// li r10,0
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
	ctx.lr = 0x830C0D1C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0D30"))) PPC_WEAK_FUNC(sub_830C0D30);
PPC_FUNC_IMPL(__imp__sub_830C0D30) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-27028
	ctx.r3.s64 = ctx.r10.s64 + -27028;
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
	ctx.lr = 0x830C0D78;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0D88"))) PPC_WEAK_FUNC(sub_830C0D88);
PPC_FUNC_IMPL(__imp__sub_830C0D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,-26632
	ctx.r5.s64 = ctx.r10.s64 + -26632;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,27584
	ctx.r4.s64 = ctx.r10.s64 + 27584;
	// addi r11,r11,-13760
	ctx.r11.s64 = ctx.r11.s64 + -13760;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-22780
	ctx.r3.s64 = ctx.r10.s64 + -22780;
	// li r10,0
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
	ctx.lr = 0x830C0DDC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0DF0"))) PPC_WEAK_FUNC(sub_830C0DF0);
PPC_FUNC_IMPL(__imp__sub_830C0DF0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-31492
	ctx.r3.s64 = ctx.r10.s64 + -31492;
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
	ctx.lr = 0x830C0E38;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0E48"))) PPC_WEAK_FUNC(sub_830C0E48);
PPC_FUNC_IMPL(__imp__sub_830C0E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-25552
	ctx.r5.s64 = ctx.r10.s64 + -25552;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,30448
	ctx.r4.s64 = ctx.r10.s64 + 30448;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-29476
	ctx.r3.s64 = ctx.r10.s64 + -29476;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830C0E94;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0EA8"))) PPC_WEAK_FUNC(sub_830C0EA8);
PPC_FUNC_IMPL(__imp__sub_830C0EA8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-30592
	ctx.r3.s64 = ctx.r10.s64 + -30592;
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
	ctx.lr = 0x830C0EF0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0F00"))) PPC_WEAK_FUNC(sub_830C0F00);
PPC_FUNC_IMPL(__imp__sub_830C0F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,-29476
	ctx.r5.s64 = ctx.r10.s64 + -29476;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,30644
	ctx.r4.s64 = ctx.r10.s64 + 30644;
	// addi r11,r11,-13680
	ctx.r11.s64 = ctx.r11.s64 + -13680;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-26524
	ctx.r3.s64 = ctx.r10.s64 + -26524;
	// li r10,0
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
	ctx.lr = 0x830C0F54;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0F68"))) PPC_WEAK_FUNC(sub_830C0F68);
PPC_FUNC_IMPL(__imp__sub_830C0F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-29476
	ctx.r5.s64 = ctx.r10.s64 + -29476;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,25616
	ctx.r4.s64 = ctx.r10.s64 + 25616;
	// addi r11,r11,-13780
	ctx.r11.s64 = ctx.r11.s64 + -13780;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-30664
	ctx.r3.s64 = ctx.r10.s64 + -30664;
	// li r10,0
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
	ctx.lr = 0x830C0FBC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C0FD0"))) PPC_WEAK_FUNC(sub_830C0FD0);
PPC_FUNC_IMPL(__imp__sub_830C0FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,-29476
	ctx.r5.s64 = ctx.r10.s64 + -29476;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,29284
	ctx.r4.s64 = ctx.r10.s64 + 29284;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-23644
	ctx.r3.s64 = ctx.r10.s64 + -23644;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830C101C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C1030"))) PPC_WEAK_FUNC(sub_830C1030);
PPC_FUNC_IMPL(__imp__sub_830C1030) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-23608
	ctx.r3.s64 = ctx.r10.s64 + -23608;
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
	ctx.lr = 0x830C1078;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C1088"))) PPC_WEAK_FUNC(sub_830C1088);
PPC_FUNC_IMPL(__imp__sub_830C1088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-25552
	ctx.r5.s64 = ctx.r10.s64 + -25552;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,32332
	ctx.r4.s64 = ctx.r10.s64 + 32332;
	// addi r11,r11,-13640
	ctx.r11.s64 = ctx.r11.s64 + -13640;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-22708
	ctx.r3.s64 = ctx.r10.s64 + -22708;
	// li r10,0
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
	ctx.lr = 0x830C10DC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C10F0"))) PPC_WEAK_FUNC(sub_830C10F0);
PPC_FUNC_IMPL(__imp__sub_830C10F0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-27496
	ctx.r3.s64 = ctx.r10.s64 + -27496;
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
	ctx.lr = 0x830C1138;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C1148"))) PPC_WEAK_FUNC(sub_830C1148);
PPC_FUNC_IMPL(__imp__sub_830C1148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-27496
	ctx.r5.s64 = ctx.r10.s64 + -27496;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,30508
	ctx.r4.s64 = ctx.r10.s64 + 30508;
	// addi r11,r11,-13620
	ctx.r11.s64 = ctx.r11.s64 + -13620;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-21700
	ctx.r3.s64 = ctx.r10.s64 + -21700;
	// li r10,0
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
	ctx.lr = 0x830C119C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C11B0"))) PPC_WEAK_FUNC(sub_830C11B0);
PPC_FUNC_IMPL(__imp__sub_830C11B0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,25960
	ctx.r4.s64 = ctx.r10.s64 + 25960;
	// addi r11,r11,-13600
	ctx.r11.s64 = ctx.r11.s64 + -13600;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-24364
	ctx.r3.s64 = ctx.r10.s64 + -24364;
	// li r10,0
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
	ctx.lr = 0x830C1200;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C1210"))) PPC_WEAK_FUNC(sub_830C1210);
PPC_FUNC_IMPL(__imp__sub_830C1210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-29800
	ctx.r5.s64 = ctx.r10.s64 + -29800;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-32484
	ctx.r4.s64 = ctx.r10.s64 + -32484;
	// addi r11,r11,-13520
	ctx.r11.s64 = ctx.r11.s64 + -13520;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-21772
	ctx.r3.s64 = ctx.r10.s64 + -21772;
	// li r10,0
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
	ctx.lr = 0x830C1264;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C1278"))) PPC_WEAK_FUNC(sub_830C1278);
PPC_FUNC_IMPL(__imp__sub_830C1278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,-22708
	ctx.r5.s64 = ctx.r10.s64 + -22708;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,-32376
	ctx.r4.s64 = ctx.r10.s64 + -32376;
	// addi r11,r11,-13500
	ctx.r11.s64 = ctx.r11.s64 + -13500;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-30484
	ctx.r3.s64 = ctx.r10.s64 + -30484;
	// li r10,0
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
	ctx.lr = 0x830C12CC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C12E0"))) PPC_WEAK_FUNC(sub_830C12E0);
PPC_FUNC_IMPL(__imp__sub_830C12E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-22708
	ctx.r5.s64 = ctx.r10.s64 + -22708;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,29972
	ctx.r4.s64 = ctx.r10.s64 + 29972;
	// addi r11,r11,-13460
	ctx.r11.s64 = ctx.r11.s64 + -13460;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-28720
	ctx.r3.s64 = ctx.r10.s64 + -28720;
	// li r10,0
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
	ctx.lr = 0x830C1334;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C1348"))) PPC_WEAK_FUNC(sub_830C1348);
PPC_FUNC_IMPL(__imp__sub_830C1348) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,-18856
	ctx.r9.s64 = ctx.r10.s64 + -18856;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r5,r10,-29800
	ctx.r5.s64 = ctx.r10.s64 + -29800;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-13436
	ctx.r11.s64 = ctx.r11.s64 + -13436;
	// addi r4,r10,24728
	ctx.r4.s64 = ctx.r10.s64 + 24728;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-28792
	ctx.r3.s64 = ctx.r10.s64 + -28792;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830C13A0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C13B0"))) PPC_WEAK_FUNC(sub_830C13B0);
PPC_FUNC_IMPL(__imp__sub_830C13B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r5,r10,-22708
	ctx.r5.s64 = ctx.r10.s64 + -22708;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,-13396
	ctx.r11.s64 = ctx.r11.s64 + -13396;
	// addi r4,r10,32456
	ctx.r4.s64 = ctx.r10.s64 + 32456;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r10,-32716
	ctx.r3.s64 = ctx.r10.s64 + -32716;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830C1400;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C1410"))) PPC_WEAK_FUNC(sub_830C1410);
PPC_FUNC_IMPL(__imp__sub_830C1410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-29260
	ctx.r5.s64 = ctx.r10.s64 + -29260;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,31032
	ctx.r4.s64 = ctx.r10.s64 + 31032;
	// addi r11,r11,-13376
	ctx.r11.s64 = ctx.r11.s64 + -13376;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-29800
	ctx.r3.s64 = ctx.r10.s64 + -29800;
	// li r10,0
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
	ctx.lr = 0x830C1464;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C1478"))) PPC_WEAK_FUNC(sub_830C1478);
PPC_FUNC_IMPL(__imp__sub_830C1478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,-29584
	ctx.r5.s64 = ctx.r10.s64 + -29584;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,26256
	ctx.r4.s64 = ctx.r10.s64 + 26256;
	// addi r11,r11,-13356
	ctx.r11.s64 = ctx.r11.s64 + -13356;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-28612
	ctx.r3.s64 = ctx.r10.s64 + -28612;
	// li r10,0
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
	ctx.lr = 0x830C14CC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830C14E0"))) PPC_WEAK_FUNC(sub_830C14E0);
PPC_FUNC_IMPL(__imp__sub_830C14E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,-32716
	ctx.r5.s64 = ctx.r10.s64 + -32716;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r10,26916
	ctx.r4.s64 = ctx.r10.s64 + 26916;
	// addi r11,r11,-13336
	ctx.r11.s64 = ctx.r11.s64 + -13336;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-32068
	ctx.r3.s64 = ctx.r10.s64 + -32068;
	// li r10,0
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
	ctx.lr = 0x830C1534;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

