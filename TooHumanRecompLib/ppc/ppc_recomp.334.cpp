#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_830973B0"))) PPC_WEAK_FUNC(sub_830973B0);
PPC_FUNC_IMPL(__imp__sub_830973B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r10,-21180
	ctx.r3.s64 = ctx.r10.s64 + -21180;
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
	ctx.lr = 0x830973F8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83097408"))) PPC_WEAK_FUNC(sub_83097408);
PPC_FUNC_IMPL(__imp__sub_83097408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-20856
	ctx.r5.s64 = ctx.r10.s64 + -20856;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,27584
	ctx.r4.s64 = ctx.r10.s64 + 27584;
	// addi r11,r11,-1200
	ctx.r11.s64 = ctx.r11.s64 + -1200;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-17868
	ctx.r3.s64 = ctx.r10.s64 + -17868;
	// li r10,0
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
	ctx.lr = 0x8309745C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83097470"))) PPC_WEAK_FUNC(sub_83097470);
PPC_FUNC_IMPL(__imp__sub_83097470) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r10,-24852
	ctx.r3.s64 = ctx.r10.s64 + -24852;
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
	ctx.lr = 0x830974B8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830974C8"))) PPC_WEAK_FUNC(sub_830974C8);
PPC_FUNC_IMPL(__imp__sub_830974C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
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
	// addi r3,r10,-23232
	ctx.r3.s64 = ctx.r10.s64 + -23232;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83097514;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83097528"))) PPC_WEAK_FUNC(sub_83097528);
PPC_FUNC_IMPL(__imp__sub_83097528) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r10,-24060
	ctx.r3.s64 = ctx.r10.s64 + -24060;
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
	ctx.lr = 0x83097570;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83097580"))) PPC_WEAK_FUNC(sub_83097580);
PPC_FUNC_IMPL(__imp__sub_83097580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23232
	ctx.r5.s64 = ctx.r10.s64 + -23232;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,30644
	ctx.r4.s64 = ctx.r10.s64 + 30644;
	// addi r11,r11,-1120
	ctx.r11.s64 = ctx.r11.s64 + -1120;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-20748
	ctx.r3.s64 = ctx.r10.s64 + -20748;
	// li r10,0
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
	ctx.lr = 0x830975D4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830975E8"))) PPC_WEAK_FUNC(sub_830975E8);
PPC_FUNC_IMPL(__imp__sub_830975E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23232
	ctx.r5.s64 = ctx.r10.s64 + -23232;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,25616
	ctx.r4.s64 = ctx.r10.s64 + 25616;
	// addi r11,r11,-1220
	ctx.r11.s64 = ctx.r11.s64 + -1220;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-24132
	ctx.r3.s64 = ctx.r10.s64 + -24132;
	// li r10,0
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
	ctx.lr = 0x8309763C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83097650"))) PPC_WEAK_FUNC(sub_83097650);
PPC_FUNC_IMPL(__imp__sub_83097650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23232
	ctx.r5.s64 = ctx.r10.s64 + -23232;
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
	// addi r3,r10,-18516
	ctx.r3.s64 = ctx.r10.s64 + -18516;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309769C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830976B0"))) PPC_WEAK_FUNC(sub_830976B0);
PPC_FUNC_IMPL(__imp__sub_830976B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r10,-18480
	ctx.r3.s64 = ctx.r10.s64 + -18480;
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
	ctx.lr = 0x830976F8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83097708"))) PPC_WEAK_FUNC(sub_83097708);
PPC_FUNC_IMPL(__imp__sub_83097708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,32332
	ctx.r4.s64 = ctx.r10.s64 + 32332;
	// addi r11,r11,-1080
	ctx.r11.s64 = ctx.r11.s64 + -1080;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-17796
	ctx.r3.s64 = ctx.r10.s64 + -17796;
	// li r10,0
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
	ctx.lr = 0x8309775C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83097770"))) PPC_WEAK_FUNC(sub_83097770);
PPC_FUNC_IMPL(__imp__sub_83097770) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,25960
	ctx.r4.s64 = ctx.r10.s64 + 25960;
	// addi r11,r11,-1040
	ctx.r11.s64 = ctx.r11.s64 + -1040;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-19092
	ctx.r3.s64 = ctx.r10.s64 + -19092;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830977C0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830977D0"))) PPC_WEAK_FUNC(sub_830977D0);
PPC_FUNC_IMPL(__imp__sub_830977D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23484
	ctx.r5.s64 = ctx.r10.s64 + -23484;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-32484
	ctx.r4.s64 = ctx.r10.s64 + -32484;
	// addi r11,r11,-1060
	ctx.r11.s64 = ctx.r11.s64 + -1060;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-16968
	ctx.r3.s64 = ctx.r10.s64 + -16968;
	// li r10,0
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
	ctx.lr = 0x83097824;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83097838"))) PPC_WEAK_FUNC(sub_83097838);
PPC_FUNC_IMPL(__imp__sub_83097838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-17796
	ctx.r5.s64 = ctx.r10.s64 + -17796;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-32376
	ctx.r4.s64 = ctx.r10.s64 + -32376;
	// addi r11,r11,-960
	ctx.r11.s64 = ctx.r11.s64 + -960;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-23988
	ctx.r3.s64 = ctx.r10.s64 + -23988;
	// li r10,0
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
	ctx.lr = 0x8309788C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830978A0"))) PPC_WEAK_FUNC(sub_830978A0);
PPC_FUNC_IMPL(__imp__sub_830978A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-17796
	ctx.r5.s64 = ctx.r10.s64 + -17796;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,29972
	ctx.r4.s64 = ctx.r10.s64 + 29972;
	// addi r11,r11,-920
	ctx.r11.s64 = ctx.r11.s64 + -920;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-22476
	ctx.r3.s64 = ctx.r10.s64 + -22476;
	// li r10,0
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
	ctx.lr = 0x830978F4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83097908"))) PPC_WEAK_FUNC(sub_83097908);
PPC_FUNC_IMPL(__imp__sub_83097908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23484
	ctx.r5.s64 = ctx.r10.s64 + -23484;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,24728
	ctx.r4.s64 = ctx.r10.s64 + 24728;
	// addi r11,r11,-900
	ctx.r11.s64 = ctx.r11.s64 + -900;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-22548
	ctx.r3.s64 = ctx.r10.s64 + -22548;
	// li r10,0
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
	ctx.lr = 0x8309795C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83097970"))) PPC_WEAK_FUNC(sub_83097970);
PPC_FUNC_IMPL(__imp__sub_83097970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-17796
	ctx.r5.s64 = ctx.r10.s64 + -17796;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,32456
	ctx.r4.s64 = ctx.r10.s64 + 32456;
	// addi r11,r11,-860
	ctx.r11.s64 = ctx.r11.s64 + -860;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-25500
	ctx.r3.s64 = ctx.r10.s64 + -25500;
	// li r10,0
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
	ctx.lr = 0x830979C4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830979D8"))) PPC_WEAK_FUNC(sub_830979D8);
PPC_FUNC_IMPL(__imp__sub_830979D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-22980
	ctx.r5.s64 = ctx.r10.s64 + -22980;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,31032
	ctx.r4.s64 = ctx.r10.s64 + 31032;
	// addi r11,r11,-840
	ctx.r11.s64 = ctx.r11.s64 + -840;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-23484
	ctx.r3.s64 = ctx.r10.s64 + -23484;
	// li r10,0
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
	ctx.lr = 0x83097A2C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83097A40"))) PPC_WEAK_FUNC(sub_83097A40);
PPC_FUNC_IMPL(__imp__sub_83097A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23304
	ctx.r5.s64 = ctx.r10.s64 + -23304;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,26256
	ctx.r4.s64 = ctx.r10.s64 + 26256;
	// addi r11,r11,-820
	ctx.r11.s64 = ctx.r11.s64 + -820;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-22368
	ctx.r3.s64 = ctx.r10.s64 + -22368;
	// li r10,0
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
	ctx.lr = 0x83097A94;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83097AA8"))) PPC_WEAK_FUNC(sub_83097AA8);
PPC_FUNC_IMPL(__imp__sub_83097AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-25500
	ctx.r5.s64 = ctx.r10.s64 + -25500;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,26916
	ctx.r4.s64 = ctx.r10.s64 + 26916;
	// addi r11,r11,-800
	ctx.r11.s64 = ctx.r11.s64 + -800;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-25068
	ctx.r3.s64 = ctx.r10.s64 + -25068;
	// li r10,0
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
	ctx.lr = 0x83097AFC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83097B10"))) PPC_WEAK_FUNC(sub_83097B10);
PPC_FUNC_IMPL(__imp__sub_83097B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23484
	ctx.r5.s64 = ctx.r10.s64 + -23484;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,27760
	ctx.r4.s64 = ctx.r10.s64 + 27760;
	// addi r11,r11,-740
	ctx.r11.s64 = ctx.r11.s64 + -740;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-17832
	ctx.r3.s64 = ctx.r10.s64 + -17832;
	// li r10,0
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
	ctx.lr = 0x83097B64;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83097B78"))) PPC_WEAK_FUNC(sub_83097B78);
PPC_FUNC_IMPL(__imp__sub_83097B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23484
	ctx.r5.s64 = ctx.r10.s64 + -23484;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,28680
	ctx.r4.s64 = ctx.r10.s64 + 28680;
	// addi r11,r11,-700
	ctx.r11.s64 = ctx.r11.s64 + -700;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-19704
	ctx.r3.s64 = ctx.r10.s64 + -19704;
	// li r10,0
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
	ctx.lr = 0x83097BCC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83097BE0"))) PPC_WEAK_FUNC(sub_83097BE0);
PPC_FUNC_IMPL(__imp__sub_83097BE0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,28032
	ctx.r4.s64 = ctx.r10.s64 + 28032;
	// addi r11,r11,-660
	ctx.r11.s64 = ctx.r11.s64 + -660;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-18732
	ctx.r3.s64 = ctx.r10.s64 + -18732;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83097C30;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83097C40"))) PPC_WEAK_FUNC(sub_83097C40);
PPC_FUNC_IMPL(__imp__sub_83097C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23484
	ctx.r5.s64 = ctx.r10.s64 + -23484;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,28068
	ctx.r4.s64 = ctx.r10.s64 + 28068;
	// addi r11,r11,-600
	ctx.r11.s64 = ctx.r11.s64 + -600;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-23880
	ctx.r3.s64 = ctx.r10.s64 + -23880;
	// li r10,0
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
	ctx.lr = 0x83097C94;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83097CA8"))) PPC_WEAK_FUNC(sub_83097CA8);
PPC_FUNC_IMPL(__imp__sub_83097CA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,15816
	ctx.r9.s64 = ctx.r10.s64 + 15816;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r5,r10,-23484
	ctx.r5.s64 = ctx.r10.s64 + -23484;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-496
	ctx.r11.s64 = ctx.r11.s64 + -496;
	// addi r4,r10,29800
	ctx.r4.s64 = ctx.r10.s64 + 29800;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-19920
	ctx.r3.s64 = ctx.r10.s64 + -19920;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x83097D00;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83097D10"))) PPC_WEAK_FUNC(sub_83097D10);
PPC_FUNC_IMPL(__imp__sub_83097D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23340
	ctx.r5.s64 = ctx.r10.s64 + -23340;
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
	// addi r3,r10,-20352
	ctx.r3.s64 = ctx.r10.s64 + -20352;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83097D5C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83097D70"))) PPC_WEAK_FUNC(sub_83097D70);
PPC_FUNC_IMPL(__imp__sub_83097D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-17796
	ctx.r5.s64 = ctx.r10.s64 + -17796;
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
	// addi r3,r10,-25824
	ctx.r3.s64 = ctx.r10.s64 + -25824;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83097DBC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83097DD0"))) PPC_WEAK_FUNC(sub_83097DD0);
PPC_FUNC_IMPL(__imp__sub_83097DD0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,24104
	ctx.r4.s64 = ctx.r10.s64 + 24104;
	// addi r11,r11,-396
	ctx.r11.s64 = ctx.r11.s64 + -396;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-19380
	ctx.r3.s64 = ctx.r10.s64 + -19380;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83097E20;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83097E30"))) PPC_WEAK_FUNC(sub_83097E30);
PPC_FUNC_IMPL(__imp__sub_83097E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-25500
	ctx.r5.s64 = ctx.r10.s64 + -25500;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,24128
	ctx.r4.s64 = ctx.r10.s64 + 24128;
	// addi r11,r11,-356
	ctx.r11.s64 = ctx.r11.s64 + -356;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-23304
	ctx.r3.s64 = ctx.r10.s64 + -23304;
	// li r10,0
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
	ctx.lr = 0x83097E84;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83097E98"))) PPC_WEAK_FUNC(sub_83097E98);
PPC_FUNC_IMPL(__imp__sub_83097E98) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,30156
	ctx.r4.s64 = ctx.r10.s64 + 30156;
	// addi r11,r11,-336
	ctx.r11.s64 = ctx.r11.s64 + -336;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-18012
	ctx.r3.s64 = ctx.r10.s64 + -18012;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83097EE8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83097EF8"))) PPC_WEAK_FUNC(sub_83097EF8);
PPC_FUNC_IMPL(__imp__sub_83097EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r10,r10,10992
	ctx.r10.s64 = ctx.r10.s64 + 10992;
	// lwz r11,-316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -316);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// stw r11,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83097F18"))) PPC_WEAK_FUNC(sub_83097F18);
PPC_FUNC_IMPL(__imp__sub_83097F18) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,25280
	ctx.r4.s64 = ctx.r10.s64 + 25280;
	// addi r11,r11,10992
	ctx.r11.s64 = ctx.r11.s64 + 10992;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-21684
	ctx.r3.s64 = ctx.r10.s64 + -21684;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83097F68;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83097F78"))) PPC_WEAK_FUNC(sub_83097F78);
PPC_FUNC_IMPL(__imp__sub_83097F78) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,15892
	ctx.r9.s64 = ctx.r10.s64 + 15892;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r5,r10,-25500
	ctx.r5.s64 = ctx.r10.s64 + -25500;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-288
	ctx.r11.s64 = ctx.r11.s64 + -288;
	// addi r4,r10,25496
	ctx.r4.s64 = ctx.r10.s64 + 25496;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-23340
	ctx.r3.s64 = ctx.r10.s64 + -23340;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x83097FD0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83097FE0"))) PPC_WEAK_FUNC(sub_83097FE0);
PPC_FUNC_IMPL(__imp__sub_83097FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-22476
	ctx.r5.s64 = ctx.r10.s64 + -22476;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,25816
	ctx.r4.s64 = ctx.r10.s64 + 25816;
	// addi r11,r11,-308
	ctx.r11.s64 = ctx.r11.s64 + -308;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-24384
	ctx.r3.s64 = ctx.r10.s64 + -24384;
	// li r10,0
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
	ctx.lr = 0x83098034;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098048"))) PPC_WEAK_FUNC(sub_83098048);
PPC_FUNC_IMPL(__imp__sub_83098048) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,27448
	ctx.r4.s64 = ctx.r10.s64 + 27448;
	// addi r11,r11,-208
	ctx.r11.s64 = ctx.r11.s64 + -208;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-21540
	ctx.r3.s64 = ctx.r10.s64 + -21540;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83098098;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830980A8"))) PPC_WEAK_FUNC(sub_830980A8);
PPC_FUNC_IMPL(__imp__sub_830980A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-17796
	ctx.r5.s64 = ctx.r10.s64 + -17796;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,27468
	ctx.r4.s64 = ctx.r10.s64 + 27468;
	// addi r11,r11,-168
	ctx.r11.s64 = ctx.r11.s64 + -168;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-22116
	ctx.r3.s64 = ctx.r10.s64 + -22116;
	// li r10,0
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
	ctx.lr = 0x830980FC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098110"))) PPC_WEAK_FUNC(sub_83098110);
PPC_FUNC_IMPL(__imp__sub_83098110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-22980
	ctx.r5.s64 = ctx.r10.s64 + -22980;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,28196
	ctx.r4.s64 = ctx.r10.s64 + 28196;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-23916
	ctx.r3.s64 = ctx.r10.s64 + -23916;
	// li r10,0
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
	ctx.lr = 0x83098164;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098178"))) PPC_WEAK_FUNC(sub_83098178);
PPC_FUNC_IMPL(__imp__sub_83098178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-17796
	ctx.r5.s64 = ctx.r10.s64 + -17796;
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
	// addi r3,r10,-16428
	ctx.r3.s64 = ctx.r10.s64 + -16428;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830981C4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830981D8"))) PPC_WEAK_FUNC(sub_830981D8);
PPC_FUNC_IMPL(__imp__sub_830981D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-25824
	ctx.r5.s64 = ctx.r10.s64 + -25824;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,29928
	ctx.r4.s64 = ctx.r10.s64 + 29928;
	// addi r11,r11,-88
	ctx.r11.s64 = ctx.r11.s64 + -88;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-17004
	ctx.r3.s64 = ctx.r10.s64 + -17004;
	// li r10,0
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
	ctx.lr = 0x8309822C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098240"))) PPC_WEAK_FUNC(sub_83098240);
PPC_FUNC_IMPL(__imp__sub_83098240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-25824
	ctx.r5.s64 = ctx.r10.s64 + -25824;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,32028
	ctx.r4.s64 = ctx.r10.s64 + 32028;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-21720
	ctx.r3.s64 = ctx.r10.s64 + -21720;
	// li r10,0
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
	ctx.lr = 0x83098294;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830982A8"))) PPC_WEAK_FUNC(sub_830982A8);
PPC_FUNC_IMPL(__imp__sub_830982A8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,26708
	ctx.r4.s64 = ctx.r10.s64 + 26708;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-23556
	ctx.r3.s64 = ctx.r10.s64 + -23556;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830982F8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098308"))) PPC_WEAK_FUNC(sub_83098308);
PPC_FUNC_IMPL(__imp__sub_83098308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-25500
	ctx.r5.s64 = ctx.r10.s64 + -25500;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,26736
	ctx.r4.s64 = ctx.r10.s64 + 26736;
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-20064
	ctx.r3.s64 = ctx.r10.s64 + -20064;
	// li r10,0
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
	ctx.lr = 0x8309835C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098370"))) PPC_WEAK_FUNC(sub_83098370);
PPC_FUNC_IMPL(__imp__sub_83098370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23484
	ctx.r5.s64 = ctx.r10.s64 + -23484;
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
	// addi r3,r10,-24708
	ctx.r3.s64 = ctx.r10.s64 + -24708;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830983BC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830983D0"))) PPC_WEAK_FUNC(sub_830983D0);
PPC_FUNC_IMPL(__imp__sub_830983D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-17796
	ctx.r5.s64 = ctx.r10.s64 + -17796;
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
	// addi r3,r10,-22980
	ctx.r3.s64 = ctx.r10.s64 + -22980;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309841C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098430"))) PPC_WEAK_FUNC(sub_83098430);
PPC_FUNC_IMPL(__imp__sub_83098430) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,31684
	ctx.r4.s64 = ctx.r10.s64 + 31684;
	// addi r11,r11,272
	ctx.r11.s64 = ctx.r11.s64 + 272;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-17148
	ctx.r3.s64 = ctx.r10.s64 + -17148;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83098480;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098490"))) PPC_WEAK_FUNC(sub_83098490);
PPC_FUNC_IMPL(__imp__sub_83098490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23340
	ctx.r5.s64 = ctx.r10.s64 + -23340;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,31720
	ctx.r4.s64 = ctx.r10.s64 + 31720;
	// addi r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 + 172;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-17544
	ctx.r3.s64 = ctx.r10.s64 + -17544;
	// li r10,0
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
	ctx.lr = 0x830984E4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830984F8"))) PPC_WEAK_FUNC(sub_830984F8);
PPC_FUNC_IMPL(__imp__sub_830984F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-21720
	ctx.r5.s64 = ctx.r10.s64 + -21720;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,32256
	ctx.r4.s64 = ctx.r10.s64 + 32256;
	// addi r11,r11,392
	ctx.r11.s64 = ctx.r11.s64 + 392;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-20532
	ctx.r3.s64 = ctx.r10.s64 + -20532;
	// li r10,0
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
	ctx.lr = 0x8309854C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098560"))) PPC_WEAK_FUNC(sub_83098560);
PPC_FUNC_IMPL(__imp__sub_83098560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-17796
	ctx.r5.s64 = ctx.r10.s64 + -17796;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,32400
	ctx.r4.s64 = ctx.r10.s64 + 32400;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-18264
	ctx.r3.s64 = ctx.r10.s64 + -18264;
	// li r10,0
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
	ctx.lr = 0x830985B4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830985C8"))) PPC_WEAK_FUNC(sub_830985C8);
PPC_FUNC_IMPL(__imp__sub_830985C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23484
	ctx.r5.s64 = ctx.r10.s64 + -23484;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-32696
	ctx.r4.s64 = ctx.r10.s64 + -32696;
	// addi r11,r11,492
	ctx.r11.s64 = ctx.r11.s64 + 492;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-20028
	ctx.r3.s64 = ctx.r10.s64 + -20028;
	// li r10,0
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
	ctx.lr = 0x8309861C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098630"))) PPC_WEAK_FUNC(sub_83098630);
PPC_FUNC_IMPL(__imp__sub_83098630) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-3320
	ctx.r4.s64 = ctx.r10.s64 + -3320;
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
	// addi r3,r10,-23016
	ctx.r3.s64 = ctx.r10.s64 + -23016;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83098680;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098690"))) PPC_WEAK_FUNC(sub_83098690);
PPC_FUNC_IMPL(__imp__sub_83098690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-22476
	ctx.r5.s64 = ctx.r10.s64 + -22476;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,32592
	ctx.r4.s64 = ctx.r10.s64 + 32592;
	// addi r11,r11,632
	ctx.r11.s64 = ctx.r11.s64 + 632;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-22944
	ctx.r3.s64 = ctx.r10.s64 + -22944;
	// li r10,0
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
	ctx.lr = 0x830986E4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830986F8"))) PPC_WEAK_FUNC(sub_830986F8);
PPC_FUNC_IMPL(__imp__sub_830986F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-25500
	ctx.r5.s64 = ctx.r10.s64 + -25500;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-32764
	ctx.r4.s64 = ctx.r10.s64 + -32764;
	// addi r11,r11,652
	ctx.r11.s64 = ctx.r11.s64 + 652;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-17256
	ctx.r3.s64 = ctx.r10.s64 + -17256;
	// li r10,0
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
	ctx.lr = 0x8309874C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098760"))) PPC_WEAK_FUNC(sub_83098760);
PPC_FUNC_IMPL(__imp__sub_83098760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,13880
	ctx.r4.s64 = ctx.r10.s64 + 13880;
	// addi r11,r11,712
	ctx.r11.s64 = ctx.r11.s64 + 712;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-16212
	ctx.r3.s64 = ctx.r10.s64 + -16212;
	// li r10,0
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
	ctx.lr = 0x830987B4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830987C8"))) PPC_WEAK_FUNC(sub_830987C8);
PPC_FUNC_IMPL(__imp__sub_830987C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-16212
	ctx.r5.s64 = ctx.r10.s64 + -16212;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,13924
	ctx.r4.s64 = ctx.r10.s64 + 13924;
	// addi r11,r11,692
	ctx.r11.s64 = ctx.r11.s64 + 692;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-17760
	ctx.r3.s64 = ctx.r10.s64 + -17760;
	// li r10,0
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
	ctx.lr = 0x8309881C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098830"))) PPC_WEAK_FUNC(sub_83098830);
PPC_FUNC_IMPL(__imp__sub_83098830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-16212
	ctx.r5.s64 = ctx.r10.s64 + -16212;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,13996
	ctx.r4.s64 = ctx.r10.s64 + 13996;
	// addi r11,r11,792
	ctx.r11.s64 = ctx.r11.s64 + 792;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-18048
	ctx.r3.s64 = ctx.r10.s64 + -18048;
	// li r10,0
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
	ctx.lr = 0x83098884;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098898"))) PPC_WEAK_FUNC(sub_83098898);
PPC_FUNC_IMPL(__imp__sub_83098898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-16212
	ctx.r5.s64 = ctx.r10.s64 + -16212;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,17524
	ctx.r4.s64 = ctx.r10.s64 + 17524;
	// addi r11,r11,832
	ctx.r11.s64 = ctx.r11.s64 + 832;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-18840
	ctx.r3.s64 = ctx.r10.s64 + -18840;
	// li r10,0
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
	ctx.lr = 0x830988EC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098900"))) PPC_WEAK_FUNC(sub_83098900);
PPC_FUNC_IMPL(__imp__sub_83098900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r10,r10,10932
	ctx.r10.s64 = ctx.r10.s64 + 10932;
	// lwz r11,852(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 852);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098918"))) PPC_WEAK_FUNC(sub_83098918);
PPC_FUNC_IMPL(__imp__sub_83098918) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,15956
	ctx.r9.s64 = ctx.r10.s64 + 15956;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,11632
	ctx.r4.s64 = ctx.r10.s64 + 11632;
	// addi r11,r11,10932
	ctx.r11.s64 = ctx.r11.s64 + 10932;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-16788
	ctx.r3.s64 = ctx.r10.s64 + -16788;
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
	ctx.lr = 0x8309896C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098980"))) PPC_WEAK_FUNC(sub_83098980);
PPC_FUNC_IMPL(__imp__sub_83098980) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,12760
	ctx.r4.s64 = ctx.r10.s64 + 12760;
	// addi r11,r11,856
	ctx.r11.s64 = ctx.r11.s64 + 856;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-20712
	ctx.r3.s64 = ctx.r10.s64 + -20712;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830989D0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830989E0"))) PPC_WEAK_FUNC(sub_830989E0);
PPC_FUNC_IMPL(__imp__sub_830989E0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,12776
	ctx.r4.s64 = ctx.r10.s64 + 12776;
	// addi r11,r11,876
	ctx.r11.s64 = ctx.r11.s64 + 876;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-20676
	ctx.r3.s64 = ctx.r10.s64 + -20676;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83098A30;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098A40"))) PPC_WEAK_FUNC(sub_83098A40);
PPC_FUNC_IMPL(__imp__sub_83098A40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,16152
	ctx.r9.s64 = ctx.r10.s64 + 16152;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,940
	ctx.r11.s64 = ctx.r11.s64 + 940;
	// addi r4,r10,15152
	ctx.r4.s64 = ctx.r10.s64 + 15152;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-23160
	ctx.r3.s64 = ctx.r10.s64 + -23160;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x83098A98;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098AA8"))) PPC_WEAK_FUNC(sub_83098AA8);
PPC_FUNC_IMPL(__imp__sub_83098AA8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-3240
	ctx.r4.s64 = ctx.r10.s64 + -3240;
	// addi r11,r11,960
	ctx.r11.s64 = ctx.r11.s64 + 960;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-23376
	ctx.r3.s64 = ctx.r10.s64 + -23376;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83098AF8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098B08"))) PPC_WEAK_FUNC(sub_83098B08);
PPC_FUNC_IMPL(__imp__sub_83098B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r10,r10,12024
	ctx.r10.s64 = ctx.r10.s64 + 12024;
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098B20"))) PPC_WEAK_FUNC(sub_83098B20);
PPC_FUNC_IMPL(__imp__sub_83098B20) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,16236
	ctx.r9.s64 = ctx.r10.s64 + 16236;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,12024
	ctx.r11.s64 = ctx.r11.s64 + 12024;
	// addi r4,r10,-9360
	ctx.r4.s64 = ctx.r10.s64 + -9360;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-20424
	ctx.r3.s64 = ctx.r10.s64 + -20424;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x83098B78;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098B88"))) PPC_WEAK_FUNC(sub_83098B88);
PPC_FUNC_IMPL(__imp__sub_83098B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23160
	ctx.r5.s64 = ctx.r10.s64 + -23160;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,7952
	ctx.r4.s64 = ctx.r10.s64 + 7952;
	// addi r11,r11,1052
	ctx.r11.s64 = ctx.r11.s64 + 1052;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-22872
	ctx.r3.s64 = ctx.r10.s64 + -22872;
	// li r10,0
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
	ctx.lr = 0x83098BDC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098BF0"))) PPC_WEAK_FUNC(sub_83098BF0);
PPC_FUNC_IMPL(__imp__sub_83098BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23160
	ctx.r5.s64 = ctx.r10.s64 + -23160;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,7660
	ctx.r4.s64 = ctx.r10.s64 + 7660;
	// addi r11,r11,1072
	ctx.r11.s64 = ctx.r11.s64 + 1072;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-24168
	ctx.r3.s64 = ctx.r10.s64 + -24168;
	// li r10,0
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
	ctx.lr = 0x83098C44;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098C58"))) PPC_WEAK_FUNC(sub_83098C58);
PPC_FUNC_IMPL(__imp__sub_83098C58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,-3220
	ctx.r4.s64 = ctx.r10.s64 + -3220;
	// addi r11,r11,1112
	ctx.r11.s64 = ctx.r11.s64 + 1112;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-16284
	ctx.r3.s64 = ctx.r10.s64 + -16284;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83098CA8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098CB8"))) PPC_WEAK_FUNC(sub_83098CB8);
PPC_FUNC_IMPL(__imp__sub_83098CB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,-3180
	ctx.r4.s64 = ctx.r10.s64 + -3180;
	// addi r11,r11,1172
	ctx.r11.s64 = ctx.r11.s64 + 1172;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-24600
	ctx.r3.s64 = ctx.r10.s64 + -24600;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83098D08;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098D18"))) PPC_WEAK_FUNC(sub_83098D18);
PPC_FUNC_IMPL(__imp__sub_83098D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23160
	ctx.r5.s64 = ctx.r10.s64 + -23160;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,10884
	ctx.r4.s64 = ctx.r10.s64 + 10884;
	// addi r11,r11,1212
	ctx.r11.s64 = ctx.r11.s64 + 1212;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-18948
	ctx.r3.s64 = ctx.r10.s64 + -18948;
	// li r10,0
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
	ctx.lr = 0x83098D6C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098D80"))) PPC_WEAK_FUNC(sub_83098D80);
PPC_FUNC_IMPL(__imp__sub_83098D80) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-3140
	ctx.r4.s64 = ctx.r10.s64 + -3140;
	// addi r11,r11,1312
	ctx.r11.s64 = ctx.r11.s64 + 1312;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-22764
	ctx.r3.s64 = ctx.r10.s64 + -22764;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83098DD0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098DE0"))) PPC_WEAK_FUNC(sub_83098DE0);
PPC_FUNC_IMPL(__imp__sub_83098DE0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,-3092
	ctx.r4.s64 = ctx.r10.s64 + -3092;
	// addi r11,r11,1252
	ctx.r11.s64 = ctx.r11.s64 + 1252;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-17652
	ctx.r3.s64 = ctx.r10.s64 + -17652;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83098E30;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098E40"))) PPC_WEAK_FUNC(sub_83098E40);
PPC_FUNC_IMPL(__imp__sub_83098E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r8,r10,1392
	ctx.r8.s64 = ctx.r10.s64 + 1392;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r10,-23160
	ctx.r5.s64 = ctx.r10.s64 + -23160;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,16272
	ctx.r11.s64 = ctx.r11.s64 + 16272;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,11420
	ctx.r4.s64 = ctx.r10.s64 + 11420;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-18120
	ctx.r3.s64 = ctx.r10.s64 + -18120;
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
	ctx.lr = 0x83098E9C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098EB0"))) PPC_WEAK_FUNC(sub_83098EB0);
PPC_FUNC_IMPL(__imp__sub_83098EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-21828
	ctx.r5.s64 = ctx.r10.s64 + -21828;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,18348
	ctx.r4.s64 = ctx.r10.s64 + 18348;
	// addi r11,r11,1512
	ctx.r11.s64 = ctx.r11.s64 + 1512;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-21612
	ctx.r3.s64 = ctx.r10.s64 + -21612;
	// li r10,0
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
	ctx.lr = 0x83098F04;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098F18"))) PPC_WEAK_FUNC(sub_83098F18);
PPC_FUNC_IMPL(__imp__sub_83098F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
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
	// addi r3,r10,-21828
	ctx.r3.s64 = ctx.r10.s64 + -21828;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83098F64;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098F78"))) PPC_WEAK_FUNC(sub_83098F78);
PPC_FUNC_IMPL(__imp__sub_83098F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r10,r10,10672
	ctx.r10.s64 = ctx.r10.s64 + 10672;
	// lwz r11,1612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1612);
	// stw r11,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098F90"))) PPC_WEAK_FUNC(sub_83098F90);
PPC_FUNC_IMPL(__imp__sub_83098F90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,16340
	ctx.r9.s64 = ctx.r10.s64 + 16340;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r5,r10,-23160
	ctx.r5.s64 = ctx.r10.s64 + -23160;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,10672
	ctx.r11.s64 = ctx.r11.s64 + 10672;
	// addi r4,r10,19012
	ctx.r4.s64 = ctx.r10.s64 + 19012;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-24456
	ctx.r3.s64 = ctx.r10.s64 + -24456;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x83098FE8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83098FF8"))) PPC_WEAK_FUNC(sub_83098FF8);
PPC_FUNC_IMPL(__imp__sub_83098FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23160
	ctx.r5.s64 = ctx.r10.s64 + -23160;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,11792
	ctx.r4.s64 = ctx.r10.s64 + 11792;
	// addi r11,r11,1616
	ctx.r11.s64 = ctx.r11.s64 + 1616;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-21900
	ctx.r3.s64 = ctx.r10.s64 + -21900;
	// li r10,0
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
	ctx.lr = 0x8309904C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099060"))) PPC_WEAK_FUNC(sub_83099060);
PPC_FUNC_IMPL(__imp__sub_83099060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-18120
	ctx.r5.s64 = ctx.r10.s64 + -18120;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-2952
	ctx.r4.s64 = ctx.r10.s64 + -2952;
	// addi r11,r11,1736
	ctx.r11.s64 = ctx.r11.s64 + 1736;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-22080
	ctx.r3.s64 = ctx.r10.s64 + -22080;
	// li r10,0
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
	ctx.lr = 0x830990B4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830990C8"))) PPC_WEAK_FUNC(sub_830990C8);
PPC_FUNC_IMPL(__imp__sub_830990C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,-2888
	ctx.r4.s64 = ctx.r10.s64 + -2888;
	// addi r11,r11,1676
	ctx.r11.s64 = ctx.r11.s64 + 1676;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-16248
	ctx.r3.s64 = ctx.r10.s64 + -16248;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83099118;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099128"))) PPC_WEAK_FUNC(sub_83099128);
PPC_FUNC_IMPL(__imp__sub_83099128) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,-2844
	ctx.r4.s64 = ctx.r10.s64 + -2844;
	// addi r11,r11,1816
	ctx.r11.s64 = ctx.r11.s64 + 1816;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-17184
	ctx.r3.s64 = ctx.r10.s64 + -17184;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83099178;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099188"))) PPC_WEAK_FUNC(sub_83099188);
PPC_FUNC_IMPL(__imp__sub_83099188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23160
	ctx.r5.s64 = ctx.r10.s64 + -23160;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,12628
	ctx.r4.s64 = ctx.r10.s64 + 12628;
	// addi r11,r11,1936
	ctx.r11.s64 = ctx.r11.s64 + 1936;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-21216
	ctx.r3.s64 = ctx.r10.s64 + -21216;
	// li r10,0
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
	ctx.lr = 0x830991DC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830991F0"))) PPC_WEAK_FUNC(sub_830991F0);
PPC_FUNC_IMPL(__imp__sub_830991F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23160
	ctx.r5.s64 = ctx.r10.s64 + -23160;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,9592
	ctx.r4.s64 = ctx.r10.s64 + 9592;
	// addi r11,r11,1876
	ctx.r11.s64 = ctx.r11.s64 + 1876;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-25680
	ctx.r3.s64 = ctx.r10.s64 + -25680;
	// li r10,0
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
	ctx.lr = 0x83099244;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099258"))) PPC_WEAK_FUNC(sub_83099258);
PPC_FUNC_IMPL(__imp__sub_83099258) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,-2720
	ctx.r4.s64 = ctx.r10.s64 + -2720;
	// addi r11,r11,2076
	ctx.r11.s64 = ctx.r11.s64 + 2076;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-25032
	ctx.r3.s64 = ctx.r10.s64 + -25032;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830992A8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830992B8"))) PPC_WEAK_FUNC(sub_830992B8);
PPC_FUNC_IMPL(__imp__sub_830992B8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-2680
	ctx.r4.s64 = ctx.r10.s64 + -2680;
	// addi r11,r11,2136
	ctx.r11.s64 = ctx.r11.s64 + 2136;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-22260
	ctx.r3.s64 = ctx.r10.s64 + -22260;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83099308;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099318"))) PPC_WEAK_FUNC(sub_83099318);
PPC_FUNC_IMPL(__imp__sub_83099318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23160
	ctx.r5.s64 = ctx.r10.s64 + -23160;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,10672
	ctx.r4.s64 = ctx.r10.s64 + 10672;
	// addi r11,r11,2256
	ctx.r11.s64 = ctx.r11.s64 + 2256;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-16536
	ctx.r3.s64 = ctx.r10.s64 + -16536;
	// li r10,0
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
	ctx.lr = 0x8309936C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099380"))) PPC_WEAK_FUNC(sub_83099380);
PPC_FUNC_IMPL(__imp__sub_83099380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23160
	ctx.r5.s64 = ctx.r10.s64 + -23160;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,14336
	ctx.r4.s64 = ctx.r10.s64 + 14336;
	// addi r11,r11,2376
	ctx.r11.s64 = ctx.r11.s64 + 2376;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-21864
	ctx.r3.s64 = ctx.r10.s64 + -21864;
	// li r10,0
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
	ctx.lr = 0x830993D4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830993E8"))) PPC_WEAK_FUNC(sub_830993E8);
PPC_FUNC_IMPL(__imp__sub_830993E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23160
	ctx.r5.s64 = ctx.r10.s64 + -23160;
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
	// addi r3,r10,-24096
	ctx.r3.s64 = ctx.r10.s64 + -24096;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83099434;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099448"))) PPC_WEAK_FUNC(sub_83099448);
PPC_FUNC_IMPL(__imp__sub_83099448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-20424
	ctx.r5.s64 = ctx.r10.s64 + -20424;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,15872
	ctx.r4.s64 = ctx.r10.s64 + 15872;
	// addi r11,r11,2536
	ctx.r11.s64 = ctx.r11.s64 + 2536;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-19056
	ctx.r3.s64 = ctx.r10.s64 + -19056;
	// li r10,0
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
	ctx.lr = 0x8309949C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830994B0"))) PPC_WEAK_FUNC(sub_830994B0);
PPC_FUNC_IMPL(__imp__sub_830994B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-16212
	ctx.r5.s64 = ctx.r10.s64 + -16212;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,15992
	ctx.r4.s64 = ctx.r10.s64 + 15992;
	// addi r11,r11,2116
	ctx.r11.s64 = ctx.r11.s64 + 2116;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-22404
	ctx.r3.s64 = ctx.r10.s64 + -22404;
	// li r10,0
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
	ctx.lr = 0x83099504;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099518"))) PPC_WEAK_FUNC(sub_83099518);
PPC_FUNC_IMPL(__imp__sub_83099518) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,7936
	ctx.r4.s64 = ctx.r10.s64 + 7936;
	// addi r11,r11,2576
	ctx.r11.s64 = ctx.r11.s64 + 2576;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-18660
	ctx.r3.s64 = ctx.r10.s64 + -18660;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83099568;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099578"))) PPC_WEAK_FUNC(sub_83099578);
PPC_FUNC_IMPL(__imp__sub_83099578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-24096
	ctx.r5.s64 = ctx.r10.s64 + -24096;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,7972
	ctx.r4.s64 = ctx.r10.s64 + 7972;
	// addi r11,r11,2616
	ctx.r11.s64 = ctx.r11.s64 + 2616;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-20604
	ctx.r3.s64 = ctx.r10.s64 + -20604;
	// li r10,0
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
	ctx.lr = 0x830995CC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830995E0"))) PPC_WEAK_FUNC(sub_830995E0);
PPC_FUNC_IMPL(__imp__sub_830995E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,8052
	ctx.r4.s64 = ctx.r10.s64 + 8052;
	// addi r11,r11,2716
	ctx.r11.s64 = ctx.r11.s64 + 2716;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-23088
	ctx.r3.s64 = ctx.r10.s64 + -23088;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83099630;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099640"))) PPC_WEAK_FUNC(sub_83099640);
PPC_FUNC_IMPL(__imp__sub_83099640) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,8088
	ctx.r4.s64 = ctx.r10.s64 + 8088;
	// addi r11,r11,2776
	ctx.r11.s64 = ctx.r11.s64 + 2776;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-20496
	ctx.r3.s64 = ctx.r10.s64 + -20496;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83099690;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830996A0"))) PPC_WEAK_FUNC(sub_830996A0);
PPC_FUNC_IMPL(__imp__sub_830996A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23160
	ctx.r5.s64 = ctx.r10.s64 + -23160;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,11160
	ctx.r4.s64 = ctx.r10.s64 + 11160;
	// addi r11,r11,2816
	ctx.r11.s64 = ctx.r11.s64 + 2816;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-17112
	ctx.r3.s64 = ctx.r10.s64 + -17112;
	// li r10,0
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
	ctx.lr = 0x830996F4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099708"))) PPC_WEAK_FUNC(sub_83099708);
PPC_FUNC_IMPL(__imp__sub_83099708) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,12248
	ctx.r4.s64 = ctx.r10.s64 + 12248;
	// addi r11,r11,2936
	ctx.r11.s64 = ctx.r11.s64 + 2936;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-25212
	ctx.r3.s64 = ctx.r10.s64 + -25212;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83099758;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099768"))) PPC_WEAK_FUNC(sub_83099768);
PPC_FUNC_IMPL(__imp__sub_83099768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-24096
	ctx.r5.s64 = ctx.r10.s64 + -24096;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,12284
	ctx.r4.s64 = ctx.r10.s64 + 12284;
	// addi r11,r11,3056
	ctx.r11.s64 = ctx.r11.s64 + 3056;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-16176
	ctx.r3.s64 = ctx.r10.s64 + -16176;
	// li r10,0
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
	ctx.lr = 0x830997BC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830997D0"))) PPC_WEAK_FUNC(sub_830997D0);
PPC_FUNC_IMPL(__imp__sub_830997D0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,8180
	ctx.r4.s64 = ctx.r10.s64 + 8180;
	// addi r11,r11,3216
	ctx.r11.s64 = ctx.r11.s64 + 3216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-21288
	ctx.r3.s64 = ctx.r10.s64 + -21288;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83099820;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099830"))) PPC_WEAK_FUNC(sub_83099830);
PPC_FUNC_IMPL(__imp__sub_83099830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-24096
	ctx.r5.s64 = ctx.r10.s64 + -24096;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,8220
	ctx.r4.s64 = ctx.r10.s64 + 8220;
	// addi r11,r11,3296
	ctx.r11.s64 = ctx.r11.s64 + 3296;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-23700
	ctx.r3.s64 = ctx.r10.s64 + -23700;
	// li r10,0
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
	ctx.lr = 0x83099884;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099898"))) PPC_WEAK_FUNC(sub_83099898);
PPC_FUNC_IMPL(__imp__sub_83099898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23160
	ctx.r5.s64 = ctx.r10.s64 + -23160;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,17272
	ctx.r4.s64 = ctx.r10.s64 + 17272;
	// addi r11,r11,3276
	ctx.r11.s64 = ctx.r11.s64 + 3276;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-16716
	ctx.r3.s64 = ctx.r10.s64 + -16716;
	// li r10,0
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
	ctx.lr = 0x830998EC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099900"))) PPC_WEAK_FUNC(sub_83099900);
PPC_FUNC_IMPL(__imp__sub_83099900) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,9960
	ctx.r4.s64 = ctx.r10.s64 + 9960;
	// addi r11,r11,3376
	ctx.r11.s64 = ctx.r11.s64 + 3376;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-17436
	ctx.r3.s64 = ctx.r10.s64 + -17436;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83099950;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099960"))) PPC_WEAK_FUNC(sub_83099960);
PPC_FUNC_IMPL(__imp__sub_83099960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23160
	ctx.r5.s64 = ctx.r10.s64 + -23160;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,18444
	ctx.r4.s64 = ctx.r10.s64 + 18444;
	// addi r11,r11,3476
	ctx.r11.s64 = ctx.r11.s64 + 3476;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-19524
	ctx.r3.s64 = ctx.r10.s64 + -19524;
	// li r10,0
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
	ctx.lr = 0x830999B4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830999C8"))) PPC_WEAK_FUNC(sub_830999C8);
PPC_FUNC_IMPL(__imp__sub_830999C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,16392
	ctx.r9.s64 = ctx.r10.s64 + 16392;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r4,r10,15420
	ctx.r4.s64 = ctx.r10.s64 + 15420;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-19560
	ctx.r3.s64 = ctx.r10.s64 + -19560;
	// li r10,1
	ctx.r10.s64 = 1;
	// bl 0x82db4000
	ctx.lr = 0x83099A18;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099A28"))) PPC_WEAK_FUNC(sub_83099A28);
PPC_FUNC_IMPL(__imp__sub_83099A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-19560
	ctx.r5.s64 = ctx.r10.s64 + -19560;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,16088
	ctx.r4.s64 = ctx.r10.s64 + 16088;
	// addi r11,r11,3520
	ctx.r11.s64 = ctx.r11.s64 + 3520;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-23124
	ctx.r3.s64 = ctx.r10.s64 + -23124;
	// li r10,0
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
	ctx.lr = 0x83099A7C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099A90"))) PPC_WEAK_FUNC(sub_83099A90);
PPC_FUNC_IMPL(__imp__sub_83099A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23124
	ctx.r5.s64 = ctx.r10.s64 + -23124;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,19200
	ctx.r4.s64 = ctx.r10.s64 + 19200;
	// addi r11,r11,3560
	ctx.r11.s64 = ctx.r11.s64 + 3560;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-21072
	ctx.r3.s64 = ctx.r10.s64 + -21072;
	// li r10,0
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
	ctx.lr = 0x83099AE4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099AF8"))) PPC_WEAK_FUNC(sub_83099AF8);
PPC_FUNC_IMPL(__imp__sub_83099AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23124
	ctx.r5.s64 = ctx.r10.s64 + -23124;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,7480
	ctx.r4.s64 = ctx.r10.s64 + 7480;
	// addi r11,r11,3640
	ctx.r11.s64 = ctx.r11.s64 + 3640;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-20928
	ctx.r3.s64 = ctx.r10.s64 + -20928;
	// li r10,0
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
	ctx.lr = 0x83099B4C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099B60"))) PPC_WEAK_FUNC(sub_83099B60);
PPC_FUNC_IMPL(__imp__sub_83099B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23124
	ctx.r5.s64 = ctx.r10.s64 + -23124;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,10124
	ctx.r4.s64 = ctx.r10.s64 + 10124;
	// addi r11,r11,3680
	ctx.r11.s64 = ctx.r11.s64 + 3680;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-22836
	ctx.r3.s64 = ctx.r10.s64 + -22836;
	// li r10,0
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
	ctx.lr = 0x83099BB4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099BC8"))) PPC_WEAK_FUNC(sub_83099BC8);
PPC_FUNC_IMPL(__imp__sub_83099BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23160
	ctx.r5.s64 = ctx.r10.s64 + -23160;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,12948
	ctx.r4.s64 = ctx.r10.s64 + 12948;
	// addi r11,r11,3744
	ctx.r11.s64 = ctx.r11.s64 + 3744;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-21936
	ctx.r3.s64 = ctx.r10.s64 + -21936;
	// li r10,0
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
	ctx.lr = 0x83099C1C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099C30"))) PPC_WEAK_FUNC(sub_83099C30);
PPC_FUNC_IMPL(__imp__sub_83099C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// li r9,18
	ctx.r9.s64 = 18;
	// addi r8,r10,3864
	ctx.r8.s64 = ctx.r10.s64 + 3864;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r10,-24528
	ctx.r5.s64 = ctx.r10.s64 + -24528;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,16408
	ctx.r11.s64 = ctx.r11.s64 + 16408;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,9428
	ctx.r4.s64 = ctx.r10.s64 + 9428;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-16644
	ctx.r3.s64 = ctx.r10.s64 + -16644;
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
	ctx.lr = 0x83099C8C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099CA0"))) PPC_WEAK_FUNC(sub_83099CA0);
PPC_FUNC_IMPL(__imp__sub_83099CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
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
	// addi r3,r10,-25392
	ctx.r3.s64 = ctx.r10.s64 + -25392;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83099CEC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099D00"))) PPC_WEAK_FUNC(sub_83099D00);
PPC_FUNC_IMPL(__imp__sub_83099D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-18336
	ctx.r5.s64 = ctx.r10.s64 + -18336;
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
	// addi r3,r10,-19128
	ctx.r3.s64 = ctx.r10.s64 + -19128;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83099D4C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099D60"))) PPC_WEAK_FUNC(sub_83099D60);
PPC_FUNC_IMPL(__imp__sub_83099D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-16644
	ctx.r5.s64 = ctx.r10.s64 + -16644;
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
	// addi r3,r10,-20316
	ctx.r3.s64 = ctx.r10.s64 + -20316;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83099DAC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099DC0"))) PPC_WEAK_FUNC(sub_83099DC0);
PPC_FUNC_IMPL(__imp__sub_83099DC0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,16516
	ctx.r9.s64 = ctx.r10.s64 + 16516;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,-25392
	ctx.r5.s64 = ctx.r10.s64 + -25392;
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
	// addi r3,r10,-18336
	ctx.r3.s64 = ctx.r10.s64 + -18336;
	// li r10,1
	ctx.r10.s64 = 1;
	// bl 0x82db4000
	ctx.lr = 0x83099E10;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099E20"))) PPC_WEAK_FUNC(sub_83099E20);
PPC_FUNC_IMPL(__imp__sub_83099E20) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,7308
	ctx.r4.s64 = ctx.r10.s64 + 7308;
	// addi r11,r11,4224
	ctx.r11.s64 = ctx.r11.s64 + 4224;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-17724
	ctx.r3.s64 = ctx.r10.s64 + -17724;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83099E70;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099E80"))) PPC_WEAK_FUNC(sub_83099E80);
PPC_FUNC_IMPL(__imp__sub_83099E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-18336
	ctx.r5.s64 = ctx.r10.s64 + -18336;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,7344
	ctx.r4.s64 = ctx.r10.s64 + 7344;
	// addi r11,r11,4264
	ctx.r11.s64 = ctx.r11.s64 + 4264;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-20964
	ctx.r3.s64 = ctx.r10.s64 + -20964;
	// li r10,0
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
	ctx.lr = 0x83099ED4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099EE8"))) PPC_WEAK_FUNC(sub_83099EE8);
PPC_FUNC_IMPL(__imp__sub_83099EE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,16608
	ctx.r9.s64 = ctx.r10.s64 + 16608;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,4408
	ctx.r11.s64 = ctx.r11.s64 + 4408;
	// addi r4,r10,17028
	ctx.r4.s64 = ctx.r10.s64 + 17028;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-16320
	ctx.r3.s64 = ctx.r10.s64 + -16320;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x83099F40;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099F50"))) PPC_WEAK_FUNC(sub_83099F50);
PPC_FUNC_IMPL(__imp__sub_83099F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-17976
	ctx.r5.s64 = ctx.r10.s64 + -17976;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,14012
	ctx.r4.s64 = ctx.r10.s64 + 14012;
	// addi r11,r11,4428
	ctx.r11.s64 = ctx.r11.s64 + 4428;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-24888
	ctx.r3.s64 = ctx.r10.s64 + -24888;
	// li r10,0
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
	ctx.lr = 0x83099FA4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83099FB8"))) PPC_WEAK_FUNC(sub_83099FB8);
PPC_FUNC_IMPL(__imp__sub_83099FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-17076
	ctx.r5.s64 = ctx.r10.s64 + -17076;
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
	// addi r3,r10,-19992
	ctx.r3.s64 = ctx.r10.s64 + -19992;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309A004;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309A018"))) PPC_WEAK_FUNC(sub_8309A018);
PPC_FUNC_IMPL(__imp__sub_8309A018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-17976
	ctx.r5.s64 = ctx.r10.s64 + -17976;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,17616
	ctx.r4.s64 = ctx.r10.s64 + 17616;
	// addi r11,r11,4448
	ctx.r11.s64 = ctx.r11.s64 + 4448;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-17076
	ctx.r3.s64 = ctx.r10.s64 + -17076;
	// li r10,0
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
	ctx.lr = 0x8309A06C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309A080"))) PPC_WEAK_FUNC(sub_8309A080);
PPC_FUNC_IMPL(__imp__sub_8309A080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-16320
	ctx.r5.s64 = ctx.r10.s64 + -16320;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-2640
	ctx.r4.s64 = ctx.r10.s64 + -2640;
	// addi r11,r11,4488
	ctx.r11.s64 = ctx.r11.s64 + 4488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-17976
	ctx.r3.s64 = ctx.r10.s64 + -17976;
	// li r10,0
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
	ctx.lr = 0x8309A0D4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309A0E8"))) PPC_WEAK_FUNC(sub_8309A0E8);
PPC_FUNC_IMPL(__imp__sub_8309A0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-17976
	ctx.r5.s64 = ctx.r10.s64 + -17976;
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
	// addi r3,r10,-16392
	ctx.r3.s64 = ctx.r10.s64 + -16392;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309A134;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309A148"))) PPC_WEAK_FUNC(sub_8309A148);
PPC_FUNC_IMPL(__imp__sub_8309A148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-24888
	ctx.r5.s64 = ctx.r10.s64 + -24888;
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
	// addi r3,r10,-18228
	ctx.r3.s64 = ctx.r10.s64 + -18228;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309A194;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309A1A8"))) PPC_WEAK_FUNC(sub_8309A1A8);
PPC_FUNC_IMPL(__imp__sub_8309A1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-16392
	ctx.r5.s64 = ctx.r10.s64 + -16392;
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
	// addi r3,r10,-25608
	ctx.r3.s64 = ctx.r10.s64 + -25608;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309A1F4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309A208"))) PPC_WEAK_FUNC(sub_8309A208);
PPC_FUNC_IMPL(__imp__sub_8309A208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-24888
	ctx.r5.s64 = ctx.r10.s64 + -24888;
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
	// addi r3,r10,-20640
	ctx.r3.s64 = ctx.r10.s64 + -20640;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309A254;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309A268"))) PPC_WEAK_FUNC(sub_8309A268);
PPC_FUNC_IMPL(__imp__sub_8309A268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-21468
	ctx.r5.s64 = ctx.r10.s64 + -21468;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,13532
	ctx.r4.s64 = ctx.r10.s64 + 13532;
	// addi r11,r11,4628
	ctx.r11.s64 = ctx.r11.s64 + 4628;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-22620
	ctx.r3.s64 = ctx.r10.s64 + -22620;
	// li r10,0
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
	ctx.lr = 0x8309A2BC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309A2D0"))) PPC_WEAK_FUNC(sub_8309A2D0);
PPC_FUNC_IMPL(__imp__sub_8309A2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23952
	ctx.r5.s64 = ctx.r10.s64 + -23952;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,15256
	ctx.r4.s64 = ctx.r10.s64 + 15256;
	// addi r11,r11,4668
	ctx.r11.s64 = ctx.r11.s64 + 4668;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-18912
	ctx.r3.s64 = ctx.r10.s64 + -18912;
	// li r10,0
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
	ctx.lr = 0x8309A324;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309A338"))) PPC_WEAK_FUNC(sub_8309A338);
PPC_FUNC_IMPL(__imp__sub_8309A338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-24528
	ctx.r5.s64 = ctx.r10.s64 + -24528;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,17212
	ctx.r4.s64 = ctx.r10.s64 + 17212;
	// addi r11,r11,4688
	ctx.r11.s64 = ctx.r11.s64 + 4688;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-21468
	ctx.r3.s64 = ctx.r10.s64 + -21468;
	// li r10,0
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
	ctx.lr = 0x8309A38C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309A3A0"))) PPC_WEAK_FUNC(sub_8309A3A0);
PPC_FUNC_IMPL(__imp__sub_8309A3A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-21468
	ctx.r5.s64 = ctx.r10.s64 + -21468;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,17480
	ctx.r4.s64 = ctx.r10.s64 + 17480;
	// addi r11,r11,4728
	ctx.r11.s64 = ctx.r11.s64 + 4728;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-23952
	ctx.r3.s64 = ctx.r10.s64 + -23952;
	// li r10,0
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
	ctx.lr = 0x8309A3F4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309A408"))) PPC_WEAK_FUNC(sub_8309A408);
PPC_FUNC_IMPL(__imp__sub_8309A408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23952
	ctx.r5.s64 = ctx.r10.s64 + -23952;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,6896
	ctx.r4.s64 = ctx.r10.s64 + 6896;
	// addi r11,r11,4748
	ctx.r11.s64 = ctx.r11.s64 + 4748;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-25356
	ctx.r3.s64 = ctx.r10.s64 + -25356;
	// li r10,0
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
	ctx.lr = 0x8309A45C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309A470"))) PPC_WEAK_FUNC(sub_8309A470);
PPC_FUNC_IMPL(__imp__sub_8309A470) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,16644
	ctx.r9.s64 = ctx.r10.s64 + 16644;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-8080
	ctx.r4.s64 = ctx.r10.s64 + -8080;
	// addi r11,r11,4772
	ctx.r11.s64 = ctx.r11.s64 + 4772;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-20136
	ctx.r3.s64 = ctx.r10.s64 + -20136;
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
	ctx.lr = 0x8309A4C4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309A4D8"))) PPC_WEAK_FUNC(sub_8309A4D8);
PPC_FUNC_IMPL(__imp__sub_8309A4D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,18684
	ctx.r4.s64 = ctx.r10.s64 + 18684;
	// addi r11,r11,4816
	ctx.r11.s64 = ctx.r11.s64 + 4816;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-23592
	ctx.r3.s64 = ctx.r10.s64 + -23592;
	// li r10,0
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
	ctx.lr = 0x8309A52C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309A540"))) PPC_WEAK_FUNC(sub_8309A540);
PPC_FUNC_IMPL(__imp__sub_8309A540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r10,4944(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4944);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r11,r11,11256
	ctx.r11.s64 = ctx.r11.s64 + 11256;
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lwz r10,4940(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4940);
	// stw r10,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r10.u32);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lwz r10,4936(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4936);
	// stw r10,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309A570"))) PPC_WEAK_FUNC(sub_8309A570);
PPC_FUNC_IMPL(__imp__sub_8309A570) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r11,16880
	ctx.r9.s64 = ctx.r11.s64 + 16880;
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r8,r9,48
	ctx.r8.s64 = ctx.r9.s64 + 48;
	// li r7,27
	ctx.r7.s64 = 27;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,1284
	ctx.r4.s64 = ctx.r10.s64 + 1284;
	// addi r11,r11,11256
	ctx.r11.s64 = ctx.r11.s64 + 11256;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-19632
	ctx.r3.s64 = ctx.r10.s64 + -19632;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309A5CC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309A5E0"))) PPC_WEAK_FUNC(sub_8309A5E0);
PPC_FUNC_IMPL(__imp__sub_8309A5E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,17080
	ctx.r9.s64 = ctx.r10.s64 + 17080;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,4952
	ctx.r11.s64 = ctx.r11.s64 + 4952;
	// addi r4,r10,18104
	ctx.r4.s64 = ctx.r10.s64 + 18104;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-24528
	ctx.r3.s64 = ctx.r10.s64 + -24528;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x8309A638;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309A648"))) PPC_WEAK_FUNC(sub_8309A648);
PPC_FUNC_IMPL(__imp__sub_8309A648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,17688
	ctx.r4.s64 = ctx.r10.s64 + 17688;
	// addi r11,r11,5072
	ctx.r11.s64 = ctx.r11.s64 + 5072;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-23196
	ctx.r3.s64 = ctx.r10.s64 + -23196;
	// li r10,0
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
	ctx.lr = 0x8309A69C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309A6B0"))) PPC_WEAK_FUNC(sub_8309A6B0);
PPC_FUNC_IMPL(__imp__sub_8309A6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-19596
	ctx.r5.s64 = ctx.r10.s64 + -19596;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-20140
	ctx.r4.s64 = ctx.r10.s64 + -20140;
	// addi r11,r11,5092
	ctx.r11.s64 = ctx.r11.s64 + 5092;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-19848
	ctx.r3.s64 = ctx.r10.s64 + -19848;
	// li r10,0
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
	ctx.lr = 0x8309A704;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309A718"))) PPC_WEAK_FUNC(sub_8309A718);
PPC_FUNC_IMPL(__imp__sub_8309A718) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,-20200
	ctx.r4.s64 = ctx.r10.s64 + -20200;
	// addi r11,r11,5112
	ctx.r11.s64 = ctx.r11.s64 + 5112;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-20856
	ctx.r3.s64 = ctx.r10.s64 + -20856;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309A768;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309A778"))) PPC_WEAK_FUNC(sub_8309A778);
PPC_FUNC_IMPL(__imp__sub_8309A778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-20596
	ctx.r4.s64 = ctx.r10.s64 + -20596;
	// addi r11,r11,5132
	ctx.r11.s64 = ctx.r11.s64 + 5132;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-19020
	ctx.r3.s64 = ctx.r10.s64 + -19020;
	// li r10,0
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
	ctx.lr = 0x8309A7CC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309A7E0"))) PPC_WEAK_FUNC(sub_8309A7E0);
PPC_FUNC_IMPL(__imp__sub_8309A7E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,-20408
	ctx.r4.s64 = ctx.r10.s64 + -20408;
	// addi r11,r11,5192
	ctx.r11.s64 = ctx.r11.s64 + 5192;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-16752
	ctx.r3.s64 = ctx.r10.s64 + -16752;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309A830;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309A840"))) PPC_WEAK_FUNC(sub_8309A840);
PPC_FUNC_IMPL(__imp__sub_8309A840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-20388
	ctx.r4.s64 = ctx.r10.s64 + -20388;
	// addi r11,r11,5212
	ctx.r11.s64 = ctx.r11.s64 + 5212;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-19164
	ctx.r3.s64 = ctx.r10.s64 + -19164;
	// li r10,0
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
	ctx.lr = 0x8309A894;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309A8A8"))) PPC_WEAK_FUNC(sub_8309A8A8);
PPC_FUNC_IMPL(__imp__sub_8309A8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-22332
	ctx.r5.s64 = ctx.r10.s64 + -22332;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-2920
	ctx.r4.s64 = ctx.r10.s64 + -2920;
	// addi r11,r11,5312
	ctx.r11.s64 = ctx.r11.s64 + 5312;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-25932
	ctx.r3.s64 = ctx.r10.s64 + -25932;
	// li r10,0
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
	ctx.lr = 0x8309A8FC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309A910"))) PPC_WEAK_FUNC(sub_8309A910);
PPC_FUNC_IMPL(__imp__sub_8309A910) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,-2800
	ctx.r4.s64 = ctx.r10.s64 + -2800;
	// addi r11,r11,5252
	ctx.r11.s64 = ctx.r11.s64 + 5252;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-19200
	ctx.r3.s64 = ctx.r10.s64 + -19200;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309A960;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309A970"))) PPC_WEAK_FUNC(sub_8309A970);
PPC_FUNC_IMPL(__imp__sub_8309A970) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,-2760
	ctx.r4.s64 = ctx.r10.s64 + -2760;
	// addi r11,r11,5412
	ctx.r11.s64 = ctx.r11.s64 + 5412;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-24348
	ctx.r3.s64 = ctx.r10.s64 + -24348;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309A9C0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309A9D0"))) PPC_WEAK_FUNC(sub_8309A9D0);
PPC_FUNC_IMPL(__imp__sub_8309A9D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r8,r10,5472
	ctx.r8.s64 = ctx.r10.s64 + 5472;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r10,-23160
	ctx.r5.s64 = ctx.r10.s64 + -23160;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,17092
	ctx.r11.s64 = ctx.r11.s64 + 17092;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,13384
	ctx.r4.s64 = ctx.r10.s64 + 13384;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-22332
	ctx.r3.s64 = ctx.r10.s64 + -22332;
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
	ctx.lr = 0x8309AA2C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309AA40"))) PPC_WEAK_FUNC(sub_8309AA40);
PPC_FUNC_IMPL(__imp__sub_8309AA40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,8124
	ctx.r4.s64 = ctx.r10.s64 + 8124;
	// addi r11,r11,5652
	ctx.r11.s64 = ctx.r11.s64 + 5652;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-18984
	ctx.r3.s64 = ctx.r10.s64 + -18984;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309AA90;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309AAA0"))) PPC_WEAK_FUNC(sub_8309AAA0);
PPC_FUNC_IMPL(__imp__sub_8309AAA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,8160
	ctx.r4.s64 = ctx.r10.s64 + 8160;
	// addi r11,r11,5692
	ctx.r11.s64 = ctx.r11.s64 + 5692;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-17364
	ctx.r3.s64 = ctx.r10.s64 + -17364;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309AAF0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309AB00"))) PPC_WEAK_FUNC(sub_8309AB00);
PPC_FUNC_IMPL(__imp__sub_8309AB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23160
	ctx.r5.s64 = ctx.r10.s64 + -23160;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,13764
	ctx.r4.s64 = ctx.r10.s64 + 13764;
	// addi r11,r11,5792
	ctx.r11.s64 = ctx.r11.s64 + 5792;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-25536
	ctx.r3.s64 = ctx.r10.s64 + -25536;
	// li r10,0
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
	ctx.lr = 0x8309AB54;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309AB68"))) PPC_WEAK_FUNC(sub_8309AB68);
PPC_FUNC_IMPL(__imp__sub_8309AB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-18048
	ctx.r5.s64 = ctx.r10.s64 + -18048;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-26268
	ctx.r4.s64 = ctx.r10.s64 + -26268;
	// addi r11,r11,5732
	ctx.r11.s64 = ctx.r11.s64 + 5732;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-25248
	ctx.r3.s64 = ctx.r10.s64 + -25248;
	// li r10,0
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
	ctx.lr = 0x8309ABBC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309ABD0"))) PPC_WEAK_FUNC(sub_8309ABD0);
PPC_FUNC_IMPL(__imp__sub_8309ABD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-18048
	ctx.r5.s64 = ctx.r10.s64 + -18048;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-25968
	ctx.r4.s64 = ctx.r10.s64 + -25968;
	// addi r11,r11,5992
	ctx.r11.s64 = ctx.r11.s64 + 5992;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-24492
	ctx.r3.s64 = ctx.r10.s64 + -24492;
	// li r10,0
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
	ctx.lr = 0x8309AC24;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309AC38"))) PPC_WEAK_FUNC(sub_8309AC38);
PPC_FUNC_IMPL(__imp__sub_8309AC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-18840
	ctx.r5.s64 = ctx.r10.s64 + -18840;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-25464
	ctx.r4.s64 = ctx.r10.s64 + -25464;
	// addi r11,r11,6072
	ctx.r11.s64 = ctx.r11.s64 + 6072;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-18552
	ctx.r3.s64 = ctx.r10.s64 + -18552;
	// li r10,0
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
	ctx.lr = 0x8309AC8C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309ACA0"))) PPC_WEAK_FUNC(sub_8309ACA0);
PPC_FUNC_IMPL(__imp__sub_8309ACA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-18840
	ctx.r5.s64 = ctx.r10.s64 + -18840;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-24232
	ctx.r4.s64 = ctx.r10.s64 + -24232;
	// addi r11,r11,6152
	ctx.r11.s64 = ctx.r11.s64 + 6152;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-25284
	ctx.r3.s64 = ctx.r10.s64 + -25284;
	// li r10,0
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
	ctx.lr = 0x8309ACF4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309AD08"))) PPC_WEAK_FUNC(sub_8309AD08);
PPC_FUNC_IMPL(__imp__sub_8309AD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-18048
	ctx.r5.s64 = ctx.r10.s64 + -18048;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-22904
	ctx.r4.s64 = ctx.r10.s64 + -22904;
	// addi r11,r11,6232
	ctx.r11.s64 = ctx.r11.s64 + 6232;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-19308
	ctx.r3.s64 = ctx.r10.s64 + -19308;
	// li r10,0
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
	ctx.lr = 0x8309AD5C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309AD70"))) PPC_WEAK_FUNC(sub_8309AD70);
PPC_FUNC_IMPL(__imp__sub_8309AD70) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-22092
	ctx.r4.s64 = ctx.r10.s64 + -22092;
	// addi r11,r11,6392
	ctx.r11.s64 = ctx.r11.s64 + 6392;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-18624
	ctx.r3.s64 = ctx.r10.s64 + -18624;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309ADC0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309ADD0"))) PPC_WEAK_FUNC(sub_8309ADD0);
PPC_FUNC_IMPL(__imp__sub_8309ADD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23232
	ctx.r5.s64 = ctx.r10.s64 + -23232;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-26120
	ctx.r4.s64 = ctx.r10.s64 + -26120;
	// addi r11,r11,5972
	ctx.r11.s64 = ctx.r11.s64 + 5972;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-20784
	ctx.r3.s64 = ctx.r10.s64 + -20784;
	// li r10,0
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
	ctx.lr = 0x8309AE24;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309AE38"))) PPC_WEAK_FUNC(sub_8309AE38);
PPC_FUNC_IMPL(__imp__sub_8309AE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23232
	ctx.r5.s64 = ctx.r10.s64 + -23232;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,6732
	ctx.r11.s64 = ctx.r11.s64 + 6732;
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
	// addi r3,r10,-16932
	ctx.r3.s64 = ctx.r10.s64 + -16932;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x8309AE88;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309AE98"))) PPC_WEAK_FUNC(sub_8309AE98);
PPC_FUNC_IMPL(__imp__sub_8309AE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23232
	ctx.r5.s64 = ctx.r10.s64 + -23232;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-25632
	ctx.r4.s64 = ctx.r10.s64 + -25632;
	// addi r11,r11,6752
	ctx.r11.s64 = ctx.r11.s64 + 6752;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-25140
	ctx.r3.s64 = ctx.r10.s64 + -25140;
	// li r10,0
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
	ctx.lr = 0x8309AEEC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309AF00"))) PPC_WEAK_FUNC(sub_8309AF00);
PPC_FUNC_IMPL(__imp__sub_8309AF00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,-25008
	ctx.r4.s64 = ctx.r10.s64 + -25008;
	// addi r11,r11,6792
	ctx.r11.s64 = ctx.r11.s64 + 6792;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-17040
	ctx.r3.s64 = ctx.r10.s64 + -17040;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309AF50;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309AF60"))) PPC_WEAK_FUNC(sub_8309AF60);
PPC_FUNC_IMPL(__imp__sub_8309AF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23232
	ctx.r5.s64 = ctx.r10.s64 + -23232;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,6832
	ctx.r11.s64 = ctx.r11.s64 + 6832;
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
	// addi r3,r10,-24924
	ctx.r3.s64 = ctx.r10.s64 + -24924;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x8309AFB0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309AFC0"))) PPC_WEAK_FUNC(sub_8309AFC0);
PPC_FUNC_IMPL(__imp__sub_8309AFC0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,-24452
	ctx.r4.s64 = ctx.r10.s64 + -24452;
	// addi r11,r11,6852
	ctx.r11.s64 = ctx.r11.s64 + 6852;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-23052
	ctx.r3.s64 = ctx.r10.s64 + -23052;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309B010;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309B020"))) PPC_WEAK_FUNC(sub_8309B020);
PPC_FUNC_IMPL(__imp__sub_8309B020) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,-24424
	ctx.r4.s64 = ctx.r10.s64 + -24424;
	// addi r11,r11,6892
	ctx.r11.s64 = ctx.r11.s64 + 6892;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-25572
	ctx.r3.s64 = ctx.r10.s64 + -25572;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309B070;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309B080"))) PPC_WEAK_FUNC(sub_8309B080);
PPC_FUNC_IMPL(__imp__sub_8309B080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-24392
	ctx.r4.s64 = ctx.r10.s64 + -24392;
	// addi r11,r11,6952
	ctx.r11.s64 = ctx.r11.s64 + 6952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-20388
	ctx.r3.s64 = ctx.r10.s64 + -20388;
	// li r10,0
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
	ctx.lr = 0x8309B0D4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309B0E8"))) PPC_WEAK_FUNC(sub_8309B0E8);
PPC_FUNC_IMPL(__imp__sub_8309B0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-18840
	ctx.r5.s64 = ctx.r10.s64 + -18840;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-25192
	ctx.r4.s64 = ctx.r10.s64 + -25192;
	// addi r11,r11,7072
	ctx.r11.s64 = ctx.r11.s64 + 7072;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-24240
	ctx.r3.s64 = ctx.r10.s64 + -24240;
	// li r10,0
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
	ctx.lr = 0x8309B13C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309B150"))) PPC_WEAK_FUNC(sub_8309B150);
PPC_FUNC_IMPL(__imp__sub_8309B150) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,-21800
	ctx.r4.s64 = ctx.r10.s64 + -21800;
	// addi r11,r11,7012
	ctx.r11.s64 = ctx.r11.s64 + 7012;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-21972
	ctx.r3.s64 = ctx.r10.s64 + -21972;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309B1A0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309B1B0"))) PPC_WEAK_FUNC(sub_8309B1B0);
PPC_FUNC_IMPL(__imp__sub_8309B1B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,-21772
	ctx.r4.s64 = ctx.r10.s64 + -21772;
	// addi r11,r11,7192
	ctx.r11.s64 = ctx.r11.s64 + 7192;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-18588
	ctx.r3.s64 = ctx.r10.s64 + -18588;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309B200;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309B210"))) PPC_WEAK_FUNC(sub_8309B210);
PPC_FUNC_IMPL(__imp__sub_8309B210) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,-21740
	ctx.r4.s64 = ctx.r10.s64 + -21740;
	// addi r11,r11,7232
	ctx.r11.s64 = ctx.r11.s64 + 7232;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-21756
	ctx.r3.s64 = ctx.r10.s64 + -21756;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309B260;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309B270"))) PPC_WEAK_FUNC(sub_8309B270);
PPC_FUNC_IMPL(__imp__sub_8309B270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-24868
	ctx.r4.s64 = ctx.r10.s64 + -24868;
	// addi r11,r11,7272
	ctx.r11.s64 = ctx.r11.s64 + 7272;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-19668
	ctx.r3.s64 = ctx.r10.s64 + -19668;
	// li r10,0
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
	ctx.lr = 0x8309B2C4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309B2D8"))) PPC_WEAK_FUNC(sub_8309B2D8);
PPC_FUNC_IMPL(__imp__sub_8309B2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-23456
	ctx.r4.s64 = ctx.r10.s64 + -23456;
	// addi r11,r11,7312
	ctx.r11.s64 = ctx.r11.s64 + 7312;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-22800
	ctx.r3.s64 = ctx.r10.s64 + -22800;
	// li r10,0
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
	ctx.lr = 0x8309B32C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309B340"))) PPC_WEAK_FUNC(sub_8309B340);
PPC_FUNC_IMPL(__imp__sub_8309B340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-23388
	ctx.r4.s64 = ctx.r10.s64 + -23388;
	// addi r11,r11,7332
	ctx.r11.s64 = ctx.r11.s64 + 7332;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-19488
	ctx.r3.s64 = ctx.r10.s64 + -19488;
	// li r10,0
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
	ctx.lr = 0x8309B394;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309B3A8"))) PPC_WEAK_FUNC(sub_8309B3A8);
PPC_FUNC_IMPL(__imp__sub_8309B3A8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,-23268
	ctx.r4.s64 = ctx.r10.s64 + -23268;
	// addi r11,r11,7352
	ctx.r11.s64 = ctx.r11.s64 + 7352;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-17292
	ctx.r3.s64 = ctx.r10.s64 + -17292;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309B3F8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309B408"))) PPC_WEAK_FUNC(sub_8309B408);
PPC_FUNC_IMPL(__imp__sub_8309B408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-23216
	ctx.r4.s64 = ctx.r10.s64 + -23216;
	// addi r11,r11,7392
	ctx.r11.s64 = ctx.r11.s64 + 7392;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-16500
	ctx.r3.s64 = ctx.r10.s64 + -16500;
	// li r10,0
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
	ctx.lr = 0x8309B45C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309B470"))) PPC_WEAK_FUNC(sub_8309B470);
PPC_FUNC_IMPL(__imp__sub_8309B470) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,-12624
	ctx.r4.s64 = ctx.r10.s64 + -12624;
	// addi r11,r11,7472
	ctx.r11.s64 = ctx.r11.s64 + 7472;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-16824
	ctx.r3.s64 = ctx.r10.s64 + -16824;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309B4C0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309B4D0"))) PPC_WEAK_FUNC(sub_8309B4D0);
PPC_FUNC_IMPL(__imp__sub_8309B4D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-12588
	ctx.r4.s64 = ctx.r10.s64 + -12588;
	// addi r11,r11,7712
	ctx.r11.s64 = ctx.r11.s64 + 7712;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-17940
	ctx.r3.s64 = ctx.r10.s64 + -17940;
	// li r10,0
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
	ctx.lr = 0x8309B524;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309B538"))) PPC_WEAK_FUNC(sub_8309B538);
PPC_FUNC_IMPL(__imp__sub_8309B538) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-14676
	ctx.r4.s64 = ctx.r10.s64 + -14676;
	// addi r11,r11,8072
	ctx.r11.s64 = ctx.r11.s64 + 8072;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-24960
	ctx.r3.s64 = ctx.r10.s64 + -24960;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309B588;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309B598"))) PPC_WEAK_FUNC(sub_8309B598);
PPC_FUNC_IMPL(__imp__sub_8309B598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,26
	ctx.r8.s64 = 26;
	// addi r5,r10,-18840
	ctx.r5.s64 = ctx.r10.s64 + -18840;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-14648
	ctx.r4.s64 = ctx.r10.s64 + -14648;
	// addi r11,r11,8432
	ctx.r11.s64 = ctx.r11.s64 + 8432;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-23448
	ctx.r3.s64 = ctx.r10.s64 + -23448;
	// li r10,0
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
	ctx.lr = 0x8309B5EC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309B600"))) PPC_WEAK_FUNC(sub_8309B600);
PPC_FUNC_IMPL(__imp__sub_8309B600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
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
	// addi r3,r10,-24204
	ctx.r3.s64 = ctx.r10.s64 + -24204;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309B64C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309B660"))) PPC_WEAK_FUNC(sub_8309B660);
PPC_FUNC_IMPL(__imp__sub_8309B660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-24204
	ctx.r5.s64 = ctx.r10.s64 + -24204;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-12372
	ctx.r4.s64 = ctx.r10.s64 + -12372;
	// addi r11,r11,8952
	ctx.r11.s64 = ctx.r11.s64 + 8952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-25320
	ctx.r3.s64 = ctx.r10.s64 + -25320;
	// li r10,0
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
	ctx.lr = 0x8309B6B4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309B6C8"))) PPC_WEAK_FUNC(sub_8309B6C8);
PPC_FUNC_IMPL(__imp__sub_8309B6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
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
	// addi r3,r10,-21360
	ctx.r3.s64 = ctx.r10.s64 + -21360;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309B714;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309B728"))) PPC_WEAK_FUNC(sub_8309B728);
PPC_FUNC_IMPL(__imp__sub_8309B728) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,-17496
	ctx.r4.s64 = ctx.r10.s64 + -17496;
	// addi r11,r11,7412
	ctx.r11.s64 = ctx.r11.s64 + 7412;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-23844
	ctx.r3.s64 = ctx.r10.s64 + -23844;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309B778;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309B788"))) PPC_WEAK_FUNC(sub_8309B788);
PPC_FUNC_IMPL(__imp__sub_8309B788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-21360
	ctx.r5.s64 = ctx.r10.s64 + -21360;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-17452
	ctx.r4.s64 = ctx.r10.s64 + -17452;
	// addi r11,r11,9052
	ctx.r11.s64 = ctx.r11.s64 + 9052;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-16464
	ctx.r3.s64 = ctx.r10.s64 + -16464;
	// li r10,0
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
	ctx.lr = 0x8309B7DC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309B7F0"))) PPC_WEAK_FUNC(sub_8309B7F0);
PPC_FUNC_IMPL(__imp__sub_8309B7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
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
	// addi r3,r10,-25788
	ctx.r3.s64 = ctx.r10.s64 + -25788;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309B83C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309B850"))) PPC_WEAK_FUNC(sub_8309B850);
PPC_FUNC_IMPL(__imp__sub_8309B850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
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
	// addi r3,r10,-22692
	ctx.r3.s64 = ctx.r10.s64 + -22692;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309B89C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309B8B0"))) PPC_WEAK_FUNC(sub_8309B8B0);
PPC_FUNC_IMPL(__imp__sub_8309B8B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-25788
	ctx.r5.s64 = ctx.r10.s64 + -25788;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-12000
	ctx.r4.s64 = ctx.r10.s64 + -12000;
	// addi r11,r11,9152
	ctx.r11.s64 = ctx.r11.s64 + 9152;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-16860
	ctx.r3.s64 = ctx.r10.s64 + -16860;
	// li r10,0
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
	ctx.lr = 0x8309B904;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309B918"))) PPC_WEAK_FUNC(sub_8309B918);
PPC_FUNC_IMPL(__imp__sub_8309B918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-22692
	ctx.r5.s64 = ctx.r10.s64 + -22692;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-11964
	ctx.r4.s64 = ctx.r10.s64 + -11964;
	// addi r11,r11,9232
	ctx.r11.s64 = ctx.r11.s64 + 9232;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-23268
	ctx.r3.s64 = ctx.r10.s64 + -23268;
	// li r10,0
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
	ctx.lr = 0x8309B96C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309B980"))) PPC_WEAK_FUNC(sub_8309B980);
PPC_FUNC_IMPL(__imp__sub_8309B980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
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
	// addi r3,r10,-17508
	ctx.r3.s64 = ctx.r10.s64 + -17508;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309B9CC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309B9E0"))) PPC_WEAK_FUNC(sub_8309B9E0);
PPC_FUNC_IMPL(__imp__sub_8309B9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-17508
	ctx.r5.s64 = ctx.r10.s64 + -17508;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-11528
	ctx.r4.s64 = ctx.r10.s64 + -11528;
	// addi r11,r11,9312
	ctx.r11.s64 = ctx.r11.s64 + 9312;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-25896
	ctx.r3.s64 = ctx.r10.s64 + -25896;
	// li r10,0
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
	ctx.lr = 0x8309BA34;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309BA48"))) PPC_WEAK_FUNC(sub_8309BA48);
PPC_FUNC_IMPL(__imp__sub_8309BA48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r11,r11,9512
	ctx.r11.s64 = ctx.r11.s64 + 9512;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-17616
	ctx.r3.s64 = ctx.r10.s64 + -17616;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309BA98;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309BAA8"))) PPC_WEAK_FUNC(sub_8309BAA8);
PPC_FUNC_IMPL(__imp__sub_8309BAA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r11,r11,7652
	ctx.r11.s64 = ctx.r11.s64 + 7652;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-16140
	ctx.r3.s64 = ctx.r10.s64 + -16140;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309BAF8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309BB08"))) PPC_WEAK_FUNC(sub_8309BB08);
PPC_FUNC_IMPL(__imp__sub_8309BB08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r11,r11,9712
	ctx.r11.s64 = ctx.r11.s64 + 9712;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-24780
	ctx.r3.s64 = ctx.r10.s64 + -24780;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309BB58;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309BB68"))) PPC_WEAK_FUNC(sub_8309BB68);
PPC_FUNC_IMPL(__imp__sub_8309BB68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r11,r11,8412
	ctx.r11.s64 = ctx.r11.s64 + 8412;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-25752
	ctx.r3.s64 = ctx.r10.s64 + -25752;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309BBB8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309BBC8"))) PPC_WEAK_FUNC(sub_8309BBC8);
PPC_FUNC_IMPL(__imp__sub_8309BBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
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
	// addi r3,r10,-24672
	ctx.r3.s64 = ctx.r10.s64 + -24672;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309BC14;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309BC28"))) PPC_WEAK_FUNC(sub_8309BC28);
PPC_FUNC_IMPL(__imp__sub_8309BC28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-24672
	ctx.r5.s64 = ctx.r10.s64 + -24672;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-11360
	ctx.r4.s64 = ctx.r10.s64 + -11360;
	// addi r11,r11,9092
	ctx.r11.s64 = ctx.r11.s64 + 9092;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-17220
	ctx.r3.s64 = ctx.r10.s64 + -17220;
	// li r10,0
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
	ctx.lr = 0x8309BC7C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309BC90"))) PPC_WEAK_FUNC(sub_8309BC90);
PPC_FUNC_IMPL(__imp__sub_8309BC90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r11,r11,9892
	ctx.r11.s64 = ctx.r11.s64 + 9892;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-22296
	ctx.r3.s64 = ctx.r10.s64 + -22296;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309BCE0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309BCF0"))) PPC_WEAK_FUNC(sub_8309BCF0);
PPC_FUNC_IMPL(__imp__sub_8309BCF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-14464
	ctx.r4.s64 = ctx.r10.s64 + -14464;
	// addi r11,r11,9952
	ctx.r11.s64 = ctx.r11.s64 + 9952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-22512
	ctx.r3.s64 = ctx.r10.s64 + -22512;
	// li r10,0
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
	ctx.lr = 0x8309BD44;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309BD58"))) PPC_WEAK_FUNC(sub_8309BD58);
PPC_FUNC_IMPL(__imp__sub_8309BD58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r11,r11,9972
	ctx.r11.s64 = ctx.r11.s64 + 9972;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-23628
	ctx.r3.s64 = ctx.r10.s64 + -23628;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309BDA8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309BDB8"))) PPC_WEAK_FUNC(sub_8309BDB8);
PPC_FUNC_IMPL(__imp__sub_8309BDB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-22512
	ctx.r5.s64 = ctx.r10.s64 + -22512;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-17212
	ctx.r4.s64 = ctx.r10.s64 + -17212;
	// addi r11,r11,10032
	ctx.r11.s64 = ctx.r11.s64 + 10032;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-22188
	ctx.r3.s64 = ctx.r10.s64 + -22188;
	// li r10,0
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
	ctx.lr = 0x8309BE0C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309BE20"))) PPC_WEAK_FUNC(sub_8309BE20);
PPC_FUNC_IMPL(__imp__sub_8309BE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
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
	// addi r3,r10,-16356
	ctx.r3.s64 = ctx.r10.s64 + -16356;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309BE6C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309BE80"))) PPC_WEAK_FUNC(sub_8309BE80);
PPC_FUNC_IMPL(__imp__sub_8309BE80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-16356
	ctx.r5.s64 = ctx.r10.s64 + -16356;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-11032
	ctx.r4.s64 = ctx.r10.s64 + -11032;
	// addi r11,r11,10112
	ctx.r11.s64 = ctx.r11.s64 + 10112;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-21396
	ctx.r3.s64 = ctx.r10.s64 + -21396;
	// li r10,0
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
	ctx.lr = 0x8309BED4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309BEE8"))) PPC_WEAK_FUNC(sub_8309BEE8);
PPC_FUNC_IMPL(__imp__sub_8309BEE8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r11,r11,10252
	ctx.r11.s64 = ctx.r11.s64 + 10252;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-18696
	ctx.r3.s64 = ctx.r10.s64 + -18696;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309BF38;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309BF48"))) PPC_WEAK_FUNC(sub_8309BF48);
PPC_FUNC_IMPL(__imp__sub_8309BF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-13828
	ctx.r4.s64 = ctx.r10.s64 + -13828;
	// addi r11,r11,10052
	ctx.r11.s64 = ctx.r11.s64 + 10052;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-20280
	ctx.r3.s64 = ctx.r10.s64 + -20280;
	// li r10,0
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
	ctx.lr = 0x8309BF9C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309BFB0"))) PPC_WEAK_FUNC(sub_8309BFB0);
PPC_FUNC_IMPL(__imp__sub_8309BFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-13808
	ctx.r4.s64 = ctx.r10.s64 + -13808;
	// addi r11,r11,10292
	ctx.r11.s64 = ctx.r11.s64 + 10292;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-24564
	ctx.r3.s64 = ctx.r10.s64 + -24564;
	// li r10,0
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
	ctx.lr = 0x8309C004;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C018"))) PPC_WEAK_FUNC(sub_8309C018);
PPC_FUNC_IMPL(__imp__sub_8309C018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
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
	// addi r3,r10,-23664
	ctx.r3.s64 = ctx.r10.s64 + -23664;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309C064;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C078"))) PPC_WEAK_FUNC(sub_8309C078);
PPC_FUNC_IMPL(__imp__sub_8309C078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-23664
	ctx.r5.s64 = ctx.r10.s64 + -23664;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-10860
	ctx.r4.s64 = ctx.r10.s64 + -10860;
	// addi r11,r11,10352
	ctx.r11.s64 = ctx.r11.s64 + 10352;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-17400
	ctx.r3.s64 = ctx.r10.s64 + -17400;
	// li r10,0
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
	ctx.lr = 0x8309C0CC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C0E0"))) PPC_WEAK_FUNC(sub_8309C0E0);
PPC_FUNC_IMPL(__imp__sub_8309C0E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-10620
	ctx.r4.s64 = ctx.r10.s64 + -10620;
	// addi r11,r11,10412
	ctx.r11.s64 = ctx.r11.s64 + 10412;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-18192
	ctx.r3.s64 = ctx.r10.s64 + -18192;
	// li r10,0
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
	ctx.lr = 0x8309C134;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C148"))) PPC_WEAK_FUNC(sub_8309C148);
PPC_FUNC_IMPL(__imp__sub_8309C148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-19884
	ctx.r5.s64 = ctx.r10.s64 + -19884;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,10432
	ctx.r11.s64 = ctx.r11.s64 + 10432;
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
	// addi r3,r10,-25464
	ctx.r3.s64 = ctx.r10.s64 + -25464;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x8309C198;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C1A8"))) PPC_WEAK_FUNC(sub_8309C1A8);
PPC_FUNC_IMPL(__imp__sub_8309C1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-18192
	ctx.r5.s64 = ctx.r10.s64 + -18192;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-14192
	ctx.r4.s64 = ctx.r10.s64 + -14192;
	// addi r11,r11,10452
	ctx.r11.s64 = ctx.r11.s64 + 10452;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-19812
	ctx.r3.s64 = ctx.r10.s64 + -19812;
	// li r10,0
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
	ctx.lr = 0x8309C1FC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C210"))) PPC_WEAK_FUNC(sub_8309C210);
PPC_FUNC_IMPL(__imp__sub_8309C210) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-3704
	ctx.r4.s64 = ctx.r10.s64 + -3704;
	// addi r11,r11,12344
	ctx.r11.s64 = ctx.r11.s64 + 12344;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-8868
	ctx.r3.s64 = ctx.r10.s64 + -8868;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309C260;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C270"))) PPC_WEAK_FUNC(sub_8309C270);
PPC_FUNC_IMPL(__imp__sub_8309C270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,-32236
	ctx.r10.s64 = ctx.r10.s64 + -32236;
	// lwz r11,12444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12444);
	// stw r11,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C288"))) PPC_WEAK_FUNC(sub_8309C288);
PPC_FUNC_IMPL(__imp__sub_8309C288) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r11,21200
	ctx.r9.s64 = ctx.r11.s64 + 21200;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-3680
	ctx.r4.s64 = ctx.r10.s64 + -3680;
	// addi r11,r11,-32236
	ctx.r11.s64 = ctx.r11.s64 + -32236;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-11208
	ctx.r3.s64 = ctx.r10.s64 + -11208;
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
	ctx.lr = 0x8309C2E0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C2F0"))) PPC_WEAK_FUNC(sub_8309C2F0);
PPC_FUNC_IMPL(__imp__sub_8309C2F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,596
	ctx.r4.s64 = ctx.r10.s64 + 596;
	// addi r11,r11,12448
	ctx.r11.s64 = ctx.r11.s64 + 12448;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-11100
	ctx.r3.s64 = ctx.r10.s64 + -11100;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309C340;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C350"))) PPC_WEAK_FUNC(sub_8309C350);
PPC_FUNC_IMPL(__imp__sub_8309C350) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,624
	ctx.r4.s64 = ctx.r10.s64 + 624;
	// addi r11,r11,12488
	ctx.r11.s64 = ctx.r11.s64 + 12488;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-14844
	ctx.r3.s64 = ctx.r10.s64 + -14844;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309C3A0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C3B0"))) PPC_WEAK_FUNC(sub_8309C3B0);
PPC_FUNC_IMPL(__imp__sub_8309C3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-9120
	ctx.r5.s64 = ctx.r10.s64 + -9120;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-8296
	ctx.r4.s64 = ctx.r10.s64 + -8296;
	// addi r11,r11,12528
	ctx.r11.s64 = ctx.r11.s64 + 12528;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-11352
	ctx.r3.s64 = ctx.r10.s64 + -11352;
	// li r10,0
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
	ctx.lr = 0x8309C404;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C418"))) PPC_WEAK_FUNC(sub_8309C418);
PPC_FUNC_IMPL(__imp__sub_8309C418) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,644
	ctx.r4.s64 = ctx.r10.s64 + 644;
	// addi r11,r11,12608
	ctx.r11.s64 = ctx.r11.s64 + 12608;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-11496
	ctx.r3.s64 = ctx.r10.s64 + -11496;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309C468;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C478"))) PPC_WEAK_FUNC(sub_8309C478);
PPC_FUNC_IMPL(__imp__sub_8309C478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-11352
	ctx.r5.s64 = ctx.r10.s64 + -11352;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,700
	ctx.r4.s64 = ctx.r10.s64 + 700;
	// addi r11,r11,12728
	ctx.r11.s64 = ctx.r11.s64 + 12728;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-12216
	ctx.r3.s64 = ctx.r10.s64 + -12216;
	// li r10,0
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
	ctx.lr = 0x8309C4CC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C4E0"))) PPC_WEAK_FUNC(sub_8309C4E0);
PPC_FUNC_IMPL(__imp__sub_8309C4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-11352
	ctx.r5.s64 = ctx.r10.s64 + -11352;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,736
	ctx.r4.s64 = ctx.r10.s64 + 736;
	// addi r11,r11,12708
	ctx.r11.s64 = ctx.r11.s64 + 12708;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-7284
	ctx.r3.s64 = ctx.r10.s64 + -7284;
	// li r10,0
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
	ctx.lr = 0x8309C534;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C548"))) PPC_WEAK_FUNC(sub_8309C548);
PPC_FUNC_IMPL(__imp__sub_8309C548) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,768
	ctx.r4.s64 = ctx.r10.s64 + 768;
	// addi r11,r11,12888
	ctx.r11.s64 = ctx.r11.s64 + 12888;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-9804
	ctx.r3.s64 = ctx.r10.s64 + -9804;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309C598;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C5A8"))) PPC_WEAK_FUNC(sub_8309C5A8);
PPC_FUNC_IMPL(__imp__sub_8309C5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-11352
	ctx.r5.s64 = ctx.r10.s64 + -11352;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,816
	ctx.r4.s64 = ctx.r10.s64 + 816;
	// addi r11,r11,12992
	ctx.r11.s64 = ctx.r11.s64 + 12992;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-12900
	ctx.r3.s64 = ctx.r10.s64 + -12900;
	// li r10,0
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
	ctx.lr = 0x8309C5FC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C610"))) PPC_WEAK_FUNC(sub_8309C610);
PPC_FUNC_IMPL(__imp__sub_8309C610) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,844
	ctx.r4.s64 = ctx.r10.s64 + 844;
	// addi r11,r11,12868
	ctx.r11.s64 = ctx.r11.s64 + 12868;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-6204
	ctx.r3.s64 = ctx.r10.s64 + -6204;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309C660;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C670"))) PPC_WEAK_FUNC(sub_8309C670);
PPC_FUNC_IMPL(__imp__sub_8309C670) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-3432
	ctx.r4.s64 = ctx.r10.s64 + -3432;
	// addi r11,r11,13152
	ctx.r11.s64 = ctx.r11.s64 + 13152;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-11460
	ctx.r3.s64 = ctx.r10.s64 + -11460;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309C6C0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C6D0"))) PPC_WEAK_FUNC(sub_8309C6D0);
PPC_FUNC_IMPL(__imp__sub_8309C6D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,21252
	ctx.r9.s64 = ctx.r10.s64 + 21252;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r5,r10,-9120
	ctx.r5.s64 = ctx.r10.s64 + -9120;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,13132
	ctx.r11.s64 = ctx.r11.s64 + 13132;
	// addi r4,r10,868
	ctx.r4.s64 = ctx.r10.s64 + 868;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-11856
	ctx.r3.s64 = ctx.r10.s64 + -11856;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x8309C728;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C738"))) PPC_WEAK_FUNC(sub_8309C738);
PPC_FUNC_IMPL(__imp__sub_8309C738) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,888
	ctx.r4.s64 = ctx.r10.s64 + 888;
	// addi r11,r11,13232
	ctx.r11.s64 = ctx.r11.s64 + 13232;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-14556
	ctx.r3.s64 = ctx.r10.s64 + -14556;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309C788;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C798"))) PPC_WEAK_FUNC(sub_8309C798);
PPC_FUNC_IMPL(__imp__sub_8309C798) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,924
	ctx.r4.s64 = ctx.r10.s64 + 924;
	// addi r11,r11,13296
	ctx.r11.s64 = ctx.r11.s64 + 13296;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-15780
	ctx.r3.s64 = ctx.r10.s64 + -15780;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309C7E8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C7F8"))) PPC_WEAK_FUNC(sub_8309C7F8);
PPC_FUNC_IMPL(__imp__sub_8309C7F8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,960
	ctx.r4.s64 = ctx.r10.s64 + 960;
	// addi r11,r11,13416
	ctx.r11.s64 = ctx.r11.s64 + 13416;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-4692
	ctx.r3.s64 = ctx.r10.s64 + -4692;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309C848;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C858"))) PPC_WEAK_FUNC(sub_8309C858);
PPC_FUNC_IMPL(__imp__sub_8309C858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r10,-15420
	ctx.r3.s64 = ctx.r10.s64 + -15420;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309C8A4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C8B8"))) PPC_WEAK_FUNC(sub_8309C8B8);
PPC_FUNC_IMPL(__imp__sub_8309C8B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-15420
	ctx.r5.s64 = ctx.r10.s64 + -15420;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,1012
	ctx.r4.s64 = ctx.r10.s64 + 1012;
	// addi r11,r11,13536
	ctx.r11.s64 = ctx.r11.s64 + 13536;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-9012
	ctx.r3.s64 = ctx.r10.s64 + -9012;
	// li r10,0
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
	ctx.lr = 0x8309C90C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C920"))) PPC_WEAK_FUNC(sub_8309C920);
PPC_FUNC_IMPL(__imp__sub_8309C920) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,-3368
	ctx.r4.s64 = ctx.r10.s64 + -3368;
	// addi r11,r11,13616
	ctx.r11.s64 = ctx.r11.s64 + 13616;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-15888
	ctx.r3.s64 = ctx.r10.s64 + -15888;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309C970;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C980"))) PPC_WEAK_FUNC(sub_8309C980);
PPC_FUNC_IMPL(__imp__sub_8309C980) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-9408
	ctx.r4.s64 = ctx.r10.s64 + -9408;
	// addi r11,r11,13656
	ctx.r11.s64 = ctx.r11.s64 + 13656;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-10668
	ctx.r3.s64 = ctx.r10.s64 + -10668;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309C9D0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309C9E0"))) PPC_WEAK_FUNC(sub_8309C9E0);
PPC_FUNC_IMPL(__imp__sub_8309C9E0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-3360
	ctx.r4.s64 = ctx.r10.s64 + -3360;
	// addi r11,r11,13736
	ctx.r11.s64 = ctx.r11.s64 + 13736;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-6276
	ctx.r3.s64 = ctx.r10.s64 + -6276;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309CA30;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309CA40"))) PPC_WEAK_FUNC(sub_8309CA40);
PPC_FUNC_IMPL(__imp__sub_8309CA40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,21296
	ctx.r9.s64 = ctx.r10.s64 + 21296;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,25592
	ctx.r4.s64 = ctx.r10.s64 + 25592;
	// addi r11,r11,13816
	ctx.r11.s64 = ctx.r11.s64 + 13816;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-8328
	ctx.r3.s64 = ctx.r10.s64 + -8328;
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
	ctx.lr = 0x8309CA94;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309CAA8"))) PPC_WEAK_FUNC(sub_8309CAA8);
PPC_FUNC_IMPL(__imp__sub_8309CAA8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,25616
	ctx.r4.s64 = ctx.r10.s64 + 25616;
	// addi r11,r11,14056
	ctx.r11.s64 = ctx.r11.s64 + 14056;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-14484
	ctx.r3.s64 = ctx.r10.s64 + -14484;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309CAF8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309CB08"))) PPC_WEAK_FUNC(sub_8309CB08);
PPC_FUNC_IMPL(__imp__sub_8309CB08) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,25636
	ctx.r4.s64 = ctx.r10.s64 + 25636;
	// addi r11,r11,14036
	ctx.r11.s64 = ctx.r11.s64 + 14036;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-5556
	ctx.r3.s64 = ctx.r10.s64 + -5556;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309CB58;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309CB68"))) PPC_WEAK_FUNC(sub_8309CB68);
PPC_FUNC_IMPL(__imp__sub_8309CB68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,25648
	ctx.r4.s64 = ctx.r10.s64 + 25648;
	// addi r11,r11,14316
	ctx.r11.s64 = ctx.r11.s64 + 14316;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-9408
	ctx.r3.s64 = ctx.r10.s64 + -9408;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309CBB8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309CBC8"))) PPC_WEAK_FUNC(sub_8309CBC8);
PPC_FUNC_IMPL(__imp__sub_8309CBC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,25668
	ctx.r4.s64 = ctx.r10.s64 + 25668;
	// addi r11,r11,14336
	ctx.r11.s64 = ctx.r11.s64 + 14336;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-14196
	ctx.r3.s64 = ctx.r10.s64 + -14196;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309CC18;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309CC28"))) PPC_WEAK_FUNC(sub_8309CC28);
PPC_FUNC_IMPL(__imp__sub_8309CC28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-8184
	ctx.r5.s64 = ctx.r10.s64 + -8184;
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
	// addi r3,r10,-5052
	ctx.r3.s64 = ctx.r10.s64 + -5052;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309CC74;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309CC88"))) PPC_WEAK_FUNC(sub_8309CC88);
PPC_FUNC_IMPL(__imp__sub_8309CC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-5052
	ctx.r5.s64 = ctx.r10.s64 + -5052;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,25700
	ctx.r4.s64 = ctx.r10.s64 + 25700;
	// addi r11,r11,14376
	ctx.r11.s64 = ctx.r11.s64 + 14376;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-11640
	ctx.r3.s64 = ctx.r10.s64 + -11640;
	// li r10,0
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
	ctx.lr = 0x8309CCDC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309CCF0"))) PPC_WEAK_FUNC(sub_8309CCF0);
PPC_FUNC_IMPL(__imp__sub_8309CCF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-11640
	ctx.r5.s64 = ctx.r10.s64 + -11640;
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
	// addi r3,r10,-13368
	ctx.r3.s64 = ctx.r10.s64 + -13368;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309CD3C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309CD50"))) PPC_WEAK_FUNC(sub_8309CD50);
PPC_FUNC_IMPL(__imp__sub_8309CD50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,-8324
	ctx.r4.s64 = ctx.r10.s64 + -8324;
	// addi r11,r11,14496
	ctx.r11.s64 = ctx.r11.s64 + 14496;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-14304
	ctx.r3.s64 = ctx.r10.s64 + -14304;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309CDA0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309CDB0"))) PPC_WEAK_FUNC(sub_8309CDB0);
PPC_FUNC_IMPL(__imp__sub_8309CDB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-5052
	ctx.r5.s64 = ctx.r10.s64 + -5052;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-8344
	ctx.r4.s64 = ctx.r10.s64 + -8344;
	// addi r11,r11,14616
	ctx.r11.s64 = ctx.r11.s64 + 14616;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-13584
	ctx.r3.s64 = ctx.r10.s64 + -13584;
	// li r10,0
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
	ctx.lr = 0x8309CE04;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309CE18"))) PPC_WEAK_FUNC(sub_8309CE18);
PPC_FUNC_IMPL(__imp__sub_8309CE18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r4,r10,-8900
	ctx.r4.s64 = ctx.r10.s64 + -8900;
	// addi r11,r11,14556
	ctx.r11.s64 = ctx.r11.s64 + 14556;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-10236
	ctx.r3.s64 = ctx.r10.s64 + -10236;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309CE68;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309CE78"))) PPC_WEAK_FUNC(sub_8309CE78);
PPC_FUNC_IMPL(__imp__sub_8309CE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,-32176
	ctx.r10.s64 = ctx.r10.s64 + -32176;
	// lwz r11,14716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14716);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309CE90"))) PPC_WEAK_FUNC(sub_8309CE90);
PPC_FUNC_IMPL(__imp__sub_8309CE90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r11,21332
	ctx.r9.s64 = ctx.r11.s64 + 21332;
	// addi r5,r10,-5052
	ctx.r5.s64 = ctx.r10.s64 + -5052;
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
	// addi r11,r11,-32176
	ctx.r11.s64 = ctx.r11.s64 + -32176;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-9768
	ctx.r3.s64 = ctx.r10.s64 + -9768;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309CEEC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309CF00"))) PPC_WEAK_FUNC(sub_8309CF00);
PPC_FUNC_IMPL(__imp__sub_8309CF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-5052
	ctx.r5.s64 = ctx.r10.s64 + -5052;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,25916
	ctx.r4.s64 = ctx.r10.s64 + 25916;
	// addi r11,r11,14720
	ctx.r11.s64 = ctx.r11.s64 + 14720;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-7500
	ctx.r3.s64 = ctx.r10.s64 + -7500;
	// li r10,0
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
	ctx.lr = 0x8309CF54;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309CF68"))) PPC_WEAK_FUNC(sub_8309CF68);
PPC_FUNC_IMPL(__imp__sub_8309CF68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-5052
	ctx.r5.s64 = ctx.r10.s64 + -5052;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,25940
	ctx.r4.s64 = ctx.r10.s64 + 25940;
	// addi r11,r11,14760
	ctx.r11.s64 = ctx.r11.s64 + 14760;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-9624
	ctx.r3.s64 = ctx.r10.s64 + -9624;
	// li r10,0
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
	ctx.lr = 0x8309CFBC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309CFD0"))) PPC_WEAK_FUNC(sub_8309CFD0);
PPC_FUNC_IMPL(__imp__sub_8309CFD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-5052
	ctx.r5.s64 = ctx.r10.s64 + -5052;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,25968
	ctx.r4.s64 = ctx.r10.s64 + 25968;
	// addi r11,r11,14780
	ctx.r11.s64 = ctx.r11.s64 + 14780;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-15060
	ctx.r3.s64 = ctx.r10.s64 + -15060;
	// li r10,0
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
	ctx.lr = 0x8309D024;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309D038"))) PPC_WEAK_FUNC(sub_8309D038);
PPC_FUNC_IMPL(__imp__sub_8309D038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-8184
	ctx.r5.s64 = ctx.r10.s64 + -8184;
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
	// addi r3,r10,-11532
	ctx.r3.s64 = ctx.r10.s64 + -11532;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309D084;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309D098"))) PPC_WEAK_FUNC(sub_8309D098);
PPC_FUNC_IMPL(__imp__sub_8309D098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r8,r10,14840
	ctx.r8.s64 = ctx.r10.s64 + 14840;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r10,-11532
	ctx.r5.s64 = ctx.r10.s64 + -11532;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,21400
	ctx.r11.s64 = ctx.r11.s64 + 21400;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,-9428
	ctx.r4.s64 = ctx.r10.s64 + -9428;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-10776
	ctx.r3.s64 = ctx.r10.s64 + -10776;
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
	ctx.lr = 0x8309D0F4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309D108"))) PPC_WEAK_FUNC(sub_8309D108);
PPC_FUNC_IMPL(__imp__sub_8309D108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-11532
	ctx.r5.s64 = ctx.r10.s64 + -11532;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,26000
	ctx.r4.s64 = ctx.r10.s64 + 26000;
	// addi r11,r11,14820
	ctx.r11.s64 = ctx.r11.s64 + 14820;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-5628
	ctx.r3.s64 = ctx.r10.s64 + -5628;
	// li r10,0
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
	ctx.lr = 0x8309D15C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309D170"))) PPC_WEAK_FUNC(sub_8309D170);
PPC_FUNC_IMPL(__imp__sub_8309D170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-11532
	ctx.r5.s64 = ctx.r10.s64 + -11532;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,26032
	ctx.r4.s64 = ctx.r10.s64 + 26032;
	// addi r11,r11,15184
	ctx.r11.s64 = ctx.r11.s64 + 15184;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-13260
	ctx.r3.s64 = ctx.r10.s64 + -13260;
	// li r10,0
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
	ctx.lr = 0x8309D1C4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309D1D8"))) PPC_WEAK_FUNC(sub_8309D1D8);
PPC_FUNC_IMPL(__imp__sub_8309D1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-11532
	ctx.r5.s64 = ctx.r10.s64 + -11532;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-8380
	ctx.r4.s64 = ctx.r10.s64 + -8380;
	// addi r11,r11,15328
	ctx.r11.s64 = ctx.r11.s64 + 15328;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-13836
	ctx.r3.s64 = ctx.r10.s64 + -13836;
	// li r10,0
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
	ctx.lr = 0x8309D22C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309D240"))) PPC_WEAK_FUNC(sub_8309D240);
PPC_FUNC_IMPL(__imp__sub_8309D240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-11532
	ctx.r5.s64 = ctx.r10.s64 + -11532;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,26052
	ctx.r4.s64 = ctx.r10.s64 + 26052;
	// addi r11,r11,15512
	ctx.r11.s64 = ctx.r11.s64 + 15512;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-9300
	ctx.r3.s64 = ctx.r10.s64 + -9300;
	// li r10,0
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
	ctx.lr = 0x8309D294;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309D2A8"))) PPC_WEAK_FUNC(sub_8309D2A8);
PPC_FUNC_IMPL(__imp__sub_8309D2A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-11532
	ctx.r5.s64 = ctx.r10.s64 + -11532;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,26072
	ctx.r4.s64 = ctx.r10.s64 + 26072;
	// addi r11,r11,15732
	ctx.r11.s64 = ctx.r11.s64 + 15732;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-9696
	ctx.r3.s64 = ctx.r10.s64 + -9696;
	// li r10,0
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
	ctx.lr = 0x8309D2FC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309D310"))) PPC_WEAK_FUNC(sub_8309D310);
PPC_FUNC_IMPL(__imp__sub_8309D310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,-32656
	ctx.r10.s64 = ctx.r10.s64 + -32656;
	// lwz r11,15180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15180);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309D328"))) PPC_WEAK_FUNC(sub_8309D328);
PPC_FUNC_IMPL(__imp__sub_8309D328) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r11,21492
	ctx.r9.s64 = ctx.r11.s64 + 21492;
	// addi r5,r10,-11532
	ctx.r5.s64 = ctx.r10.s64 + -11532;
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
	// addi r11,r11,-32656
	ctx.r11.s64 = ctx.r11.s64 + -32656;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-12576
	ctx.r3.s64 = ctx.r10.s64 + -12576;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309D384;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309D398"))) PPC_WEAK_FUNC(sub_8309D398);
PPC_FUNC_IMPL(__imp__sub_8309D398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r10,15772
	ctx.r8.s64 = ctx.r10.s64 + 15772;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r10,-9120
	ctx.r5.s64 = ctx.r10.s64 + -9120;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,21596
	ctx.r11.s64 = ctx.r11.s64 + 21596;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,26300
	ctx.r4.s64 = ctx.r10.s64 + 26300;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-5016
	ctx.r3.s64 = ctx.r10.s64 + -5016;
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
	ctx.lr = 0x8309D3F4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309D408"))) PPC_WEAK_FUNC(sub_8309D408);
PPC_FUNC_IMPL(__imp__sub_8309D408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,-31496
	ctx.r10.s64 = ctx.r10.s64 + -31496;
	// lwz r11,15324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15324);
	// stw r11,168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 168, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309D420"))) PPC_WEAK_FUNC(sub_8309D420);
PPC_FUNC_IMPL(__imp__sub_8309D420) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r11,21632
	ctx.r9.s64 = ctx.r11.s64 + 21632;
	// addi r5,r10,-11532
	ctx.r5.s64 = ctx.r10.s64 + -11532;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
	// li r7,22
	ctx.r7.s64 = 22;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r4,r10,-9264
	ctx.r4.s64 = ctx.r10.s64 + -9264;
	// addi r11,r11,-31496
	ctx.r11.s64 = ctx.r11.s64 + -31496;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-11028
	ctx.r3.s64 = ctx.r10.s64 + -11028;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309D47C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309D490"))) PPC_WEAK_FUNC(sub_8309D490);
PPC_FUNC_IMPL(__imp__sub_8309D490) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,26436
	ctx.r4.s64 = ctx.r10.s64 + 26436;
	// addi r11,r11,15832
	ctx.r11.s64 = ctx.r11.s64 + 15832;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-9336
	ctx.r3.s64 = ctx.r10.s64 + -9336;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8309D4E0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309D4F0"))) PPC_WEAK_FUNC(sub_8309D4F0);
PPC_FUNC_IMPL(__imp__sub_8309D4F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// li r9,14
	ctx.r9.s64 = 14;
	// addi r8,r10,16072
	ctx.r8.s64 = ctx.r10.s64 + 16072;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r10,-11532
	ctx.r5.s64 = ctx.r10.s64 + -11532;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,21752
	ctx.r11.s64 = ctx.r11.s64 + 21752;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,-9360
	ctx.r4.s64 = ctx.r10.s64 + -9360;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-8832
	ctx.r3.s64 = ctx.r10.s64 + -8832;
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
	ctx.lr = 0x8309D54C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8309D560"))) PPC_WEAK_FUNC(sub_8309D560);
PPC_FUNC_IMPL(__imp__sub_8309D560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r10,-13836
	ctx.r5.s64 = ctx.r10.s64 + -13836;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r4,r10,-8400
	ctx.r4.s64 = ctx.r10.s64 + -8400;
	// addi r11,r11,16352
	ctx.r11.s64 = ctx.r11.s64 + 16352;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-5160
	ctx.r3.s64 = ctx.r10.s64 + -5160;
	// li r10,0
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
	ctx.lr = 0x8309D5B4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

