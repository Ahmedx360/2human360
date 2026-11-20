#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_830F6F70"))) PPC_WEAK_FUNC(sub_830F6F70);
PPC_FUNC_IMPL(__imp__sub_830F6F70) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-13844
	ctx.r4.s64 = ctx.r10.s64 + -13844;
	// addi r11,r11,8420
	ctx.r11.s64 = ctx.r11.s64 + 8420;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-24308
	ctx.r3.s64 = ctx.r10.s64 + -24308;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F6FC0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F6FD0"))) PPC_WEAK_FUNC(sub_830F6FD0);
PPC_FUNC_IMPL(__imp__sub_830F6FD0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-22184
	ctx.r5.s64 = ctx.r10.s64 + -22184;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-13828
	ctx.r4.s64 = ctx.r10.s64 + -13828;
	// addi r11,r11,8460
	ctx.r11.s64 = ctx.r11.s64 + 8460;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-30464
	ctx.r3.s64 = ctx.r10.s64 + -30464;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F7024;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7038"))) PPC_WEAK_FUNC(sub_830F7038);
PPC_FUNC_IMPL(__imp__sub_830F7038) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-22184
	ctx.r5.s64 = ctx.r10.s64 + -22184;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-13808
	ctx.r4.s64 = ctx.r10.s64 + -13808;
	// addi r11,r11,8520
	ctx.r11.s64 = ctx.r11.s64 + 8520;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-20276
	ctx.r3.s64 = ctx.r10.s64 + -20276;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F708C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F70A0"))) PPC_WEAK_FUNC(sub_830F70A0);
PPC_FUNC_IMPL(__imp__sub_830F70A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-22184
	ctx.r5.s64 = ctx.r10.s64 + -22184;
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
	// addi r3,r10,-21500
	ctx.r3.s64 = ctx.r10.s64 + -21500;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F70EC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7100"))) PPC_WEAK_FUNC(sub_830F7100);
PPC_FUNC_IMPL(__imp__sub_830F7100) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-21500
	ctx.r5.s64 = ctx.r10.s64 + -21500;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-10860
	ctx.r4.s64 = ctx.r10.s64 + -10860;
	// addi r11,r11,8580
	ctx.r11.s64 = ctx.r11.s64 + 8580;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-19736
	ctx.r3.s64 = ctx.r10.s64 + -19736;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F7154;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7168"))) PPC_WEAK_FUNC(sub_830F7168);
PPC_FUNC_IMPL(__imp__sub_830F7168) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-22184
	ctx.r5.s64 = ctx.r10.s64 + -22184;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-10620
	ctx.r4.s64 = ctx.r10.s64 + -10620;
	// addi r11,r11,8640
	ctx.r11.s64 = ctx.r11.s64 + 8640;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-28376
	ctx.r3.s64 = ctx.r10.s64 + -28376;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F71BC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F71D0"))) PPC_WEAK_FUNC(sub_830F71D0);
PPC_FUNC_IMPL(__imp__sub_830F71D0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r5,r10,-22184
	ctx.r5.s64 = ctx.r10.s64 + -22184;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,8660
	ctx.r11.s64 = ctx.r11.s64 + 8660;
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
	// addi r3,r10,-21644
	ctx.r3.s64 = ctx.r10.s64 + -21644;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830F7220;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7230"))) PPC_WEAK_FUNC(sub_830F7230);
PPC_FUNC_IMPL(__imp__sub_830F7230) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-28376
	ctx.r5.s64 = ctx.r10.s64 + -28376;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-14192
	ctx.r4.s64 = ctx.r10.s64 + -14192;
	// addi r11,r11,8680
	ctx.r11.s64 = ctx.r11.s64 + 8680;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-23228
	ctx.r3.s64 = ctx.r10.s64 + -23228;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F7284;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7298"))) PPC_WEAK_FUNC(sub_830F7298);
PPC_FUNC_IMPL(__imp__sub_830F7298) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-3704
	ctx.r4.s64 = ctx.r10.s64 + -3704;
	// addi r11,r11,14192
	ctx.r11.s64 = ctx.r11.s64 + 14192;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-5084
	ctx.r3.s64 = ctx.r10.s64 + -5084;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F72E8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F72F8"))) PPC_WEAK_FUNC(sub_830F72F8);
PPC_FUNC_IMPL(__imp__sub_830F72F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r10,r10,-23284
	ctx.r10.s64 = ctx.r10.s64 + -23284;
	// lwz r11,14292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14292);
	// stw r11,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7310"))) PPC_WEAK_FUNC(sub_830F7310);
PPC_FUNC_IMPL(__imp__sub_830F7310) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,23560
	ctx.r9.s64 = ctx.r10.s64 + 23560;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r4,r10,-3680
	ctx.r4.s64 = ctx.r10.s64 + -3680;
	// addi r11,r11,-23284
	ctx.r11.s64 = ctx.r11.s64 + -23284;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-9836
	ctx.r3.s64 = ctx.r10.s64 + -9836;
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
	ctx.lr = 0x830F7364;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7378"))) PPC_WEAK_FUNC(sub_830F7378);
PPC_FUNC_IMPL(__imp__sub_830F7378) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,596
	ctx.r4.s64 = ctx.r10.s64 + 596;
	// addi r11,r11,14296
	ctx.r11.s64 = ctx.r11.s64 + 14296;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3896
	ctx.r3.s64 = ctx.r10.s64 + -3896;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F73C8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F73D8"))) PPC_WEAK_FUNC(sub_830F73D8);
PPC_FUNC_IMPL(__imp__sub_830F73D8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,624
	ctx.r4.s64 = ctx.r10.s64 + 624;
	// addi r11,r11,14336
	ctx.r11.s64 = ctx.r11.s64 + 14336;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3140
	ctx.r3.s64 = ctx.r10.s64 + -3140;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F7428;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7438"))) PPC_WEAK_FUNC(sub_830F7438);
PPC_FUNC_IMPL(__imp__sub_830F7438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r10,r10,-19848
	ctx.r10.s64 = ctx.r10.s64 + -19848;
	// lwz r11,14376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14376);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7450"))) PPC_WEAK_FUNC(sub_830F7450);
PPC_FUNC_IMPL(__imp__sub_830F7450) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,23604
	ctx.r9.s64 = ctx.r10.s64 + 23604;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r5,r10,-7424
	ctx.r5.s64 = ctx.r10.s64 + -7424;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-19848
	ctx.r11.s64 = ctx.r11.s64 + -19848;
	// addi r4,r10,-8296
	ctx.r4.s64 = ctx.r10.s64 + -8296;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-14228
	ctx.r3.s64 = ctx.r10.s64 + -14228;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830F74A8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F74B8"))) PPC_WEAK_FUNC(sub_830F74B8);
PPC_FUNC_IMPL(__imp__sub_830F74B8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,644
	ctx.r4.s64 = ctx.r10.s64 + 644;
	// addi r11,r11,14400
	ctx.r11.s64 = ctx.r11.s64 + 14400;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-4976
	ctx.r3.s64 = ctx.r10.s64 + -4976;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F7508;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7518"))) PPC_WEAK_FUNC(sub_830F7518);
PPC_FUNC_IMPL(__imp__sub_830F7518) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r5,r10,-14228
	ctx.r5.s64 = ctx.r10.s64 + -14228;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,700
	ctx.r4.s64 = ctx.r10.s64 + 700;
	// addi r11,r11,14520
	ctx.r11.s64 = ctx.r11.s64 + 14520;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-2492
	ctx.r3.s64 = ctx.r10.s64 + -2492;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F756C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7580"))) PPC_WEAK_FUNC(sub_830F7580);
PPC_FUNC_IMPL(__imp__sub_830F7580) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-14228
	ctx.r5.s64 = ctx.r10.s64 + -14228;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,736
	ctx.r4.s64 = ctx.r10.s64 + 736;
	// addi r11,r11,14380
	ctx.r11.s64 = ctx.r11.s64 + 14380;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-13400
	ctx.r3.s64 = ctx.r10.s64 + -13400;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F75D4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F75E8"))) PPC_WEAK_FUNC(sub_830F75E8);
PPC_FUNC_IMPL(__imp__sub_830F75E8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,768
	ctx.r4.s64 = ctx.r10.s64 + 768;
	// addi r11,r11,14760
	ctx.r11.s64 = ctx.r11.s64 + 14760;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-6632
	ctx.r3.s64 = ctx.r10.s64 + -6632;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F7638;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7648"))) PPC_WEAK_FUNC(sub_830F7648);
PPC_FUNC_IMPL(__imp__sub_830F7648) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-14228
	ctx.r5.s64 = ctx.r10.s64 + -14228;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,816
	ctx.r4.s64 = ctx.r10.s64 + 816;
	// addi r11,r11,14880
	ctx.r11.s64 = ctx.r11.s64 + 14880;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-4184
	ctx.r3.s64 = ctx.r10.s64 + -4184;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F769C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F76B0"))) PPC_WEAK_FUNC(sub_830F76B0);
PPC_FUNC_IMPL(__imp__sub_830F76B0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,844
	ctx.r4.s64 = ctx.r10.s64 + 844;
	// addi r11,r11,15080
	ctx.r11.s64 = ctx.r11.s64 + 15080;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-11528
	ctx.r3.s64 = ctx.r10.s64 + -11528;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F7700;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7710"))) PPC_WEAK_FUNC(sub_830F7710);
PPC_FUNC_IMPL(__imp__sub_830F7710) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-3432
	ctx.r4.s64 = ctx.r10.s64 + -3432;
	// addi r11,r11,15104
	ctx.r11.s64 = ctx.r11.s64 + 15104;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-5768
	ctx.r3.s64 = ctx.r10.s64 + -5768;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F7760;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7770"))) PPC_WEAK_FUNC(sub_830F7770);
PPC_FUNC_IMPL(__imp__sub_830F7770) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,23640
	ctx.r9.s64 = ctx.r10.s64 + 23640;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r5,r10,-7424
	ctx.r5.s64 = ctx.r10.s64 + -7424;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,15184
	ctx.r11.s64 = ctx.r11.s64 + 15184;
	// addi r4,r10,868
	ctx.r4.s64 = ctx.r10.s64 + 868;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-2420
	ctx.r3.s64 = ctx.r10.s64 + -2420;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830F77C8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F77D8"))) PPC_WEAK_FUNC(sub_830F77D8);
PPC_FUNC_IMPL(__imp__sub_830F77D8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,888
	ctx.r4.s64 = ctx.r10.s64 + 888;
	// addi r11,r11,15204
	ctx.r11.s64 = ctx.r11.s64 + 15204;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-11348
	ctx.r3.s64 = ctx.r10.s64 + -11348;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F7828;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7838"))) PPC_WEAK_FUNC(sub_830F7838);
PPC_FUNC_IMPL(__imp__sub_830F7838) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,924
	ctx.r4.s64 = ctx.r10.s64 + 924;
	// addi r11,r11,15264
	ctx.r11.s64 = ctx.r11.s64 + 15264;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-8468
	ctx.r3.s64 = ctx.r10.s64 + -8468;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F7888;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7898"))) PPC_WEAK_FUNC(sub_830F7898);
PPC_FUNC_IMPL(__imp__sub_830F7898) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,960
	ctx.r4.s64 = ctx.r10.s64 + 960;
	// addi r11,r11,15384
	ctx.r11.s64 = ctx.r11.s64 + 15384;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-764
	ctx.r3.s64 = ctx.r10.s64 + -764;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F78E8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F78F8"))) PPC_WEAK_FUNC(sub_830F78F8);
PPC_FUNC_IMPL(__imp__sub_830F78F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-7424
	ctx.r5.s64 = ctx.r10.s64 + -7424;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,984
	ctx.r4.s64 = ctx.r10.s64 + 984;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-6560
	ctx.r3.s64 = ctx.r10.s64 + -6560;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F7944;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7958"))) PPC_WEAK_FUNC(sub_830F7958);
PPC_FUNC_IMPL(__imp__sub_830F7958) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-6560
	ctx.r5.s64 = ctx.r10.s64 + -6560;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,1012
	ctx.r4.s64 = ctx.r10.s64 + 1012;
	// addi r11,r11,15504
	ctx.r11.s64 = ctx.r11.s64 + 15504;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-8000
	ctx.r3.s64 = ctx.r10.s64 + -8000;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F79AC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F79C0"))) PPC_WEAK_FUNC(sub_830F79C0);
PPC_FUNC_IMPL(__imp__sub_830F79C0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-3368
	ctx.r4.s64 = ctx.r10.s64 + -3368;
	// addi r11,r11,15584
	ctx.r11.s64 = ctx.r11.s64 + 15584;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-12716
	ctx.r3.s64 = ctx.r10.s64 + -12716;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F7A10;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7A20"))) PPC_WEAK_FUNC(sub_830F7A20);
PPC_FUNC_IMPL(__imp__sub_830F7A20) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-9408
	ctx.r4.s64 = ctx.r10.s64 + -9408;
	// addi r11,r11,15624
	ctx.r11.s64 = ctx.r11.s64 + 15624;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-10232
	ctx.r3.s64 = ctx.r10.s64 + -10232;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F7A70;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7A80"))) PPC_WEAK_FUNC(sub_830F7A80);
PPC_FUNC_IMPL(__imp__sub_830F7A80) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-3360
	ctx.r4.s64 = ctx.r10.s64 + -3360;
	// addi r11,r11,15704
	ctx.r11.s64 = ctx.r11.s64 + 15704;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-14912
	ctx.r3.s64 = ctx.r10.s64 + -14912;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F7AD0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7AE0"))) PPC_WEAK_FUNC(sub_830F7AE0);
PPC_FUNC_IMPL(__imp__sub_830F7AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r10,r10,-18744
	ctx.r10.s64 = ctx.r10.s64 + -18744;
	// lwz r11,15784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15784);
	// stw r11,248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 248, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7AF8"))) PPC_WEAK_FUNC(sub_830F7AF8);
PPC_FUNC_IMPL(__imp__sub_830F7AF8) {
	PPC_FUNC_PROLOGUE();
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
	// li r7,13
	ctx.r7.s64 = 13;
	// addi r9,r10,23684
	ctx.r9.s64 = ctx.r10.s64 + 23684;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r5,r10,-7424
	ctx.r5.s64 = ctx.r10.s64 + -7424;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-18744
	ctx.r11.s64 = ctx.r11.s64 + -18744;
	// addi r4,r10,5368
	ctx.r4.s64 = ctx.r10.s64 + 5368;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-13148
	ctx.r3.s64 = ctx.r10.s64 + -13148;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830F7B50;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7B60"))) PPC_WEAK_FUNC(sub_830F7B60);
PPC_FUNC_IMPL(__imp__sub_830F7B60) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-7424
	ctx.r5.s64 = ctx.r10.s64 + -7424;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,5388
	ctx.r4.s64 = ctx.r10.s64 + 5388;
	// addi r11,r11,15788
	ctx.r11.s64 = ctx.r11.s64 + 15788;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-8756
	ctx.r3.s64 = ctx.r10.s64 + -8756;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F7BB4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7BC8"))) PPC_WEAK_FUNC(sub_830F7BC8);
PPC_FUNC_IMPL(__imp__sub_830F7BC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-7424
	ctx.r5.s64 = ctx.r10.s64 + -7424;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,5412
	ctx.r4.s64 = ctx.r10.s64 + 5412;
	// addi r11,r11,15848
	ctx.r11.s64 = ctx.r11.s64 + 15848;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-11924
	ctx.r3.s64 = ctx.r10.s64 + -11924;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F7C1C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7C30"))) PPC_WEAK_FUNC(sub_830F7C30);
PPC_FUNC_IMPL(__imp__sub_830F7C30) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-1484
	ctx.r5.s64 = ctx.r10.s64 + -1484;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-8824
	ctx.r4.s64 = ctx.r10.s64 + -8824;
	// addi r11,r11,15912
	ctx.r11.s64 = ctx.r11.s64 + 15912;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-15416
	ctx.r3.s64 = ctx.r10.s64 + -15416;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F7C84;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7C98"))) PPC_WEAK_FUNC(sub_830F7C98);
PPC_FUNC_IMPL(__imp__sub_830F7C98) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-8864
	ctx.r4.s64 = ctx.r10.s64 + -8864;
	// addi r11,r11,16112
	ctx.r11.s64 = ctx.r11.s64 + 16112;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3428
	ctx.r3.s64 = ctx.r10.s64 + -3428;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F7CE8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7CF8"))) PPC_WEAK_FUNC(sub_830F7CF8);
PPC_FUNC_IMPL(__imp__sub_830F7CF8) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,7
	ctx.r8.s64 = 7;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-8840
	ctx.r4.s64 = ctx.r10.s64 + -8840;
	// addi r11,r11,16192
	ctx.r11.s64 = ctx.r11.s64 + 16192;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1556
	ctx.r3.s64 = ctx.r10.s64 + -1556;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F7D48;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7D58"))) PPC_WEAK_FUNC(sub_830F7D58);
PPC_FUNC_IMPL(__imp__sub_830F7D58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r11,23728
	ctx.r9.s64 = ctx.r11.s64 + 23728;
	// li r7,14
	ctx.r7.s64 = 14;
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,25592
	ctx.r4.s64 = ctx.r10.s64 + 25592;
	// addi r11,r11,16336
	ctx.r11.s64 = ctx.r11.s64 + 16336;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-16064
	ctx.r3.s64 = ctx.r10.s64 + -16064;
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
	ctx.lr = 0x830F7DB0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7DC0"))) PPC_WEAK_FUNC(sub_830F7DC0);
PPC_FUNC_IMPL(__imp__sub_830F7DC0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-7424
	ctx.r5.s64 = ctx.r10.s64 + -7424;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,5428
	ctx.r4.s64 = ctx.r10.s64 + 5428;
	// addi r11,r11,16616
	ctx.r11.s64 = ctx.r11.s64 + 16616;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-10952
	ctx.r3.s64 = ctx.r10.s64 + -10952;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F7E14;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7E28"))) PPC_WEAK_FUNC(sub_830F7E28);
PPC_FUNC_IMPL(__imp__sub_830F7E28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-7424
	ctx.r5.s64 = ctx.r10.s64 + -7424;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,25616
	ctx.r4.s64 = ctx.r10.s64 + 25616;
	// addi r11,r11,16760
	ctx.r11.s64 = ctx.r11.s64 + 16760;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-14516
	ctx.r3.s64 = ctx.r10.s64 + -14516;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F7E7C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7E90"))) PPC_WEAK_FUNC(sub_830F7E90);
PPC_FUNC_IMPL(__imp__sub_830F7E90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-7424
	ctx.r5.s64 = ctx.r10.s64 + -7424;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-21804
	ctx.r4.s64 = ctx.r10.s64 + -21804;
	// addi r11,r11,16880
	ctx.r11.s64 = ctx.r11.s64 + 16880;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3356
	ctx.r3.s64 = ctx.r10.s64 + -3356;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F7EE4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7EF8"))) PPC_WEAK_FUNC(sub_830F7EF8);
PPC_FUNC_IMPL(__imp__sub_830F7EF8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-8912
	ctx.r4.s64 = ctx.r10.s64 + -8912;
	// addi r11,r11,16984
	ctx.r11.s64 = ctx.r11.s64 + 16984;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-8396
	ctx.r3.s64 = ctx.r10.s64 + -8396;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F7F48;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7F58"))) PPC_WEAK_FUNC(sub_830F7F58);
PPC_FUNC_IMPL(__imp__sub_830F7F58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,23816
	ctx.r9.s64 = ctx.r10.s64 + 23816;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,25636
	ctx.r4.s64 = ctx.r10.s64 + 25636;
	// addi r11,r11,17104
	ctx.r11.s64 = ctx.r11.s64 + 17104;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-14696
	ctx.r3.s64 = ctx.r10.s64 + -14696;
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
	ctx.lr = 0x830F7FAC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F7FC0"))) PPC_WEAK_FUNC(sub_830F7FC0);
PPC_FUNC_IMPL(__imp__sub_830F7FC0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-4724
	ctx.r5.s64 = ctx.r10.s64 + -4724;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,25684
	ctx.r4.s64 = ctx.r10.s64 + 25684;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-1484
	ctx.r3.s64 = ctx.r10.s64 + -1484;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F800C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8020"))) PPC_WEAK_FUNC(sub_830F8020);
PPC_FUNC_IMPL(__imp__sub_830F8020) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,22644
	ctx.r4.s64 = ctx.r10.s64 + 22644;
	// addi r11,r11,17144
	ctx.r11.s64 = ctx.r11.s64 + 17144;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-11888
	ctx.r3.s64 = ctx.r10.s64 + -11888;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F8070;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8080"))) PPC_WEAK_FUNC(sub_830F8080);
PPC_FUNC_IMPL(__imp__sub_830F8080) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,23928
	ctx.r9.s64 = ctx.r10.s64 + 23928;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-8932
	ctx.r4.s64 = ctx.r10.s64 + -8932;
	// addi r11,r11,17184
	ctx.r11.s64 = ctx.r11.s64 + 17184;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-10664
	ctx.r3.s64 = ctx.r10.s64 + -10664;
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
	ctx.lr = 0x830F80D4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F80E8"))) PPC_WEAK_FUNC(sub_830F80E8);
PPC_FUNC_IMPL(__imp__sub_830F80E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-1484
	ctx.r5.s64 = ctx.r10.s64 + -1484;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,5452
	ctx.r4.s64 = ctx.r10.s64 + 5452;
	// addi r11,r11,17284
	ctx.r11.s64 = ctx.r11.s64 + 17284;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-16208
	ctx.r3.s64 = ctx.r10.s64 + -16208;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F813C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8150"))) PPC_WEAK_FUNC(sub_830F8150);
PPC_FUNC_IMPL(__imp__sub_830F8150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r8,r10,17328
	ctx.r8.s64 = ctx.r10.s64 + 17328;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r10,-1484
	ctx.r5.s64 = ctx.r10.s64 + -1484;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,23940
	ctx.r11.s64 = ctx.r11.s64 + 23940;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,25700
	ctx.r4.s64 = ctx.r10.s64 + 25700;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-15380
	ctx.r3.s64 = ctx.r10.s64 + -15380;
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
	ctx.lr = 0x830F81AC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F81C0"))) PPC_WEAK_FUNC(sub_830F81C0);
PPC_FUNC_IMPL(__imp__sub_830F81C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-15380
	ctx.r5.s64 = ctx.r10.s64 + -15380;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,25728
	ctx.r4.s64 = ctx.r10.s64 + 25728;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-6992
	ctx.r3.s64 = ctx.r10.s64 + -6992;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F820C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8220"))) PPC_WEAK_FUNC(sub_830F8220);
PPC_FUNC_IMPL(__imp__sub_830F8220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r10,r10,-21760
	ctx.r10.s64 = ctx.r10.s64 + -21760;
	// lwz r11,16980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16980);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8238"))) PPC_WEAK_FUNC(sub_830F8238);
PPC_FUNC_IMPL(__imp__sub_830F8238) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r9,r11,24000
	ctx.r9.s64 = ctx.r11.s64 + 24000;
	// addi r5,r10,-7424
	ctx.r5.s64 = ctx.r10.s64 + -7424;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// li r7,5
	ctx.r7.s64 = 5;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r4,r10,-8324
	ctx.r4.s64 = ctx.r10.s64 + -8324;
	// addi r11,r11,-21760
	ctx.r11.s64 = ctx.r11.s64 + -21760;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-8612
	ctx.r3.s64 = ctx.r10.s64 + -8612;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F8294;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F82A8"))) PPC_WEAK_FUNC(sub_830F82A8);
PPC_FUNC_IMPL(__imp__sub_830F82A8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r9,r11,24060
	ctx.r9.s64 = ctx.r11.s64 + 24060;
	// addi r5,r10,-1484
	ctx.r5.s64 = ctx.r10.s64 + -1484;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// li r7,7
	ctx.r7.s64 = 7;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-8344
	ctx.r4.s64 = ctx.r10.s64 + -8344;
	// addi r11,r11,17472
	ctx.r11.s64 = ctx.r11.s64 + 17472;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-7856
	ctx.r3.s64 = ctx.r10.s64 + -7856;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F8304;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8318"))) PPC_WEAK_FUNC(sub_830F8318);
PPC_FUNC_IMPL(__imp__sub_830F8318) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-8900
	ctx.r4.s64 = ctx.r10.s64 + -8900;
	// addi r11,r11,17616
	ctx.r11.s64 = ctx.r11.s64 + 17616;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-10700
	ctx.r3.s64 = ctx.r10.s64 + -10700;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F8368;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8378"))) PPC_WEAK_FUNC(sub_830F8378);
PPC_FUNC_IMPL(__imp__sub_830F8378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r10,r10,-20192
	ctx.r10.s64 = ctx.r10.s64 + -20192;
	// lwz r11,17468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17468);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8390"))) PPC_WEAK_FUNC(sub_830F8390);
PPC_FUNC_IMPL(__imp__sub_830F8390) {
	PPC_FUNC_PROLOGUE();
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
	// li r7,17
	ctx.r7.s64 = 17;
	// addi r9,r10,24160
	ctx.r9.s64 = ctx.r10.s64 + 24160;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r5,r10,-1484
	ctx.r5.s64 = ctx.r10.s64 + -1484;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-20192
	ctx.r11.s64 = ctx.r11.s64 + -20192;
	// addi r4,r10,-8884
	ctx.r4.s64 = ctx.r10.s64 + -8884;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-15164
	ctx.r3.s64 = ctx.r10.s64 + -15164;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830F83E8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F83F8"))) PPC_WEAK_FUNC(sub_830F83F8);
PPC_FUNC_IMPL(__imp__sub_830F83F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-1484
	ctx.r5.s64 = ctx.r10.s64 + -1484;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-21748
	ctx.r4.s64 = ctx.r10.s64 + -21748;
	// addi r11,r11,17696
	ctx.r11.s64 = ctx.r11.s64 + 17696;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-7316
	ctx.r3.s64 = ctx.r10.s64 + -7316;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F844C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8460"))) PPC_WEAK_FUNC(sub_830F8460);
PPC_FUNC_IMPL(__imp__sub_830F8460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r10,r10,-22824
	ctx.r10.s64 = ctx.r10.s64 + -22824;
	// lwz r11,17736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17736);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8478"))) PPC_WEAK_FUNC(sub_830F8478);
PPC_FUNC_IMPL(__imp__sub_830F8478) {
	PPC_FUNC_PROLOGUE();
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
	// li r7,10
	ctx.r7.s64 = 10;
	// addi r9,r10,24200
	ctx.r9.s64 = ctx.r10.s64 + 24200;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r5,r10,-7856
	ctx.r5.s64 = ctx.r10.s64 + -7856;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-22824
	ctx.r11.s64 = ctx.r11.s64 + -22824;
	// addi r4,r10,5520
	ctx.r4.s64 = ctx.r10.s64 + 5520;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-1160
	ctx.r3.s64 = ctx.r10.s64 + -1160;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830F84D0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F84E0"))) PPC_WEAK_FUNC(sub_830F84E0);
PPC_FUNC_IMPL(__imp__sub_830F84E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-1484
	ctx.r5.s64 = ctx.r10.s64 + -1484;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,25940
	ctx.r4.s64 = ctx.r10.s64 + 25940;
	// addi r11,r11,17740
	ctx.r11.s64 = ctx.r11.s64 + 17740;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-13580
	ctx.r3.s64 = ctx.r10.s64 + -13580;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F8534;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8548"))) PPC_WEAK_FUNC(sub_830F8548);
PPC_FUNC_IMPL(__imp__sub_830F8548) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-4724
	ctx.r5.s64 = ctx.r10.s64 + -4724;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,25988
	ctx.r4.s64 = ctx.r10.s64 + 25988;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-11636
	ctx.r3.s64 = ctx.r10.s64 + -11636;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F8594;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F85A8"))) PPC_WEAK_FUNC(sub_830F85A8);
PPC_FUNC_IMPL(__imp__sub_830F85A8) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,9
	ctx.r8.s64 = 9;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,5548
	ctx.r4.s64 = ctx.r10.s64 + 5548;
	// addi r11,r11,17760
	ctx.r11.s64 = ctx.r11.s64 + 17760;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-14048
	ctx.r3.s64 = ctx.r10.s64 + -14048;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F85F8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8608"))) PPC_WEAK_FUNC(sub_830F8608);
PPC_FUNC_IMPL(__imp__sub_830F8608) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-11636
	ctx.r5.s64 = ctx.r10.s64 + -11636;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,5592
	ctx.r4.s64 = ctx.r10.s64 + 5592;
	// addi r11,r11,17940
	ctx.r11.s64 = ctx.r11.s64 + 17940;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-6776
	ctx.r3.s64 = ctx.r10.s64 + -6776;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F865C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8670"))) PPC_WEAK_FUNC(sub_830F8670);
PPC_FUNC_IMPL(__imp__sub_830F8670) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,5616
	ctx.r4.s64 = ctx.r10.s64 + 5616;
	// addi r11,r11,17980
	ctx.r11.s64 = ctx.r11.s64 + 17980;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-8792
	ctx.r3.s64 = ctx.r10.s64 + -8792;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F86C0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F86D0"))) PPC_WEAK_FUNC(sub_830F86D0);
PPC_FUNC_IMPL(__imp__sub_830F86D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-11636
	ctx.r5.s64 = ctx.r10.s64 + -11636;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-21724
	ctx.r4.s64 = ctx.r10.s64 + -21724;
	// addi r11,r11,18020
	ctx.r11.s64 = ctx.r11.s64 + 18020;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-4832
	ctx.r3.s64 = ctx.r10.s64 + -4832;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F8724;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8738"))) PPC_WEAK_FUNC(sub_830F8738);
PPC_FUNC_IMPL(__imp__sub_830F8738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r7,r10,18040
	ctx.r7.s64 = ctx.r10.s64 + 18040;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r10,-21700
	ctx.r4.s64 = ctx.r10.s64 + -21700;
	// addi r11,r11,24212
	ctx.r11.s64 = ctx.r11.s64 + 24212;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-9620
	ctx.r3.s64 = ctx.r10.s64 + -9620;
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
	ctx.lr = 0x830F8790;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F87A0"))) PPC_WEAK_FUNC(sub_830F87A0);
PPC_FUNC_IMPL(__imp__sub_830F87A0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-9080
	ctx.r4.s64 = ctx.r10.s64 + -9080;
	// addi r11,r11,18220
	ctx.r11.s64 = ctx.r11.s64 + 18220;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-14372
	ctx.r3.s64 = ctx.r10.s64 + -14372;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F87F0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8800"))) PPC_WEAK_FUNC(sub_830F8800);
PPC_FUNC_IMPL(__imp__sub_830F8800) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,11
	ctx.r8.s64 = 11;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,5648
	ctx.r4.s64 = ctx.r10.s64 + 5648;
	// addi r11,r11,18240
	ctx.r11.s64 = ctx.r11.s64 + 18240;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-5372
	ctx.r3.s64 = ctx.r10.s64 + -5372;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F8850;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8860"))) PPC_WEAK_FUNC(sub_830F8860);
PPC_FUNC_IMPL(__imp__sub_830F8860) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,22684
	ctx.r4.s64 = ctx.r10.s64 + 22684;
	// addi r11,r11,18480
	ctx.r11.s64 = ctx.r11.s64 + 18480;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3068
	ctx.r3.s64 = ctx.r10.s64 + -3068;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F88B0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F88C0"))) PPC_WEAK_FUNC(sub_830F88C0);
PPC_FUNC_IMPL(__imp__sub_830F88C0) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r5,r10,-11636
	ctx.r5.s64 = ctx.r10.s64 + -11636;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-9428
	ctx.r4.s64 = ctx.r10.s64 + -9428;
	// addi r11,r11,18560
	ctx.r11.s64 = ctx.r11.s64 + 18560;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-11276
	ctx.r3.s64 = ctx.r10.s64 + -11276;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F8914;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8928"))) PPC_WEAK_FUNC(sub_830F8928);
PPC_FUNC_IMPL(__imp__sub_830F8928) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-11636
	ctx.r5.s64 = ctx.r10.s64 + -11636;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-9108
	ctx.r4.s64 = ctx.r10.s64 + -9108;
	// addi r11,r11,18460
	ctx.r11.s64 = ctx.r11.s64 + 18460;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-6488
	ctx.r3.s64 = ctx.r10.s64 + -6488;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F897C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8990"))) PPC_WEAK_FUNC(sub_830F8990);
PPC_FUNC_IMPL(__imp__sub_830F8990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r8,r10,18800
	ctx.r8.s64 = ctx.r10.s64 + 18800;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r10,-11636
	ctx.r5.s64 = ctx.r10.s64 + -11636;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,24260
	ctx.r11.s64 = ctx.r11.s64 + 24260;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,26032
	ctx.r4.s64 = ctx.r10.s64 + 26032;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-11420
	ctx.r3.s64 = ctx.r10.s64 + -11420;
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
	ctx.lr = 0x830F89EC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8A00"))) PPC_WEAK_FUNC(sub_830F8A00);
PPC_FUNC_IMPL(__imp__sub_830F8A00) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-9168
	ctx.r4.s64 = ctx.r10.s64 + -9168;
	// addi r11,r11,18880
	ctx.r11.s64 = ctx.r11.s64 + 18880;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1016
	ctx.r3.s64 = ctx.r10.s64 + -1016;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F8A50;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8A60"))) PPC_WEAK_FUNC(sub_830F8A60);
PPC_FUNC_IMPL(__imp__sub_830F8A60) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-9136
	ctx.r4.s64 = ctx.r10.s64 + -9136;
	// addi r11,r11,18940
	ctx.r11.s64 = ctx.r11.s64 + 18940;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-6956
	ctx.r3.s64 = ctx.r10.s64 + -6956;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F8AB0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8AC0"))) PPC_WEAK_FUNC(sub_830F8AC0);
PPC_FUNC_IMPL(__imp__sub_830F8AC0) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,11
	ctx.r8.s64 = 11;
	// addi r5,r10,-11636
	ctx.r5.s64 = ctx.r10.s64 + -11636;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-8380
	ctx.r4.s64 = ctx.r10.s64 + -8380;
	// addi r11,r11,19000
	ctx.r11.s64 = ctx.r11.s64 + 19000;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-14660
	ctx.r3.s64 = ctx.r10.s64 + -14660;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F8B14;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8B28"))) PPC_WEAK_FUNC(sub_830F8B28);
PPC_FUNC_IMPL(__imp__sub_830F8B28) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,11
	ctx.r8.s64 = 11;
	// addi r5,r10,-11636
	ctx.r5.s64 = ctx.r10.s64 + -11636;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,26052
	ctx.r4.s64 = ctx.r10.s64 + 26052;
	// addi r11,r11,19240
	ctx.r11.s64 = ctx.r11.s64 + 19240;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-12644
	ctx.r3.s64 = ctx.r10.s64 + -12644;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F8B7C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8B90"))) PPC_WEAK_FUNC(sub_830F8B90);
PPC_FUNC_IMPL(__imp__sub_830F8B90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-11636
	ctx.r5.s64 = ctx.r10.s64 + -11636;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,5672
	ctx.r4.s64 = ctx.r10.s64 + 5672;
	// addi r11,r11,19220
	ctx.r11.s64 = ctx.r11.s64 + 19220;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-8360
	ctx.r3.s64 = ctx.r10.s64 + -8360;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F8BE4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8BF8"))) PPC_WEAK_FUNC(sub_830F8BF8);
PPC_FUNC_IMPL(__imp__sub_830F8BF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-7424
	ctx.r5.s64 = ctx.r10.s64 + -7424;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,26300
	ctx.r4.s64 = ctx.r10.s64 + 26300;
	// addi r11,r11,19460
	ctx.r11.s64 = ctx.r11.s64 + 19460;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1448
	ctx.r3.s64 = ctx.r10.s64 + -1448;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F8C4C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8C60"))) PPC_WEAK_FUNC(sub_830F8C60);
PPC_FUNC_IMPL(__imp__sub_830F8C60) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-9200
	ctx.r4.s64 = ctx.r10.s64 + -9200;
	// addi r11,r11,19504
	ctx.r11.s64 = ctx.r11.s64 + 19504;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-5120
	ctx.r3.s64 = ctx.r10.s64 + -5120;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F8CB0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8CC0"))) PPC_WEAK_FUNC(sub_830F8CC0);
PPC_FUNC_IMPL(__imp__sub_830F8CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r10,r10,-22424
	ctx.r10.s64 = ctx.r10.s64 + -22424;
	// lwz r11,19500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19500);
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8CD8"))) PPC_WEAK_FUNC(sub_830F8CD8);
PPC_FUNC_IMPL(__imp__sub_830F8CD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,24304
	ctx.r9.s64 = ctx.r10.s64 + 24304;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r5,r10,-11636
	ctx.r5.s64 = ctx.r10.s64 + -11636;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-22424
	ctx.r11.s64 = ctx.r11.s64 + -22424;
	// addi r4,r10,-9264
	ctx.r4.s64 = ctx.r10.s64 + -9264;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-14768
	ctx.r3.s64 = ctx.r10.s64 + -14768;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830F8D30;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8D40"))) PPC_WEAK_FUNC(sub_830F8D40);
PPC_FUNC_IMPL(__imp__sub_830F8D40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-11636
	ctx.r5.s64 = ctx.r10.s64 + -11636;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-9236
	ctx.r4.s64 = ctx.r10.s64 + -9236;
	// addi r11,r11,19604
	ctx.r11.s64 = ctx.r11.s64 + 19604;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3320
	ctx.r3.s64 = ctx.r10.s64 + -3320;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F8D94;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8DA8"))) PPC_WEAK_FUNC(sub_830F8DA8);
PPC_FUNC_IMPL(__imp__sub_830F8DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r8,r10,19664
	ctx.r8.s64 = ctx.r10.s64 + 19664;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r10,-11636
	ctx.r5.s64 = ctx.r10.s64 + -11636;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,24316
	ctx.r11.s64 = ctx.r11.s64 + 24316;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,32016
	ctx.r4.s64 = ctx.r10.s64 + 32016;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-14984
	ctx.r3.s64 = ctx.r10.s64 + -14984;
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
	ctx.lr = 0x830F8E04;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8E18"))) PPC_WEAK_FUNC(sub_830F8E18);
PPC_FUNC_IMPL(__imp__sub_830F8E18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-11636
	ctx.r5.s64 = ctx.r10.s64 + -11636;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,5700
	ctx.r4.s64 = ctx.r10.s64 + 5700;
	// addi r11,r11,19644
	ctx.r11.s64 = ctx.r11.s64 + 19644;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-10268
	ctx.r3.s64 = ctx.r10.s64 + -10268;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F8E6C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8E80"))) PPC_WEAK_FUNC(sub_830F8E80);
PPC_FUNC_IMPL(__imp__sub_830F8E80) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-9296
	ctx.r4.s64 = ctx.r10.s64 + -9296;
	// addi r11,r11,19824
	ctx.r11.s64 = ctx.r11.s64 + 19824;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3176
	ctx.r3.s64 = ctx.r10.s64 + -3176;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F8ED0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8EE0"))) PPC_WEAK_FUNC(sub_830F8EE0);
PPC_FUNC_IMPL(__imp__sub_830F8EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r8,r10,20104
	ctx.r8.s64 = ctx.r10.s64 + 20104;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r10,-11636
	ctx.r5.s64 = ctx.r10.s64 + -11636;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,24352
	ctx.r11.s64 = ctx.r11.s64 + 24352;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,-9360
	ctx.r4.s64 = ctx.r10.s64 + -9360;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-13112
	ctx.r3.s64 = ctx.r10.s64 + -13112;
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
	ctx.lr = 0x830F8F3C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8F50"))) PPC_WEAK_FUNC(sub_830F8F50);
PPC_FUNC_IMPL(__imp__sub_830F8F50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-11636
	ctx.r5.s64 = ctx.r10.s64 + -11636;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-9332
	ctx.r4.s64 = ctx.r10.s64 + -9332;
	// addi r11,r11,20084
	ctx.r11.s64 = ctx.r11.s64 + 20084;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-9080
	ctx.r3.s64 = ctx.r10.s64 + -9080;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F8FA4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F8FB8"))) PPC_WEAK_FUNC(sub_830F8FB8);
PPC_FUNC_IMPL(__imp__sub_830F8FB8) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r5,r10,-11636
	ctx.r5.s64 = ctx.r10.s64 + -11636;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-8400
	ctx.r4.s64 = ctx.r10.s64 + -8400;
	// addi r11,r11,20264
	ctx.r11.s64 = ctx.r11.s64 + 20264;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1736
	ctx.r3.s64 = ctx.r10.s64 + -1736;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F900C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9020"))) PPC_WEAK_FUNC(sub_830F9020);
PPC_FUNC_IMPL(__imp__sub_830F9020) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-11636
	ctx.r5.s64 = ctx.r10.s64 + -11636;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-28020
	ctx.r4.s64 = ctx.r10.s64 + -28020;
	// addi r11,r11,20244
	ctx.r11.s64 = ctx.r11.s64 + 20244;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-9440
	ctx.r3.s64 = ctx.r10.s64 + -9440;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F9074;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9088"))) PPC_WEAK_FUNC(sub_830F9088);
PPC_FUNC_IMPL(__imp__sub_830F9088) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,24408
	ctx.r9.s64 = ctx.r10.s64 + 24408;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r5,r10,-7424
	ctx.r5.s64 = ctx.r10.s64 + -7424;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,20508
	ctx.r11.s64 = ctx.r11.s64 + 20508;
	// addi r4,r10,26540
	ctx.r4.s64 = ctx.r10.s64 + 26540;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-4724
	ctx.r3.s64 = ctx.r10.s64 + -4724;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830F90E0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F90F0"))) PPC_WEAK_FUNC(sub_830F90F0);
PPC_FUNC_IMPL(__imp__sub_830F90F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-7424
	ctx.r5.s64 = ctx.r10.s64 + -7424;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-21684
	ctx.r4.s64 = ctx.r10.s64 + -21684;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-14336
	ctx.r3.s64 = ctx.r10.s64 + -14336;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F913C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9150"))) PPC_WEAK_FUNC(sub_830F9150);
PPC_FUNC_IMPL(__imp__sub_830F9150) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-14336
	ctx.r5.s64 = ctx.r10.s64 + -14336;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-21668
	ctx.r4.s64 = ctx.r10.s64 + -21668;
	// addi r11,r11,20548
	ctx.r11.s64 = ctx.r11.s64 + 20548;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-6380
	ctx.r3.s64 = ctx.r10.s64 + -6380;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F91A4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F91B8"))) PPC_WEAK_FUNC(sub_830F91B8);
PPC_FUNC_IMPL(__imp__sub_830F91B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-7424
	ctx.r5.s64 = ctx.r10.s64 + -7424;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-9452
	ctx.r4.s64 = ctx.r10.s64 + -9452;
	// addi r11,r11,20568
	ctx.r11.s64 = ctx.r11.s64 + 20568;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-15668
	ctx.r3.s64 = ctx.r10.s64 + -15668;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F920C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9220"))) PPC_WEAK_FUNC(sub_830F9220);
PPC_FUNC_IMPL(__imp__sub_830F9220) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-7424
	ctx.r5.s64 = ctx.r10.s64 + -7424;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,5724
	ctx.r4.s64 = ctx.r10.s64 + 5724;
	// addi r11,r11,20708
	ctx.r11.s64 = ctx.r11.s64 + 20708;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-7784
	ctx.r3.s64 = ctx.r10.s64 + -7784;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F9274;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9288"))) PPC_WEAK_FUNC(sub_830F9288);
PPC_FUNC_IMPL(__imp__sub_830F9288) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-7424
	ctx.r5.s64 = ctx.r10.s64 + -7424;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,5740
	ctx.r4.s64 = ctx.r10.s64 + 5740;
	// addi r11,r11,20768
	ctx.r11.s64 = ctx.r11.s64 + 20768;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-12896
	ctx.r3.s64 = ctx.r10.s64 + -12896;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F92DC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F92F0"))) PPC_WEAK_FUNC(sub_830F92F0);
PPC_FUNC_IMPL(__imp__sub_830F92F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r8,r10,20808
	ctx.r8.s64 = ctx.r10.s64 + 20808;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r10,-11636
	ctx.r5.s64 = ctx.r10.s64 + -11636;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,24420
	ctx.r11.s64 = ctx.r11.s64 + 24420;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,-8944
	ctx.r4.s64 = ctx.r10.s64 + -8944;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-1052
	ctx.r3.s64 = ctx.r10.s64 + -1052;
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
	ctx.lr = 0x830F934C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9360"))) PPC_WEAK_FUNC(sub_830F9360);
PPC_FUNC_IMPL(__imp__sub_830F9360) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-7424
	ctx.r5.s64 = ctx.r10.s64 + -7424;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,5764
	ctx.r4.s64 = ctx.r10.s64 + 5764;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-9692
	ctx.r3.s64 = ctx.r10.s64 + -9692;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F93AC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F93C0"))) PPC_WEAK_FUNC(sub_830F93C0);
PPC_FUNC_IMPL(__imp__sub_830F93C0) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,5784
	ctx.r4.s64 = ctx.r10.s64 + 5784;
	// addi r11,r11,20968
	ctx.r11.s64 = ctx.r11.s64 + 20968;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1340
	ctx.r3.s64 = ctx.r10.s64 + -1340;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F9410;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9420"))) PPC_WEAK_FUNC(sub_830F9420);
PPC_FUNC_IMPL(__imp__sub_830F9420) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-9692
	ctx.r5.s64 = ctx.r10.s64 + -9692;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,5820
	ctx.r4.s64 = ctx.r10.s64 + 5820;
	// addi r11,r11,21008
	ctx.r11.s64 = ctx.r11.s64 + 21008;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-15128
	ctx.r3.s64 = ctx.r10.s64 + -15128;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F9474;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9488"))) PPC_WEAK_FUNC(sub_830F9488);
PPC_FUNC_IMPL(__imp__sub_830F9488) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,5844
	ctx.r4.s64 = ctx.r10.s64 + 5844;
	// addi r11,r11,21048
	ctx.r11.s64 = ctx.r11.s64 + 21048;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1520
	ctx.r3.s64 = ctx.r10.s64 + -1520;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F94D8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F94E8"))) PPC_WEAK_FUNC(sub_830F94E8);
PPC_FUNC_IMPL(__imp__sub_830F94E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-9692
	ctx.r5.s64 = ctx.r10.s64 + -9692;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,5892
	ctx.r4.s64 = ctx.r10.s64 + 5892;
	// addi r11,r11,21088
	ctx.r11.s64 = ctx.r11.s64 + 21088;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-15884
	ctx.r3.s64 = ctx.r10.s64 + -15884;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F953C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9550"))) PPC_WEAK_FUNC(sub_830F9550);
PPC_FUNC_IMPL(__imp__sub_830F9550) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,5924
	ctx.r4.s64 = ctx.r10.s64 + 5924;
	// addi r11,r11,21148
	ctx.r11.s64 = ctx.r11.s64 + 21148;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-12320
	ctx.r3.s64 = ctx.r10.s64 + -12320;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F95A0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F95B0"))) PPC_WEAK_FUNC(sub_830F95B0);
PPC_FUNC_IMPL(__imp__sub_830F95B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-9692
	ctx.r5.s64 = ctx.r10.s64 + -9692;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,5972
	ctx.r4.s64 = ctx.r10.s64 + 5972;
	// addi r11,r11,21188
	ctx.r11.s64 = ctx.r11.s64 + 21188;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-10124
	ctx.r3.s64 = ctx.r10.s64 + -10124;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F9604;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9618"))) PPC_WEAK_FUNC(sub_830F9618);
PPC_FUNC_IMPL(__imp__sub_830F9618) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,6004
	ctx.r4.s64 = ctx.r10.s64 + 6004;
	// addi r11,r11,21248
	ctx.r11.s64 = ctx.r11.s64 + 21248;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-6452
	ctx.r3.s64 = ctx.r10.s64 + -6452;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F9668;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9678"))) PPC_WEAK_FUNC(sub_830F9678);
PPC_FUNC_IMPL(__imp__sub_830F9678) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-9692
	ctx.r5.s64 = ctx.r10.s64 + -9692;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,6052
	ctx.r4.s64 = ctx.r10.s64 + 6052;
	// addi r11,r11,21288
	ctx.r11.s64 = ctx.r11.s64 + 21288;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-7820
	ctx.r3.s64 = ctx.r10.s64 + -7820;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F96CC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F96E0"))) PPC_WEAK_FUNC(sub_830F96E0);
PPC_FUNC_IMPL(__imp__sub_830F96E0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,6080
	ctx.r4.s64 = ctx.r10.s64 + 6080;
	// addi r11,r11,21352
	ctx.r11.s64 = ctx.r11.s64 + 21352;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-5624
	ctx.r3.s64 = ctx.r10.s64 + -5624;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F9730;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9740"))) PPC_WEAK_FUNC(sub_830F9740);
PPC_FUNC_IMPL(__imp__sub_830F9740) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,24600
	ctx.r9.s64 = ctx.r10.s64 + 24600;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-9056
	ctx.r4.s64 = ctx.r10.s64 + -9056;
	// addi r11,r11,21496
	ctx.r11.s64 = ctx.r11.s64 + 21496;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-14408
	ctx.r3.s64 = ctx.r10.s64 + -14408;
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
	ctx.lr = 0x830F9794;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F97A8"))) PPC_WEAK_FUNC(sub_830F97A8);
PPC_FUNC_IMPL(__imp__sub_830F97A8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-9024
	ctx.r4.s64 = ctx.r10.s64 + -9024;
	// addi r11,r11,21436
	ctx.r11.s64 = ctx.r11.s64 + 21436;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-9260
	ctx.r3.s64 = ctx.r10.s64 + -9260;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F97F8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9808"))) PPC_WEAK_FUNC(sub_830F9808);
PPC_FUNC_IMPL(__imp__sub_830F9808) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-8988
	ctx.r4.s64 = ctx.r10.s64 + -8988;
	// addi r11,r11,21656
	ctx.r11.s64 = ctx.r11.s64 + 21656;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3500
	ctx.r3.s64 = ctx.r10.s64 + -3500;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F9858;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9868"))) PPC_WEAK_FUNC(sub_830F9868);
PPC_FUNC_IMPL(__imp__sub_830F9868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r10,r10,-20856
	ctx.r10.s64 = ctx.r10.s64 + -20856;
	// lwz r11,21348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21348);
	// stw r11,128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9880"))) PPC_WEAK_FUNC(sub_830F9880);
PPC_FUNC_IMPL(__imp__sub_830F9880) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r9,r11,24492
	ctx.r9.s64 = ctx.r11.s64 + 24492;
	// addi r5,r10,-1484
	ctx.r5.s64 = ctx.r10.s64 + -1484;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r8,r9,124
	ctx.r8.s64 = ctx.r9.s64 + 124;
	// li r7,18
	ctx.r7.s64 = 18;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r4,r10,-8960
	ctx.r4.s64 = ctx.r10.s64 + -8960;
	// addi r11,r11,-20856
	ctx.r11.s64 = ctx.r11.s64 + -20856;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-2168
	ctx.r3.s64 = ctx.r10.s64 + -2168;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F98DC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F98F0"))) PPC_WEAK_FUNC(sub_830F98F0);
PPC_FUNC_IMPL(__imp__sub_830F98F0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-1484
	ctx.r5.s64 = ctx.r10.s64 + -1484;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,-28000
	ctx.r4.s64 = ctx.r10.s64 + -28000;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-13472
	ctx.r3.s64 = ctx.r10.s64 + -13472;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F993C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9950"))) PPC_WEAK_FUNC(sub_830F9950);
PPC_FUNC_IMPL(__imp__sub_830F9950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r10,r10,-23744
	ctx.r10.s64 = ctx.r10.s64 + -23744;
	// lwz r11,21780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21780);
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9968"))) PPC_WEAK_FUNC(sub_830F9968);
PPC_FUNC_IMPL(__imp__sub_830F9968) {
	PPC_FUNC_PROLOGUE();
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
	// li r7,12
	ctx.r7.s64 = 12;
	// addi r9,r10,24744
	ctx.r9.s64 = ctx.r10.s64 + 24744;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r5,r10,-13472
	ctx.r5.s64 = ctx.r10.s64 + -13472;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,-23744
	ctx.r11.s64 = ctx.r11.s64 + -23744;
	// addi r4,r10,-27980
	ctx.r4.s64 = ctx.r10.s64 + -27980;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-6272
	ctx.r3.s64 = ctx.r10.s64 + -6272;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830F99C0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F99D0"))) PPC_WEAK_FUNC(sub_830F99D0);
PPC_FUNC_IMPL(__imp__sub_830F99D0) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r5,r10,-7424
	ctx.r5.s64 = ctx.r10.s64 + -7424;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,22720
	ctx.r4.s64 = ctx.r10.s64 + 22720;
	// addi r11,r11,21784
	ctx.r11.s64 = ctx.r11.s64 + 21784;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-7532
	ctx.r3.s64 = ctx.r10.s64 + -7532;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F9A24;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9A38"))) PPC_WEAK_FUNC(sub_830F9A38);
PPC_FUNC_IMPL(__imp__sub_830F9A38) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,5
	ctx.r8.s64 = 5;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,22748
	ctx.r4.s64 = ctx.r10.s64 + 22748;
	// addi r11,r11,22024
	ctx.r11.s64 = ctx.r11.s64 + 22024;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-11996
	ctx.r3.s64 = ctx.r10.s64 + -11996;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F9A88;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9A98"))) PPC_WEAK_FUNC(sub_830F9A98);
PPC_FUNC_IMPL(__imp__sub_830F9A98) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,22776
	ctx.r4.s64 = ctx.r10.s64 + 22776;
	// addi r11,r11,21964
	ctx.r11.s64 = ctx.r11.s64 + 21964;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-7208
	ctx.r3.s64 = ctx.r10.s64 + -7208;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F9AE8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9AF8"))) PPC_WEAK_FUNC(sub_830F9AF8);
PPC_FUNC_IMPL(__imp__sub_830F9AF8) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,19
	ctx.r8.s64 = 19;
	// addi r5,r10,-7424
	ctx.r5.s64 = ctx.r10.s64 + -7424;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-8360
	ctx.r4.s64 = ctx.r10.s64 + -8360;
	// addi r11,r11,22144
	ctx.r11.s64 = ctx.r11.s64 + 22144;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-8108
	ctx.r3.s64 = ctx.r10.s64 + -8108;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F9B4C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9B60"))) PPC_WEAK_FUNC(sub_830F9B60);
PPC_FUNC_IMPL(__imp__sub_830F9B60) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,6108
	ctx.r4.s64 = ctx.r10.s64 + 6108;
	// addi r11,r11,22124
	ctx.r11.s64 = ctx.r11.s64 + 22124;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-6092
	ctx.r3.s64 = ctx.r10.s64 + -6092;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F9BB0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9BC0"))) PPC_WEAK_FUNC(sub_830F9BC0);
PPC_FUNC_IMPL(__imp__sub_830F9BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r10,r10,-18928
	ctx.r10.s64 = ctx.r10.s64 + -18928;
	// lwz r11,22524(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22524);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9BD8"))) PPC_WEAK_FUNC(sub_830F9BD8);
PPC_FUNC_IMPL(__imp__sub_830F9BD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,24816
	ctx.r9.s64 = ctx.r10.s64 + 24816;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r4,r10,6128
	ctx.r4.s64 = ctx.r10.s64 + 6128;
	// addi r11,r11,-18928
	ctx.r11.s64 = ctx.r11.s64 + -18928;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-6740
	ctx.r3.s64 = ctx.r10.s64 + -6740;
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
	ctx.lr = 0x830F9C2C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9C40"))) PPC_WEAK_FUNC(sub_830F9C40);
PPC_FUNC_IMPL(__imp__sub_830F9C40) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-8432
	ctx.r4.s64 = ctx.r10.s64 + -8432;
	// addi r11,r11,22528
	ctx.r11.s64 = ctx.r11.s64 + 22528;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-10088
	ctx.r3.s64 = ctx.r10.s64 + -10088;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F9C90;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9CA0"))) PPC_WEAK_FUNC(sub_830F9CA0);
PPC_FUNC_IMPL(__imp__sub_830F9CA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-7424
	ctx.r5.s64 = ctx.r10.s64 + -7424;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-8456
	ctx.r4.s64 = ctx.r10.s64 + -8456;
	// addi r11,r11,22608
	ctx.r11.s64 = ctx.r11.s64 + 22608;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3032
	ctx.r3.s64 = ctx.r10.s64 + -3032;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F9CF4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9D08"))) PPC_WEAK_FUNC(sub_830F9D08);
PPC_FUNC_IMPL(__imp__sub_830F9D08) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,26680
	ctx.r4.s64 = ctx.r10.s64 + 26680;
	// addi r11,r11,22632
	ctx.r11.s64 = ctx.r11.s64 + 22632;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-12824
	ctx.r3.s64 = ctx.r10.s64 + -12824;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F9D58;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9D68"))) PPC_WEAK_FUNC(sub_830F9D68);
PPC_FUNC_IMPL(__imp__sub_830F9D68) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,26704
	ctx.r4.s64 = ctx.r10.s64 + 26704;
	// addi r11,r11,22712
	ctx.r11.s64 = ctx.r11.s64 + 22712;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-7280
	ctx.r3.s64 = ctx.r10.s64 + -7280;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F9DB8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9DC8"))) PPC_WEAK_FUNC(sub_830F9DC8);
PPC_FUNC_IMPL(__imp__sub_830F9DC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,24852
	ctx.r9.s64 = ctx.r10.s64 + 24852;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r5,r10,-7424
	ctx.r5.s64 = ctx.r10.s64 + -7424;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,22752
	ctx.r11.s64 = ctx.r11.s64 + 22752;
	// addi r4,r10,26728
	ctx.r4.s64 = ctx.r10.s64 + 26728;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-5444
	ctx.r3.s64 = ctx.r10.s64 + -5444;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830F9E20;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9E30"))) PPC_WEAK_FUNC(sub_830F9E30);
PPC_FUNC_IMPL(__imp__sub_830F9E30) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-8036
	ctx.r3.s64 = ctx.r10.s64 + -8036;
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
	ctx.lr = 0x830F9E78;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9E88"))) PPC_WEAK_FUNC(sub_830F9E88);
PPC_FUNC_IMPL(__imp__sub_830F9E88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-8036
	ctx.r5.s64 = ctx.r10.s64 + -8036;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-14744
	ctx.r4.s64 = ctx.r10.s64 + -14744;
	// addi r11,r11,22772
	ctx.r11.s64 = ctx.r11.s64 + 22772;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-7424
	ctx.r3.s64 = ctx.r10.s64 + -7424;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F9EDC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9EF0"))) PPC_WEAK_FUNC(sub_830F9EF0);
PPC_FUNC_IMPL(__imp__sub_830F9EF0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,24872
	ctx.r9.s64 = ctx.r10.s64 + 24872;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-16828
	ctx.r4.s64 = ctx.r10.s64 + -16828;
	// addi r11,r11,22816
	ctx.r11.s64 = ctx.r11.s64 + 22816;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-9008
	ctx.r3.s64 = ctx.r10.s64 + -9008;
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
	ctx.lr = 0x830F9F44;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9F58"))) PPC_WEAK_FUNC(sub_830F9F58);
PPC_FUNC_IMPL(__imp__sub_830F9F58) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-16732
	ctx.r4.s64 = ctx.r10.s64 + -16732;
	// addi r11,r11,22956
	ctx.r11.s64 = ctx.r11.s64 + 22956;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-9944
	ctx.r3.s64 = ctx.r10.s64 + -9944;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830F9FA8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830F9FB8"))) PPC_WEAK_FUNC(sub_830F9FB8);
PPC_FUNC_IMPL(__imp__sub_830F9FB8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-16716
	ctx.r4.s64 = ctx.r10.s64 + -16716;
	// addi r11,r11,22996
	ctx.r11.s64 = ctx.r11.s64 + 22996;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-8972
	ctx.r3.s64 = ctx.r10.s64 + -8972;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FA008;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA018"))) PPC_WEAK_FUNC(sub_830FA018);
PPC_FUNC_IMPL(__imp__sub_830FA018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r10,r10,-19088
	ctx.r10.s64 = ctx.r10.s64 + -19088;
	// lwz r11,23036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23036);
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA038"))) PPC_WEAK_FUNC(sub_830FA038);
PPC_FUNC_IMPL(__imp__sub_830FA038) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,25264
	ctx.r9.s64 = ctx.r10.s64 + 25264;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r4,r10,-15580
	ctx.r4.s64 = ctx.r10.s64 + -15580;
	// addi r11,r11,-19088
	ctx.r11.s64 = ctx.r11.s64 + -19088;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-7244
	ctx.r3.s64 = ctx.r10.s64 + -7244;
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
	ctx.lr = 0x830FA08C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA0A0"))) PPC_WEAK_FUNC(sub_830FA0A0);
PPC_FUNC_IMPL(__imp__sub_830FA0A0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-17120
	ctx.r4.s64 = ctx.r10.s64 + -17120;
	// addi r11,r11,23048
	ctx.r11.s64 = ctx.r11.s64 + 23048;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-7676
	ctx.r3.s64 = ctx.r10.s64 + -7676;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FA0F0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA100"))) PPC_WEAK_FUNC(sub_830FA100);
PPC_FUNC_IMPL(__imp__sub_830FA100) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-15284
	ctx.r4.s64 = ctx.r10.s64 + -15284;
	// addi r11,r11,23088
	ctx.r11.s64 = ctx.r11.s64 + 23088;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-13508
	ctx.r3.s64 = ctx.r10.s64 + -13508;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FA150;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA160"))) PPC_WEAK_FUNC(sub_830FA160);
PPC_FUNC_IMPL(__imp__sub_830FA160) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-15248
	ctx.r4.s64 = ctx.r10.s64 + -15248;
	// addi r11,r11,23128
	ctx.r11.s64 = ctx.r11.s64 + 23128;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-728
	ctx.r3.s64 = ctx.r10.s64 + -728;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FA1B0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA1C0"))) PPC_WEAK_FUNC(sub_830FA1C0);
PPC_FUNC_IMPL(__imp__sub_830FA1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r10,r10,-19600
	ctx.r10.s64 = ctx.r10.s64 + -19600;
	// lwz r11,23148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23148);
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA1D8"))) PPC_WEAK_FUNC(sub_830FA1D8);
PPC_FUNC_IMPL(__imp__sub_830FA1D8) {
	PPC_FUNC_PROLOGUE();
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
	// li r7,9
	ctx.r7.s64 = 9;
	// addi r9,r10,25324
	ctx.r9.s64 = ctx.r10.s64 + 25324;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r4,r10,-15220
	ctx.r4.s64 = ctx.r10.s64 + -15220;
	// addi r11,r11,-19600
	ctx.r11.s64 = ctx.r11.s64 + -19600;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-12680
	ctx.r3.s64 = ctx.r10.s64 + -12680;
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
	ctx.lr = 0x830FA22C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA240"))) PPC_WEAK_FUNC(sub_830FA240);
PPC_FUNC_IMPL(__imp__sub_830FA240) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,25376
	ctx.r9.s64 = ctx.r10.s64 + 25376;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-8080
	ctx.r4.s64 = ctx.r10.s64 + -8080;
	// addi r11,r11,23160
	ctx.r11.s64 = ctx.r11.s64 + 23160;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-7964
	ctx.r3.s64 = ctx.r10.s64 + -7964;
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
	ctx.lr = 0x830FA294;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA2A8"))) PPC_WEAK_FUNC(sub_830FA2A8);
PPC_FUNC_IMPL(__imp__sub_830FA2A8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-12008
	ctx.r4.s64 = ctx.r10.s64 + -12008;
	// addi r11,r11,23220
	ctx.r11.s64 = ctx.r11.s64 + 23220;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-12752
	ctx.r3.s64 = ctx.r10.s64 + -12752;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FA2F8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA308"))) PPC_WEAK_FUNC(sub_830FA308);
PPC_FUNC_IMPL(__imp__sub_830FA308) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-11940
	ctx.r4.s64 = ctx.r10.s64 + -11940;
	// addi r11,r11,23260
	ctx.r11.s64 = ctx.r11.s64 + 23260;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-15848
	ctx.r3.s64 = ctx.r10.s64 + -15848;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FA358;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA368"))) PPC_WEAK_FUNC(sub_830FA368);
PPC_FUNC_IMPL(__imp__sub_830FA368) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,25416
	ctx.r9.s64 = ctx.r10.s64 + 25416;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-11636
	ctx.r4.s64 = ctx.r10.s64 + -11636;
	// addi r11,r11,23304
	ctx.r11.s64 = ctx.r11.s64 + 23304;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-3752
	ctx.r3.s64 = ctx.r10.s64 + -3752;
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
	ctx.lr = 0x830FA3BC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA3D0"))) PPC_WEAK_FUNC(sub_830FA3D0);
PPC_FUNC_IMPL(__imp__sub_830FA3D0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-11204
	ctx.r4.s64 = ctx.r10.s64 + -11204;
	// addi r11,r11,23384
	ctx.r11.s64 = ctx.r11.s64 + 23384;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-11168
	ctx.r3.s64 = ctx.r10.s64 + -11168;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FA420;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA430"))) PPC_WEAK_FUNC(sub_830FA430);
PPC_FUNC_IMPL(__imp__sub_830FA430) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-11168
	ctx.r4.s64 = ctx.r10.s64 + -11168;
	// addi r11,r11,23604
	ctx.r11.s64 = ctx.r11.s64 + 23604;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-7568
	ctx.r3.s64 = ctx.r10.s64 + -7568;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FA480;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA490"))) PPC_WEAK_FUNC(sub_830FA490);
PPC_FUNC_IMPL(__imp__sub_830FA490) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-10980
	ctx.r4.s64 = ctx.r10.s64 + -10980;
	// addi r11,r11,23624
	ctx.r11.s64 = ctx.r11.s64 + 23624;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-4400
	ctx.r3.s64 = ctx.r10.s64 + -4400;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FA4E0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA4F0"))) PPC_WEAK_FUNC(sub_830FA4F0);
PPC_FUNC_IMPL(__imp__sub_830FA4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r10,r10,-23504
	ctx.r10.s64 = ctx.r10.s64 + -23504;
	// lwz r11,23744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23744);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA508"))) PPC_WEAK_FUNC(sub_830FA508);
PPC_FUNC_IMPL(__imp__sub_830FA508) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r4,r10,-6924
	ctx.r4.s64 = ctx.r10.s64 + -6924;
	// addi r11,r11,-23504
	ctx.r11.s64 = ctx.r11.s64 + -23504;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1772
	ctx.r3.s64 = ctx.r10.s64 + -1772;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FA558;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA568"))) PPC_WEAK_FUNC(sub_830FA568);
PPC_FUNC_IMPL(__imp__sub_830FA568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r10,r10,-22484
	ctx.r10.s64 = ctx.r10.s64 + -22484;
	// lwz r11,23744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23744);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA580"))) PPC_WEAK_FUNC(sub_830FA580);
PPC_FUNC_IMPL(__imp__sub_830FA580) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r4,r10,-6384
	ctx.r4.s64 = ctx.r10.s64 + -6384;
	// addi r11,r11,-22484
	ctx.r11.s64 = ctx.r11.s64 + -22484;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-2672
	ctx.r3.s64 = ctx.r10.s64 + -2672;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FA5D0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA5E0"))) PPC_WEAK_FUNC(sub_830FA5E0);
PPC_FUNC_IMPL(__imp__sub_830FA5E0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-6140
	ctx.r4.s64 = ctx.r10.s64 + -6140;
	// addi r11,r11,23724
	ctx.r11.s64 = ctx.r11.s64 + 23724;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-8864
	ctx.r3.s64 = ctx.r10.s64 + -8864;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FA630;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA640"))) PPC_WEAK_FUNC(sub_830FA640);
PPC_FUNC_IMPL(__imp__sub_830FA640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r10,r10,-23084
	ctx.r10.s64 = ctx.r10.s64 + -23084;
	// lwz r11,23744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23744);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA658"))) PPC_WEAK_FUNC(sub_830FA658);
PPC_FUNC_IMPL(__imp__sub_830FA658) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r4,r10,-8020
	ctx.r4.s64 = ctx.r10.s64 + -8020;
	// addi r11,r11,-23084
	ctx.r11.s64 = ctx.r11.s64 + -23084;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-4904
	ctx.r3.s64 = ctx.r10.s64 + -4904;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FA6A8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA6B8"))) PPC_WEAK_FUNC(sub_830FA6B8);
PPC_FUNC_IMPL(__imp__sub_830FA6B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,25476
	ctx.r9.s64 = ctx.r10.s64 + 25476;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-7800
	ctx.r4.s64 = ctx.r10.s64 + -7800;
	// addi r11,r11,23748
	ctx.r11.s64 = ctx.r11.s64 + 23748;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-6308
	ctx.r3.s64 = ctx.r10.s64 + -6308;
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
	ctx.lr = 0x830FA70C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA720"))) PPC_WEAK_FUNC(sub_830FA720);
PPC_FUNC_IMPL(__imp__sub_830FA720) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-7732
	ctx.r4.s64 = ctx.r10.s64 + -7732;
	// addi r11,r11,23788
	ctx.r11.s64 = ctx.r11.s64 + 23788;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-7928
	ctx.r3.s64 = ctx.r10.s64 + -7928;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FA770;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA780"))) PPC_WEAK_FUNC(sub_830FA780);
PPC_FUNC_IMPL(__imp__sub_830FA780) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-7676
	ctx.r4.s64 = ctx.r10.s64 + -7676;
	// addi r11,r11,23828
	ctx.r11.s64 = ctx.r11.s64 + 23828;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-5984
	ctx.r3.s64 = ctx.r10.s64 + -5984;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FA7D0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA7E0"))) PPC_WEAK_FUNC(sub_830FA7E0);
PPC_FUNC_IMPL(__imp__sub_830FA7E0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-4832
	ctx.r4.s64 = ctx.r10.s64 + -4832;
	// addi r11,r11,23848
	ctx.r11.s64 = ctx.r11.s64 + 23848;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-10628
	ctx.r3.s64 = ctx.r10.s64 + -10628;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FA830;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA840"))) PPC_WEAK_FUNC(sub_830FA840);
PPC_FUNC_IMPL(__imp__sub_830FA840) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-10484
	ctx.r5.s64 = ctx.r10.s64 + -10484;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-4788
	ctx.r4.s64 = ctx.r10.s64 + -4788;
	// addi r11,r11,23888
	ctx.r11.s64 = ctx.r11.s64 + 23888;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-6236
	ctx.r3.s64 = ctx.r10.s64 + -6236;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FA894;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA8A8"))) PPC_WEAK_FUNC(sub_830FA8A8);
PPC_FUNC_IMPL(__imp__sub_830FA8A8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-4716
	ctx.r4.s64 = ctx.r10.s64 + -4716;
	// addi r11,r11,23908
	ctx.r11.s64 = ctx.r11.s64 + 23908;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-10484
	ctx.r3.s64 = ctx.r10.s64 + -10484;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FA8F8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA908"))) PPC_WEAK_FUNC(sub_830FA908);
PPC_FUNC_IMPL(__imp__sub_830FA908) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-4624
	ctx.r4.s64 = ctx.r10.s64 + -4624;
	// addi r11,r11,23948
	ctx.r11.s64 = ctx.r11.s64 + 23948;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-12428
	ctx.r3.s64 = ctx.r10.s64 + -12428;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FA958;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA968"))) PPC_WEAK_FUNC(sub_830FA968);
PPC_FUNC_IMPL(__imp__sub_830FA968) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-4588
	ctx.r4.s64 = ctx.r10.s64 + -4588;
	// addi r11,r11,23968
	ctx.r11.s64 = ctx.r11.s64 + 23968;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-9368
	ctx.r3.s64 = ctx.r10.s64 + -9368;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FA9B8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FA9C8"))) PPC_WEAK_FUNC(sub_830FA9C8);
PPC_FUNC_IMPL(__imp__sub_830FA9C8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-7468
	ctx.r4.s64 = ctx.r10.s64 + -7468;
	// addi r11,r11,24008
	ctx.r11.s64 = ctx.r11.s64 + 24008;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-9188
	ctx.r3.s64 = ctx.r10.s64 + -9188;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FAA18;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FAA28"))) PPC_WEAK_FUNC(sub_830FAA28);
PPC_FUNC_IMPL(__imp__sub_830FAA28) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-7336
	ctx.r4.s64 = ctx.r10.s64 + -7336;
	// addi r11,r11,24148
	ctx.r11.s64 = ctx.r11.s64 + 24148;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-6596
	ctx.r3.s64 = ctx.r10.s64 + -6596;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FAA78;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FAA88"))) PPC_WEAK_FUNC(sub_830FAA88);
PPC_FUNC_IMPL(__imp__sub_830FAA88) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-7312
	ctx.r4.s64 = ctx.r10.s64 + -7312;
	// addi r11,r11,24188
	ctx.r11.s64 = ctx.r11.s64 + 24188;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-9476
	ctx.r3.s64 = ctx.r10.s64 + -9476;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FAAD8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FAAE8"))) PPC_WEAK_FUNC(sub_830FAAE8);
PPC_FUNC_IMPL(__imp__sub_830FAAE8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-5556
	ctx.r4.s64 = ctx.r10.s64 + -5556;
	// addi r11,r11,24208
	ctx.r11.s64 = ctx.r11.s64 + 24208;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-5732
	ctx.r3.s64 = ctx.r10.s64 + -5732;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FAB38;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FAB48"))) PPC_WEAK_FUNC(sub_830FAB48);
PPC_FUNC_IMPL(__imp__sub_830FAB48) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-5984
	ctx.r5.s64 = ctx.r10.s64 + -5984;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-5532
	ctx.r4.s64 = ctx.r10.s64 + -5532;
	// addi r11,r11,24248
	ctx.r11.s64 = ctx.r11.s64 + 24248;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-8072
	ctx.r3.s64 = ctx.r10.s64 + -8072;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FAB9C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FABB0"))) PPC_WEAK_FUNC(sub_830FABB0);
PPC_FUNC_IMPL(__imp__sub_830FABB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r10,r10,-18480
	ctx.r10.s64 = ctx.r10.s64 + -18480;
	// lwz r11,24388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24388);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FABC8"))) PPC_WEAK_FUNC(sub_830FABC8);
PPC_FUNC_IMPL(__imp__sub_830FABC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,25512
	ctx.r9.s64 = ctx.r10.s64 + 25512;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r4,r10,-6964
	ctx.r4.s64 = ctx.r10.s64 + -6964;
	// addi r11,r11,-18480
	ctx.r11.s64 = ctx.r11.s64 + -18480;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-14624
	ctx.r3.s64 = ctx.r10.s64 + -14624;
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
	ctx.lr = 0x830FAC1C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FAC30"))) PPC_WEAK_FUNC(sub_830FAC30);
PPC_FUNC_IMPL(__imp__sub_830FAC30) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-6432
	ctx.r4.s64 = ctx.r10.s64 + -6432;
	// addi r11,r11,24396
	ctx.r11.s64 = ctx.r11.s64 + 24396;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1880
	ctx.r3.s64 = ctx.r10.s64 + -1880;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FAC80;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FAC90"))) PPC_WEAK_FUNC(sub_830FAC90);
PPC_FUNC_IMPL(__imp__sub_830FAC90) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,25572
	ctx.r9.s64 = ctx.r10.s64 + 25572;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r5,r10,-5984
	ctx.r5.s64 = ctx.r10.s64 + -5984;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,24440
	ctx.r11.s64 = ctx.r11.s64 + 24440;
	// addi r4,r10,-6408
	ctx.r4.s64 = ctx.r10.s64 + -6408;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-1700
	ctx.r3.s64 = ctx.r10.s64 + -1700;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830FACE8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FACF8"))) PPC_WEAK_FUNC(sub_830FACF8);
PPC_FUNC_IMPL(__imp__sub_830FACF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r10,r10,-23464
	ctx.r10.s64 = ctx.r10.s64 + -23464;
	// lwz r11,24436(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FAD10"))) PPC_WEAK_FUNC(sub_830FAD10);
PPC_FUNC_IMPL(__imp__sub_830FAD10) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,25624
	ctx.r9.s64 = ctx.r10.s64 + 25624;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r4,r10,-6200
	ctx.r4.s64 = ctx.r10.s64 + -6200;
	// addi r11,r11,-23464
	ctx.r11.s64 = ctx.r11.s64 + -23464;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-15956
	ctx.r3.s64 = ctx.r10.s64 + -15956;
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
	ctx.lr = 0x830FAD64;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FAD78"))) PPC_WEAK_FUNC(sub_830FAD78);
PPC_FUNC_IMPL(__imp__sub_830FAD78) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-4528
	ctx.r4.s64 = ctx.r10.s64 + -4528;
	// addi r11,r11,24600
	ctx.r11.s64 = ctx.r11.s64 + 24600;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-12284
	ctx.r3.s64 = ctx.r10.s64 + -12284;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FADC8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FADD8"))) PPC_WEAK_FUNC(sub_830FADD8);
PPC_FUNC_IMPL(__imp__sub_830FADD8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-4460
	ctx.r4.s64 = ctx.r10.s64 + -4460;
	// addi r11,r11,24620
	ctx.r11.s64 = ctx.r11.s64 + 24620;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-7172
	ctx.r3.s64 = ctx.r10.s64 + -7172;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FAE28;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FAE38"))) PPC_WEAK_FUNC(sub_830FAE38);
PPC_FUNC_IMPL(__imp__sub_830FAE38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r10,r10,-19744
	ctx.r10.s64 = ctx.r10.s64 + -19744;
	// lwz r11,24660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24660);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FAE50"))) PPC_WEAK_FUNC(sub_830FAE50);
PPC_FUNC_IMPL(__imp__sub_830FAE50) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,25676
	ctx.r9.s64 = ctx.r10.s64 + 25676;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r4,r10,-7116
	ctx.r4.s64 = ctx.r10.s64 + -7116;
	// addi r11,r11,-19744
	ctx.r11.s64 = ctx.r11.s64 + -19744;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-13652
	ctx.r3.s64 = ctx.r10.s64 + -13652;
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
	ctx.lr = 0x830FAEA4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FAEB8"))) PPC_WEAK_FUNC(sub_830FAEB8);
PPC_FUNC_IMPL(__imp__sub_830FAEB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-5984
	ctx.r5.s64 = ctx.r10.s64 + -5984;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-6004
	ctx.r4.s64 = ctx.r10.s64 + -6004;
	// addi r11,r11,24664
	ctx.r11.s64 = ctx.r11.s64 + 24664;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-4112
	ctx.r3.s64 = ctx.r10.s64 + -4112;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FAF0C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FAF20"))) PPC_WEAK_FUNC(sub_830FAF20);
PPC_FUNC_IMPL(__imp__sub_830FAF20) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-5980
	ctx.r4.s64 = ctx.r10.s64 + -5980;
	// addi r11,r11,24704
	ctx.r11.s64 = ctx.r11.s64 + 24704;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-10016
	ctx.r3.s64 = ctx.r10.s64 + -10016;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FAF70;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FAF80"))) PPC_WEAK_FUNC(sub_830FAF80);
PPC_FUNC_IMPL(__imp__sub_830FAF80) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-5832
	ctx.r4.s64 = ctx.r10.s64 + -5832;
	// addi r11,r11,24744
	ctx.r11.s64 = ctx.r11.s64 + 24744;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-14156
	ctx.r3.s64 = ctx.r10.s64 + -14156;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FAFD0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FAFE0"))) PPC_WEAK_FUNC(sub_830FAFE0);
PPC_FUNC_IMPL(__imp__sub_830FAFE0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-4320
	ctx.r4.s64 = ctx.r10.s64 + -4320;
	// addi r11,r11,24824
	ctx.r11.s64 = ctx.r11.s64 + 24824;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-9152
	ctx.r3.s64 = ctx.r10.s64 + -9152;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FB030;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB040"))) PPC_WEAK_FUNC(sub_830FB040);
PPC_FUNC_IMPL(__imp__sub_830FB040) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-3792
	ctx.r4.s64 = ctx.r10.s64 + -3792;
	// addi r11,r11,24864
	ctx.r11.s64 = ctx.r11.s64 + 24864;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-15092
	ctx.r3.s64 = ctx.r10.s64 + -15092;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FB090;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB0A0"))) PPC_WEAK_FUNC(sub_830FB0A0);
PPC_FUNC_IMPL(__imp__sub_830FB0A0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-7420
	ctx.r4.s64 = ctx.r10.s64 + -7420;
	// addi r11,r11,25104
	ctx.r11.s64 = ctx.r11.s64 + 25104;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-7640
	ctx.r3.s64 = ctx.r10.s64 + -7640;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FB0F0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB100"))) PPC_WEAK_FUNC(sub_830FB100);
PPC_FUNC_IMPL(__imp__sub_830FB100) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-4400
	ctx.r4.s64 = ctx.r10.s64 + -4400;
	// addi r11,r11,25124
	ctx.r11.s64 = ctx.r11.s64 + 25124;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-13940
	ctx.r3.s64 = ctx.r10.s64 + -13940;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FB150;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB160"))) PPC_WEAK_FUNC(sub_830FB160);
PPC_FUNC_IMPL(__imp__sub_830FB160) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-4268
	ctx.r4.s64 = ctx.r10.s64 + -4268;
	// addi r11,r11,25144
	ctx.r11.s64 = ctx.r11.s64 + 25144;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-11024
	ctx.r3.s64 = ctx.r10.s64 + -11024;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FB1B0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB1C0"))) PPC_WEAK_FUNC(sub_830FB1C0);
PPC_FUNC_IMPL(__imp__sub_830FB1C0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-3740
	ctx.r4.s64 = ctx.r10.s64 + -3740;
	// addi r11,r11,25164
	ctx.r11.s64 = ctx.r11.s64 + 25164;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-4076
	ctx.r3.s64 = ctx.r10.s64 + -4076;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FB210;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB220"))) PPC_WEAK_FUNC(sub_830FB220);
PPC_FUNC_IMPL(__imp__sub_830FB220) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-2748
	ctx.r4.s64 = ctx.r10.s64 + -2748;
	// addi r11,r11,25184
	ctx.r11.s64 = ctx.r11.s64 + 25184;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-7460
	ctx.r3.s64 = ctx.r10.s64 + -7460;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FB270;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB280"))) PPC_WEAK_FUNC(sub_830FB280);
PPC_FUNC_IMPL(__imp__sub_830FB280) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-2680
	ctx.r4.s64 = ctx.r10.s64 + -2680;
	// addi r11,r11,25204
	ctx.r11.s64 = ctx.r11.s64 + 25204;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1412
	ctx.r3.s64 = ctx.r10.s64 + -1412;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FB2D0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB2E0"))) PPC_WEAK_FUNC(sub_830FB2E0);
PPC_FUNC_IMPL(__imp__sub_830FB2E0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-3584
	ctx.r4.s64 = ctx.r10.s64 + -3584;
	// addi r11,r11,25224
	ctx.r11.s64 = ctx.r11.s64 + 25224;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1952
	ctx.r3.s64 = ctx.r10.s64 + -1952;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FB330;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB340"))) PPC_WEAK_FUNC(sub_830FB340);
PPC_FUNC_IMPL(__imp__sub_830FB340) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-3400
	ctx.r4.s64 = ctx.r10.s64 + -3400;
	// addi r11,r11,25344
	ctx.r11.s64 = ctx.r11.s64 + 25344;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-10988
	ctx.r3.s64 = ctx.r10.s64 + -10988;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FB390;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB3A0"))) PPC_WEAK_FUNC(sub_830FB3A0);
PPC_FUNC_IMPL(__imp__sub_830FB3A0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-3172
	ctx.r4.s64 = ctx.r10.s64 + -3172;
	// addi r11,r11,25504
	ctx.r11.s64 = ctx.r11.s64 + 25504;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-5048
	ctx.r3.s64 = ctx.r10.s64 + -5048;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FB3F0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB400"))) PPC_WEAK_FUNC(sub_830FB400);
PPC_FUNC_IMPL(__imp__sub_830FB400) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-2976
	ctx.r4.s64 = ctx.r10.s64 + -2976;
	// addi r11,r11,25744
	ctx.r11.s64 = ctx.r11.s64 + 25744;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-8720
	ctx.r3.s64 = ctx.r10.s64 + -8720;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FB450;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB460"))) PPC_WEAK_FUNC(sub_830FB460);
PPC_FUNC_IMPL(__imp__sub_830FB460) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-2812
	ctx.r4.s64 = ctx.r10.s64 + -2812;
	// addi r11,r11,25904
	ctx.r11.s64 = ctx.r11.s64 + 25904;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-4616
	ctx.r3.s64 = ctx.r10.s64 + -4616;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FB4B0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB4C0"))) PPC_WEAK_FUNC(sub_830FB4C0);
PPC_FUNC_IMPL(__imp__sub_830FB4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r7,r10,26064
	ctx.r7.s64 = ctx.r10.s64 + 26064;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r10,-5048
	ctx.r4.s64 = ctx.r10.s64 + -5048;
	// addi r11,r11,25688
	ctx.r11.s64 = ctx.r11.s64 + 25688;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-8324
	ctx.r3.s64 = ctx.r10.s64 + -8324;
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
	ctx.lr = 0x830FB518;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB528"))) PPC_WEAK_FUNC(sub_830FB528);
PPC_FUNC_IMPL(__imp__sub_830FB528) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-4904
	ctx.r4.s64 = ctx.r10.s64 + -4904;
	// addi r11,r11,26304
	ctx.r11.s64 = ctx.r11.s64 + 26304;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-11240
	ctx.r3.s64 = ctx.r10.s64 + -11240;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FB578;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB588"))) PPC_WEAK_FUNC(sub_830FB588);
PPC_FUNC_IMPL(__imp__sub_830FB588) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-10356
	ctx.r4.s64 = ctx.r10.s64 + -10356;
	// addi r11,r11,26384
	ctx.r11.s64 = ctx.r11.s64 + 26384;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1376
	ctx.r3.s64 = ctx.r10.s64 + -1376;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FB5D8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB5E8"))) PPC_WEAK_FUNC(sub_830FB5E8);
PPC_FUNC_IMPL(__imp__sub_830FB5E8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-10004
	ctx.r4.s64 = ctx.r10.s64 + -10004;
	// addi r11,r11,26664
	ctx.r11.s64 = ctx.r11.s64 + 26664;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-4040
	ctx.r3.s64 = ctx.r10.s64 + -4040;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FB638;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB648"))) PPC_WEAK_FUNC(sub_830FB648);
PPC_FUNC_IMPL(__imp__sub_830FB648) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-10836
	ctx.r4.s64 = ctx.r10.s64 + -10836;
	// addi r11,r11,25684
	ctx.r11.s64 = ctx.r11.s64 + 25684;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-15596
	ctx.r3.s64 = ctx.r10.s64 + -15596;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FB698;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB6A8"))) PPC_WEAK_FUNC(sub_830FB6A8);
PPC_FUNC_IMPL(__imp__sub_830FB6A8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-10800
	ctx.r4.s64 = ctx.r10.s64 + -10800;
	// addi r11,r11,26044
	ctx.r11.s64 = ctx.r11.s64 + 26044;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-5876
	ctx.r3.s64 = ctx.r10.s64 + -5876;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FB6F8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB708"))) PPC_WEAK_FUNC(sub_830FB708);
PPC_FUNC_IMPL(__imp__sub_830FB708) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-7424
	ctx.r5.s64 = ctx.r10.s64 + -7424;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-8276
	ctx.r4.s64 = ctx.r10.s64 + -8276;
	// addi r11,r11,26604
	ctx.r11.s64 = ctx.r11.s64 + 26604;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-16136
	ctx.r3.s64 = ctx.r10.s64 + -16136;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FB75C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB770"))) PPC_WEAK_FUNC(sub_830FB770);
PPC_FUNC_IMPL(__imp__sub_830FB770) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-7424
	ctx.r5.s64 = ctx.r10.s64 + -7424;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r11,r11,26844
	ctx.r11.s64 = ctx.r11.s64 + 26844;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-15344
	ctx.r3.s64 = ctx.r10.s64 + -15344;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FB7C4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB7D8"))) PPC_WEAK_FUNC(sub_830FB7D8);
PPC_FUNC_IMPL(__imp__sub_830FB7D8) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,22828
	ctx.r4.s64 = ctx.r10.s64 + 22828;
	// addi r11,r11,26904
	ctx.r11.s64 = ctx.r11.s64 + 26904;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-2816
	ctx.r3.s64 = ctx.r10.s64 + -2816;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FB828;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB838"))) PPC_WEAK_FUNC(sub_830FB838);
PPC_FUNC_IMPL(__imp__sub_830FB838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r10,r10,-22984
	ctx.r10.s64 = ctx.r10.s64 + -22984;
	// lwz r11,27944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27944);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB850"))) PPC_WEAK_FUNC(sub_830FB850);
PPC_FUNC_IMPL(__imp__sub_830FB850) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-1088
	ctx.r5.s64 = ctx.r10.s64 + -1088;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r4,r10,22908
	ctx.r4.s64 = ctx.r10.s64 + 22908;
	// addi r11,r11,-22984
	ctx.r11.s64 = ctx.r11.s64 + -22984;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-9800
	ctx.r3.s64 = ctx.r10.s64 + -9800;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FB8A4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB8B8"))) PPC_WEAK_FUNC(sub_830FB8B8);
PPC_FUNC_IMPL(__imp__sub_830FB8B8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,22932
	ctx.r4.s64 = ctx.r10.s64 + 22932;
	// addi r11,r11,26984
	ctx.r11.s64 = ctx.r11.s64 + 26984;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-13436
	ctx.r3.s64 = ctx.r10.s64 + -13436;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FB908;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB918"))) PPC_WEAK_FUNC(sub_830FB918);
PPC_FUNC_IMPL(__imp__sub_830FB918) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-1088
	ctx.r5.s64 = ctx.r10.s64 + -1088;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,22960
	ctx.r4.s64 = ctx.r10.s64 + 22960;
	// addi r11,r11,27064
	ctx.r11.s64 = ctx.r11.s64 + 27064;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-13976
	ctx.r3.s64 = ctx.r10.s64 + -13976;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FB96C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB980"))) PPC_WEAK_FUNC(sub_830FB980);
PPC_FUNC_IMPL(__imp__sub_830FB980) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-8544
	ctx.r4.s64 = ctx.r10.s64 + -8544;
	// addi r11,r11,27224
	ctx.r11.s64 = ctx.r11.s64 + 27224;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3788
	ctx.r3.s64 = ctx.r10.s64 + -3788;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FB9D0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FB9E0"))) PPC_WEAK_FUNC(sub_830FB9E0);
PPC_FUNC_IMPL(__imp__sub_830FB9E0) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,22980
	ctx.r4.s64 = ctx.r10.s64 + 22980;
	// addi r11,r11,26924
	ctx.r11.s64 = ctx.r11.s64 + 26924;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-13544
	ctx.r3.s64 = ctx.r10.s64 + -13544;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FBA30;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FBA40"))) PPC_WEAK_FUNC(sub_830FBA40);
PPC_FUNC_IMPL(__imp__sub_830FBA40) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-8528
	ctx.r4.s64 = ctx.r10.s64 + -8528;
	// addi r11,r11,27304
	ctx.r11.s64 = ctx.r11.s64 + 27304;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1124
	ctx.r3.s64 = ctx.r10.s64 + -1124;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FBA90;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FBAA0"))) PPC_WEAK_FUNC(sub_830FBAA0);
PPC_FUNC_IMPL(__imp__sub_830FBAA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-1124
	ctx.r5.s64 = ctx.r10.s64 + -1124;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-8492
	ctx.r4.s64 = ctx.r10.s64 + -8492;
	// addi r11,r11,27364
	ctx.r11.s64 = ctx.r11.s64 + 27364;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-13796
	ctx.r3.s64 = ctx.r10.s64 + -13796;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FBAF4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FBB08"))) PPC_WEAK_FUNC(sub_830FBB08);
PPC_FUNC_IMPL(__imp__sub_830FBB08) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,23016
	ctx.r4.s64 = ctx.r10.s64 + 23016;
	// addi r11,r11,27404
	ctx.r11.s64 = ctx.r11.s64 + 27404;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-2780
	ctx.r3.s64 = ctx.r10.s64 + -2780;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FBB58;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FBB68"))) PPC_WEAK_FUNC(sub_830FBB68);
PPC_FUNC_IMPL(__imp__sub_830FBB68) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,8
	ctx.r8.s64 = 8;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-8568
	ctx.r4.s64 = ctx.r10.s64 + -8568;
	// addi r11,r11,27464
	ctx.r11.s64 = ctx.r11.s64 + 27464;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-4508
	ctx.r3.s64 = ctx.r10.s64 + -4508;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FBBB8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FBBC8"))) PPC_WEAK_FUNC(sub_830FBBC8);
PPC_FUNC_IMPL(__imp__sub_830FBBC8) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,16
	ctx.r8.s64 = 16;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,23044
	ctx.r4.s64 = ctx.r10.s64 + 23044;
	// addi r11,r11,27624
	ctx.r11.s64 = ctx.r11.s64 + 27624;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-2024
	ctx.r3.s64 = ctx.r10.s64 + -2024;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FBC18;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FBC28"))) PPC_WEAK_FUNC(sub_830FBC28);
PPC_FUNC_IMPL(__imp__sub_830FBC28) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-7424
	ctx.r5.s64 = ctx.r10.s64 + -7424;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,23060
	ctx.r4.s64 = ctx.r10.s64 + 23060;
	// addi r11,r11,28008
	ctx.r11.s64 = ctx.r11.s64 + 28008;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1088
	ctx.r3.s64 = ctx.r10.s64 + -1088;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FBC7C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FBC90"))) PPC_WEAK_FUNC(sub_830FBC90);
PPC_FUNC_IMPL(__imp__sub_830FBC90) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,5
	ctx.r8.s64 = 5;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,23076
	ctx.r4.s64 = ctx.r10.s64 + 23076;
	// addi r11,r11,28088
	ctx.r11.s64 = ctx.r11.s64 + 28088;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-5264
	ctx.r3.s64 = ctx.r10.s64 + -5264;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FBCE0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FBCF0"))) PPC_WEAK_FUNC(sub_830FBCF0);
PPC_FUNC_IMPL(__imp__sub_830FBCF0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-7424
	ctx.r5.s64 = ctx.r10.s64 + -7424;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,23096
	ctx.r4.s64 = ctx.r10.s64 + 23096;
	// addi r11,r11,27948
	ctx.r11.s64 = ctx.r11.s64 + 27948;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-14804
	ctx.r3.s64 = ctx.r10.s64 + -14804;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FBD44;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FBD58"))) PPC_WEAK_FUNC(sub_830FBD58);
PPC_FUNC_IMPL(__imp__sub_830FBD58) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,23108
	ctx.r4.s64 = ctx.r10.s64 + 23108;
	// addi r11,r11,28192
	ctx.r11.s64 = ctx.r11.s64 + 28192;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-15056
	ctx.r3.s64 = ctx.r10.s64 + -15056;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FBDA8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FBDB8"))) PPC_WEAK_FUNC(sub_830FBDB8);
PPC_FUNC_IMPL(__imp__sub_830FBDB8) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,8
	ctx.r8.s64 = 8;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,23132
	ctx.r4.s64 = ctx.r10.s64 + 23132;
	// addi r11,r11,28272
	ctx.r11.s64 = ctx.r11.s64 + 28272;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-6848
	ctx.r3.s64 = ctx.r10.s64 + -6848;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FBE08;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FBE18"))) PPC_WEAK_FUNC(sub_830FBE18);
PPC_FUNC_IMPL(__imp__sub_830FBE18) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,6
	ctx.r8.s64 = 6;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,23160
	ctx.r4.s64 = ctx.r10.s64 + 23160;
	// addi r11,r11,28432
	ctx.r11.s64 = ctx.r11.s64 + 28432;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-1268
	ctx.r3.s64 = ctx.r10.s64 + -1268;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FBE68;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FBE78"))) PPC_WEAK_FUNC(sub_830FBE78);
PPC_FUNC_IMPL(__imp__sub_830FBE78) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,13
	ctx.r8.s64 = 13;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,23192
	ctx.r4.s64 = ctx.r10.s64 + 23192;
	// addi r11,r11,28552
	ctx.r11.s64 = ctx.r11.s64 + 28552;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-5840
	ctx.r3.s64 = ctx.r10.s64 + -5840;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FBEC8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FBED8"))) PPC_WEAK_FUNC(sub_830FBED8);
PPC_FUNC_IMPL(__imp__sub_830FBED8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,26368
	ctx.r4.s64 = ctx.r10.s64 + 26368;
	// addi r11,r11,28816
	ctx.r11.s64 = ctx.r11.s64 + 28816;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-9656
	ctx.r3.s64 = ctx.r10.s64 + -9656;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FBF28;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FBF38"))) PPC_WEAK_FUNC(sub_830FBF38);
PPC_FUNC_IMPL(__imp__sub_830FBF38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,25860
	ctx.r9.s64 = ctx.r10.s64 + 25860;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r5,r10,-9656
	ctx.r5.s64 = ctx.r10.s64 + -9656;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,28896
	ctx.r11.s64 = ctx.r11.s64 + 28896;
	// addi r4,r10,27276
	ctx.r4.s64 = ctx.r10.s64 + 27276;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-6920
	ctx.r3.s64 = ctx.r10.s64 + -6920;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830FBF90;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FBFA0"))) PPC_WEAK_FUNC(sub_830FBFA0);
PPC_FUNC_IMPL(__imp__sub_830FBFA0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-9224
	ctx.r3.s64 = ctx.r10.s64 + -9224;
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
	ctx.lr = 0x830FBFE8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FBFF8"))) PPC_WEAK_FUNC(sub_830FBFF8);
PPC_FUNC_IMPL(__imp__sub_830FBFF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-1988
	ctx.r5.s64 = ctx.r10.s64 + -1988;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,27584
	ctx.r4.s64 = ctx.r10.s64 + 27584;
	// addi r11,r11,29000
	ctx.r11.s64 = ctx.r11.s64 + 29000;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-4364
	ctx.r3.s64 = ctx.r10.s64 + -4364;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FC04C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC060"))) PPC_WEAK_FUNC(sub_830FC060);
PPC_FUNC_IMPL(__imp__sub_830FC060) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-14300
	ctx.r3.s64 = ctx.r10.s64 + -14300;
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
	ctx.lr = 0x830FC0A8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC0B8"))) PPC_WEAK_FUNC(sub_830FC0B8);
PPC_FUNC_IMPL(__imp__sub_830FC0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r10,r10,-19644
	ctx.r10.s64 = ctx.r10.s64 + -19644;
	// lwz r11,28812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28812);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC0D0"))) PPC_WEAK_FUNC(sub_830FC0D0);
PPC_FUNC_IMPL(__imp__sub_830FC0D0) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r10,25912
	ctx.r9.s64 = ctx.r10.s64 + 25912;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r5,r10,-7424
	ctx.r5.s64 = ctx.r10.s64 + -7424;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r4,r10,30448
	ctx.r4.s64 = ctx.r10.s64 + 30448;
	// addi r11,r11,-19644
	ctx.r11.s64 = ctx.r11.s64 + -19644;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r3,r10,-11852
	ctx.r3.s64 = ctx.r10.s64 + -11852;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FC12C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC140"))) PPC_WEAK_FUNC(sub_830FC140);
PPC_FUNC_IMPL(__imp__sub_830FC140) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,25948
	ctx.r9.s64 = ctx.r10.s64 + 25948;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,-7424
	ctx.r5.s64 = ctx.r10.s64 + -7424;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r4,r10,30804
	ctx.r4.s64 = ctx.r10.s64 + 30804;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-2852
	ctx.r3.s64 = ctx.r10.s64 + -2852;
	// li r10,1
	ctx.r10.s64 = 1;
	// bl 0x82db4000
	ctx.lr = 0x830FC190;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC1A0"))) PPC_WEAK_FUNC(sub_830FC1A0);
PPC_FUNC_IMPL(__imp__sub_830FC1A0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-13184
	ctx.r3.s64 = ctx.r10.s64 + -13184;
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
	ctx.lr = 0x830FC1E8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC1F8"))) PPC_WEAK_FUNC(sub_830FC1F8);
PPC_FUNC_IMPL(__imp__sub_830FC1F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-2852
	ctx.r5.s64 = ctx.r10.s64 + -2852;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,29944
	ctx.r4.s64 = ctx.r10.s64 + 29944;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-11960
	ctx.r3.s64 = ctx.r10.s64 + -11960;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FC244;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC258"))) PPC_WEAK_FUNC(sub_830FC258);
PPC_FUNC_IMPL(__imp__sub_830FC258) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-11852
	ctx.r5.s64 = ctx.r10.s64 + -11852;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,30644
	ctx.r4.s64 = ctx.r10.s64 + 30644;
	// addi r11,r11,29080
	ctx.r11.s64 = ctx.r11.s64 + 29080;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-8648
	ctx.r3.s64 = ctx.r10.s64 + -8648;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FC2AC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC2C0"))) PPC_WEAK_FUNC(sub_830FC2C0);
PPC_FUNC_IMPL(__imp__sub_830FC2C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-11852
	ctx.r5.s64 = ctx.r10.s64 + -11852;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,25616
	ctx.r4.s64 = ctx.r10.s64 + 25616;
	// addi r11,r11,29140
	ctx.r11.s64 = ctx.r11.s64 + 29140;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-13256
	ctx.r3.s64 = ctx.r10.s64 + -13256;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FC314;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC328"))) PPC_WEAK_FUNC(sub_830FC328);
PPC_FUNC_IMPL(__imp__sub_830FC328) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-11852
	ctx.r5.s64 = ctx.r10.s64 + -11852;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,29284
	ctx.r4.s64 = ctx.r10.s64 + 29284;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-5192
	ctx.r3.s64 = ctx.r10.s64 + -5192;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FC374;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC388"))) PPC_WEAK_FUNC(sub_830FC388);
PPC_FUNC_IMPL(__imp__sub_830FC388) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-5156
	ctx.r3.s64 = ctx.r10.s64 + -5156;
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
	ctx.lr = 0x830FC3D0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC3E0"))) PPC_WEAK_FUNC(sub_830FC3E0);
PPC_FUNC_IMPL(__imp__sub_830FC3E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-7424
	ctx.r5.s64 = ctx.r10.s64 + -7424;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,32332
	ctx.r4.s64 = ctx.r10.s64 + 32332;
	// addi r11,r11,29160
	ctx.r11.s64 = ctx.r11.s64 + 29160;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-4292
	ctx.r3.s64 = ctx.r10.s64 + -4292;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FC434;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC448"))) PPC_WEAK_FUNC(sub_830FC448);
PPC_FUNC_IMPL(__imp__sub_830FC448) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-9728
	ctx.r3.s64 = ctx.r10.s64 + -9728;
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
	ctx.lr = 0x830FC490;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC4A0"))) PPC_WEAK_FUNC(sub_830FC4A0);
PPC_FUNC_IMPL(__imp__sub_830FC4A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-9728
	ctx.r5.s64 = ctx.r10.s64 + -9728;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,30508
	ctx.r4.s64 = ctx.r10.s64 + 30508;
	// addi r11,r11,29200
	ctx.r11.s64 = ctx.r11.s64 + 29200;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3212
	ctx.r3.s64 = ctx.r10.s64 + -3212;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FC4F4;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC508"))) PPC_WEAK_FUNC(sub_830FC508);
PPC_FUNC_IMPL(__imp__sub_830FC508) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,25960
	ctx.r4.s64 = ctx.r10.s64 + 25960;
	// addi r11,r11,29240
	ctx.r11.s64 = ctx.r11.s64 + 29240;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-6128
	ctx.r3.s64 = ctx.r10.s64 + -6128;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FC558;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC568"))) PPC_WEAK_FUNC(sub_830FC568);
PPC_FUNC_IMPL(__imp__sub_830FC568) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-12392
	ctx.r5.s64 = ctx.r10.s64 + -12392;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-32484
	ctx.r4.s64 = ctx.r10.s64 + -32484;
	// addi r11,r11,29220
	ctx.r11.s64 = ctx.r11.s64 + 29220;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-3284
	ctx.r3.s64 = ctx.r10.s64 + -3284;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FC5BC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC5D0"))) PPC_WEAK_FUNC(sub_830FC5D0);
PPC_FUNC_IMPL(__imp__sub_830FC5D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-4292
	ctx.r5.s64 = ctx.r10.s64 + -4292;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,-32376
	ctx.r4.s64 = ctx.r10.s64 + -32376;
	// addi r11,r11,29320
	ctx.r11.s64 = ctx.r11.s64 + 29320;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-13076
	ctx.r3.s64 = ctx.r10.s64 + -13076;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FC624;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC638"))) PPC_WEAK_FUNC(sub_830FC638);
PPC_FUNC_IMPL(__imp__sub_830FC638) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-4292
	ctx.r5.s64 = ctx.r10.s64 + -4292;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,29972
	ctx.r4.s64 = ctx.r10.s64 + 29972;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r10,-11060
	ctx.r3.s64 = ctx.r10.s64 + -11060;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FC684;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC698"))) PPC_WEAK_FUNC(sub_830FC698);
PPC_FUNC_IMPL(__imp__sub_830FC698) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,25984
	ctx.r9.s64 = ctx.r10.s64 + 25984;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r5,r10,-12392
	ctx.r5.s64 = ctx.r10.s64 + -12392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,29364
	ctx.r11.s64 = ctx.r11.s64 + 29364;
	// addi r4,r10,24728
	ctx.r4.s64 = ctx.r10.s64 + 24728;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-11132
	ctx.r3.s64 = ctx.r10.s64 + -11132;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830FC6F0;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC700"))) PPC_WEAK_FUNC(sub_830FC700);
PPC_FUNC_IMPL(__imp__sub_830FC700) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r5,r10,-4292
	ctx.r5.s64 = ctx.r10.s64 + -4292;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r11,r11,29404
	ctx.r11.s64 = ctx.r11.s64 + 29404;
	// addi r4,r10,32456
	ctx.r4.s64 = ctx.r10.s64 + 32456;
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
	// addi r3,r10,-15704
	ctx.r3.s64 = ctx.r10.s64 + -15704;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830FC750;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC760"))) PPC_WEAK_FUNC(sub_830FC760);
PPC_FUNC_IMPL(__imp__sub_830FC760) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r10,26020
	ctx.r9.s64 = ctx.r10.s64 + 26020;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r5,r10,-11600
	ctx.r5.s64 = ctx.r10.s64 + -11600;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r11,29428
	ctx.r11.s64 = ctx.r11.s64 + 29428;
	// addi r4,r10,31032
	ctx.r4.s64 = ctx.r10.s64 + 31032;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,-12392
	ctx.r3.s64 = ctx.r10.s64 + -12392;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82db4000
	ctx.lr = 0x830FC7B8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC7C8"))) PPC_WEAK_FUNC(sub_830FC7C8);
PPC_FUNC_IMPL(__imp__sub_830FC7C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-12392
	ctx.r5.s64 = ctx.r10.s64 + -12392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,26256
	ctx.r4.s64 = ctx.r10.s64 + 26256;
	// addi r11,r11,29448
	ctx.r11.s64 = ctx.r11.s64 + 29448;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r3,r10,-10880
	ctx.r3.s64 = ctx.r10.s64 + -10880;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FC81C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC830"))) PPC_WEAK_FUNC(sub_830FC830);
PPC_FUNC_IMPL(__imp__sub_830FC830) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-15704
	ctx.r5.s64 = ctx.r10.s64 + -15704;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,26916
	ctx.r4.s64 = ctx.r10.s64 + 26916;
	// addi r11,r11,29548
	ctx.r11.s64 = ctx.r11.s64 + 29548;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-14840
	ctx.r3.s64 = ctx.r10.s64 + -14840;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FC884;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC898"))) PPC_WEAK_FUNC(sub_830FC898);
PPC_FUNC_IMPL(__imp__sub_830FC898) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-12392
	ctx.r5.s64 = ctx.r10.s64 + -12392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,27760
	ctx.r4.s64 = ctx.r10.s64 + 27760;
	// addi r11,r11,29608
	ctx.r11.s64 = ctx.r11.s64 + 29608;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-4328
	ctx.r3.s64 = ctx.r10.s64 + -4328;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FC8EC;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC900"))) PPC_WEAK_FUNC(sub_830FC900);
PPC_FUNC_IMPL(__imp__sub_830FC900) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-12392
	ctx.r5.s64 = ctx.r10.s64 + -12392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,28680
	ctx.r4.s64 = ctx.r10.s64 + 28680;
	// addi r11,r11,29668
	ctx.r11.s64 = ctx.r11.s64 + 29668;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-7136
	ctx.r3.s64 = ctx.r10.s64 + -7136;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FC954;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC968"))) PPC_WEAK_FUNC(sub_830FC968);
PPC_FUNC_IMPL(__imp__sub_830FC968) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,28032
	ctx.r4.s64 = ctx.r10.s64 + 28032;
	// addi r11,r11,29728
	ctx.r11.s64 = ctx.r11.s64 + 29728;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-5660
	ctx.r3.s64 = ctx.r10.s64 + -5660;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FC9B8;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FC9C8"))) PPC_WEAK_FUNC(sub_830FC9C8);
PPC_FUNC_IMPL(__imp__sub_830FC9C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-12392
	ctx.r5.s64 = ctx.r10.s64 + -12392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,28068
	ctx.r4.s64 = ctx.r10.s64 + 28068;
	// addi r11,r11,29792
	ctx.r11.s64 = ctx.r11.s64 + 29792;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-12860
	ctx.r3.s64 = ctx.r10.s64 + -12860;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FCA1C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FCA30"))) PPC_WEAK_FUNC(sub_830FCA30);
PPC_FUNC_IMPL(__imp__sub_830FCA30) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r9,r11,26072
	ctx.r9.s64 = ctx.r11.s64 + 26072;
	// addi r5,r10,-12392
	ctx.r5.s64 = ctx.r10.s64 + -12392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// li r7,6
	ctx.r7.s64 = 6;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,29800
	ctx.r4.s64 = ctx.r10.s64 + 29800;
	// addi r11,r11,29896
	ctx.r11.s64 = ctx.r11.s64 + 29896;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-7496
	ctx.r3.s64 = ctx.r10.s64 + -7496;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FCA8C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FCAA0"))) PPC_WEAK_FUNC(sub_830FCAA0);
PPC_FUNC_IMPL(__imp__sub_830FCAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lwz r10,30020(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30020);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r11,r11,-20496
	ctx.r11.s64 = ctx.r11.s64 + -20496;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r10,29892(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29892);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FCAC8"))) PPC_WEAK_FUNC(sub_830FCAC8);
PPC_FUNC_IMPL(__imp__sub_830FCAC8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r4,r10,29148
	ctx.r4.s64 = ctx.r10.s64 + 29148;
	// addi r11,r11,-20496
	ctx.r11.s64 = ctx.r11.s64 + -20496;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-16028
	ctx.r3.s64 = ctx.r10.s64 + -16028;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FCB18;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FCB28"))) PPC_WEAK_FUNC(sub_830FCB28);
PPC_FUNC_IMPL(__imp__sub_830FCB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r10,r10,-20352
	ctx.r10.s64 = ctx.r10.s64 + -20352;
	// lwz r11,29892(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29892);
	// stw r11,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FCB40"))) PPC_WEAK_FUNC(sub_830FCB40);
PPC_FUNC_IMPL(__imp__sub_830FCB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r8,r10,-20352
	ctx.r8.s64 = ctx.r10.s64 + -20352;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r10,-16028
	ctx.r5.s64 = ctx.r10.s64 + -16028;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r11,26228
	ctx.r11.s64 = ctx.r11.s64 + 26228;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r10,29176
	ctx.r4.s64 = ctx.r10.s64 + 29176;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-944
	ctx.r3.s64 = ctx.r10.s64 + -944;
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
	ctx.lr = 0x830FCB9C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FCBB0"))) PPC_WEAK_FUNC(sub_830FCBB0);
PPC_FUNC_IMPL(__imp__sub_830FCBB0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r5,r10,-16028
	ctx.r5.s64 = ctx.r10.s64 + -16028;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// addi r4,r10,29212
	ctx.r4.s64 = ctx.r10.s64 + 29212;
	// addi r11,r11,30024
	ctx.r11.s64 = ctx.r11.s64 + 30024;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-9584
	ctx.r3.s64 = ctx.r10.s64 + -9584;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FCC04;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FCC18"))) PPC_WEAK_FUNC(sub_830FCC18);
PPC_FUNC_IMPL(__imp__sub_830FCC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31965
	ctx.r11.s64 = -2094858240;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r10,r10,-19232
	ctx.r10.s64 = ctx.r10.s64 + -19232;
	// lwz r11,31452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31452);
	// stw r11,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830FCC30"))) PPC_WEAK_FUNC(sub_830FCC30);
PPC_FUNC_IMPL(__imp__sub_830FCC30) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r9,r11,26192
	ctx.r9.s64 = ctx.r11.s64 + 26192;
	// addi r5,r10,-15704
	ctx.r5.s64 = ctx.r10.s64 + -15704;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r8,r9,72
	ctx.r8.s64 = ctx.r9.s64 + 72;
	// li r7,7
	ctx.r7.s64 = 7;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r4,r10,29248
	ctx.r4.s64 = ctx.r10.s64 + 29248;
	// addi r11,r11,-19232
	ctx.r11.s64 = ctx.r11.s64 + -19232;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,-15524
	ctx.r3.s64 = ctx.r10.s64 + -15524;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db4000
	ctx.lr = 0x830FCC8C;
	sub_82DB4000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

