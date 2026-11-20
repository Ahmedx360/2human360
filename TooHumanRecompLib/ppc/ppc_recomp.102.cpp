#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_826BE270"))) PPC_WEAK_FUNC(sub_826BE270);
PPC_FUNC_IMPL(__imp__sub_826BE270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826BE278;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82713ce0
	ctx.lr = 0x826BE284;
	sub_82713CE0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,-32616
	ctx.r9.s64 = ctx.r11.s64 + -32616;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// lfs f0,-32616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32616);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r10,-15160
	ctx.r11.s64 = ctx.r10.s64 + -15160;
	// addi r10,r8,-14144
	ctx.r10.s64 = ctx.r8.s64 + -14144;
	// stfs f0,1420(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1420, temp.u32);
	// lfs f0,-204(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -204);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r7,-15204
	ctx.r8.s64 = ctx.r7.s64 + -15204;
	// lfs f13,-60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -60);
	ctx.f13.f64 = double(temp.f32);
	// li r7,40
	ctx.r7.s64 = 40;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f0,1416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1416, temp.u32);
	// stfs f13,1408(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1408, temp.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// stw r7,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r7.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r9,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r9.u32);
	// stw r6,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r6.u32);
	// addi r3,r11,-17092
	ctx.r3.s64 = ctx.r11.s64 + -17092;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// addi r29,r11,1268
	ctx.r29.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x826BE2F8;
	sub_82816528(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r31,1468
	ctx.r4.s64 = ctx.r31.s64 + 1468;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823cf190
	ctx.lr = 0x826BE314;
	sub_823CF190(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// addi r3,r10,-17044
	ctx.r3.s64 = ctx.r10.s64 + -17044;
	// addi r29,r11,1268
	ctx.r29.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x826BE328;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r31,1472
	ctx.r4.s64 = ctx.r31.s64 + 1472;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x823cf190
	ctx.lr = 0x826BE340;
	sub_823CF190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BE350"))) PPC_WEAK_FUNC(sub_826BE350);
PPC_FUNC_IMPL(__imp__sub_826BE350) {
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
	// bl 0x826b8e58
	ctx.lr = 0x826BE368;
	sub_826B8E58(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// lis r6,-32228
	ctx.r6.s64 = -2112094208;
	// lfs f0,-12104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32716(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32716);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r8,-10536
	ctx.r11.s64 = ctx.r8.s64 + -10536;
	// lfs f12,16772(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16772);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r7,-9360
	ctx.r10.s64 = ctx.r7.s64 + -9360;
	// addi r9,r6,29100
	ctx.r9.s64 = ctx.r6.s64 + 29100;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r8,16640
	ctx.r8.s64 = 16640;
	// stfs f0,1512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1512, temp.u32);
	// stfs f13,696(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stfs f12,1504(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1504, temp.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stw r8,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r8.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-16912
	ctx.r3.s64 = ctx.r11.s64 + -16912;
	// bl 0x828165a8
	ctx.lr = 0x826BE3C4;
	sub_828165A8(ctx, base);
	// lis r11,12328
	ctx.r11.s64 = 807927808;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r3.u32);
	// ori r11,r11,56146
	ctx.r11.u64 = ctx.r11.u64 | 56146;
	// stw r10,1776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1776, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BE3F8"))) PPC_WEAK_FUNC(sub_826BE3F8);
PPC_FUNC_IMPL(__imp__sub_826BE3F8) {
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
	// bl 0x826b8e58
	ctx.lr = 0x826BE410;
	sub_826B8E58(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// lis r6,-32228
	ctx.r6.s64 = -2112094208;
	// lfs f0,-12104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32716(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32716);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r8,-9304
	ctx.r11.s64 = ctx.r8.s64 + -9304;
	// lfs f12,16772(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16772);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r7,-8128
	ctx.r10.s64 = ctx.r7.s64 + -8128;
	// addi r9,r6,29100
	ctx.r9.s64 = ctx.r6.s64 + 29100;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r8,16640
	ctx.r8.s64 = 16640;
	// stfs f0,1512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1512, temp.u32);
	// stfs f13,696(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stfs f12,1504(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1504, temp.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stw r8,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r8.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-16840
	ctx.r3.s64 = ctx.r11.s64 + -16840;
	// bl 0x828165a8
	ctx.lr = 0x826BE46C;
	sub_828165A8(ctx, base);
	// lis r11,860
	ctx.r11.s64 = 56360960;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r3.u32);
	// ori r11,r11,64654
	ctx.r11.u64 = ctx.r11.u64 | 64654;
	// stw r10,1776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1776, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BE4A0"))) PPC_WEAK_FUNC(sub_826BE4A0);
PPC_FUNC_IMPL(__imp__sub_826BE4A0) {
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
	// bl 0x826b9508
	ctx.lr = 0x826BE4B8;
	sub_826B9508(ctx, base);
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x824090e0
	ctx.lr = 0x826BE4C0;
	sub_824090E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826be4e0
	if (ctx.cr0.eq) goto loc_826BE4E0;
	// lfs f13,10400(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10400);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,10396(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10396);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f13,1512(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,1512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1512, temp.u32);
loc_826BE4E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BE4F8"))) PPC_WEAK_FUNC(sub_826BE4F8);
PPC_FUNC_IMPL(__imp__sub_826BE4F8) {
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
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x826bb580
	ctx.lr = 0x826BE520;
	sub_826BB580(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BE530"))) PPC_WEAK_FUNC(sub_826BE530);
PPC_FUNC_IMPL(__imp__sub_826BE530) {
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
	// bl 0x826b8e58
	ctx.lr = 0x826BE548;
	sub_826B8E58(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lis r7,-32228
	ctx.r7.s64 = -2112094208;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lfs f0,-12104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r8,-5664
	ctx.r11.s64 = ctx.r8.s64 + -5664;
	// lfs f13,16772(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16772);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,-6840
	ctx.r9.s64 = ctx.r9.s64 + -6840;
	// addi r10,r7,29100
	ctx.r10.s64 = ctx.r7.s64 + 29100;
	// stfs f0,1512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1512, temp.u32);
	// li r8,4352
	ctx.r8.s64 = 4352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stfs f13,1504(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1504, temp.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r8,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r8.u32);
	// addi r3,r9,-16768
	ctx.r3.s64 = ctx.r9.s64 + -16768;
	// bl 0x828165a8
	ctx.lr = 0x826BE598;
	sub_828165A8(ctx, base);
	// lis r11,700
	ctx.r11.s64 = 45875200;
	// lis r10,11719
	ctx.r10.s64 = 768016384;
	// stw r3,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r3.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r11,r11,20751
	ctx.r11.u64 = ctx.r11.u64 | 20751;
	// ori r10,r10,713
	ctx.r10.u64 = ctx.r10.u64 | 713;
	// stw r9,1776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1776, ctx.r9.u32);
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BE5D8"))) PPC_WEAK_FUNC(sub_826BE5D8);
PPC_FUNC_IMPL(__imp__sub_826BE5D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826BE5E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x826c3a28
	ctx.lr = 0x826BE5EC;
	sub_826C3A28(ctx, base);
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r10,r29,-27300
	ctx.r10.s64 = ctx.r29.s64 + -27300;
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// lfs f0,19204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19204);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lfs f13,-28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r11,r11,-3188
	ctx.r11.s64 = ctx.r11.s64 + -3188;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f0,24088(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24088);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r7,-4376
	ctx.r7.s64 = ctx.r7.s64 + -4376;
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r10,r10,-1896
	ctx.r10.s64 = ctx.r10.s64 + -1896;
	// lfs f13,912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stfs f0,1504(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1504, temp.u32);
	// stfs f13,696(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 696, temp.u32);
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// stw r10,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r10.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r31,1532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1532, ctx.r31.u32);
	// stw r31,956(r30)
	PPC_STORE_U32(ctx.r30.u32 + 956, ctx.r31.u32);
	// addi r3,r11,-16692
	ctx.r3.s64 = ctx.r11.s64 + -16692;
	// stw r6,1656(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1656, ctx.r6.u32);
	// stw r9,1652(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1652, ctx.r9.u32);
	// stw r27,1648(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1648, ctx.r27.u32);
	// stw r5,1660(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1660, ctx.r5.u32);
	// stw r4,1664(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1664, ctx.r4.u32);
	// stw r28,1668(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1668, ctx.r28.u32);
	// bl 0x828165a8
	ctx.lr = 0x826BE69C;
	sub_828165A8(ctx, base);
	// lis r11,15370
	ctx.r11.s64 = 1007288320;
	// lis r10,4732
	ctx.r10.s64 = 310116352;
	// lfs f0,-27300(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -27300);
	ctx.f0.f64 = double(temp.f32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r3,1616(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1616, ctx.r3.u32);
	// li r8,8320
	ctx.r8.s64 = 8320;
	// stfs f0,1924(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1924, temp.u32);
	// ori r11,r11,3343
	ctx.r11.u64 = ctx.r11.u64 | 3343;
	// stw r31,1848(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1848, ctx.r31.u32);
	// ori r10,r10,41584
	ctx.r10.u64 = ctx.r10.u64 | 41584;
	// stw r9,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r9.u32);
	// stw r8,1812(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1812, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,1588(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1588, ctx.r11.u32);
	// stw r10,1932(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1932, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BE6E0"))) PPC_WEAK_FUNC(sub_826BE6E0);
PPC_FUNC_IMPL(__imp__sub_826BE6E0) {
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
	// bl 0x826b9508
	ctx.lr = 0x826BE6F8;
	sub_826B9508(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f0,24000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1864(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1864, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BE718"))) PPC_WEAK_FUNC(sub_826BE718);
PPC_FUNC_IMPL(__imp__sub_826BE718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826BE720;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1928);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826be824
	if (!ctx.cr6.eq) goto loc_826BE824;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,1668(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// lwz r8,1656(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	// lis r6,4
	ctx.r6.s64 = 262144;
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// ld r9,1660(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1660);
	// lis r4,26666
	ctx.r4.s64 = 1747582976;
	// ld r7,1648(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1648);
	// ori r6,r6,8
	ctx.r6.u64 = ctx.r6.u64 | 8;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// ori r5,r5,128
	ctx.r5.u64 = ctx.r5.u64 | 128;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// ori r4,r4,18444
	ctx.r4.u64 = ctx.r4.u64 | 18444;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x826b9f28
	ctx.lr = 0x826BE790;
	sub_826B9F28(ctx, base);
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r3,1920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1920, ctx.r3.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// beq cr6,0x826be7c8
	if (ctx.cr6.eq) goto loc_826BE7C8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BE7C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x826be7cc
	goto loc_826BE7CC;
loc_826BE7C8:
	// li r6,0
	ctx.r6.s64 = 0;
loc_826BE7CC:
	// ld r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r30,152(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,1920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f4,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f4.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x82331120
	ctx.lr = 0x826BE818;
	sub_82331120(ctx, base);
	// lwz r10,1920(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r11.u32);
loc_826BE824:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BE830"))) PPC_WEAK_FUNC(sub_826BE830);
PPC_FUNC_IMPL(__imp__sub_826BE830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x826b91d0
	ctx.lr = 0x826BE848;
	sub_826B91D0(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r31,1532
	ctx.r4.s64 = ctx.r31.s64 + 1532;
	// addi r6,r11,-16636
	ctx.r6.s64 = ctx.r11.s64 + -16636;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f9a90
	ctx.lr = 0x826BE868;
	sub_824F9A90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BE880"))) PPC_WEAK_FUNC(sub_826BE880);
PPC_FUNC_IMPL(__imp__sub_826BE880) {
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
	// bl 0x826b9270
	ctx.lr = 0x826BE89C;
	sub_826B9270(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826be8d8
	if (!ctx.cr6.eq) goto loc_826BE8D8;
	// lwz r11,956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826be8d8
	if (!ctx.cr6.eq) goto loc_826BE8D8;
	// addi r11,r31,1928
	ctx.r11.s64 = ctx.r31.s64 + 1928;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82838fd0
	ctx.lr = 0x826BE8CC;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_826BE8D8:
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

__attribute__((alias("__imp__sub_826BE8F8"))) PPC_WEAK_FUNC(sub_826BE8F8);
PPC_FUNC_IMPL(__imp__sub_826BE8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826BE900;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x826b9318
	ctx.lr = 0x826BE910;
	sub_826B9318(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826be9a0
	if (!ctx.cr6.eq) goto loc_826BE9A0;
	// lwz r11,956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826be9a0
	if (!ctx.cr6.eq) goto loc_826BE9A0;
	// addi r30,r31,1928
	ctx.r30.s64 = ctx.r31.s64 + 1928;
	// addi r29,r31,424
	ctx.r29.s64 = ctx.r31.s64 + 424;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826BE944;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r3.u32);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BE968;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BE97C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826be9a0
	if (!ctx.cr0.eq) goto loc_826BE9A0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826BE994;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
loc_826BE9A0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BE9B0"))) PPC_WEAK_FUNC(sub_826BE9B0);
PPC_FUNC_IMPL(__imp__sub_826BE9B0) {
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
	// bl 0x829c63e8
	ctx.lr = 0x826BE9D0;
	sub_829C63E8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-16604
	ctx.r3.s64 = ctx.r11.s64 + -16604;
	// bl 0x82816528
	ctx.lr = 0x826BE9DC;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x826be9fc
	if (!ctx.cr6.eq) goto loc_826BE9FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1928(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1928);
	// lwz r11,1180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BE9FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826BE9FC:
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

__attribute__((alias("__imp__sub_826BEA18"))) PPC_WEAK_FUNC(sub_826BEA18);
PPC_FUNC_IMPL(__imp__sub_826BEA18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r4.u32);
	// beq cr6,0x826beab0
	if (ctx.cr6.eq) goto loc_826BEAB0;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x826beab0
	if (!ctx.cr6.eq) goto loc_826BEAB0;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// lfs f1,1924(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	ctx.f1.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,7608
	ctx.r11.s64 = ctx.r11.s64 + 7608;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c1c30
	ctx.lr = 0x826BEA6C;
	sub_826C1C30(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,472(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 472);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BEAB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826BEAB0:
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

__attribute__((alias("__imp__sub_826BEAC8"))) PPC_WEAK_FUNC(sub_826BEAC8);
PPC_FUNC_IMPL(__imp__sub_826BEAC8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1704(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1704, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BEAD8"))) PPC_WEAK_FUNC(sub_826BEAD8);
PPC_FUNC_IMPL(__imp__sub_826BEAD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r5.u64);
	// lwz r11,1928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1928);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826beb28
	if (!ctx.cr6.eq) goto loc_826BEB28;
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x826bb860
	ctx.lr = 0x826BEB08;
	sub_826BB860(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x826BEB18;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1932(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// bl 0x829c3740
	ctx.lr = 0x826BEB28;
	sub_829C3740(ctx, base);
loc_826BEB28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BEB40"))) PPC_WEAK_FUNC(sub_826BEB40);
PPC_FUNC_IMPL(__imp__sub_826BEB40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r5.u64);
	// lwz r7,184(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// rldicr r5,r7,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lwz r10,576(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// lwz r9,580(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x829c2588
	ctx.lr = 0x826BEB80;
	sub_829C2588(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x826BEB90;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1932(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// bl 0x829c3740
	ctx.lr = 0x826BEBA0;
	sub_829C3740(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,32760
	ctx.r11.s64 = ctx.r11.s64 + 32760;
	// lfs f0,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x826bec3c
	if (!ctx.cr6.gt) goto loc_826BEC3C;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x826bec3c
	if (ctx.cr6.gt) goto loc_826BEC3C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,472(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 472);
	// lfs f0,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BEC0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,30356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30356);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16684(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16684);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f12,572(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 572, temp.u32);
	// fmuls f13,f31,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// stfs f0,576(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
	// stfs f13,580(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 580, temp.u32);
loc_826BEC3C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BEC58"))) PPC_WEAK_FUNC(sub_826BEC58);
PPC_FUNC_IMPL(__imp__sub_826BEC58) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8270b320
	ctx.lr = 0x826BEC78;
	sub_8270B320(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// addi r9,r9,408
	ctx.r9.s64 = ctx.r9.s64 + 408;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lfs f0,-31124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31124);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r10,-632
	ctx.r11.s64 = ctx.r10.s64 + -632;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r8,18524
	ctx.r11.s64 = ctx.r8.s64 + 18524;
	// li r9,40
	ctx.r9.s64 = 40;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r9.u32);
	// stw r30,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r30.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r6,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r6.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lfs f0,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r10,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r10.u32);
	// stw r7,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r7.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826bed20
	if (ctx.cr6.eq) goto loc_826BED20;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r5,r11,24228
	ctx.r5.s64 = ctx.r11.s64 + 24228;
	// addi r4,r10,11532
	ctx.r4.s64 = ctx.r10.s64 + 11532;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x826BED1C;
	sub_828C5740(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
loc_826BED20:
	// stfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r8,10
	ctx.r8.s64 = 10;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,8320
	ctx.r6.s64 = 8320;
	// stw r30,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r30.u32);
	// stw r8,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r6.u32);
	// lfs f0,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r11.u32);
	// stfs f0,1488(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1488, temp.u32);
	// stw r7,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r7.u32);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_826BED80"))) PPC_WEAK_FUNC(sub_826BED80);
PPC_FUNC_IMPL(__imp__sub_826BED80) {
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
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x824090e0
	ctx.lr = 0x826BEDA0;
	sub_824090E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826bedfc
	if (ctx.cr0.eq) goto loc_826BEDFC;
	// lwz r10,8964(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8964);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826bedc4
	if (ctx.cr6.eq) goto loc_826BEDC4;
	// lwz r9,3340(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3340);
	// lwz r11,2092(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2092);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_826BEDC4:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,10384(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10384);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825f51a0
	ctx.lr = 0x826BEDF4;
	sub_825F51A0(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// stw r11,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r11.u32);
loc_826BEDFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8270ba30
	ctx.lr = 0x826BEE04;
	sub_8270BA30(ctx, base);
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

__attribute__((alias("__imp__sub_826BEE20"))) PPC_WEAK_FUNC(sub_826BEE20);
PPC_FUNC_IMPL(__imp__sub_826BEE20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8270b320
	ctx.lr = 0x826BEE3C;
	sub_8270B320(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r10,r10,4848
	ctx.r10.s64 = ctx.r10.s64 + 4848;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// lfs f0,-31124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31124);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r9,5888
	ctx.r11.s64 = ctx.r9.s64 + 5888;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r8,r8,18524
	ctx.r8.s64 = ctx.r8.s64 + 18524;
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r11,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r11.u32);
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r7,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r7.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lfs f0,904(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r10,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r10.u32);
	// stw r9,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r9.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826beedc
	if (ctx.cr6.eq) goto loc_826BEEDC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r5,r11,24228
	ctx.r5.s64 = ctx.r11.s64 + 24228;
	// addi r4,r10,11480
	ctx.r4.s64 = ctx.r10.s64 + 11480;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x826BEED8;
	sub_828C5740(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
loc_826BEEDC:
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r7,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r7.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,8448
	ctx.r7.s64 = 8448;
	// lfs f0,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1488(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1488, temp.u32);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// stw r8,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r6.u32);
	// stw r7,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r7.u32);
	// stw r11,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BEF40"))) PPC_WEAK_FUNC(sub_826BEF40);
PPC_FUNC_IMPL(__imp__sub_826BEF40) {
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
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x824090e0
	ctx.lr = 0x826BEF60;
	sub_824090E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826befbc
	if (ctx.cr0.eq) goto loc_826BEFBC;
	// lwz r10,8964(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8964);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826bef84
	if (ctx.cr6.eq) goto loc_826BEF84;
	// lwz r9,3340(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3340);
	// lwz r11,2092(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2092);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_826BEF84:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,10376(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10376);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825f51a0
	ctx.lr = 0x826BEFB4;
	sub_825F51A0(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// stw r11,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r11.u32);
loc_826BEFBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8270ba30
	ctx.lr = 0x826BEFC4;
	sub_8270BA30(ctx, base);
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

__attribute__((alias("__imp__sub_826BEFE0"))) PPC_WEAK_FUNC(sub_826BEFE0);
PPC_FUNC_IMPL(__imp__sub_826BEFE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826BEFE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8270b320
	ctx.lr = 0x826BEFF8;
	sub_8270B320(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r10,r10,5944
	ctx.r10.s64 = ctx.r10.s64 + 5944;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// lfs f0,-31124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31124);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r9,6984
	ctx.r11.s64 = ctx.r9.s64 + 6984;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r8,r8,18524
	ctx.r8.s64 = ctx.r8.s64 + 18524;
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r11,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r11.u32);
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// stw r7,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r7.u32);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stw r10,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r10.u32);
	// addi r29,r11,11732
	ctx.r29.s64 = ctx.r11.s64 + 11732;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// stw r9,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r9.u32);
	// lfs f0,904(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826bf0a0
	if (ctx.cr6.eq) goto loc_826BF0A0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,24228
	ctx.r5.s64 = ctx.r11.s64 + 24228;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x826BF098;
	sub_828C5740(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
loc_826BF0A0:
	// stfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r8,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r8.u32);
	// stw r7,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r7.u32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// stw r10,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r10.u32);
	// lfs f0,908(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1488(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1488, temp.u32);
	// stw r9,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r9.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826bf104
	if (ctx.cr6.eq) goto loc_826BF104;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,11440
	ctx.r5.s64 = ctx.r11.s64 + 11440;
	// addi r6,r31,1512
	ctx.r6.s64 = ctx.r31.s64 + 1512;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x826BF104;
	sub_828C5740(ctx, base);
loc_826BF104:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,16640
	ctx.r10.s64 = 16640;
	// stw r11,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BF120"))) PPC_WEAK_FUNC(sub_826BF120);
PPC_FUNC_IMPL(__imp__sub_826BF120) {
	PPC_FUNC_PROLOGUE();
	// b 0x8270ba30
	sub_8270BA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BF128"))) PPC_WEAK_FUNC(sub_826BF128);
PPC_FUNC_IMPL(__imp__sub_826BF128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826BF130;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8270b320
	ctx.lr = 0x826BF140;
	sub_8270B320(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r10,r10,7040
	ctx.r10.s64 = ctx.r10.s64 + 7040;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// lfs f0,-31124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31124);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r9,8080
	ctx.r11.s64 = ctx.r9.s64 + 8080;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r8,r8,18524
	ctx.r8.s64 = ctx.r8.s64 + 18524;
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r11,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r11.u32);
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// stw r7,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r7.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stw r10,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r10.u32);
	// addi r29,r11,12956
	ctx.r29.s64 = ctx.r11.s64 + 12956;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// stw r9,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r9.u32);
	// lfs f0,904(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826bf1e8
	if (ctx.cr6.eq) goto loc_826BF1E8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,24228
	ctx.r5.s64 = ctx.r11.s64 + 24228;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x826BF1E0;
	sub_828C5740(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
loc_826BF1E8:
	// stfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r8,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r8.u32);
	// stw r7,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r7.u32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// stw r10,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r10.u32);
	// lfs f0,908(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1488(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1488, temp.u32);
	// stw r9,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r9.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826bf24c
	if (ctx.cr6.eq) goto loc_826BF24C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,11440
	ctx.r5.s64 = ctx.r11.s64 + 11440;
	// addi r6,r31,1512
	ctx.r6.s64 = ctx.r31.s64 + 1512;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x826BF24C;
	sub_828C5740(ctx, base);
loc_826BF24C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,16512
	ctx.r10.s64 = 16512;
	// stw r11,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BF268"))) PPC_WEAK_FUNC(sub_826BF268);
PPC_FUNC_IMPL(__imp__sub_826BF268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826BF270;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8270b320
	ctx.lr = 0x826BF280;
	sub_8270B320(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r9,r9,464
	ctx.r9.s64 = ctx.r9.s64 + 464;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f13,20416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20416);
	ctx.f13.f64 = double(temp.f32);
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r10.u32);
	// addi r8,r8,1504
	ctx.r8.s64 = ctx.r8.s64 + 1504;
	// addi r7,r7,18524
	ctx.r7.s64 = ctx.r7.s64 + 18524;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f0,1488(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1488, temp.u32);
	// stfs f13,1508(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1508, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,1552(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1552, temp.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r7,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r7.u32);
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// lwz r9,1420(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// stw r11,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r11.u32);
	// clrlwi r10,r9,1
	ctx.r10.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// stw r11,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r11.u32);
	// stw r6,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r6.u32);
	// stw r28,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r28.u32);
	// stw r29,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r29.u32);
	// stw r10,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r10.u32);
	// stw r5,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r5.u32);
	// stw r4,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r4.u32);
	// stw r30,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BF338"))) PPC_WEAK_FUNC(sub_826BF338);
PPC_FUNC_IMPL(__imp__sub_826BF338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826BF340;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// addi r3,r11,668
	ctx.r3.s64 = ctx.r11.s64 + 668;
	// lwz r9,1452(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// lfs f0,1452(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,1456(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// lfs f13,1456(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1460(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	ctx.f12.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lwz r30,1460(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// lwz r29,1516(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1516);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r11,r31,1452
	ctx.r11.s64 = ctx.r31.s64 + 1452;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r8,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// ori r28,r7,16512
	ctx.r28.u64 = ctx.r7.u64 | 16512;
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x826BF3B4;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,152(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r10,r30,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// bl 0x82708268
	ctx.lr = 0x826BF3EC;
	sub_82708268(ctx, base);
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r3,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r3.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826bf424
	if (ctx.cr6.eq) goto loc_826BF424;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BF41C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x826bf428
	goto loc_826BF428;
loc_826BF424:
	// li r6,0
	ctx.r6.s64 = 0;
loc_826BF428:
	// ld r30,160(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,16385
	ctx.r10.s64 = 16385;
	// lwz r4,1448(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,1440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f4,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f4.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x82331120
	ctx.lr = 0x826BF474;
	sub_82331120(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// li r5,28
	ctx.r5.s64 = 28;
	// lwz r30,1440(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// addi r4,r30,476
	ctx.r4.s64 = ctx.r30.s64 + 476;
	// bl 0x82a4ea80
	ctx.lr = 0x826BF488;
	sub_82A4EA80(ctx, base);
	// lfs f0,1552(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stfs f0,500(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 500, temp.u32);
	// lwz r9,200(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lfs f13,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,204(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// stfs f13,496(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 496, temp.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stw r11,476(r30)
	PPC_STORE_U32(ctx.r30.u32 + 476, ctx.r11.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r10,480(r30)
	PPC_STORE_U32(ctx.r30.u32 + 480, ctx.r10.u32);
	// stw r9,484(r30)
	PPC_STORE_U32(ctx.r30.u32 + 484, ctx.r9.u32);
	// stw r8,488(r30)
	PPC_STORE_U32(ctx.r30.u32 + 488, ctx.r8.u32);
	// lfs f0,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,492(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 492, temp.u32);
	// lwz r11,1440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// addi r3,r11,600
	ctx.r3.s64 = ctx.r11.s64 + 600;
	// bl 0x82a4ea80
	ctx.lr = 0x826BF4D8;
	sub_82A4EA80(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BF4E8"))) PPC_WEAK_FUNC(sub_826BF4E8);
PPC_FUNC_IMPL(__imp__sub_826BF4E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,1448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1448);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// stw r11,1448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1448, ctx.r11.u32);
	// b 0x8270b910
	sub_8270B910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BF500"))) PPC_WEAK_FUNC(sub_826BF500);
PPC_FUNC_IMPL(__imp__sub_826BF500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826BF508;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x826c40e0
	ctx.lr = 0x826BF518;
	sub_826C40E0(ctx, base);
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r10,r29,32752
	ctx.r10.s64 = ctx.r29.s64 + 32752;
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// lis r28,-32244
	ctx.r28.s64 = -2113142784;
	// lis r3,-32221
	ctx.r3.s64 = -2111635456;
	// lfs f0,17060(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17060);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,-36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -36);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r28,20416
	ctx.r8.s64 = ctx.r28.s64 + 20416;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r27,-32221
	ctx.r27.s64 = -2111635456;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lis r4,-32215
	ctx.r4.s64 = -2111242240;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,30996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r3,8136
	ctx.r10.s64 = ctx.r3.s64 + 8136;
	// lfs f11,23700(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23700);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r27,9324
	ctx.r9.s64 = ctx.r27.s64 + 9324;
	// lfs f8,9940(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9940);
	ctx.f8.f64 = double(temp.f32);
	// lis r26,-32229
	ctx.r26.s64 = -2112159744;
	// lfs f6,20480(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20480);
	ctx.f6.f64 = double(temp.f32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lfs f10,-12104(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -12104);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,1812(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1812, ctx.r11.u32);
	// lfs f12,912(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 912);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,1892(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1892, ctx.r11.u32);
	// lfs f9,20564(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20564);
	ctx.f9.f64 = double(temp.f32);
	// addi r7,r26,4480
	ctx.r7.s64 = ctx.r26.s64 + 4480;
	// lfs f7,20560(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20560);
	ctx.f7.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stfs f11,1504(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1504, temp.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r7,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r7.u32);
	// lis r5,-32230
	ctx.r5.s64 = -2112225280;
	// stfs f10,696(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 696, temp.u32);
	// stfs f0,3248(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3248, temp.u32);
	// stw r31,1532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1532, ctx.r31.u32);
	// stfs f9,3244(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3244, temp.u32);
	// stw r6,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r6.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f8,3236(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3236, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f31,3240(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3240, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f31,3252(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3252, temp.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f31,3176(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3176, temp.u32);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f31,3180(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3180, temp.u32);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f31,3184(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3184, temp.u32);
	// stfs f31,3188(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3188, temp.u32);
	// stw r11,1648(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1648, ctx.r11.u32);
	// stfs f31,3192(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3192, temp.u32);
	// stw r10,1652(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1652, ctx.r10.u32);
	// stfs f31,3196(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3196, temp.u32);
	// stw r9,1656(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1656, ctx.r9.u32);
	// stfs f12,3152(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3152, temp.u32);
	// stw r8,1660(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1660, ctx.r8.u32);
	// stfs f0,3160(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3160, temp.u32);
	// addi r3,r5,-16472
	ctx.r3.s64 = ctx.r5.s64 + -16472;
	// stfs f0,3168(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3168, temp.u32);
	// stfs f12,3156(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3156, temp.u32);
	// stfs f0,3164(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3164, temp.u32);
	// stfs f0,3172(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3172, temp.u32);
	// stfs f7,3220(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3220, temp.u32);
	// stfs f6,1860(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1860, temp.u32);
	// stfs f31,3232(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3232, temp.u32);
	// stw r31,1848(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1848, ctx.r31.u32);
	// stw r7,1664(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1664, ctx.r7.u32);
	// stw r4,1668(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1668, ctx.r4.u32);
	// stw r31,3224(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3224, ctx.r31.u32);
	// stw r31,3228(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3228, ctx.r31.u32);
	// stw r31,1616(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1616, ctx.r31.u32);
	// bl 0x82816528
	ctx.lr = 0x826BF670;
	sub_82816528(ctx, base);
	// stw r3,3308(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3308, ctx.r3.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-16480
	ctx.r3.s64 = ctx.r11.s64 + -16480;
	// bl 0x82816528
	ctx.lr = 0x826BF680;
	sub_82816528(ctx, base);
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,5903
	ctx.r8.s64 = 386859008;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r7,50
	ctx.r7.s64 = 50;
	// lfs f0,32752(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32752);
	ctx.f0.f64 = double(temp.f32);
	// li r6,100
	ctx.r6.s64 = 100;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// ori r8,r8,36082
	ctx.r8.u64 = ctx.r8.u64 | 36082;
	// lfs f12,20416(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20416);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// stw r3,3312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3312, ctx.r3.u32);
	// stfs f13,3320(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3320, temp.u32);
	// stw r7,3316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3316, ctx.r7.u32);
	// stfs f0,3272(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3272, temp.u32);
	// stw r6,3288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3288, ctx.r6.u32);
	// stfs f31,3276(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3276, temp.u32);
	// stw r31,3256(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3256, ctx.r31.u32);
	// stfs f0,3284(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3284, temp.u32);
	// stw r8,1492(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1492, ctx.r8.u32);
	// stfs f12,3280(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3280, temp.u32);
	// stw r31,956(r30)
	PPC_STORE_U32(ctx.r30.u32 + 956, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,3268(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3268, ctx.r11.u32);
	// stw r5,3264(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3264, ctx.r5.u32);
	// stw r10,3260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3260, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BF700"))) PPC_WEAK_FUNC(sub_826BF700);
PPC_FUNC_IMPL(__imp__sub_826BF700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826BF708;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// lwz r11,3216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826bf784
	if (ctx.cr6.eq) goto loc_826BF784;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826bf770
	if (!ctx.cr6.gt) goto loc_826BF770;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_826BF738:
	// lwz r11,3216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3216);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r10,144(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BF758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3216);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826bf738
	if (ctx.cr6.lt) goto loc_826BF738;
loc_826BF770:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r4,3216(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3216);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829bb1f8
	ctx.lr = 0x826BF780;
	sub_829BB1F8(ctx, base);
	// stw r28,3216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3216, ctx.r28.u32);
loc_826BF784:
	// lwz r4,3328(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3328);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826bf79c
	if (ctx.cr6.eq) goto loc_826BF79C;
	// lwz r3,13024(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// bl 0x8282b448
	ctx.lr = 0x826BF798;
	sub_8282B448(ctx, base);
	// stw r28,3328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3328, ctx.r28.u32);
loc_826BF79C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826badb0
	ctx.lr = 0x826BF7A4;
	sub_826BADB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BF7B0"))) PPC_WEAK_FUNC(sub_826BF7B0);
PPC_FUNC_IMPL(__imp__sub_826BF7B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x826BF7B8;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82a61734
	ctx.lr = 0x826BF7C0;
	__savefpr_23(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,3240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f29.f64 = double(temp.f32);
	// lfs f11,1504(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x826bf800
	if (!ctx.cr6.gt) goto loc_826BF800;
	// fsubs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// lfs f13,3236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,3240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3240, temp.u32);
	// fmuls f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x826bf800
	if (!ctx.cr6.lt) goto loc_826BF800;
	// stfs f29,3240(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3240, temp.u32);
loc_826BF800:
	// lwz r11,3256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826bf8c4
	if (ctx.cr6.eq) goto loc_826BF8C4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f13,3260(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3264(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3264);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r11,r11,20252
	ctx.r11.s64 = ctx.r11.s64 + 20252;
	// lfs f10,3268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3268);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f9.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f8,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f8.f64 = double(temp.f32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lfs f7,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f7.f64 = double(temp.f32);
	// addi r30,r31,3260
	ctx.r30.s64 = ctx.r31.s64 + 3260;
	// stfs f29,104(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// lfs f0,17984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17984);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f29,108(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f29,112(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fmuls f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f13,f8,f12
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fadds f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x826bfd50
	ctx.lr = 0x826BF888;
	sub_826BFD50(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82817280
	ctx.lr = 0x826BF894;
	sub_82817280(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// lwz r11,316(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BF8B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// b 0x826bfc2c
	goto loc_826BFC2C;
loc_826BF8C4:
	// lwz r11,1928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1928);
	// lfs f0,1936(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1936);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,1920(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	// lfs f13,1940(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1940);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,1924(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// lfs f12,1932(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lfs f10,3248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3248);
	ctx.f10.f64 = double(temp.f32);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// lfs f9,3232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3232);
	ctx.f9.f64 = double(temp.f32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f26,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f26.f64 = double(temp.f32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lfs f27,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fsubs f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// lfs f30,30996(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 30996);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f8,f0,f0
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f31,20252(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20252);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f12,f12,f26
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f26.f64));
	// lfs f7,3252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3252);
	ctx.f7.f64 = double(temp.f32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f0,f13,f13,f8
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmuls f25,f0,f30
	ctx.f25.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f24,f25,f10
	ctx.f24.f64 = double(float(ctx.f25.f64 * ctx.f10.f64));
	// fdivs f0,f11,f24
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f24.f64));
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fsubs f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f13,3232(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3232, temp.u32);
	// fadds f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// stfs f0,3252(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3252, temp.u32);
	// fadds f23,f13,f31
	ctx.f23.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x82a4e118
	ctx.lr = 0x826BF968;
	sub_82A4E118(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// fmuls f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82a4e038
	ctx.lr = 0x826BF97C;
	sub_82A4E038(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r6,r1,152
	ctx.r6.s64 = ctx.r1.s64 + 152;
	// stfs f29,136(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// stfs f29,140(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1184(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1184);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f0,f13,f24
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f24.f64));
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BF9C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,3252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3252);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// fadds f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f26.f64));
	// fadds f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f27.f64));
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bgt cr6,0x826bfa24
	if (ctx.cr6.gt) goto loc_826BFA24;
	// lfs f12,1928(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1928);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,1940(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1940);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f13,19128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19128);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmadds f13,f11,f13,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f12.f64));
	// b 0x826bfa40
	goto loc_826BFA40;
loc_826BFA24:
	// fsubs f12,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lfs f11,1940(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1940);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,1928(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1928);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f13,19128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19128);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fnmsubs f13,f10,f13,f11
	ctx.f13.f64 = double(float(-(ctx.f10.f64 * ctx.f13.f64 - ctx.f11.f64)));
loc_826BFA40:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,19124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19124);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x826bfa90
	if (!ctx.cr6.gt) goto loc_826BFA90;
	// lfs f13,3276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3276);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,3296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	// lfs f0,3272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3272);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,3280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fnmsubs f1,f0,f28,f12
	ctx.f1.f64 = double(float(-(ctx.f0.f64 * ctx.f28.f64 - ctx.f12.f64)));
	// stfs f1,3284(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3284, temp.u32);
	// beq cr6,0x826bfa90
	if (ctx.cr6.eq) goto loc_826BFA90;
	// lis r4,27325
	ctx.r4.s64 = 1790771200;
	// li r6,-1
	ctx.r6.s64 = -1;
	// ori r4,r4,13781
	ctx.r4.u64 = ctx.r4.u64 | 13781;
	// bl 0x82965458
	ctx.lr = 0x826BFA90;
	sub_82965458(ctx, base);
loc_826BFA90:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,3252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3252);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16448(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16448);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x826bfab0
	if (ctx.cr6.gt) goto loc_826BFAB0;
	// lfs f0,3284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bgt cr6,0x826bfbe8
	if (ctx.cr6.gt) goto loc_826BFBE8;
loc_826BFAB0:
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826bfbe8
	if (!ctx.cr6.eq) goto loc_826BFBE8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r26,84(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r25,1164(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1164);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BFAE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826bfb00
	if (!ctx.cr6.gt) goto loc_826BFB00;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x826bfbd4
	goto loc_826BFBD4;
loc_826BFB00:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826bfba0
	if (!ctx.cr6.eq) goto loc_826BFBA0;
	// lwz r27,1160(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1160);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BFB24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r28,r26,948
	ctx.r28.s64 = ctx.r26.s64 + 948;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826bfb80
	if (!ctx.cr6.gt) goto loc_826BFB80;
	// li r29,0
	ctx.r29.s64 = 0;
loc_826BFB3C:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826bfb6c
	if (!ctx.cr6.eq) goto loc_826BFB6C;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332ca8
	ctx.lr = 0x826BFB64;
	sub_82332CA8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_826BFB6C:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826bfb3c
	if (ctx.cr6.lt) goto loc_826BFB3C;
loc_826BFB80:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BFBA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826BFBA0:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826bfbd4
	if (!ctx.cr0.eq) goto loc_826BFBD4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BFBC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826bfbd4
	if (ctx.cr0.eq) goto loc_826BFBD4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x826BFBD4;
	sub_82410060(ctx, base);
loc_826BFBD4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BFBE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826BFBE8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BFC00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r6,r1,168
	ctx.r6.s64 = ctx.r1.s64 + 168;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfs f29,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// stfs f29,172(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f29,176(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x826bfd50
	ctx.lr = 0x826BFC20;
	sub_826BFD50(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
loc_826BFC2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BFC38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82a61780
	ctx.lr = 0x826BFC44;
	__restfpr_23(ctx, base);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BFC48"))) PPC_WEAK_FUNC(sub_826BFC48);
PPC_FUNC_IMPL(__imp__sub_826BFC48) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lfs f1,16668(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82332e18
	ctx.lr = 0x826BFCB0;
	sub_82332E18(ctx, base);
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f2,f12,f11
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f6,f12
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f6,f10
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// lfs f3,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmsubs f0,f0,f9,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 - ctx.f2.f64));
	// fmsubs f10,f10,f11,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 - ctx.f7.f64));
	// fmsubs f12,f13,f12,f8
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 - ctx.f8.f64));
	// fmadds f0,f3,f0,f6
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f10,f3,f10,f4
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fmadds f12,f3,f12,f5
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmadds f0,f1,f13,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fmadds f12,f1,f11,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f12,f1,f9,f10
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f9.f64 + ctx.f10.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_826BFD50"))) PPC_WEAK_FUNC(sub_826BFD50);
PPC_FUNC_IMPL(__imp__sub_826BFD50) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,656(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// lfs f13,3240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3240);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,660(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,664(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// lfs f31,3220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3220);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// ble cr6,0x826bfdb4
	if (!ctx.cr6.gt) goto loc_826BFDB4;
	// lfs f0,3236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3236);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
loc_826BFDB4:
	// lfs f13,1924(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,1936(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1936);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,1928(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1928);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,1940(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1940);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,1920
	ctx.r11.s64 = ctx.r31.s64 + 1920;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,1920(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,1932(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f1,16668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f29,f0
	ctx.f29.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x82332e18
	ctx.lr = 0x826BFE08;
	sub_82332E18(ctx, base);
	// lfs f7,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f6,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f5,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f13,1920(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1924(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,30996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,1928(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1928);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f7,f29
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// fmuls f6,f6,f29
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f29.f64));
	// fmuls f5,f5,f29
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f29.f64));
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fadds f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fadds f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x826BFE7C;
	sub_82817280(ctx, base);
	// fmuls f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,3228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3228);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// stw r11,3224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3224, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,3228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3228, ctx.r10.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BFEE0"))) PPC_WEAK_FUNC(sub_826BFEE0);
PPC_FUNC_IMPL(__imp__sub_826BFEE0) {
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
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r6,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r6.u64);
	// lwz r31,152(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r6,r31,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x826c5bf0
	ctx.lr = 0x826BFF0C;
	sub_826C5BF0(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lfs f13,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// stw r31,1940(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1940, ctx.r31.u32);
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,1932(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1932, ctx.r11.u32);
	// stw r10,1936(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1936, ctx.r10.u32);
	// lfs f10,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f10,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f10,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// lfs f0,30996(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// stfs f0,3160(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3160, temp.u32);
	// stfs f0,3168(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3168, temp.u32);
	// stfs f0,3164(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3164, temp.u32);
	// stfs f0,3172(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3172, temp.u32);
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,3152(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3152, temp.u32);
	// stfs f0,3156(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3156, temp.u32);
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

__attribute__((alias("__imp__sub_826BFF90"))) PPC_WEAK_FUNC(sub_826BFF90);
PPC_FUNC_IMPL(__imp__sub_826BFF90) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826b9508
	ctx.lr = 0x826BFFB8;
	sub_826B9508(ctx, base);
	// lwz r11,3296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c018c
	if (ctx.cr6.eq) goto loc_826C018C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r3,3296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	// lis r4,-9185
	ctx.r4.s64 = -601948160;
	// ori r4,r4,29230
	ctx.r4.u64 = ctx.r4.u64 | 29230;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826BFFFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826c006c
	if (ctx.cr0.eq) goto loc_826C006C;
	// addi r4,r3,48
	ctx.r4.s64 = ctx.r3.s64 + 48;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82a4ea80
	ctx.lr = 0x826C0014;
	sub_82A4EA80(ctx, base);
	// lfs f13,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lfs f0,24000(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f29,f12,f0
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_826C006C:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r4,2257
	ctx.r4.s64 = 147914752;
	// lwz r3,3296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// ori r4,r4,50535
	ctx.r4.u64 = ctx.r4.u64 | 50535;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// rldicr r8,r11,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x829c71d0
	ctx.lr = 0x826C009C;
	sub_829C71D0(ctx, base);
	// lis r4,27325
	ctx.r4.s64 = 1790771200;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f1,3272(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3272);
	ctx.f1.f64 = double(temp.f32);
	// ori r4,r4,13781
	ctx.r4.u64 = ctx.r4.u64 | 13781;
	// lwz r3,3296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	// bl 0x82965458
	ctx.lr = 0x826C00B4;
	sub_82965458(ctx, base);
	// lwz r3,3296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	// lwz r4,3308(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C00CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826c011c
	if (ctx.cr0.eq) goto loc_826C011C;
	// addi r30,r3,48
	ctx.r30.s64 = ctx.r3.s64 + 48;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82a4ea80
	ctx.lr = 0x826C00E8;
	sub_82A4EA80(ctx, base);
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// fadds f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f29.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x826C011C;
	sub_82A4EA80(ctx, base);
loc_826C011C:
	// lwz r3,3296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	// lwz r4,3312(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3312);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C0134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826c0184
	if (ctx.cr0.eq) goto loc_826C0184;
	// addi r30,r3,48
	ctx.r30.s64 = ctx.r3.s64 + 48;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82a4ea80
	ctx.lr = 0x826C0150;
	sub_82A4EA80(ctx, base);
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// fadds f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f29.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x826C0184;
	sub_82A4EA80(ctx, base);
loc_826C0184:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826c04d0
	ctx.lr = 0x826C018C;
	sub_826C04D0(ctx, base);
loc_826C018C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C01B0"))) PPC_WEAK_FUNC(sub_826C01B0);
PPC_FUNC_IMPL(__imp__sub_826C01B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826C01B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lfs f13,3240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3240);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x826c01e8
	if (ctx.cr6.gt) goto loc_826C01E8;
	// lfs f0,3244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3244);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3240, temp.u32);
loc_826C01E8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r3,r31,1620
	ctx.r3.s64 = ctx.r31.s64 + 1620;
	// stw r11,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r11.u32);
	// lfs f1,16668(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r11,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r11.u32);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r11,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r11.u32);
	// bl 0x82332e18
	ctx.lr = 0x826C0210;
	sub_82332E18(ctx, base);
	// lfs f12,1648(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,1660(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f11,1624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,30996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,1620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f13,1620(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1620, temp.u32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,1624(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1624, temp.u32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f0,1628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1628, temp.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x8281d960
	ctx.lr = 0x826C026C;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826c0284
	if (ctx.cr0.eq) goto loc_826C0284;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C0284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826C0284:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C0298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826ba6c8
	ctx.lr = 0x826C02AC;
	sub_826BA6C8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C02B8"))) PPC_WEAK_FUNC(sub_826C02B8);
PPC_FUNC_IMPL(__imp__sub_826C02B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826C02C0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lfs f0,-32616(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32616);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f13,17684(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17684);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lfs f12,19540(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19540);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,17120(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17120);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r10,-16400
	ctx.r3.s64 = ctx.r10.s64 + -16400;
	// lfs f10,19536(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 19536);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-28788(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28788);
	ctx.f9.f64 = double(temp.f32);
	// lwz r30,1812(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f10,164(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f9,168(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x826C0338;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,152(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r10,r9,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x826b9f28
	ctx.lr = 0x826C0374;
	sub_826B9F28(ctx, base);
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r3,3324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3324, ctx.r3.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c03ac
	if (ctx.cr6.eq) goto loc_826C03AC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C03A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x826c03b0
	goto loc_826C03B0;
loc_826C03AC:
	// li r6,0
	ctx.r6.s64 = 0;
loc_826C03B0:
	// ld r30,176(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r29,184(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r4,3288(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,3324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3324);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f4,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f4.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x82331120
	ctx.lr = 0x826C03FC;
	sub_82331120(ctx, base);
	// lwz r11,3324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3324);
	// stw r11,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r11.u32);
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// oris r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 67108864;
	// stw r10,460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 460, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C0420"))) PPC_WEAK_FUNC(sub_826C0420);
PPC_FUNC_IMPL(__imp__sub_826C0420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c04b8
	if (ctx.cr6.eq) goto loc_826C04B8;
	// lfs f13,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r31,1620
	ctx.r4.s64 = ctx.r31.s64 + 1620;
	// lfs f11,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,1620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,1624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f13,1628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x826C047C;
	sub_82817280(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lwz r5,1584(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,13024(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13024);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x8282b1e0
	ctx.lr = 0x826C04B8;
	sub_8282B1E0(ctx, base);
loc_826C04B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C04D0"))) PPC_WEAK_FUNC(sub_826C04D0);
PPC_FUNC_IMPL(__imp__sub_826C04D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826C04D8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,3300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826c05a0
	if (!ctx.cr6.eq) goto loc_826C05A0;
	// lwz r11,3304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3304);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c05a0
	if (ctx.cr6.eq) goto loc_826C05A0;
	// li r3,1664
	ctx.r3.s64 = 1664;
	// bl 0x82833108
	ctx.lr = 0x826C0508;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826c051c
	if (ctx.cr0.eq) goto loc_826C051C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82712ba0
	ctx.lr = 0x826C0518;
	sub_82712BA0(ctx, base);
	// b 0x826c0520
	goto loc_826C0520;
loc_826C051C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_826C0520:
	// stw r3,3300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3300, ctx.r3.u32);
	// lwz r29,1656(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1656);
	// lwz r28,3312(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3312);
	// lwz r3,3296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	// bl 0x82411cb0
	ctx.lr = 0x826C0534;
	sub_82411CB0(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lwz r27,3316(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3316);
	// li r11,128
	ctx.r11.s64 = 128;
	// lfs f0,30996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lfs f13,3320(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3320);
	ctx.f13.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r10,3308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3308);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,3304(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3304);
	// lwz r3,3300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// fmadds f1,f13,f0,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f0.f64));
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// bl 0x82914788
	ctx.lr = 0x826C0588;
	sub_82914788(ctx, base);
	// lwz r3,3300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C05A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826C05A0:
	// lwz r11,3300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c0668
	if (ctx.cr6.eq) goto loc_826C0668;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,3324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3324);
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r29,592(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// beq cr6,0x826c0604
	if (ctx.cr6.eq) goto loc_826C0604;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C05FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x826c0608
	goto loc_826C0608;
loc_826C0604:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
loc_826C0608:
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// addi r28,r1,160
	ctx.r28.s64 = ctx.r1.s64 + 160;
	// lwz r27,152(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,3288(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,1812(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r4,1928
	ctx.r4.s64 = 1928;
	// lwz r3,3300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82712c18
	ctx.lr = 0x826C0654;
	sub_82712C18(ctx, base);
	// lwz r3,3300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C0668;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826C0668:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C0678"))) PPC_WEAK_FUNC(sub_826C0678);
PPC_FUNC_IMPL(__imp__sub_826C0678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d0
	ctx.lr = 0x826C0680;
	__savegprlr_14(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stw r4,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-13284
	ctx.r4.s64 = ctx.r11.s64 + -13284;
	// bl 0x82414568
	ctx.lr = 0x826C06A4;
	sub_82414568(ctx, base);
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c06b8
	if (ctx.cr6.eq) goto loc_826C06B8;
	// lwz r4,252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// b 0x826c06c0
	goto loc_826C06C0;
loc_826C06B8:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_826C06C0:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82409058
	ctx.lr = 0x826C06C8;
	sub_82409058(ctx, base);
	// lwz r31,132(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// addi r10,r1,276
	ctx.r10.s64 = ctx.r1.s64 + 276;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// beq cr6,0x826c06f0
	if (ctx.cr6.eq) goto loc_826C06F0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c06f0
	if (ctx.cr6.eq) goto loc_826C06F0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x826C06F0;
	sub_82332DB8(ctx, base);
loc_826C06F0:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x826c1124
	if (ctx.cr6.eq) goto loc_826C1124;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c1124
	if (ctx.cr6.eq) goto loc_826C1124;
	// lwz r11,3216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// beq cr6,0x826c1124
	if (ctx.cr6.eq) goto loc_826C1124;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826c1124
	if (!ctx.cr6.gt) goto loc_826C1124;
	// lis r4,-32232
	ctx.r4.s64 = -2112356352;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lis r19,-32232
	ctx.r19.s64 = -2112356352;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r14,r4,-12132
	ctx.r14.s64 = ctx.r4.s64 + -12132;
	// lis r4,-32232
	ctx.r4.s64 = -2112356352;
	// lis r20,-32232
	ctx.r20.s64 = -2112356352;
	// addi r11,r4,-12608
	ctx.r11.s64 = ctx.r4.s64 + -12608;
	// lis r4,-32232
	ctx.r4.s64 = -2112356352;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r10,r20,-12480
	ctx.r10.s64 = ctx.r20.s64 + -12480;
	// addi r11,r4,-12636
	ctx.r11.s64 = ctx.r4.s64 + -12636;
	// lis r4,-32232
	ctx.r4.s64 = -2112356352;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lis r3,-32232
	ctx.r3.s64 = -2112356352;
	// addi r11,r4,-12664
	ctx.r11.s64 = ctx.r4.s64 + -12664;
	// lis r4,-32232
	ctx.r4.s64 = -2112356352;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r31,-32232
	ctx.r31.s64 = -2112356352;
	// addi r11,r4,-12696
	ctx.r11.s64 = ctx.r4.s64 + -12696;
	// lis r4,-32232
	ctx.r4.s64 = -2112356352;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// addi r10,r31,-12188
	ctx.r10.s64 = ctx.r31.s64 + -12188;
	// addi r11,r4,-12728
	ctx.r11.s64 = ctx.r4.s64 + -12728;
	// lis r4,-32232
	ctx.r4.s64 = -2112356352;
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// lis r30,-32232
	ctx.r30.s64 = -2112356352;
	// addi r11,r4,-12760
	ctx.r11.s64 = ctx.r4.s64 + -12760;
	// lis r29,-32232
	ctx.r29.s64 = -2112356352;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// addi r11,r19,-12504
	ctx.r11.s64 = ctx.r19.s64 + -12504;
	// lis r28,-32232
	ctx.r28.s64 = -2112356352;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// addi r11,r3,-12160
	ctx.r11.s64 = ctx.r3.s64 + -12160;
	// lis r4,-32232
	ctx.r4.s64 = -2112356352;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// addi r9,r30,-12216
	ctx.r9.s64 = ctx.r30.s64 + -12216;
	// addi r11,r29,-12240
	ctx.r11.s64 = ctx.r29.s64 + -12240;
	// addi r10,r28,-12268
	ctx.r10.s64 = ctx.r28.s64 + -12268;
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// lis r18,-32232
	ctx.r18.s64 = -2112356352;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// lis r16,-32232
	ctx.r16.s64 = -2112356352;
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// lis r15,-32232
	ctx.r15.s64 = -2112356352;
	// addi r19,r4,-12788
	ctx.r19.s64 = ctx.r4.s64 + -12788;
	// addi r9,r18,-12528
	ctx.r9.s64 = ctx.r18.s64 + -12528;
	// addi r11,r16,-12572
	ctx.r11.s64 = ctx.r16.s64 + -12572;
	// addi r10,r15,-12592
	ctx.r10.s64 = ctx.r15.s64 + -12592;
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// lis r4,-32232
	ctx.r4.s64 = -2112356352;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lis r27,-32232
	ctx.r27.s64 = -2112356352;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// lis r26,-32232
	ctx.r26.s64 = -2112356352;
	// lis r25,-32232
	ctx.r25.s64 = -2112356352;
	// lis r24,-32232
	ctx.r24.s64 = -2112356352;
	// lis r23,-32232
	ctx.r23.s64 = -2112356352;
	// lis r22,-32232
	ctx.r22.s64 = -2112356352;
	// lis r21,-32232
	ctx.r21.s64 = -2112356352;
	// lis r17,-32232
	ctx.r17.s64 = -2112356352;
	// addi r18,r4,-12812
	ctx.r18.s64 = ctx.r4.s64 + -12812;
	// lis r5,-32232
	ctx.r5.s64 = -2112356352;
	// lis r6,-32232
	ctx.r6.s64 = -2112356352;
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r3,-32215
	ctx.r3.s64 = -2111242240;
	// addi r27,r27,-12296
	ctx.r27.s64 = ctx.r27.s64 + -12296;
	// addi r26,r26,-12324
	ctx.r26.s64 = ctx.r26.s64 + -12324;
	// addi r25,r25,-12348
	ctx.r25.s64 = ctx.r25.s64 + -12348;
	// addi r24,r24,-12376
	ctx.r24.s64 = ctx.r24.s64 + -12376;
	// addi r23,r23,-12404
	ctx.r23.s64 = ctx.r23.s64 + -12404;
	// addi r22,r22,-12432
	ctx.r22.s64 = ctx.r22.s64 + -12432;
	// addi r21,r21,-12456
	ctx.r21.s64 = ctx.r21.s64 + -12456;
	// addi r20,r17,-12548
	ctx.r20.s64 = ctx.r17.s64 + -12548;
	// lis r4,-32232
	ctx.r4.s64 = -2112356352;
	// lfs f31,904(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r4,-12840
	ctx.r3.s64 = ctx.r4.s64 + -12840;
	// lis r4,-32232
	ctx.r4.s64 = -2112356352;
	// lwz r28,104(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r6,-12940
	ctx.r6.s64 = ctx.r6.s64 + -12940;
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r7,-12968
	ctx.r7.s64 = ctx.r7.s64 + -12968;
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r4,-12868
	ctx.r4.s64 = ctx.r4.s64 + -12868;
	// stw r18,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r18.u32);
	// addi r9,r9,-13024
	ctx.r9.s64 = ctx.r9.s64 + -13024;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r11,r11,-13072
	ctx.r11.s64 = ctx.r11.s64 + -13072;
	// stw r4,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r4.u32);
	// addi r18,r5,-12920
	ctx.r18.s64 = ctx.r5.s64 + -12920;
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// addi r17,r10,-13048
	ctx.r17.s64 = ctx.r10.s64 + -13048;
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r4,-32232
	ctx.r4.s64 = -2112356352;
	// lis r5,-32232
	ctx.r5.s64 = -2112356352;
	// stw r3,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r3.u32);
	// lis r6,-32232
	ctx.r6.s64 = -2112356352;
	// lwz r30,604(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r8,-12996
	ctx.r3.s64 = ctx.r8.s64 + -12996;
	// addi r4,r4,-12896
	ctx.r4.s64 = ctx.r4.s64 + -12896;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// addi r5,r5,-13092
	ctx.r5.s64 = ctx.r5.s64 + -13092;
	// stw r4,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r4.u32);
	// addi r6,r6,-13112
	ctx.r6.s64 = ctx.r6.s64 + -13112;
	// addi r7,r7,-13132
	ctx.r7.s64 = ctx.r7.s64 + -13132;
	// stw r5,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r5.u32);
	// addi r9,r9,-13184
	ctx.r9.s64 = ctx.r9.s64 + -13184;
	// stw r6,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// addi r10,r10,-13212
	ctx.r10.s64 = ctx.r10.s64 + -13212;
	// stw r7,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r7.u32);
	// addi r15,r11,-13244
	ctx.r15.s64 = ctx.r11.s64 + -13244;
	// stw r9,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// addi r16,r8,-13152
	ctx.r16.s64 = ctx.r8.s64 + -13152;
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// stw r15,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r15.u32);
loc_826C0928:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826c094c
	if (ctx.cr6.eq) goto loc_826C094C;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// bl 0x82411cb0
	ctx.lr = 0x826C0948;
	sub_82411CB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_826C094C:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c0960
	if (ctx.cr6.eq) goto loc_826C0960;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_826C0960:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826c10fc
	if (ctx.cr6.eq) goto loc_826C10FC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x826c10fc
	if (ctx.cr6.eq) goto loc_826C10FC;
	// lwz r11,336(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c0984
	if (ctx.cr6.eq) goto loc_826C0984;
	// lfs f30,228(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	ctx.f30.f64 = double(temp.f32);
	// b 0x826c099c
	goto loc_826C099C;
loc_826C0984:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x826C0998;
	sub_829E6978(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_826C099C:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82816528
	ctx.lr = 0x826C09A4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82965458
	ctx.lr = 0x826C09B8;
	sub_82965458(ctx, base);
	// lwz r11,340(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c09d0
	if (ctx.cr6.eq) goto loc_826C09D0;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lfs f30,232(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 232);
	ctx.f30.f64 = double(temp.f32);
	// b 0x826c09f0
	goto loc_826C09F0;
loc_826C09D0:
	// lwz r15,220(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x829e6978
	ctx.lr = 0x826C09E8;
	sub_829E6978(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_826C09F0:
	// bl 0x82816528
	ctx.lr = 0x826C09F4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82965458
	ctx.lr = 0x826C0A08;
	sub_82965458(ctx, base);
	// lwz r11,348(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c0a30
	if (ctx.cr6.eq) goto loc_826C0A30;
	// lfs f0,240(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,244(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,248(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x826c0a7c
	goto loc_826C0A7C;
loc_826C0A30:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826C0A44;
	sub_829E6978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826C0A5C;
	sub_829E6978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r4,216(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826C0A78;
	sub_829E6978(ctx, base);
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_826C0A7C:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// addi r15,r1,80
	ctx.r15.s64 = ctx.r1.s64 + 80;
	// bl 0x82816528
	ctx.lr = 0x826C0A88;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829653c8
	ctx.lr = 0x826C0A9C;
	sub_829653C8(ctx, base);
	// lwz r11,352(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c0ab4
	if (ctx.cr6.eq) goto loc_826C0AB4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f30,252(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 252);
	ctx.f30.f64 = double(temp.f32);
	// b 0x826c0ad4
	goto loc_826C0AD4;
loc_826C0AB4:
	// lwz r15,96(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x829e6978
	ctx.lr = 0x826C0ACC;
	sub_829E6978(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_826C0AD4:
	// bl 0x82816528
	ctx.lr = 0x826C0AD8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82965458
	ctx.lr = 0x826C0AEC;
	sub_82965458(ctx, base);
	// lwz r11,356(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c0b14
	if (ctx.cr6.eq) goto loc_826C0B14;
	// lfs f0,256(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,260(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,264(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x826c0b60
	goto loc_826C0B60;
loc_826C0B14:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826C0B28;
	sub_829E6978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826C0B40;
	sub_829E6978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826C0B5C;
	sub_829E6978(ctx, base);
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_826C0B60:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r15,r1,80
	ctx.r15.s64 = ctx.r1.s64 + 80;
	// bl 0x82816528
	ctx.lr = 0x826C0B6C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829653c8
	ctx.lr = 0x826C0B80;
	sub_829653C8(ctx, base);
	// lwz r11,360(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 360);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c0b98
	if (ctx.cr6.eq) goto loc_826C0B98;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f30,268(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 268);
	ctx.f30.f64 = double(temp.f32);
	// b 0x826c0bb8
	goto loc_826C0BB8;
loc_826C0B98:
	// lwz r15,100(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x829e6978
	ctx.lr = 0x826C0BB0;
	sub_829E6978(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_826C0BB8:
	// bl 0x82816528
	ctx.lr = 0x826C0BBC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82965458
	ctx.lr = 0x826C0BD0;
	sub_82965458(ctx, base);
	// lwz r11,364(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c0bf8
	if (ctx.cr6.eq) goto loc_826C0BF8;
	// lfs f0,272(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,276(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,280(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 280);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x826c0c44
	goto loc_826C0C44;
loc_826C0BF8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826C0C0C;
	sub_829E6978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826C0C24;
	sub_829E6978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826C0C40;
	sub_829E6978(ctx, base);
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_826C0C44:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// addi r15,r1,80
	ctx.r15.s64 = ctx.r1.s64 + 80;
	// bl 0x82816528
	ctx.lr = 0x826C0C50;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829653c8
	ctx.lr = 0x826C0C64;
	sub_829653C8(ctx, base);
	// lwz r11,368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 368);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c0c7c
	if (ctx.cr6.eq) goto loc_826C0C7C;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f30,284(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 284);
	ctx.f30.f64 = double(temp.f32);
	// b 0x826c0c9c
	goto loc_826C0C9C;
loc_826C0C7C:
	// lwz r15,104(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x829e6978
	ctx.lr = 0x826C0C94;
	sub_829E6978(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_826C0C9C:
	// bl 0x82816528
	ctx.lr = 0x826C0CA0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82965458
	ctx.lr = 0x826C0CB4;
	sub_82965458(ctx, base);
	// lwz r11,372(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 372);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c0cdc
	if (ctx.cr6.eq) goto loc_826C0CDC;
	// lfs f0,288(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,292(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,296(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 296);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x826c0d28
	goto loc_826C0D28;
loc_826C0CDC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826C0CF0;
	sub_829E6978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826C0D08;
	sub_829E6978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826C0D24;
	sub_829E6978(ctx, base);
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_826C0D28:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r15,r1,80
	ctx.r15.s64 = ctx.r1.s64 + 80;
	// bl 0x82816528
	ctx.lr = 0x826C0D34;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829653c8
	ctx.lr = 0x826C0D48;
	sub_829653C8(ctx, base);
	// lwz r11,376(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 376);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c0d60
	if (ctx.cr6.eq) goto loc_826C0D60;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lfs f30,300(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 300);
	ctx.f30.f64 = double(temp.f32);
	// b 0x826c0d80
	goto loc_826C0D80;
loc_826C0D60:
	// lwz r15,116(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x829e6978
	ctx.lr = 0x826C0D78;
	sub_829E6978(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_826C0D80:
	// bl 0x82816528
	ctx.lr = 0x826C0D84;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82965458
	ctx.lr = 0x826C0D98;
	sub_82965458(ctx, base);
	// lwz r11,380(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c0db0
	if (ctx.cr6.eq) goto loc_826C0DB0;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lfs f30,304(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 304);
	ctx.f30.f64 = double(temp.f32);
	// b 0x826c0dd0
	goto loc_826C0DD0;
loc_826C0DB0:
	// lwz r15,136(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x829e6978
	ctx.lr = 0x826C0DC8;
	sub_829E6978(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_826C0DD0:
	// bl 0x82816528
	ctx.lr = 0x826C0DD4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82965458
	ctx.lr = 0x826C0DE8;
	sub_82965458(ctx, base);
	// lwz r11,384(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c0e00
	if (ctx.cr6.eq) goto loc_826C0E00;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lfs f30,308(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 308);
	ctx.f30.f64 = double(temp.f32);
	// b 0x826c0e20
	goto loc_826C0E20;
loc_826C0E00:
	// lwz r15,124(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x829e6978
	ctx.lr = 0x826C0E18;
	sub_829E6978(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_826C0E20:
	// bl 0x82816528
	ctx.lr = 0x826C0E24;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82965458
	ctx.lr = 0x826C0E38;
	sub_82965458(ctx, base);
	// lwz r11,388(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 388);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c0e50
	if (ctx.cr6.eq) goto loc_826C0E50;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lfs f30,312(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 312);
	ctx.f30.f64 = double(temp.f32);
	// b 0x826c0e70
	goto loc_826C0E70;
loc_826C0E50:
	// lwz r15,132(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x829e6978
	ctx.lr = 0x826C0E68;
	sub_829E6978(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_826C0E70:
	// bl 0x82816528
	ctx.lr = 0x826C0E74;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82965458
	ctx.lr = 0x826C0E88;
	sub_82965458(ctx, base);
	// lwz r11,392(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c0ea0
	if (ctx.cr6.eq) goto loc_826C0EA0;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lfs f30,316(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 316);
	ctx.f30.f64 = double(temp.f32);
	// b 0x826c0ec0
	goto loc_826C0EC0;
loc_826C0EA0:
	// lwz r15,120(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x829e6978
	ctx.lr = 0x826C0EB8;
	sub_829E6978(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_826C0EC0:
	// bl 0x82816528
	ctx.lr = 0x826C0EC4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82965458
	ctx.lr = 0x826C0ED8;
	sub_82965458(ctx, base);
	// lwz r11,396(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c0f00
	if (ctx.cr6.eq) goto loc_826C0F00;
	// lfs f0,320(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,324(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 324);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,328(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 328);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x826c0f4c
	goto loc_826C0F4C;
loc_826C0F00:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826C0F14;
	sub_829E6978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826C0F2C;
	sub_829E6978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826C0F48;
	sub_829E6978(ctx, base);
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_826C0F4C:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r15,r1,80
	ctx.r15.s64 = ctx.r1.s64 + 80;
	// bl 0x82816528
	ctx.lr = 0x826C0F58;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829653c8
	ctx.lr = 0x826C0F6C;
	sub_829653C8(ctx, base);
	// lwz r11,400(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c0f80
	if (ctx.cr6.eq) goto loc_826C0F80;
	// lfs f30,332(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 332);
	ctx.f30.f64 = double(temp.f32);
	// b 0x826c0f98
	goto loc_826C0F98;
loc_826C0F80:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x826C0F94;
	sub_829E6978(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_826C0F98:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82816528
	ctx.lr = 0x826C0FA0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82965458
	ctx.lr = 0x826C0FB4;
	sub_82965458(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x826C0FC8;
	sub_829E6978(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826C0FE0;
	sub_829E6978(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826C0FFC;
	sub_829E6978(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r15,r1,80
	ctx.r15.s64 = ctx.r1.s64 + 80;
	// bl 0x82816528
	ctx.lr = 0x826C100C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829653c8
	ctx.lr = 0x826C1020;
	sub_829653C8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x826C1034;
	sub_829E6978(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826C104C;
	sub_829E6978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826C1068;
	sub_829E6978(ctx, base);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r15,r1,80
	ctx.r15.s64 = ctx.r1.s64 + 80;
	// bl 0x82816528
	ctx.lr = 0x826C1078;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829653c8
	ctx.lr = 0x826C108C;
	sub_829653C8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,188(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826C10A0;
	sub_829E6978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826C10B8;
	sub_829E6978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r4,204(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826C10D4;
	sub_829E6978(ctx, base);
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// addi r15,r1,80
	ctx.r15.s64 = ctx.r1.s64 + 80;
	// bl 0x82816528
	ctx.lr = 0x826C10E4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829653c8
	ctx.lr = 0x826C10F8;
	sub_829653C8(ctx, base);
	// lwz r15,212(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
loc_826C10FC:
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826c0928
	if (ctx.cr6.lt) goto loc_826C0928;
loc_826C1124:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82333960
	ctx.lr = 0x826C112C;
	sub_82333960(ctx, base);
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82a4ea20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1140"))) PPC_WEAK_FUNC(sub_826C1140);
PPC_FUNC_IMPL(__imp__sub_826C1140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9dc
	ctx.lr = 0x826C1148;
	__savegprlr_17(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r28,r11,7896
	ctx.r28.s64 = ctx.r11.s64 + 7896;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// addi r5,r10,28564
	ctx.r5.s64 = ctx.r10.s64 + 28564;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// bl 0x82816cf8
	ctx.lr = 0x826C1184;
	sub_82816CF8(ctx, base);
	// lwz r26,192(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r24,188(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bne cr6,0x826c119c
	if (!ctx.cr6.eq) goto loc_826C119C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_826C119C:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r4,r11,28824
	ctx.r4.s64 = ctx.r11.s64 + 28824;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82816c30
	ctx.lr = 0x826C11B0;
	sub_82816C30(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826c11c4
	if (!ctx.cr6.eq) goto loc_826C11C4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_826C11C4:
	// bl 0x828165a8
	ctx.lr = 0x826C11C8;
	sub_828165A8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x826C11D4;
	sub_82333960(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bne cr6,0x826c11e4
	if (!ctx.cr6.eq) goto loc_826C11E4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_826C11E4:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r4,r11,28848
	ctx.r4.s64 = ctx.r11.s64 + 28848;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82816c30
	ctx.lr = 0x826C11F8;
	sub_82816C30(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826c120c
	if (!ctx.cr6.eq) goto loc_826C120C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_826C120C:
	// bl 0x828165a8
	ctx.lr = 0x826C1210;
	sub_828165A8(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x826C121C;
	sub_82333960(ctx, base);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// addi r4,r30,3304
	ctx.r4.s64 = ctx.r30.s64 + 3304;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x824091a0
	ctx.lr = 0x826C1240;
	sub_824091A0(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// bne cr6,0x826c1254
	if (!ctx.cr6.eq) goto loc_826C1254;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// beq cr6,0x826c125c
	if (ctx.cr6.eq) goto loc_826C125C;
loc_826C1254:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x826c1260
	goto loc_826C1260;
loc_826C125C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_826C1260:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r4,r11,28624
	ctx.r4.s64 = ctx.r11.s64 + 28624;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82816c30
	ctx.lr = 0x826C1278;
	sub_82816C30(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826c128c
	if (!ctx.cr6.eq) goto loc_826C128C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_826C128C:
	// bl 0x828165a8
	ctx.lr = 0x826C1290;
	sub_828165A8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x826C129C;
	sub_82333960(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r30,1584
	ctx.r4.s64 = ctx.r30.s64 + 1584;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x826C12B8;
	sub_823CF190(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823339b8
	ctx.lr = 0x826C12C4;
	sub_823339B8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x823339b8
	ctx.lr = 0x826C12D4;
	sub_823339B8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x823339b8
	ctx.lr = 0x826C12E4;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x826c1530
	ctx.lr = 0x826C12F8;
	sub_826C1530(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,3216(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3216, ctx.r3.u32);
	// beq 0x826c1508
	if (ctx.cr0.eq) goto loc_826C1508;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c1508
	if (ctx.cr6.eq) goto loc_826C1508;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,140(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// stw r4,3296(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3296, ctx.r4.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C1330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3216(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3216);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c1348
	if (ctx.cr6.eq) goto loc_826C1348;
	// bl 0x82335918
	ctx.lr = 0x826C1348;
	sub_82335918(ctx, base);
loc_826C1348:
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,3216(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3216);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,472(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// bl 0x82336a38
	ctx.lr = 0x826C1378;
	sub_82336A38(ctx, base);
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826c14b8
	if (ctx.cr6.eq) goto loc_826C14B8;
	// lwz r3,3296(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3296);
	// bl 0x82411cb0
	ctx.lr = 0x826C138C;
	sub_82411CB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826c14b8
	if (ctx.cr0.eq) goto loc_826C14B8;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x826c13b8
	if (!ctx.cr6.gt) goto loc_826C13B8;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x826C13B8;
	sub_82332C38(ctx, base);
loc_826C13B8:
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826c14b8
	if (!ctx.cr6.gt) goto loc_826C14B8;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_826C13CC:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stw r10,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r26,28(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r25,32(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r24,36(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r19,40(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r18,44(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r17,48(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// stw r8,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
	// stw r7,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r7.u32);
	// stw r26,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r26.u32);
	// stw r25,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r25.u32);
	// stw r24,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r24.u32);
	// stw r19,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r19.u32);
	// stw r18,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r18.u32);
	// stw r17,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r17.u32);
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// bl 0x826c1e08
	ctx.lr = 0x826C1448;
	sub_826C1E08(ctx, base);
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// li r11,8
	ctx.r11.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_826C1454:
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x826c1454
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826C1454;
	// lwz r3,3296(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3296);
	// bl 0x82411cb0
	ctx.lr = 0x826C1470;
	sub_82411CB0(ctx, base);
	// addi r26,r3,384
	ctx.r26.s64 = ctx.r3.s64 + 384;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82332d50
	ctx.lr = 0x826C1488;
	sub_82332D50(ctx, base);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mulli r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 * 176;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826c14a4
	if (ctx.cr0.eq) goto loc_826C14A4;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// li r5,176
	ctx.r5.s64 = 176;
	// bl 0x82a4ea80
	ctx.lr = 0x826C14A4;
	sub_82A4EA80(ctx, base);
loc_826C14A4:
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826c13cc
	if (ctx.cr6.lt) goto loc_826C13CC;
loc_826C14B8:
	// lwz r11,3216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3216);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82411cb0
	ctx.lr = 0x826C14C8;
	sub_82411CB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826c14fc
	if (ctx.cr0.eq) goto loc_826C14FC;
	// lwz r11,3216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3216);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82411cb0
	ctx.lr = 0x826C14E0;
	sub_82411CB0(ctx, base);
	// stw r3,1428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1428, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826c14f8
	if (ctx.cr0.eq) goto loc_826C14F8;
	// lwz r11,472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// stw r11,1420(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1420, ctx.r11.u32);
	// b 0x826c14fc
	goto loc_826C14FC;
loc_826C14F8:
	// stw r27,1420(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1420, ctx.r27.u32);
loc_826C14FC:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826c0678
	ctx.lr = 0x826C1508;
	sub_826C0678(ctx, base);
loc_826C1508:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82333960
	ctx.lr = 0x826C1510;
	sub_82333960(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82333960
	ctx.lr = 0x826C1518;
	sub_82333960(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82333960
	ctx.lr = 0x826C1520;
	sub_82333960(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82333960
	ctx.lr = 0x826C1528;
	sub_82333960(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x82a4ea2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1530"))) PPC_WEAK_FUNC(sub_826C1530);
PPC_FUNC_IMPL(__imp__sub_826C1530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x826C1538;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r11,7896
	ctx.r31.s64 = ctx.r11.s64 + 7896;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826c156c
	if (ctx.cr6.eq) goto loc_826C156C;
	// lwz r5,12(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// b 0x826c1570
	goto loc_826C1570;
loc_826C156C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_826C1570:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82419348
	ctx.lr = 0x826C157C;
	sub_82419348(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c1590
	if (ctx.cr6.eq) goto loc_826C1590;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x826c1594
	goto loc_826C1594;
loc_826C1590:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_826C1594:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82419348
	ctx.lr = 0x826C15A0;
	sub_82419348(ctx, base);
	// bl 0x82336ee0
	ctx.lr = 0x826C15A4;
	sub_82336EE0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c15bc
	if (ctx.cr6.eq) goto loc_826C15BC;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x826c15c0
	goto loc_826C15C0;
loc_826C15BC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_826C15C0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824193a8
	ctx.lr = 0x826C15C8;
	sub_824193A8(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826c15dc
	if (!ctx.cr6.eq) goto loc_826C15DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826C15DC:
	// bl 0x828165a8
	ctx.lr = 0x826C15E0;
	sub_828165A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824f66b0
	ctx.lr = 0x826C15F0;
	sub_824F66B0(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826c1624
	if (ctx.cr6.eq) goto loc_826C1624;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C1610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x824f6738
	ctx.lr = 0x826C1614;
	sub_824F6738(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82335ef0
	ctx.lr = 0x826C1624;
	sub_82335EF0(ctx, base);
loc_826C1624:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x826C162C;
	sub_82333960(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826C1634;
	sub_82333960(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82333960
	ctx.lr = 0x826C163C;
	sub_82333960(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82333960
	ctx.lr = 0x826C1644;
	sub_82333960(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333960
	ctx.lr = 0x826C164C;
	sub_82333960(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1658"))) PPC_WEAK_FUNC(sub_826C1658);
PPC_FUNC_IMPL(__imp__sub_826C1658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826C1660;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826b8e58
	ctx.lr = 0x826C166C;
	sub_826B8E58(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// lfs f0,18516(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18516);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lfs f13,-28788(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28788);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r7,r7,9376
	ctx.r7.s64 = ctx.r7.s64 + 9376;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r11,r11,10552
	ctx.r11.s64 = ctx.r11.s64 + 10552;
	// lfs f0,-32676(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32676);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f13,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,29100
	ctx.r10.s64 = ctx.r10.s64 + 29100;
	// li r28,2
	ctx.r28.s64 = 2;
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f0,1512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1512, temp.u32);
	// stfs f13,696(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stfs f0,1504(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1504, temp.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r28.u32);
	// stw r8,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r8.u32);
	// stw r6,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r6.u32);
	// stw r9,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r9.u32);
	// stw r29,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r29.u32);
	// stw r5,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r5.u32);
	// stw r4,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r4.u32);
	// stw r30,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1720"))) PPC_WEAK_FUNC(sub_826C1720);
PPC_FUNC_IMPL(__imp__sub_826C1720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C1744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c17b8
	if (ctx.cr6.eq) goto loc_826C17B8;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,912(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// lfs f0,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// oris r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 67108864;
	// lfs f13,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 460, ctx.r10.u32);
	// lwz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// stfs f0,492(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 492, temp.u32);
	// stfs f0,496(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 496, temp.u32);
	// stw r7,488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 488, ctx.r7.u32);
	// stfs f13,500(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 500, temp.u32);
	// stw r5,476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 476, ctx.r5.u32);
	// stw r9,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r9.u32);
	// stw r6,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r6.u32);
loc_826C17B8:
	// lwz r5,1580(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826c17dc
	if (ctx.cr6.eq) goto loc_826C17DC;
	// lwz r3,1576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826c17dc
	if (ctx.cr6.eq) goto loc_826C17DC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82978bc0
	ctx.lr = 0x826C17DC;
	sub_82978BC0(ctx, base);
loc_826C17DC:
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

__attribute__((alias("__imp__sub_826C17F0"))) PPC_WEAK_FUNC(sub_826C17F0);
PPC_FUNC_IMPL(__imp__sub_826C17F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// bl 0x826bafd8
	ctx.lr = 0x826C1808;
	sub_826BAFD8(ctx, base);
	// lfs f13,576(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,572(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r11,r31,572
	ctx.r11.s64 = ctx.r31.s64 + 572;
	// lfs f12,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f0,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f13,f10,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x826c1864
	if (!ctx.cr6.eq) goto loc_826C1864;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// b 0x826c18a0
	goto loc_826C18A0;
loc_826C1864:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f10,16668(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// bge cr6,0x826c1884
	if (!ctx.cr6.lt) goto loc_826C1884;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// b 0x826c18a0
	goto loc_826C18A0;
loc_826C1884:
	// fsqrts f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
loc_826C18A0:
	// lfs f10,1504(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmuls f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bgt cr6,0x826c18e4
	if (ctx.cr6.gt) goto loc_826C18E4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r11.u32);
loc_826C18E4:
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

__attribute__((alias("__imp__sub_826C18F8"))) PPC_WEAK_FUNC(sub_826C18F8);
PPC_FUNC_IMPL(__imp__sub_826C18F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826C1900;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C1924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826ba6c8
	ctx.lr = 0x826C1938;
	sub_826BA6C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1940"))) PPC_WEAK_FUNC(sub_826C1940);
PPC_FUNC_IMPL(__imp__sub_826C1940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-16308
	ctx.r3.s64 = ctx.r11.s64 + -16308;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1950"))) PPC_WEAK_FUNC(sub_826C1950);
PPC_FUNC_IMPL(__imp__sub_826C1950) {
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
	// li r3,1680
	ctx.r3.s64 = 1680;
	// bl 0x82833108
	ctx.lr = 0x826C1964;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826c1974
	if (ctx.cr0.eq) goto loc_826C1974;
	// bl 0x826be1e0
	ctx.lr = 0x826C1970;
	sub_826BE1E0(ctx, base);
	// b 0x826c1978
	goto loc_826C1978;
loc_826C1974:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826C1978:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C1988"))) PPC_WEAK_FUNC(sub_826C1988);
PPC_FUNC_IMPL(__imp__sub_826C1988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,23876(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23876);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826c19c8
	if (!ctx.cr0.eq) goto loc_826C19C8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,23876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23876, ctx.r11.u32);
	// addi r3,r9,-17136
	ctx.r3.s64 = ctx.r9.s64 + -17136;
	// bl 0x82816528
	ctx.lr = 0x826C19C0;
	sub_82816528(ctx, base);
	// stw r3,23872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23872, ctx.r3.u32);
	// b 0x826c19cc
	goto loc_826C19CC;
loc_826C19C8:
	// lwz r3,23872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23872);
loc_826C19CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C19E0"))) PPC_WEAK_FUNC(sub_826C19E0);
PPC_FUNC_IMPL(__imp__sub_826C19E0) {
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
	// bl 0x826c1a30
	ctx.lr = 0x826C1A00;
	sub_826C1A30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C1A14;
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

__attribute__((alias("__imp__sub_826C1A30"))) PPC_WEAK_FUNC(sub_826C1A30);
PPC_FUNC_IMPL(__imp__sub_826C1A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13724
	ctx.r31.s64 = ctx.r11.s64 + 13724;
	// lwz r11,13720(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13720);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826c1a78
	if (!ctx.cr0.eq) goto loc_826C1A78;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-15180
	ctx.r9.s64 = ctx.r9.s64 + -15180;
	// stw r11,13720(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13720, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28808
	ctx.r3.s64 = ctx.r11.s64 + 28808;
	// bl 0x82a4c758
	ctx.lr = 0x826C1A78;
	sub_82A4C758(ctx, base);
loc_826C1A78:
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

__attribute__((alias("__imp__sub_826C1A90"))) PPC_WEAK_FUNC(sub_826C1A90);
PPC_FUNC_IMPL(__imp__sub_826C1A90) {
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
	// li r3,1680
	ctx.r3.s64 = 1680;
	// bl 0x82833108
	ctx.lr = 0x826C1AA8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826c1b10
	if (ctx.cr0.eq) goto loc_826C1B10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82713ce0
	ctx.lr = 0x826C1AB8;
	sub_82713CE0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// addi r9,r11,-32676
	ctx.r9.s64 = ctx.r11.s64 + -32676;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lfs f0,-32676(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32676);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,1408(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1408, temp.u32);
	// addi r10,r10,-14088
	ctx.r10.s64 = ctx.r10.s64 + -14088;
	// lfs f0,-144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -144);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r7,-15204
	ctx.r9.s64 = ctx.r7.s64 + -15204;
	// addi r8,r8,-13072
	ctx.r8.s64 = ctx.r8.s64 + -13072;
	// stfs f0,1416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1416, temp.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stw r7,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r7.u32);
	// stw r11,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r11.u32);
	// stw r11,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r11.u32);
	// b 0x826c1b14
	goto loc_826C1B14;
loc_826C1B10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826C1B14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C1B28"))) PPC_WEAK_FUNC(sub_826C1B28);
PPC_FUNC_IMPL(__imp__sub_826C1B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,23868(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23868);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826c1b68
	if (!ctx.cr0.eq) goto loc_826C1B68;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,23868(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23868, ctx.r11.u32);
	// addi r3,r9,-17112
	ctx.r3.s64 = ctx.r9.s64 + -17112;
	// bl 0x82816528
	ctx.lr = 0x826C1B60;
	sub_82816528(ctx, base);
	// stw r3,23864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23864, ctx.r3.u32);
	// b 0x826c1b6c
	goto loc_826C1B6C;
loc_826C1B68:
	// lwz r3,23864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23864);
loc_826C1B6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C1B80"))) PPC_WEAK_FUNC(sub_826C1B80);
PPC_FUNC_IMPL(__imp__sub_826C1B80) {
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
	// bl 0x826c1bd0
	ctx.lr = 0x826C1BA0;
	sub_826C1BD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C1BB4;
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

__attribute__((alias("__imp__sub_826C1BD0"))) PPC_WEAK_FUNC(sub_826C1BD0);
PPC_FUNC_IMPL(__imp__sub_826C1BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13732
	ctx.r31.s64 = ctx.r11.s64 + 13732;
	// lwz r11,13728(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13728);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826c1c18
	if (!ctx.cr0.eq) goto loc_826C1C18;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-13020
	ctx.r9.s64 = ctx.r9.s64 + -13020;
	// stw r11,13728(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13728, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28784
	ctx.r3.s64 = ctx.r11.s64 + 28784;
	// bl 0x82a4c758
	ctx.lr = 0x826C1C18;
	sub_82A4C758(ctx, base);
loc_826C1C18:
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

__attribute__((alias("__imp__sub_826C1C30"))) PPC_WEAK_FUNC(sub_826C1C30);
PPC_FUNC_IMPL(__imp__sub_826C1C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826C1C38;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r29,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r29.u64);
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x829c80b8
	ctx.lr = 0x826C1C5C;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826c1cf4
	if (!ctx.cr0.eq) goto loc_826C1CF4;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x826c1c7c
	if (!ctx.cr6.eq) goto loc_826C1C7C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
loc_826C1C7C:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823956c8
	ctx.lr = 0x826C1C84;
	sub_823956C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C1C98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x826C1CA4;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x826c1ce0
	if (ctx.cr0.eq) goto loc_826C1CE0;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// stfs f31,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f31,20(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r10,r10,9436
	ctx.r10.s64 = ctx.r10.s64 + 9436;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// std r29,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r29.u64);
	// b 0x826c1ce4
	goto loc_826C1CE4;
loc_826C1CE0:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_826C1CE4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x826C1CF0;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_826C1CF4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C1D10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1D20"))) PPC_WEAK_FUNC(sub_826C1D20);
PPC_FUNC_IMPL(__imp__sub_826C1D20) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826bd6c8
	sub_826BD6C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1D28"))) PPC_WEAK_FUNC(sub_826C1D28);
PPC_FUNC_IMPL(__imp__sub_826C1D28) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826bc948
	sub_826BC948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1D30"))) PPC_WEAK_FUNC(sub_826C1D30);
PPC_FUNC_IMPL(__imp__sub_826C1D30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826bc3d8
	sub_826BC3D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1D38"))) PPC_WEAK_FUNC(sub_826C1D38);
PPC_FUNC_IMPL(__imp__sub_826C1D38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826bd570
	sub_826BD570(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1D40"))) PPC_WEAK_FUNC(sub_826C1D40);
PPC_FUNC_IMPL(__imp__sub_826C1D40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826bcbd8
	sub_826BCBD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1D48"))) PPC_WEAK_FUNC(sub_826C1D48);
PPC_FUNC_IMPL(__imp__sub_826C1D48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826bce30
	sub_826BCE30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1D50"))) PPC_WEAK_FUNC(sub_826C1D50);
PPC_FUNC_IMPL(__imp__sub_826C1D50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826bc570
	sub_826BC570(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1D58"))) PPC_WEAK_FUNC(sub_826C1D58);
PPC_FUNC_IMPL(__imp__sub_826C1D58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826bdd18
	sub_826BDD18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1D60"))) PPC_WEAK_FUNC(sub_826C1D60);
PPC_FUNC_IMPL(__imp__sub_826C1D60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826bdac0
	sub_826BDAC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1D68"))) PPC_WEAK_FUNC(sub_826C1D68);
PPC_FUNC_IMPL(__imp__sub_826C1D68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826bd2a8
	sub_826BD2A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1D70"))) PPC_WEAK_FUNC(sub_826C1D70);
PPC_FUNC_IMPL(__imp__sub_826C1D70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826bd150
	sub_826BD150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1D78"))) PPC_WEAK_FUNC(sub_826C1D78);
PPC_FUNC_IMPL(__imp__sub_826C1D78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826bca90
	sub_826BCA90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1D80"))) PPC_WEAK_FUNC(sub_826C1D80);
PPC_FUNC_IMPL(__imp__sub_826C1D80) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826bd3b8
	sub_826BD3B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1D88"))) PPC_WEAK_FUNC(sub_826C1D88);
PPC_FUNC_IMPL(__imp__sub_826C1D88) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826bc140
	sub_826BC140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1D90"))) PPC_WEAK_FUNC(sub_826C1D90);
PPC_FUNC_IMPL(__imp__sub_826C1D90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826be140
	sub_826BE140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1D98"))) PPC_WEAK_FUNC(sub_826C1D98);
PPC_FUNC_IMPL(__imp__sub_826C1D98) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826bdff0
	sub_826BDFF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1DA0"))) PPC_WEAK_FUNC(sub_826C1DA0);
PPC_FUNC_IMPL(__imp__sub_826C1DA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826bcd20
	sub_826BCD20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1DA8"))) PPC_WEAK_FUNC(sub_826C1DA8);
PPC_FUNC_IMPL(__imp__sub_826C1DA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826bd820
	sub_826BD820(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1DB0"))) PPC_WEAK_FUNC(sub_826C1DB0);
PPC_FUNC_IMPL(__imp__sub_826C1DB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826bc290
	sub_826BC290(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1DB8"))) PPC_WEAK_FUNC(sub_826C1DB8);
PPC_FUNC_IMPL(__imp__sub_826C1DB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1184(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 1184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826C1DC8"))) PPC_WEAK_FUNC(sub_826C1DC8);
PPC_FUNC_IMPL(__imp__sub_826C1DC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826bdc08
	sub_826BDC08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1DD0"))) PPC_WEAK_FUNC(sub_826C1DD0);
PPC_FUNC_IMPL(__imp__sub_826C1DD0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826bc800
	sub_826BC800(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1DD8"))) PPC_WEAK_FUNC(sub_826C1DD8);
PPC_FUNC_IMPL(__imp__sub_826C1DD8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826be190
	sub_826BE190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1DE0"))) PPC_WEAK_FUNC(sub_826C1DE0);
PPC_FUNC_IMPL(__imp__sub_826C1DE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826bd978
	sub_826BD978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1DE8"))) PPC_WEAK_FUNC(sub_826C1DE8);
PPC_FUNC_IMPL(__imp__sub_826C1DE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826bcff8
	sub_826BCFF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1DF0"))) PPC_WEAK_FUNC(sub_826C1DF0);
PPC_FUNC_IMPL(__imp__sub_826C1DF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x826bc428
	sub_826BC428(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1DF8"))) PPC_WEAK_FUNC(sub_826C1DF8);
PPC_FUNC_IMPL(__imp__sub_826C1DF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826bc6b8
	sub_826BC6B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1E00"))) PPC_WEAK_FUNC(sub_826C1E00);
PPC_FUNC_IMPL(__imp__sub_826C1E00) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826bc428
	sub_826BC428(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1E08"))) PPC_WEAK_FUNC(sub_826C1E08);
PPC_FUNC_IMPL(__imp__sub_826C1E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lis r8,-31947
	ctx.r8.s64 = -2093678592;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// srawi r5,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 2;
	// addi r11,r11,16384
	ctx.r11.s64 = ctx.r11.s64 + 16384;
	// srawi r31,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 2;
	// addi r10,r10,16384
	ctx.r10.s64 = ctx.r10.s64 + 16384;
	// addi r9,r9,16384
	ctx.r9.s64 = ctx.r9.s64 + 16384;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// addi r8,r8,-3960
	ctx.r8.s64 = ctx.r8.s64 + -3960;
	// rlwinm r11,r11,2,16,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// rlwinm r31,r31,2,16,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFC;
	// rlwinm r5,r5,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFC;
	// rlwinm r9,r9,2,16,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFC;
	// rlwinm r10,r10,2,16,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC;
	// lfsx f10,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r7,r7,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFC;
	// lfsx f13,r31,r8
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfsx f11,r5,r8
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfsx f8,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfsx f6,r10,r8
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f11
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f4,f8,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// lfsx f3,r7,r8
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f8,f10
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// fmuls f1,f6,f13
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f31,f6,f3
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fmuls f30,f13,f3
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// lfs f13,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f6,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// lfs f0,904(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmsubs f7,f5,f3,f7
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 - ctx.f7.f64));
	// fmuls f12,f4,f12
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmadds f12,f9,f3,f2
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f3.f64 + ctx.f2.f64));
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f9,f1,f9
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fneg f9,f31
	ctx.f9.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// lfs f5,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f5,f5,f11
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// stfs f5,8(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fnmadds f11,f2,f11,f30
	ctx.f11.f64 = double(float(-(ctx.f2.f64 * ctx.f11.f64 + ctx.f30.f64)));
	// lfs f5,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// stfs f7,16(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fmsubs f8,f8,f3,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 - ctx.f6.f64));
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f12,32(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfd f30,-24(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C1F70"))) PPC_WEAK_FUNC(sub_826C1F70);
PPC_FUNC_IMPL(__imp__sub_826C1F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18240
	ctx.r3.s64 = ctx.r11.s64 + -18240;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C1F80"))) PPC_WEAK_FUNC(sub_826C1F80);
PPC_FUNC_IMPL(__imp__sub_826C1F80) {
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
	// beq cr6,0x826c1fb8
	if (ctx.cr6.eq) goto loc_826C1FB8;
	// bl 0x823ab1c8
	ctx.lr = 0x826C1FA8;
	sub_823AB1C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826c1fb8
	if (!ctx.cr6.eq) goto loc_826C1FB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826c1fc4
	goto loc_826C1FC4;
loc_826C1FB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e5b8
	ctx.lr = 0x826C1FC4;
	sub_8233E5B8(ctx, base);
loc_826C1FC4:
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

__attribute__((alias("__imp__sub_826C1FE0"))) PPC_WEAK_FUNC(sub_826C1FE0);
PPC_FUNC_IMPL(__imp__sub_826C1FE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ab1c8
	sub_823AB1C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C1FE8"))) PPC_WEAK_FUNC(sub_826C1FE8);
PPC_FUNC_IMPL(__imp__sub_826C1FE8) {
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
	// li r3,1888
	ctx.r3.s64 = 1888;
	// bl 0x82833108
	ctx.lr = 0x826C2008;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826c2048
	if (ctx.cr0.eq) goto loc_826C2048;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e6c8
	ctx.lr = 0x826C201C;
	sub_8233E6C8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,12056
	ctx.r11.s64 = ctx.r11.s64 + 12056;
	// addi r10,r10,13232
	ctx.r10.s64 = ctx.r10.s64 + 13232;
	// addi r9,r9,29100
	ctx.r9.s64 = ctx.r9.s64 + 29100;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x826c204c
	goto loc_826C204C;
loc_826C2048:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826C204C:
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

__attribute__((alias("__imp__sub_826C2068"))) PPC_WEAK_FUNC(sub_826C2068);
PPC_FUNC_IMPL(__imp__sub_826C2068) {
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
	// bl 0x823ab1c8
	ctx.lr = 0x826C2088;
	sub_823AB1C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826c209c
	if (ctx.cr6.eq) goto loc_826C209C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233e668
	ctx.lr = 0x826C209C;
	sub_8233E668(ctx, base);
loc_826C209C:
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

__attribute__((alias("__imp__sub_826C20B8"))) PPC_WEAK_FUNC(sub_826C20B8);
PPC_FUNC_IMPL(__imp__sub_826C20B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18212
	ctx.r3.s64 = ctx.r11.s64 + -18212;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C20C8"))) PPC_WEAK_FUNC(sub_826C20C8);
PPC_FUNC_IMPL(__imp__sub_826C20C8) {
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
	// beq cr6,0x826c2100
	if (ctx.cr6.eq) goto loc_826C2100;
	// bl 0x823ab308
	ctx.lr = 0x826C20F0;
	sub_823AB308(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826c2100
	if (!ctx.cr6.eq) goto loc_826C2100;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826c210c
	goto loc_826C210C;
loc_826C2100:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e5b8
	ctx.lr = 0x826C210C;
	sub_8233E5B8(ctx, base);
loc_826C210C:
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

__attribute__((alias("__imp__sub_826C2128"))) PPC_WEAK_FUNC(sub_826C2128);
PPC_FUNC_IMPL(__imp__sub_826C2128) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ab308
	sub_823AB308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C2130"))) PPC_WEAK_FUNC(sub_826C2130);
PPC_FUNC_IMPL(__imp__sub_826C2130) {
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
	// li r3,1888
	ctx.r3.s64 = 1888;
	// bl 0x82833108
	ctx.lr = 0x826C2150;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826c2190
	if (ctx.cr0.eq) goto loc_826C2190;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e6c8
	ctx.lr = 0x826C2164;
	sub_8233E6C8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,13288
	ctx.r11.s64 = ctx.r11.s64 + 13288;
	// addi r10,r10,14464
	ctx.r10.s64 = ctx.r10.s64 + 14464;
	// addi r9,r9,29100
	ctx.r9.s64 = ctx.r9.s64 + 29100;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x826c2194
	goto loc_826C2194;
loc_826C2190:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826C2194:
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

__attribute__((alias("__imp__sub_826C21B0"))) PPC_WEAK_FUNC(sub_826C21B0);
PPC_FUNC_IMPL(__imp__sub_826C21B0) {
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
	// bl 0x823ab308
	ctx.lr = 0x826C21D0;
	sub_823AB308(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826c21e4
	if (ctx.cr6.eq) goto loc_826C21E4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233e668
	ctx.lr = 0x826C21E4;
	sub_8233E668(ctx, base);
loc_826C21E4:
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

__attribute__((alias("__imp__sub_826C2200"))) PPC_WEAK_FUNC(sub_826C2200);
PPC_FUNC_IMPL(__imp__sub_826C2200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826C2208;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826b8e58
	ctx.lr = 0x826C2214;
	sub_826B8E58(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lis r6,-32228
	ctx.r6.s64 = -2112094208;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,-32616(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32616);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r7,13232
	ctx.r9.s64 = ctx.r7.s64 + 13232;
	// addi r8,r8,12056
	ctx.r8.s64 = ctx.r8.s64 + 12056;
	// stfs f0,1512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1512, temp.u32);
	// addi r7,r6,29100
	ctx.r7.s64 = ctx.r6.s64 + 29100;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r7,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r7.u32);
	// stw r10,1852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1852, ctx.r10.u32);
	// beq cr6,0x826c2264
	if (ctx.cr6.eq) goto loc_826C2264;
	// li r9,25
	ctx.r9.s64 = 25;
	// stw r10,592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 592, ctx.r10.u32);
	// stw r9,452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 452, ctx.r9.u32);
loc_826C2264:
	// li r27,1
	ctx.r27.s64 = 1;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// stw r27,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r27.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,16991
	ctx.r10.s64 = 1113522176;
	// addi r3,r11,11836
	ctx.r3.s64 = ctx.r11.s64 + 11836;
	// ori r30,r10,57115
	ctx.r30.u64 = ctx.r10.u64 | 57115;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// addi r29,r11,1268
	ctx.r29.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x826C228C;
	sub_82816528(ctx, base);
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r31,1580
	ctx.r4.s64 = ctx.r31.s64 + 1580;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x823cf190
	ctx.lr = 0x826C22A8;
	sub_823CF190(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// addi r3,r10,11892
	ctx.r3.s64 = ctx.r10.s64 + 11892;
	// addi r29,r11,1268
	ctx.r29.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x826C22BC;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,1584
	ctx.r4.s64 = ctx.r31.s64 + 1584;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x823cf190
	ctx.lr = 0x826C22D4;
	sub_823CF190(ctx, base);
	// lis r11,943
	ctx.r11.s64 = 61800448;
	// lis r10,6379
	ctx.r10.s64 = 418054144;
	// stw r27,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r27.u32);
	// ori r11,r11,39864
	ctx.r11.u64 = ctx.r11.u64 | 39864;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// ori r10,r10,47726
	ctx.r10.u64 = ctx.r10.u64 | 47726;
	// stw r11,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C2300"))) PPC_WEAK_FUNC(sub_826C2300);
PPC_FUNC_IMPL(__imp__sub_826C2300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826C2308;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826b8e58
	ctx.lr = 0x826C2314;
	sub_826B8E58(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lis r6,-32228
	ctx.r6.s64 = -2112094208;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,-32616(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32616);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r7,14464
	ctx.r9.s64 = ctx.r7.s64 + 14464;
	// addi r8,r8,13288
	ctx.r8.s64 = ctx.r8.s64 + 13288;
	// stfs f0,1512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1512, temp.u32);
	// addi r7,r6,29100
	ctx.r7.s64 = ctx.r6.s64 + 29100;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r7,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r7.u32);
	// stw r10,1852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1852, ctx.r10.u32);
	// beq cr6,0x826c2364
	if (ctx.cr6.eq) goto loc_826C2364;
	// li r9,25
	ctx.r9.s64 = 25;
	// stw r10,592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 592, ctx.r10.u32);
	// stw r9,452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 452, ctx.r9.u32);
loc_826C2364:
	// li r27,1
	ctx.r27.s64 = 1;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// stw r27,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r27.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,16991
	ctx.r10.s64 = 1113522176;
	// addi r3,r11,11944
	ctx.r3.s64 = ctx.r11.s64 + 11944;
	// ori r30,r10,57115
	ctx.r30.u64 = ctx.r10.u64 | 57115;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// addi r29,r11,1268
	ctx.r29.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x826C238C;
	sub_82816528(ctx, base);
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r31,1580
	ctx.r4.s64 = ctx.r31.s64 + 1580;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x823cf190
	ctx.lr = 0x826C23A8;
	sub_823CF190(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// addi r3,r10,12000
	ctx.r3.s64 = ctx.r10.s64 + 12000;
	// addi r29,r11,1268
	ctx.r29.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x826C23BC;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,1584
	ctx.r4.s64 = ctx.r31.s64 + 1584;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x823cf190
	ctx.lr = 0x826C23D4;
	sub_823CF190(ctx, base);
	// lis r11,7325
	ctx.r11.s64 = 480051200;
	// lis r10,5557
	ctx.r10.s64 = 364183552;
	// stw r27,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r27.u32);
	// ori r11,r11,2939
	ctx.r11.u64 = ctx.r11.u64 | 2939;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// ori r10,r10,5841
	ctx.r10.u64 = ctx.r10.u64 | 5841;
	// stw r11,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C2400"))) PPC_WEAK_FUNC(sub_826C2400);
PPC_FUNC_IMPL(__imp__sub_826C2400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x826C2408;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x826b9508
	ctx.lr = 0x826C2414;
	sub_826B9508(ctx, base);
	// lwz r11,1580(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1580);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c242c
	if (ctx.cr6.eq) goto loc_826C242C;
	// lwz r11,1584(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1584);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826c2564
	if (!ctx.cr6.eq) goto loc_826C2564;
loc_826C242C:
	// lwz r11,960(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826c2564
	if (!ctx.cr6.eq) goto loc_826C2564;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r26,84(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r25,1164(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1164);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C2460;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826c247c
	if (!ctx.cr6.gt) goto loc_826C247C;
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r11.u32);
	// b 0x826c2550
	goto loc_826C2550;
loc_826C247C:
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826c251c
	if (!ctx.cr6.eq) goto loc_826C251C;
	// lwz r27,1160(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1160);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C24A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r29,r26,948
	ctx.r29.s64 = ctx.r26.s64 + 948;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826c24fc
	if (!ctx.cr6.gt) goto loc_826C24FC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_826C24B8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x826c24e8
	if (!ctx.cr6.eq) goto loc_826C24E8;
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
	// bl 0x82332ca8
	ctx.lr = 0x826C24E0;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_826C24E8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826c24b8
	if (ctx.cr6.lt) goto loc_826C24B8;
loc_826C24FC:
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C251C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826C251C:
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826c2550
	if (!ctx.cr0.eq) goto loc_826C2550;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C253C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826c2550
	if (ctx.cr0.eq) goto loc_826C2550;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x826C2550;
	sub_82410060(ctx, base);
loc_826C2550:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C2564;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826C2564:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C2570"))) PPC_WEAK_FUNC(sub_826C2570);
PPC_FUNC_IMPL(__imp__sub_826C2570) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826c21b0
	sub_826C21B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C2578"))) PPC_WEAK_FUNC(sub_826C2578);
PPC_FUNC_IMPL(__imp__sub_826C2578) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826c2068
	sub_826C2068(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C2580"))) PPC_WEAK_FUNC(sub_826C2580);
PPC_FUNC_IMPL(__imp__sub_826C2580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18392
	ctx.r3.s64 = ctx.r11.s64 + -18392;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C2590"))) PPC_WEAK_FUNC(sub_826C2590);
PPC_FUNC_IMPL(__imp__sub_826C2590) {
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
	// beq cr6,0x826c25c8
	if (ctx.cr6.eq) goto loc_826C25C8;
	// bl 0x823aac88
	ctx.lr = 0x826C25B8;
	sub_823AAC88(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826c25c8
	if (!ctx.cr6.eq) goto loc_826C25C8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826c25d4
	goto loc_826C25D4;
loc_826C25C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e5b8
	ctx.lr = 0x826C25D4;
	sub_8233E5B8(ctx, base);
loc_826C25D4:
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

__attribute__((alias("__imp__sub_826C25F0"))) PPC_WEAK_FUNC(sub_826C25F0);
PPC_FUNC_IMPL(__imp__sub_826C25F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823aac88
	sub_823AAC88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C25F8"))) PPC_WEAK_FUNC(sub_826C25F8);
PPC_FUNC_IMPL(__imp__sub_826C25F8) {
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
	// li r3,1920
	ctx.r3.s64 = 1920;
	// bl 0x82833108
	ctx.lr = 0x826C2618;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826c2688
	if (ctx.cr0.eq) goto loc_826C2688;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e6c8
	ctx.lr = 0x826C262C;
	sub_8233E6C8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r11,r11,14544
	ctx.r11.s64 = ctx.r11.s64 + 14544;
	// addi r10,r10,15720
	ctx.r10.s64 = ctx.r10.s64 + 15720;
	// addi r9,r9,15772
	ctx.r9.s64 = ctx.r9.s64 + 15772;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1888);
	// stw r11,1888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1888, ctx.r11.u32);
	// lwz r11,1892(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1892);
	// stw r11,1892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1892, ctx.r11.u32);
	// lwz r11,1896(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1896);
	// stw r11,1896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1896, ctx.r11.u32);
	// lwz r11,1900(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1900);
	// stw r11,1900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1900, ctx.r11.u32);
	// lwz r11,1904(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1904);
	// stw r11,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r11.u32);
	// lwz r11,1908(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1908);
	// stw r11,1908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1908, ctx.r11.u32);
	// b 0x826c268c
	goto loc_826C268C;
loc_826C2688:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826C268C:
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

__attribute__((alias("__imp__sub_826C26A8"))) PPC_WEAK_FUNC(sub_826C26A8);
PPC_FUNC_IMPL(__imp__sub_826C26A8) {
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
	// bl 0x823aac88
	ctx.lr = 0x826C26C8;
	sub_823AAC88(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826c26dc
	if (ctx.cr6.eq) goto loc_826C26DC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233e668
	ctx.lr = 0x826C26DC;
	sub_8233E668(ctx, base);
loc_826C26DC:
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

__attribute__((alias("__imp__sub_826C26F8"))) PPC_WEAK_FUNC(sub_826C26F8);
PPC_FUNC_IMPL(__imp__sub_826C26F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,23860(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23860);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826c2738
	if (!ctx.cr0.eq) goto loc_826C2738;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,23860(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23860, ctx.r11.u32);
	// addi r3,r9,14516
	ctx.r3.s64 = ctx.r9.s64 + 14516;
	// bl 0x82816528
	ctx.lr = 0x826C2730;
	sub_82816528(ctx, base);
	// stw r3,23856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23856, ctx.r3.u32);
	// b 0x826c273c
	goto loc_826C273C;
loc_826C2738:
	// lwz r3,23856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23856);
loc_826C273C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C2750"))) PPC_WEAK_FUNC(sub_826C2750);
PPC_FUNC_IMPL(__imp__sub_826C2750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x826C2758;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826b8e58
	ctx.lr = 0x826C2764;
	sub_826B8E58(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// lfs f0,19664(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19664);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lfs f13,16528(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16528);
	ctx.f13.f64 = double(temp.f32);
	// li r29,1
	ctx.r29.s64 = 1;
	// lfs f11,-12104(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12104);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r7,14544
	ctx.r9.s64 = ctx.r7.s64 + 14544;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r25,100(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f12,18368(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18368);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,15720
	ctx.r11.s64 = ctx.r11.s64 + 15720;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r10,r10,15772
	ctx.r10.s64 = ctx.r10.s64 + 15772;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r24,-31949
	ctx.r24.s64 = -2093809664;
	// stw r6,1900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1900, ctx.r6.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// lis r5,-15615
	ctx.r5.s64 = -1023344640;
	// stw r29,1888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1888, ctx.r29.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r29,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r29.u32);
	// addi r4,r31,1580
	ctx.r4.s64 = ctx.r31.s64 + 1580;
	// stw r29,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r29.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r8,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r8.u32);
	// ori r5,r5,53772
	ctx.r5.u64 = ctx.r5.u64 | 53772;
	// stw r3,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r3.u32);
	// stw r25,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r25.u32);
	// stw r26,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r26.u32);
	// stw r28,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r28.u32);
	// stw r27,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r27.u32);
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x826C2830;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lis r5,28332
	ctx.r5.s64 = 1856765952;
	// addi r4,r31,1904
	ctx.r4.s64 = ctx.r31.s64 + 1904;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,47185
	ctx.r5.u64 = ctx.r5.u64 | 47185;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x826C2850;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lis r5,-3681
	ctx.r5.s64 = -241238016;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r4,r31,1908
	ctx.r4.s64 = ctx.r31.s64 + 1908;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,17616
	ctx.r5.u64 = ctx.r5.u64 | 17616;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x826C2870;
	sub_823CF190(ctx, base);
	// lis r11,3880
	ctx.r11.s64 = 254279680;
	// stw r29,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,50031
	ctx.r11.u64 = ctx.r11.u64 | 50031;
	// stw r29,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r29.u32);
	// stw r29,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r29.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C2898"))) PPC_WEAK_FUNC(sub_826C2898);
PPC_FUNC_IMPL(__imp__sub_826C2898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x826b9508
	ctx.lr = 0x826C28B0;
	sub_826B9508(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r11.u32);
	// stw r10,1784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1784, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C28D8"))) PPC_WEAK_FUNC(sub_826C28D8);
PPC_FUNC_IMPL(__imp__sub_826C28D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x826bafd8
	ctx.lr = 0x826C28F0;
	sub_826BAFD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826c2910
	ctx.lr = 0x826C28F8;
	sub_826C2910(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C2910"))) PPC_WEAK_FUNC(sub_826C2910);
PPC_FUNC_IMPL(__imp__sub_826C2910) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c2a08
	if (ctx.cr6.eq) goto loc_826C2A08;
	// lfs f13,624(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,1636(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,1640(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,1632(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f11,32748(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32748);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x826c2a00
	if (!ctx.cr6.gt) goto loc_826C2A00;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r31,572
	ctx.r30.s64 = ctx.r31.s64 + 572;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// lfs f1,16668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// stw r9,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r9.u32);
	// stw r8,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r8.u32);
	// bl 0x82332e18
	ctx.lr = 0x826C29B0;
	sub_82332E18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82817280
	ctx.lr = 0x826C29C0;
	sub_82817280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C29D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,1504(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,572(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,572(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 572, temp.u32);
	// stfs f12,576(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
	// stfs f0,580(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 580, temp.u32);
	// b 0x826c2a08
	goto loc_826C2A08;
loc_826C2A00:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1888, ctx.r11.u32);
loc_826C2A08:
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

__attribute__((alias("__imp__sub_826C2A20"))) PPC_WEAK_FUNC(sub_826C2A20);
PPC_FUNC_IMPL(__imp__sub_826C2A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826C2A28;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x826c2be8
	if (!ctx.cr6.gt) goto loc_826C2BE8;
	// lfs f13,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,572(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f13,f12,f1
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lfs f12,576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f31,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bne cr6,0x826c2af0
	if (!ctx.cr6.eq) goto loc_826C2AF0;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x826c2af0
	if (!ctx.cr6.eq) goto loc_826C2AF0;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// beq cr6,0x826c2be8
	if (ctx.cr6.eq) goto loc_826C2BE8;
loc_826C2AF0:
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// addi r28,r31,656
	ctx.r28.s64 = ctx.r31.s64 + 656;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r7,7
	ctx.r7.s64 = 7;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,13024(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828264e0
	ctx.lr = 0x826C2B14;
	sub_828264E0(ctx, base);
	// lfs f0,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x826c2be8
	if (!ctx.cr6.lt) goto loc_826C2BE8;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826c2be8
	if (!ctx.cr0.eq) goto loc_826C2BE8;
	// lwz r30,160(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826c2be8
	if (ctx.cr6.eq) goto loc_826C2BE8;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826c2be8
	if (ctx.cr6.eq) goto loc_826C2BE8;
	// bl 0x823aac88
	ctx.lr = 0x826C2B48;
	sub_823AAC88(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C2B60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c2b6c
	if (!ctx.cr0.eq) goto loc_826C2B6C;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_826C2B6C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x826c2bc0
	if (!ctx.cr6.eq) goto loc_826C2BC0;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x824f65f8
	ctx.lr = 0x826C2B7C;
	sub_824F65F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826c2bc0
	if (!ctx.cr0.eq) goto loc_826C2BC0;
	// lwz r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r11,816(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c2be8
	if (ctx.cr6.eq) goto loc_826C2BE8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r7,148(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 108);
	// lwz r11,856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 856);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C2BBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826c2be8
	goto loc_826C2BE8;
loc_826C2BC0:
	// stw r29,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r29.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r7,7
	ctx.r7.s64 = 7;
	// lwz r3,13024(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828264e0
	ctx.lr = 0x826C2BE0;
	sub_828264E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r11.u32);
loc_826C2BE8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C2BF8"))) PPC_WEAK_FUNC(sub_826C2BF8);
PPC_FUNC_IMPL(__imp__sub_826C2BF8) {
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
	// bl 0x829c4d58
	ctx.lr = 0x826C2C18;
	sub_829C4D58(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,1632
	ctx.r4.s64 = ctx.r31.s64 + 1632;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C2C34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,1636
	ctx.r4.s64 = ctx.r31.s64 + 1636;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C2C50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,1640
	ctx.r4.s64 = ctx.r31.s64 + 1640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C2C6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,572
	ctx.r4.s64 = ctx.r31.s64 + 572;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C2C88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,576
	ctx.r4.s64 = ctx.r31.s64 + 576;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C2CA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,580
	ctx.r4.s64 = ctx.r31.s64 + 580;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C2CC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,1504
	ctx.r4.s64 = ctx.r31.s64 + 1504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C2CDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c2cf0
	if (ctx.cr6.eq) goto loc_826C2CF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826c2910
	ctx.lr = 0x826C2CF0;
	sub_826C2910(ctx, base);
loc_826C2CF0:
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

__attribute__((alias("__imp__sub_826C2D08"))) PPC_WEAK_FUNC(sub_826C2D08);
PPC_FUNC_IMPL(__imp__sub_826C2D08) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x824116b0
	ctx.lr = 0x826C2D2C;
	sub_824116B0(ctx, base);
	// lwz r11,1900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1900);
	// lwz r10,452(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 452);
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,1900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1900, ctx.r11.u32);
	// bgt 0x826c2d6c
	if (ctx.cr0.gt) goto loc_826C2D6C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r9,628(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// ld r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,620(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 620);
	// rldicr r5,r9,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C2D6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826C2D6C:
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

__attribute__((alias("__imp__sub_826C2D88"))) PPC_WEAK_FUNC(sub_826C2D88);
PPC_FUNC_IMPL(__imp__sub_826C2D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x826C2D90;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x826ba6c8
	ctx.lr = 0x826C2DA4;
	sub_826BA6C8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x826C2DC8;
	sub_8281D960(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826c2dec
	if (ctx.cr0.eq) goto loc_826C2DEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C2DE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x826c2df0
	goto loc_826C2DF0;
loc_826C2DEC:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_826C2DF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332988
	ctx.lr = 0x826C2DF8;
	sub_82332988(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f6598
	ctx.lr = 0x826C2E04;
	sub_824F6598(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826c2e44
	if (ctx.cr6.eq) goto loc_826C2E44;
	// bl 0x8239b148
	ctx.lr = 0x826C2E14;
	sub_8239B148(ctx, base);
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
	ctx.lr = 0x826C2E2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x826c2e3c
	if (!ctx.cr0.eq) goto loc_826C2E3C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_826C2E3C:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x826c2e48
	goto loc_826C2E48;
loc_826C2E44:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_826C2E48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255bb18
	ctx.lr = 0x826C2E50;
	sub_8255BB18(ctx, base);
	// lwz r11,1904(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1904);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c2eb4
	if (ctx.cr6.eq) goto loc_826C2EB4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x826c2e6c
	if (!ctx.cr6.eq) goto loc_826C2E6C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x826c2eb4
	if (ctx.cr6.eq) goto loc_826C2EB4;
loc_826C2E6C:
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817280
	ctx.lr = 0x826C2E78;
	sub_82817280(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,1904(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1904);
	// rldicr r8,r9,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 4);
	// li r4,48
	ctx.r4.s64 = 48;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,13024(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// rldicr r10,r9,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x8282b1e0
	ctx.lr = 0x826C2EB0;
	sub_8282B1E0(ctx, base);
	// b 0x826c2f14
	goto loc_826C2F14;
loc_826C2EB4:
	// lwz r11,1908(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1908);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c2f14
	if (ctx.cr6.eq) goto loc_826C2F14;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x826c2ed0
	if (!ctx.cr6.eq) goto loc_826C2ED0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826c2f14
	if (ctx.cr6.eq) goto loc_826C2F14;
loc_826C2ED0:
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817280
	ctx.lr = 0x826C2EDC;
	sub_82817280(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,1908(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1908);
	// rldicr r8,r9,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 4);
	// li r4,48
	ctx.r4.s64 = 48;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,13024(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// rldicr r10,r9,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x8282b1e0
	ctx.lr = 0x826C2F14;
	sub_8282B1E0(ctx, base);
loc_826C2F14:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C2F20"))) PPC_WEAK_FUNC(sub_826C2F20);
PPC_FUNC_IMPL(__imp__sub_826C2F20) {
	PPC_FUNC_PROLOGUE();
	// b 0x826b91d0
	sub_826B91D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C2F28"))) PPC_WEAK_FUNC(sub_826C2F28);
PPC_FUNC_IMPL(__imp__sub_826C2F28) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C2F30"))) PPC_WEAK_FUNC(sub_826C2F30);
PPC_FUNC_IMPL(__imp__sub_826C2F30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826c26a8
	sub_826C26A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C2F38"))) PPC_WEAK_FUNC(sub_826C2F38);
PPC_FUNC_IMPL(__imp__sub_826C2F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5052
	ctx.r3.s64 = ctx.r11.s64 + -5052;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C2F48"))) PPC_WEAK_FUNC(sub_826C2F48);
PPC_FUNC_IMPL(__imp__sub_826C2F48) {
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
	// beq cr6,0x826c2f80
	if (ctx.cr6.eq) goto loc_826C2F80;
	// bl 0x823c7318
	ctx.lr = 0x826C2F70;
	sub_823C7318(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826c2f80
	if (!ctx.cr6.eq) goto loc_826C2F80;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826c2f8c
	goto loc_826C2F8C;
loc_826C2F80:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e5b8
	ctx.lr = 0x826C2F8C;
	sub_8233E5B8(ctx, base);
loc_826C2F8C:
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

__attribute__((alias("__imp__sub_826C2FA8"))) PPC_WEAK_FUNC(sub_826C2FA8);
PPC_FUNC_IMPL(__imp__sub_826C2FA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c7318
	sub_823C7318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C2FB0"))) PPC_WEAK_FUNC(sub_826C2FB0);
PPC_FUNC_IMPL(__imp__sub_826C2FB0) {
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
	// li r3,1888
	ctx.r3.s64 = 1888;
	// bl 0x82833108
	ctx.lr = 0x826C2FD0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826c3010
	if (ctx.cr0.eq) goto loc_826C3010;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e6c8
	ctx.lr = 0x826C2FE4;
	sub_8233E6C8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,15800
	ctx.r11.s64 = ctx.r11.s64 + 15800;
	// addi r10,r10,16976
	ctx.r10.s64 = ctx.r10.s64 + 16976;
	// addi r9,r9,29100
	ctx.r9.s64 = ctx.r9.s64 + 29100;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x826c3014
	goto loc_826C3014;
loc_826C3010:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826C3014:
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

__attribute__((alias("__imp__sub_826C3030"))) PPC_WEAK_FUNC(sub_826C3030);
PPC_FUNC_IMPL(__imp__sub_826C3030) {
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
	// bl 0x823c7318
	ctx.lr = 0x826C3050;
	sub_823C7318(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826c3064
	if (ctx.cr6.eq) goto loc_826C3064;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233e668
	ctx.lr = 0x826C3064;
	sub_8233E668(ctx, base);
loc_826C3064:
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

__attribute__((alias("__imp__sub_826C3080"))) PPC_WEAK_FUNC(sub_826C3080);
PPC_FUNC_IMPL(__imp__sub_826C3080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5020
	ctx.r3.s64 = ctx.r11.s64 + -5020;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C3090"))) PPC_WEAK_FUNC(sub_826C3090);
PPC_FUNC_IMPL(__imp__sub_826C3090) {
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
	// beq cr6,0x826c30c8
	if (ctx.cr6.eq) goto loc_826C30C8;
	// bl 0x823c74b0
	ctx.lr = 0x826C30B8;
	sub_823C74B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826c30c8
	if (!ctx.cr6.eq) goto loc_826C30C8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826c30d4
	goto loc_826C30D4;
loc_826C30C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824001e8
	ctx.lr = 0x826C30D4;
	sub_824001E8(ctx, base);
loc_826C30D4:
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

__attribute__((alias("__imp__sub_826C30F0"))) PPC_WEAK_FUNC(sub_826C30F0);
PPC_FUNC_IMPL(__imp__sub_826C30F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c74b0
	sub_823C74B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C30F8"))) PPC_WEAK_FUNC(sub_826C30F8);
PPC_FUNC_IMPL(__imp__sub_826C30F8) {
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
	// li r3,1552
	ctx.r3.s64 = 1552;
	// bl 0x82833108
	ctx.lr = 0x826C3118;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826c3158
	if (ctx.cr0.eq) goto loc_826C3158;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fffc8
	ctx.lr = 0x826C312C;
	sub_823FFFC8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,17032
	ctx.r11.s64 = ctx.r11.s64 + 17032;
	// addi r10,r10,18072
	ctx.r10.s64 = ctx.r10.s64 + 18072;
	// addi r9,r9,18524
	ctx.r9.s64 = ctx.r9.s64 + 18524;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x826c315c
	goto loc_826C315C;
loc_826C3158:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826C315C:
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

__attribute__((alias("__imp__sub_826C3178"))) PPC_WEAK_FUNC(sub_826C3178);
PPC_FUNC_IMPL(__imp__sub_826C3178) {
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
	// bl 0x823c74b0
	ctx.lr = 0x826C3198;
	sub_823C74B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826c31ac
	if (ctx.cr6.eq) goto loc_826C31AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x826C31AC;
	sub_82400188(ctx, base);
loc_826C31AC:
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

__attribute__((alias("__imp__sub_826C31C8"))) PPC_WEAK_FUNC(sub_826C31C8);
PPC_FUNC_IMPL(__imp__sub_826C31C8) {
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
	// bl 0x8270b438
	ctx.lr = 0x826C31E8;
	sub_8270B438(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826c31f8
	if (ctx.cr0.eq) goto loc_826C31F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x826C31F8;
	sub_82332DB8(ctx, base);
loc_826C31F8:
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

__attribute__((alias("__imp__sub_826C3218"))) PPC_WEAK_FUNC(sub_826C3218);
PPC_FUNC_IMPL(__imp__sub_826C3218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-4988
	ctx.r3.s64 = ctx.r11.s64 + -4988;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C3228"))) PPC_WEAK_FUNC(sub_826C3228);
PPC_FUNC_IMPL(__imp__sub_826C3228) {
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
	// beq cr6,0x826c3260
	if (ctx.cr6.eq) goto loc_826C3260;
	// bl 0x823c75b8
	ctx.lr = 0x826C3250;
	sub_823C75B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826c3260
	if (!ctx.cr6.eq) goto loc_826C3260;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826c326c
	goto loc_826C326C;
loc_826C3260:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e5b8
	ctx.lr = 0x826C326C;
	sub_8233E5B8(ctx, base);
loc_826C326C:
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

__attribute__((alias("__imp__sub_826C3288"))) PPC_WEAK_FUNC(sub_826C3288);
PPC_FUNC_IMPL(__imp__sub_826C3288) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c75b8
	sub_823C75B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C3290"))) PPC_WEAK_FUNC(sub_826C3290);
PPC_FUNC_IMPL(__imp__sub_826C3290) {
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
	// li r3,1888
	ctx.r3.s64 = 1888;
	// bl 0x82833108
	ctx.lr = 0x826C32B0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826c32f0
	if (ctx.cr0.eq) goto loc_826C32F0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e6c8
	ctx.lr = 0x826C32C4;
	sub_8233E6C8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,18128
	ctx.r11.s64 = ctx.r11.s64 + 18128;
	// addi r10,r10,19304
	ctx.r10.s64 = ctx.r10.s64 + 19304;
	// addi r9,r9,29100
	ctx.r9.s64 = ctx.r9.s64 + 29100;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x826c32f4
	goto loc_826C32F4;
loc_826C32F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826C32F4:
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

__attribute__((alias("__imp__sub_826C3310"))) PPC_WEAK_FUNC(sub_826C3310);
PPC_FUNC_IMPL(__imp__sub_826C3310) {
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
	// bl 0x823c75b8
	ctx.lr = 0x826C3330;
	sub_823C75B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826c3344
	if (ctx.cr6.eq) goto loc_826C3344;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233e668
	ctx.lr = 0x826C3344;
	sub_8233E668(ctx, base);
loc_826C3344:
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

__attribute__((alias("__imp__sub_826C3360"))) PPC_WEAK_FUNC(sub_826C3360);
PPC_FUNC_IMPL(__imp__sub_826C3360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826C3368;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826b8e58
	ctx.lr = 0x826C3374;
	sub_826B8E58(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r5,3475
	ctx.r5.s64 = 227737600;
	// lfs f13,17116(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17116);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// lfs f0,19792(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19792);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f13,-27300(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27300);
	ctx.f13.f64 = double(temp.f32);
	// ori r4,r5,5702
	ctx.r4.u64 = ctx.r5.u64 | 5702;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f0,896(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 896);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r7,18128
	ctx.r7.s64 = ctx.r7.s64 + 18128;
	// addi r11,r11,19304
	ctx.r11.s64 = ctx.r11.s64 + 19304;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,29100
	ctx.r10.s64 = ctx.r10.s64 + 29100;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r4,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r4.u32);
	// stfs f13,696(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// stfs f0,1504(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1504, temp.u32);
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// stfs f0,1508(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1508, temp.u32);
	// stw r8,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r8.u32);
	// stw r29,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r29.u32);
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// stw r6,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r6.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r3,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r3.u32);
	// lis r5,30438
	ctx.r5.s64 = 1994784768;
	// stw r9,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r9.u32);
	// addi r4,r31,1580
	ctx.r4.s64 = ctx.r31.s64 + 1580;
	// stw r28,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r28.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r27,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// ori r5,r5,50275
	ctx.r5.u64 = ctx.r5.u64 | 50275;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x826C3448;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lis r5,152
	ctx.r5.s64 = 9961472;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r4,r31,1584
	ctx.r4.s64 = ctx.r31.s64 + 1584;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,65346
	ctx.r5.u64 = ctx.r5.u64 | 65346;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x826C3468;
	sub_823CF190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C3478"))) PPC_WEAK_FUNC(sub_826C3478);
PPC_FUNC_IMPL(__imp__sub_826C3478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826C3480;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826b8e58
	ctx.lr = 0x826C348C;
	sub_826B8E58(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r10,r10,15800
	ctx.r10.s64 = ctx.r10.s64 + 15800;
	// lfs f0,-27300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r8,29100
	ctx.r11.s64 = ctx.r8.s64 + 29100;
	// addi r9,r9,16976
	ctx.r9.s64 = ctx.r9.s64 + 16976;
	// stfs f0,696(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r8,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r8.u32);
	// lis r5,8837
	ctx.r5.s64 = 579141632;
	// addi r4,r31,1580
	ctx.r4.s64 = ctx.r31.s64 + 1580;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,45997
	ctx.r5.u64 = ctx.r5.u64 | 45997;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x826C34EC;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r5,-3234
	ctx.r5.s64 = -211943424;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r4,r31,1584
	ctx.r4.s64 = ctx.r31.s64 + 1584;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,46433
	ctx.r5.u64 = ctx.r5.u64 | 46433;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x826C350C;
	sub_823CF190(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5020
	ctx.r3.s64 = ctx.r11.s64 + -5020;
	// bl 0x82816528
	ctx.lr = 0x826C3518;
	sub_82816528(ctx, base);
	// lis r11,15583
	ctx.r11.s64 = 1021247488;
	// stw r3,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,50603
	ctx.r11.u64 = ctx.r11.u64 | 50603;
	// stw r11,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C3538"))) PPC_WEAK_FUNC(sub_826C3538);
PPC_FUNC_IMPL(__imp__sub_826C3538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x826ba0c8
	ctx.lr = 0x826C3550;
	sub_826BA0C8(ctx, base);
	// lwz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 460, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C3578"))) PPC_WEAK_FUNC(sub_826C3578);
PPC_FUNC_IMPL(__imp__sub_826C3578) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826c31c8
	sub_826C31C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C3580"))) PPC_WEAK_FUNC(sub_826C3580);
PPC_FUNC_IMPL(__imp__sub_826C3580) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826c3310
	sub_826C3310(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C3588"))) PPC_WEAK_FUNC(sub_826C3588);
PPC_FUNC_IMPL(__imp__sub_826C3588) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826c3178
	sub_826C3178(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C3590"))) PPC_WEAK_FUNC(sub_826C3590);
PPC_FUNC_IMPL(__imp__sub_826C3590) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826c3030
	sub_826C3030(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C3598"))) PPC_WEAK_FUNC(sub_826C3598);
PPC_FUNC_IMPL(__imp__sub_826C3598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826C35A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826b8e58
	ctx.lr = 0x826C35AC;
	sub_826B8E58(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lfs f0,17060(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17060);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r7,-26968
	ctx.r7.s64 = ctx.r7.s64 + -26968;
	// lfs f13,32716(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32716);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r27,100(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r10,r10,-25740
	ctx.r10.s64 = ctx.r10.s64 + -25740;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,24088(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24088);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// lfs f13,912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r6,r6,-25792
	ctx.r6.s64 = ctx.r6.s64 + -25792;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f0,1504(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1504, temp.u32);
	// li r8,10
	ctx.r8.s64 = 10;
	// stfs f13,696(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// lwz r7,1816(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// oris r10,r7,128
	ctx.r10.u64 = ctx.r7.u64 | 8388608;
	// stw r9,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r9.u32);
	// stw r8,1892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1892, ctx.r8.u32);
	// stw r11,1028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1028, ctx.r11.u32);
	// stw r11,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r11.u32);
	// stw r5,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r5.u32);
	// stw r27,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r27.u32);
	// stw r28,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r28.u32);
	// stw r10,1816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1816, ctx.r10.u32);
	// stw r4,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r4.u32);
	// stw r30,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r30.u32);
	// stw r29,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C3678"))) PPC_WEAK_FUNC(sub_826C3678);
PPC_FUNC_IMPL(__imp__sub_826C3678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826C3680;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r4,-5310
	ctx.r4.s64 = -347996160;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// ori r4,r4,37952
	ctx.r4.u64 = ctx.r4.u64 | 37952;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r9,1668(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// lwz r7,1656(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,1660(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1660);
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,1648(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1648);
	// bl 0x826b9ff8
	ctx.lr = 0x826C36E0;
	sub_826B9FF8(ctx, base);
	// stfs f31,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lis r4,26666
	ctx.r4.s64 = 1747582976;
	// lwz r10,1668(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r8,1656(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// ori r4,r4,18444
	ctx.r4.u64 = ctx.r4.u64 | 18444;
	// ld r9,1660(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1660);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r7,1648(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1648);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x826b9f28
	ctx.lr = 0x826C372C;
	sub_826B9F28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826c3764
	if (ctx.cr6.eq) goto loc_826C3764;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C375C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x826c3768
	goto loc_826C3768;
loc_826C3764:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_826C3768:
	// lfs f0,1512(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f0.u64);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r10,0
	ctx.r10.s64 = 0;
	// ld r28,160(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r27,168(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// std r28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// bl 0x82331120
	ctx.lr = 0x826C37C0;
	sub_82331120(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lis r30,18
	ctx.r30.s64 = 1179648;
	// addi r3,r9,19356
	ctx.r3.s64 = ctx.r9.s64 + 19356;
	// lfs f0,-27328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27328);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,19204(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19204);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x826C3804;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r28,168(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,184(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ld r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// li r6,8
	ctx.r6.s64 = 8;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r10,r27,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bl 0x826b9f28
	ctx.lr = 0x826C3840;
	sub_826B9F28(ctx, base);
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// beq cr6,0x826c3878
	if (ctx.cr6.eq) goto loc_826C3878;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C3870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x826c387c
	goto loc_826C387C;
loc_826C3878:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_826C387C:
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r30,184(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82331120
	ctx.lr = 0x826C38C0;
	sub_82331120(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C38D0"))) PPC_WEAK_FUNC(sub_826C38D0);
PPC_FUNC_IMPL(__imp__sub_826C38D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826C38D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,28(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,32(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x826C3908;
	sub_8281D960(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826c392c
	if (ctx.cr0.eq) goto loc_826C392C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C3924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x826c3930
	goto loc_826C3930;
loc_826C392C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_826C3930:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826c394c
	if (ctx.cr6.eq) goto loc_826C394C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C394C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826C394C:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r9,32(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x826C396C;
	sub_8281D960(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826c39a4
	if (ctx.cr0.eq) goto loc_826C39A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C3988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C399C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x826c39a8
	goto loc_826C39A8;
loc_826C39A4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_826C39A8:
	// lwz r3,800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// bl 0x82333a20
	ctx.lr = 0x826C39B0;
	sub_82333A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826c39c8
	if (ctx.cr0.eq) goto loc_826C39C8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826c39c8
	if (ctx.cr6.eq) goto loc_826C39C8;
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x826c3a20
	if (ctx.cr6.eq) goto loc_826C3A20;
loc_826C39C8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826c39e0
	if (ctx.cr6.eq) goto loc_826C39E0;
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// lwz r10,800(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x826c3a20
	if (ctx.cr6.eq) goto loc_826C3A20;
loc_826C39E0:
	// lwz r11,1892(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1892);
	// lwz r10,452(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 452);
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,1892(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1892, ctx.r11.u32);
	// bgt 0x826c3a20
	if (ctx.cr0.gt) goto loc_826C3A20;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// lwz r9,628(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// ld r6,16(r27)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r27.u32 + 16);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,620(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 620);
	// rldicr r5,r9,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C3A20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826C3A20:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C3A28"))) PPC_WEAK_FUNC(sub_826C3A28);
PPC_FUNC_IMPL(__imp__sub_826C3A28) {
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
	// bl 0x826c3598
	ctx.lr = 0x826C3A40;
	sub_826C3598(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lfs f13,32748(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32748);
	ctx.f13.f64 = double(temp.f32);
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lfs f0,16772(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16772);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,24020(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24020);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r7,-25696
	ctx.r9.s64 = ctx.r7.s64 + -25696;
	// addi r8,r6,-24516
	ctx.r8.s64 = ctx.r6.s64 + -24516;
	// stfs f0,1904(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1904, temp.u32);
	// addi r7,r5,-25740
	ctx.r7.s64 = ctx.r5.s64 + -25740;
	// stfs f13,1908(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1908, temp.u32);
	// lis r10,2570
	ctx.r10.s64 = 168427520;
	// stfs f12,1912(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1912, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// ori r10,r10,16169
	ctx.r10.u64 = ctx.r10.u64 | 16169;
	// stw r7,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r7.u32);
	// stw r6,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r5.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 896);
	// stw r11,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r11.u32);
	// stw r10,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C3AD0"))) PPC_WEAK_FUNC(sub_826C3AD0);
PPC_FUNC_IMPL(__imp__sub_826C3AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x826b9da0
	ctx.lr = 0x826C3AF8;
	sub_826B9DA0(ctx, base);
	// addi r5,r31,1632
	ctx.r5.s64 = ctx.r31.s64 + 1632;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f3,1912(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1912);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f2,1908(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1908);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,1904(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1904);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826c3f20
	ctx.lr = 0x826C3B14;
	sub_826C3F20(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_826C3B40"))) PPC_WEAK_FUNC(sub_826C3B40);
PPC_FUNC_IMPL(__imp__sub_826C3B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x826C3B48;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82a6172c
	ctx.lr = 0x826C3B50;
	__savefpr_21(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lfs f30,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lfs f25,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f25.f64 = double(temp.f32);
	// stw r30,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r30.u32);
	// lwz r28,560(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// stfs f30,208(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lwz r27,564(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// stfs f30,212(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// lwz r26,568(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// stfs f30,216(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f30,220(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stw r9,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r9.u32);
	// stfs f30,224(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// stfs f30,228(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// stfs f30,232(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stw r30,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r30.u32);
	// stfs f30,236(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stw r30,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r30.u32);
	// stfs f30,240(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stw r30,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
	// stfs f25,244(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// ble cr6,0x826c3f00
	if (!ctx.cr6.gt) goto loc_826C3F00;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
	// lfs f23,-32720(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32720);
	ctx.f23.f64 = double(temp.f32);
	// lfs f22,-27300(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27300);
	ctx.f22.f64 = double(temp.f32);
	// lfs f24,16668(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16668);
	ctx.f24.f64 = double(temp.f32);
	// lfs f21,30996(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 30996);
	ctx.f21.f64 = double(temp.f32);
loc_826C3BF8:
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// bge cr6,0x826c3f00
	if (!ctx.cr6.lt) goto loc_826C3F00;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// fcmpu cr6,f29,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f23.f64);
	// ble cr6,0x826c3c1c
	if (!ctx.cr6.gt) goto loc_826C3C1C;
	// fmuls f0,f29,f21
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f21.f64));
	// fsubs f13,f23,f0
	ctx.f13.f64 = double(float(ctx.f23.f64 - ctx.f0.f64));
	// fsel f31,f13,f0,f23
	ctx.f31.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f23.f64;
	// b 0x826c3c20
	goto loc_826C3C20;
loc_826C3C1C:
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
loc_826C3C20:
	// lwz r3,940(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// fsubs f29,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f31.f64));
	// stw r30,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r30.u32);
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lwz r10,624(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// lwz r9,628(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,572(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lwz r7,576(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// lwz r6,580(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// stw r8,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// stw r7,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r7.u32);
	// stw r6,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r6.u32);
	// lwz r5,636(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 636);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x826C3C6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmuls f13,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// lfs f26,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f26.f64 = double(temp.f32);
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// lfs f28,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f28.f64 = double(temp.f32);
	// lwz r11,940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// lfs f12,564(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,656(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// lfs f11,568(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,660(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// lfs f27,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f27.f64 = double(temp.f32);
	// lwz r8,664(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// lfs f10,560(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// fsubs f9,f25,f13
	ctx.f9.f64 = double(float(ctx.f25.f64 - ctx.f13.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f8,f26,f9
	ctx.f8.f64 = double(float(ctx.f26.f64 * ctx.f9.f64));
	// fmuls f7,f9,f28
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// fmuls f9,f27,f9
	ctx.f9.f64 = double(float(ctx.f27.f64 * ctx.f9.f64));
	// fadds f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// fadds f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fadds f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// fadds f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// lwz r6,136(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r5,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r5.u32);
	// stw r7,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r7.u32);
	// stw r6,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r6.u32);
	// lfs f0,576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1484);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1488);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1480);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f12,572(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x82332e18
	ctx.lr = 0x826C3D58;
	sub_82332E18(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x826c3dc0
	if (ctx.cr6.eq) goto loc_826C3DC0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x82817280
	ctx.lr = 0x826C3D88;
	sub_82817280(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// lwz r3,13024(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x828264e0
	ctx.lr = 0x826C3DC0;
	sub_828264E0(ctx, base);
loc_826C3DC0:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826c3f0c
	if (!ctx.cr0.eq) goto loc_826C3F0C;
	// lfs f0,244(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bge cr6,0x826c3e1c
	if (!ctx.cr6.lt) goto loc_826C3E1C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r8,264(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r7,260(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r6,272(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// ld r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 220);
	// lwz r11,856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 856);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C3E04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826c3f0c
	if (!ctx.cr0.eq) goto loc_826C3F0C;
	// lwz r11,924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 924);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c3f0c
	if (ctx.cr6.eq) goto loc_826C3F0C;
loc_826C3E1C:
	// lwz r11,944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 944);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826c3ef8
	if (!ctx.cr6.eq) goto loc_826C3EF8;
	// lfs f0,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f25,f31
	ctx.f13.f64 = double(float(ctx.f25.f64 / ctx.f31.f64));
	// lfs f11,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// lfs f12,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f10,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f11,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f10,1480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1480);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,1484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1484);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,1488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1488);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// fsubs f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// fsubs f0,f13,f8
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r9,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r9.u32);
	// lfs f0,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// stw r10,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r10.u32);
	// blt cr6,0x826c3eb0
	if (ctx.cr6.lt) goto loc_826C3EB0;
	// fcmpu cr6,f28,f30
	ctx.cr6.compare(ctx.f28.f64, ctx.f30.f64);
	// blt cr6,0x826c3ef8
	if (ctx.cr6.lt) goto loc_826C3EF8;
loc_826C3EB0:
	// lfs f0,580(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,572(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f22
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f22.f64));
	// lfs f12,576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f22
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f22.f64));
	// fmuls f12,f12,f22
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f22.f64));
	// fsubs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fsubs f0,f13,f27
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f27.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fsubs f0,f12,f26
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f26.f64));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
	// stw r9,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r9.u32);
	// stw r10,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r10.u32);
loc_826C3EF8:
	// fcmpu cr6,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// bgt cr6,0x826c3bf8
	if (ctx.cr6.gt) goto loc_826C3BF8;
loc_826C3F00:
	// stw r28,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r28.u32);
	// stw r27,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r27.u32);
	// stw r26,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r26.u32);
loc_826C3F0C:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82a61778
	ctx.lr = 0x826C3F18;
	__restfpr_21(ctx, base);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C3F20"))) PPC_WEAK_FUNC(sub_826C3F20);
PPC_FUNC_IMPL(__imp__sub_826C3F20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826C3F28;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82a61738
	ctx.lr = 0x826C3F30;
	__savefpr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f28,f2
	ctx.f28.f64 = ctx.f2.f64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// fmr f25,f3
	ctx.f25.f64 = ctx.f3.f64;
	// lwz r3,940(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C3F60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f26,f1
	ctx.f26.f64 = ctx.f1.f64;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f24,f12,f11
	ctx.f24.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f30,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f12,f13,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsqrts f29,f12
	ctx.f29.f64 = double(float(sqrt(ctx.f12.f64)));
	// fcmpu cr6,f29,f30
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// bne cr6,0x826c3fbc
	if (!ctx.cr6.eq) goto loc_826C3FBC;
	// fsubs f0,f28,f25
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f25.f64));
	// stfs f30,0(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f30,4(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fsel f0,f0,f28,f25
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f28.f64 : ctx.f25.f64;
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// b 0x826c40cc
	goto loc_826C40CC;
loc_826C3FBC:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r3,940(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 940);
	// lfs f12,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fdivs f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f29.f64));
	// lwz r11,636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	// fmuls f27,f0,f12
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f27,80(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmuls f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C400C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// blt cr6,0x826c4024
	if (ctx.cr6.lt) goto loc_826C4024;
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f27,f31
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f31.f64));
	// fmuls f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// b 0x826c402c
	goto loc_826C402C;
loc_826C4024:
	// lfs f11,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
loc_826C402C:
	// fdivs f0,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 / ctx.f31.f64));
	// fdivs f13,f24,f0
	ctx.f13.f64 = double(float(ctx.f24.f64 / ctx.f0.f64));
	// fnmsubs f0,f0,f26,f13
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f26.f64 - ctx.f13.f64)));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x826c4054
	if (!ctx.cr6.gt) goto loc_826C4054;
	// fadds f13,f28,f25
	ctx.f13.f64 = double(float(ctx.f28.f64 + ctx.f25.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x826c4058
	if (!ctx.cr6.gt) goto loc_826C4058;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x826c4058
	goto loc_826C4058;
loc_826C4054:
	// fmr f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f28.f64;
loc_826C4058:
	// fmuls f12,f24,f26
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f24.f64 * ctx.f26.f64));
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,-27300
	ctx.r11.s64 = ctx.r11.s64 + -27300;
	// lfs f13,2220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2220);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmadds f13,f0,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// blt cr6,0x826c40a0
	if (ctx.cr6.lt) goto loc_826C40A0;
	// fsqrts f9,f13
	ctx.f9.f64 = double(float(sqrt(ctx.f13.f64)));
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,24000(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24000);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f13,f0,f13,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 - ctx.f9.f64));
	// fmuls f12,f26,f12
	ctx.f12.f64 = double(float(ctx.f26.f64 * ctx.f12.f64));
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fdivs f13,f29,f13
	ctx.f13.f64 = double(float(ctx.f29.f64 / ctx.f13.f64));
	// fsubs f12,f31,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// fsel f31,f12,f13,f31
	ctx.f31.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f31.f64;
loc_826C40A0:
	// stfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f13,f10,f31
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f0,f11,f31
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_826C40CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82a61784
	ctx.lr = 0x826C40DC;
	__restfpr_24(ctx, base);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C40E0"))) PPC_WEAK_FUNC(sub_826C40E0);
PPC_FUNC_IMPL(__imp__sub_826C40E0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826c3a28
	ctx.lr = 0x826C40FC;
	sub_826C3A28(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lfs f13,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,17064(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17064);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r7,-23252
	ctx.r9.s64 = ctx.r7.s64 + -23252;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r8,r8,-24440
	ctx.r8.s64 = ctx.r8.s64 + -24440;
	// addi r6,r6,4480
	ctx.r6.s64 = ctx.r6.s64 + 4480;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r30,500
	ctx.r30.s64 = 500;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stfs f0,1980(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1980, temp.u32);
	// stfs f13,1504(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1504, temp.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r6,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r6.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r11,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r11.u32);
	// stw r10,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r10.u32);
	// addi r3,r8,-17904
	ctx.r3.s64 = ctx.r8.s64 + -17904;
	// stw r11,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r11.u32);
	// stw r11,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r11.u32);
	// stw r11,1968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1968, ctx.r11.u32);
	// stw r11,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r11.u32);
	// stw r10,1964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1964, ctx.r10.u32);
	// stw r30,1960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1960, ctx.r30.u32);
	// stw r5,3204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3204, ctx.r5.u32);
	// stw r7,3208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3208, ctx.r7.u32);
	// stw r4,3200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3200, ctx.r4.u32);
	// bl 0x82816528
	ctx.lr = 0x826C419C;
	sub_82816528(ctx, base);
	// stw r3,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_826C41C0"))) PPC_WEAK_FUNC(sub_826C41C0);
PPC_FUNC_IMPL(__imp__sub_826C41C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x826b91d0
	ctx.lr = 0x826C41D8;
	sub_826B91D0(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r31,1524
	ctx.r4.s64 = ctx.r31.s64 + 1524;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,19372
	ctx.r5.s64 = ctx.r11.s64 + 19372;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824f5de8
	ctx.lr = 0x826C41F4;
	sub_824F5DE8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r31,1536
	ctx.r4.s64 = ctx.r31.s64 + 1536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,19400
	ctx.r5.s64 = ctx.r11.s64 + 19400;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824f5de8
	ctx.lr = 0x826C4210;
	sub_824F5DE8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r31,1548
	ctx.r4.s64 = ctx.r31.s64 + 1548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,19428
	ctx.r5.s64 = ctx.r11.s64 + 19428;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824f5de8
	ctx.lr = 0x826C422C;
	sub_824F5DE8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r31,1560
	ctx.r4.s64 = ctx.r31.s64 + 1560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,19460
	ctx.r5.s64 = ctx.r11.s64 + 19460;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82416240
	ctx.lr = 0x826C4248;
	sub_82416240(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r31,1568
	ctx.r4.s64 = ctx.r31.s64 + 1568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,19492
	ctx.r5.s64 = ctx.r11.s64 + 19492;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82416240
	ctx.lr = 0x826C4264;
	sub_82416240(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r31,1580
	ctx.r4.s64 = ctx.r31.s64 + 1580;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,19520
	ctx.r5.s64 = ctx.r11.s64 + 19520;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824f5fd8
	ctx.lr = 0x826C4280;
	sub_824F5FD8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r31,1584
	ctx.r4.s64 = ctx.r31.s64 + 1584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,19532
	ctx.r5.s64 = ctx.r11.s64 + 19532;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824f5fd8
	ctx.lr = 0x826C429C;
	sub_824F5FD8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r31,2744
	ctx.r4.s64 = ctx.r31.s64 + 2744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,19568
	ctx.r5.s64 = ctx.r11.s64 + 19568;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824f5de8
	ctx.lr = 0x826C42B8;
	sub_824F5DE8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r31,2756
	ctx.r4.s64 = ctx.r31.s64 + 2756;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,19604
	ctx.r5.s64 = ctx.r11.s64 + 19604;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824f5fd8
	ctx.lr = 0x826C42D4;
	sub_824F5FD8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r31,2760
	ctx.r4.s64 = ctx.r31.s64 + 2760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,19648
	ctx.r5.s64 = ctx.r11.s64 + 19648;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824f5fd8
	ctx.lr = 0x826C42F0;
	sub_824F5FD8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r31,2764
	ctx.r4.s64 = ctx.r31.s64 + 2764;
	// addi r5,r11,19692
	ctx.r5.s64 = ctx.r11.s64 + 19692;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f5fd8
	ctx.lr = 0x826C430C;
	sub_824F5FD8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r31,2768
	ctx.r4.s64 = ctx.r31.s64 + 2768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,19732
	ctx.r5.s64 = ctx.r11.s64 + 19732;
	// bl 0x824f5fd8
	ctx.lr = 0x826C4328;
	sub_824F5FD8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r31,2772
	ctx.r4.s64 = ctx.r31.s64 + 2772;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,19772
	ctx.r5.s64 = ctx.r11.s64 + 19772;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824f5fd8
	ctx.lr = 0x826C4344;
	sub_824F5FD8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r31,2776
	ctx.r4.s64 = ctx.r31.s64 + 2776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,19808
	ctx.r5.s64 = ctx.r11.s64 + 19808;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824f5fd8
	ctx.lr = 0x826C4360;
	sub_824F5FD8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r31,2780
	ctx.r4.s64 = ctx.r31.s64 + 2780;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,19844
	ctx.r5.s64 = ctx.r11.s64 + 19844;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824f5fd8
	ctx.lr = 0x826C437C;
	sub_824F5FD8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r31,2784
	ctx.r4.s64 = ctx.r31.s64 + 2784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,19884
	ctx.r5.s64 = ctx.r11.s64 + 19884;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824f5fd8
	ctx.lr = 0x826C4398;
	sub_824F5FD8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r31,2788
	ctx.r4.s64 = ctx.r31.s64 + 2788;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,19924
	ctx.r5.s64 = ctx.r11.s64 + 19924;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824f5fd8
	ctx.lr = 0x826C43B4;
	sub_824F5FD8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r31,2792
	ctx.r4.s64 = ctx.r31.s64 + 2792;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,19960
	ctx.r5.s64 = ctx.r11.s64 + 19960;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824f5fd8
	ctx.lr = 0x826C43D0;
	sub_824F5FD8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r31,2796
	ctx.r4.s64 = ctx.r31.s64 + 2796;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,19996
	ctx.r5.s64 = ctx.r11.s64 + 19996;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824f5fd8
	ctx.lr = 0x826C43EC;
	sub_824F5FD8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r31,2800
	ctx.r4.s64 = ctx.r31.s64 + 2800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,20028
	ctx.r5.s64 = ctx.r11.s64 + 20028;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824f5fd8
	ctx.lr = 0x826C4408;
	sub_824F5FD8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r31,2804
	ctx.r4.s64 = ctx.r31.s64 + 2804;
	// addi r5,r11,20060
	ctx.r5.s64 = ctx.r11.s64 + 20060;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f5de8
	ctx.lr = 0x826C4424;
	sub_824F5DE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C4438"))) PPC_WEAK_FUNC(sub_826C4438);
PPC_FUNC_IMPL(__imp__sub_826C4438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826C4440;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x826b9270
	ctx.lr = 0x826C4450;
	sub_826B9270(ctx, base);
	// addi r11,r31,1920
	ctx.r11.s64 = ctx.r31.s64 + 1920;
	// addi r30,r31,424
	ctx.r30.s64 = ctx.r31.s64 + 424;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82838fd0
	ctx.lr = 0x826C446C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,1932
	ctx.r10.s64 = ctx.r31.s64 + 1932;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r28,r29,4
	ctx.r28.s64 = ctx.r29.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82838fd0
	ctx.lr = 0x826C448C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,1944
	ctx.r10.s64 = ctx.r31.s64 + 1944;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bl 0x82838fd0
	ctx.lr = 0x826C44AC;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,1956
	ctx.r10.s64 = ctx.r31.s64 + 1956;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r29,r28,4
	ctx.r29.s64 = ctx.r28.s64 + 4;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x82838fd0
	ctx.lr = 0x826C44CC;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,1976
	ctx.r10.s64 = ctx.r31.s64 + 1976;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// bl 0x82838fd0
	ctx.lr = 0x826C44EC;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,3152
	ctx.r10.s64 = ctx.r31.s64 + 3152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x82838fd0
	ctx.lr = 0x826C450C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,3156
	ctx.r10.s64 = ctx.r31.s64 + 3156;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x82838fd0
	ctx.lr = 0x826C452C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,3160
	ctx.r10.s64 = ctx.r31.s64 + 3160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x82838fd0
	ctx.lr = 0x826C454C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,3164
	ctx.r10.s64 = ctx.r31.s64 + 3164;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x82838fd0
	ctx.lr = 0x826C456C;
	sub_82838FD0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r31,3168
	ctx.r11.s64 = ctx.r31.s64 + 3168;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x82838fd0
	ctx.lr = 0x826C458C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,3172
	ctx.r10.s64 = ctx.r31.s64 + 3172;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x82838fd0
	ctx.lr = 0x826C45AC;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,3176
	ctx.r10.s64 = ctx.r31.s64 + 3176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x82838fd0
	ctx.lr = 0x826C45CC;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,3180
	ctx.r10.s64 = ctx.r31.s64 + 3180;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x82838fd0
	ctx.lr = 0x826C45EC;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,3184
	ctx.r10.s64 = ctx.r31.s64 + 3184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x82838fd0
	ctx.lr = 0x826C460C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,3188
	ctx.r10.s64 = ctx.r31.s64 + 3188;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x82838fd0
	ctx.lr = 0x826C462C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,3192
	ctx.r10.s64 = ctx.r31.s64 + 3192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x82838fd0
	ctx.lr = 0x826C464C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,3196
	ctx.r10.s64 = ctx.r31.s64 + 3196;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x82838fd0
	ctx.lr = 0x826C466C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,3200
	ctx.r10.s64 = ctx.r31.s64 + 3200;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82838fd0
	ctx.lr = 0x826C468C;
	sub_82838FD0(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// lfs f0,984(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// stfd f0,88(r27)
	PPC_STORE_U64(ctx.r27.u32 + 88, ctx.f0.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C46B0"))) PPC_WEAK_FUNC(sub_826C46B0);
PPC_FUNC_IMPL(__imp__sub_826C46B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826C46B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lfd f12,88(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r7.u32 + 88);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lfd f13,17944(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 17944);
	// lfs f0,984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// fsub f12,f0,f12
	ctx.f12.f64 = ctx.f0.f64 - ctx.f12.f64;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x826c5104
	if (ctx.cr6.lt) goto loc_826C5104;
	// addi r27,r31,620
	ctx.r27.s64 = ctx.r31.s64 + 620;
	// stfd f0,88(r7)
	PPC_STORE_U64(ctx.r7.u32 + 88, ctx.f0.u64);
	// addi r30,r31,424
	ctx.r30.s64 = ctx.r31.s64 + 424;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4708;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r3.u32);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C472C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4740;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c4764
	if (!ctx.cr0.eq) goto loc_826C4764;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4758;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_826C4764:
	// addi r27,r31,656
	ctx.r27.s64 = ctx.r31.s64 + 656;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4778;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r3.u32);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C479C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C47B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c47d4
	if (!ctx.cr0.eq) goto loc_826C47D4;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C47C8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_826C47D4:
	// addi r27,r31,1632
	ctx.r27.s64 = ctx.r31.s64 + 1632;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C47E8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r3.u32);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C480C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c4844
	if (!ctx.cr0.eq) goto loc_826C4844;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4838;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_826C4844:
	// addi r27,r31,1856
	ctx.r27.s64 = ctx.r31.s64 + 1856;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4858;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r3.u32);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C487C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c48b4
	if (!ctx.cr0.eq) goto loc_826C48B4;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C48A8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_826C48B4:
	// addi r27,r31,1860
	ctx.r27.s64 = ctx.r31.s64 + 1860;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C48C8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r3.u32);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C48EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4900;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c4924
	if (!ctx.cr0.eq) goto loc_826C4924;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4918;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_826C4924:
	// addi r27,r31,1976
	ctx.r27.s64 = ctx.r31.s64 + 1976;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4938;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r3.u32);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C495C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4970;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c4994
	if (!ctx.cr0.eq) goto loc_826C4994;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4988;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_826C4994:
	// addi r27,r31,1980
	ctx.r27.s64 = ctx.r31.s64 + 1980;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C49A8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r3.u32);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C49CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C49E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c4a04
	if (!ctx.cr0.eq) goto loc_826C4A04;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C49F8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_826C4A04:
	// addi r27,r31,1932
	ctx.r27.s64 = ctx.r31.s64 + 1932;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4A18;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r3.u32);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4A3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4A50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c4a74
	if (!ctx.cr0.eq) goto loc_826C4A74;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4A68;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_826C4A74:
	// addi r27,r31,1944
	ctx.r27.s64 = ctx.r31.s64 + 1944;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4A88;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r3.u32);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4AAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4AC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c4ae4
	if (!ctx.cr0.eq) goto loc_826C4AE4;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4AD8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_826C4AE4:
	// addi r27,r31,1956
	ctx.r27.s64 = ctx.r31.s64 + 1956;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4AF8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r3.u32);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4B1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4B30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c4b54
	if (!ctx.cr0.eq) goto loc_826C4B54;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4B48;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_826C4B54:
	// addi r27,r31,3152
	ctx.r27.s64 = ctx.r31.s64 + 3152;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4B68;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r3.u32);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4B8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4BA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c4bc4
	if (!ctx.cr0.eq) goto loc_826C4BC4;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4BB8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_826C4BC4:
	// addi r27,r31,3156
	ctx.r27.s64 = ctx.r31.s64 + 3156;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4BD8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r3.u32);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4BFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4C10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c4c34
	if (!ctx.cr0.eq) goto loc_826C4C34;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4C28;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_826C4C34:
	// addi r27,r31,3160
	ctx.r27.s64 = ctx.r31.s64 + 3160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4C48;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r3.u32);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4C6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4C80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c4ca4
	if (!ctx.cr0.eq) goto loc_826C4CA4;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4C98;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_826C4CA4:
	// addi r27,r31,3164
	ctx.r27.s64 = ctx.r31.s64 + 3164;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4CB8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r3.u32);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4CDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4CF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c4d14
	if (!ctx.cr0.eq) goto loc_826C4D14;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4D08;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_826C4D14:
	// addi r27,r31,3168
	ctx.r27.s64 = ctx.r31.s64 + 3168;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4D28;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r3.u32);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4D4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4D60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c4d84
	if (!ctx.cr0.eq) goto loc_826C4D84;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4D78;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_826C4D84:
	// addi r27,r31,3172
	ctx.r27.s64 = ctx.r31.s64 + 3172;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4D98;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r3.u32);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4DBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4DD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c4df4
	if (!ctx.cr0.eq) goto loc_826C4DF4;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4DE8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_826C4DF4:
	// addi r27,r31,3176
	ctx.r27.s64 = ctx.r31.s64 + 3176;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4E08;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r3.u32);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4E2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4E40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c4e64
	if (!ctx.cr0.eq) goto loc_826C4E64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4E58;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_826C4E64:
	// addi r27,r31,3180
	ctx.r27.s64 = ctx.r31.s64 + 3180;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4E78;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r3.u32);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4E9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4EB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c4ed4
	if (!ctx.cr0.eq) goto loc_826C4ED4;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4EC8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_826C4ED4:
	// addi r27,r31,3184
	ctx.r27.s64 = ctx.r31.s64 + 3184;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4EE8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r3.u32);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4F0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4F20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c4f44
	if (!ctx.cr0.eq) goto loc_826C4F44;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4F38;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_826C4F44:
	// addi r27,r31,3188
	ctx.r27.s64 = ctx.r31.s64 + 3188;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4F58;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r3.u32);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4F7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4F90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c4fb4
	if (!ctx.cr0.eq) goto loc_826C4FB4;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4FA8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_826C4FB4:
	// addi r27,r31,3192
	ctx.r27.s64 = ctx.r31.s64 + 3192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C4FC8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r3.u32);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C4FEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C5000;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c5024
	if (!ctx.cr0.eq) goto loc_826C5024;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C5018;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_826C5024:
	// addi r27,r31,3196
	ctx.r27.s64 = ctx.r31.s64 + 3196;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C5038;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r3.u32);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C505C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C5070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c5094
	if (!ctx.cr0.eq) goto loc_826C5094;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C5088;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_826C5094:
	// addi r27,r31,3200
	ctx.r27.s64 = ctx.r31.s64 + 3200;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C50A8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r3.u32);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C50CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C50E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c5104
	if (!ctx.cr0.eq) goto loc_826C5104;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C50F8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_826C5104:
	// addi r30,r31,1760
	ctx.r30.s64 = ctx.r31.s64 + 1760;
	// addi r27,r31,424
	ctx.r27.s64 = ctx.r31.s64 + 424;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C511C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r3.u32);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C5140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C5154;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c5178
	if (!ctx.cr0.eq) goto loc_826C5178;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C516C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_826C5178:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C5188"))) PPC_WEAK_FUNC(sub_826C5188);
PPC_FUNC_IMPL(__imp__sub_826C5188) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// lfs f0,1976(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1976);
	ctx.f0.f64 = double(temp.f32);
	// fadds f29,f0,f1
	ctx.f29.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f13,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lfs f12,1980(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1980);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bge cr6,0x826c5270
	if (!ctx.cr6.lt) goto loc_826C5270;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f31,20416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20416);
	ctx.f31.f64 = double(temp.f32);
loc_826C5200:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C5228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f30,f30,f31
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fadds f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fcmpu cr6,f30,f29
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// blt cr6,0x826c5200
	if (ctx.cr6.lt) goto loc_826C5200;
loc_826C5270:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C5298"))) PPC_WEAK_FUNC(sub_826C5298);
PPC_FUNC_IMPL(__imp__sub_826C5298) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826c5188
	ctx.lr = 0x826C52B4;
	sub_826C5188(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_826C52E8"))) PPC_WEAK_FUNC(sub_826C52E8);
PPC_FUNC_IMPL(__imp__sub_826C52E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826C52F0;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f31,16668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f31.f64 = double(temp.f32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x82332e18
	ctx.lr = 0x826C5338;
	sub_82332E18(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f29,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f10,f12,f30
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmuls f9,f0,f29
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmsubs f0,f0,f30,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 - ctx.f11.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmsubs f0,f13,f29,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 - ctx.f10.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmsubs f0,f12,f31,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 - ctx.f9.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82332e18
	ctx.lr = 0x826C5380;
	sub_82332E18(ctx, base);
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f30
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f3,f13,f29
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// lfs f9,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f5,f13,f9
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f4,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f6,f8,f29
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f29.f64));
	// fmsubs f0,f0,f29,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 - ctx.f11.f64));
	// fmsubs f13,f13,f31,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 - ctx.f10.f64));
	// fmsubs f11,f30,f12,f3
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f12.f64 - ctx.f3.f64));
	// fmadds f0,f4,f0,f5
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmadds f13,f4,f13,f6
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f11,f4,f11,f7
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fmadds f0,f8,f30,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 + ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f0,f9,f12,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f0,f8,f31,f11
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-56(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C5410"))) PPC_WEAK_FUNC(sub_826C5410);
PPC_FUNC_IMPL(__imp__sub_826C5410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826C5418;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61740
	ctx.lr = 0x826C5420;
	__savefpr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lwz r3,1644(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// bl 0x829c35d8
	ctx.lr = 0x826C5440;
	sub_829C35D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r3,620
	ctx.r10.s64 = ctx.r3.s64 + 620;
	// bne 0x826c5450
	if (!ctx.cr0.eq) goto loc_826C5450;
	// addi r10,r31,1632
	ctx.r10.s64 = ctx.r31.s64 + 1632;
loc_826C5450:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lwz r7,1956(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1956);
	// addi r30,r31,1920
	ctx.r30.s64 = ctx.r31.s64 + 1920;
	// addi r11,r31,1932
	ctx.r11.s64 = ctx.r31.s64 + 1932;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r9,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r9.u32);
	// lfs f30,904(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,1936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1936, ctx.r9.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r10,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r10.u32);
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r9,1940(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1940);
	// stfs f30,104(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r8,1936(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1936);
	// lwz r10,1932(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// stw r10,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r10.u32);
	// stw r8,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r8.u32);
	// stw r9,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r9.u32);
	// lfs f12,1928(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1928);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,1940(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1940);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,1932(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1920(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,1924(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,1936(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1936);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f9,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f11,f10
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f6,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f6.f64 = double(temp.f32);
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// lfs f11,1936(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1936);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f0,f0
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f5,1940(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1940);
	ctx.f5.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f0,f13,f13,f7
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f27,f0
	ctx.f27.f64 = double(float(sqrt(ctx.f0.f64)));
	// fsubs f0,f9,f8
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fsubs f13,f6,f11
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fsubs f12,f10,f5
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// bne cr6,0x826c5554
	if (!ctx.cr6.eq) goto loc_826C5554;
	// lwa r10,1960(r31)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 1960));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcfid f13,f11
	ctx.f13.f64 = double(ctx.f11.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x826c5554
	if (ctx.cr6.lt) goto loc_826C5554;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r10.u32);
	// stw r9,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r9.u32);
	// stw r11,1952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1952, ctx.r11.u32);
	// b 0x826c55cc
	goto loc_826C55CC;
loc_826C5554:
	// lwz r8,1944(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1944);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,1952(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// lwz r10,1948(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lfs f10,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,1956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1956, ctx.r9.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// fmadds f13,f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f27,f0
	ctx.f27.f64 = double(float(sqrt(ctx.f0.f64)));
loc_826C55CC:
	// lfs f0,1504(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// fmadds f13,f0,f26,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f26.f64 + ctx.f13.f64));
	// stfs f13,0(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lfs f0,16852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16852);
	ctx.f0.f64 = double(temp.f32);
	// lfs f28,23784(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23784);
	ctx.f28.f64 = double(temp.f32);
	// fdivs f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f27.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,3184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3184);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3192);
	ctx.f12.f64 = double(temp.f32);
	// fabs f29,f0
	ctx.f29.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fmadds f0,f13,f29,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 + ctx.f12.f64));
	// fmuls f1,f0,f28
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// bl 0x82a4e038
	ctx.lr = 0x826C560C;
	sub_82A4E038(ctx, base);
	// lfs f0,3188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3188);
	ctx.f0.f64 = double(temp.f32);
	// frsp f31,f1
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// lfs f13,3196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3196);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f29,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f13.f64));
	// fmuls f1,f0,f28
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// bl 0x82a4e038
	ctx.lr = 0x826C5624;
	sub_82A4E038(ctx, base);
	// lfs f0,3176(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3176);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f12,3180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3180);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,3160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,3168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3168);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f11,f11,f29,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f29.f64 + ctx.f10.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f1,f11,f28
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// bl 0x82a4e038
	ctx.lr = 0x826C5650;
	sub_82A4E038(ctx, base);
	// lfs f0,3164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3164);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3172(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3172);
	ctx.f13.f64 = double(temp.f32);
	// frsp f31,f1
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// fmadds f0,f0,f29,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f13.f64));
	// fmuls f1,f0,f28
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// bl 0x82a4e038
	ctx.lr = 0x826C5668;
	sub_82A4E038(ctx, base);
	// lfs f0,3152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3152);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fmuls f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f10,3156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3156);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1856(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1856);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fmadds f12,f10,f12,f11
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bge cr6,0x826c56b4
	if (!ctx.cr6.lt) goto loc_826C56B4;
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// beq cr6,0x826c56b4
	if (ctx.cr6.eq) goto loc_826C56B4;
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_826C56B4:
	// lfs f13,1860(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1860);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fsubs f11,f27,f13
	ctx.f11.f64 = double(float(ctx.f27.f64 - ctx.f13.f64));
	// lfs f31,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x826c5718
	if (!ctx.cr6.gt) goto loc_826C5718;
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// beq cr6,0x826c5718
	if (ctx.cr6.eq) goto loc_826C5718;
	// fdivs f13,f31,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f13.f64));
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f27,f0
	ctx.f0.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fsubs f13,f10,f31
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f31.f64));
	// fsubs f9,f0,f31
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fsel f13,f13,f31,f10
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f31.f64 : ctx.f10.f64;
	// fsel f0,f9,f31,f0
	ctx.f0.f64 = ctx.f9.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f0
	ctx.f9.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f13,f10,f30,f13
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? ctx.f30.f64 : ctx.f13.f64;
	// fsel f0,f9,f30,f0
	ctx.f0.f64 = ctx.f9.f64 >= 0.0 ? ctx.f30.f64 : ctx.f0.f64;
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_826C5718:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lwz r11,13736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13736);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c573c
	if (ctx.cr6.eq) goto loc_826C573C;
	// lfs f0,3160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3168);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f29,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f13.f64));
	// fmuls f1,f0,f28
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// bl 0x82a4e038
	ctx.lr = 0x826C573C;
	sub_82A4E038(ctx, base);
loc_826C573C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r31,3200
	ctx.r5.s64 = ctx.r31.s64 + 3200;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1184);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C5778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f0,f31,f26
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f26.f64));
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// lfs f8,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f10,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fsubs f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a6178c
	ctx.lr = 0x826C57F8;
	__restfpr_26(ctx, base);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C5800"))) PPC_WEAK_FUNC(sub_826C5800);
PPC_FUNC_IMPL(__imp__sub_826C5800) {
	PPC_FUNC_PROLOGUE();
	// b 0x826badb0
	sub_826BADB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C5808"))) PPC_WEAK_FUNC(sub_826C5808);
PPC_FUNC_IMPL(__imp__sub_826C5808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x826C5810;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82a61748
	ctx.lr = 0x826C5818;
	__savefpr_28(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// ble cr6,0x826c5be0
	if (!ctx.cr6.gt) goto loc_826C5BE0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,1968(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// li r26,0
	ctx.r26.s64 = 0;
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lis r25,-31944
	ctx.r25.s64 = -2093481984;
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// lfs f28,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f28.f64 = double(temp.f32);
	// stw r26,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r26.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r26,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r26.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stw r26,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r26.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r26,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r26.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stw r26,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r26.u32);
	// stfs f28,196(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stw r26,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r26.u32);
	// stw r26,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r26.u32);
	// beq cr6,0x826c59e4
	if (ctx.cr6.eq) goto loc_826C59E4;
	// lwz r11,13744(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13744);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826c59e4
	if (!ctx.cr6.eq) goto loc_826C59E4;
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// lwz r9,620(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lwz r8,624(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// lis r30,-31944
	ctx.r30.s64 = -2093481984;
	// lwz r7,628(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// lfs f29,1976(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1976);
	ctx.f29.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,1980(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1980);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// lfs f0,32716(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32716);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r10,13744(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13744, ctx.r10.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r9,1984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1984, ctx.r9.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// stw r8,1988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1988, ctx.r8.u32);
	// stw r11,13740(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13740, ctx.r11.u32);
	// stw r7,1992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1992, ctx.r7.u32);
	// bge cr6,0x826c59e0
	if (!ctx.cr6.lt) goto loc_826C59E0;
	// lis r28,-32244
	ctx.r28.s64 = -2113142784;
	// lfs f1,20416(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20416);
	ctx.f1.f64 = double(temp.f32);
loc_826C5920:
	// cmpwi cr6,r11,96
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 96, ctx.xer);
	// bge cr6,0x826c59e0
	if (!ctx.cr6.lt) goto loc_826C59E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r1,156
	ctx.r8.s64 = ctx.r1.s64 + 156;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C594C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,20416(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20416);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,13740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13740);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mulli r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 * 12;
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,1976(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1976);
	ctx.f7.f64 = double(temp.f32);
	// fadds f7,f7,f1
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// stfs f7,1976(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1976, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f0,f9,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f8,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f11,32716(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32716);
	ctx.f11.f64 = double(temp.f32);
	// stw r9,1984(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1984, ctx.r9.u32);
	// stw r8,1988(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1988, ctx.r8.u32);
	// stw r7,1992(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1992, ctx.r7.u32);
	// lfs f0,1976(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1976);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,13740(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13740, ctx.r11.u32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x826c5920
	if (ctx.cr6.lt) goto loc_826C5920;
loc_826C59E0:
	// stfs f29,1976(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1976, temp.u32);
loc_826C59E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r31,572
	ctx.r7.s64 = ctx.r31.s64 + 572;
	// addi r8,r31,1980
	ctx.r8.s64 = ctx.r31.s64 + 1980;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// addi r6,r31,620
	ctx.r6.s64 = ctx.r31.s64 + 620;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C5A0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,1976(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1976);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f0,1976(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1976, temp.u32);
	// lfs f12,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f13,572(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// lfs f1,16668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stfs f28,196(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lwz r8,656(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// stfs f0,1976(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1976, temp.u32);
	// lwz r7,660(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// addi r29,r31,656
	ctx.r29.s64 = ctx.r31.s64 + 656;
	// lwz r6,664(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// stw r6,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// bl 0x82332e18
	ctx.lr = 0x826C5A98;
	sub_82332E18(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x826c5abc
	if (!ctx.cr6.eq) goto loc_826C5ABC;
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x826c5abc
	if (!ctx.cr6.eq) goto loc_826C5ABC;
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x826c5be0
	if (ctx.cr6.eq) goto loc_826C5BE0;
loc_826C5ABC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82817280
	ctx.lr = 0x826C5AC8;
	sub_82817280(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,660(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 660);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C5B00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// bl 0x828264e0
	ctx.lr = 0x826C5B20;
	sub_828264E0(ctx, base);
	// lfs f0,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x826c5be0
	if (!ctx.cr6.lt) goto loc_826C5BE0;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826c5be0
	if (!ctx.cr0.eq) goto loc_826C5BE0;
	// lwz r30,224(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826c5be0
	if (ctx.cr6.eq) goto loc_826C5BE0;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826c5be0
	if (ctx.cr6.eq) goto loc_826C5BE0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r11,13744(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13744, ctx.r11.u32);
	// bl 0x82394fc8
	ctx.lr = 0x826C5B5C;
	sub_82394FC8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C5B74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c5b80
	if (!ctx.cr0.eq) goto loc_826C5B80;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_826C5B80:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826c5bb4
	if (ctx.cr6.eq) goto loc_826C5BB4;
	// stw r26,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r26.u32);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// li r7,7
	ctx.r7.s64 = 7;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828264e0
	ctx.lr = 0x826C5BA8;
	sub_828264E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r11.u32);
	// b 0x826c5be0
	goto loc_826C5BE0;
loc_826C5BB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r8,216(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r7,212(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r6,224(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// ld r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 172);
	// lwz r11,856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 856);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C5BE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826C5BE0:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82a61794
	ctx.lr = 0x826C5BEC;
	__restfpr_28(ctx, base);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C5BF0"))) PPC_WEAK_FUNC(sub_826C5BF0);
PPC_FUNC_IMPL(__imp__sub_826C5BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826c3ad0
	ctx.lr = 0x826C5C18;
	sub_826C3AD0(ctx, base);
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lwz r10,624(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// lwz r9,628(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// lwz r8,1632(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	// lwz r7,1636(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// lwz r6,1640(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// stw r11,1920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1920, ctx.r11.u32);
	// stw r10,1924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1924, ctx.r10.u32);
	// stw r9,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r9.u32);
	// stw r8,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r8.u32);
	// stw r7,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r7.u32);
	// stw r6,1952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1952, ctx.r6.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C5C60"))) PPC_WEAK_FUNC(sub_826C5C60);
PPC_FUNC_IMPL(__imp__sub_826C5C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,3136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3136);
	// bl 0x829c35d8
	ctx.lr = 0x826C5C7C;
	sub_829C35D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,3140
	ctx.r5.s64 = ctx.r31.s64 + 3140;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826c3ad0
	ctx.lr = 0x826C5C90;
	sub_826C3AD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C5CA8"))) PPC_WEAK_FUNC(sub_826C5CA8);
PPC_FUNC_IMPL(__imp__sub_826C5CA8) {
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// lfs f13,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r6,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r6.u64);
	// lfs f0,24000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x826c5d68
	if (!ctx.cr6.eq) goto loc_826C5D68;
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x826c5d68
	if (!ctx.cr6.eq) goto loc_826C5D68;
	// lfs f13,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x826c5d68
	if (!ctx.cr6.eq) goto loc_826C5D68;
	// lwz r11,1964(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1964);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c5d28
	if (ctx.cr6.eq) goto loc_826C5D28;
	// lwz r11,1644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// lwz r10,1632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	// lwz r9,1636(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// lwz r8,1640(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// stw r30,1964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1964, ctx.r30.u32);
	// stw r11,3136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3136, ctx.r11.u32);
	// stw r10,3140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3140, ctx.r10.u32);
	// stw r9,3144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3144, ctx.r9.u32);
	// stw r8,3148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3148, ctx.r8.u32);
loc_826C5D28:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,1632
	ctx.r5.s64 = ctx.r31.s64 + 1632;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826c3ad0
	ctx.lr = 0x826C5D38;
	sub_826C3AD0(ctx, base);
	// lis r10,-32148
	ctx.r10.s64 = -2106851328;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r10,r10,23648
	ctx.r10.s64 = ctx.r10.s64 + 23648;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f1,30996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826c5e10
	ctx.lr = 0x826C5D64;
	sub_826C5E10(ctx, base);
	// b 0x826c5d78
	goto loc_826C5D78;
loc_826C5D68:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826c3ad0
	ctx.lr = 0x826C5D78;
	sub_826C3AD0(ctx, base);
loc_826C5D78:
	// lwz r11,1632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	// lwz r10,1636(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// lwz r9,1640(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// stw r11,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r11.u32);
	// stw r10,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r10.u32);
	// stw r9,1952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1952, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_826C5DA8"))) PPC_WEAK_FUNC(sub_826C5DA8);
PPC_FUNC_IMPL(__imp__sub_826C5DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stfs f1,3176(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3176, temp.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,30996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,3184(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3184, temp.u32);
	// stfs f13,3192(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3192, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C5DC8"))) PPC_WEAK_FUNC(sub_826C5DC8);
PPC_FUNC_IMPL(__imp__sub_826C5DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,3152(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3152, temp.u32);
	// stfs f2,3160(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3160, temp.u32);
	// stfs f3,3168(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3168, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C5DD8"))) PPC_WEAK_FUNC(sub_826C5DD8);
PPC_FUNC_IMPL(__imp__sub_826C5DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,3156(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3156, temp.u32);
	// stfs f2,3164(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3164, temp.u32);
	// stfs f3,3172(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3172, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C5DE8"))) PPC_WEAK_FUNC(sub_826C5DE8);
PPC_FUNC_IMPL(__imp__sub_826C5DE8) {
	PPC_FUNC_PROLOGUE();
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// lwz r10,36(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r9,40(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 40);
	// lwz r11,32(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	// stw r11,3200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3200, ctx.r11.u32);
	// stw r10,3204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3204, ctx.r10.u32);
	// stw r9,3208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3208, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C5E10"))) PPC_WEAK_FUNC(sub_826C5E10);
PPC_FUNC_IMPL(__imp__sub_826C5E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826C5E18;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r29,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r29.u64);
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x829c80b8
	ctx.lr = 0x826C5E30;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826c5eb8
	if (!ctx.cr0.eq) goto loc_826C5EB8;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82394fc8
	ctx.lr = 0x826C5E40;
	sub_82394FC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C5E54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x826C5E60;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x826c5ea4
	if (ctx.cr0.eq) goto loc_826C5EA4;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// std r29,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r29.u64);
	// addi r9,r9,9436
	ctx.r9.s64 = ctx.r9.s64 + 9436;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// b 0x826c5ea8
	goto loc_826C5EA8;
loc_826C5EA4:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_826C5EA8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x826C5EB4;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_826C5EB8:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,30996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C5ED8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C5EE0"))) PPC_WEAK_FUNC(sub_826C5EE0);
PPC_FUNC_IMPL(__imp__sub_826C5EE0) {
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
	// bl 0x826c40e0
	ctx.lr = 0x826C5EF8;
	sub_826C40E0(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,-28192
	ctx.r11.s64 = ctx.r11.s64 + -28192;
	// addi r10,r10,-27004
	ctx.r10.s64 = ctx.r10.s64 + -27004;
	// addi r9,r9,4480
	ctx.r9.s64 = ctx.r9.s64 + 4480;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,20072
	ctx.r3.s64 = ctx.r11.s64 + 20072;
	// bl 0x82816528
	ctx.lr = 0x826C5F28;
	sub_82816528(ctx, base);
	// stw r3,3216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3216, ctx.r3.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-24976
	ctx.r3.s64 = ctx.r11.s64 + -24976;
	// bl 0x828165a8
	ctx.lr = 0x826C5F38;
	sub_828165A8(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,12277
	ctx.r10.s64 = 804585472;
	// stw r3,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,30173
	ctx.r10.u64 = ctx.r10.u64 | 30173;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// stw r8,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r8.u32);
	// stw r10,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r10.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826c5f90
	if (ctx.cr6.eq) goto loc_826C5F90;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r5,r11,20100
	ctx.r5.s64 = ctx.r11.s64 + 20100;
	// addi r4,r10,-17176
	ctx.r4.s64 = ctx.r10.s64 + -17176;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5680
	ctx.lr = 0x826C5F90;
	sub_828C5680(ctx, base);
loc_826C5F90:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-10062
	ctx.r10.s64 = -659423232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r10,13507
	ctx.r10.u64 = ctx.r10.u64 | 13507;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// stw r11,1876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1876, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_826C5FC0"))) PPC_WEAK_FUNC(sub_826C5FC0);
PPC_FUNC_IMPL(__imp__sub_826C5FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x826C5FE4;
	sub_8233A258(ctx, base);
	// lis r4,7654
	ctx.r4.s64 = 501612544;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,40519
	ctx.r4.u64 = ctx.r4.u64 | 40519;
	// bl 0x829c3740
	ctx.lr = 0x826C5FF8;
	sub_829C3740(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826badb0
	ctx.lr = 0x826C6000;
	sub_826BADB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C6018"))) PPC_WEAK_FUNC(sub_826C6018);
PPC_FUNC_IMPL(__imp__sub_826C6018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826C6020;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x826b9508
	ctx.lr = 0x826C6038;
	sub_826B9508(ctx, base);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lis r5,-29723
	ctx.r5.s64 = -1947926528;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// ori r5,r5,21796
	ctx.r5.u64 = ctx.r5.u64 | 21796;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x826C6060;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lis r6,-1408
	ctx.r6.s64 = -92274688;
	// lis r5,15978
	ctx.r5.s64 = 1047134208;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// ori r6,r6,17377
	ctx.r6.u64 = ctx.r6.u64 | 17377;
	// ori r5,r5,14363
	ctx.r5.u64 = ctx.r5.u64 | 14363;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x824091a0
	ctx.lr = 0x826C6084;
	sub_824091A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,-16227
	ctx.r4.s64 = -1063452672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,31636
	ctx.r4.u64 = ctx.r4.u64 | 31636;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C60A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826c6110
	if (ctx.cr0.eq) goto loc_826C6110;
	// lis r4,22618
	ctx.r4.s64 = 1482293248;
	// li r5,56
	ctx.r5.s64 = 56;
	// ori r4,r4,63855
	ctx.r4.u64 = ctx.r4.u64 | 63855;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bd828
	ctx.lr = 0x826C60BC;
	sub_829BD828(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,1888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1888, ctx.r3.u32);
	// beq 0x826c6110
	if (ctx.cr0.eq) goto loc_826C6110;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lis r4,-16227
	ctx.r4.s64 = -1063452672;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r8,r30,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// ori r4,r4,31636
	ctx.r4.u64 = ctx.r4.u64 | 31636;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x829c7118
	ctx.lr = 0x826C6104;
	sub_829C7118(ctx, base);
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r3,1888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1888);
	// bl 0x82978d98
	ctx.lr = 0x826C6110;
	sub_82978D98(ctx, base);
loc_826C6110:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x826C6120;
	sub_8233A258(ctx, base);
	// lis r4,13504
	ctx.r4.s64 = 884998144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,51078
	ctx.r4.u64 = ctx.r4.u64 | 51078;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x826C6134;
	sub_829C3740(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C6140"))) PPC_WEAK_FUNC(sub_826C6140);
PPC_FUNC_IMPL(__imp__sub_826C6140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826C6148;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826c61a4
	if (ctx.cr6.eq) goto loc_826C61A4;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,23848
	ctx.r31.s64 = ctx.r11.s64 + 23848;
	// lwz r11,23852(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23852);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826c6194
	if (!ctx.cr0.eq) goto loc_826C6194;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,20504
	ctx.r9.s64 = ctx.r9.s64 + 20504;
	// stw r11,23852(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23852, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28944
	ctx.r3.s64 = ctx.r11.s64 + 28944;
	// bl 0x82a4c758
	ctx.lr = 0x826C6194;
	sub_82A4C758(ctx, base);
loc_826C6194:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x826c61a4
	if (!ctx.cr6.eq) goto loc_826C61A4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826c61b0
	goto loc_826C61B0;
loc_826C61A4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339ee8
	ctx.lr = 0x826C61B0;
	sub_82339EE8(ctx, base);
loc_826C61B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C61B8"))) PPC_WEAK_FUNC(sub_826C61B8);
PPC_FUNC_IMPL(__imp__sub_826C61B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826C61C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,23848
	ctx.r31.s64 = ctx.r11.s64 + 23848;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,23852(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23852);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826c6204
	if (!ctx.cr0.eq) goto loc_826C6204;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,20504
	ctx.r9.s64 = ctx.r9.s64 + 20504;
	// stw r11,23852(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23852, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28944
	ctx.r3.s64 = ctx.r11.s64 + 28944;
	// bl 0x82a4c758
	ctx.lr = 0x826C6204;
	sub_82A4C758(ctx, base);
loc_826C6204:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x826c6218
	if (ctx.cr6.eq) goto loc_826C6218;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339d80
	ctx.lr = 0x826C6218;
	sub_82339D80(ctx, base);
loc_826C6218:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C6220"))) PPC_WEAK_FUNC(sub_826C6220);
PPC_FUNC_IMPL(__imp__sub_826C6220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18284
	ctx.r3.s64 = ctx.r11.s64 + -18284;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C6230"))) PPC_WEAK_FUNC(sub_826C6230);
PPC_FUNC_IMPL(__imp__sub_826C6230) {
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
	// beq cr6,0x826c6268
	if (ctx.cr6.eq) goto loc_826C6268;
	// bl 0x823ab088
	ctx.lr = 0x826C6258;
	sub_823AB088(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826c6268
	if (!ctx.cr6.eq) goto loc_826C6268;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826c6274
	goto loc_826C6274;
loc_826C6268:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233ecc8
	ctx.lr = 0x826C6274;
	sub_8233ECC8(ctx, base);
loc_826C6274:
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

__attribute__((alias("__imp__sub_826C6290"))) PPC_WEAK_FUNC(sub_826C6290);
PPC_FUNC_IMPL(__imp__sub_826C6290) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ab088
	sub_823AB088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C6298"))) PPC_WEAK_FUNC(sub_826C6298);
PPC_FUNC_IMPL(__imp__sub_826C6298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,3376
	ctx.r3.s64 = 3376;
	// bl 0x82833108
	ctx.lr = 0x826C62B4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826c62c8
	if (ctx.cr0.eq) goto loc_826C62C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826c6340
	ctx.lr = 0x826C62C4;
	sub_826C6340(ctx, base);
	// b 0x826c62cc
	goto loc_826C62CC;
loc_826C62C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826C62CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C62E0"))) PPC_WEAK_FUNC(sub_826C62E0);
PPC_FUNC_IMPL(__imp__sub_826C62E0) {
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
	// bl 0x823ab088
	ctx.lr = 0x826C6300;
	sub_823AB088(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826c6310
	if (!ctx.cr6.eq) goto loc_826C6310;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826c6328
	goto loc_826C6328;
loc_826C6310:
	// bl 0x82394fc8
	ctx.lr = 0x826C6314;
	sub_82394FC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826c6328
	if (ctx.cr6.eq) goto loc_826C6328;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233eba0
	ctx.lr = 0x826C6328;
	sub_8233EBA0(ctx, base);
loc_826C6328:
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

__attribute__((alias("__imp__sub_826C6340"))) PPC_WEAK_FUNC(sub_826C6340);
PPC_FUNC_IMPL(__imp__sub_826C6340) {
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
	// bl 0x8233edc0
	ctx.lr = 0x826C6360;
	sub_8233EDC0(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r11,r11,20528
	ctx.r11.s64 = ctx.r11.s64 + 20528;
	// addi r10,r10,21716
	ctx.r10.s64 = ctx.r10.s64 + 21716;
	// addi r9,r9,21768
	ctx.r9.s64 = ctx.r9.s64 + 21768;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,3216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3216);
	// stw r11,3216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3216, ctx.r11.u32);
	// lwz r11,3220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3220);
	// stw r11,3220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3220, ctx.r11.u32);
	// lfs f0,3224(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3224(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3224, temp.u32);
	// lfs f0,3228(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3228);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3228(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3228, temp.u32);
	// lfs f0,3232(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3232(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3232, temp.u32);
	// lfs f0,3236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3236);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3236(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3236, temp.u32);
	// lwz r11,3240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3240);
	// stw r11,3240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3240, ctx.r11.u32);
	// lwz r11,3244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3244);
	// stw r11,3244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3244, ctx.r11.u32);
	// lwz r11,3248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3248);
	// stw r11,3248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3248, ctx.r11.u32);
	// lwz r11,3252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3252);
	// stw r11,3252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3252, ctx.r11.u32);
	// lwz r11,3256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3256);
	// stw r11,3256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3256, ctx.r11.u32);
	// lwz r11,3260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3260);
	// stw r11,3260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3260, ctx.r11.u32);
	// lfs f0,3264(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3264(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3264, temp.u32);
	// lwz r11,3268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3268);
	// stw r11,3268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3268, ctx.r11.u32);
	// lfs f0,3272(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3272);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3272(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3272, temp.u32);
	// lwz r11,3276(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3276);
	// stw r11,3276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3276, ctx.r11.u32);
	// lwz r11,3280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3280);
	// stw r11,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r11.u32);
	// lwz r11,3284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3284);
	// stw r11,3284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3284, ctx.r11.u32);
	// lwz r11,3288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3288);
	// stw r11,3288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3288, ctx.r11.u32);
	// lwz r11,3292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3292);
	// stw r11,3292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3292, ctx.r11.u32);
	// lwz r11,3296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3296);
	// stw r11,3296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3296, ctx.r11.u32);
	// lfs f0,3300(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3300);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3300(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3300, temp.u32);
	// lfs f0,3304(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3304);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3304(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3304, temp.u32);
	// lfs f0,3308(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3308);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3308(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3308, temp.u32);
	// lfs f0,3312(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3312);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3312(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3312, temp.u32);
	// lfs f0,3316(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3316);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3316(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3316, temp.u32);
	// lfs f0,3320(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3320);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3320(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3320, temp.u32);
	// lwz r11,3324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3324);
	// stw r11,3324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3324, ctx.r11.u32);
	// lfs f0,3328(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3328);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3328(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3328, temp.u32);
	// lfs f0,3332(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3332);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3332(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3332, temp.u32);
	// lfs f0,3336(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3336);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3336(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3336, temp.u32);
	// lfs f0,3340(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3340(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3340, temp.u32);
	// lfs f0,3344(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3344);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3344(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3344, temp.u32);
	// lfs f0,3348(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3348);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3348(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3348, temp.u32);
	// lfs f0,3352(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3352);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3352(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3352, temp.u32);
	// lwz r11,3356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3356);
	// stw r11,3356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3356, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,3360(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3360);
	// stw r11,3360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3360, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_826C64C8"))) PPC_WEAK_FUNC(sub_826C64C8);
PPC_FUNC_IMPL(__imp__sub_826C64C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r31,r11,-20504
	ctx.r31.s64 = ctx.r11.s64 + -20504;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x826C6500;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 * 24;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826c652c
	if (ctx.cr0.eq) goto loc_826C652C;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
loc_826C652C:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x826c6550
	if (ctx.cr6.eq) goto loc_826C6550;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82332c38
	ctx.lr = 0x826C6550;
	sub_82332C38(ctx, base);
loc_826C6550:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C6568"))) PPC_WEAK_FUNC(sub_826C6568);
PPC_FUNC_IMPL(__imp__sub_826C6568) {
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
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-20504
	ctx.r11.s64 = ctx.r11.s64 + -20504;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826c65d4
	if (!ctx.cr6.gt) goto loc_826C65D4;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_826C65A4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x826c65c4
	if (ctx.cr6.eq) goto loc_826C65C4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826c65a4
	if (ctx.cr6.lt) goto loc_826C65A4;
	// b 0x826c65d4
	goto loc_826C65D4;
loc_826C65C4:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_826C65D4:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826c65fc
	if (ctx.cr6.eq) goto loc_826C65FC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C65F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826c6600
	goto loc_826C6600;
loc_826C65FC:
	// bl 0x829bc030
	ctx.lr = 0x826C6600;
	sub_829BC030(ctx, base);
loc_826C6600:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C6610"))) PPC_WEAK_FUNC(sub_826C6610);
PPC_FUNC_IMPL(__imp__sub_826C6610) {
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
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-20504
	ctx.r11.s64 = ctx.r11.s64 + -20504;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826c6670
	if (!ctx.cr6.gt) goto loc_826C6670;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_826C663C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x826c665c
	if (ctx.cr6.eq) goto loc_826C665C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826c663c
	if (ctx.cr6.lt) goto loc_826C663C;
	// b 0x826c6670
	goto loc_826C6670;
loc_826C665C:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826c6678
	if (!ctx.cr6.eq) goto loc_826C6678;
loc_826C6670:
	// bl 0x829bc0e0
	ctx.lr = 0x826C6674;
	sub_829BC0E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_826C6678:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C6690"))) PPC_WEAK_FUNC(sub_826C6690);
PPC_FUNC_IMPL(__imp__sub_826C6690) {
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
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-20504
	ctx.r11.s64 = ctx.r11.s64 + -20504;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826c6710
	if (!ctx.cr6.gt) goto loc_826C6710;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_826C66CC:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x826c66ec
	if (ctx.cr6.eq) goto loc_826C66EC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826c66cc
	if (ctx.cr6.lt) goto loc_826C66CC;
	// b 0x826c6710
	goto loc_826C6710;
loc_826C66EC:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C6708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826c671c
	if (!ctx.cr0.eq) goto loc_826C671C;
loc_826C6710:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829bc140
	ctx.lr = 0x826C671C;
	sub_829BC140(ctx, base);
loc_826C671C:
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

__attribute__((alias("__imp__sub_826C6738"))) PPC_WEAK_FUNC(sub_826C6738);
PPC_FUNC_IMPL(__imp__sub_826C6738) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826c40e0
	ctx.lr = 0x826C6758;
	sub_826C40E0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lis r7,13368
	ctx.r7.s64 = 876085248;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// addi r11,r10,20528
	ctx.r11.s64 = ctx.r10.s64 + 20528;
	// addi r10,r9,21716
	ctx.r10.s64 = ctx.r9.s64 + 21716;
	// stfs f31,3224(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3224, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// ori r11,r7,39156
	ctx.r11.u64 = ctx.r7.u64 | 39156;
	// addi r9,r8,21768
	ctx.r9.s64 = ctx.r8.s64 + 21768;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r11.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r30,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r30.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lis r5,27162
	ctx.r5.s64 = 1780088832;
	// addi r4,r31,1584
	ctx.r4.s64 = ctx.r31.s64 + 1584;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// ori r5,r5,61849
	ctx.r5.u64 = ctx.r5.u64 | 61849;
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x826C67C0;
	sub_823CF190(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r30,1892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1892, ctx.r30.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r7,r9,-11424
	ctx.r7.s64 = ctx.r9.s64 + -11424;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lfs f13,17120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17120);
	ctx.f13.f64 = double(temp.f32);
	// lis r5,-31963
	ctx.r5.s64 = -2094727168;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r10,-32616
	ctx.r8.s64 = ctx.r10.s64 + -32616;
	// lfs f0,-32616(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32616);
	ctx.f0.f64 = double(temp.f32);
	// lis r4,-31963
	ctx.r4.s64 = -2094727168;
	// lfs f8,-11424(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11424);
	ctx.f8.f64 = double(temp.f32);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lfs f12,-13216(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -13216);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r7,19658
	ctx.r7.s64 = 1288306688;
	// lfs f11,24020(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24020);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,17064(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 17064);
	ctx.f9.f64 = double(temp.f32);
	// li r11,1024
	ctx.r11.s64 = 1024;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f10,-204(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -204);
	ctx.f10.f64 = double(temp.f32);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lfs f7,-60(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -60);
	ctx.f7.f64 = double(temp.f32);
	// ori r7,r7,32139
	ctx.r7.u64 = ctx.r7.u64 | 32139;
	// lfs f6,-172(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -172);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,23752(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 23752);
	ctx.f5.f64 = double(temp.f32);
	// stw r11,3240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3240, ctx.r11.u32);
	// lfs f4,23968(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23968);
	ctx.f4.f64 = double(temp.f32);
	// stw r11,3268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3268, ctx.r11.u32);
	// lfs f3,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f3.f64 = double(temp.f32);
	// stw r5,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r5.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r6,3324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3324, ctx.r6.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,3340(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3340, temp.u32);
	// stfs f10,1512(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1512, temp.u32);
	// stfs f9,3264(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3264, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f12,3304(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3304, temp.u32);
	// stfs f8,3308(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3308, temp.u32);
	// stfs f11,3272(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3272, temp.u32);
	// stfs f7,3312(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3312, temp.u32);
	// stfs f11,3316(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3316, temp.u32);
	// stfs f6,3320(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3320, temp.u32);
	// stfs f5,3328(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3328, temp.u32);
	// stfs f4,3336(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3336, temp.u32);
	// stfs f3,3352(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3352, temp.u32);
	// stfs f0,3344(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3344, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f31,3236(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3236, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f31,3332(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3332, temp.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r11.u32);
	// stw r10,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r10.u32);
	// stw r9,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r9.u32);
	// stw r8,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r8.u32);
	// stw r7,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r7.u32);
	// stw r6,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C68E8"))) PPC_WEAK_FUNC(sub_826C68E8);
PPC_FUNC_IMPL(__imp__sub_826C68E8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826b9508
	ctx.lr = 0x826C6904;
	sub_826B9508(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826c69d8
	ctx.lr = 0x826C690C;
	sub_826C69D8(ctx, base);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,3216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3216, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1504(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1504, temp.u32);
	// beq cr6,0x826c6974
	if (ctx.cr6.eq) goto loc_826C6974;
	// lwz r9,628(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// lfs f0,3264(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3264);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,620(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// lwz r7,624(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lwz r6,3268(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3268);
	// stw r10,3248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3248, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r8,3276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3276, ctx.r8.u32);
	// stw r7,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r7.u32);
	// stw r6,3240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3240, ctx.r6.u32);
	// stw r8,3252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3252, ctx.r8.u32);
	// stw r7,3256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3256, ctx.r7.u32);
	// stw r11,3284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3284, ctx.r11.u32);
	// stw r11,3260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3260, ctx.r11.u32);
loc_826C6974:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,15834
	ctx.r30.s64 = ctx.r11.s64 + 15834;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8233a258
	ctx.lr = 0x826C6988;
	sub_8233A258(ctx, base);
	// lis r4,8024
	ctx.r4.s64 = 525860864;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,17266
	ctx.r4.u64 = ctx.r4.u64 | 17266;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x826C699C;
	sub_829C3740(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233a258
	ctx.lr = 0x826C69A8;
	sub_8233A258(ctx, base);
	// lis r4,10012
	ctx.r4.s64 = 656146432;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,23502
	ctx.r4.u64 = ctx.r4.u64 | 23502;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x826C69BC;
	sub_829C3740(ctx, base);
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

__attribute__((alias("__imp__sub_826C69D8"))) PPC_WEAK_FUNC(sub_826C69D8);
PPC_FUNC_IMPL(__imp__sub_826C69D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826C69E0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,20204
	ctx.r4.s64 = ctx.r11.s64 + 20204;
	// bl 0x82409058
	ctx.lr = 0x826C69FC;
	sub_82409058(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// lwz r29,132(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826c6a20
	if (ctx.cr6.eq) goto loc_826C6A20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c6a20
	if (ctx.cr6.eq) goto loc_826C6A20;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x826C6A20;
	sub_82332DB8(ctx, base);
loc_826C6A20:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826c6c9c
	if (ctx.cr6.eq) goto loc_826C6C9C;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c6c9c
	if (ctx.cr6.eq) goto loc_826C6C9C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r10,1740(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1740);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826c6a70
	if (!ctx.cr6.gt) goto loc_826C6A70;
	// lwz r11,1736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1736);
loc_826C6A50:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,2184(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2184);
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x826c6a64
	if (!ctx.cr6.gt) goto loc_826C6A64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
loc_826C6A64:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x826c6a50
	if (!ctx.cr0.eq) goto loc_826C6A50;
loc_826C6A70:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r10,20216
	ctx.r4.s64 = ctx.r10.s64 + 20216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826C6A90;
	sub_829E6978(ctx, base);
	// stfs f1,1512(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1512, temp.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,20224
	ctx.r4.s64 = ctx.r11.s64 + 20224;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829e6978
	ctx.lr = 0x826C6AAC;
	sub_829E6978(ctx, base);
	// stfs f1,3264(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3264, temp.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,20240
	ctx.r4.s64 = ctx.r11.s64 + 20240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829e6978
	ctx.lr = 0x826C6AC8;
	sub_829E6978(ctx, base);
	// li r11,3268
	ctx.r11.s64 = 3268;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,20256
	ctx.r4.s64 = ctx.r10.s64 + 20256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x826C6AEC;
	sub_829E6978(ctx, base);
	// stfs f1,3304(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3304, temp.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,20268
	ctx.r4.s64 = ctx.r11.s64 + 20268;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829e6978
	ctx.lr = 0x826C6B08;
	sub_829E6978(ctx, base);
	// stfs f1,3308(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3308, temp.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,20280
	ctx.r4.s64 = ctx.r11.s64 + 20280;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829e6978
	ctx.lr = 0x826C6B24;
	sub_829E6978(ctx, base);
	// stfs f1,3272(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3272, temp.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,20292
	ctx.r4.s64 = ctx.r11.s64 + 20292;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829e6978
	ctx.lr = 0x826C6B40;
	sub_829E6978(ctx, base);
	// stfs f1,3312(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3312, temp.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,20304
	ctx.r4.s64 = ctx.r11.s64 + 20304;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829e6978
	ctx.lr = 0x826C6B5C;
	sub_829E6978(ctx, base);
	// stfs f1,3316(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3316, temp.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,20316
	ctx.r4.s64 = ctx.r11.s64 + 20316;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829e6978
	ctx.lr = 0x826C6B78;
	sub_829E6978(ctx, base);
	// stfs f1,3320(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3320, temp.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,20332
	ctx.r4.s64 = ctx.r11.s64 + 20332;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829e6978
	ctx.lr = 0x826C6B94;
	sub_829E6978(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// addi r4,r11,20348
	ctx.r4.s64 = ctx.r11.s64 + 20348;
	// li r12,3324
	ctx.r12.s64 = 3324;
	// stfiwx f0,r31,r12
	PPC_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f0.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826C6BB8;
	sub_829E6978(ctx, base);
	// stfs f1,3328(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3328, temp.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,20368
	ctx.r4.s64 = ctx.r11.s64 + 20368;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829e6978
	ctx.lr = 0x826C6BD4;
	sub_829E6978(ctx, base);
	// stfs f1,3336(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3336, temp.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,20380
	ctx.r4.s64 = ctx.r11.s64 + 20380;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829e6978
	ctx.lr = 0x826C6BF0;
	sub_829E6978(ctx, base);
	// li r11,1892
	ctx.r11.s64 = 1892;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,20388
	ctx.r4.s64 = ctx.r10.s64 + 20388;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x826C6C14;
	sub_829E6978(ctx, base);
	// stfs f1,3340(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3340, temp.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,20400
	ctx.r4.s64 = ctx.r11.s64 + 20400;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829e6978
	ctx.lr = 0x826C6C30;
	sub_829E6978(ctx, base);
	// stfs f1,3344(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3344, temp.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,20412
	ctx.r4.s64 = ctx.r11.s64 + 20412;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829e6978
	ctx.lr = 0x826C6C4C;
	sub_829E6978(ctx, base);
	// stfs f1,3352(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3352, temp.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,20432
	ctx.r4.s64 = ctx.r11.s64 + 20432;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829e6978
	ctx.lr = 0x826C6C68;
	sub_829E6978(ctx, base);
	// lwz r11,3324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3324);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,1876
	ctx.r9.s64 = 1876;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r10,320(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	// stfiwx f0,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.f0.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C6C9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826C6C9C:
	// lfs f13,3344(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3344);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r27,100(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r26,104(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,-12104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f12,3340(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3340);
	ctx.f12.f64 = double(temp.f32);
	// stw r28,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r28.u32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,696(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// stw r5,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r5.u32);
	// lis r4,-5310
	ctx.r4.s64 = -347996160;
	// stw r30,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r29.u32);
	// ori r4,r4,37952
	ctx.r4.u64 = ctx.r4.u64 | 37952;
	// stw r27,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r27.u32);
	// stw r26,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r26.u32);
	// bl 0x826c75e8
	ctx.lr = 0x826C6D10;
	sub_826C75E8(ctx, base);
	// stw r28,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r28.u32);
	// stw r27,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r27.u32);
	// stw r26,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r26.u32);
	// stw r5,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r5.u32);
	// stw r30,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r30.u32);
	// stw r29,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r29.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C6D38"))) PPC_WEAK_FUNC(sub_826C6D38);
PPC_FUNC_IMPL(__imp__sub_826C6D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826C6D40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826bad48
	ctx.lr = 0x826C6D4C;
	sub_826BAD48(ctx, base);
	// lis r4,-26094
	ctx.r4.s64 = -1710096384;
	// li r5,48
	ctx.r5.s64 = 48;
	// ori r4,r4,51131
	ctx.r4.u64 = ctx.r4.u64 | 51131;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bd828
	ctx.lr = 0x826C6D60;
	sub_829BD828(ctx, base);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,3356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3356, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r10,13868
	ctx.r30.s64 = ctx.r10.s64 + 13868;
	// addi r29,r11,-2728
	ctx.r29.s64 = ctx.r11.s64 + -2728;
	// beq 0x826c6db4
	if (ctx.cr0.eq) goto loc_826C6DB4;
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x82978d98
	ctx.lr = 0x826C6D84;
	sub_82978D98(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r3,3356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3356);
	// lis r4,29245
	ctx.r4.s64 = 1916600320;
	// ori r4,r4,12929
	ctx.r4.u64 = ctx.r4.u64 | 12929;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x829c7118
	ctx.lr = 0x826C6DB4;
	sub_829C7118(ctx, base);
loc_826C6DB4:
	// lis r4,-8118
	ctx.r4.s64 = -532021248;
	// li r5,48
	ctx.r5.s64 = 48;
	// ori r4,r4,8251
	ctx.r4.u64 = ctx.r4.u64 | 8251;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bd828
	ctx.lr = 0x826C6DC8;
	sub_829BD828(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,3360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3360, ctx.r3.u32);
	// beq 0x826c6e00
	if (ctx.cr0.eq) goto loc_826C6E00;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r4,-9022
	ctx.r4.s64 = -591265792;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ori r4,r4,36830
	ctx.r4.u64 = ctx.r4.u64 | 36830;
	// ld r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x829c7118
	ctx.lr = 0x826C6DF8;
	sub_829C7118(ctx, base);
	// lwz r3,3360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3360);
	// bl 0x82978ed0
	ctx.lr = 0x826C6E00;
	sub_82978ED0(ctx, base);
loc_826C6E00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C6E08"))) PPC_WEAK_FUNC(sub_826C6E08);
PPC_FUNC_IMPL(__imp__sub_826C6E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x826C6E2C;
	sub_8233A258(ctx, base);
	// lis r4,15322
	ctx.r4.s64 = 1004142592;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,23281
	ctx.r4.u64 = ctx.r4.u64 | 23281;
	// bl 0x829c3740
	ctx.lr = 0x826C6E40;
	sub_829C3740(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826badb0
	ctx.lr = 0x826C6E48;
	sub_826BADB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C6E60"))) PPC_WEAK_FUNC(sub_826C6E60);
PPC_FUNC_IMPL(__imp__sub_826C6E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826C6E68;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r4,-5310
	ctx.r4.s64 = -347996160;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// ori r4,r4,37952
	ctx.r4.u64 = ctx.r4.u64 | 37952;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r9,1668(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// lwz r7,1656(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,1660(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1660);
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,1648(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1648);
	// bl 0x826b9ff8
	ctx.lr = 0x826C6EC8;
	sub_826B9FF8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f31,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lis r4,26666
	ctx.r4.s64 = 1747582976;
	// lfs f0,-12104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lfs f13,18368(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18368);
	ctx.f13.f64 = double(temp.f32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lis r5,18
	ctx.r5.s64 = 1179648;
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ori r4,r4,18444
	ctx.r4.u64 = ctx.r4.u64 | 18444;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x826b9f28
	ctx.lr = 0x826C6F3C;
	sub_826B9F28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826c6f74
	if (ctx.cr6.eq) goto loc_826C6F74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C6F6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x826c6f78
	goto loc_826C6F78;
loc_826C6F74:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_826C6F78:
	// lfs f0,1512(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f0.u64);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// ld r28,160(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r27,168(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// std r28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// bl 0x82331120
	ctx.lr = 0x826C6FD0;
	sub_82331120(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lis r30,18
	ctx.r30.s64 = 1179648;
	// addi r3,r9,19356
	ctx.r3.s64 = ctx.r9.s64 + 19356;
	// lfs f0,-27328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27328);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,19204(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19204);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x826C7014;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r28,168(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,184(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ld r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// li r6,2
	ctx.r6.s64 = 2;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r10,r27,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bl 0x826b9f28
	ctx.lr = 0x826C7050;
	sub_826B9F28(ctx, base);
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// beq cr6,0x826c7088
	if (ctx.cr6.eq) goto loc_826C7088;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C7080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x826c708c
	goto loc_826C708C;
loc_826C7088:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_826C708C:
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r30,184(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82331120
	ctx.lr = 0x826C70D0;
	sub_82331120(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C70E0"))) PPC_WEAK_FUNC(sub_826C70E0);
PPC_FUNC_IMPL(__imp__sub_826C70E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826C70E8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826c71c8
	if (!ctx.cr6.eq) goto loc_826C71C8;
	// lwz r11,1704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826c71c8
	if (!ctx.cr6.eq) goto loc_826C71C8;
	// lfs f0,3340(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3340);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,3220(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3220);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f0,3340(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3340, temp.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826c7164
	if (ctx.cr6.eq) goto loc_826C7164;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x826C713C;
	sub_829B9720(ctx, base);
	// bl 0x82548af8
	ctx.lr = 0x826C7140;
	sub_82548AF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826c7160
	if (ctx.cr0.eq) goto loc_826C7160;
	// lwz r11,2112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826c7160
	if (!ctx.cr6.gt) goto loc_826C7160;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826c7164
	if (ctx.cr0.eq) goto loc_826C7164;
loc_826C7160:
	// li r30,1
	ctx.r30.s64 = 1;
loc_826C7164:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,3340(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3340);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x826c7180
	if (ctx.cr6.lt) goto loc_826C7180;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x826c71c8
	if (ctx.cr6.eq) goto loc_826C71C8;
loc_826C7180:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,628(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r4,620(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 620);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r5,r9,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1116(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1116);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C71C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,3340(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3340, temp.u32);
	// li r29,1
	ctx.r29.s64 = 1;
loc_826C71C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C71D8"))) PPC_WEAK_FUNC(sub_826C71D8);
PPC_FUNC_IMPL(__imp__sub_826C71D8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,3248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826c7298
	if (!ctx.cr6.eq) goto loc_826C7298;
	// lfs f0,3332(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3332);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f13,3332(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3332, temp.u32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x826c7298
	if (!ctx.cr6.lt) goto loc_826C7298;
	// lwz r3,1644(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// bl 0x829c35d8
	ctx.lr = 0x826C7224;
	sub_829C35D8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x826c7298
	if (ctx.cr0.eq) goto loc_826C7298;
	// bl 0x82a4cd78
	ctx.lr = 0x826C7230;
	sub_82A4CD78(ctx, base);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826c7244
	if (ctx.cr0.eq) goto loc_826C7244;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f31,24000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f31.f64 = double(temp.f32);
	// b 0x826c724c
	goto loc_826C724C;
loc_826C7244:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
loc_826C724C:
	// bl 0x82a4cd78
	ctx.lr = 0x826C7250;
	sub_82A4CD78(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,3336(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3336);
	ctx.f13.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,16388(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16388);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmadds f0,f0,f31,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f0,3332(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3332, temp.u32);
	// lwz r11,620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// stw r11,3276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3276, ctx.r11.u32);
	// lwz r11,624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// stw r11,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r11.u32);
	// lwz r11,628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// stw r11,3284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3284, ctx.r11.u32);
loc_826C7298:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_826C72B8"))) PPC_WEAK_FUNC(sub_826C72B8);
PPC_FUNC_IMPL(__imp__sub_826C72B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x826bafd8
	ctx.lr = 0x826C72DC;
	sub_826BAFD8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x826c7364
	if (!ctx.cr6.gt) goto loc_826C7364;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826c70e0
	ctx.lr = 0x826C72FC;
	sub_826C70E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c7364
	if (!ctx.cr0.eq) goto loc_826C7364;
	// lfs f0,3348(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3348);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x826c7338
	if (!ctx.cr6.gt) goto loc_826C7338;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f0,3348(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3348, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x826c7338
	if (ctx.cr6.gt) goto loc_826C7338;
	// lis r4,26666
	ctx.r4.s64 = 1747582976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,18444
	ctx.r4.u64 = ctx.r4.u64 | 18444;
	// bl 0x826c75e8
	ctx.lr = 0x826C7330;
	sub_826C75E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8281d650
	ctx.lr = 0x826C7338;
	sub_8281D650(ctx, base);
loc_826C7338:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x826c7650
	ctx.lr = 0x826C7344;
	sub_826C7650(ctx, base);
	// lwz r11,756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c7360
	if (ctx.cr6.eq) goto loc_826C7360;
	// bl 0x826c7c00
	ctx.lr = 0x826C735C;
	sub_826C7C00(ctx, base);
	// b 0x826c7364
	goto loc_826C7364;
loc_826C7360:
	// bl 0x826c71d8
	ctx.lr = 0x826C7364;
	sub_826C71D8(ctx, base);
loc_826C7364:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C7380"))) PPC_WEAK_FUNC(sub_826C7380);
PPC_FUNC_IMPL(__imp__sub_826C7380) {
	PPC_FUNC_PROLOGUE();
	// lis r3,13171
	ctx.r3.s64 = 863174656;
	// ori r3,r3,61156
	ctx.r3.u64 = ctx.r3.u64 | 61156;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C7390"))) PPC_WEAK_FUNC(sub_826C7390);
PPC_FUNC_IMPL(__imp__sub_826C7390) {
	PPC_FUNC_PROLOGUE();
	// lis r3,3646
	ctx.r3.s64 = 238944256;
	// ori r3,r3,30471
	ctx.r3.u64 = ctx.r3.u64 | 30471;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C73A0"))) PPC_WEAK_FUNC(sub_826C73A0);
PPC_FUNC_IMPL(__imp__sub_826C73A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x826C73A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,960(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826c75d8
	if (!ctx.cr6.eq) goto loc_826C75D8;
	// lwz r11,1704(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826c75d8
	if (!ctx.cr6.eq) goto loc_826C75D8;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lis r9,20641
	ctx.r9.s64 = 1352728576;
	// lwz r8,32(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// ori r9,r9,43701
	ctx.r9.u64 = ctx.r9.u64 | 43701;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// beq cr6,0x826c75d8
	if (ctx.cr6.eq) goto loc_826C75D8;
	// lis r10,-30766
	ctx.r10.s64 = -2016280576;
	// ori r10,r10,2370
	ctx.r10.u64 = ctx.r10.u64 | 2370;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826c75d8
	if (ctx.cr6.eq) goto loc_826C75D8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x824116b0
	ctx.lr = 0x826C7410;
	sub_824116B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824116b0
	ctx.lr = 0x826C741C;
	sub_824116B0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826ba1f0
	ctx.lr = 0x826C7430;
	sub_826BA1F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c75d8
	if (!ctx.cr0.eq) goto loc_826C75D8;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x826C7458;
	sub_8281D960(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826ba388
	ctx.lr = 0x826C7474;
	sub_826BA388(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826c7498
	if (ctx.cr6.eq) goto loc_826C7498;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C7490;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x826c749c
	goto loc_826C749C;
loc_826C7498:
	// li r31,0
	ctx.r31.s64 = 0;
loc_826C749C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826c75b0
	if (ctx.cr6.eq) goto loc_826C75B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1824(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1824);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C74C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e7050
	ctx.lr = 0x826C74CC;
	sub_824E7050(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826ba4a0
	ctx.lr = 0x826C74E0;
	sub_826BA4A0(ctx, base);
	// lwz r11,756(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 756);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826c75b0
	if (!ctx.cr6.eq) goto loc_826C75B0;
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// addi r29,r30,620
	ctx.r29.s64 = ctx.r30.s64 + 620;
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,620
	ctx.r3.s64 = ctx.r31.s64 + 620;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x824cb778
	ctx.lr = 0x826C7518;
	sub_824CB778(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x826c75b0
	if (ctx.cr6.eq) goto loc_826C75B0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c6968
	ctx.lr = 0x826C752C;
	sub_829C6968(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826c7938
	ctx.lr = 0x826C7540;
	sub_826C7938(ctx, base);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826c7560
	if (!ctx.cr6.eq) goto loc_826C7560;
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x826c75d8
	if (ctx.cr6.lt) goto loc_826C75D8;
loc_826C7560:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// addi r11,r11,20472
	ctx.r11.s64 = ctx.r11.s64 + 20472;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// addi r3,r10,20444
	ctx.r3.s64 = ctx.r10.s64 + 20444;
	// bl 0x82816528
	ctx.lr = 0x826C758C;
	sub_82816528(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8282c818
	ctx.lr = 0x826C75AC;
	sub_8282C818(ctx, base);
	// b 0x826c75d8
	goto loc_826C75D8;
loc_826C75B0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C75CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x826c75dc
	if (!ctx.cr0.eq) goto loc_826C75DC;
loc_826C75D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826C75DC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C75E8"))) PPC_WEAK_FUNC(sub_826C75E8);
PPC_FUNC_IMPL(__imp__sub_826C75E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,364(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826c7604
	if (ctx.cr6.eq) goto loc_826C7604;
	// lwz r11,360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
loc_826C7604:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826c7648
	if (!ctx.cr6.gt) goto loc_826C7648;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_826C7618:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r6,28(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r7,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r7.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826c7618
	if (ctx.cr6.lt) goto loc_826C7618;
loc_826C7648:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C7650"))) PPC_WEAK_FUNC(sub_826C7650);
PPC_FUNC_IMPL(__imp__sub_826C7650) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x826c771c
	if (!ctx.cr6.gt) goto loc_826C771C;
	// lis r4,26666
	ctx.r4.s64 = 1747582976;
	// ori r4,r4,18444
	ctx.r4.u64 = ctx.r4.u64 | 18444;
	// bl 0x826c75e8
	ctx.lr = 0x826C768C;
	sub_826C75E8(ctx, base);
	// bl 0x824116b0
	ctx.lr = 0x826C7690;
	sub_824116B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826c771c
	if (ctx.cr0.eq) goto loc_826C771C;
	// lis r4,26666
	ctx.r4.s64 = 1747582976;
	// lfs f0,1512(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// ori r4,r4,18444
	ctx.r4.u64 = ctx.r4.u64 | 18444;
	// bl 0x826c75e8
	ctx.lr = 0x826C76BC;
	sub_826C75E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8281d650
	ctx.lr = 0x826C76C4;
	sub_8281D650(ctx, base);
	// lfs f0,3236(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3236);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,1512(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,3236(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3236, temp.u32);
	// stw r11,592(r30)
	PPC_STORE_U32(ctx.r30.u32 + 592, ctx.r11.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x826c7718
	if (ctx.cr6.lt) goto loc_826C7718;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// stw r10,452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 452, ctx.r10.u32);
	// lfs f0,3236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3236);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,3236(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3236, temp.u32);
	// b 0x826c771c
	goto loc_826C771C;
loc_826C7718:
	// stw r11,452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 452, ctx.r11.u32);
loc_826C771C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_826C7738"))) PPC_WEAK_FUNC(sub_826C7738);
PPC_FUNC_IMPL(__imp__sub_826C7738) {
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
	// lis r4,26666
	ctx.r4.s64 = 1747582976;
	// ori r4,r4,18444
	ctx.r4.u64 = ctx.r4.u64 | 18444;
	// bl 0x826c75e8
	ctx.lr = 0x826C7750;
	sub_826C75E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8281d650
	ctx.lr = 0x826C7758;
	sub_8281D650(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C7768"))) PPC_WEAK_FUNC(sub_826C7768);
PPC_FUNC_IMPL(__imp__sub_826C7768) {
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
	// lis r4,26666
	ctx.r4.s64 = 1747582976;
	// ori r4,r4,18444
	ctx.r4.u64 = ctx.r4.u64 | 18444;
	// bl 0x826c75e8
	ctx.lr = 0x826C7780;
	sub_826C75E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C77A0"))) PPC_WEAK_FUNC(sub_826C77A0);
PPC_FUNC_IMPL(__imp__sub_826C77A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826C77A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r4,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r4.u64);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// std r5,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r5.u64);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r30.u32);
	// beq cr6,0x826c7888
	if (ctx.cr6.eq) goto loc_826C7888;
	// lwz r11,824(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826c7888
	if (!ctx.cr6.eq) goto loc_826C7888;
	// lwz r11,816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826c7888
	if (!ctx.cr6.eq) goto loc_826C7888;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,1516(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1516);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x826c7888
	if (!ctx.cr6.eq) goto loc_826C7888;
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,576(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r8,580(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lfs f1,16668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// bl 0x82332e18
	ctx.lr = 0x826C7820;
	sub_82332E18(ctx, base);
	// lfs f13,1512(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// lfs f0,1520(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1520);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r10,1532(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,1536(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// ld r6,620(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 620);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// ld r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x829c21d0
	ctx.lr = 0x826C7888;
	sub_829C21D0(ctx, base);
loc_826C7888:
	// lfs f0,576(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f12,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r31,572
	ctx.r4.s64 = ctx.r31.s64 + 572;
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f11,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f13,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// fmr f4,f9
	ctx.f4.f64 = ctx.f9.f64;
	// lfs f0,-27300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f0.f64 = double(temp.f32);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f8,572(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f12,576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f12.f64 = double(temp.f32);
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// fmadds f11,f9,f11,f10
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f13,f8,f13,f11
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmuls f11,f6,f13
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f10,f7,f13
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fsubs f13,f5,f11
	ctx.f13.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f13,f4,f10
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r10,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r10.u32);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// stw r10,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r10.u32);
	// bl 0x82817280
	ctx.lr = 0x826C7918;
	sub_82817280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C792C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r29.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C7938"))) PPC_WEAK_FUNC(sub_826C7938);
PPC_FUNC_IMPL(__imp__sub_826C7938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826C7940;
	__savegprlr_27(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8284d9a0
	ctx.lr = 0x826C795C;
	sub_8284D9A0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r11,852(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 852);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C7978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,-9022
	ctx.r4.s64 = -591265792;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,36830
	ctx.r4.u64 = ctx.r4.u64 | 36830;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8284da30
	ctx.lr = 0x826C7990;
	sub_8284DA30(ctx, base);
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r9,664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8258d438
	ctx.lr = 0x826C79B8;
	sub_8258D438(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826c8a28
	ctx.lr = 0x826C79C4;
	sub_826C8A28(ctx, base);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v9,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// vmrghw v11,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lvx128 v8,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v10,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v9,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// lvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v8,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// vmrghw v7,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// vmrghw v6,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// vmrglw v9,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// vmrglw v10,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v8,v0,v7
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v7.f32), 0xFF));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// vmsum4fp128 v4,v0,v6
	simde_mm_store_ps(ctx.v4.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// vmsum4fp128 v5,v0,v9
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v3,v13,v10
	simde_mm_store_ps(ctx.v3.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v2,v13,v9
	simde_mm_store_ps(ctx.v2.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v0,v0,v10
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v1,v13,v6
	simde_mm_store_ps(ctx.v1.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v31,v12,v10
	simde_mm_store_ps(ctx.v31.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v30,v12,v9
	simde_mm_store_ps(ctx.v30.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v29,v12,v6
	simde_mm_store_ps(ctx.v29.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v10,v11,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v9,v11,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v6,v11,v6
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v13,v13,v7
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v12,v12,v7
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v11,v11,v7
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v7.f32), 0xFF));
	// vmrghw v8,v8,v4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrghw v7,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	// vmrghw v0,v5,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// vmrghw v0,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrghw v13,v13,v1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v8,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), simde_mm_load_si128((simde__m128i*)ctx.v30.u32)));
	// vmrghw v12,v12,v29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v29.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v10,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v13,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v0,v11,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v0,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v13,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// stvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82817f30
	ctx.lr = 0x826C7AC0;
	sub_82817F30(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82817b48
	ctx.lr = 0x826C7ACC;
	sub_82817B48(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,13868
	ctx.r30.s64 = ctx.r11.s64 + 13868;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,284(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 284);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C7B0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C7B24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r4,-5310
	ctx.r4.s64 = -347996160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,37952
	ctx.r4.u64 = ctx.r4.u64 | 37952;
	// stw r11,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// bl 0x826c75e8
	ctx.lr = 0x826C7B4C;
	sub_826C75E8(ctx, base);
	// li r11,1024
	ctx.r11.s64 = 1024;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x826C7B5C;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x826c7ba8
	if (ctx.cr0.eq) goto loc_826C7BA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,80(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lwz r27,80(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82833180
	ctx.lr = 0x826C7B74;
	sub_82833180(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// addi r11,r11,21840
	ctx.r11.s64 = ctx.r11.s64 + 21840;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r28,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r28.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// b 0x826c7bac
	goto loc_826C7BAC;
loc_826C7BA8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_826C7BAC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x826C7BBC;
	sub_82833A30(ctx, base);
	// lwz r3,3360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3360);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826c7bd0
	if (ctx.cr6.eq) goto loc_826C7BD0;
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x82978d98
	ctx.lr = 0x826C7BD0;
	sub_82978D98(ctx, base);
loc_826C7BD0:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x826C7BE0;
	sub_8233A258(ctx, base);
	// lis r4,1143
	ctx.r4.s64 = 74907648;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,40500
	ctx.r4.u64 = ctx.r4.u64 | 40500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x826C7BF4;
	sub_829C3740(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C7C00"))) PPC_WEAK_FUNC(sub_826C7C00);
PPC_FUNC_IMPL(__imp__sub_826C7C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826c7c9c
	if (ctx.cr6.eq) goto loc_826C7C9C;
	// bl 0x824090e0
	ctx.lr = 0x826C7C24;
	sub_824090E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826c7c9c
	if (ctx.cr0.eq) goto loc_826C7C9C;
	// lwz r11,2112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826c7c50
	if (!ctx.cr6.gt) goto loc_826C7C50;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826c7c50
	if (!ctx.cr0.eq) goto loc_826C7C50;
	// lwz r11,8504(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8504);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826c7c9c
	if (!ctx.cr6.eq) goto loc_826C7C9C;
loc_826C7C50:
	// lis r4,26666
	ctx.r4.s64 = 1747582976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,18444
	ctx.r4.u64 = ctx.r4.u64 | 18444;
	// bl 0x826c75e8
	ctx.lr = 0x826C7C60;
	sub_826C75E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// bl 0x826c7cb0
	ctx.lr = 0x826C7C78;
	sub_826C7CB0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x826C7C88;
	sub_8233A258(ctx, base);
	// lis r4,7320
	ctx.r4.s64 = 479723520;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,44444
	ctx.r4.u64 = ctx.r4.u64 | 44444;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x826C7C9C;
	sub_829C3740(ctx, base);
loc_826C7C9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C7CB0"))) PPC_WEAK_FUNC(sub_826C7CB0);
PPC_FUNC_IMPL(__imp__sub_826C7CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826C7CB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r29,756(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 756);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826c7d34
	if (ctx.cr6.eq) goto loc_826C7D34;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x826C7CD8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826c7d20
	if (ctx.cr0.eq) goto loc_826C7D20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,80(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lwz r27,80(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// bl 0x82833180
	ctx.lr = 0x826C7CF0;
	sub_82833180(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// addi r11,r11,21840
	ctx.r11.s64 = ctx.r11.s64 + 21840;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// b 0x826c7d24
	goto loc_826C7D24;
loc_826C7D20:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_826C7D24:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x826C7D34;
	sub_82833A30(ctx, base);
loc_826C7D34:
	// lwz r3,3360(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3360);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826c7d44
	if (ctx.cr6.eq) goto loc_826C7D44;
	// bl 0x82978ed0
	ctx.lr = 0x826C7D44;
	sub_82978ED0(ctx, base);
loc_826C7D44:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,284(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 284);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r9,r28,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C7D90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,-5310
	ctx.r4.s64 = -347996160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,37952
	ctx.r4.u64 = ctx.r4.u64 | 37952;
	// bl 0x826c75e8
	ctx.lr = 0x826C7DA0;
	sub_826C75E8(ctx, base);
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,1535
	ctx.r11.u64 = ctx.r11.u64 | 1535;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// lfs f0,3352(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3352);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3348(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3348, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C7DC0"))) PPC_WEAK_FUNC(sub_826C7DC0);
PPC_FUNC_IMPL(__imp__sub_826C7DC0) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82a61748
	ctx.lr = 0x826C7DD8;
	__savefpr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f13,3284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r31,620
	ctx.r10.s64 = ctx.r31.s64 + 620;
	// lfs f0,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,3276
	ctx.r11.s64 = ctx.r31.s64 + 3276;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,3280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,3276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3276);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f31,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,904(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,16668(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16668);
	ctx.f28.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f11,f13,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bne cr6,0x826c7e68
	if (!ctx.cr6.eq) goto loc_826C7E68;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// b 0x826c7ea0
	goto loc_826C7EA0;
loc_826C7E68:
	// fcmpu cr6,f11,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f28.f64);
	// bge cr6,0x826c7e80
	if (!ctx.cr6.lt) goto loc_826C7E80;
	// stfs f29,96(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f29,100(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f29,104(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// b 0x826c7ea0
	goto loc_826C7EA0;
loc_826C7E80:
	// fsqrts f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f10,f31,f10
	ctx.f10.f64 = double(float(ctx.f31.f64 / ctx.f10.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_826C7EA0:
	// fsqrts f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f11.f64)));
	// lfs f13,3304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3304);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x826c7ee4
	if (ctx.cr6.lt) goto loc_826C7EE4;
	// lwz r11,3248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c7ec4
	if (ctx.cr6.eq) goto loc_826C7EC4;
	// lfs f0,3272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3272);
	ctx.f0.f64 = double(temp.f32);
	// b 0x826c7edc
	goto loc_826C7EDC;
loc_826C7EC4:
	// lfs f13,3308(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3308);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x826c7ed8
	if (!ctx.cr6.lt) goto loc_826C7ED8;
	// lfs f0,3312(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3312);
	ctx.f0.f64 = double(temp.f32);
	// b 0x826c7edc
	goto loc_826C7EDC;
loc_826C7ED8:
	// lfs f0,3316(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3316);
	ctx.f0.f64 = double(temp.f32);
loc_826C7EDC:
	// stfs f0,3300(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3300, temp.u32);
	// b 0x826c7f6c
	goto loc_826C7F6C;
loc_826C7EE4:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,3248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3248, ctx.r9.u32);
	// stw r9,3240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3240, ctx.r9.u32);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x826c7f20
	if (!ctx.cr6.eq) goto loc_826C7F20;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3292(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3292);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x826c7f20
	if (!ctx.cr6.eq) goto loc_826C7F20;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x826c7f6c
	if (ctx.cr6.eq) goto loc_826C7F6C;
loc_826C7F20:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f13,3332(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3332);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f0,3328(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3328);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,3332(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3332, temp.u32);
	// stw r9,3288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3288, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r8,3292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3292, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r10,3296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3296, ctx.r10.u32);
	// lfs f13,3296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,3296(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3296, temp.u32);
	// lwz r10,3296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_826C7F6C:
	// lfs f13,3300(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1504(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// beq cr6,0x826c7fb4
	if (ctx.cr6.eq) goto loc_826C7FB4;
	// lfs f0,3320(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3320);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fadds f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x826c7fa0
	if (!ctx.cr6.gt) goto loc_826C7FA0;
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x826c7fb0
	if (!ctx.cr6.lt) goto loc_826C7FB0;
	// b 0x826c7fac
	goto loc_826C7FAC;
loc_826C7FA0:
	// fadds f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x826c7fb0
	if (!ctx.cr6.gt) goto loc_826C7FB0;
loc_826C7FAC:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_826C7FB0:
	// stfs f0,1504(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1504, temp.u32);
loc_826C7FB4:
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,576(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r9,580(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82817280
	ctx.lr = 0x826C7FD8;
	sub_82817280(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82817280
	ctx.lr = 0x826C7FE4;
	sub_82817280(ctx, base);
	// lwa r11,928(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 928));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwa r10,936(r31)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 936));
	// lwa r9,932(r31)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 932));
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// fctiwz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// beq cr6,0x826c8074
	if (ctx.cr6.eq) goto loc_826C8074;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x826c8074
	if (ctx.cr6.eq) goto loc_826C8074;
	// bl 0x829c1bd0
	ctx.lr = 0x826C8070;
	sub_829C1BD0(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
loc_826C8074:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x826c8098
	if (ctx.cr6.eq) goto loc_826C8098;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x826c8098
	if (ctx.cr6.eq) goto loc_826C8098;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// bl 0x829c1bd0
	ctx.lr = 0x826C8094;
	sub_829C1BD0(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
loc_826C8098:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x826c80bc
	if (ctx.cr6.eq) goto loc_826C80BC;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x826c80bc
	if (ctx.cr6.eq) goto loc_826C80BC;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x829c1bd0
	ctx.lr = 0x826C80B8;
	sub_829C1BD0(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
loc_826C80BC:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82817bb8
	ctx.lr = 0x826C80C8;
	sub_82817BB8(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x826c8110
	if (!ctx.cr6.eq) goto loc_826C8110;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// b 0x826c8144
	goto loc_826C8144;
loc_826C8110:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x826c8128
	if (!ctx.cr6.lt) goto loc_826C8128;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// fmr f13,f29
	ctx.f13.f64 = ctx.f29.f64;
	// fmr f12,f29
	ctx.f12.f64 = ctx.f29.f64;
	// b 0x826c8144
	goto loc_826C8144;
loc_826C8128:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f31,f0
	ctx.f10.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// fmuls f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f12,f10,f11
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
loc_826C8144:
	// lfs f11,1504(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C8190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3244);
	// lwz r10,3240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3240);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,3244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3244, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82a61794
	ctx.lr = 0x826C81AC;
	__restfpr_28(ctx, base);
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

__attribute__((alias("__imp__sub_826C81C0"))) PPC_WEAK_FUNC(sub_826C81C0);
PPC_FUNC_IMPL(__imp__sub_826C81C0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// lwz r11,756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c8228
	if (ctx.cr6.eq) goto loc_826C8228;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,13868
	ctx.r4.s64 = ctx.r11.s64 + 13868;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r10,312(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 312);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r9.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C8224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826c8244
	goto loc_826C8244;
loc_826C8228:
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x826c7dc0
	ctx.lr = 0x826C8234;
	sub_826C7DC0(ctx, base);
	// lfs f0,1504(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_826C8244:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_826C8268"))) PPC_WEAK_FUNC(sub_826C8268);
PPC_FUNC_IMPL(__imp__sub_826C8268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826C8270;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x826c7cb0
	ctx.lr = 0x826C828C;
	sub_826C7CB0(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826bb580
	ctx.lr = 0x826C82AC;
	sub_826BB580(ctx, base);
	// lis r4,26666
	ctx.r4.s64 = 1747582976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,18444
	ctx.r4.u64 = ctx.r4.u64 | 18444;
	// bl 0x826c75e8
	ctx.lr = 0x826C82BC;
	sub_826C75E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r4,-5310
	ctx.r4.s64 = -347996160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,37952
	ctx.r4.u64 = ctx.r4.u64 | 37952;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// bl 0x826c75e8
	ctx.lr = 0x826C82DC;
	sub_826C75E8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r10,1024
	ctx.r10.s64 = 1024;
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3348(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3348, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C82F8"))) PPC_WEAK_FUNC(sub_826C82F8);
PPC_FUNC_IMPL(__imp__sub_826C82F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826c84fc
	if (!ctx.cr6.eq) goto loc_826C84FC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// ble cr6,0x826c84fc
	if (!ctx.cr6.gt) goto loc_826C84FC;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r7,r31,572
	ctx.r7.s64 = ctx.r31.s64 + 572;
	// lfs f29,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f29.f64 = double(temp.f32);
	// lwz r10,1180(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1180);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r8,r31,1980
	ctx.r8.s64 = ctx.r31.s64 + 1980;
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stfs f29,164(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// addi r6,r31,620
	ctx.r6.s64 = ctx.r31.s64 + 620;
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C83AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f12,580(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lfs f0,572(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x826c8400
	if (!ctx.cr6.eq) goto loc_826C8400;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bne cr6,0x826c8400
	if (!ctx.cr6.eq) goto loc_826C8400;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// beq cr6,0x826c8498
	if (ctx.cr6.eq) goto loc_826C8498;
loc_826C8400:
	// fmuls f11,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f11,f0,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f29
	ctx.cr6.compare(ctx.f11.f64, ctx.f29.f64);
	// bne cr6,0x826c8424
	if (!ctx.cr6.eq) goto loc_826C8424;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// b 0x826c8464
	goto loc_826C8464;
loc_826C8424:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f10,16668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x826c8444
	if (!ctx.cr6.lt) goto loc_826C8444;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x826c8464
	goto loc_826C8464;
loc_826C8444:
	// fsqrts f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f11,f29,f11
	ctx.f11.f64 = double(float(ctx.f29.f64 / ctx.f11.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_826C8464:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82817280
	ctx.lr = 0x826C8470;
	sub_82817280(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,3244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3244);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x828264e0
	ctx.lr = 0x826C8498;
	sub_828264E0(ctx, base);
loc_826C8498:
	// lfs f0,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x826c84fc
	if (!ctx.cr6.lt) goto loc_826C84FC;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826c84fc
	if (!ctx.cr0.eq) goto loc_826C84FC;
	// lwz r6,192(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x826c84fc
	if (ctx.cr6.eq) goto loc_826C84FC;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826c84fc
	if (ctx.cr6.eq) goto loc_826C84FC;
	// lwz r11,816(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c84fc
	if (ctx.cr6.eq) goto loc_826C84FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 140);
	// lwz r11,856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 856);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C84FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826C84FC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C8520"))) PPC_WEAK_FUNC(sub_826C8520);
PPC_FUNC_IMPL(__imp__sub_826C8520) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x829c63e8
	ctx.lr = 0x826C8540;
	sub_829C63E8(ctx, base);
	// lis r11,11857
	ctx.r11.s64 = 777060352;
	// ori r11,r11,20963
	ctx.r11.u64 = ctx.r11.u64 | 20963;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826c85a8
	if (!ctx.cr6.eq) goto loc_826C85A8;
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c85a8
	if (ctx.cr6.eq) goto loc_826C85A8;
	// lwz r10,628(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// lfs f0,3264(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3264);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,620(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,624(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lwz r6,3268(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3268);
	// stw r8,3248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3248, ctx.r8.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,3276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3276, ctx.r9.u32);
	// stw r7,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r7.u32);
	// stw r6,3240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3240, ctx.r6.u32);
	// stw r9,3252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3252, ctx.r9.u32);
	// stw r7,3256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3256, ctx.r7.u32);
	// stw r11,3284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3284, ctx.r11.u32);
	// stw r11,3260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3260, ctx.r11.u32);
loc_826C85A8:
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

__attribute__((alias("__imp__sub_826C85C0"))) PPC_WEAK_FUNC(sub_826C85C0);
PPC_FUNC_IMPL(__imp__sub_826C85C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x826c41c0
	ctx.lr = 0x826C85D8;
	sub_826C41C0(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r4,r31,176
	ctx.r4.s64 = ctx.r31.s64 + 176;
	// addi r5,r11,11976
	ctx.r5.s64 = ctx.r11.s64 + 11976;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f5de8
	ctx.lr = 0x826C85F4;
	sub_824F5DE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C8608"))) PPC_WEAK_FUNC(sub_826C8608);
PPC_FUNC_IMPL(__imp__sub_826C8608) {
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
	// bl 0x826c4438
	ctx.lr = 0x826C8624;
	sub_826C4438(ctx, base);
	// addi r11,r31,572
	ctx.r11.s64 = ctx.r31.s64 + 572;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82838fd0
	ctx.lr = 0x826C863C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_826C8660"))) PPC_WEAK_FUNC(sub_826C8660);
PPC_FUNC_IMPL(__imp__sub_826C8660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826C8668;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x829c5148
	ctx.lr = 0x826C8678;
	sub_829C5148(ctx, base);
	// addi r29,r31,572
	ctx.r29.s64 = ctx.r31.s64 + 572;
	// addi r28,r31,424
	ctx.r28.s64 = ctx.r31.s64 + 424;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C8694;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r3.u32);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C86B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r27
	ctx.r4.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C86CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c86f0
	if (!ctx.cr0.eq) goto loc_826C86F0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826C86E4;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_826C86F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C8700"))) PPC_WEAK_FUNC(sub_826C8700);
PPC_FUNC_IMPL(__imp__sub_826C8700) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x826c7938
	sub_826C7938(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C8710"))) PPC_WEAK_FUNC(sub_826C8710);
PPC_FUNC_IMPL(__imp__sub_826C8710) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82333900
	ctx.lr = 0x826C8724;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826c8744
	if (ctx.cr0.eq) goto loc_826C8744;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r11,r10,20472
	ctx.r11.s64 = ctx.r10.s64 + 20472;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x826c8748
	goto loc_826C8748;
loc_826C8744:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826C8748:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C8758"))) PPC_WEAK_FUNC(sub_826C8758);
PPC_FUNC_IMPL(__imp__sub_826C8758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31944
	ctx.r31.s64 = -2093481984;
	// lwz r3,13748(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13748);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826c87a0
	if (!ctx.cr6.eq) goto loc_826C87A0;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-26528
	ctx.r3.s64 = ctx.r10.s64 + -26528;
	// bl 0x82a4c7d8
	ctx.lr = 0x826C878C;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x826C8794;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x826C879C;
	sub_82816528(ctx, base);
	// stw r3,13748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13748, ctx.r3.u32);
loc_826C87A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C87B8"))) PPC_WEAK_FUNC(sub_826C87B8);
PPC_FUNC_IMPL(__imp__sub_826C87B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826c62e0
	sub_826C62E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C87C0"))) PPC_WEAK_FUNC(sub_826C87C0);
PPC_FUNC_IMPL(__imp__sub_826C87C0) {
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
	// bl 0x826c8810
	ctx.lr = 0x826C87E0;
	sub_826C8810(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826c87f4
	if (ctx.cr6.eq) goto loc_826C87F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x826C87F4;
	sub_82333B08(ctx, base);
loc_826C87F4:
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

__attribute__((alias("__imp__sub_826C8810"))) PPC_WEAK_FUNC(sub_826C8810);
PPC_FUNC_IMPL(__imp__sub_826C8810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,23844
	ctx.r31.s64 = ctx.r11.s64 + 23844;
	// lwz r11,-19420(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19420);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826c8858
	if (!ctx.cr0.eq) goto loc_826C8858;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,21920
	ctx.r9.s64 = ctx.r9.s64 + 21920;
	// stw r11,-19420(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19420, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,28968
	ctx.r3.s64 = ctx.r11.s64 + 28968;
	// bl 0x82a4c758
	ctx.lr = 0x826C8858;
	sub_82A4C758(ctx, base);
loc_826C8858:
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

__attribute__((alias("__imp__sub_826C8870"))) PPC_WEAK_FUNC(sub_826C8870);
PPC_FUNC_IMPL(__imp__sub_826C8870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,23840(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23840);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826c88b0
	if (!ctx.cr0.eq) goto loc_826C88B0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,23840(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23840, ctx.r11.u32);
	// addi r3,r9,21792
	ctx.r3.s64 = ctx.r9.s64 + 21792;
	// bl 0x82816528
	ctx.lr = 0x826C88A8;
	sub_82816528(ctx, base);
	// stw r3,23836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23836, ctx.r3.u32);
	// b 0x826c88b4
	goto loc_826C88B4;
loc_826C88B0:
	// lwz r3,23836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23836);
loc_826C88B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C88C8"))) PPC_WEAK_FUNC(sub_826C88C8);
PPC_FUNC_IMPL(__imp__sub_826C88C8) {
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
	// bl 0x826c8810
	ctx.lr = 0x826C88E8;
	sub_826C8810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C88FC;
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

__attribute__((alias("__imp__sub_826C8918"))) PPC_WEAK_FUNC(sub_826C8918);
PPC_FUNC_IMPL(__imp__sub_826C8918) {
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
	// beq cr6,0x826c8950
	if (ctx.cr6.eq) goto loc_826C8950;
	// bl 0x826c8810
	ctx.lr = 0x826C8940;
	sub_826C8810(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826c8950
	if (!ctx.cr6.eq) goto loc_826C8950;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826c895c
	goto loc_826C895C;
loc_826C8950:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x826C895C;
	sub_82333C70(ctx, base);
loc_826C895C:
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

__attribute__((alias("__imp__sub_826C8978"))) PPC_WEAK_FUNC(sub_826C8978);
PPC_FUNC_IMPL(__imp__sub_826C8978) {
	PPC_FUNC_PROLOGUE();
	// b 0x826c8810
	sub_826C8810(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C8980"))) PPC_WEAK_FUNC(sub_826C8980);
PPC_FUNC_IMPL(__imp__sub_826C8980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x826C899C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826c89fc
	if (ctx.cr0.eq) goto loc_826C89FC;
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
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,21840
	ctx.r9.s64 = ctx.r9.s64 + 21840;
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
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// b 0x826c8a00
	goto loc_826C8A00;
loc_826C89FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826C8A00:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C8A18"))) PPC_WEAK_FUNC(sub_826C8A18);
PPC_FUNC_IMPL(__imp__sub_826C8A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,21792
	ctx.r3.s64 = ctx.r11.s64 + 21792;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C8A28"))) PPC_WEAK_FUNC(sub_826C8A28);
PPC_FUNC_IMPL(__imp__sub_826C8A28) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82a61710
	ctx.lr = 0x826C8A40;
	__savefpr_14(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826c8d38
	ctx.lr = 0x826C8A54;
	sub_826C8D38(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x826c8a90
	if (!ctx.cr6.eq) goto loc_826C8A90;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r11,r11,-15728
	ctx.r11.s64 = ctx.r11.s64 + -15728;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826C8A78:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x826c8a78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826C8A78;
	// b 0x826c8d10
	goto loc_826C8D10;
loc_826C8A90:
	// lfs f13,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f11,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f0,f12
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f6,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// lfs f31,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f4,f6,f12
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// lfs f8,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f26,f31,f6
	ctx.f26.f64 = double(float(ctx.f31.f64 * ctx.f6.f64));
	// lfs f5,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f2,f13,f11
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f28,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f29,f31,f13
	ctx.f29.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// lfs f3,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f24,f28,f13
	ctx.f24.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// fmuls f22,f0,f31
	ctx.f22.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f30,f0,f5
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f10,f5,f8,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 - ctx.f10.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmsubs f7,f3,f8,f7
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 - ctx.f7.f64));
	// lfs f27,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f27.f64 = double(temp.f32);
	// fmsubs f9,f3,f6,f9
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 - ctx.f9.f64));
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f23,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f23.f64 = double(temp.f32);
	// fmsubs f4,f11,f8,f4
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 - ctx.f4.f64));
	// fmsubs f12,f28,f8,f26
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f8.f64 - ctx.f26.f64));
	// lfs f25,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f25.f64 = double(temp.f32);
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// lfs f21,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f21.f64 = double(temp.f32);
	// fmsubs f2,f5,f6,f2
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 - ctx.f2.f64));
	// lfs f31,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// fmsubs f1,f27,f6,f24
	ctx.f1.f64 = double(float(ctx.f27.f64 * ctx.f6.f64 - ctx.f24.f64));
	// lfs f20,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f20.f64 = double(temp.f32);
	// fmsubs f29,f27,f8,f29
	ctx.f29.f64 = double(float(ctx.f27.f64 * ctx.f8.f64 - ctx.f29.f64));
	// fmsubs f30,f3,f13,f30
	ctx.f30.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 - ctx.f30.f64));
	// fmuls f26,f28,f10
	ctx.f26.f64 = double(float(ctx.f28.f64 * ctx.f10.f64));
	// fmuls f19,f7,f27
	ctx.f19.f64 = double(float(ctx.f7.f64 * ctx.f27.f64));
	// fmuls f24,f23,f9
	ctx.f24.f64 = double(float(ctx.f23.f64 * ctx.f9.f64));
	// fmuls f18,f25,f7
	ctx.f18.f64 = double(float(ctx.f25.f64 * ctx.f7.f64));
	// fmuls f15,f7,f28
	ctx.f15.f64 = double(float(ctx.f7.f64 * ctx.f28.f64));
	// fmuls f7,f23,f7
	ctx.f7.f64 = double(float(ctx.f23.f64 * ctx.f7.f64));
	// fmuls f17,f9,f27
	ctx.f17.f64 = double(float(ctx.f9.f64 * ctx.f27.f64));
	// fmuls f16,f25,f10
	ctx.f16.f64 = double(float(ctx.f25.f64 * ctx.f10.f64));
	// fmuls f14,f25,f29
	ctx.f14.f64 = double(float(ctx.f25.f64 * ctx.f29.f64));
	// fmsubs f8,f31,f8,f22
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f8.f64 - ctx.f22.f64));
	// fmsubs f26,f27,f4,f26
	ctx.f26.f64 = double(float(ctx.f27.f64 * ctx.f4.f64 - ctx.f26.f64));
	// fmsubs f19,f31,f10,f19
	ctx.f19.f64 = double(float(ctx.f31.f64 * ctx.f10.f64 - ctx.f19.f64));
	// fmsubs f24,f21,f2,f24
	ctx.f24.f64 = double(float(ctx.f21.f64 * ctx.f2.f64 - ctx.f24.f64));
	// lfs f22,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f22.f64 = double(temp.f32);
	// fmsubs f18,f21,f4,f18
	ctx.f18.f64 = double(float(ctx.f21.f64 * ctx.f4.f64 - ctx.f18.f64));
	// stfs f29,80(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f29,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// fmsubs f10,f21,f10,f7
	ctx.f10.f64 = double(float(ctx.f21.f64 * ctx.f10.f64 - ctx.f7.f64));
	// fmsubs f17,f31,f2,f17
	ctx.f17.f64 = double(float(ctx.f31.f64 * ctx.f2.f64 - ctx.f17.f64));
	// fmsubs f16,f23,f4,f16
	ctx.f16.f64 = double(float(ctx.f23.f64 * ctx.f4.f64 - ctx.f16.f64));
	// fmsubs f4,f31,f4,f15
	ctx.f4.f64 = double(float(ctx.f31.f64 * ctx.f4.f64 - ctx.f15.f64));
	// fmsubs f7,f23,f12,f14
	ctx.f7.f64 = double(float(ctx.f23.f64 * ctx.f12.f64 - ctx.f14.f64));
	// fmadds f26,f22,f2,f26
	ctx.f26.f64 = double(float(ctx.f22.f64 * ctx.f2.f64 + ctx.f26.f64));
	// fmadds f19,f30,f22,f19
	ctx.f19.f64 = double(float(ctx.f30.f64 * ctx.f22.f64 + ctx.f19.f64));
	// fmadds f24,f25,f30,f24
	ctx.f24.f64 = double(float(ctx.f25.f64 * ctx.f30.f64 + ctx.f24.f64));
	// fmadds f18,f20,f9,f18
	ctx.f18.f64 = double(float(ctx.f20.f64 * ctx.f9.f64 + ctx.f18.f64));
	// fmuls f15,f29,f28
	ctx.f15.f64 = double(float(ctx.f29.f64 * ctx.f28.f64));
	// fmadds f10,f20,f30,f10
	ctx.f10.f64 = double(float(ctx.f20.f64 * ctx.f30.f64 + ctx.f10.f64));
	// fmadds f17,f30,f28,f17
	ctx.f17.f64 = double(float(ctx.f30.f64 * ctx.f28.f64 + ctx.f17.f64));
	// fmadds f2,f20,f2,f16
	ctx.f2.f64 = double(float(ctx.f20.f64 * ctx.f2.f64 + ctx.f16.f64));
	// fmadds f9,f9,f22,f4
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f22.f64 + ctx.f4.f64));
	// fmuls f4,f25,f8
	ctx.f4.f64 = double(float(ctx.f25.f64 * ctx.f8.f64));
	// fmuls f30,f26,f0
	ctx.f30.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f7,f20,f1,f7
	ctx.f7.f64 = double(float(ctx.f20.f64 * ctx.f1.f64 + ctx.f7.f64));
	// fmuls f30,f24,f0
	ctx.f30.f64 = double(float(ctx.f24.f64 * ctx.f0.f64));
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f30,f19,f0
	ctx.f30.f64 = double(float(ctx.f19.f64 * ctx.f0.f64));
	// stfs f30,104(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f30,f18,f0
	ctx.f30.f64 = double(float(ctx.f18.f64 * ctx.f0.f64));
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f30,f22,f5
	ctx.f30.f64 = double(float(ctx.f22.f64 * ctx.f5.f64));
	// fmuls f24,f3,f22
	ctx.f24.f64 = double(float(ctx.f3.f64 * ctx.f22.f64));
	// lfs f26,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f26.f64 = double(temp.f32);
	// fmsubs f6,f31,f6,f15
	ctx.f6.f64 = double(float(ctx.f31.f64 * ctx.f6.f64 - ctx.f15.f64));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fmsubs f12,f21,f12,f4
	ctx.f12.f64 = double(float(ctx.f21.f64 * ctx.f12.f64 - ctx.f4.f64));
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// fmuls f22,f22,f11
	ctx.f22.f64 = double(float(ctx.f22.f64 * ctx.f11.f64));
	// li r9,8
	ctx.r9.s64 = 8;
	// fmuls f19,f3,f28
	ctx.f19.f64 = double(float(ctx.f3.f64 * ctx.f28.f64));
	// fmuls f8,f23,f8
	ctx.f8.f64 = double(float(ctx.f23.f64 * ctx.f8.f64));
	// fmuls f3,f3,f27
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f27.f64));
	// fmuls f29,f29,f27
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f27.f64));
	// fmuls f18,f28,f5
	ctx.f18.f64 = double(float(ctx.f28.f64 * ctx.f5.f64));
	// fmsubs f4,f27,f26,f30
	ctx.f4.f64 = double(float(ctx.f27.f64 * ctx.f26.f64 - ctx.f30.f64));
	// fmsubs f30,f31,f26,f24
	ctx.f30.f64 = double(float(ctx.f31.f64 * ctx.f26.f64 - ctx.f24.f64));
	// fmuls f24,f23,f6
	ctx.f24.f64 = double(float(ctx.f23.f64 * ctx.f6.f64));
	// fmadds f12,f20,f6,f12
	ctx.f12.f64 = double(float(ctx.f20.f64 * ctx.f6.f64 + ctx.f12.f64));
	// lfs f6,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// fmsubs f28,f28,f26,f22
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f26.f64 - ctx.f22.f64));
	// fmsubs f26,f31,f11,f19
	ctx.f26.f64 = double(float(ctx.f31.f64 * ctx.f11.f64 - ctx.f19.f64));
	// fmsubs f8,f21,f6,f8
	ctx.f8.f64 = double(float(ctx.f21.f64 * ctx.f6.f64 - ctx.f8.f64));
	// fmsubs f5,f31,f5,f3
	ctx.f5.f64 = double(float(ctx.f31.f64 * ctx.f5.f64 - ctx.f3.f64));
	// fmsubs f13,f31,f13,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f13.f64 - ctx.f29.f64));
	// fmsubs f11,f27,f11,f18
	ctx.f11.f64 = double(float(ctx.f27.f64 * ctx.f11.f64 - ctx.f18.f64));
	// fmuls f6,f25,f4
	ctx.f6.f64 = double(float(ctx.f25.f64 * ctx.f4.f64));
	// fmuls f3,f23,f30
	ctx.f3.f64 = double(float(ctx.f23.f64 * ctx.f30.f64));
	// fmsubs f1,f21,f1,f24
	ctx.f1.f64 = double(float(ctx.f21.f64 * ctx.f1.f64 - ctx.f24.f64));
	// fmuls f31,f25,f30
	ctx.f31.f64 = double(float(ctx.f25.f64 * ctx.f30.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f30,f23,f26
	ctx.f30.f64 = double(float(ctx.f23.f64 * ctx.f26.f64));
	// fmuls f29,f17,f0
	ctx.f29.f64 = double(float(ctx.f17.f64 * ctx.f0.f64));
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmsubs f6,f23,f28,f6
	ctx.f6.f64 = double(float(ctx.f23.f64 * ctx.f28.f64 - ctx.f6.f64));
	// fmsubs f4,f21,f4,f3
	ctx.f4.f64 = double(float(ctx.f21.f64 * ctx.f4.f64 - ctx.f3.f64));
	// fmadds f3,f25,f13,f1
	ctx.f3.f64 = double(float(ctx.f25.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmsubs f1,f21,f28,f31
	ctx.f1.f64 = double(float(ctx.f21.f64 * ctx.f28.f64 - ctx.f31.f64));
	// fmadds f13,f20,f13,f8
	ctx.f13.f64 = double(float(ctx.f20.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmsubs f31,f21,f11,f30
	ctx.f31.f64 = double(float(ctx.f21.f64 * ctx.f11.f64 - ctx.f30.f64));
	// fmuls f8,f7,f0
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f8,128(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fneg f9,f9
	ctx.f9.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fneg f8,f29
	ctx.f8.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fneg f8,f2
	ctx.f8.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f11,f20,f11,f6
	ctx.f11.f64 = double(float(ctx.f20.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fmadds f9,f20,f5,f4
	ctx.f9.f64 = double(float(ctx.f20.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fmuls f8,f3,f0
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmadds f7,f20,f26,f1
	ctx.f7.f64 = double(float(ctx.f20.f64 * ctx.f26.f64 + ctx.f1.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmadds f6,f25,f5,f31
	ctx.f6.f64 = double(float(ctx.f25.f64 * ctx.f5.f64 + ctx.f31.f64));
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f12,f9,f0
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fneg f11,f8
	ctx.f11.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmuls f11,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fneg f0,f12
	ctx.f0.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826C8CFC:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x826c8cfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826C8CFC;
loc_826C8D10:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82a6175c
	ctx.lr = 0x826C8D20;
	__restfpr_14(ctx, base);
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

__attribute__((alias("__imp__sub_826C8D38"))) PPC_WEAK_FUNC(sub_826C8D38);
PPC_FUNC_IMPL(__imp__sub_826C8D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82a61748
	ctx.lr = 0x826C8D48;
	__savefpr_28(ctx, base);
	// lfs f0,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f6,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f4,f13,f6
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// lfs f9,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f5,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f11,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f2,f9,f6
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// lfs f3,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f31,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// lfs f1,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f30,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f30.f64 = double(temp.f32);
	// fmsubs f12,f7,f11,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 - ctx.f12.f64));
	// lfs f29,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f29.f64 = double(temp.f32);
	// fmsubs f4,f7,f10,f4
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 - ctx.f4.f64));
	// lfs f28,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// fmsubs f8,f6,f11,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 - ctx.f8.f64));
	// lfs f6,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmsubs f0,f5,f11,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 - ctx.f0.f64));
	// lfs f11,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fmsubs f13,f7,f9,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 - ctx.f13.f64));
	// fmsubs f10,f5,f10,f2
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 - ctx.f2.f64));
	// fmuls f9,f12,f3
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f5,f4,f31
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fmuls f7,f3,f0
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmsubs f9,f1,f8,f9
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 - ctx.f9.f64));
	// fmsubs f0,f1,f0,f12
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 - ctx.f12.f64));
	// fmsubs f12,f31,f8,f7
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f8.f64 - ctx.f7.f64));
	// fmsubs f8,f1,f10,f5
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 - ctx.f5.f64));
	// fmadds f9,f4,f30,f9
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f30.f64 + ctx.f9.f64));
	// fmadds f0,f13,f30,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fmadds f12,f30,f10,f12
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f13,f13,f3,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f8.f64));
	// fmuls f10,f9,f29
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// fmsubs f12,f12,f28,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f28.f64 - ctx.f10.f64));
	// fmadds f0,f0,f6,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f12.f64));
	// fnmsubs f1,f13,f11,f0
	ctx.f1.f64 = double(float(-(ctx.f13.f64 * ctx.f11.f64 - ctx.f0.f64)));
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82a61794
	ctx.lr = 0x826C8E00;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C8E10"))) PPC_WEAK_FUNC(sub_826C8E10);
PPC_FUNC_IMPL(__imp__sub_826C8E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18372
	ctx.r3.s64 = ctx.r11.s64 + -18372;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C8E20"))) PPC_WEAK_FUNC(sub_826C8E20);
PPC_FUNC_IMPL(__imp__sub_826C8E20) {
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
	// beq cr6,0x826c8e58
	if (ctx.cr6.eq) goto loc_826C8E58;
	// bl 0x823aae08
	ctx.lr = 0x826C8E48;
	sub_823AAE08(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826c8e58
	if (!ctx.cr6.eq) goto loc_826C8E58;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826c8e64
	goto loc_826C8E64;
loc_826C8E58:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233ecc8
	ctx.lr = 0x826C8E64;
	sub_8233ECC8(ctx, base);
loc_826C8E64:
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

__attribute__((alias("__imp__sub_826C8E80"))) PPC_WEAK_FUNC(sub_826C8E80);
PPC_FUNC_IMPL(__imp__sub_826C8E80) {
	PPC_FUNC_PROLOGUE();
	// b 0x823aae08
	sub_823AAE08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C8E88"))) PPC_WEAK_FUNC(sub_826C8E88);
PPC_FUNC_IMPL(__imp__sub_826C8E88) {
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
	// li r3,3216
	ctx.r3.s64 = 3216;
	// bl 0x82833108
	ctx.lr = 0x826C8EA8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826c8ee8
	if (ctx.cr0.eq) goto loc_826C8EE8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233edc0
	ctx.lr = 0x826C8EBC;
	sub_8233EDC0(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,21944
	ctx.r11.s64 = ctx.r11.s64 + 21944;
	// addi r10,r10,23132
	ctx.r10.s64 = ctx.r10.s64 + 23132;
	// addi r9,r9,4480
	ctx.r9.s64 = ctx.r9.s64 + 4480;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x826c8eec
	goto loc_826C8EEC;
loc_826C8EE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826C8EEC:
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

__attribute__((alias("__imp__sub_826C8F08"))) PPC_WEAK_FUNC(sub_826C8F08);
PPC_FUNC_IMPL(__imp__sub_826C8F08) {
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
	// bl 0x823aae08
	ctx.lr = 0x826C8F28;
	sub_823AAE08(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826c8f38
	if (!ctx.cr6.eq) goto loc_826C8F38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826c8f50
	goto loc_826C8F50;
loc_826C8F38:
	// bl 0x82394fc8
	ctx.lr = 0x826C8F3C;
	sub_82394FC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826c8f50
	if (ctx.cr6.eq) goto loc_826C8F50;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233eba0
	ctx.lr = 0x826C8F50;
	sub_8233EBA0(ctx, base);
loc_826C8F50:
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

__attribute__((alias("__imp__sub_826C8F68"))) PPC_WEAK_FUNC(sub_826C8F68);
PPC_FUNC_IMPL(__imp__sub_826C8F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,23832(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23832);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826c8fa8
	if (!ctx.cr0.eq) goto loc_826C8FA8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// stw r11,23832(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23832, ctx.r11.u32);
	// addi r3,r9,9628
	ctx.r3.s64 = ctx.r9.s64 + 9628;
	// bl 0x82816528
	ctx.lr = 0x826C8FA0;
	sub_82816528(ctx, base);
	// stw r3,23828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23828, ctx.r3.u32);
	// b 0x826c8fac
	goto loc_826C8FAC;
loc_826C8FA8:
	// lwz r3,23828(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23828);
loc_826C8FAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C8FC0"))) PPC_WEAK_FUNC(sub_826C8FC0);
PPC_FUNC_IMPL(__imp__sub_826C8FC0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826c8f08
	sub_826C8F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C8FC8"))) PPC_WEAK_FUNC(sub_826C8FC8);
PPC_FUNC_IMPL(__imp__sub_826C8FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18328
	ctx.r3.s64 = ctx.r11.s64 + -18328;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C8FD8"))) PPC_WEAK_FUNC(sub_826C8FD8);
PPC_FUNC_IMPL(__imp__sub_826C8FD8) {
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
	// beq cr6,0x826c9010
	if (ctx.cr6.eq) goto loc_826C9010;
	// bl 0x823aaf48
	ctx.lr = 0x826C9000;
	sub_823AAF48(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826c9010
	if (!ctx.cr6.eq) goto loc_826C9010;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826c901c
	goto loc_826C901C;
loc_826C9010:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826bcd80
	ctx.lr = 0x826C901C;
	sub_826BCD80(ctx, base);
loc_826C901C:
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

__attribute__((alias("__imp__sub_826C9038"))) PPC_WEAK_FUNC(sub_826C9038);
PPC_FUNC_IMPL(__imp__sub_826C9038) {
	PPC_FUNC_PROLOGUE();
	// b 0x823aaf48
	sub_823AAF48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C9040"))) PPC_WEAK_FUNC(sub_826C9040);
PPC_FUNC_IMPL(__imp__sub_826C9040) {
	PPC_FUNC_PROLOGUE();
	// b 0x823956c8
	sub_823956C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C9048"))) PPC_WEAK_FUNC(sub_826C9048);
PPC_FUNC_IMPL(__imp__sub_826C9048) {
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
	// li r3,1952
	ctx.r3.s64 = 1952;
	// bl 0x82833108
	ctx.lr = 0x826C9068;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826c90b0
	if (ctx.cr0.eq) goto loc_826C90B0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826bce80
	ctx.lr = 0x826C907C;
	sub_826BCE80(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r11,r11,23336
	ctx.r11.s64 = ctx.r11.s64 + 23336;
	// addi r10,r10,24524
	ctx.r10.s64 = ctx.r10.s64 + 24524;
	// addi r9,r9,-1896
	ctx.r9.s64 = ctx.r9.s64 + -1896;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1936(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1936);
	// stw r11,1936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1936, ctx.r11.u32);
	// b 0x826c90b4
	goto loc_826C90B4;
loc_826C90B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826C90B4:
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

__attribute__((alias("__imp__sub_826C90D0"))) PPC_WEAK_FUNC(sub_826C90D0);
PPC_FUNC_IMPL(__imp__sub_826C90D0) {
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
	// bl 0x823aaf48
	ctx.lr = 0x826C90F0;
	sub_823AAF48(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826c9100
	if (!ctx.cr6.eq) goto loc_826C9100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826c9118
	goto loc_826C9118;
loc_826C9100:
	// bl 0x823956c8
	ctx.lr = 0x826C9104;
	sub_823956C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826c9118
	if (ctx.cr6.eq) goto loc_826C9118;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233eba0
	ctx.lr = 0x826C9118;
	sub_8233EBA0(ctx, base);
loc_826C9118:
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

__attribute__((alias("__imp__sub_826C9130"))) PPC_WEAK_FUNC(sub_826C9130);
PPC_FUNC_IMPL(__imp__sub_826C9130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,16540(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16540);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16360(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16360);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C9150"))) PPC_WEAK_FUNC(sub_826C9150);
PPC_FUNC_IMPL(__imp__sub_826C9150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826C9158;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826be5d8
	ctx.lr = 0x826C9164;
	sub_826BE5D8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// lfs f0,19552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19552);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lfs f12,20528(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20528);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r8,23336
	ctx.r10.s64 = ctx.r8.s64 + 23336;
	// lfs f13,19556(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19556);
	ctx.f13.f64 = double(temp.f32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r7,24524
	ctx.r7.s64 = ctx.r7.s64 + 24524;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r11,r11,-1896
	ctx.r11.s64 = ctx.r11.s64 + -1896;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// addi r3,r10,23184
	ctx.r3.s64 = ctx.r10.s64 + 23184;
	// stw r30,1936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1936, ctx.r30.u32);
	// stw r30,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r30.u32);
	// stw r9,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r9.u32);
	// stw r29,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r29.u32);
	// stw r4,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r4.u32);
	// stw r8,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r8.u32);
	// stw r6,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r6.u32);
	// stw r5,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r5.u32);
	// bl 0x828165a8
	ctx.lr = 0x826C9200;
	sub_828165A8(ctx, base);
	// lis r11,10542
	ctx.r11.s64 = 690880512;
	// lis r10,11431
	ctx.r10.s64 = 749142016;
	// stw r3,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r3.u32);
	// ori r11,r11,44094
	ctx.r11.u64 = ctx.r11.u64 | 44094;
	// stw r30,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r30.u32);
	// ori r10,r10,43150
	ctx.r10.u64 = ctx.r10.u64 | 43150;
	// li r9,128
	ctx.r9.s64 = 128;
	// stw r11,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r11.u32);
	// stw r10,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r10.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r9,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r9.u32);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r3,r10,23264
	ctx.r3.s64 = ctx.r10.s64 + 23264;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r30,r11,1268
	ctx.r30.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x826C9240;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,1580
	ctx.r4.s64 = ctx.r31.s64 + 1580;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// bl 0x823cf190
	ctx.lr = 0x826C9258;
	sub_823CF190(ctx, base);
	// lis r11,-20752
	ctx.r11.s64 = -1360003072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,63730
	ctx.r11.u64 = ctx.r11.u64 | 63730;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C9270"))) PPC_WEAK_FUNC(sub_826C9270);
PPC_FUNC_IMPL(__imp__sub_826C9270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826C9278;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826b9508
	ctx.lr = 0x826C928C;
	sub_826B9508(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f0,24000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1864(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1864, temp.u32);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826c9424
	if (!ctx.cr6.eq) goto loc_826C9424;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x825325c8
	ctx.lr = 0x826C92AC;
	sub_825325C8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x826c9424
	if (ctx.cr0.eq) goto loc_826C9424;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,6940(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 6940);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1924(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1924, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C92D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x826C92DC;
	sub_82414510(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x826c9424
	if (ctx.cr0.eq) goto loc_826C9424;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,1928(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1928);
	// bl 0x824d77f8
	ctx.lr = 0x826C92F0;
	sub_824D77F8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x826c9424
	if (ctx.cr0.eq) goto loc_826C9424;
	// lwz r11,3472(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3472);
	// li r4,200
	ctx.r4.s64 = 200;
	// lwz r10,620(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// li r3,-200
	ctx.r3.s64 = -200;
	// lwz r9,624(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// lwz r8,628(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// bl 0x82825ab8
	ctx.lr = 0x826C9324;
	sub_82825AB8(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// li r4,200
	ctx.r4.s64 = 200;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r3,-200
	ctx.r3.s64 = -200;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f30,f0,f31
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x82825ab8
	ctx.lr = 0x826C9348;
	sub_82825AB8(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// lfs f13,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfs f11,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f8.f64 = double(temp.f32);
	// lfs f1,1504(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	ctx.f1.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f7,580(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 580);
	ctx.f7.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f6,572(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	ctx.f6.f64 = double(temp.f32);
	// addi r5,r31,1632
	ctx.r5.s64 = ctx.r31.s64 + 1632;
	// lfs f5,576(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 576);
	ctx.f5.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f2,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,-32676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32676);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fsubs f11,f12,f8
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f1.f64));
	// fmuls f11,f7,f13
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f9,f6,f13
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r11.u32);
	// stw r9,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r9.u32);
	// stw r10,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r10.u32);
	// bl 0x826c3f20
	ctx.lr = 0x826C940C;
	sub_826C3F20(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
loc_826C9424:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C9438"))) PPC_WEAK_FUNC(sub_826C9438);
PPC_FUNC_IMPL(__imp__sub_826C9438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x826bea18
	ctx.lr = 0x826C9450;
	sub_826BEA18(ctx, base);
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,7608
	ctx.r4.s64 = ctx.r11.s64 + 7608;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C946C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C9480"))) PPC_WEAK_FUNC(sub_826C9480);
PPC_FUNC_IMPL(__imp__sub_826C9480) {
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
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x826beb40
	ctx.lr = 0x826C94A8;
	sub_826BEB40(ctx, base);
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// addi r4,r11,7608
	ctx.r4.s64 = ctx.r11.s64 + 7608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C94C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c94fc
	if (!ctx.cr0.eq) goto loc_826C94FC;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// lfs f1,1924(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1924);
	ctx.f1.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,7608
	ctx.r11.s64 = ctx.r11.s64 + 7608;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c1c30
	ctx.lr = 0x826C94FC;
	sub_826C1C30(ctx, base);
loc_826C94FC:
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

__attribute__((alias("__imp__sub_826C9518"))) PPC_WEAK_FUNC(sub_826C9518);
PPC_FUNC_IMPL(__imp__sub_826C9518) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826c90d0
	sub_826C90D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C9520"))) PPC_WEAK_FUNC(sub_826C9520);
PPC_FUNC_IMPL(__imp__sub_826C9520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x828b3760
	ctx.lr = 0x826C9538;
	sub_828B3760(ctx, base);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r10,r10,-30752
	ctx.r10.s64 = ctx.r10.s64 + -30752;
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r9,r9,-29584
	ctx.r9.s64 = ctx.r9.s64 + -29584;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r8,-29532
	ctx.r8.s64 = ctx.r8.s64 + -29532;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r10,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r10.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,2176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2176, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,2180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2180, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,2184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2184, ctx.r11.u32);
	// stw r11,2188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2188, ctx.r11.u32);
	// stw r11,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r11.u32);
	// stw r10,2196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2196, ctx.r10.u32);
	// stw r11,2200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2200, ctx.r11.u32);
	// stw r11,2204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2204, ctx.r11.u32);
	// stw r11,2208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2208, ctx.r11.u32);
	// stw r11,2212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2212, ctx.r11.u32);
	// stw r11,2192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2192, ctx.r11.u32);
	// stw r9,2888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2888, ctx.r9.u32);
	// stw r11,2892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2892, ctx.r11.u32);
	// stw r11,2896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2896, ctx.r11.u32);
	// stw r11,2900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2900, ctx.r11.u32);
	// stw r11,2904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2904, ctx.r11.u32);
	// stw r11,2884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2884, ctx.r11.u32);
	// stw r10,2912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2912, ctx.r10.u32);
	// stw r11,2916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2916, ctx.r11.u32);
	// stw r11,2920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2920, ctx.r11.u32);
	// stw r11,2924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2924, ctx.r11.u32);
	// stw r11,2928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2928, ctx.r11.u32);
	// stw r11,2908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2908, ctx.r11.u32);
	// stw r10,2936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2936, ctx.r10.u32);
	// stw r11,2940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2940, ctx.r11.u32);
	// stw r11,2944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2944, ctx.r11.u32);
	// stw r11,2948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2948, ctx.r11.u32);
	// stw r11,2952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2952, ctx.r11.u32);
	// stw r11,2932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2932, ctx.r11.u32);
	// stw r10,2960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2960, ctx.r10.u32);
	// stw r11,2964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2964, ctx.r11.u32);
	// stw r11,2968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2968, ctx.r11.u32);
	// stw r11,2972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2972, ctx.r11.u32);
	// stw r11,2976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2976, ctx.r11.u32);
	// stw r11,2956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2956, ctx.r11.u32);
	// stw r10,2984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2984, ctx.r10.u32);
	// stw r11,2988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2988, ctx.r11.u32);
	// stw r11,2992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2992, ctx.r11.u32);
	// stw r11,2996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2996, ctx.r11.u32);
	// stw r11,3000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3000, ctx.r11.u32);
	// stw r11,2980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2980, ctx.r11.u32);
	// stw r10,3056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3056, ctx.r10.u32);
	// stw r11,3060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3060, ctx.r11.u32);
	// stw r11,3064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3064, ctx.r11.u32);
	// stw r11,3068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3068, ctx.r11.u32);
	// stw r11,3072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3072, ctx.r11.u32);
	// stw r11,3052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3052, ctx.r11.u32);
	// stw r11,2816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2816, ctx.r11.u32);
	// stw r11,2728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2728, ctx.r11.u32);
	// stw r8,2820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2820, ctx.r8.u32);
	// stw r7,2752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2752, ctx.r7.u32);
	// stw r11,2740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2740, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C9660"))) PPC_WEAK_FUNC(sub_826C9660);
PPC_FUNC_IMPL(__imp__sub_826C9660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826c9698
	if (ctx.cr6.eq) goto loc_826C9698;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x826C9690;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x826C9694;
	sub_82409C40(ctx, base);
	// b 0x826c969c
	goto loc_826C969C;
loc_826C9698:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826C969C:
	// bl 0x82438130
	ctx.lr = 0x826C96A0;
	sub_82438130(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826c96bc
	if (ctx.cr0.eq) goto loc_826C96BC;
	// lwz r11,1924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1924);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826c96bc
	if (!ctx.cr6.eq) goto loc_826C96BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1924(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1924, ctx.r11.u32);
loc_826C96BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b3b30
	ctx.lr = 0x826C96C4;
	sub_828B3B30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C96D8"))) PPC_WEAK_FUNC(sub_826C96D8);
PPC_FUNC_IMPL(__imp__sub_826C96D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// stw r4,2788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2788, ctx.r4.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r6,r11,-21636
	ctx.r6.s64 = ctx.r11.s64 + -21636;
	// addi r4,r9,-16760
	ctx.r4.s64 = ctx.r9.s64 + -16760;
	// beq cr6,0x826c9740
	if (ctx.cr6.eq) goto loc_826C9740;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r5,r10,24600
	ctx.r5.s64 = ctx.r10.s64 + 24600;
	// b 0x826c9748
	goto loc_826C9748;
loc_826C9740:
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r5,r10,24644
	ctx.r5.s64 = ctx.r10.s64 + 24644;
loc_826C9748:
	// bl 0x828db5e0
	ctx.lr = 0x826C974C;
	sub_828DB5E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82400b48
	ctx.lr = 0x826C9758;
	sub_82400B48(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x826C9760;
	sub_82333960(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r31,2832
	ctx.r5.s64 = ctx.r31.s64 + 2832;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C977C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x826C9784;
	sub_82333960(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C9798"))) PPC_WEAK_FUNC(sub_826C9798);
PPC_FUNC_IMPL(__imp__sub_826C9798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x826C97A0;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x826d1d78
	ctx.lr = 0x826C97C4;
	sub_826D1D78(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r28,16104(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16104);
	// cmpwi cr6,r28,201
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 201, ctx.xer);
	// beq cr6,0x826c9fec
	if (ctx.cr6.eq) goto loc_826C9FEC;
	// lwz r11,2840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2840);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826c9fec
	if (!ctx.cr6.eq) goto loc_826C9FEC;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826c9808
	if (ctx.cr6.eq) goto loc_826C9808;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x826C9800;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x826C9804;
	sub_82409C40(ctx, base);
	// b 0x826c980c
	goto loc_826C980C;
loc_826C9808:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_826C980C:
	// bl 0x82438130
	ctx.lr = 0x826C9810;
	sub_82438130(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,2808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2808, ctx.r3.u32);
	// beq 0x826c9fdc
	if (ctx.cr0.eq) goto loc_826C9FDC;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r11,504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826c983c
	if (!ctx.cr6.eq) goto loc_826C983C;
	// lwz r11,2768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2768);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826c983c
	if (!ctx.cr6.eq) goto loc_826C983C;
	// bl 0x82640340
	ctx.lr = 0x826C983C;
	sub_82640340(ctx, base);
loc_826C983C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,2796(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2796);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r29,13060(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13060);
	// bne cr6,0x826c9b74
	if (!ctx.cr6.eq) goto loc_826C9B74;
	// lwz r11,2792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2792);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826c9b74
	if (!ctx.cr6.eq) goto loc_826C9B74;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826c9b74
	if (ctx.cr6.eq) goto loc_826C9B74;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r11,1356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826c9b74
	if (!ctx.cr6.eq) goto loc_826C9B74;
	// lwz r11,2808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2808);
	// lwz r11,1968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c9b74
	if (ctx.cr6.eq) goto loc_826C9B74;
	// lwz r10,1516(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1516);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826c989c
	if (!ctx.cr6.eq) goto loc_826C989C;
	// lwz r11,2824(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c9b74
	if (ctx.cr6.eq) goto loc_826C9B74;
loc_826C989C:
	// cmpwi cr6,r28,206
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 206, ctx.xer);
	// beq cr6,0x826c9b74
	if (ctx.cr6.eq) goto loc_826C9B74;
	// cmpwi cr6,r28,207
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 207, ctx.xer);
	// beq cr6,0x826c9b74
	if (ctx.cr6.eq) goto loc_826C9B74;
	// lwz r11,1564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826c9b74
	if (!ctx.cr6.eq) goto loc_826C9B74;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826c9b74
	if (!ctx.cr6.eq) goto loc_826C9B74;
	// lwz r11,1576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826c9b74
	if (!ctx.cr6.eq) goto loc_826C9B74;
	// lwz r11,932(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 932);
	// rlwinm. r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826c98f4
	if (ctx.cr0.eq) goto loc_826C98F4;
	// rlwinm r10,r11,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,932(r29)
	PPC_STORE_U32(ctx.r29.u32 + 932, ctx.r10.u32);
	// beq 0x826c9938
	if (ctx.cr0.eq) goto loc_826C9938;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,932(r29)
	PPC_STORE_U32(ctx.r29.u32 + 932, ctx.r11.u32);
loc_826C98F4:
	// lwz r11,932(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 932);
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826c99c0
	if (ctx.cr0.eq) goto loc_826C99C0;
	// lwz r10,13024(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r10,504(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 504);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826c99c0
	if (!ctx.cr6.eq) goto loc_826C99C0;
	// lwz r10,2752(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2752);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826c99c0
	if (ctx.cr6.eq) goto loc_826C99C0;
	// lwz r3,2808(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2808);
	// lwz r11,3604(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3604);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c99b8
	if (ctx.cr6.eq) goto loc_826C99B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8263f400
	ctx.lr = 0x826C9934;
	sub_8263F400(ctx, base);
	// b 0x826c9b74
	goto loc_826C9B74;
loc_826C9938:
	// lwz r11,2796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c9950
	if (ctx.cr6.eq) goto loc_826C9950;
	// lwz r11,2772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2772);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826c9b74
	if (!ctx.cr6.eq) goto loc_826C9B74;
loc_826C9950:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,13024(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r11,504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c997c
	if (ctx.cr6.eq) goto loc_826C997C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f1,-32460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32460);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82824260
	ctx.lr = 0x826C9974;
	sub_82824260(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x826c998c
	goto loc_826C998C;
loc_826C997C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f1,18304(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18304);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82824260
	ctx.lr = 0x826C9988;
	sub_82824260(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
loc_826C998C:
	// lwz r3,13024(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// bl 0x8282a2b0
	ctx.lr = 0x826C9994;
	sub_8282A2B0(ctx, base);
	// lwz r11,1756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1756);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c99b0
	if (ctx.cr6.eq) goto loc_826C99B0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826ca090
	ctx.lr = 0x826C99AC;
	sub_826CA090(ctx, base);
	// b 0x826c9b74
	goto loc_826C9B74;
loc_826C99B0:
	// stw r26,2812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2812, ctx.r26.u32);
	// b 0x826c9b74
	goto loc_826C9B74;
loc_826C99B8:
	// bl 0x8263f348
	ctx.lr = 0x826C99BC;
	sub_8263F348(ctx, base);
	// b 0x826c9b74
	goto loc_826C9B74;
loc_826C99C0:
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826c9a4c
	if (ctx.cr0.eq) goto loc_826C9A4C;
	// lwz r10,13024(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r10,504(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 504);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826c9a4c
	if (!ctx.cr6.eq) goto loc_826C9A4C;
	// lwz r10,2752(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2752);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826c9a4c
	if (ctx.cr6.eq) goto loc_826C9A4C;
	// lwz r11,2756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2756);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c9a20
	if (ctx.cr6.eq) goto loc_826C9A20;
	// bl 0x826d1d78
	ctx.lr = 0x826C99F8;
	sub_826D1D78(ctx, base);
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-2496
	ctx.r7.s64 = ctx.r11.s64 + -2496;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,3020
	ctx.r5.s64 = ctx.r31.s64 + 3020;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82614738
	ctx.lr = 0x826C9A18;
	sub_82614738(ctx, base);
	// stw r25,2756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2756, ctx.r25.u32);
	// b 0x826c9b74
	goto loc_826C9B74;
loc_826C9A20:
	// bl 0x826d1d78
	ctx.lr = 0x826C9A24;
	sub_826D1D78(ctx, base);
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-2496
	ctx.r7.s64 = ctx.r11.s64 + -2496;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,3020
	ctx.r5.s64 = ctx.r31.s64 + 3020;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82614738
	ctx.lr = 0x826C9A44;
	sub_82614738(ctx, base);
	// stw r26,2756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2756, ctx.r26.u32);
	// b 0x826c9b74
	goto loc_826C9B74;
loc_826C9A4C:
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826c9b74
	if (ctx.cr0.eq) goto loc_826C9B74;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r11,504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826c9b74
	if (!ctx.cr6.eq) goto loc_826C9B74;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828e0ad0
	ctx.lr = 0x826C9A70;
	sub_828E0AD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c9b74
	if (!ctx.cr0.eq) goto loc_826C9B74;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,13024(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82824308
	ctx.lr = 0x826C9A88;
	sub_82824308(ctx, base);
	// lwz r11,2808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2808);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c9b74
	if (ctx.cr6.eq) goto loc_826C9B74;
	// lwz r10,1968(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826c9b74
	if (ctx.cr6.eq) goto loc_826C9B74;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C9AB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826c9b74
	if (ctx.cr0.eq) goto loc_826C9B74;
	// lwz r11,2808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2808);
	// lwz r10,1676(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1676);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826c9ae0
	if (ctx.cr6.eq) goto loc_826C9AE0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C9AE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826C9AE0:
	// lwz r11,2868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2868);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826c9af8
	if (!ctx.cr6.eq) goto loc_826C9AF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d1690
	ctx.lr = 0x826C9AF4;
	sub_826D1690(ctx, base);
	// b 0x826c9b74
	goto loc_826C9B74;
loc_826C9AF8:
	// lwz r11,2808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2808);
	// lwz r11,3424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826c9b74
	if (!ctx.cr6.eq) goto loc_826C9B74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826cb388
	ctx.lr = 0x826C9B10;
	sub_826CB388(ctx, base);
	// lwz r3,13024(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r25,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r25.u32);
	// lwz r11,420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82827bd0
	ctx.lr = 0x826C9B28;
	sub_82827BD0(ctx, base);
	// lwz r3,13024(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r11,420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,632(r3)
	PPC_STORE_U32(ctx.r3.u32 + 632, ctx.r11.u32);
	// bl 0x8282a2b0
	ctx.lr = 0x826C9B40;
	sub_8282A2B0(ctx, base);
	// stw r26,2792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2792, ctx.r26.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b5200
	ctx.lr = 0x826C9B50;
	sub_828B5200(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x826C9B60;
	sub_8233A258(ctx, base);
	// lis r4,10465
	ctx.r4.s64 = 685834240;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,30687
	ctx.r4.u64 = ctx.r4.u64 | 30687;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x826C9B74;
	sub_829C3740(ctx, base);
loc_826C9B74:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r11,504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c9d10
	if (ctx.cr6.eq) goto loc_826C9D10;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828e0ad0
	ctx.lr = 0x826C9B90;
	sub_828E0AD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c9bdc
	if (!ctx.cr0.eq) goto loc_826C9BDC;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x826C9BA4;
	sub_82409BE0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x826c9bdc
	if (ctx.cr0.eq) goto loc_826C9BDC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r23,r31,2828
	ctx.r23.s64 = ctx.r31.s64 + 2828;
	// bl 0x824a52b8
	ctx.lr = 0x826C9BBC;
	sub_824A52B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1156);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C9BD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826C9BDC;
	sub_82333960(ctx, base);
loc_826C9BDC:
	// lwz r11,2796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c9ca4
	if (ctx.cr6.eq) goto loc_826C9CA4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826c9ca4
	if (ctx.cr6.eq) goto loc_826C9CA4;
	// lwz r10,932(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 932);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826c9ca4
	if (ctx.cr0.eq) goto loc_826C9CA4;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,932(r29)
	PPC_STORE_U32(ctx.r29.u32 + 932, ctx.r10.u32);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826c9c24
	if (ctx.cr6.eq) goto loc_826C9C24;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x826C9C1C;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x826C9C20;
	sub_82409C40(ctx, base);
	// b 0x826c9c28
	goto loc_826C9C28;
loc_826C9C24:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_826C9C28:
	// bl 0x82438130
	ctx.lr = 0x826C9C2C;
	sub_82438130(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x826c9c4c
	if (ctx.cr0.eq) goto loc_826C9C4C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8263f6b8
	ctx.lr = 0x826C9C3C;
	sub_8263F6B8(ctx, base);
	// lwz r11,1412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1412);
	// stw r26,1516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1516, ctx.r26.u32);
	// lwz r11,1412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1412);
	// stw r26,1520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1520, ctx.r26.u32);
loc_826C9C4C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,13024(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82824308
	ctx.lr = 0x826C9C5C;
	sub_82824308(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,13024(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// bl 0x8282a2b0
	ctx.lr = 0x826C9C68;
	sub_8282A2B0(ctx, base);
	// lwz r11,2768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2768);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c9c9c
	if (ctx.cr6.eq) goto loc_826C9C9C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-5280
	ctx.r4.s64 = ctx.r11.s64 + -5280;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C9C90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,2800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2800, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826ceb60
	ctx.lr = 0x826C9C9C;
	sub_826CEB60(ctx, base);
loc_826C9C9C:
	// stw r25,2796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2796, ctx.r25.u32);
	// stw r25,2800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2800, ctx.r25.u32);
loc_826C9CA4:
	// lwz r11,2796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826c9d10
	if (!ctx.cr6.eq) goto loc_826C9D10;
	// lwz r11,2792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2792);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826c9d10
	if (!ctx.cr6.eq) goto loc_826C9D10;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826c9d10
	if (ctx.cr6.eq) goto loc_826C9D10;
	// lwz r11,932(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 932);
	// rlwinm. r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826c9d10
	if (ctx.cr0.eq) goto loc_826C9D10;
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,932(r29)
	PPC_STORE_U32(ctx.r29.u32 + 932, ctx.r10.u32);
	// beq 0x826c9cec
	if (ctx.cr0.eq) goto loc_826C9CEC;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,932(r29)
	PPC_STORE_U32(ctx.r29.u32 + 932, ctx.r11.u32);
	// b 0x826c9d10
	goto loc_826C9D10;
loc_826C9CEC:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,13024(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82824308
	ctx.lr = 0x826C9CFC;
	sub_82824308(ctx, base);
	// cmpwi cr6,r28,206
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 206, ctx.xer);
	// beq cr6,0x826c9d10
	if (ctx.cr6.eq) goto loc_826C9D10;
	// cmpwi cr6,r28,207
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 207, ctx.xer);
	// beq cr6,0x826c9d10
	if (ctx.cr6.eq) goto loc_826C9D10;
	// stw r26,2812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2812, ctx.r26.u32);
loc_826C9D10:
	// lwz r11,2764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2764);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c9d74
	if (ctx.cr6.eq) goto loc_826C9D74;
	// bl 0x828e0ad0
	ctx.lr = 0x826C9D28;
	sub_828E0AD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c9d5c
	if (!ctx.cr0.eq) goto loc_826C9D5C;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r10,1356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1356);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826c9d5c
	if (!ctx.cr6.eq) goto loc_826C9D5C;
	// lwz r10,520(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826c9d5c
	if (!ctx.cr6.eq) goto loc_826C9D5C;
	// lwz r10,504(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826c9efc
	if (ctx.cr6.eq) goto loc_826C9EFC;
	// b 0x826c9d60
	goto loc_826C9D60;
loc_826C9D5C:
	// stw r26,2792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2792, ctx.r26.u32);
loc_826C9D60:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826cb2a8
	ctx.lr = 0x826C9D6C;
	sub_826CB2A8(ctx, base);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// b 0x826c9efc
	goto loc_826C9EFC;
loc_826C9D74:
	// bl 0x828e0ad0
	ctx.lr = 0x826C9D78;
	sub_828E0AD0(ctx, base);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826c9ef8
	if (!ctx.cr0.eq) goto loc_826C9EF8;
	// lwz r10,1356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1356);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826c9ef8
	if (!ctx.cr6.eq) goto loc_826C9EF8;
	// lwz r10,520(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826c9ef8
	if (!ctx.cr6.eq) goto loc_826C9EF8;
	// lwz r10,504(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826c9ef0
	if (!ctx.cr6.eq) goto loc_826C9EF0;
	// lwz r10,2812(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2812);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826c9ef0
	if (!ctx.cr6.eq) goto loc_826C9EF0;
	// stw r26,2764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2764, ctx.r26.u32);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826c9dd4
	if (ctx.cr6.eq) goto loc_826C9DD4;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x826C9DCC;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x826C9DD0;
	sub_82409C40(ctx, base);
	// b 0x826c9dd8
	goto loc_826C9DD8;
loc_826C9DD4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_826C9DD8:
	// bl 0x82438130
	ctx.lr = 0x826C9DDC;
	sub_82438130(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x826c9eec
	if (ctx.cr0.eq) goto loc_826C9EEC;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,10548(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x82439c68
	ctx.lr = 0x826C9DF4;
	sub_82439C68(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826c9e5c
	if (!ctx.cr6.gt) goto loc_826C9E5C;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r30,108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
loc_826C9E10:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c9e50
	if (ctx.cr6.eq) goto loc_826C9E50;
	// lwz r10,10408(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10408);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826c9e50
	if (ctx.cr6.eq) goto loc_826C9E50;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r10,r10,-6032
	ctx.r10.s64 = ctx.r10.s64 + -6032;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82611658
	ctx.lr = 0x826C9E50;
	sub_82611658(ctx, base);
loc_826C9E50:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x826c9e10
	if (!ctx.cr0.eq) goto loc_826C9E10;
loc_826C9E5C:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r10,3420(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3420);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,23664(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23664);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x826c9e98
	if (ctx.cr6.eq) goto loc_826C9E98;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r11,r11,-2608
	ctx.r11.s64 = ctx.r11.s64 + -2608;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826436e8
	ctx.lr = 0x826C9E98;
	sub_826436E8(ctx, base);
loc_826C9E98:
	// lwz r11,3416(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c9ecc
	if (ctx.cr6.eq) goto loc_826C9ECC;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r11,r11,-2112
	ctx.r11.s64 = ctx.r11.s64 + -2112;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826436e8
	ctx.lr = 0x826C9ECC;
	sub_826436E8(ctx, base);
loc_826C9ECC:
	// lwz r11,2760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2760);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c9ee4
	if (ctx.cr6.eq) goto loc_826C9EE4;
	// stw r25,2760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2760, ctx.r25.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8263f348
	ctx.lr = 0x826C9EE4;
	sub_8263F348(ctx, base);
loc_826C9EE4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239d768
	ctx.lr = 0x826C9EEC;
	sub_8239D768(ctx, base);
loc_826C9EEC:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
loc_826C9EF0:
	// stw r25,2792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2792, ctx.r25.u32);
	// b 0x826c9efc
	goto loc_826C9EFC;
loc_826C9EF8:
	// stw r26,2792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2792, ctx.r26.u32);
loc_826C9EFC:
	// lwz r10,2812(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2812);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826c9f28
	if (ctx.cr6.eq) goto loc_826C9F28;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C9F24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
loc_826C9F28:
	// lwz r11,1316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c9fcc
	if (ctx.cr6.eq) goto loc_826C9FCC;
	// lwz r11,5612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,2776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2776);
	// ble cr6,0x826c9fa0
	if (!ctx.cr6.gt) goto loc_826C9FA0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826c9fcc
	if (!ctx.cr6.eq) goto loc_826C9FCC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,25548
	ctx.r4.s64 = ctx.r10.s64 + 25548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C9F6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,2776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2776, ctx.r26.u32);
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r10,r10,32336
	ctx.r10.s64 = ctx.r10.s64 + 32336;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfs f1,24724(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24724);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826d1dd8
	ctx.lr = 0x826C9F9C;
	sub_826D1DD8(ctx, base);
	// b 0x826c9fcc
	goto loc_826C9FCC;
loc_826C9FA0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c9fcc
	if (ctx.cr6.eq) goto loc_826C9FCC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,25528
	ctx.r4.s64 = ctx.r10.s64 + 25528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C9FC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,2776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2776, ctx.r25.u32);
loc_826C9FCC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,2808(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2808);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826cb090
	ctx.lr = 0x826C9FDC;
	sub_826CB090(ctx, base);
loc_826C9FDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x826caa80
	ctx.lr = 0x826C9FE8;
	sub_826CAA80(ctx, base);
	// b 0x826ca038
	goto loc_826CA038;
loc_826C9FEC:
	// lwz r11,2836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2836);
	// cmpwi cr6,r11,201
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 201, ctx.xer);
	// beq cr6,0x826ca020
	if (ctx.cr6.eq) goto loc_826CA020;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,201
	ctx.r10.s64 = 201;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// stw r10,2836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2836, ctx.r10.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,26556
	ctx.r4.s64 = ctx.r9.s64 + 26556;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CA020;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826CA020:
	// lwz r11,2764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2764);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ca038
	if (ctx.cr6.eq) goto loc_826CA038;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826cb2a8
	ctx.lr = 0x826CA038;
	sub_826CB2A8(ctx, base);
loc_826CA038:
	// lwz r11,2764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2764);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ca048
	if (ctx.cr6.eq) goto loc_826CA048;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
loc_826CA048:
	// lwz r11,1536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// beq cr6,0x826ca058
	if (ctx.cr6.eq) goto loc_826CA058;
	// stw r24,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r24.u32);
loc_826CA058:
	// lwz r11,2728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826ca070
	if (!ctx.cr6.eq) goto loc_826CA070;
	// stw r26,2728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2728, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826d1940
	ctx.lr = 0x826CA070;
	sub_826D1940(ctx, base);
loc_826CA070:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x828b3c30
	ctx.lr = 0x826CA07C;
	sub_828B3C30(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CA090"))) PPC_WEAK_FUNC(sub_826CA090);
PPC_FUNC_IMPL(__imp__sub_826CA090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x826CA098;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r11,2808(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2808);
	// lwz r10,1676(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1676);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826ca0cc
	if (ctx.cr6.eq) goto loc_826CA0CC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CA0CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826CA0CC:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r3,2808(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2808);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f31,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x826ca4d0
	if (ctx.cr6.eq) goto loc_826CA4D0;
	// lwz r11,1968(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826ca4d0
	if (ctx.cr6.eq) goto loc_826CA4D0;
	// bl 0x82640188
	ctx.lr = 0x826CA0F4;
	sub_82640188(ctx, base);
	// lwz r11,2808(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2808);
	// lwz r3,1968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// bl 0x8260bff0
	ctx.lr = 0x826CA100;
	sub_8260BFF0(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,24692
	ctx.r3.s64 = ctx.r11.s64 + 24692;
	// bl 0x82816528
	ctx.lr = 0x826CA10C;
	sub_82816528(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82975348
	ctx.lr = 0x826CA118;
	sub_82975348(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x826ca47c
	if (ctx.cr0.eq) goto loc_826CA47C;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// addi r31,r11,-21636
	ctx.r31.s64 = ctx.r11.s64 + -21636;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// addi r30,r10,-16760
	ctx.r30.s64 = ctx.r10.s64 + -16760;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,24708
	ctx.r5.s64 = ctx.r11.s64 + 24708;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828db5e0
	ctx.lr = 0x826CA16C;
	sub_828DB5E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400b48
	ctx.lr = 0x826CA178;
	sub_82400B48(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x826CA180;
	sub_82333960(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r27,r11,7896
	ctx.r27.s64 = ctx.r11.s64 + 7896;
	// bne cr6,0x826ca19c
	if (!ctx.cr6.eq) goto loc_826CA19C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_826CA19C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826d2c98
	ctx.lr = 0x826CA1A4;
	sub_826D2C98(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,24768
	ctx.r5.s64 = ctx.r11.s64 + 24768;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828db5e0
	ctx.lr = 0x826CA1C4;
	sub_828DB5E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400b48
	ctx.lr = 0x826CA1D0;
	sub_82400B48(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x826CA1D8;
	sub_82333960(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826ca1ec
	if (!ctx.cr6.eq) goto loc_826CA1EC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_826CA1EC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826d2c98
	ctx.lr = 0x826CA1F4;
	sub_826D2C98(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,24828
	ctx.r5.s64 = ctx.r11.s64 + 24828;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828db5e0
	ctx.lr = 0x826CA214;
	sub_828DB5E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400b48
	ctx.lr = 0x826CA220;
	sub_82400B48(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x826CA228;
	sub_82333960(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826ca23c
	if (!ctx.cr6.eq) goto loc_826CA23C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_826CA23C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826d2c98
	ctx.lr = 0x826CA244;
	sub_826D2C98(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,24880
	ctx.r5.s64 = ctx.r11.s64 + 24880;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828db5e0
	ctx.lr = 0x826CA264;
	sub_828DB5E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400b48
	ctx.lr = 0x826CA270;
	sub_82400B48(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x826CA278;
	sub_82333960(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826ca28c
	if (!ctx.cr6.eq) goto loc_826CA28C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_826CA28C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826d2c98
	ctx.lr = 0x826CA294;
	sub_826D2C98(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,24936
	ctx.r5.s64 = ctx.r11.s64 + 24936;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828db5e0
	ctx.lr = 0x826CA2B4;
	sub_828DB5E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400b48
	ctx.lr = 0x826CA2C0;
	sub_82400B48(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x826CA2C8;
	sub_82333960(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826ca2dc
	if (!ctx.cr6.eq) goto loc_826CA2DC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_826CA2DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826d2c98
	ctx.lr = 0x826CA2E4;
	sub_826D2C98(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,25004
	ctx.r5.s64 = ctx.r11.s64 + 25004;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828db5e0
	ctx.lr = 0x826CA304;
	sub_828DB5E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400b48
	ctx.lr = 0x826CA310;
	sub_82400B48(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x826CA318;
	sub_82333960(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826ca32c
	if (!ctx.cr6.eq) goto loc_826CA32C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_826CA32C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826d2c98
	ctx.lr = 0x826CA334;
	sub_826D2C98(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,25052
	ctx.r5.s64 = ctx.r11.s64 + 25052;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828db5e0
	ctx.lr = 0x826CA354;
	sub_828DB5E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400b48
	ctx.lr = 0x826CA360;
	sub_82400B48(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x826CA368;
	sub_82333960(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826ca37c
	if (!ctx.cr6.eq) goto loc_826CA37C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_826CA37C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826d2c98
	ctx.lr = 0x826CA384;
	sub_826D2C98(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,25108
	ctx.r5.s64 = ctx.r11.s64 + 25108;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828db5e0
	ctx.lr = 0x826CA3A4;
	sub_828DB5E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400b48
	ctx.lr = 0x826CA3B0;
	sub_82400B48(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x826CA3B8;
	sub_82333960(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826ca3cc
	if (!ctx.cr6.eq) goto loc_826CA3CC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_826CA3CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826d2c98
	ctx.lr = 0x826CA3D4;
	sub_826D2C98(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,25164
	ctx.r5.s64 = ctx.r11.s64 + 25164;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828db5e0
	ctx.lr = 0x826CA3F4;
	sub_828DB5E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400b48
	ctx.lr = 0x826CA400;
	sub_82400B48(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x826CA408;
	sub_82333960(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826ca41c
	if (!ctx.cr6.eq) goto loc_826CA41C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_826CA41C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826d2c98
	ctx.lr = 0x826CA424;
	sub_826D2C98(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,25220
	ctx.r5.s64 = ctx.r11.s64 + 25220;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828db5e0
	ctx.lr = 0x826CA444;
	sub_828DB5E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400b48
	ctx.lr = 0x826CA450;
	sub_82400B48(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x826CA458;
	sub_82333960(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826ca46c
	if (!ctx.cr6.eq) goto loc_826CA46C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_826CA46C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826d2c98
	ctx.lr = 0x826CA474;
	sub_826D2C98(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826CA47C;
	sub_82333960(ctx, base);
loc_826CA47C:
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r31,r26,8
	ctx.r31.s64 = ctx.r26.s64 + 8;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r11,r11,-9720
	ctx.r11.s64 = ctx.r11.s64 + -9720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826d1dd8
	ctx.lr = 0x826CA4A8;
	sub_826D1DD8(ctx, base);
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r11,r11,-19576
	ctx.r11.s64 = ctx.r11.s64 + -19576;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826d1dd8
	ctx.lr = 0x826CA4D0;
	sub_826D1DD8(ctx, base);
loc_826CA4D0:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bne cr6,0x826ca51c
	if (!ctx.cr6.eq) goto loc_826CA51C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-16148
	ctx.r4.s64 = ctx.r10.s64 + -16148;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CA4F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x826CA508;
	sub_8233A258(ctx, base);
	// lis r4,3000
	ctx.r4.s64 = 196608000;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,24693
	ctx.r4.u64 = ctx.r4.u64 | 24693;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x829c3740
	ctx.lr = 0x826CA51C;
	sub_829C3740(ctx, base);
loc_826CA51C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f31,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r28,1756(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1756, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f13,17676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17676);
	ctx.f13.f64 = double(temp.f32);
	// li r5,36
	ctx.r5.s64 = 36;
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r30,13024(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r31,100(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r3,r31,1412
	ctx.r3.s64 = ctx.r31.s64 + 1412;
	// bl 0x82a4ea80
	ctx.lr = 0x826CA570;
	sub_82A4EA80(ctx, base);
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,-9208
	ctx.r11.s64 = ctx.r11.s64 + -9208;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r29,r26,8
	ctx.r29.s64 = ctx.r26.s64 + 8;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f0,30996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r9.u32);
	// stfs f0,1448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1448, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f0,1452(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1452, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,2786(r26)
	PPC_STORE_U8(ctx.r26.u32 + 2786, ctx.r11.u8);
	// bl 0x826d1dd8
	ctx.lr = 0x826CA5C8;
	sub_826D1DD8(ctx, base);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r10,r10,-8784
	ctx.r10.s64 = ctx.r10.s64 + -8784;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,2785(r26)
	PPC_STORE_U8(ctx.r26.u32 + 2785, ctx.r11.u8);
	// bl 0x826d1dd8
	ctx.lr = 0x826CA608;
	sub_826D1DD8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CA618"))) PPC_WEAK_FUNC(sub_826CA618);
PPC_FUNC_IMPL(__imp__sub_826CA618) {
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
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x826d1d78
	ctx.lr = 0x826CA634;
	sub_826D1D78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r5,r31,2152
	ctx.r5.s64 = ctx.r31.s64 + 2152;
	// addi r7,r10,-2496
	ctx.r7.s64 = ctx.r10.s64 + -2496;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82614738
	ctx.lr = 0x826CA658;
	sub_82614738(ctx, base);
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

__attribute__((alias("__imp__sub_826CA670"))) PPC_WEAK_FUNC(sub_826CA670);
PPC_FUNC_IMPL(__imp__sub_826CA670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,25272
	ctx.r4.s64 = ctx.r10.s64 + 25272;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CA6A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-23016
	ctx.r10.s64 = ctx.r10.s64 + -23016;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lfs f1,-27300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826d1dd8
	ctx.lr = 0x826CA6D0;
	sub_826D1DD8(ctx, base);
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

__attribute__((alias("__imp__sub_826CA6E8"))) PPC_WEAK_FUNC(sub_826CA6E8);
PPC_FUNC_IMPL(__imp__sub_826CA6E8) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,25288
	ctx.r4.s64 = ctx.r11.s64 + 25288;
	// lwz r5,2820(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2820);
	// bl 0x82816c30
	ctx.lr = 0x826CA714;
	sub_82816C30(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8249d188
	ctx.lr = 0x826CA724;
	sub_8249D188(ctx, base);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r30,r11,7896
	ctx.r30.s64 = ctx.r11.s64 + 7896;
	// bne cr6,0x826ca740
	if (!ctx.cr6.eq) goto loc_826CA740;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_826CA740:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r6,r11,-21636
	ctx.r6.s64 = ctx.r11.s64 + -21636;
	// addi r4,r10,-16760
	ctx.r4.s64 = ctx.r10.s64 + -16760;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x828db5e0
	ctx.lr = 0x826CA760;
	sub_828DB5E0(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ca774
	if (ctx.cr6.eq) goto loc_826CA774;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x826ca778
	goto loc_826CA778;
loc_826CA774:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_826CA778:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8249cc38
	ctx.lr = 0x826CA780;
	sub_8249CC38(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x826CA788;
	sub_82333960(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8277b938
	ctx.lr = 0x826CA794;
	sub_8277B938(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x826d1d78
	ctx.lr = 0x826CA79C;
	sub_826D1D78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r10,-2496
	ctx.r7.s64 = ctx.r10.s64 + -2496;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r31,2152
	ctx.r5.s64 = ctx.r31.s64 + 2152;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82614738
	ctx.lr = 0x826CA7C0;
	sub_82614738(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,25332
	ctx.r4.s64 = ctx.r11.s64 + 25332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CA7E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// addi r4,r31,2824
	ctx.r4.s64 = ctx.r31.s64 + 2824;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CA7F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x8277cf90
	ctx.lr = 0x826CA804;
	sub_8277CF90(ctx, base);
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-22928
	ctx.r10.s64 = ctx.r10.s64 + -22928;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lfs f1,-11456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11456);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826d1dd8
	ctx.lr = 0x826CA834;
	sub_826D1DD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8249cbb0
	ctx.lr = 0x826CA844;
	sub_8249CBB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8249d108
	ctx.lr = 0x826CA854;
	sub_8249D108(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x826CA85C;
	sub_82333960(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
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

__attribute__((alias("__imp__sub_826CA878"))) PPC_WEAK_FUNC(sub_826CA878);
PPC_FUNC_IMPL(__imp__sub_826CA878) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2844(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2844);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CA890"))) PPC_WEAK_FUNC(sub_826CA890);
PPC_FUNC_IMPL(__imp__sub_826CA890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826CA898;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// rlwinm r27,r28,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,2992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2992);
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x826ca8c4
	if (!ctx.cr6.eq) goto loc_826CA8C4;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x826ca9c4
	if (ctx.cr6.eq) goto loc_826CA9C4;
loc_826CA8C4:
	// stwx r29,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r29.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// beq cr6,0x826ca8fc
	if (ctx.cr6.eq) goto loc_826CA8FC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r5,r11,25348
	ctx.r5.s64 = ctx.r11.s64 + 25348;
	// b 0x826ca904
	goto loc_826CA904;
loc_826CA8FC:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r5,r11,25356
	ctx.r5.s64 = ctx.r11.s64 + 25356;
loc_826CA904:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r28,1
	ctx.r6.s64 = ctx.r28.s64 + 1;
	// addi r4,r11,25364
	ctx.r4.s64 = ctx.r11.s64 + 25364;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82816c30
	ctx.lr = 0x826CA918;
	sub_82816C30(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82400b48
	ctx.lr = 0x826CA924;
	sub_82400B48(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x826CA92C;
	sub_82333960(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823339b8
	ctx.lr = 0x826CA93C;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1040(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1040);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CA954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x826ca9b0
	if (!ctx.cr6.eq) goto loc_826CA9B0;
	// lwz r11,2896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2896);
	// mulli r29,r28,24
	ctx.r29.s64 = ctx.r28.s64 * 24;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ca988
	if (ctx.cr6.eq) goto loc_826CA988;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82332c38
	ctx.lr = 0x826CA988;
	sub_82332C38(ctx, base);
loc_826CA988:
	// lwz r11,2896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2896);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r4,r10,7896
	ctx.r4.s64 = ctx.r10.s64 + 7896;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x824099b8
	ctx.lr = 0x826CA99C;
	sub_824099B8(ctx, base);
	// lwz r11,2944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2944);
	// stwx r30,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r30.u32);
	// lwz r11,2968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2968);
	// stwx r30,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r30.u32);
	// b 0x826ca9bc
	goto loc_826CA9BC;
loc_826CA9B0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,-27300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2880(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2880, temp.u32);
loc_826CA9BC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x826CA9C4;
	sub_82333960(ctx, base);
loc_826CA9C4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CA9D0"))) PPC_WEAK_FUNC(sub_826CA9D0);
PPC_FUNC_IMPL(__imp__sub_826CA9D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826CA9D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-17336
	ctx.r3.s64 = ctx.r11.s64 + -17336;
	// bl 0x82816528
	ctx.lr = 0x826CA9E8;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x826CA9EC;
	sub_828E0D10(ctx, base);
	// bl 0x82438370
	ctx.lr = 0x826CA9F0;
	sub_82438370(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826caa78
	if (ctx.cr0.eq) goto loc_826CAA78;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// lwz r29,80(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,11408
	ctx.r11.s64 = ctx.r11.s64 + 11408;
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82833108
	ctx.lr = 0x826CAA18;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826caa64
	if (ctx.cr0.eq) goto loc_826CAA64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x826CAA28;
	sub_82833180(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r10,r10,-32272
	ctx.r10.s64 = ctx.r10.s64 + -32272;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// ori r9,r9,47806
	ctx.r9.u64 = ctx.r9.u64 | 47806;
	// li r8,1
	ctx.r8.s64 = 1;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// b 0x826caa68
	goto loc_826CAA68;
loc_826CAA64:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_826CAA68:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x826CAA78;
	sub_82833A30(ctx, base);
loc_826CAA78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CAA80"))) PPC_WEAK_FUNC(sub_826CAA80);
PPC_FUNC_IMPL(__imp__sub_826CAA80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d4
	ctx.lr = 0x826CAA88;
	__savegprlr_15(ctx, base);
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r30,912(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// bl 0x826d1d78
	ctx.lr = 0x826CAAAC;
	sub_826D1D78(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826cadc4
	if (ctx.cr6.eq) goto loc_826CADC4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826cadc4
	if (ctx.cr6.eq) goto loc_826CADC4;
	// lwz r11,2876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2876);
	// li r17,0
	ctx.r17.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826caad8
	if (!ctx.cr6.eq) goto loc_826CAAD8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r17,1
	ctx.r17.s64 = 1;
	// stw r11,2876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2876, ctx.r11.u32);
loc_826CAAD8:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,2880(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2880);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x826cab14
	if (!ctx.cr6.gt) goto loc_826CAB14;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x826cab00
	if (!ctx.cr6.gt) goto loc_826CAB00;
	// stfs f0,2880(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2880, temp.u32);
	// b 0x826cab04
	goto loc_826CAB04;
loc_826CAB00:
	// stfs f13,2880(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2880, temp.u32);
loc_826CAB04:
	// lfs f0,2880(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2880);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x826cab14
	if (!ctx.cr6.eq) goto loc_826CAB14;
	// li r17,1
	ctx.r17.s64 = 1;
loc_826CAB14:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CAB2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r15,16(r22)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 1, ctx.xer);
	// ble cr6,0x826cad58
	if (!ctx.cr6.gt) goto loc_826CAD58;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r25,88
	ctx.r25.s64 = 88;
	// lis r21,-31949
	ctx.r21.s64 = -2093809664;
	// addi r16,r11,7896
	ctx.r16.s64 = ctx.r11.s64 + 7896;
	// addi r19,r10,25444
	ctx.r19.s64 = ctx.r10.s64 + 25444;
	// addi r18,r9,25404
	ctx.r18.s64 = ctx.r9.s64 + 25404;
loc_826CAB68:
	// lwz r11,2896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2896);
	// lwz r10,12(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// add r10,r25,r10
	ctx.r10.u64 = ctx.r25.u64 + ctx.r10.u64;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826cab8c
	if (ctx.cr6.eq) goto loc_826CAB8C;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x826cab90
	goto loc_826CAB90;
loc_826CAB8C:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
loc_826CAB90:
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// bl 0x82a4cc80
	ctx.lr = 0x826CAB98;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826caba8
	if (!ctx.cr0.eq) goto loc_826CABA8;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x826cabf0
	if (ctx.cr6.eq) goto loc_826CABF0;
loc_826CABA8:
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// lwz r10,2896(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2896);
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r3,r23,r10
	ctx.r3.u64 = ctx.r23.u64 + ctx.r10.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x824099b8
	ctx.lr = 0x826CABC0;
	sub_824099B8(ctx, base);
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r30,2920(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2920);
	// bl 0x828165a8
	ctx.lr = 0x826CABD4;
	sub_828165A8(ctx, base);
	// stwx r3,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r3.u32);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r24,-1
	ctx.r4.s64 = ctx.r24.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r20,1
	ctx.r20.s64 = 1;
	// bl 0x826ca890
	ctx.lr = 0x826CABF0;
	sub_826CA890(ctx, base);
loc_826CABF0:
	// lwz r11,2920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2920);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,10548(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 10548);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r26,r29,r11
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82439c68
	ctx.lr = 0x826CAC10;
	sub_82439C68(ctx, base);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826cac54
	if (!ctx.cr6.gt) goto loc_826CAC54;
	// lwz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
loc_826CAC24:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826cac3c
	if (ctx.cr6.eq) goto loc_826CAC3C;
	// lwz r7,8620(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8620);
	// cmplw cr6,r7,r26
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x826cac50
	if (ctx.cr6.eq) goto loc_826CAC50;
loc_826CAC3C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826cac24
	if (ctx.cr6.lt) goto loc_826CAC24;
	// b 0x826cac54
	goto loc_826CAC54;
loc_826CAC50:
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
loc_826CAC54:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8239d768
	ctx.lr = 0x826CAC5C;
	sub_8239D768(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826cacb8
	if (ctx.cr6.eq) goto loc_826CACB8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CAC78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x826cacb4
	if (ctx.cr0.eq) goto loc_826CACB4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CAC98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mulli r10,r3,100
	ctx.r10.s64 = ctx.r3.s64 * 100;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r27,r10,r28
	ctx.r27.s32 = ctx.r10.s32 / ctx.r28.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r28,0
	// andc r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
loc_826CACB4:
	// lwz r28,2184(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2184);
loc_826CACB8:
	// lwz r11,2968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2968);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x826cacd0
	if (!ctx.cr6.eq) goto loc_826CACD0;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x826cacd8
	if (ctx.cr6.eq) goto loc_826CACD8;
loc_826CACD0:
	// stwx r28,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r28.u32);
	// li r20,1
	ctx.r20.s64 = 1;
loc_826CACD8:
	// lwz r11,2944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2944);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x826cacf0
	if (!ctx.cr6.eq) goto loc_826CACF0;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x826cad40
	if (ctx.cr6.eq) goto loc_826CAD40;
loc_826CACF0:
	// stwx r27,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r27.u32);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82816c30
	ctx.lr = 0x826CAD04;
	sub_82816C30(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82816c30
	ctx.lr = 0x826CAD14;
	sub_82816C30(ctx, base);
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x826cd3e0
	ctx.lr = 0x826CAD30;
	sub_826CD3E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x826CAD38;
	sub_82333960(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x826CAD40;
	sub_82333960(ctx, base);
loc_826CAD40:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,88
	ctx.r25.s64 = ctx.r25.s64 + 88;
	// addi r23,r23,24
	ctx.r23.s64 = ctx.r23.s64 + 24;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r24,r15
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r15.s32, ctx.xer);
	// blt cr6,0x826cab68
	if (ctx.cr6.lt) goto loc_826CAB68;
loc_826CAD58:
	// cmpwi cr6,r15,2
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 2, ctx.xer);
	// bge cr6,0x826cad9c
	if (!ctx.cr6.lt) goto loc_826CAD9C;
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 1, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// bgt cr6,0x826cad70
	if (ctx.cr6.gt) goto loc_826CAD70;
	// li r11,1
	ctx.r11.s64 = 1;
loc_826CAD70:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x826cad9c
	if (!ctx.cr6.lt) goto loc_826CAD9C;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
loc_826CAD7C:
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826ca890
	ctx.lr = 0x826CAD90;
	sub_826CA890(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// blt cr6,0x826cad7c
	if (ctx.cr6.lt) goto loc_826CAD7C;
loc_826CAD9C:
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// bne cr6,0x826cadc4
	if (!ctx.cr6.eq) goto loc_826CADC4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,26556
	ctx.r4.s64 = ctx.r10.s64 + 26556;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CADC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826CADC4:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x82a4ea24
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CADD0"))) PPC_WEAK_FUNC(sub_826CADD0);
PPC_FUNC_IMPL(__imp__sub_826CADD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826CADD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3068(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3068);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x826caf1c
	if (!ctx.cr6.lt) goto loc_826CAF1C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x826caea0
	if (ctx.cr6.eq) goto loc_826CAEA0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x826cae54
	if (ctx.cr6.eq) goto loc_826CAE54;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f0,30264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30264);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f13,17812(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17812);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,19532(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19532);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// b 0x826caef0
	goto loc_826CAEF0;
loc_826CAE54:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,19528(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19528);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// b 0x826caef0
	goto loc_826CAEF0;
loc_826CAEA0:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,19524(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19524);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,19520(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19520);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// stw r8,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r8.u32);
loc_826CAEF0:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r30,3064(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3064);
	// rlwinm r31,r4,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,25508
	ctx.r3.s64 = ctx.r11.s64 + 25508;
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// bl 0x82816528
	ctx.lr = 0x826CAF08;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829831f8
	ctx.lr = 0x826CAF1C;
	sub_829831F8(ctx, base);
loc_826CAF1C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CAF28"))) PPC_WEAK_FUNC(sub_826CAF28);
PPC_FUNC_IMPL(__imp__sub_826CAF28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826CAF30;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x826d1d78
	ctx.lr = 0x826CAF40;
	sub_826D1D78(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r29,r11,-2496
	ctx.r29.s64 = ctx.r11.s64 + -2496;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r5,r31,3024
	ctx.r5.s64 = ctx.r31.s64 + 3024;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82614738
	ctx.lr = 0x826CAF68;
	sub_82614738(ctx, base);
	// lwz r11,2760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2760);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826caf98
	if (!ctx.cr6.eq) goto loc_826CAF98;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// stw r30,2760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2760, ctx.r30.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,25520
	ctx.r4.s64 = ctx.r10.s64 + 25520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CAF98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826CAF98:
	// lwz r11,2808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2808);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826cafd4
	if (ctx.cr6.eq) goto loc_826CAFD4;
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-19840
	ctx.r10.s64 = ctx.r10.s64 + -19840;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lfs f1,20416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20416);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826d1dd8
	ctx.lr = 0x826CAFD4;
	sub_826D1DD8(ctx, base);
loc_826CAFD4:
	// lwz r11,2756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2756);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826cb008
	if (ctx.cr6.eq) goto loc_826CB008;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x826d1d78
	ctx.lr = 0x826CAFE8;
	sub_826D1D78(ctx, base);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,3020
	ctx.r5.s64 = ctx.r31.s64 + 3020;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82614738
	ctx.lr = 0x826CB004;
	sub_82614738(ctx, base);
	// stw r30,2756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2756, ctx.r30.u32);
loc_826CB008:
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826cb02c
	if (ctx.cr6.eq) goto loc_826CB02C;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x826CB024;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x826CB028;
	sub_82409C40(ctx, base);
	// b 0x826cb030
	goto loc_826CB030;
loc_826CB02C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826CB030:
	// bl 0x82438130
	ctx.lr = 0x826CB034;
	sub_82438130(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r11,1316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826cb050
	if (ctx.cr6.eq) goto loc_826CB050;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826cb198
	ctx.lr = 0x826CB050;
	sub_826CB198(ctx, base);
loc_826CB050:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,2808(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2808);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826cb090
	ctx.lr = 0x826CB060;
	sub_826CB090(ctx, base);
	// bl 0x826ca9d0
	ctx.lr = 0x826CB064;
	sub_826CA9D0(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lis r4,11414
	ctx.r4.s64 = 748027904;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,36752
	ctx.r4.u64 = ctx.r4.u64 | 36752;
	// lwz r3,904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CB088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CB090"))) PPC_WEAK_FUNC(sub_826CB090);
PPC_FUNC_IMPL(__imp__sub_826CB090) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,1316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826cb144
	if (ctx.cr6.eq) goto loc_826CB144;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826cb144
	if (ctx.cr6.eq) goto loc_826CB144;
	// lwz r10,1968(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1968);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826cb144
	if (ctx.cr6.eq) goto loc_826CB144;
	// lwz r11,5604(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5604);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826cb144
	if (ctx.cr6.eq) goto loc_826CB144;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,362
	ctx.r4.s64 = 362;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CB0F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x826cb144
	if (!ctx.cr6.gt) goto loc_826CB144;
	// lwz r11,2780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2780);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826cb11c
	if (ctx.cr6.eq) goto loc_826CB11C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x826cb180
	if (ctx.cr6.eq) goto loc_826CB180;
loc_826CB11C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,25568
	ctx.r4.s64 = ctx.r10.s64 + 25568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CB13C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x826cb17c
	goto loc_826CB17C;
loc_826CB144:
	// lwz r11,2780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2780);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826cb158
	if (!ctx.cr6.eq) goto loc_826CB158;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x826cb180
	if (ctx.cr6.eq) goto loc_826CB180;
loc_826CB158:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,25576
	ctx.r4.s64 = ctx.r10.s64 + 25576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CB178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_826CB17C:
	// stw r11,2780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2780, ctx.r11.u32);
loc_826CB180:
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

__attribute__((alias("__imp__sub_826CB198"))) PPC_WEAK_FUNC(sub_826CB198);
PPC_FUNC_IMPL(__imp__sub_826CB198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,1316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// lwz r11,5612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,2776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2776);
	// ble cr6,0x826cb234
	if (!ctx.cr6.gt) goto loc_826CB234;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826cb1d8
	if (ctx.cr6.eq) goto loc_826CB1D8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826cb26c
	if (ctx.cr6.eq) goto loc_826CB26C;
loc_826CB1D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,25548
	ctx.r4.s64 = ctx.r10.s64 + 25548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CB1F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r11,2776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2776, ctx.r11.u32);
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,32336
	ctx.r11.s64 = ctx.r11.s64 + 32336;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lfs f1,24724(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24724);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826d1dd8
	ctx.lr = 0x826CB230;
	sub_826D1DD8(ctx, base);
	// b 0x826cb26c
	goto loc_826CB26C;
loc_826CB234:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826cb244
	if (!ctx.cr6.eq) goto loc_826CB244;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826cb26c
	if (ctx.cr6.eq) goto loc_826CB26C;
loc_826CB244:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,25528
	ctx.r4.s64 = ctx.r10.s64 + 25528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CB264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2776, ctx.r11.u32);
loc_826CB26C:
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

