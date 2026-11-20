#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83114800"))) PPC_WEAK_FUNC(sub_83114800);
PPC_FUNC_IMPL(__imp__sub_83114800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,30844
	ctx.r5.s64 = ctx.r10.s64 + 30844;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,17524
	ctx.r4.s64 = ctx.r10.s64 + 17524;
	// addi r11,r11,-28884
	ctx.r11.s64 = ctx.r11.s64 + -28884;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24652
	ctx.r3.s64 = ctx.r10.s64 + 24652;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83114854;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83114868"))) PPC_WEAK_FUNC(sub_83114868);
PPC_FUNC_IMPL(__imp__sub_83114868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// addi r10,r10,-19076
	ctx.r10.s64 = ctx.r10.s64 + -19076;
	// lwz r11,-28864(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28864);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83114880"))) PPC_WEAK_FUNC(sub_83114880);
PPC_FUNC_IMPL(__imp__sub_83114880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r9,r10,-23264
	ctx.r9.s64 = ctx.r10.s64 + -23264;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,11632
	ctx.r4.s64 = ctx.r10.s64 + 11632;
	// addi r11,r11,-19076
	ctx.r11.s64 = ctx.r11.s64 + -19076;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,27424
	ctx.r3.s64 = ctx.r10.s64 + 27424;
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
	ctx.lr = 0x831148D4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831148E8"))) PPC_WEAK_FUNC(sub_831148E8);
PPC_FUNC_IMPL(__imp__sub_831148E8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,12760
	ctx.r4.s64 = ctx.r10.s64 + 12760;
	// addi r11,r11,-28860
	ctx.r11.s64 = ctx.r11.s64 + -28860;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29944
	ctx.r3.s64 = ctx.r10.s64 + 29944;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83114938;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83114948"))) PPC_WEAK_FUNC(sub_83114948);
PPC_FUNC_IMPL(__imp__sub_83114948) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,12776
	ctx.r4.s64 = ctx.r10.s64 + 12776;
	// addi r11,r11,-28840
	ctx.r11.s64 = ctx.r11.s64 + -28840;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22060
	ctx.r3.s64 = ctx.r10.s64 + 22060;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83114998;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831149A8"))) PPC_WEAK_FUNC(sub_831149A8);
PPC_FUNC_IMPL(__imp__sub_831149A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r10,-23088
	ctx.r9.s64 = ctx.r10.s64 + -23088;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-28776
	ctx.r11.s64 = ctx.r11.s64 + -28776;
	// addi r4,r10,15152
	ctx.r4.s64 = ctx.r10.s64 + 15152;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,19252
	ctx.r3.s64 = ctx.r10.s64 + 19252;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x83114A00;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83114A10"))) PPC_WEAK_FUNC(sub_83114A10);
PPC_FUNC_IMPL(__imp__sub_83114A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// addi r10,r10,-16752
	ctx.r10.s64 = ctx.r10.s64 + -16752;
	// lwz r11,-28756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28756);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83114A28"))) PPC_WEAK_FUNC(sub_83114A28);
PPC_FUNC_IMPL(__imp__sub_83114A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r7,9
	ctx.r7.s64 = 9;
	// addi r9,r10,-22988
	ctx.r9.s64 = ctx.r10.s64 + -22988;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-16752
	ctx.r11.s64 = ctx.r11.s64 + -16752;
	// addi r4,r10,-9360
	ctx.r4.s64 = ctx.r10.s64 + -9360;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,22348
	ctx.r3.s64 = ctx.r10.s64 + 22348;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x83114A80;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83114A90"))) PPC_WEAK_FUNC(sub_83114A90);
PPC_FUNC_IMPL(__imp__sub_83114A90) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,7624
	ctx.r4.s64 = ctx.r10.s64 + 7624;
	// addi r11,r11,-28740
	ctx.r11.s64 = ctx.r11.s64 + -28740;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25696
	ctx.r3.s64 = ctx.r10.s64 + 25696;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83114AE0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83114AF0"))) PPC_WEAK_FUNC(sub_83114AF0);
PPC_FUNC_IMPL(__imp__sub_83114AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,19252
	ctx.r5.s64 = ctx.r10.s64 + 19252;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,7660
	ctx.r4.s64 = ctx.r10.s64 + 7660;
	// addi r11,r11,-28700
	ctx.r11.s64 = ctx.r11.s64 + -28700;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,17740
	ctx.r3.s64 = ctx.r10.s64 + 17740;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83114B44;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83114B58"))) PPC_WEAK_FUNC(sub_83114B58);
PPC_FUNC_IMPL(__imp__sub_83114B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r9,r10,-22932
	ctx.r9.s64 = ctx.r10.s64 + -22932;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,10856
	ctx.r4.s64 = ctx.r10.s64 + 10856;
	// addi r11,r11,-28676
	ctx.r11.s64 = ctx.r11.s64 + -28676;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,27532
	ctx.r3.s64 = ctx.r10.s64 + 27532;
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
	ctx.lr = 0x83114BAC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83114BC0"))) PPC_WEAK_FUNC(sub_83114BC0);
PPC_FUNC_IMPL(__imp__sub_83114BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,19252
	ctx.r5.s64 = ctx.r10.s64 + 19252;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,10884
	ctx.r4.s64 = ctx.r10.s64 + 10884;
	// addi r11,r11,-28616
	ctx.r11.s64 = ctx.r11.s64 + -28616;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24472
	ctx.r3.s64 = ctx.r10.s64 + 24472;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83114C14;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83114C28"))) PPC_WEAK_FUNC(sub_83114C28);
PPC_FUNC_IMPL(__imp__sub_83114C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r9,r10,-22896
	ctx.r9.s64 = ctx.r10.s64 + -22896;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,11384
	ctx.r4.s64 = ctx.r10.s64 + 11384;
	// addi r11,r11,-28592
	ctx.r11.s64 = ctx.r11.s64 + -28592;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,27640
	ctx.r3.s64 = ctx.r10.s64 + 27640;
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
	ctx.lr = 0x83114C7C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83114C90"))) PPC_WEAK_FUNC(sub_83114C90);
PPC_FUNC_IMPL(__imp__sub_83114C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,19252
	ctx.r5.s64 = ctx.r10.s64 + 19252;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,11420
	ctx.r4.s64 = ctx.r10.s64 + 11420;
	// addi r11,r11,-28472
	ctx.r11.s64 = ctx.r11.s64 + -28472;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25660
	ctx.r3.s64 = ctx.r10.s64 + 25660;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83114CE4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83114CF8"))) PPC_WEAK_FUNC(sub_83114CF8);
PPC_FUNC_IMPL(__imp__sub_83114CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r5,r10,20512
	ctx.r5.s64 = ctx.r10.s64 + 20512;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,18348
	ctx.r4.s64 = ctx.r10.s64 + 18348;
	// addi r11,r11,-28448
	ctx.r11.s64 = ctx.r11.s64 + -28448;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,20728
	ctx.r3.s64 = ctx.r10.s64 + 20728;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83114D4C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83114D60"))) PPC_WEAK_FUNC(sub_83114D60);
PPC_FUNC_IMPL(__imp__sub_83114D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,17092
	ctx.r4.s64 = ctx.r10.s64 + 17092;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,20512
	ctx.r3.s64 = ctx.r10.s64 + 20512;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83114DAC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83114DC0"))) PPC_WEAK_FUNC(sub_83114DC0);
PPC_FUNC_IMPL(__imp__sub_83114DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// addi r10,r10,-19536
	ctx.r10.s64 = ctx.r10.s64 + -19536;
	// lwz r11,-28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28452);
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83114DD8"))) PPC_WEAK_FUNC(sub_83114DD8);
PPC_FUNC_IMPL(__imp__sub_83114DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r9,r10,-22844
	ctx.r9.s64 = ctx.r10.s64 + -22844;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r5,r10,19252
	ctx.r5.s64 = ctx.r10.s64 + 19252;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-19536
	ctx.r11.s64 = ctx.r11.s64 + -19536;
	// addi r4,r10,19012
	ctx.r4.s64 = ctx.r10.s64 + 19012;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,17308
	ctx.r3.s64 = ctx.r10.s64 + 17308;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x83114E30;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83114E40"))) PPC_WEAK_FUNC(sub_83114E40);
PPC_FUNC_IMPL(__imp__sub_83114E40) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,11756
	ctx.r4.s64 = ctx.r10.s64 + 11756;
	// addi r11,r11,-28348
	ctx.r11.s64 = ctx.r11.s64 + -28348;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27676
	ctx.r3.s64 = ctx.r10.s64 + 27676;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83114E90;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83114EA0"))) PPC_WEAK_FUNC(sub_83114EA0);
PPC_FUNC_IMPL(__imp__sub_83114EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,19252
	ctx.r5.s64 = ctx.r10.s64 + 19252;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,11792
	ctx.r4.s64 = ctx.r10.s64 + 11792;
	// addi r11,r11,-28308
	ctx.r11.s64 = ctx.r11.s64 + -28308;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,20476
	ctx.r3.s64 = ctx.r10.s64 + 20476;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83114EF4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83114F08"))) PPC_WEAK_FUNC(sub_83114F08);
PPC_FUNC_IMPL(__imp__sub_83114F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r9,r10,-22816
	ctx.r9.s64 = ctx.r10.s64 + -22816;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,12596
	ctx.r4.s64 = ctx.r10.s64 + 12596;
	// addi r11,r11,-28264
	ctx.r11.s64 = ctx.r11.s64 + -28264;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,24904
	ctx.r3.s64 = ctx.r10.s64 + 24904;
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
	ctx.lr = 0x83114F5C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83114F70"))) PPC_WEAK_FUNC(sub_83114F70);
PPC_FUNC_IMPL(__imp__sub_83114F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,19252
	ctx.r5.s64 = ctx.r10.s64 + 19252;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,12628
	ctx.r4.s64 = ctx.r10.s64 + 12628;
	// addi r11,r11,-28284
	ctx.r11.s64 = ctx.r11.s64 + -28284;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28468
	ctx.r3.s64 = ctx.r10.s64 + 28468;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83114FC4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83114FD8"))) PPC_WEAK_FUNC(sub_83114FD8);
PPC_FUNC_IMPL(__imp__sub_83114FD8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,9556
	ctx.r4.s64 = ctx.r10.s64 + 9556;
	// addi r11,r11,-28124
	ctx.r11.s64 = ctx.r11.s64 + -28124;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28684
	ctx.r3.s64 = ctx.r10.s64 + 28684;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83115028;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115038"))) PPC_WEAK_FUNC(sub_83115038);
PPC_FUNC_IMPL(__imp__sub_83115038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,19252
	ctx.r5.s64 = ctx.r10.s64 + 19252;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,9592
	ctx.r4.s64 = ctx.r10.s64 + 9592;
	// addi r11,r11,-28084
	ctx.r11.s64 = ctx.r11.s64 + -28084;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,15508
	ctx.r3.s64 = ctx.r10.s64 + 15508;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8311508C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831150A0"))) PPC_WEAK_FUNC(sub_831150A0);
PPC_FUNC_IMPL(__imp__sub_831150A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r9,r10,-22772
	ctx.r9.s64 = ctx.r10.s64 + -22772;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,10644
	ctx.r4.s64 = ctx.r10.s64 + 10644;
	// addi r11,r11,-28000
	ctx.r11.s64 = ctx.r11.s64 + -28000;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,30196
	ctx.r3.s64 = ctx.r10.s64 + 30196;
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
	ctx.lr = 0x831150F4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115108"))) PPC_WEAK_FUNC(sub_83115108);
PPC_FUNC_IMPL(__imp__sub_83115108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,19252
	ctx.r5.s64 = ctx.r10.s64 + 19252;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,10672
	ctx.r4.s64 = ctx.r10.s64 + 10672;
	// addi r11,r11,-28060
	ctx.r11.s64 = ctx.r11.s64 + -28060;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27820
	ctx.r3.s64 = ctx.r10.s64 + 27820;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8311515C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115170"))) PPC_WEAK_FUNC(sub_83115170);
PPC_FUNC_IMPL(__imp__sub_83115170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r5,r10,19252
	ctx.r5.s64 = ctx.r10.s64 + 19252;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,14336
	ctx.r4.s64 = ctx.r10.s64 + 14336;
	// addi r11,r11,-27840
	ctx.r11.s64 = ctx.r11.s64 + -27840;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28792
	ctx.r3.s64 = ctx.r10.s64 + 28792;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x831151C4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831151D8"))) PPC_WEAK_FUNC(sub_831151D8);
PPC_FUNC_IMPL(__imp__sub_831151D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,19252
	ctx.r5.s64 = ctx.r10.s64 + 19252;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,14024
	ctx.r4.s64 = ctx.r10.s64 + 14024;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,17848
	ctx.r3.s64 = ctx.r10.s64 + 17848;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83115224;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115238"))) PPC_WEAK_FUNC(sub_83115238);
PPC_FUNC_IMPL(__imp__sub_83115238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,22348
	ctx.r5.s64 = ctx.r10.s64 + 22348;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,15872
	ctx.r4.s64 = ctx.r10.s64 + 15872;
	// addi r11,r11,-27680
	ctx.r11.s64 = ctx.r11.s64 + -27680;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24364
	ctx.r3.s64 = ctx.r10.s64 + 24364;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8311528C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831152A0"))) PPC_WEAK_FUNC(sub_831152A0);
PPC_FUNC_IMPL(__imp__sub_831152A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,30844
	ctx.r5.s64 = ctx.r10.s64 + 30844;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,15992
	ctx.r4.s64 = ctx.r10.s64 + 15992;
	// addi r11,r11,-27860
	ctx.r11.s64 = ctx.r11.s64 + -27860;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,19936
	ctx.r3.s64 = ctx.r10.s64 + 19936;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x831152F4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115308"))) PPC_WEAK_FUNC(sub_83115308);
PPC_FUNC_IMPL(__imp__sub_83115308) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,7936
	ctx.r4.s64 = ctx.r10.s64 + 7936;
	// addi r11,r11,-27640
	ctx.r11.s64 = ctx.r11.s64 + -27640;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29152
	ctx.r3.s64 = ctx.r10.s64 + 29152;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83115358;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115368"))) PPC_WEAK_FUNC(sub_83115368);
PPC_FUNC_IMPL(__imp__sub_83115368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r5,r10,17848
	ctx.r5.s64 = ctx.r10.s64 + 17848;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,7972
	ctx.r4.s64 = ctx.r10.s64 + 7972;
	// addi r11,r11,-27600
	ctx.r11.s64 = ctx.r11.s64 + -27600;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22132
	ctx.r3.s64 = ctx.r10.s64 + 22132;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x831153BC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831153D0"))) PPC_WEAK_FUNC(sub_831153D0);
PPC_FUNC_IMPL(__imp__sub_831153D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r9,r10,-22736
	ctx.r9.s64 = ctx.r10.s64 + -22736;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,11136
	ctx.r4.s64 = ctx.r10.s64 + 11136;
	// addi r11,r11,-27476
	ctx.r11.s64 = ctx.r11.s64 + -27476;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,28900
	ctx.r3.s64 = ctx.r10.s64 + 28900;
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
	ctx.lr = 0x83115424;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115438"))) PPC_WEAK_FUNC(sub_83115438);
PPC_FUNC_IMPL(__imp__sub_83115438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,19252
	ctx.r5.s64 = ctx.r10.s64 + 19252;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,11160
	ctx.r4.s64 = ctx.r10.s64 + 11160;
	// addi r11,r11,-27416
	ctx.r11.s64 = ctx.r11.s64 + -27416;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28216
	ctx.r3.s64 = ctx.r10.s64 + 28216;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8311548C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831154A0"))) PPC_WEAK_FUNC(sub_831154A0);
PPC_FUNC_IMPL(__imp__sub_831154A0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,12248
	ctx.r4.s64 = ctx.r10.s64 + 12248;
	// addi r11,r11,-27336
	ctx.r11.s64 = ctx.r11.s64 + -27336;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28504
	ctx.r3.s64 = ctx.r10.s64 + 28504;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x831154F0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115500"))) PPC_WEAK_FUNC(sub_83115500);
PPC_FUNC_IMPL(__imp__sub_83115500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r8,r10,-27216
	ctx.r8.s64 = ctx.r10.s64 + -27216;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r5,r10,17848
	ctx.r5.s64 = ctx.r10.s64 + 17848;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,-22724
	ctx.r11.s64 = ctx.r11.s64 + -22724;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,12284
	ctx.r4.s64 = ctx.r10.s64 + 12284;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,30916
	ctx.r3.s64 = ctx.r10.s64 + 30916;
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
	ctx.lr = 0x8311555C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115570"))) PPC_WEAK_FUNC(sub_83115570);
PPC_FUNC_IMPL(__imp__sub_83115570) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,8180
	ctx.r4.s64 = ctx.r10.s64 + 8180;
	// addi r11,r11,-27396
	ctx.r11.s64 = ctx.r11.s64 + -27396;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,21412
	ctx.r3.s64 = ctx.r10.s64 + 21412;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x831155C0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831155D0"))) PPC_WEAK_FUNC(sub_831155D0);
PPC_FUNC_IMPL(__imp__sub_831155D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r5,r10,17848
	ctx.r5.s64 = ctx.r10.s64 + 17848;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,8220
	ctx.r4.s64 = ctx.r10.s64 + 8220;
	// addi r11,r11,-26976
	ctx.r11.s64 = ctx.r11.s64 + -26976;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,18496
	ctx.r3.s64 = ctx.r10.s64 + 18496;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83115624;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115638"))) PPC_WEAK_FUNC(sub_83115638);
PPC_FUNC_IMPL(__imp__sub_83115638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,19252
	ctx.r5.s64 = ctx.r10.s64 + 19252;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,17272
	ctx.r4.s64 = ctx.r10.s64 + 17272;
	// addi r11,r11,-26876
	ctx.r11.s64 = ctx.r11.s64 + -26876;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28180
	ctx.r3.s64 = ctx.r10.s64 + 28180;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8311568C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831156A0"))) PPC_WEAK_FUNC(sub_831156A0);
PPC_FUNC_IMPL(__imp__sub_831156A0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,9916
	ctx.r4.s64 = ctx.r10.s64 + 9916;
	// addi r11,r11,-26832
	ctx.r11.s64 = ctx.r11.s64 + -26832;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27748
	ctx.r3.s64 = ctx.r10.s64 + 27748;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x831156F0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115700"))) PPC_WEAK_FUNC(sub_83115700);
PPC_FUNC_IMPL(__imp__sub_83115700) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,9960
	ctx.r4.s64 = ctx.r10.s64 + 9960;
	// addi r11,r11,-26752
	ctx.r11.s64 = ctx.r11.s64 + -26752;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26488
	ctx.r3.s64 = ctx.r10.s64 + 26488;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83115750;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115760"))) PPC_WEAK_FUNC(sub_83115760);
PPC_FUNC_IMPL(__imp__sub_83115760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,19252
	ctx.r5.s64 = ctx.r10.s64 + 19252;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,18444
	ctx.r4.s64 = ctx.r10.s64 + 18444;
	// addi r11,r11,-27036
	ctx.r11.s64 = ctx.r11.s64 + -27036;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23644
	ctx.r3.s64 = ctx.r10.s64 + 23644;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x831157B4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831157C8"))) PPC_WEAK_FUNC(sub_831157C8);
PPC_FUNC_IMPL(__imp__sub_831157C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// addi r10,r10,-19836
	ctx.r10.s64 = ctx.r10.s64 + -19836;
	// lwz r11,-26836(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26836);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831157E0"))) PPC_WEAK_FUNC(sub_831157E0);
PPC_FUNC_IMPL(__imp__sub_831157E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r10,-22624
	ctx.r9.s64 = ctx.r10.s64 + -22624;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-19836
	ctx.r11.s64 = ctx.r11.s64 + -19836;
	// addi r4,r10,15420
	ctx.r4.s64 = ctx.r10.s64 + 15420;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,23572
	ctx.r3.s64 = ctx.r10.s64 + 23572;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x83115838;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115848"))) PPC_WEAK_FUNC(sub_83115848);
PPC_FUNC_IMPL(__imp__sub_83115848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,23572
	ctx.r5.s64 = ctx.r10.s64 + 23572;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,16088
	ctx.r4.s64 = ctx.r10.s64 + 16088;
	// addi r11,r11,-26652
	ctx.r11.s64 = ctx.r11.s64 + -26652;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,19288
	ctx.r3.s64 = ctx.r10.s64 + 19288;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8311589C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831158B0"))) PPC_WEAK_FUNC(sub_831158B0);
PPC_FUNC_IMPL(__imp__sub_831158B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// addi r10,r10,-13960
	ctx.r10.s64 = ctx.r10.s64 + -13960;
	// lwz r11,-26612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26612);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831158C8"))) PPC_WEAK_FUNC(sub_831158C8);
PPC_FUNC_IMPL(__imp__sub_831158C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r9,r10,-22572
	ctx.r9.s64 = ctx.r10.s64 + -22572;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r5,r10,19288
	ctx.r5.s64 = ctx.r10.s64 + 19288;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-13960
	ctx.r11.s64 = ctx.r11.s64 + -13960;
	// addi r4,r10,15716
	ctx.r4.s64 = ctx.r10.s64 + 15716;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,16336
	ctx.r3.s64 = ctx.r10.s64 + 16336;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x83115920;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115930"))) PPC_WEAK_FUNC(sub_83115930);
PPC_FUNC_IMPL(__imp__sub_83115930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,19288
	ctx.r5.s64 = ctx.r10.s64 + 19288;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,19200
	ctx.r4.s64 = ctx.r10.s64 + 19200;
	// addi r11,r11,-26608
	ctx.r11.s64 = ctx.r11.s64 + -26608;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,21556
	ctx.r3.s64 = ctx.r10.s64 + 21556;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83115984;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115998"))) PPC_WEAK_FUNC(sub_83115998);
PPC_FUNC_IMPL(__imp__sub_83115998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,19288
	ctx.r5.s64 = ctx.r10.s64 + 19288;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,7480
	ctx.r4.s64 = ctx.r10.s64 + 7480;
	// addi r11,r11,-26528
	ctx.r11.s64 = ctx.r11.s64 + -26528;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,21736
	ctx.r3.s64 = ctx.r10.s64 + 21736;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x831159EC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115A00"))) PPC_WEAK_FUNC(sub_83115A00);
PPC_FUNC_IMPL(__imp__sub_83115A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,19288
	ctx.r5.s64 = ctx.r10.s64 + 19288;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,10124
	ctx.r4.s64 = ctx.r10.s64 + 10124;
	// addi r11,r11,-26488
	ctx.r11.s64 = ctx.r11.s64 + -26488;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,19432
	ctx.r3.s64 = ctx.r10.s64 + 19432;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83115A54;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115A68"))) PPC_WEAK_FUNC(sub_83115A68);
PPC_FUNC_IMPL(__imp__sub_83115A68) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,12920
	ctx.r4.s64 = ctx.r10.s64 + 12920;
	// addi r11,r11,-26428
	ctx.r11.s64 = ctx.r11.s64 + -26428;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,17056
	ctx.r3.s64 = ctx.r10.s64 + 17056;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83115AB8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115AC8"))) PPC_WEAK_FUNC(sub_83115AC8);
PPC_FUNC_IMPL(__imp__sub_83115AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,19252
	ctx.r5.s64 = ctx.r10.s64 + 19252;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,12948
	ctx.r4.s64 = ctx.r10.s64 + 12948;
	// addi r11,r11,-26388
	ctx.r11.s64 = ctx.r11.s64 + -26388;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,20440
	ctx.r3.s64 = ctx.r10.s64 + 20440;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83115B1C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115B30"))) PPC_WEAK_FUNC(sub_83115B30);
PPC_FUNC_IMPL(__imp__sub_83115B30) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,9356
	ctx.r4.s64 = ctx.r10.s64 + 9356;
	// addi r11,r11,-26364
	ctx.r11.s64 = ctx.r11.s64 + -26364;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25372
	ctx.r3.s64 = ctx.r10.s64 + 25372;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83115B80;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115B90"))) PPC_WEAK_FUNC(sub_83115B90);
PPC_FUNC_IMPL(__imp__sub_83115B90) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,9396
	ctx.r4.s64 = ctx.r10.s64 + 9396;
	// addi r11,r11,-26304
	ctx.r11.s64 = ctx.r11.s64 + -26304;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25048
	ctx.r3.s64 = ctx.r10.s64 + 25048;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83115BE0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115BF0"))) PPC_WEAK_FUNC(sub_83115BF0);
PPC_FUNC_IMPL(__imp__sub_83115BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r9,r11,-22528
	ctx.r9.s64 = ctx.r11.s64 + -22528;
	// addi r5,r10,17200
	ctx.r5.s64 = ctx.r10.s64 + 17200;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
	// li r7,18
	ctx.r7.s64 = 18;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,9428
	ctx.r4.s64 = ctx.r10.s64 + 9428;
	// addi r11,r11,-26224
	ctx.r11.s64 = ctx.r11.s64 + -26224;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27604
	ctx.r3.s64 = ctx.r10.s64 + 27604;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83115C4C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115C60"))) PPC_WEAK_FUNC(sub_83115C60);
PPC_FUNC_IMPL(__imp__sub_83115C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,15900
	ctx.r4.s64 = ctx.r10.s64 + 15900;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,15832
	ctx.r3.s64 = ctx.r10.s64 + 15832;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83115CAC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115CC0"))) PPC_WEAK_FUNC(sub_83115CC0);
PPC_FUNC_IMPL(__imp__sub_83115CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,25444
	ctx.r5.s64 = ctx.r10.s64 + 25444;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,17064
	ctx.r4.s64 = ctx.r10.s64 + 17064;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,24256
	ctx.r3.s64 = ctx.r10.s64 + 24256;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83115D0C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115D20"))) PPC_WEAK_FUNC(sub_83115D20);
PPC_FUNC_IMPL(__imp__sub_83115D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,27604
	ctx.r5.s64 = ctx.r10.s64 + 27604;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,2268
	ctx.r4.s64 = ctx.r10.s64 + 2268;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,28000
	ctx.r3.s64 = ctx.r10.s64 + 28000;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83115D6C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115D80"))) PPC_WEAK_FUNC(sub_83115D80);
PPC_FUNC_IMPL(__imp__sub_83115D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-22404
	ctx.r9.s64 = ctx.r10.s64 + -22404;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,15832
	ctx.r5.s64 = ctx.r10.s64 + 15832;
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
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,25444
	ctx.r3.s64 = ctx.r10.s64 + 25444;
	// li r10,1
	ctx.r10.s64 = 1;
	// bl 0x82db4000
	ctx.lr = 0x83115DD0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115DE0"))) PPC_WEAK_FUNC(sub_83115DE0);
PPC_FUNC_IMPL(__imp__sub_83115DE0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,7308
	ctx.r4.s64 = ctx.r10.s64 + 7308;
	// addi r11,r11,-25860
	ctx.r11.s64 = ctx.r11.s64 + -25860;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26128
	ctx.r3.s64 = ctx.r10.s64 + 26128;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83115E30;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115E40"))) PPC_WEAK_FUNC(sub_83115E40);
PPC_FUNC_IMPL(__imp__sub_83115E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r5,r10,25444
	ctx.r5.s64 = ctx.r10.s64 + 25444;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,7344
	ctx.r4.s64 = ctx.r10.s64 + 7344;
	// addi r11,r11,-25816
	ctx.r11.s64 = ctx.r11.s64 + -25816;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,21700
	ctx.r3.s64 = ctx.r10.s64 + 21700;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83115E94;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115EA8"))) PPC_WEAK_FUNC(sub_83115EA8);
PPC_FUNC_IMPL(__imp__sub_83115EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// addi r10,r10,-15120
	ctx.r10.s64 = ctx.r10.s64 + -15120;
	// lwz r11,-25820(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25820);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115EC0"))) PPC_WEAK_FUNC(sub_83115EC0);
PPC_FUNC_IMPL(__imp__sub_83115EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r9,r10,-22312
	ctx.r9.s64 = ctx.r10.s64 + -22312;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-15120
	ctx.r11.s64 = ctx.r11.s64 + -15120;
	// addi r4,r10,17028
	ctx.r4.s64 = ctx.r10.s64 + 17028;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,30664
	ctx.r3.s64 = ctx.r10.s64 + 30664;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x83115F18;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115F28"))) PPC_WEAK_FUNC(sub_83115F28);
PPC_FUNC_IMPL(__imp__sub_83115F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,30664
	ctx.r5.s64 = ctx.r10.s64 + 30664;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,14012
	ctx.r4.s64 = ctx.r10.s64 + 14012;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,16660
	ctx.r3.s64 = ctx.r10.s64 + 16660;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83115F74;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115F88"))) PPC_WEAK_FUNC(sub_83115F88);
PPC_FUNC_IMPL(__imp__sub_83115F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,26848
	ctx.r5.s64 = ctx.r10.s64 + 26848;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,17112
	ctx.r4.s64 = ctx.r10.s64 + 17112;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,22996
	ctx.r3.s64 = ctx.r10.s64 + 22996;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83115FD4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83115FE8"))) PPC_WEAK_FUNC(sub_83115FE8);
PPC_FUNC_IMPL(__imp__sub_83115FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,30664
	ctx.r5.s64 = ctx.r10.s64 + 30664;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,17616
	ctx.r4.s64 = ctx.r10.s64 + 17616;
	// addi r11,r11,-25676
	ctx.r11.s64 = ctx.r11.s64 + -25676;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26848
	ctx.r3.s64 = ctx.r10.s64 + 26848;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8311603C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116050"))) PPC_WEAK_FUNC(sub_83116050);
PPC_FUNC_IMPL(__imp__sub_83116050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,26848
	ctx.r5.s64 = ctx.r10.s64 + 26848;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,17640
	ctx.r4.s64 = ctx.r10.s64 + 17640;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,21340
	ctx.r3.s64 = ctx.r10.s64 + 21340;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8311609C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831160B0"))) PPC_WEAK_FUNC(sub_831160B0);
PPC_FUNC_IMPL(__imp__sub_831160B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,30664
	ctx.r5.s64 = ctx.r10.s64 + 30664;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,7376
	ctx.r4.s64 = ctx.r10.s64 + 7376;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,27928
	ctx.r3.s64 = ctx.r10.s64 + 27928;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x831160FC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116110"))) PPC_WEAK_FUNC(sub_83116110);
PPC_FUNC_IMPL(__imp__sub_83116110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,16660
	ctx.r5.s64 = ctx.r10.s64 + 16660;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,7512
	ctx.r4.s64 = ctx.r10.s64 + 7512;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,28936
	ctx.r3.s64 = ctx.r10.s64 + 28936;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8311615C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116170"))) PPC_WEAK_FUNC(sub_83116170);
PPC_FUNC_IMPL(__imp__sub_83116170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,27928
	ctx.r5.s64 = ctx.r10.s64 + 27928;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,7692
	ctx.r4.s64 = ctx.r10.s64 + 7692;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,15616
	ctx.r3.s64 = ctx.r10.s64 + 15616;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x831161BC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831161D0"))) PPC_WEAK_FUNC(sub_831161D0);
PPC_FUNC_IMPL(__imp__sub_831161D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,16660
	ctx.r5.s64 = ctx.r10.s64 + 16660;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,9620
	ctx.r4.s64 = ctx.r10.s64 + 9620;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,29404
	ctx.r3.s64 = ctx.r10.s64 + 29404;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8311621C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116230"))) PPC_WEAK_FUNC(sub_83116230);
PPC_FUNC_IMPL(__imp__sub_83116230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,20944
	ctx.r5.s64 = ctx.r10.s64 + 20944;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,13532
	ctx.r4.s64 = ctx.r10.s64 + 13532;
	// addi r11,r11,-25636
	ctx.r11.s64 = ctx.r11.s64 + -25636;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,19720
	ctx.r3.s64 = ctx.r10.s64 + 19720;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83116284;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116298"))) PPC_WEAK_FUNC(sub_83116298);
PPC_FUNC_IMPL(__imp__sub_83116298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,18064
	ctx.r5.s64 = ctx.r10.s64 + 18064;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,15256
	ctx.r4.s64 = ctx.r10.s64 + 15256;
	// addi r11,r11,-25596
	ctx.r11.s64 = ctx.r11.s64 + -25596;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24544
	ctx.r3.s64 = ctx.r10.s64 + 24544;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x831162EC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116300"))) PPC_WEAK_FUNC(sub_83116300);
PPC_FUNC_IMPL(__imp__sub_83116300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,17200
	ctx.r5.s64 = ctx.r10.s64 + 17200;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,17212
	ctx.r4.s64 = ctx.r10.s64 + 17212;
	// addi r11,r11,-25576
	ctx.r11.s64 = ctx.r11.s64 + -25576;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,20944
	ctx.r3.s64 = ctx.r10.s64 + 20944;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83116354;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116368"))) PPC_WEAK_FUNC(sub_83116368);
PPC_FUNC_IMPL(__imp__sub_83116368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,20944
	ctx.r5.s64 = ctx.r10.s64 + 20944;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,17480
	ctx.r4.s64 = ctx.r10.s64 + 17480;
	// addi r11,r11,-25536
	ctx.r11.s64 = ctx.r11.s64 + -25536;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,18064
	ctx.r3.s64 = ctx.r10.s64 + 18064;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x831163BC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831163D0"))) PPC_WEAK_FUNC(sub_831163D0);
PPC_FUNC_IMPL(__imp__sub_831163D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,18064
	ctx.r5.s64 = ctx.r10.s64 + 18064;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,6896
	ctx.r4.s64 = ctx.r10.s64 + 6896;
	// addi r11,r11,-25516
	ctx.r11.s64 = ctx.r11.s64 + -25516;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,15868
	ctx.r3.s64 = ctx.r10.s64 + 15868;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83116424;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116438"))) PPC_WEAK_FUNC(sub_83116438);
PPC_FUNC_IMPL(__imp__sub_83116438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r8,r10,-25496
	ctx.r8.s64 = ctx.r10.s64 + -25496;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,-22300
	ctx.r11.s64 = ctx.r11.s64 + -22300;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,18684
	ctx.r4.s64 = ctx.r10.s64 + 18684;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,18568
	ctx.r3.s64 = ctx.r10.s64 + 18568;
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
	ctx.lr = 0x83116494;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831164A8"))) PPC_WEAK_FUNC(sub_831164A8);
PPC_FUNC_IMPL(__imp__sub_831164A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r10,-25344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25344);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r11,r11,-15920
	ctx.r11.s64 = ctx.r11.s64 + -15920;
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lwz r10,-25348(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25348);
	// stw r10,268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 268, ctx.r10.u32);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lwz r10,-25352(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25352);
	// stw r10,708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 708, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831164D8"))) PPC_WEAK_FUNC(sub_831164D8);
PPC_FUNC_IMPL(__imp__sub_831164D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r9,r11,-22088
	ctx.r9.s64 = ctx.r11.s64 + -22088;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r8,r9,48
	ctx.r8.s64 = ctx.r9.s64 + 48;
	// li r7,40
	ctx.r7.s64 = 40;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,1284
	ctx.r4.s64 = ctx.r10.s64 + 1284;
	// addi r11,r11,-15920
	ctx.r11.s64 = ctx.r11.s64 + -15920;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23464
	ctx.r3.s64 = ctx.r10.s64 + 23464;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83116534;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116548"))) PPC_WEAK_FUNC(sub_83116548);
PPC_FUNC_IMPL(__imp__sub_83116548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r9,r10,-21712
	ctx.r9.s64 = ctx.r10.s64 + -21712;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-25312
	ctx.r11.s64 = ctx.r11.s64 + -25312;
	// addi r4,r10,18104
	ctx.r4.s64 = ctx.r10.s64 + 18104;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,17200
	ctx.r3.s64 = ctx.r10.s64 + 17200;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x831165A0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831165B0"))) PPC_WEAK_FUNC(sub_831165B0);
PPC_FUNC_IMPL(__imp__sub_831165B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,17688
	ctx.r4.s64 = ctx.r10.s64 + 17688;
	// addi r11,r11,-25332
	ctx.r11.s64 = ctx.r11.s64 + -25332;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,19216
	ctx.r3.s64 = ctx.r10.s64 + 19216;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83116604;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116618"))) PPC_WEAK_FUNC(sub_83116618);
PPC_FUNC_IMPL(__imp__sub_83116618) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-20236
	ctx.r4.s64 = ctx.r10.s64 + -20236;
	// addi r11,r11,-25192
	ctx.r11.s64 = ctx.r11.s64 + -25192;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22096
	ctx.r3.s64 = ctx.r10.s64 + 22096;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83116668;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116678"))) PPC_WEAK_FUNC(sub_83116678);
PPC_FUNC_IMPL(__imp__sub_83116678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,23536
	ctx.r5.s64 = ctx.r10.s64 + 23536;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-20140
	ctx.r4.s64 = ctx.r10.s64 + -20140;
	// addi r11,r11,-25092
	ctx.r11.s64 = ctx.r11.s64 + -25092;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28108
	ctx.r3.s64 = ctx.r10.s64 + 28108;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x831166CC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831166E0"))) PPC_WEAK_FUNC(sub_831166E0);
PPC_FUNC_IMPL(__imp__sub_831166E0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-20200
	ctx.r4.s64 = ctx.r10.s64 + -20200;
	// addi r11,r11,-25072
	ctx.r11.s64 = ctx.r11.s64 + -25072;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29872
	ctx.r3.s64 = ctx.r10.s64 + 29872;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83116730;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116740"))) PPC_WEAK_FUNC(sub_83116740);
PPC_FUNC_IMPL(__imp__sub_83116740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-20596
	ctx.r4.s64 = ctx.r10.s64 + -20596;
	// addi r11,r11,-25052
	ctx.r11.s64 = ctx.r11.s64 + -25052;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24400
	ctx.r3.s64 = ctx.r10.s64 + 24400;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83116794;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831167A8"))) PPC_WEAK_FUNC(sub_831167A8);
PPC_FUNC_IMPL(__imp__sub_831167A8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-20436
	ctx.r4.s64 = ctx.r10.s64 + -20436;
	// addi r11,r11,-24992
	ctx.r11.s64 = ctx.r11.s64 + -24992;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,30952
	ctx.r3.s64 = ctx.r10.s64 + 30952;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x831167F8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116808"))) PPC_WEAK_FUNC(sub_83116808);
PPC_FUNC_IMPL(__imp__sub_83116808) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-20408
	ctx.r4.s64 = ctx.r10.s64 + -20408;
	// addi r11,r11,-24952
	ctx.r11.s64 = ctx.r11.s64 + -24952;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29116
	ctx.r3.s64 = ctx.r10.s64 + 29116;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83116858;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116868"))) PPC_WEAK_FUNC(sub_83116868);
PPC_FUNC_IMPL(__imp__sub_83116868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-20388
	ctx.r4.s64 = ctx.r10.s64 + -20388;
	// addi r11,r11,-24932
	ctx.r11.s64 = ctx.r11.s64 + -24932;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24220
	ctx.r3.s64 = ctx.r10.s64 + 24220;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x831168BC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831168D0"))) PPC_WEAK_FUNC(sub_831168D0);
PPC_FUNC_IMPL(__imp__sub_831168D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r9,r10,-21640
	ctx.r9.s64 = ctx.r10.s64 + -21640;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,13352
	ctx.r4.s64 = ctx.r10.s64 + 13352;
	// addi r11,r11,-24864
	ctx.r11.s64 = ctx.r11.s64 + -24864;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,18892
	ctx.r3.s64 = ctx.r10.s64 + 18892;
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
	ctx.lr = 0x83116924;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116938"))) PPC_WEAK_FUNC(sub_83116938);
PPC_FUNC_IMPL(__imp__sub_83116938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r10,-21676
	ctx.r9.s64 = ctx.r10.s64 + -21676;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r5,r10,19252
	ctx.r5.s64 = ctx.r10.s64 + 19252;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-24884
	ctx.r11.s64 = ctx.r11.s64 + -24884;
	// addi r4,r10,13384
	ctx.r4.s64 = ctx.r10.s64 + 13384;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,20008
	ctx.r3.s64 = ctx.r10.s64 + 20008;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x83116990;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831169A0"))) PPC_WEAK_FUNC(sub_831169A0);
PPC_FUNC_IMPL(__imp__sub_831169A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r9,r10,-21604
	ctx.r9.s64 = ctx.r10.s64 + -21604;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,13736
	ctx.r4.s64 = ctx.r10.s64 + 13736;
	// addi r11,r11,-24720
	ctx.r11.s64 = ctx.r11.s64 + -24720;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,16876
	ctx.r3.s64 = ctx.r10.s64 + 16876;
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
	ctx.lr = 0x831169F4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116A08"))) PPC_WEAK_FUNC(sub_83116A08);
PPC_FUNC_IMPL(__imp__sub_83116A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,19252
	ctx.r5.s64 = ctx.r10.s64 + 19252;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,13764
	ctx.r4.s64 = ctx.r10.s64 + 13764;
	// addi r11,r11,-24640
	ctx.r11.s64 = ctx.r11.s64 + -24640;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28648
	ctx.r3.s64 = ctx.r10.s64 + 28648;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83116A5C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116A70"))) PPC_WEAK_FUNC(sub_83116A70);
PPC_FUNC_IMPL(__imp__sub_83116A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,25732
	ctx.r5.s64 = ctx.r10.s64 + 25732;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-26268
	ctx.r4.s64 = ctx.r10.s64 + -26268;
	// addi r11,r11,-24620
	ctx.r11.s64 = ctx.r11.s64 + -24620;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,16084
	ctx.r3.s64 = ctx.r10.s64 + 16084;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83116AC4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116AD8"))) PPC_WEAK_FUNC(sub_83116AD8);
PPC_FUNC_IMPL(__imp__sub_83116AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,25732
	ctx.r5.s64 = ctx.r10.s64 + 25732;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-25968
	ctx.r4.s64 = ctx.r10.s64 + -25968;
	// addi r11,r11,-24560
	ctx.r11.s64 = ctx.r11.s64 + -24560;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28036
	ctx.r3.s64 = ctx.r10.s64 + 28036;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83116B2C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116B40"))) PPC_WEAK_FUNC(sub_83116B40);
PPC_FUNC_IMPL(__imp__sub_83116B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,24652
	ctx.r5.s64 = ctx.r10.s64 + 24652;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-25464
	ctx.r4.s64 = ctx.r10.s64 + -25464;
	// addi r11,r11,-24480
	ctx.r11.s64 = ctx.r11.s64 + -24480;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25156
	ctx.r3.s64 = ctx.r10.s64 + 25156;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83116B94;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116BA8"))) PPC_WEAK_FUNC(sub_83116BA8);
PPC_FUNC_IMPL(__imp__sub_83116BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,24652
	ctx.r5.s64 = ctx.r10.s64 + 24652;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-24232
	ctx.r4.s64 = ctx.r10.s64 + -24232;
	// addi r11,r11,-24400
	ctx.r11.s64 = ctx.r11.s64 + -24400;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,16048
	ctx.r3.s64 = ctx.r10.s64 + 16048;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83116BFC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116C10"))) PPC_WEAK_FUNC(sub_83116C10);
PPC_FUNC_IMPL(__imp__sub_83116C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r5,r10,25732
	ctx.r5.s64 = ctx.r10.s64 + 25732;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-22904
	ctx.r4.s64 = ctx.r10.s64 + -22904;
	// addi r11,r11,-24320
	ctx.r11.s64 = ctx.r11.s64 + -24320;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24112
	ctx.r3.s64 = ctx.r10.s64 + 24112;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83116C64;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116C78"))) PPC_WEAK_FUNC(sub_83116C78);
PPC_FUNC_IMPL(__imp__sub_83116C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// li r8,19
	ctx.r8.s64 = 19;
	// addi r7,r10,-24160
	ctx.r7.s64 = ctx.r10.s64 + -24160;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-22092
	ctx.r4.s64 = ctx.r10.s64 + -22092;
	// addi r11,r11,-21592
	ctx.r11.s64 = ctx.r11.s64 + -21592;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,24868
	ctx.r3.s64 = ctx.r10.s64 + 24868;
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
	ctx.lr = 0x83116CD0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116CE0"))) PPC_WEAK_FUNC(sub_83116CE0);
PPC_FUNC_IMPL(__imp__sub_83116CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r5,r10,29224
	ctx.r5.s64 = ctx.r10.s64 + 29224;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,-23780
	ctx.r11.s64 = ctx.r11.s64 + -23780;
	// addi r4,r10,-26120
	ctx.r4.s64 = ctx.r10.s64 + -26120;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r10,21952
	ctx.r3.s64 = ctx.r10.s64 + 21952;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x83116D30;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116D40"))) PPC_WEAK_FUNC(sub_83116D40);
PPC_FUNC_IMPL(__imp__sub_83116D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r5,r10,29224
	ctx.r5.s64 = ctx.r10.s64 + 29224;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,-23760
	ctx.r11.s64 = ctx.r11.s64 + -23760;
	// addi r4,r10,-25804
	ctx.r4.s64 = ctx.r10.s64 + -25804;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r10,27136
	ctx.r3.s64 = ctx.r10.s64 + 27136;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x83116D90;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116DA0"))) PPC_WEAK_FUNC(sub_83116DA0);
PPC_FUNC_IMPL(__imp__sub_83116DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,29224
	ctx.r5.s64 = ctx.r10.s64 + 29224;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-25632
	ctx.r4.s64 = ctx.r10.s64 + -25632;
	// addi r11,r11,-23740
	ctx.r11.s64 = ctx.r11.s64 + -23740;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27964
	ctx.r3.s64 = ctx.r10.s64 + 27964;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83116DF4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116E08"))) PPC_WEAK_FUNC(sub_83116E08);
PPC_FUNC_IMPL(__imp__sub_83116E08) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-25008
	ctx.r4.s64 = ctx.r10.s64 + -25008;
	// addi r11,r11,-23700
	ctx.r11.s64 = ctx.r11.s64 + -23700;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26920
	ctx.r3.s64 = ctx.r10.s64 + 26920;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83116E58;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116E68"))) PPC_WEAK_FUNC(sub_83116E68);
PPC_FUNC_IMPL(__imp__sub_83116E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r5,r10,29224
	ctx.r5.s64 = ctx.r10.s64 + 29224;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,-23660
	ctx.r11.s64 = ctx.r11.s64 + -23660;
	// addi r4,r10,-24968
	ctx.r4.s64 = ctx.r10.s64 + -24968;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r10,16588
	ctx.r3.s64 = ctx.r10.s64 + 16588;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x83116EB8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116EC8"))) PPC_WEAK_FUNC(sub_83116EC8);
PPC_FUNC_IMPL(__imp__sub_83116EC8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-24452
	ctx.r4.s64 = ctx.r10.s64 + -24452;
	// addi r11,r11,-23640
	ctx.r11.s64 = ctx.r11.s64 + -23640;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28972
	ctx.r3.s64 = ctx.r10.s64 + 28972;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83116F18;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116F28"))) PPC_WEAK_FUNC(sub_83116F28);
PPC_FUNC_IMPL(__imp__sub_83116F28) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-24424
	ctx.r4.s64 = ctx.r10.s64 + -24424;
	// addi r11,r11,-23600
	ctx.r11.s64 = ctx.r11.s64 + -23600;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,15652
	ctx.r3.s64 = ctx.r10.s64 + 15652;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83116F78;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116F88"))) PPC_WEAK_FUNC(sub_83116F88);
PPC_FUNC_IMPL(__imp__sub_83116F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-24392
	ctx.r4.s64 = ctx.r10.s64 + -24392;
	// addi r11,r11,-23540
	ctx.r11.s64 = ctx.r11.s64 + -23540;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22384
	ctx.r3.s64 = ctx.r10.s64 + 22384;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83116FDC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83116FF0"))) PPC_WEAK_FUNC(sub_83116FF0);
PPC_FUNC_IMPL(__imp__sub_83116FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,18568
	ctx.r5.s64 = ctx.r10.s64 + 18568;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-24800
	ctx.r4.s64 = ctx.r10.s64 + -24800;
	// addi r11,r11,-23480
	ctx.r11.s64 = ctx.r11.s64 + -23480;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22816
	ctx.r3.s64 = ctx.r10.s64 + 22816;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83117044;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117058"))) PPC_WEAK_FUNC(sub_83117058);
PPC_FUNC_IMPL(__imp__sub_83117058) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-23676
	ctx.r4.s64 = ctx.r10.s64 + -23676;
	// addi r11,r11,-23460
	ctx.r11.s64 = ctx.r11.s64 + -23460;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,17920
	ctx.r3.s64 = ctx.r10.s64 + 17920;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x831170A8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831170B8"))) PPC_WEAK_FUNC(sub_831170B8);
PPC_FUNC_IMPL(__imp__sub_831170B8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-23636
	ctx.r4.s64 = ctx.r10.s64 + -23636;
	// addi r11,r11,-23440
	ctx.r11.s64 = ctx.r11.s64 + -23440;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23932
	ctx.r3.s64 = ctx.r10.s64 + 23932;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83117108;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117118"))) PPC_WEAK_FUNC(sub_83117118);
PPC_FUNC_IMPL(__imp__sub_83117118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,23932
	ctx.r5.s64 = ctx.r10.s64 + 23932;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-23612
	ctx.r4.s64 = ctx.r10.s64 + -23612;
	// addi r11,r11,-23400
	ctx.r11.s64 = ctx.r11.s64 + -23400;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26380
	ctx.r3.s64 = ctx.r10.s64 + 26380;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8311716C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117180"))) PPC_WEAK_FUNC(sub_83117180);
PPC_FUNC_IMPL(__imp__sub_83117180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// addi r10,r10,-19376
	ctx.r10.s64 = ctx.r10.s64 + -19376;
	// lwz r11,-23360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23360);
	// stw r11,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117198"))) PPC_WEAK_FUNC(sub_83117198);
PPC_FUNC_IMPL(__imp__sub_83117198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r7,13
	ctx.r7.s64 = 13;
	// addi r9,r10,-21440
	ctx.r9.s64 = ctx.r10.s64 + -21440;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-19376
	ctx.r11.s64 = ctx.r11.s64 + -19376;
	// addi r4,r10,-23584
	ctx.r4.s64 = ctx.r10.s64 + -23584;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,24508
	ctx.r3.s64 = ctx.r10.s64 + 24508;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x831171F0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117200"))) PPC_WEAK_FUNC(sub_83117200);
PPC_FUNC_IMPL(__imp__sub_83117200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r5,r10,24652
	ctx.r5.s64 = ctx.r10.s64 + 24652;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-25192
	ctx.r4.s64 = ctx.r10.s64 + -25192;
	// addi r11,r11,-23296
	ctx.r11.s64 = ctx.r11.s64 + -23296;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,17668
	ctx.r3.s64 = ctx.r10.s64 + 17668;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83117254;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117268"))) PPC_WEAK_FUNC(sub_83117268);
PPC_FUNC_IMPL(__imp__sub_83117268) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-21800
	ctx.r4.s64 = ctx.r10.s64 + -21800;
	// addi r11,r11,-23356
	ctx.r11.s64 = ctx.r11.s64 + -23356;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,20404
	ctx.r3.s64 = ctx.r10.s64 + 20404;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x831172B8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831172C8"))) PPC_WEAK_FUNC(sub_831172C8);
PPC_FUNC_IMPL(__imp__sub_831172C8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-21772
	ctx.r4.s64 = ctx.r10.s64 + -21772;
	// addi r11,r11,-23176
	ctx.r11.s64 = ctx.r11.s64 + -23176;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24976
	ctx.r3.s64 = ctx.r10.s64 + 24976;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83117318;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117328"))) PPC_WEAK_FUNC(sub_83117328);
PPC_FUNC_IMPL(__imp__sub_83117328) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-21740
	ctx.r4.s64 = ctx.r10.s64 + -21740;
	// addi r11,r11,-23136
	ctx.r11.s64 = ctx.r11.s64 + -23136;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,20584
	ctx.r3.s64 = ctx.r10.s64 + 20584;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83117378;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117388"))) PPC_WEAK_FUNC(sub_83117388);
PPC_FUNC_IMPL(__imp__sub_83117388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-24868
	ctx.r4.s64 = ctx.r10.s64 + -24868;
	// addi r11,r11,-23096
	ctx.r11.s64 = ctx.r11.s64 + -23096;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23428
	ctx.r3.s64 = ctx.r10.s64 + 23428;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x831173DC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831173F0"))) PPC_WEAK_FUNC(sub_831173F0);
PPC_FUNC_IMPL(__imp__sub_831173F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-23456
	ctx.r4.s64 = ctx.r10.s64 + -23456;
	// addi r11,r11,-23056
	ctx.r11.s64 = ctx.r11.s64 + -23056;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,19468
	ctx.r3.s64 = ctx.r10.s64 + 19468;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83117444;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117458"))) PPC_WEAK_FUNC(sub_83117458);
PPC_FUNC_IMPL(__imp__sub_83117458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-23388
	ctx.r4.s64 = ctx.r10.s64 + -23388;
	// addi r11,r11,-23036
	ctx.r11.s64 = ctx.r11.s64 + -23036;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23752
	ctx.r3.s64 = ctx.r10.s64 + 23752;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x831174AC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831174C0"))) PPC_WEAK_FUNC(sub_831174C0);
PPC_FUNC_IMPL(__imp__sub_831174C0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-23268
	ctx.r4.s64 = ctx.r10.s64 + -23268;
	// addi r11,r11,-23016
	ctx.r11.s64 = ctx.r11.s64 + -23016;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26668
	ctx.r3.s64 = ctx.r10.s64 + 26668;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83117510;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117520"))) PPC_WEAK_FUNC(sub_83117520);
PPC_FUNC_IMPL(__imp__sub_83117520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-23216
	ctx.r4.s64 = ctx.r10.s64 + -23216;
	// addi r11,r11,-22976
	ctx.r11.s64 = ctx.r11.s64 + -22976;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29260
	ctx.r3.s64 = ctx.r10.s64 + 29260;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83117574;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117588"))) PPC_WEAK_FUNC(sub_83117588);
PPC_FUNC_IMPL(__imp__sub_83117588) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-12624
	ctx.r4.s64 = ctx.r10.s64 + -12624;
	// addi r11,r11,-22896
	ctx.r11.s64 = ctx.r11.s64 + -22896;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27352
	ctx.r3.s64 = ctx.r10.s64 + 27352;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x831175D8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831175E8"))) PPC_WEAK_FUNC(sub_831175E8);
PPC_FUNC_IMPL(__imp__sub_831175E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// li r9,19
	ctx.r9.s64 = 19;
	// addi r8,r10,-22696
	ctx.r8.s64 = ctx.r10.s64 + -22696;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,-21424
	ctx.r11.s64 = ctx.r11.s64 + -21424;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,-12588
	ctx.r4.s64 = ctx.r10.s64 + -12588;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,25876
	ctx.r3.s64 = ctx.r10.s64 + 25876;
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
	ctx.lr = 0x83117644;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117658"))) PPC_WEAK_FUNC(sub_83117658);
PPC_FUNC_IMPL(__imp__sub_83117658) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-14676
	ctx.r4.s64 = ctx.r10.s64 + -14676;
	// addi r11,r11,-22256
	ctx.r11.s64 = ctx.r11.s64 + -22256;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,16552
	ctx.r3.s64 = ctx.r10.s64 + 16552;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x831176A8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831176B8"))) PPC_WEAK_FUNC(sub_831176B8);
PPC_FUNC_IMPL(__imp__sub_831176B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,25
	ctx.r8.s64 = 25;
	// addi r5,r10,24652
	ctx.r5.s64 = ctx.r10.s64 + 24652;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-14648
	ctx.r4.s64 = ctx.r10.s64 + -14648;
	// addi r11,r11,-21896
	ctx.r11.s64 = ctx.r11.s64 + -21896;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,18712
	ctx.r3.s64 = ctx.r10.s64 + 18712;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8311770C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117720"))) PPC_WEAK_FUNC(sub_83117720);
PPC_FUNC_IMPL(__imp__sub_83117720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-10828
	ctx.r4.s64 = ctx.r10.s64 + -10828;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,17704
	ctx.r3.s64 = ctx.r10.s64 + 17704;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8311776C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117780"))) PPC_WEAK_FUNC(sub_83117780);
PPC_FUNC_IMPL(__imp__sub_83117780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r5,r10,17704
	ctx.r5.s64 = ctx.r10.s64 + 17704;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-12372
	ctx.r4.s64 = ctx.r10.s64 + -12372;
	// addi r11,r11,-21336
	ctx.r11.s64 = ctx.r11.s64 + -21336;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,15904
	ctx.r3.s64 = ctx.r10.s64 + 15904;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x831177D4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831177E8"))) PPC_WEAK_FUNC(sub_831177E8);
PPC_FUNC_IMPL(__imp__sub_831177E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-10804
	ctx.r4.s64 = ctx.r10.s64 + -10804;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,21232
	ctx.r3.s64 = ctx.r10.s64 + 21232;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83117834;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117848"))) PPC_WEAK_FUNC(sub_83117848);
PPC_FUNC_IMPL(__imp__sub_83117848) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-17496
	ctx.r4.s64 = ctx.r10.s64 + -17496;
	// addi r11,r11,-22956
	ctx.r11.s64 = ctx.r11.s64 + -22956;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,18316
	ctx.r3.s64 = ctx.r10.s64 + 18316;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83117898;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831178A8"))) PPC_WEAK_FUNC(sub_831178A8);
PPC_FUNC_IMPL(__imp__sub_831178A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r5,r10,21232
	ctx.r5.s64 = ctx.r10.s64 + 21232;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-17452
	ctx.r4.s64 = ctx.r10.s64 + -17452;
	// addi r11,r11,-21236
	ctx.r11.s64 = ctx.r11.s64 + -21236;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,27892
	ctx.r3.s64 = ctx.r10.s64 + 27892;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x831178FC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117910"))) PPC_WEAK_FUNC(sub_83117910);
PPC_FUNC_IMPL(__imp__sub_83117910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-10788
	ctx.r4.s64 = ctx.r10.s64 + -10788;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,15436
	ctx.r3.s64 = ctx.r10.s64 + 15436;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8311795C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117970"))) PPC_WEAK_FUNC(sub_83117970);
PPC_FUNC_IMPL(__imp__sub_83117970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-10760
	ctx.r4.s64 = ctx.r10.s64 + -10760;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,19612
	ctx.r3.s64 = ctx.r10.s64 + 19612;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x831179BC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831179D0"))) PPC_WEAK_FUNC(sub_831179D0);
PPC_FUNC_IMPL(__imp__sub_831179D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,15436
	ctx.r5.s64 = ctx.r10.s64 + 15436;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-12000
	ctx.r4.s64 = ctx.r10.s64 + -12000;
	// addi r11,r11,-21136
	ctx.r11.s64 = ctx.r11.s64 + -21136;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28360
	ctx.r3.s64 = ctx.r10.s64 + 28360;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83117A24;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117A38"))) PPC_WEAK_FUNC(sub_83117A38);
PPC_FUNC_IMPL(__imp__sub_83117A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r5,r10,19612
	ctx.r5.s64 = ctx.r10.s64 + 19612;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-11964
	ctx.r4.s64 = ctx.r10.s64 + -11964;
	// addi r11,r11,-21056
	ctx.r11.s64 = ctx.r11.s64 + -21056;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,19036
	ctx.r3.s64 = ctx.r10.s64 + 19036;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83117A8C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117AA0"))) PPC_WEAK_FUNC(sub_83117AA0);
PPC_FUNC_IMPL(__imp__sub_83117AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-10736
	ctx.r4.s64 = ctx.r10.s64 + -10736;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,26416
	ctx.r3.s64 = ctx.r10.s64 + 26416;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83117AEC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117B00"))) PPC_WEAK_FUNC(sub_83117B00);
PPC_FUNC_IMPL(__imp__sub_83117B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r5,r10,26416
	ctx.r5.s64 = ctx.r10.s64 + 26416;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-11528
	ctx.r4.s64 = ctx.r10.s64 + -11528;
	// addi r11,r11,-20976
	ctx.r11.s64 = ctx.r11.s64 + -20976;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,15256
	ctx.r3.s64 = ctx.r10.s64 + 15256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83117B54;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117B68"))) PPC_WEAK_FUNC(sub_83117B68);
PPC_FUNC_IMPL(__imp__sub_83117B68) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-16332
	ctx.r4.s64 = ctx.r10.s64 + -16332;
	// addi r11,r11,-20776
	ctx.r11.s64 = ctx.r11.s64 + -20776;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26200
	ctx.r3.s64 = ctx.r10.s64 + 26200;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83117BB8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117BC8"))) PPC_WEAK_FUNC(sub_83117BC8);
PPC_FUNC_IMPL(__imp__sub_83117BC8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-16288
	ctx.r4.s64 = ctx.r10.s64 + -16288;
	// addi r11,r11,-22316
	ctx.r11.s64 = ctx.r11.s64 + -22316;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,31024
	ctx.r3.s64 = ctx.r10.s64 + 31024;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83117C18;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117C28"))) PPC_WEAK_FUNC(sub_83117C28);
PPC_FUNC_IMPL(__imp__sub_83117C28) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-16256
	ctx.r4.s64 = ctx.r10.s64 + -16256;
	// addi r11,r11,-20576
	ctx.r11.s64 = ctx.r11.s64 + -20576;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,16948
	ctx.r3.s64 = ctx.r10.s64 + 16948;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83117C78;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117C88"))) PPC_WEAK_FUNC(sub_83117C88);
PPC_FUNC_IMPL(__imp__sub_83117C88) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-16220
	ctx.r4.s64 = ctx.r10.s64 + -16220;
	// addi r11,r11,-21916
	ctx.r11.s64 = ctx.r11.s64 + -21916;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,29764
	ctx.r3.s64 = ctx.r10.s64 + 29764;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83117CD8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117CE8"))) PPC_WEAK_FUNC(sub_83117CE8);
PPC_FUNC_IMPL(__imp__sub_83117CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-10720
	ctx.r4.s64 = ctx.r10.s64 + -10720;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,29332
	ctx.r3.s64 = ctx.r10.s64 + 29332;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83117D34;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117D48"))) PPC_WEAK_FUNC(sub_83117D48);
PPC_FUNC_IMPL(__imp__sub_83117D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,29332
	ctx.r5.s64 = ctx.r10.s64 + 29332;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-11360
	ctx.r4.s64 = ctx.r10.s64 + -11360;
	// addi r11,r11,-21396
	ctx.r11.s64 = ctx.r11.s64 + -21396;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,30232
	ctx.r3.s64 = ctx.r10.s64 + 30232;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83117D9C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117DB0"))) PPC_WEAK_FUNC(sub_83117DB0);
PPC_FUNC_IMPL(__imp__sub_83117DB0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-14512
	ctx.r4.s64 = ctx.r10.s64 + -14512;
	// addi r11,r11,-21196
	ctx.r11.s64 = ctx.r11.s64 + -21196;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,20116
	ctx.r3.s64 = ctx.r10.s64 + 20116;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83117E00;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117E10"))) PPC_WEAK_FUNC(sub_83117E10);
PPC_FUNC_IMPL(__imp__sub_83117E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-14464
	ctx.r4.s64 = ctx.r10.s64 + -14464;
	// addi r11,r11,-20396
	ctx.r11.s64 = ctx.r11.s64 + -20396;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,19828
	ctx.r3.s64 = ctx.r10.s64 + 19828;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83117E64;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117E78"))) PPC_WEAK_FUNC(sub_83117E78);
PPC_FUNC_IMPL(__imp__sub_83117E78) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-17272
	ctx.r4.s64 = ctx.r10.s64 + -17272;
	// addi r11,r11,-20376
	ctx.r11.s64 = ctx.r11.s64 + -20376;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,28144
	ctx.r3.s64 = ctx.r10.s64 + 28144;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83117EC8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117ED8"))) PPC_WEAK_FUNC(sub_83117ED8);
PPC_FUNC_IMPL(__imp__sub_83117ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,19828
	ctx.r5.s64 = ctx.r10.s64 + 19828;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-17212
	ctx.r4.s64 = ctx.r10.s64 + -17212;
	// addi r11,r11,-20316
	ctx.r11.s64 = ctx.r11.s64 + -20316;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,20260
	ctx.r3.s64 = ctx.r10.s64 + 20260;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83117F2C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117F40"))) PPC_WEAK_FUNC(sub_83117F40);
PPC_FUNC_IMPL(__imp__sub_83117F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-10700
	ctx.r4.s64 = ctx.r10.s64 + -10700;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,30628
	ctx.r3.s64 = ctx.r10.s64 + 30628;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83117F8C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117FA0"))) PPC_WEAK_FUNC(sub_83117FA0);
PPC_FUNC_IMPL(__imp__sub_83117FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r5,r10,30628
	ctx.r5.s64 = ctx.r10.s64 + 30628;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-11032
	ctx.r4.s64 = ctx.r10.s64 + -11032;
	// addi r11,r11,-20296
	ctx.r11.s64 = ctx.r11.s64 + -20296;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,21196
	ctx.r3.s64 = ctx.r10.s64 + 21196;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83117FF4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118008"))) PPC_WEAK_FUNC(sub_83118008);
PPC_FUNC_IMPL(__imp__sub_83118008) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-13844
	ctx.r4.s64 = ctx.r10.s64 + -13844;
	// addi r11,r11,-20156
	ctx.r11.s64 = ctx.r11.s64 + -20156;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,24832
	ctx.r3.s64 = ctx.r10.s64 + 24832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83118058;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118068"))) PPC_WEAK_FUNC(sub_83118068);
PPC_FUNC_IMPL(__imp__sub_83118068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-13828
	ctx.r4.s64 = ctx.r10.s64 + -13828;
	// addi r11,r11,-20116
	ctx.r11.s64 = ctx.r11.s64 + -20116;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,22456
	ctx.r3.s64 = ctx.r10.s64 + 22456;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x831180BC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831180D0"))) PPC_WEAK_FUNC(sub_831180D0);
PPC_FUNC_IMPL(__imp__sub_831180D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-13808
	ctx.r4.s64 = ctx.r10.s64 + -13808;
	// addi r11,r11,-20056
	ctx.r11.s64 = ctx.r11.s64 + -20056;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,17164
	ctx.r3.s64 = ctx.r10.s64 + 17164;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83118124;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118138"))) PPC_WEAK_FUNC(sub_83118138);
PPC_FUNC_IMPL(__imp__sub_83118138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-10676
	ctx.r4.s64 = ctx.r10.s64 + -10676;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,18532
	ctx.r3.s64 = ctx.r10.s64 + 18532;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83118184;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118198"))) PPC_WEAK_FUNC(sub_83118198);
PPC_FUNC_IMPL(__imp__sub_83118198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,18532
	ctx.r5.s64 = ctx.r10.s64 + 18532;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-10860
	ctx.r4.s64 = ctx.r10.s64 + -10860;
	// addi r11,r11,-19996
	ctx.r11.s64 = ctx.r11.s64 + -19996;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,26524
	ctx.r3.s64 = ctx.r10.s64 + 26524;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x831181EC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118200"))) PPC_WEAK_FUNC(sub_83118200);
PPC_FUNC_IMPL(__imp__sub_83118200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-10620
	ctx.r4.s64 = ctx.r10.s64 + -10620;
	// addi r11,r11,-19936
	ctx.r11.s64 = ctx.r11.s64 + -19936;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,25588
	ctx.r3.s64 = ctx.r10.s64 + 25588;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x83118254;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118268"))) PPC_WEAK_FUNC(sub_83118268);
PPC_FUNC_IMPL(__imp__sub_83118268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r5,r10,23140
	ctx.r5.s64 = ctx.r10.s64 + 23140;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,-19916
	ctx.r11.s64 = ctx.r11.s64 + -19916;
	// addi r4,r10,-14220
	ctx.r4.s64 = ctx.r10.s64 + -14220;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r10,15760
	ctx.r3.s64 = ctx.r10.s64 + 15760;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x831182B8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831182C8"))) PPC_WEAK_FUNC(sub_831182C8);
PPC_FUNC_IMPL(__imp__sub_831182C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r5,r10,25588
	ctx.r5.s64 = ctx.r10.s64 + 25588;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-14192
	ctx.r4.s64 = ctx.r10.s64 + -14192;
	// addi r11,r11,-19896
	ctx.r11.s64 = ctx.r11.s64 + -19896;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23176
	ctx.r3.s64 = ctx.r10.s64 + 23176;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8311831C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118330"))) PPC_WEAK_FUNC(sub_83118330);
PPC_FUNC_IMPL(__imp__sub_83118330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r3,r11,-8160
	ctx.r3.s64 = ctx.r11.s64 + -8160;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83118340"))) PPC_WEAK_FUNC(sub_83118340);
PPC_FUNC_IMPL(__imp__sub_83118340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r3,r11,-8152
	ctx.r3.s64 = ctx.r11.s64 + -8152;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83118350"))) PPC_WEAK_FUNC(sub_83118350);
PPC_FUNC_IMPL(__imp__sub_83118350) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f1,16888(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16888);
	// bl 0x82a55c68
	ctx.lr = 0x83118368;
	sub_82A55C68(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// lfd f0,2600(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 2600);
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// stfd f0,31392(r9)
	PPC_STORE_U64(ctx.r9.u32 + 31392, ctx.f0.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118390"))) PPC_WEAK_FUNC(sub_83118390);
PPC_FUNC_IMPL(__imp__sub_83118390) {
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
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,31512
	ctx.r3.s64 = ctx.r11.s64 + 31512;
	// bl 0x82ec3d30
	ctx.lr = 0x831183A8;
	sub_82EC3D30(ctx, base);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r3,r11,-8144
	ctx.r3.s64 = ctx.r11.s64 + -8144;
	// bl 0x82a4c758
	ctx.lr = 0x831183B4;
	sub_82A4C758(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831183C8"))) PPC_WEAK_FUNC(sub_831183C8);
PPC_FUNC_IMPL(__imp__sub_831183C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r3,r11,-8128
	ctx.r3.s64 = ctx.r11.s64 + -8128;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831183D8"))) PPC_WEAK_FUNC(sub_831183D8);
PPC_FUNC_IMPL(__imp__sub_831183D8) {
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
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,31696
	ctx.r3.s64 = ctx.r11.s64 + 31696;
	// bl 0x82ec3d30
	ctx.lr = 0x831183F0;
	sub_82EC3D30(ctx, base);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r3,r11,-8048
	ctx.r3.s64 = ctx.r11.s64 + -8048;
	// bl 0x82a4c758
	ctx.lr = 0x831183FC;
	sub_82A4C758(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118410"))) PPC_WEAK_FUNC(sub_83118410);
PPC_FUNC_IMPL(__imp__sub_83118410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r3,r11,-8032
	ctx.r3.s64 = ctx.r11.s64 + -8032;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83118420"))) PPC_WEAK_FUNC(sub_83118420);
PPC_FUNC_IMPL(__imp__sub_83118420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r3,r11,-8016
	ctx.r3.s64 = ctx.r11.s64 + -8016;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83118430"))) PPC_WEAK_FUNC(sub_83118430);
PPC_FUNC_IMPL(__imp__sub_83118430) {
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
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,31736
	ctx.r3.s64 = ctx.r11.s64 + 31736;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8276fb38
	ctx.lr = 0x83118450;
	sub_8276FB38(ctx, base);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r3,r11,-7936
	ctx.r3.s64 = ctx.r11.s64 + -7936;
	// bl 0x82a4c758
	ctx.lr = 0x8311845C;
	sub_82A4C758(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118470"))) PPC_WEAK_FUNC(sub_83118470);
PPC_FUNC_IMPL(__imp__sub_83118470) {
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
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,31708
	ctx.r3.s64 = ctx.r11.s64 + 31708;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8276fb38
	ctx.lr = 0x83118490;
	sub_8276FB38(ctx, base);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r3,r11,-7912
	ctx.r3.s64 = ctx.r11.s64 + -7912;
	// bl 0x82a4c758
	ctx.lr = 0x8311849C;
	sub_82A4C758(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831184B0"))) PPC_WEAK_FUNC(sub_831184B0);
PPC_FUNC_IMPL(__imp__sub_831184B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r3,r11,-7872
	ctx.r3.s64 = ctx.r11.s64 + -7872;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831184C0"))) PPC_WEAK_FUNC(sub_831184C0);
PPC_FUNC_IMPL(__imp__sub_831184C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r3,r11,-7792
	ctx.r3.s64 = ctx.r11.s64 + -7792;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831184D0"))) PPC_WEAK_FUNC(sub_831184D0);
PPC_FUNC_IMPL(__imp__sub_831184D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r3,r11,-7712
	ctx.r3.s64 = ctx.r11.s64 + -7712;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831184E0"))) PPC_WEAK_FUNC(sub_831184E0);
PPC_FUNC_IMPL(__imp__sub_831184E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r3,r11,-7632
	ctx.r3.s64 = ctx.r11.s64 + -7632;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831184F0"))) PPC_WEAK_FUNC(sub_831184F0);
PPC_FUNC_IMPL(__imp__sub_831184F0) {
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
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,31848
	ctx.r3.s64 = ctx.r11.s64 + 31848;
	// bl 0x82ef2610
	ctx.lr = 0x83118508;
	sub_82EF2610(ctx, base);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r3,r11,-7888
	ctx.r3.s64 = ctx.r11.s64 + -7888;
	// bl 0x82a4c758
	ctx.lr = 0x83118514;
	sub_82A4C758(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118528"))) PPC_WEAK_FUNC(sub_83118528);
PPC_FUNC_IMPL(__imp__sub_83118528) {
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
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,31888
	ctx.r3.s64 = ctx.r11.s64 + 31888;
	// bl 0x82ed6c30
	ctx.lr = 0x83118540;
	sub_82ED6C30(ctx, base);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r3,r11,-7552
	ctx.r3.s64 = ctx.r11.s64 + -7552;
	// bl 0x82a4c758
	ctx.lr = 0x8311854C;
	sub_82A4C758(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118560"))) PPC_WEAK_FUNC(sub_83118560);
PPC_FUNC_IMPL(__imp__sub_83118560) {
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
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,32020
	ctx.r3.s64 = ctx.r11.s64 + 32020;
	// bl 0x82eefa68
	ctx.lr = 0x83118578;
	sub_82EEFA68(ctx, base);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r3,r11,-7448
	ctx.r3.s64 = ctx.r11.s64 + -7448;
	// bl 0x82a4c758
	ctx.lr = 0x83118584;
	sub_82A4C758(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118598"))) PPC_WEAK_FUNC(sub_83118598);
PPC_FUNC_IMPL(__imp__sub_83118598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r3,r11,-7432
	ctx.r3.s64 = ctx.r11.s64 + -7432;
	// b 0x82a4c758
	sub_82A4C758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831185A8"))) PPC_WEAK_FUNC(sub_831185A8);
PPC_FUNC_IMPL(__imp__sub_831185A8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r10,-16828
	ctx.r4.s64 = ctx.r10.s64 + -16828;
	// addi r11,r11,10512
	ctx.r11.s64 = ctx.r11.s64 + 10512;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,32576
	ctx.r3.s64 = ctx.r10.s64 + 32576;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,36
	ctx.r6.s64 = 36;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x831185F8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118608"))) PPC_WEAK_FUNC(sub_83118608);
PPC_FUNC_IMPL(__imp__sub_83118608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118628"))) PPC_WEAK_FUNC(sub_83118628);
PPC_FUNC_IMPL(__imp__sub_83118628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r9,r10,10652
	ctx.r9.s64 = ctx.r10.s64 + 10652;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r4,r10,-15580
	ctx.r4.s64 = ctx.r10.s64 + -15580;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,32612
	ctx.r3.s64 = ctx.r10.s64 + 32612;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,20
	ctx.r6.s64 = 20;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x8311867C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118690"))) PPC_WEAK_FUNC(sub_83118690);
PPC_FUNC_IMPL(__imp__sub_83118690) {
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
	// bl 0x8312ec2c
	ctx.lr = 0x831186A0;
	sub_8312EC2C(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r3,32648(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32648, ctx.r3.u32);
	// addi r3,r11,-7392
	ctx.r3.s64 = ctx.r11.s64 + -7392;
	// bl 0x82a4c758
	ctx.lr = 0x831186B4;
	sub_82A4C758(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831186C8"))) PPC_WEAK_FUNC(sub_831186C8);
PPC_FUNC_IMPL(__imp__sub_831186C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,32656
	ctx.r31.s64 = ctx.r11.s64 + 32656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312f23c
	ctx.lr = 0x831186EC;
	sub_8312F23C(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r3,r10,-7376
	ctx.r3.s64 = ctx.r10.s64 + -7376;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// bl 0x82a4c758
	ctx.lr = 0x83118700;
	sub_82A4C758(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118718"))) PPC_WEAK_FUNC(sub_83118718);
PPC_FUNC_IMPL(__imp__sub_83118718) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r11,r11,340
	ctx.r11.s64 = ctx.r11.s64 + 340;
	// lwz r9,-28464(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28464);
	// stw r11,-28464(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28464, ctx.r11.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118738"))) PPC_WEAK_FUNC(sub_83118738);
PPC_FUNC_IMPL(__imp__sub_83118738) {
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
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r3,r11,-32675
	ctx.r3.s64 = ctx.r11.s64 + -32675;
	// bl 0x82ec3d30
	ctx.lr = 0x83118750;
	sub_82EC3D30(ctx, base);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r3,r11,-7360
	ctx.r3.s64 = ctx.r11.s64 + -7360;
	// bl 0x82a4c758
	ctx.lr = 0x8311875C;
	sub_82A4C758(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118770"))) PPC_WEAK_FUNC(sub_83118770);
PPC_FUNC_IMPL(__imp__sub_83118770) {
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
	// bl 0x82a52050
	ctx.lr = 0x83118780;
	sub_82A52050(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// addi r3,r11,32724
	ctx.r3.s64 = ctx.r11.s64 + 32724;
	// bl 0x82a406c0
	ctx.lr = 0x83118790;
	sub_82A406C0(ctx, base);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r3,r11,-7296
	ctx.r3.s64 = ctx.r11.s64 + -7296;
	// bl 0x82a4c758
	ctx.lr = 0x8311879C;
	sub_82A4C758(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831187B0"))) PPC_WEAK_FUNC(sub_831187B0);
PPC_FUNC_IMPL(__imp__sub_831187B0) {
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
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r4,r11,32724
	ctx.r4.s64 = ctx.r11.s64 + 32724;
	// addi r3,r10,-32732
	ctx.r3.s64 = ctx.r10.s64 + -32732;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82a40650
	ctx.lr = 0x831187D8;
	sub_82A40650(ctx, base);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r3,r11,-7344
	ctx.r3.s64 = ctx.r11.s64 + -7344;
	// bl 0x82a4c758
	ctx.lr = 0x831187E4;
	sub_82A4C758(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831187F8"))) PPC_WEAK_FUNC(sub_831187F8);
PPC_FUNC_IMPL(__imp__sub_831187F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31956
	ctx.r8.s64 = -2094268416;
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r11,r8,-32732
	ctx.r11.s64 = ctx.r8.s64 + -32732;
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// addi r6,r11,44
	ctx.r6.s64 = ctx.r11.s64 + 44;
	// lwz r10,-32732(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32732);
	// lwz r9,31628(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31628);
	// stw r11,31632(r7)
	PPC_STORE_U32(ctx.r7.u32 + 31632, ctx.r11.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r9,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r9.u32);
	// lwz r10,-32732(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32732);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118840"))) PPC_WEAK_FUNC(sub_83118840);
PPC_FUNC_IMPL(__imp__sub_83118840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32620(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32620, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118858"))) PPC_WEAK_FUNC(sub_83118858);
PPC_FUNC_IMPL(__imp__sub_83118858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32628(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32628, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118870"))) PPC_WEAK_FUNC(sub_83118870);
PPC_FUNC_IMPL(__imp__sub_83118870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32644(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32644, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118888"))) PPC_WEAK_FUNC(sub_83118888);
PPC_FUNC_IMPL(__imp__sub_83118888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32636(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32636, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831188A0"))) PPC_WEAK_FUNC(sub_831188A0);
PPC_FUNC_IMPL(__imp__sub_831188A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32612(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32612, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831188B8"))) PPC_WEAK_FUNC(sub_831188B8);
PPC_FUNC_IMPL(__imp__sub_831188B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32668(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32668, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831188D0"))) PPC_WEAK_FUNC(sub_831188D0);
PPC_FUNC_IMPL(__imp__sub_831188D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32592(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32592, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831188E8"))) PPC_WEAK_FUNC(sub_831188E8);
PPC_FUNC_IMPL(__imp__sub_831188E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32656(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32656, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118900"))) PPC_WEAK_FUNC(sub_83118900);
PPC_FUNC_IMPL(__imp__sub_83118900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118918"))) PPC_WEAK_FUNC(sub_83118918);
PPC_FUNC_IMPL(__imp__sub_83118918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32600(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32600, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118930"))) PPC_WEAK_FUNC(sub_83118930);
PPC_FUNC_IMPL(__imp__sub_83118930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32608(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32608, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118948"))) PPC_WEAK_FUNC(sub_83118948);
PPC_FUNC_IMPL(__imp__sub_83118948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32556(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32556, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118960"))) PPC_WEAK_FUNC(sub_83118960);
PPC_FUNC_IMPL(__imp__sub_83118960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32564(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32564, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118978"))) PPC_WEAK_FUNC(sub_83118978);
PPC_FUNC_IMPL(__imp__sub_83118978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32572(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32572, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118990"))) PPC_WEAK_FUNC(sub_83118990);
PPC_FUNC_IMPL(__imp__sub_83118990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32580(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32580, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831189A8"))) PPC_WEAK_FUNC(sub_831189A8);
PPC_FUNC_IMPL(__imp__sub_831189A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32548(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32548, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831189C0"))) PPC_WEAK_FUNC(sub_831189C0);
PPC_FUNC_IMPL(__imp__sub_831189C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32492(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32492, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831189D8"))) PPC_WEAK_FUNC(sub_831189D8);
PPC_FUNC_IMPL(__imp__sub_831189D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32476(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32476, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831189F0"))) PPC_WEAK_FUNC(sub_831189F0);
PPC_FUNC_IMPL(__imp__sub_831189F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32484(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32484, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118A08"))) PPC_WEAK_FUNC(sub_83118A08);
PPC_FUNC_IMPL(__imp__sub_83118A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32504(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32504, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118A20"))) PPC_WEAK_FUNC(sub_83118A20);
PPC_FUNC_IMPL(__imp__sub_83118A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32488(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32488, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118A38"))) PPC_WEAK_FUNC(sub_83118A38);
PPC_FUNC_IMPL(__imp__sub_83118A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32392(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32392, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118A50"))) PPC_WEAK_FUNC(sub_83118A50);
PPC_FUNC_IMPL(__imp__sub_83118A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32400(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32400, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118A68"))) PPC_WEAK_FUNC(sub_83118A68);
PPC_FUNC_IMPL(__imp__sub_83118A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32456(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32456, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118A80"))) PPC_WEAK_FUNC(sub_83118A80);
PPC_FUNC_IMPL(__imp__sub_83118A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32408(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32408, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118A98"))) PPC_WEAK_FUNC(sub_83118A98);
PPC_FUNC_IMPL(__imp__sub_83118A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32432(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32432, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118AB0"))) PPC_WEAK_FUNC(sub_83118AB0);
PPC_FUNC_IMPL(__imp__sub_83118AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32424(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32424, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118AC8"))) PPC_WEAK_FUNC(sub_83118AC8);
PPC_FUNC_IMPL(__imp__sub_83118AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32416(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32416, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118AE0"))) PPC_WEAK_FUNC(sub_83118AE0);
PPC_FUNC_IMPL(__imp__sub_83118AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32440(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32440, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118AF8"))) PPC_WEAK_FUNC(sub_83118AF8);
PPC_FUNC_IMPL(__imp__sub_83118AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32448(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32448, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118B10"))) PPC_WEAK_FUNC(sub_83118B10);
PPC_FUNC_IMPL(__imp__sub_83118B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-28000(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28000, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118B28"))) PPC_WEAK_FUNC(sub_83118B28);
PPC_FUNC_IMPL(__imp__sub_83118B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32364(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32364, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118B40"))) PPC_WEAK_FUNC(sub_83118B40);
PPC_FUNC_IMPL(__imp__sub_83118B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32356(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32356, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118B58"))) PPC_WEAK_FUNC(sub_83118B58);
PPC_FUNC_IMPL(__imp__sub_83118B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32348(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32348, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118B70"))) PPC_WEAK_FUNC(sub_83118B70);
PPC_FUNC_IMPL(__imp__sub_83118B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-31892(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31892, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118B88"))) PPC_WEAK_FUNC(sub_83118B88);
PPC_FUNC_IMPL(__imp__sub_83118B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-31900(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31900, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118BA0"))) PPC_WEAK_FUNC(sub_83118BA0);
PPC_FUNC_IMPL(__imp__sub_83118BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-31916(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31916, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118BB8"))) PPC_WEAK_FUNC(sub_83118BB8);
PPC_FUNC_IMPL(__imp__sub_83118BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-31908(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31908, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118BD0"))) PPC_WEAK_FUNC(sub_83118BD0);
PPC_FUNC_IMPL(__imp__sub_83118BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-31884(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31884, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118BE8"))) PPC_WEAK_FUNC(sub_83118BE8);
PPC_FUNC_IMPL(__imp__sub_83118BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32268(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32268, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118C00"))) PPC_WEAK_FUNC(sub_83118C00);
PPC_FUNC_IMPL(__imp__sub_83118C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32252(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32252, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118C18"))) PPC_WEAK_FUNC(sub_83118C18);
PPC_FUNC_IMPL(__imp__sub_83118C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32244(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32244, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118C30"))) PPC_WEAK_FUNC(sub_83118C30);
PPC_FUNC_IMPL(__imp__sub_83118C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32212(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32212, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118C48"))) PPC_WEAK_FUNC(sub_83118C48);
PPC_FUNC_IMPL(__imp__sub_83118C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32204(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32204, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118C60"))) PPC_WEAK_FUNC(sub_83118C60);
PPC_FUNC_IMPL(__imp__sub_83118C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32196(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32196, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118C78"))) PPC_WEAK_FUNC(sub_83118C78);
PPC_FUNC_IMPL(__imp__sub_83118C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32140(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32140, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118C90"))) PPC_WEAK_FUNC(sub_83118C90);
PPC_FUNC_IMPL(__imp__sub_83118C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32156(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32156, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118CA8"))) PPC_WEAK_FUNC(sub_83118CA8);
PPC_FUNC_IMPL(__imp__sub_83118CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32172(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32172, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118CC0"))) PPC_WEAK_FUNC(sub_83118CC0);
PPC_FUNC_IMPL(__imp__sub_83118CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32164(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32164, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118CD8"))) PPC_WEAK_FUNC(sub_83118CD8);
PPC_FUNC_IMPL(__imp__sub_83118CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32180(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32180, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118CF0"))) PPC_WEAK_FUNC(sub_83118CF0);
PPC_FUNC_IMPL(__imp__sub_83118CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32148(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32148, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118D08"))) PPC_WEAK_FUNC(sub_83118D08);
PPC_FUNC_IMPL(__imp__sub_83118D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-31924(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31924, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118D20"))) PPC_WEAK_FUNC(sub_83118D20);
PPC_FUNC_IMPL(__imp__sub_83118D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32132(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32132, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118D38"))) PPC_WEAK_FUNC(sub_83118D38);
PPC_FUNC_IMPL(__imp__sub_83118D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32124(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32124, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118D50"))) PPC_WEAK_FUNC(sub_83118D50);
PPC_FUNC_IMPL(__imp__sub_83118D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32116(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32116, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118D68"))) PPC_WEAK_FUNC(sub_83118D68);
PPC_FUNC_IMPL(__imp__sub_83118D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32340(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32340, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118D80"))) PPC_WEAK_FUNC(sub_83118D80);
PPC_FUNC_IMPL(__imp__sub_83118D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32332(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32332, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118D98"))) PPC_WEAK_FUNC(sub_83118D98);
PPC_FUNC_IMPL(__imp__sub_83118D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32324(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32324, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118DB0"))) PPC_WEAK_FUNC(sub_83118DB0);
PPC_FUNC_IMPL(__imp__sub_83118DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32316(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32316, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118DC8"))) PPC_WEAK_FUNC(sub_83118DC8);
PPC_FUNC_IMPL(__imp__sub_83118DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32308(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32308, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118DE0"))) PPC_WEAK_FUNC(sub_83118DE0);
PPC_FUNC_IMPL(__imp__sub_83118DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32300(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32300, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118DF8"))) PPC_WEAK_FUNC(sub_83118DF8);
PPC_FUNC_IMPL(__imp__sub_83118DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32292(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32292, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118E10"))) PPC_WEAK_FUNC(sub_83118E10);
PPC_FUNC_IMPL(__imp__sub_83118E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32108(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32108, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118E28"))) PPC_WEAK_FUNC(sub_83118E28);
PPC_FUNC_IMPL(__imp__sub_83118E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32100(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32100, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118E40"))) PPC_WEAK_FUNC(sub_83118E40);
PPC_FUNC_IMPL(__imp__sub_83118E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32092(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32092, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118E58"))) PPC_WEAK_FUNC(sub_83118E58);
PPC_FUNC_IMPL(__imp__sub_83118E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32084(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32084, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118E70"))) PPC_WEAK_FUNC(sub_83118E70);
PPC_FUNC_IMPL(__imp__sub_83118E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32260(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32260, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118E88"))) PPC_WEAK_FUNC(sub_83118E88);
PPC_FUNC_IMPL(__imp__sub_83118E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32076(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32076, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118EA0"))) PPC_WEAK_FUNC(sub_83118EA0);
PPC_FUNC_IMPL(__imp__sub_83118EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32068(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32068, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118EB8"))) PPC_WEAK_FUNC(sub_83118EB8);
PPC_FUNC_IMPL(__imp__sub_83118EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32284(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32284, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118ED0"))) PPC_WEAK_FUNC(sub_83118ED0);
PPC_FUNC_IMPL(__imp__sub_83118ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32060(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32060, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118EE8"))) PPC_WEAK_FUNC(sub_83118EE8);
PPC_FUNC_IMPL(__imp__sub_83118EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r11,r11,14176
	ctx.r11.s64 = ctx.r11.s64 + 14176;
	// stw r11,-32052(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32052, ctx.r11.u32);
	// blr 
	return;
}

