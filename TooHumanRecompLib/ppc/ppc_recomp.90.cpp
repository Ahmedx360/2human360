#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_826688A0"))) PPC_WEAK_FUNC(sub_826688A0);
PPC_FUNC_IMPL(__imp__sub_826688A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826688A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8265c840
	ctx.lr = 0x826688B4;
	sub_8265C840(ctx, base);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// addi r9,r9,-25048
	ctx.r9.s64 = ctx.r9.s64 + -25048;
	// lis r7,-32224
	ctx.r7.s64 = -2111832064;
	// lfs f0,24088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24088);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r8,-23376
	ctx.r10.s64 = ctx.r8.s64 + -23376;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r11,30
	ctx.r11.s64 = 30;
	// addi r8,r7,-23324
	ctx.r8.s64 = ctx.r7.s64 + -23324;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stfs f0,1892(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1892, temp.u32);
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r11.u32);
	// addi r3,r31,2020
	ctx.r3.s64 = ctx.r31.s64 + 2020;
	// stw r11,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r11.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r9.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823327e0
	ctx.lr = 0x82668918;
	sub_823327E0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// bl 0x82a455d0
	ctx.lr = 0x82668928;
	sub_82A455D0(ctx, base);
	// lwz r11,2032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r3,r31,1684
	ctx.r3.s64 = ctx.r31.s64 + 1684;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823327e0
	ctx.lr = 0x8266894C;
	sub_823327E0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x82a455d0
	ctx.lr = 0x8266895C;
	sub_82A455D0(ctx, base);
	// addi r3,r31,1708
	ctx.r3.s64 = ctx.r31.s64 + 1708;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823327e0
	ctx.lr = 0x82668974;
	sub_823327E0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// bl 0x82a455d0
	ctx.lr = 0x82668984;
	sub_82A455D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1732
	ctx.r3.s64 = ctx.r31.s64 + 1732;
	// bl 0x82510b28
	ctx.lr = 0x82668994;
	sub_82510B28(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1756
	ctx.r3.s64 = ctx.r31.s64 + 1756;
	// bl 0x82510b28
	ctx.lr = 0x826689A4;
	sub_82510B28(ctx, base);
	// addi r3,r31,1660
	ctx.r3.s64 = ctx.r31.s64 + 1660;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823327e0
	ctx.lr = 0x826689BC;
	sub_823327E0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// bl 0x82a455d0
	ctx.lr = 0x826689CC;
	sub_82A455D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2144
	ctx.r3.s64 = ctx.r31.s64 + 2144;
	// bl 0x82510b28
	ctx.lr = 0x826689DC;
	sub_82510B28(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,30360
	ctx.r3.s64 = ctx.r11.s64 + 30360;
	// lwz r30,1696(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x82816528
	ctx.lr = 0x826689EC;
	sub_82816528(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r30,r11,24660
	ctx.r30.s64 = ctx.r11.s64 + 24660;
	// lwz r11,24664(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24664);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82668a28
	if (!ctx.cr0.eq) goto loc_82668A28;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,476
	ctx.r9.s64 = ctx.r9.s64 + 476;
	// stw r11,24664(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24664, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26784
	ctx.r3.s64 = ctx.r11.s64 + 26784;
	// bl 0x82a4c758
	ctx.lr = 0x82668A28;
	sub_82A4C758(ctx, base);
loc_82668A28:
	// lwz r11,1720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r6,-31949
	ctx.r6.s64 = -2093809664;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lfs f0,20452(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20452);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// lfs f0,17308(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17308);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,1672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// lfs f0,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,2156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,13024(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13024);
	// lis r5,-20793
	ctx.r5.s64 = -1362690048;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// ori r5,r5,6395
	ctx.r5.u64 = ctx.r5.u64 | 6395;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x82668A8C;
	sub_823CF190(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,2188
	ctx.r3.s64 = ctx.r31.s64 + 2188;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82510b80
	ctx.lr = 0x82668AA8;
	sub_82510B80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82668AB8"))) PPC_WEAK_FUNC(sub_82668AB8);
PPC_FUNC_IMPL(__imp__sub_82668AB8) {
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
	// bl 0x8265cda8
	ctx.lr = 0x82668AD4;
	sub_8265CDA8(ctx, base);
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82668af4
	if (ctx.cr0.eq) goto loc_82668AF4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82668af4
	if (ctx.cr6.eq) goto loc_82668AF4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82668af8
	goto loc_82668AF8;
loc_82668AF4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82668AF8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-8628
	ctx.r3.s64 = ctx.r11.s64 + -8628;
	// bl 0x82816528
	ctx.lr = 0x82668B04;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,30360
	ctx.r3.s64 = ctx.r11.s64 + 30360;
	// bl 0x82816528
	ctx.lr = 0x82668B14;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x828d0cb0
	ctx.lr = 0x82668B24;
	sub_828D0CB0(ctx, base);
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

__attribute__((alias("__imp__sub_82668B40"))) PPC_WEAK_FUNC(sub_82668B40);
PPC_FUNC_IMPL(__imp__sub_82668B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-25108
	ctx.r3.s64 = ctx.r11.s64 + -25108;
	// b 0x828165a8
	sub_828165A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82668B50"))) PPC_WEAK_FUNC(sub_82668B50);
PPC_FUNC_IMPL(__imp__sub_82668B50) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-21208
	ctx.r3.s64 = -1389887488;
	// ori r3,r3,57174
	ctx.r3.u64 = ctx.r3.u64 | 57174;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82668B60"))) PPC_WEAK_FUNC(sub_82668B60);
PPC_FUNC_IMPL(__imp__sub_82668B60) {
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
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x826604f8
	ctx.lr = 0x82668B90;
	sub_826604F8(ctx, base);
	// bl 0x823be170
	ctx.lr = 0x82668B94;
	sub_823BE170(ctx, base);
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
	ctx.lr = 0x82668BAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82668bb8
	if (!ctx.cr0.eq) goto loc_82668BB8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82668BB8:
	// stw r31,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82668BD8"))) PPC_WEAK_FUNC(sub_82668BD8);
PPC_FUNC_IMPL(__imp__sub_82668BD8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1508);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82668BF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x824ea6e0
	ctx.lr = 0x82668BF8;
	sub_824EA6E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82668C08"))) PPC_WEAK_FUNC(sub_82668C08);
PPC_FUNC_IMPL(__imp__sub_82668C08) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,3280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82668c48
	if (!ctx.cr6.gt) goto loc_82668C48;
loc_82668C30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82660b50
	ctx.lr = 0x82668C38;
	sub_82660B50(ctx, base);
	// lwz r11,3280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82668c30
	if (ctx.cr6.lt) goto loc_82668C30;
loc_82668C48:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828a2dd0
	ctx.lr = 0x82668C54;
	sub_828A2DD0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1668);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82668C68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828a18c0
	ctx.lr = 0x82668C70;
	sub_828A18C0(ctx, base);
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

__attribute__((alias("__imp__sub_82668C88"))) PPC_WEAK_FUNC(sub_82668C88);
PPC_FUNC_IMPL(__imp__sub_82668C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,32636(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32636);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82668cc8
	if (!ctx.cr0.eq) goto loc_82668CC8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,32636(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32636, ctx.r11.u32);
	// addi r3,r9,-5148
	ctx.r3.s64 = ctx.r9.s64 + -5148;
	// bl 0x82816528
	ctx.lr = 0x82668CC0;
	sub_82816528(ctx, base);
	// stw r3,32632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32632, ctx.r3.u32);
	// b 0x82668ccc
	goto loc_82668CCC;
loc_82668CC8:
	// lwz r3,32632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32632);
loc_82668CCC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82668CE0"))) PPC_WEAK_FUNC(sub_82668CE0);
PPC_FUNC_IMPL(__imp__sub_82668CE0) {
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
	// bl 0x823c6fc0
	ctx.lr = 0x82668D00;
	sub_823C6FC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82668D14;
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

__attribute__((alias("__imp__sub_82668D30"))) PPC_WEAK_FUNC(sub_82668D30);
PPC_FUNC_IMPL(__imp__sub_82668D30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82668830
	sub_82668830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82668D38"))) PPC_WEAK_FUNC(sub_82668D38);
PPC_FUNC_IMPL(__imp__sub_82668D38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82668830
	sub_82668830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82668D40"))) PPC_WEAK_FUNC(sub_82668D40);
PPC_FUNC_IMPL(__imp__sub_82668D40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826687d0
	sub_826687D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82668D48"))) PPC_WEAK_FUNC(sub_82668D48);
PPC_FUNC_IMPL(__imp__sub_82668D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-23300
	ctx.r3.s64 = ctx.r11.s64 + -23300;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82668D58"))) PPC_WEAK_FUNC(sub_82668D58);
PPC_FUNC_IMPL(__imp__sub_82668D58) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82668d90
	if (ctx.cr6.eq) goto loc_82668D90;
	// bl 0x8266b820
	ctx.lr = 0x82668D80;
	sub_8266B820(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82668d90
	if (!ctx.cr6.eq) goto loc_82668D90;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82668da8
	goto loc_82668DA8;
loc_82668D90:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8234d398
	ctx.lr = 0x82668DA8;
	sub_8234D398(ctx, base);
loc_82668DA8:
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

__attribute__((alias("__imp__sub_82668DC0"))) PPC_WEAK_FUNC(sub_82668DC0);
PPC_FUNC_IMPL(__imp__sub_82668DC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8266b820
	sub_8266B820(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82668DC8"))) PPC_WEAK_FUNC(sub_82668DC8);
PPC_FUNC_IMPL(__imp__sub_82668DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82833108
	ctx.lr = 0x82668DE4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82668dfc
	if (ctx.cr0.eq) goto loc_82668DFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// bl 0x82668e88
	ctx.lr = 0x82668DF8;
	sub_82668E88(ctx, base);
	// b 0x82668e00
	goto loc_82668E00;
loc_82668DFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82668E00:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82668e14
	if (ctx.cr6.eq) goto loc_82668E14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82668E14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82668E28"))) PPC_WEAK_FUNC(sub_82668E28);
PPC_FUNC_IMPL(__imp__sub_82668E28) {
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
	// bl 0x8266b820
	ctx.lr = 0x82668E48;
	sub_8266B820(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82668e58
	if (!ctx.cr6.eq) goto loc_82668E58;
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// b 0x82668e70
	goto loc_82668E70;
loc_82668E58:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8234d468
	ctx.lr = 0x82668E70;
	sub_8234D468(ctx, base);
loc_82668E70:
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

__attribute__((alias("__imp__sub_82668E88"))) PPC_WEAK_FUNC(sub_82668E88);
PPC_FUNC_IMPL(__imp__sub_82668E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82668E90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r11,r11,13764
	ctx.r11.s64 = ctx.r11.s64 + 13764;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r10,15084
	ctx.r10.s64 = ctx.r10.s64 + 15084;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r9,r9,-26776
	ctx.r9.s64 = ctx.r9.s64 + -26776;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82668edc
	if (ctx.cr6.eq) goto loc_82668EDC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82668EDC:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82404518
	ctx.lr = 0x82668EE4;
	sub_82404518(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82668ef4
	if (!ctx.cr6.eq) goto loc_82668EF4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82668f00
	goto loc_82668F00;
loc_82668EF4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82668F00:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// addi r9,r9,27424
	ctx.r9.s64 = ctx.r9.s64 + 27424;
	// addi r8,r8,27600
	ctx.r8.s64 = ctx.r8.s64 + 27600;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r9,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r9.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bne cr6,0x82668f44
	if (!ctx.cr6.eq) goto loc_82668F44;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82668f50
	goto loc_82668F50;
loc_82668F44:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82668F50:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r8,76(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// addi r10,r10,13144
	ctx.r10.s64 = ctx.r10.s64 + 13144;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r7,13216
	ctx.r8.s64 = ctx.r7.s64 + 13216;
	// addi r7,r6,13392
	ctx.r7.s64 = ctx.r6.s64 + 13392;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lwz r8,76(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lis r6,-32224
	ctx.r6.s64 = -2111832064;
	// addi r5,r10,-23016
	ctx.r5.s64 = ctx.r10.s64 + -23016;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r6,r6,-22840
	ctx.r6.s64 = ctx.r6.s64 + -22840;
	// addi r4,r10,-22784
	ctx.r4.s64 = ctx.r10.s64 + -22784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r5,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stwx r4,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82668FE8"))) PPC_WEAK_FUNC(sub_82668FE8);
PPC_FUNC_IMPL(__imp__sub_82668FE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82668FF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8265c840
	ctx.lr = 0x82668FFC;
	sub_8265C840(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-32496
	ctx.r11.s64 = ctx.r11.s64 + -32496;
	// addi r10,r10,-30808
	ctx.r10.s64 = ctx.r10.s64 + -30808;
	// addi r9,r9,-20876
	ctx.r9.s64 = ctx.r9.s64 + -20876;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1684
	ctx.r3.s64 = ctx.r31.s64 + 1684;
	// bl 0x823327e0
	ctx.lr = 0x82669038;
	sub_823327E0(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r29,r11,29568
	ctx.r29.s64 = ctx.r11.s64 + 29568;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,1696(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x82816528
	ctx.lr = 0x8266904C;
	sub_82816528(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,1696(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x82816528
	ctx.lr = 0x8266905C;
	sub_82816528(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,1696(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x82816528
	ctx.lr = 0x8266906C;
	sub_82816528(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,1696(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x82816528
	ctx.lr = 0x8266907C;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,16356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16356);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,1660
	ctx.r3.s64 = ctx.r31.s64 + 1660;
	// stfs f0,1852(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1852, temp.u32);
	// bl 0x823327e0
	ctx.lr = 0x826690A4;
	sub_823327E0(ctx, base);
	// lwz r11,1672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// li r29,1
	ctx.r29.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2020
	ctx.r3.s64 = ctx.r31.s64 + 2020;
	// lwz r11,1672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// stb r29,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r29.u8);
	// lwz r11,1672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// stb r29,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r29.u8);
	// lwz r11,1672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// stb r29,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r29.u8);
	// stw r30,3300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3300, ctx.r30.u32);
	// stw r30,3304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3304, ctx.r30.u32);
	// stw r30,3380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3380, ctx.r30.u32);
	// stw r30,3384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3384, ctx.r30.u32);
	// bl 0x823327e0
	ctx.lr = 0x826690F4;
	sub_823327E0(ctx, base);
	// lwz r11,2032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,2032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r11,2032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// lwz r11,2032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// bl 0x82333900
	ctx.lr = 0x8266911C;
	sub_82333900(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8266913c
	if (ctx.cr0.eq) goto loc_8266913C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// addi r11,r11,15852
	ctx.r11.s64 = ctx.r11.s64 + 15852;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x8312e7dc
	ctx.lr = 0x82669138;
	sub_8312E7DC(ctx, base);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8266913C:
	// stw r30,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,1084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1084, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82669150"))) PPC_WEAK_FUNC(sub_82669150);
PPC_FUNC_IMPL(__imp__sub_82669150) {
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
	// bl 0x8265cda8
	ctx.lr = 0x8266916C;
	sub_8265CDA8(ctx, base);
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266918c
	if (ctx.cr0.eq) goto loc_8266918C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8266918c
	if (ctx.cr6.eq) goto loc_8266918C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82669190
	goto loc_82669190;
loc_8266918C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82669190:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-10416
	ctx.r3.s64 = ctx.r11.s64 + -10416;
	// bl 0x82816528
	ctx.lr = 0x8266919C;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,30360
	ctx.r3.s64 = ctx.r11.s64 + 30360;
	// bl 0x82816528
	ctx.lr = 0x826691AC;
	sub_82816528(ctx, base);
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x826691C0;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-10492
	ctx.r3.s64 = ctx.r11.s64 + -10492;
	// bl 0x82816528
	ctx.lr = 0x826691CC;
	sub_82816528(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-23268
	ctx.r3.s64 = ctx.r11.s64 + -23268;
	// bl 0x82816528
	ctx.lr = 0x826691DC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x826691EC;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-10452
	ctx.r3.s64 = ctx.r11.s64 + -10452;
	// bl 0x82816528
	ctx.lr = 0x826691F8;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,32348
	ctx.r3.s64 = ctx.r11.s64 + 32348;
	// bl 0x82816528
	ctx.lr = 0x82669208;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x82669218;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-10376
	ctx.r3.s64 = ctx.r11.s64 + -10376;
	// bl 0x82816528
	ctx.lr = 0x82669224;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,28548
	ctx.r3.s64 = ctx.r11.s64 + 28548;
	// bl 0x82816528
	ctx.lr = 0x82669234;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x82669244;
	sub_828D0CB0(ctx, base);
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

__attribute__((alias("__imp__sub_82669260"))) PPC_WEAK_FUNC(sub_82669260);
PPC_FUNC_IMPL(__imp__sub_82669260) {
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
	// bl 0x8265cb60
	ctx.lr = 0x8266927C;
	sub_8265CB60(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r4,r31,2888
	ctx.r4.s64 = ctx.r31.s64 + 2888;
	// addi r30,r11,-23252
	ctx.r30.s64 = ctx.r11.s64 + -23252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x824f9968
	ctx.lr = 0x8266929C;
	sub_824F9968(ctx, base);
	// addi r4,r31,2892
	ctx.r4.s64 = ctx.r31.s64 + 2892;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x824f9968
	ctx.lr = 0x826692B4;
	sub_824F9968(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r4,r31,2896
	ctx.r4.s64 = ctx.r31.s64 + 2896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-23228
	ctx.r5.s64 = ctx.r11.s64 + -23228;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824f5fd8
	ctx.lr = 0x826692D0;
	sub_824F5FD8(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r4,r31,2900
	ctx.r4.s64 = ctx.r31.s64 + 2900;
	// addi r5,r11,-23196
	ctx.r5.s64 = ctx.r11.s64 + -23196;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f5fd8
	ctx.lr = 0x826692EC;
	sub_824F5FD8(ctx, base);
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

__attribute__((alias("__imp__sub_82669308"))) PPC_WEAK_FUNC(sub_82669308);
PPC_FUNC_IMPL(__imp__sub_82669308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82669310;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8265ce48
	ctx.lr = 0x8266931C;
	sub_8265CE48(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826693b0
	if (!ctx.cr6.eq) goto loc_826693B0;
	// addi r11,r31,3284
	ctx.r11.s64 = ctx.r31.s64 + 3284;
	// addi r30,r31,424
	ctx.r30.s64 = ctx.r31.s64 + 424;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82669344;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,3288
	ctx.r10.s64 = ctx.r31.s64 + 3288;
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
	ctx.lr = 0x82669364;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,3292
	ctx.r10.s64 = ctx.r31.s64 + 3292;
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
	ctx.lr = 0x82669384;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,3296
	ctx.r10.s64 = ctx.r31.s64 + 3296;
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
	ctx.lr = 0x826693A4;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
loc_826693B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826693C0"))) PPC_WEAK_FUNC(sub_826693C0);
PPC_FUNC_IMPL(__imp__sub_826693C0) {
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
	// lwz r3,3284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3284);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826693f8
	if (ctx.cr6.eq) goto loc_826693F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826693F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826693F8:
	// lwz r3,3288(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3288);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82669418
	if (ctx.cr6.eq) goto loc_82669418;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82669418:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82669438
	if (!ctx.cr6.eq) goto loc_82669438;
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82669454
	if (ctx.cr6.lt) goto loc_82669454;
loc_82669438:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82669454
	if (!ctx.cr6.eq) goto loc_82669454;
	// lwz r11,756(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 756);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
	// b 0x82669458
	goto loc_82669458;
loc_82669454:
	// stw r31,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r31.u32);
loc_82669458:
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

__attribute__((alias("__imp__sub_82669470"))) PPC_WEAK_FUNC(sub_82669470);
PPC_FUNC_IMPL(__imp__sub_82669470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82669478;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8265cfa8
	ctx.lr = 0x82669488;
	sub_8265CFA8(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8266965c
	if (!ctx.cr6.eq) goto loc_8266965C;
	// addi r27,r31,3284
	ctx.r27.s64 = ctx.r31.s64 + 3284;
	// addi r30,r31,424
	ctx.r30.s64 = ctx.r31.s64 + 424;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826694B0;
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
	ctx.lr = 0x826694D4;
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
	ctx.lr = 0x826694E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8266950c
	if (!ctx.cr0.eq) goto loc_8266950C;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82669500;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8266950C:
	// addi r27,r31,3288
	ctx.r27.s64 = ctx.r31.s64 + 3288;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82669520;
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
	ctx.lr = 0x82669544;
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
	ctx.lr = 0x82669558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8266957c
	if (!ctx.cr0.eq) goto loc_8266957C;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82669570;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8266957C:
	// addi r27,r31,3292
	ctx.r27.s64 = ctx.r31.s64 + 3292;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82669590;
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
	ctx.lr = 0x826695B4;
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
	ctx.lr = 0x826695C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826695ec
	if (!ctx.cr0.eq) goto loc_826695EC;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x826695E0;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_826695EC:
	// addi r27,r31,3296
	ctx.r27.s64 = ctx.r31.s64 + 3296;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82669600;
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
	ctx.lr = 0x82669624;
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
	ctx.lr = 0x82669638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8266965c
	if (!ctx.cr0.eq) goto loc_8266965C;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82669650;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8266965C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82669668"))) PPC_WEAK_FUNC(sub_82669668);
PPC_FUNC_IMPL(__imp__sub_82669668) {
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
	// bl 0x8265d250
	ctx.lr = 0x82669688;
	sub_8265D250(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-23164
	ctx.r3.s64 = ctx.r11.s64 + -23164;
	// bl 0x82816528
	ctx.lr = 0x82669694;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x826696b0
	if (ctx.cr6.eq) goto loc_826696B0;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-30764
	ctx.r3.s64 = ctx.r11.s64 + -30764;
	// bl 0x82816528
	ctx.lr = 0x826696A8;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82669750
	if (!ctx.cr6.eq) goto loc_82669750;
loc_826696B0:
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826696cc
	if (ctx.cr6.eq) goto loc_826696CC;
	// lwz r11,1780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1780);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x826696d0
	if (ctx.cr6.eq) goto loc_826696D0;
loc_826696CC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_826696D0:
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669710
	if (ctx.cr6.eq) goto loc_82669710;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1668);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826696F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82669710
	if (ctx.cr6.eq) goto loc_82669710;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,3324(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3324);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,800(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x8266a348
	ctx.lr = 0x82669710;
	sub_8266A348(ctx, base);
loc_82669710:
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669750
	if (ctx.cr6.eq) goto loc_82669750;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1668);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82669750
	if (ctx.cr6.eq) goto loc_82669750;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,3328(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3328);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,800(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x8266a348
	ctx.lr = 0x82669750;
	sub_8266A348(ctx, base);
loc_82669750:
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

__attribute__((alias("__imp__sub_82669768"))) PPC_WEAK_FUNC(sub_82669768);
PPC_FUNC_IMPL(__imp__sub_82669768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-32496
	ctx.r11.s64 = ctx.r11.s64 + -32496;
	// lwz r3,3280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// addi r10,r10,-30808
	ctx.r10.s64 = ctx.r10.s64 + -30808;
	// addi r9,r9,-20876
	ctx.r9.s64 = ctx.r9.s64 + -20876;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// beq cr6,0x826697c0
	if (ctx.cr6.eq) goto loc_826697C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826697C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826697C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8265cc00
	ctx.lr = 0x826697C8;
	sub_8265CC00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826697E0"))) PPC_WEAK_FUNC(sub_826697E0);
PPC_FUNC_IMPL(__imp__sub_826697E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669814
	if (ctx.cr6.eq) goto loc_82669814;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1584(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82669814:
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669834
	if (ctx.cr6.eq) goto loc_82669834;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1584(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669834;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82669834:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82669848"))) PPC_WEAK_FUNC(sub_82669848);
PPC_FUNC_IMPL(__imp__sub_82669848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266987c
	if (ctx.cr6.eq) goto loc_8266987C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1588);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266987C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266987C:
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266989c
	if (ctx.cr6.eq) goto loc_8266989C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1588);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266989C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266989C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826698B0"))) PPC_WEAK_FUNC(sub_826698B0);
PPC_FUNC_IMPL(__imp__sub_826698B0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// bge cr6,0x826698dc
	if (!ctx.cr6.lt) goto loc_826698DC;
	// addi r11,r6,821
	ctx.r11.s64 = ctx.r6.s64 + 821;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826698dc
	if (ctx.cr6.eq) goto loc_826698DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_826698DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826698E8"))) PPC_WEAK_FUNC(sub_826698E8);
PPC_FUNC_IMPL(__imp__sub_826698E8) {
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
	// lwz r11,3284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669938
	if (ctx.cr6.eq) goto loc_82669938;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82669920
	if (ctx.cr6.eq) goto loc_82669920;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x82669938
	if (!ctx.cr6.eq) goto loc_82669938;
loc_82669920:
	// lwz r3,3284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3284);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1620(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1620);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82669938:
	// lwz r11,3288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266996c
	if (ctx.cr6.eq) goto loc_8266996C;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82669954
	if (ctx.cr6.eq) goto loc_82669954;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x8266996c
	if (!ctx.cr6.eq) goto loc_8266996C;
loc_82669954:
	// lwz r3,3288(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3288);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1620(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1620);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266996C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266996C:
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

__attribute__((alias("__imp__sub_82669988"))) PPC_WEAK_FUNC(sub_82669988);
PPC_FUNC_IMPL(__imp__sub_82669988) {
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
	// lwz r11,3284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826699d8
	if (ctx.cr6.eq) goto loc_826699D8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x826699c0
	if (ctx.cr6.eq) goto loc_826699C0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x826699d8
	if (!ctx.cr6.eq) goto loc_826699D8;
loc_826699C0:
	// lwz r3,3284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3284);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1624);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826699D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826699D8:
	// lwz r11,3288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669a0c
	if (ctx.cr6.eq) goto loc_82669A0C;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x826699f4
	if (ctx.cr6.eq) goto loc_826699F4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x82669a0c
	if (!ctx.cr6.eq) goto loc_82669A0C;
loc_826699F4:
	// lwz r3,3288(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3288);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1624);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669A0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82669A0C:
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

__attribute__((alias("__imp__sub_82669A28"))) PPC_WEAK_FUNC(sub_82669A28);
PPC_FUNC_IMPL(__imp__sub_82669A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82669A30;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// bl 0x8284f6a8
	ctx.lr = 0x82669A58;
	sub_8284F6A8(ctx, base);
	// addi r31,r31,3284
	ctx.r31.s64 = ctx.r31.s64 + 3284;
	// li r30,2
	ctx.r30.s64 = 2;
loc_82669A60:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82669a8c
	if (ctx.cr6.eq) goto loc_82669A8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,1076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1076);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669A8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82669A8C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82669a60
	if (!ctx.cr0.eq) goto loc_82669A60;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82669AB0"))) PPC_WEAK_FUNC(sub_82669AB0);
PPC_FUNC_IMPL(__imp__sub_82669AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669ae4
	if (ctx.cr6.eq) goto loc_82669AE4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82669AE4:
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669b04
	if (ctx.cr6.eq) goto loc_82669B04;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669B04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82669B04:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82669B18"))) PPC_WEAK_FUNC(sub_82669B18);
PPC_FUNC_IMPL(__imp__sub_82669B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669b4c
	if (ctx.cr6.eq) goto loc_82669B4C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1448);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669B4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82669B4C:
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669b6c
	if (ctx.cr6.eq) goto loc_82669B6C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1448);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669B6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82669B6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82669B80"))) PPC_WEAK_FUNC(sub_82669B80);
PPC_FUNC_IMPL(__imp__sub_82669B80) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82669c30
	if (!ctx.cr6.eq) goto loc_82669C30;
	// lwz r10,3288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82669bc4
	if (ctx.cr6.eq) goto loc_82669BC4;
	// lfs f0,3292(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3292);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82669c1c
	if (ctx.cr6.lt) goto loc_82669C1C;
loc_82669BC4:
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669c30
	if (ctx.cr6.eq) goto loc_82669C30;
	// lfs f0,3296(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3292(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3292);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82669be8
	if (!ctx.cr6.lt) goto loc_82669BE8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82669c20
	goto loc_82669C20;
loc_82669BE8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669c30
	if (ctx.cr6.eq) goto loc_82669C30;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82669c30
	if (ctx.cr6.eq) goto loc_82669C30;
	// lfs f0,3296(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3292(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3292);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82669c30
	if (!ctx.cr6.eq) goto loc_82669C30;
	// lwz r3,3284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669C1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82669C1C:
	// lwz r3,3288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
loc_82669C20:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669C30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82669C30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82669C48"))) PPC_WEAK_FUNC(sub_82669C48);
PPC_FUNC_IMPL(__imp__sub_82669C48) {
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
	// addi r10,r4,821
	ctx.r10.s64 = ctx.r4.s64 + 821;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 * 12;
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r31,1952(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1952, ctx.r31.u32);
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lwz r10,3364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3364);
	// lwz r9,3356(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3356);
	// lwz r11,3360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3360);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,1952(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82669cb8
	if (ctx.cr6.eq) goto loc_82669CB8;
	// addi r11,r4,829
	ctx.r11.s64 = ctx.r4.s64 + 829;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x826602f0
	ctx.lr = 0x82669CB8;
	sub_826602F0(ctx, base);
loc_82669CB8:
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lwz r11,3232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82669d30
	if (!ctx.cr6.eq) goto loc_82669D30;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,3232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3232);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// bgt cr6,0x82669ce4
	if (ctx.cr6.gt) goto loc_82669CE4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x82669cec
	goto loc_82669CEC;
loc_82669CE4:
	// lwz r11,3228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3228);
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
loc_82669CEC:
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1632);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669D00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lwz r11,2060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2060);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82669d30
	if (ctx.cr6.eq) goto loc_82669D30;
	// lwz r10,3232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3232);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82669d24
	if (ctx.cr6.gt) goto loc_82669D24;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82669d2c
	goto loc_82669D2C;
loc_82669D24:
	// lwz r10,3228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3228);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_82669D2C:
	// stfs f0,624(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 624, temp.u32);
loc_82669D30:
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

__attribute__((alias("__imp__sub_82669D50"))) PPC_WEAK_FUNC(sub_82669D50);
PPC_FUNC_IMPL(__imp__sub_82669D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82669D58;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r30,827
	ctx.r11.s64 = ctx.r30.s64 + 827;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lwz r29,800(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r3,13024(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r4,r7,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,904(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x828250b0
	ctx.lr = 0x82669DD0;
	sub_828250B0(ctx, base);
	// bl 0x82332928
	ctx.lr = 0x82669DD4;
	sub_82332928(ctx, base);
	// addi r11,r30,821
	ctx.r11.s64 = ctx.r30.s64 + 821;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r3,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
	// beq 0x82669e10
	if (ctx.cr0.eq) goto loc_82669E10;
	// stw r30,1956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1956, ctx.r30.u32);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82669e10
	if (!ctx.cr6.eq) goto loc_82669E10;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1668);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669E10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82669E10:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82669E18"))) PPC_WEAK_FUNC(sub_82669E18);
PPC_FUNC_IMPL(__imp__sub_82669E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82669e40
	if (ctx.cr6.eq) goto loc_82669E40;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82669e54
	if (!ctx.cr6.eq) goto loc_82669E54;
loc_82669E40:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669E54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82669E54:
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82669e78
	if (!ctx.cr6.eq) goto loc_82669E78;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82669d50
	ctx.lr = 0x82669E6C;
	sub_82669D50(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82669d50
	ctx.lr = 0x82669E78;
	sub_82669D50(ctx, base);
loc_82669E78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82669E90"))) PPC_WEAK_FUNC(sub_82669E90);
PPC_FUNC_IMPL(__imp__sub_82669E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82669E98;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// lis r24,-31949
	ctx.r24.s64 = -2093809664;
	// lwz r31,3284(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 3284);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82669fe4
	if (ctx.cr6.eq) goto loc_82669FE4;
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
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
	ctx.lr = 0x82669EDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82669ef8
	if (!ctx.cr6.gt) goto loc_82669EF8;
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r27)
	PPC_STORE_U32(ctx.r27.u32 + 84, ctx.r11.u32);
	// b 0x82669fcc
	goto loc_82669FCC;
loc_82669EF8:
	// lwz r11,68(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82669f98
	if (!ctx.cr6.eq) goto loc_82669F98;
	// lwz r28,1160(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1160);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669F1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r29,r26,948
	ctx.r29.s64 = ctx.r26.s64 + 948;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82669f78
	if (!ctx.cr6.gt) goto loc_82669F78;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82669F34:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82669f64
	if (!ctx.cr6.eq) goto loc_82669F64;
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
	ctx.lr = 0x82669F5C;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_82669F64:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82669f34
	if (ctx.cr6.lt) goto loc_82669F34;
loc_82669F78:
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,84(r27)
	PPC_STORE_U32(ctx.r27.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669F98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82669F98:
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82669fcc
	if (!ctx.cr0.eq) goto loc_82669FCC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669FB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82669fcc
	if (ctx.cr0.eq) goto loc_82669FCC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x82669FCC;
	sub_82410060(ctx, base);
loc_82669FCC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82669FE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r23,3284(r22)
	PPC_STORE_U32(ctx.r22.u32 + 3284, ctx.r23.u32);
loc_82669FE4:
	// lwz r31,3288(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 3288);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8266a120
	if (ctx.cr6.eq) goto loc_8266A120;
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
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
	ctx.lr = 0x8266A018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8266a034
	if (!ctx.cr6.gt) goto loc_8266A034;
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r27)
	PPC_STORE_U32(ctx.r27.u32 + 84, ctx.r11.u32);
	// b 0x8266a108
	goto loc_8266A108;
loc_8266A034:
	// lwz r11,68(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8266a0d4
	if (!ctx.cr6.eq) goto loc_8266A0D4;
	// lwz r28,1160(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1160);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r29,r26,948
	ctx.r29.s64 = ctx.r26.s64 + 948;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8266a0b4
	if (!ctx.cr6.gt) goto loc_8266A0B4;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_8266A070:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8266a0a0
	if (!ctx.cr6.eq) goto loc_8266A0A0;
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
	ctx.lr = 0x8266A098;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_8266A0A0:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8266a070
	if (ctx.cr6.lt) goto loc_8266A070;
loc_8266A0B4:
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,84(r27)
	PPC_STORE_U32(ctx.r27.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A0D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266A0D4:
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8266a108
	if (!ctx.cr0.eq) goto loc_8266A108;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A0F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8266a108
	if (ctx.cr0.eq) goto loc_8266A108;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x8266A108;
	sub_82410060(ctx, base);
loc_8266A108:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A11C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r23,3288(r22)
	PPC_STORE_U32(ctx.r22.u32 + 3288, ctx.r23.u32);
loc_8266A120:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x829bd4c0
	ctx.lr = 0x8266A128;
	sub_829BD4C0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266A130"))) PPC_WEAK_FUNC(sub_8266A130);
PPC_FUNC_IMPL(__imp__sub_8266A130) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,3284(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3284);
	// stw r10,3300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3300, ctx.r10.u32);
	// b 0x828a2a88
	sub_828A2A88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266A148"))) PPC_WEAK_FUNC(sub_8266A148);
PPC_FUNC_IMPL(__imp__sub_8266A148) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,3288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3288);
	// stw r10,3304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3304, ctx.r10.u32);
	// b 0x828a2a88
	sub_828A2A88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266A160"))) PPC_WEAK_FUNC(sub_8266A160);
PPC_FUNC_IMPL(__imp__sub_8266A160) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,3284(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3284);
	// stw r10,3300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3300, ctx.r10.u32);
	// b 0x828a2dd0
	sub_828A2DD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266A178"))) PPC_WEAK_FUNC(sub_8266A178);
PPC_FUNC_IMPL(__imp__sub_8266A178) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,3288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3288);
	// stw r10,3304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3304, ctx.r10.u32);
	// b 0x828a2dd0
	sub_828A2DD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266A190"))) PPC_WEAK_FUNC(sub_8266A190);
PPC_FUNC_IMPL(__imp__sub_8266A190) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8266a21c
	if (ctx.cr6.lt) goto loc_8266A21C;
	// beq cr6,0x8266a210
	if (ctx.cr6.eq) goto loc_8266A210;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8266a1e8
	if (ctx.cr6.lt) goto loc_8266A1E8;
	// bne cr6,0x8266a230
	if (!ctx.cr6.eq) goto loc_8266A230;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,3288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,3304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3304, ctx.r11.u32);
	// stw r11,3300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3300, ctx.r11.u32);
	// bl 0x828a2a88
	ctx.lr = 0x8266A1E0;
	sub_828A2A88(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8266a204
	goto loc_8266A204;
loc_8266A1E8:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,3288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,3304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3304, ctx.r11.u32);
	// stw r11,3300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3300, ctx.r11.u32);
	// bl 0x828a2a88
	ctx.lr = 0x8266A200;
	sub_828A2A88(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
loc_8266A204:
	// lwz r3,3284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// bl 0x828a2a88
	ctx.lr = 0x8266A20C;
	sub_828A2A88(ctx, base);
	// b 0x8266a230
	goto loc_8266A230;
loc_8266A210:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1672);
	// b 0x8266a224
	goto loc_8266A224;
loc_8266A21C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1676(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1676);
loc_8266A224:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266A230:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82660748
	ctx.lr = 0x8266A23C;
	sub_82660748(ctx, base);
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

__attribute__((alias("__imp__sub_8266A258"))) PPC_WEAK_FUNC(sub_8266A258);
PPC_FUNC_IMPL(__imp__sub_8266A258) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8266a308
	if (ctx.cr6.lt) goto loc_8266A308;
	// beq cr6,0x8266a2f8
	if (ctx.cr6.eq) goto loc_8266A2F8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8266a2c4
	if (ctx.cr6.lt) goto loc_8266A2C4;
	// bne cr6,0x8266a324
	if (!ctx.cr6.eq) goto loc_8266A324;
	// lwz r3,3288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3304, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,3300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3300, ctx.r11.u32);
	// beq cr6,0x8266a2b0
	if (ctx.cr6.eq) goto loc_8266A2B0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x828a2dd0
	ctx.lr = 0x8266A2B0;
	sub_828A2DD0(ctx, base);
loc_8266A2B0:
	// lwz r3,3284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266a324
	if (ctx.cr6.eq) goto loc_8266A324;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8266a320
	goto loc_8266A320;
loc_8266A2C4:
	// lwz r3,3288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3304, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,3300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3300, ctx.r11.u32);
	// beq cr6,0x8266a2e4
	if (ctx.cr6.eq) goto loc_8266A2E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828a2dd0
	ctx.lr = 0x8266A2E4;
	sub_828A2DD0(ctx, base);
loc_8266A2E4:
	// lwz r3,3284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266a324
	if (ctx.cr6.eq) goto loc_8266A324;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8266a320
	goto loc_8266A320;
loc_8266A2F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,3284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// stw r11,3300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3300, ctx.r11.u32);
	// b 0x8266a314
	goto loc_8266A314;
loc_8266A308:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,3288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// stw r11,3304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3304, ctx.r11.u32);
loc_8266A314:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266a324
	if (ctx.cr6.eq) goto loc_8266A324;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8266A320:
	// bl 0x828a2dd0
	ctx.lr = 0x8266A324;
	sub_828A2DD0(ctx, base);
loc_8266A324:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828a2e38
	ctx.lr = 0x8266A330;
	sub_828A2E38(ctx, base);
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

__attribute__((alias("__imp__sub_8266A348"))) PPC_WEAK_FUNC(sub_8266A348);
PPC_FUNC_IMPL(__imp__sub_8266A348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8266a3b8
	if (ctx.cr6.eq) goto loc_8266A3B8;
	// addi r11,r6,821
	ctx.r11.s64 = ctx.r6.s64 + 821;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8266a3b8
	if (ctx.cr6.eq) goto loc_8266A3B8;
	// lwz r10,756(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 756);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8266a3b8
	if (!ctx.cr6.eq) goto loc_8266A3B8;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// mulli r11,r6,12
	ctx.r11.s64 = ctx.r6.s64 * 12;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r31,1436(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1436);
	// lwz r10,3364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3364);
	// lwz r7,3340(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3340);
	// ld r8,3356(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3356);
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,3332(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3332);
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8266A3B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266A3B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A3D0"))) PPC_WEAK_FUNC(sub_8266A3D0);
PPC_FUNC_IMPL(__imp__sub_8266A3D0) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r5,3324(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3324);
	// bl 0x8266a348
	ctx.lr = 0x8266A3F8;
	sub_8266A348(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,3328(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3328);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266a348
	ctx.lr = 0x8266A40C;
	sub_8266A348(ctx, base);
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

__attribute__((alias("__imp__sub_8266A428"))) PPC_WEAK_FUNC(sub_8266A428);
PPC_FUNC_IMPL(__imp__sub_8266A428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,3284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266a44c
	if (ctx.cr6.eq) goto loc_8266A44C;
	// bl 0x828a2998
	ctx.lr = 0x8266A44C;
	sub_828A2998(ctx, base);
loc_8266A44C:
	// lwz r3,3288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266a45c
	if (ctx.cr6.eq) goto loc_8266A45C;
	// bl 0x828a2998
	ctx.lr = 0x8266A45C;
	sub_828A2998(ctx, base);
loc_8266A45C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A470"))) PPC_WEAK_FUNC(sub_8266A470);
PPC_FUNC_IMPL(__imp__sub_8266A470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8266A478;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8266a518
	if (!ctx.cr6.eq) goto loc_8266A518;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// addi r3,r8,-23152
	ctx.r3.s64 = ctx.r8.s64 + -23152;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,17848(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17848);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-32764(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32764);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x828165a8
	ctx.lr = 0x8266A4C8;
	sub_828165A8(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-23120
	ctx.r3.s64 = ctx.r11.s64 + -23120;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x828165a8
	ctx.lr = 0x8266A4DC;
	sub_828165A8(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r30,1568(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1568);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// li r5,1
	ctx.r5.s64 = 1;
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8266A514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8266a5a4
	goto loc_8266A5A4;
loc_8266A518:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x8266a5a4
	if (!ctx.cr6.eq) goto loc_8266A5A4;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r3,r9,-23084
	ctx.r3.s64 = ctx.r9.s64 + -23084;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16540(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16540);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x828165a8
	ctx.lr = 0x8266A558;
	sub_828165A8(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-23060
	ctx.r3.s64 = ctx.r11.s64 + -23060;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x828165a8
	ctx.lr = 0x8266A56C;
	sub_828165A8(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r30,1568(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1568);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r5,0
	ctx.r5.s64 = 0;
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8266A5A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266A5A4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266A5B0"))) PPC_WEAK_FUNC(sub_8266A5B0);
PPC_FUNC_IMPL(__imp__sub_8266A5B0) {
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
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r7,168(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// std r9,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// lwz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8265ebe8
	ctx.lr = 0x8266A5E8;
	sub_8265EBE8(ctx, base);
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8266a694
	if (ctx.cr6.eq) goto loc_8266A694;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266a694
	if (ctx.cr0.eq) goto loc_8266A694;
	// lwz r11,6028(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6028);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8266a694
	if (!ctx.cr6.gt) goto loc_8266A694;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,19144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19144);
	ctx.f0.f64 = double(temp.f32);
loc_8266A624:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8266a650
	if (ctx.cr0.lt) goto loc_8266A650;
	// lwz r9,6024(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6024);
	// mulli r10,r11,44
	ctx.r10.s64 = ctx.r11.s64 * 44;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8266A638:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8266a6a8
	if (ctx.cr6.eq) goto loc_8266A6A8;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-44
	ctx.r10.s64 = ctx.r10.s64 + -44;
	// bge 0x8266a638
	if (!ctx.cr0.lt) goto loc_8266A638;
loc_8266A650:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8266A654:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266a684
	if (ctx.cr6.eq) goto loc_8266A684;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8266a670
	if (ctx.cr6.eq) goto loc_8266A670;
	// stfs f0,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// stfs f0,44(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 44, temp.u32);
loc_8266A670:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266a684
	if (ctx.cr6.eq) goto loc_8266A684;
	// stfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
loc_8266A684:
	// lwz r11,6028(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6028);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8266a624
	if (ctx.cr6.lt) goto loc_8266A624;
loc_8266A694:
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
loc_8266A6A8:
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x8266a654
	goto loc_8266A654;
}

__attribute__((alias("__imp__sub_8266A6B8"))) PPC_WEAK_FUNC(sub_8266A6B8);
PPC_FUNC_IMPL(__imp__sub_8266A6B8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8266a6d0
	if (!ctx.cr6.eq) goto loc_8266A6D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1572);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8266A6D0:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1572);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8266A6E8"))) PPC_WEAK_FUNC(sub_8266A6E8);
PPC_FUNC_IMPL(__imp__sub_8266A6E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A6F0"))) PPC_WEAK_FUNC(sub_8266A6F0);
PPC_FUNC_IMPL(__imp__sub_8266A6F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,3284(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3284);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1468);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8266A718"))) PPC_WEAK_FUNC(sub_8266A718);
PPC_FUNC_IMPL(__imp__sub_8266A718) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A720"))) PPC_WEAK_FUNC(sub_8266A720);
PPC_FUNC_IMPL(__imp__sub_8266A720) {
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
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266a75c
	if (ctx.cr6.eq) goto loc_8266A75C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A75C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266A75C:
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266a780
	if (ctx.cr6.eq) goto loc_8266A780;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266A780:
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

__attribute__((alias("__imp__sub_8266A798"))) PPC_WEAK_FUNC(sub_8266A798);
PPC_FUNC_IMPL(__imp__sub_8266A798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266a7cc
	if (ctx.cr6.eq) goto loc_8266A7CC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A7CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266A7CC:
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266a7ec
	if (ctx.cr6.eq) goto loc_8266A7EC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A7EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266A7EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266A800"))) PPC_WEAK_FUNC(sub_8266A800);
PPC_FUNC_IMPL(__imp__sub_8266A800) {
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
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266a83c
	if (ctx.cr6.eq) goto loc_8266A83C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A83C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266A83C:
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266a860
	if (ctx.cr6.eq) goto loc_8266A860;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266A860:
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

__attribute__((alias("__imp__sub_8266A878"))) PPC_WEAK_FUNC(sub_8266A878);
PPC_FUNC_IMPL(__imp__sub_8266A878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8266A880;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r11,-17640
	ctx.r4.s64 = ctx.r11.s64 + -17640;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A8AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-17656
	ctx.r4.s64 = ctx.r11.s64 + -17656;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A8C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828a2140
	ctx.lr = 0x8266A8D4;
	sub_828A2140(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266A8E0"))) PPC_WEAK_FUNC(sub_8266A8E0);
PPC_FUNC_IMPL(__imp__sub_8266A8E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8266A8E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8266a908
	if (ctx.cr6.eq) goto loc_8266A908;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x8266a920
	if (!ctx.cr6.eq) goto loc_8266A920;
loc_8266A908:
	// lwz r3,3284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3284);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266a920
	if (ctx.cr6.eq) goto loc_8266A920;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8265c5c0
	ctx.lr = 0x8266A920;
	sub_8265C5C0(ctx, base);
loc_8266A920:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8266a930
	if (ctx.cr6.eq) goto loc_8266A930;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x8266a948
	if (!ctx.cr6.eq) goto loc_8266A948;
loc_8266A930:
	// lwz r3,3288(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3288);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266a948
	if (ctx.cr6.eq) goto loc_8266A948;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8265c5c0
	ctx.lr = 0x8266A948;
	sub_8265C5C0(ctx, base);
loc_8266A948:
	// stw r29,2044(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2044, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266A958"))) PPC_WEAK_FUNC(sub_8266A958);
PPC_FUNC_IMPL(__imp__sub_8266A958) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r3,3284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1472);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1472);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266A9A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_8266A9B8"))) PPC_WEAK_FUNC(sub_8266A9B8);
PPC_FUNC_IMPL(__imp__sub_8266A9B8) {
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
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x826604f8
	ctx.lr = 0x8266A9E8;
	sub_826604F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824fe208
	ctx.lr = 0x8266A9F0;
	sub_824FE208(ctx, base);
	// stw r3,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8266AA10"))) PPC_WEAK_FUNC(sub_8266AA10);
PPC_FUNC_IMPL(__imp__sub_8266AA10) {
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
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x828a4248
	ctx.lr = 0x8266AA38;
	sub_828A4248(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r30,r31,-8
	ctx.r30.s64 = ctx.r31.s64 + -8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266AA54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266AA6C;
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

__attribute__((alias("__imp__sub_8266AA88"))) PPC_WEAK_FUNC(sub_8266AA88);
PPC_FUNC_IMPL(__imp__sub_8266AA88) {
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
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,-68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -68);
	// lwz r9,1872(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1872);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8266aae4
	if (ctx.cr6.eq) goto loc_8266AAE4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,-6056(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6056);
	// lwz r3,-36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -36);
	// bl 0x8266b960
	ctx.lr = 0x8266AAE0;
	sub_8266B960(ctx, base);
	// b 0x8266abdc
	goto loc_8266ABDC;
loc_8266AAE4:
	// lwz r3,64(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8266aba0
	if (ctx.cr6.eq) goto loc_8266ABA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266AB00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266aba0
	if (ctx.cr0.eq) goto loc_8266ABA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266AB18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266aba0
	if (ctx.cr0.eq) goto loc_8266ABA0;
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -68);
	// lwz r11,3300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8266ab60
	if (ctx.cr6.eq) goto loc_8266AB60;
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -68);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266AB60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266AB60:
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -68);
	// lwz r11,3304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3304);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8266aba0
	if (ctx.cr6.eq) goto loc_8266ABA0;
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -68);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266ABA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266ABA0:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r3,r10,29568
	ctx.r3.s64 = ctx.r10.s64 + 29568;
	// lwz r30,-6056(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x82816528
	ctx.lr = 0x8266ABB4;
	sub_82816528(ctx, base);
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -36);
	// bl 0x829e3fd0
	ctx.lr = 0x8266ABDC;
	sub_829E3FD0(ctx, base);
loc_8266ABDC:
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

__attribute__((alias("__imp__sub_8266ABF8"))) PPC_WEAK_FUNC(sub_8266ABF8);
PPC_FUNC_IMPL(__imp__sub_8266ABF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r4,821
	ctx.r10.s64 = ctx.r4.s64 + 821;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8266AC2C"))) PPC_WEAK_FUNC(sub_8266AC2C);
PPC_FUNC_IMPL(__imp__sub_8266AC2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266AC30"))) PPC_WEAK_FUNC(sub_8266AC30);
PPC_FUNC_IMPL(__imp__sub_8266AC30) {
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
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266AC74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r30,r31,-8
	ctx.r30.s64 = ctx.r31.s64 + -8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266AC90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266ACA8;
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

__attribute__((alias("__imp__sub_8266ACC0"))) PPC_WEAK_FUNC(sub_8266ACC0);
PPC_FUNC_IMPL(__imp__sub_8266ACC0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r4,821
	ctx.r10.s64 = ctx.r4.s64 + 821;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8266ad54
	if (ctx.cr6.eq) goto loc_8266AD54;
	// addic. r11,r11,300
	ctx.xer.ca = ctx.r11.u32 > 4294966995;
	ctx.r11.s64 = ctx.r11.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266ad18
	if (ctx.cr0.eq) goto loc_8266AD18;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8266ad18
	if (ctx.cr6.eq) goto loc_8266AD18;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8266ad1c
	goto loc_8266AD1C;
loc_8266AD18:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8266AD1C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8266ad54
	if (ctx.cr6.eq) goto loc_8266AD54;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r3,r10,32348
	ctx.r3.s64 = ctx.r10.s64 + 32348;
	// lwz r30,-6056(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x82816528
	ctx.lr = 0x8266AD38;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x829e3fd0
	ctx.lr = 0x8266AD54;
	sub_829E3FD0(ctx, base);
loc_8266AD54:
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

__attribute__((alias("__imp__sub_8266AD70"))) PPC_WEAK_FUNC(sub_8266AD70);
PPC_FUNC_IMPL(__imp__sub_8266AD70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -72);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,-68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -68);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8266AD90"))) PPC_WEAK_FUNC(sub_8266AD90);
PPC_FUNC_IMPL(__imp__sub_8266AD90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -72);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,-68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -68);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8266ADB0"))) PPC_WEAK_FUNC(sub_8266ADB0);
PPC_FUNC_IMPL(__imp__sub_8266ADB0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8266ade0
	if (!ctx.cr6.gt) goto loc_8266ADE0;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// b 0x8266ade4
	goto loc_8266ADE4;
loc_8266ADE0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8266ADE4:
	// stw r11,2092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2092, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1616);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266AE00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8266ae20
	if (!ctx.cr6.eq) goto loc_8266AE20;
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8266ae2c
	if (ctx.cr6.lt) goto loc_8266AE2C;
loc_8266AE20:
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8266ae74
	if (!ctx.cr6.eq) goto loc_8266AE74;
loc_8266AE2C:
	// lwz r3,3284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8266ae50
	if (ctx.cr6.eq) goto loc_8266AE50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,1612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1612);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266AE50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266AE50:
	// lwz r3,3288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8266ae74
	if (ctx.cr6.eq) goto loc_8266AE74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,1612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1612);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266AE74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266AE74:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266AE88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8266aea8
	if (!ctx.cr6.eq) goto loc_8266AEA8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1656(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1656);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266AEA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266AEA8:
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

__attribute__((alias("__imp__sub_8266AEC0"))) PPC_WEAK_FUNC(sub_8266AEC0);
PPC_FUNC_IMPL(__imp__sub_8266AEC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8266AEC8;
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
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266aefc
	if (ctx.cr6.eq) goto loc_8266AEFC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1512(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1512);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266AEFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266AEFC:
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266af28
	if (ctx.cr6.eq) goto loc_8266AF28;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1512(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1512);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266AF28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266AF28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266AF30"))) PPC_WEAK_FUNC(sub_8266AF30);
PPC_FUNC_IMPL(__imp__sub_8266AF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8266AF38;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r5.u64);
	// lwz r28,184(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266af8c
	if (ctx.cr6.eq) goto loc_8266AF8C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rldicr r5,r28,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1628);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266AF8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266AF8C:
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266afc4
	if (ctx.cr6.eq) goto loc_8266AFC4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// rldicr r5,r28,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1628);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266AFC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266AFC4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266AFD8"))) PPC_WEAK_FUNC(sub_8266AFD8);
PPC_FUNC_IMPL(__imp__sub_8266AFD8) {
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
	// addi r11,r6,821
	ctx.r11.s64 = ctx.r6.s64 + 821;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8266b01c
	if (ctx.cr6.eq) goto loc_8266B01C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r6,1
	ctx.r6.s64 = 1;
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1528(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1528);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B01C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266B01C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266B030"))) PPC_WEAK_FUNC(sub_8266B030);
PPC_FUNC_IMPL(__imp__sub_8266B030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266b064
	if (ctx.cr6.eq) goto loc_8266B064;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B064;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266B064:
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266b084
	if (ctx.cr6.eq) goto loc_8266B084;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266B084:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266B098"))) PPC_WEAK_FUNC(sub_8266B098);
PPC_FUNC_IMPL(__imp__sub_8266B098) {
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
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8266b0c4
	if (ctx.cr6.eq) goto loc_8266B0C4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x8266b0e8
	if (!ctx.cr6.eq) goto loc_8266B0E8;
loc_8266B0C4:
	// lwz r11,3284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266b0e8
	if (ctx.cr6.eq) goto loc_8266B0E8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1592);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B0E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266B0E8:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8266b0f8
	if (ctx.cr6.eq) goto loc_8266B0F8;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x8266b11c
	if (!ctx.cr6.eq) goto loc_8266B11C;
loc_8266B0F8:
	// lwz r11,3288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266b11c
	if (ctx.cr6.eq) goto loc_8266B11C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1592);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B11C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266B11C:
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

__attribute__((alias("__imp__sub_8266B138"))) PPC_WEAK_FUNC(sub_8266B138);
PPC_FUNC_IMPL(__imp__sub_8266B138) {
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
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8266b164
	if (ctx.cr6.eq) goto loc_8266B164;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x8266b188
	if (!ctx.cr6.eq) goto loc_8266B188;
loc_8266B164:
	// lwz r11,3284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266b188
	if (ctx.cr6.eq) goto loc_8266B188;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1596);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266B188:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8266b198
	if (ctx.cr6.eq) goto loc_8266B198;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x8266b1bc
	if (!ctx.cr6.eq) goto loc_8266B1BC;
loc_8266B198:
	// lwz r11,3288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266b1bc
	if (ctx.cr6.eq) goto loc_8266B1BC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1596);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B1BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266B1BC:
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

__attribute__((alias("__imp__sub_8266B1D8"))) PPC_WEAK_FUNC(sub_8266B1D8);
PPC_FUNC_IMPL(__imp__sub_8266B1D8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266b21c
	if (ctx.cr6.eq) goto loc_8266B21C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1640);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B21C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266B21C:
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266b244
	if (ctx.cr6.eq) goto loc_8266B244;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1640);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266B244:
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

__attribute__((alias("__imp__sub_8266B260"))) PPC_WEAK_FUNC(sub_8266B260);
PPC_FUNC_IMPL(__imp__sub_8266B260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266b294
	if (ctx.cr6.eq) goto loc_8266B294;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1644(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1644);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266B294:
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266b2b4
	if (ctx.cr6.eq) goto loc_8266B2B4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1644(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1644);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B2B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266B2B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266B2C8"))) PPC_WEAK_FUNC(sub_8266B2C8);
PPC_FUNC_IMPL(__imp__sub_8266B2C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8266B2D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8266b2f4
	if (ctx.cr6.eq) goto loc_8266B2F4;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x8266b320
	if (!ctx.cr6.eq) goto loc_8266B320;
loc_8266B2F4:
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266b320
	if (ctx.cr6.eq) goto loc_8266B320;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1440);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266B320:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8266b330
	if (ctx.cr6.eq) goto loc_8266B330;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x8266b35c
	if (!ctx.cr6.eq) goto loc_8266B35C;
loc_8266B330:
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266b35c
	if (ctx.cr6.eq) goto loc_8266B35C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1440);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B35C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266B35C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266B368"))) PPC_WEAK_FUNC(sub_8266B368);
PPC_FUNC_IMPL(__imp__sub_8266B368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266b39c
	if (ctx.cr6.eq) goto loc_8266B39C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B39C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266B39C:
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266b3bc
	if (ctx.cr6.eq) goto loc_8266B3BC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B3BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266B3BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266B3D0"))) PPC_WEAK_FUNC(sub_8266B3D0);
PPC_FUNC_IMPL(__imp__sub_8266B3D0) {
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
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266b40c
	if (ctx.cr6.eq) goto loc_8266B40C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1392);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B40C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266B40C:
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266b430
	if (ctx.cr6.eq) goto loc_8266B430;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1392);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266B430:
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

__attribute__((alias("__imp__sub_8266B448"))) PPC_WEAK_FUNC(sub_8266B448);
PPC_FUNC_IMPL(__imp__sub_8266B448) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266b488
	if (ctx.cr6.eq) goto loc_8266B488;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8266B488:
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266b4ac
	if (ctx.cr6.eq) goto loc_8266B4AC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B4A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
loc_8266B4AC:
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

__attribute__((alias("__imp__sub_8266B4C8"))) PPC_WEAK_FUNC(sub_8266B4C8);
PPC_FUNC_IMPL(__imp__sub_8266B4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8266B4D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,3288(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266b4f4
	if (ctx.cr6.eq) goto loc_8266B4F4;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8266b510
	if (ctx.cr6.eq) goto loc_8266B510;
loc_8266B4F4:
	// lwz r11,3284(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266b63c
	if (ctx.cr6.eq) goto loc_8266B63C;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8266b63c
	if (!ctx.cr6.eq) goto loc_8266B63C;
loc_8266B510:
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
	ctx.lr = 0x8266B538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8266b554
	if (!ctx.cr6.gt) goto loc_8266B554;
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r11.u32);
	// b 0x8266b628
	goto loc_8266B628;
loc_8266B554:
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8266b5f4
	if (!ctx.cr6.eq) goto loc_8266B5F4;
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
	ctx.lr = 0x8266B578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r29,r26,948
	ctx.r29.s64 = ctx.r26.s64 + 948;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8266b5d4
	if (!ctx.cr6.gt) goto loc_8266B5D4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8266B590:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8266b5c0
	if (!ctx.cr6.eq) goto loc_8266B5C0;
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
	ctx.lr = 0x8266B5B8;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_8266B5C0:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8266b590
	if (ctx.cr6.lt) goto loc_8266B590;
loc_8266B5D4:
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
	ctx.lr = 0x8266B5F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266B5F4:
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8266b628
	if (!ctx.cr0.eq) goto loc_8266B628;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8266b628
	if (ctx.cr0.eq) goto loc_8266B628;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x8266B628;
	sub_82410060(ctx, base);
loc_8266B628:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B63C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266B63C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266B648"))) PPC_WEAK_FUNC(sub_8266B648);
PPC_FUNC_IMPL(__imp__sub_8266B648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r31,3284
	ctx.r4.s64 = ctx.r31.s64 + 3284;
	// bl 0x829c7c38
	ctx.lr = 0x8266B664;
	sub_829C7C38(ctx, base);
	// addi r4,r31,3288
	ctx.r4.s64 = ctx.r31.s64 + 3288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c7c38
	ctx.lr = 0x8266B670;
	sub_829C7C38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266B688"))) PPC_WEAK_FUNC(sub_8266B688);
PPC_FUNC_IMPL(__imp__sub_8266B688) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266b70c
	if (ctx.cr6.eq) goto loc_8266B70C;
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266b70c
	if (ctx.cr6.eq) goto loc_8266B70C;
	// lwz r3,3284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 792);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B6D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 792);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B6F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8266b708
	if (ctx.cr6.eq) goto loc_8266B708;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x8266b70c
	if (!ctx.cr6.eq) goto loc_8266B70C;
loc_8266B708:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266B70C:
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

__attribute__((alias("__imp__sub_8266B728"))) PPC_WEAK_FUNC(sub_8266B728);
PPC_FUNC_IMPL(__imp__sub_8266B728) {
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
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82833108
	ctx.lr = 0x8266B73C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266b750
	if (ctx.cr0.eq) goto loc_8266B750;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8266b880
	ctx.lr = 0x8266B74C;
	sub_8266B880(ctx, base);
	// b 0x8266b754
	goto loc_8266B754;
loc_8266B750:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266B754:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266b768
	if (ctx.cr6.eq) goto loc_8266B768;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8266B768:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266B778"))) PPC_WEAK_FUNC(sub_8266B778);
PPC_FUNC_IMPL(__imp__sub_8266B778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24656(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24656);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8266b7b8
	if (!ctx.cr0.eq) goto loc_8266B7B8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// stw r11,24656(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24656, ctx.r11.u32);
	// addi r3,r9,-23300
	ctx.r3.s64 = ctx.r9.s64 + -23300;
	// bl 0x82816528
	ctx.lr = 0x8266B7B0;
	sub_82816528(ctx, base);
	// stw r3,24652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24652, ctx.r3.u32);
	// b 0x8266b7bc
	goto loc_8266B7BC;
loc_8266B7B8:
	// lwz r3,24652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24652);
loc_8266B7BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266B7D0"))) PPC_WEAK_FUNC(sub_8266B7D0);
PPC_FUNC_IMPL(__imp__sub_8266B7D0) {
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
	// bl 0x8266b820
	ctx.lr = 0x8266B7F0;
	sub_8266B820(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B804;
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

__attribute__((alias("__imp__sub_8266B820"))) PPC_WEAK_FUNC(sub_8266B820);
PPC_FUNC_IMPL(__imp__sub_8266B820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13436
	ctx.r31.s64 = ctx.r11.s64 + 13436;
	// lwz r11,13432(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13432);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8266b868
	if (!ctx.cr0.eq) goto loc_8266B868;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-22716
	ctx.r9.s64 = ctx.r9.s64 + -22716;
	// stw r11,13432(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13432, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26808
	ctx.r3.s64 = ctx.r11.s64 + 26808;
	// bl 0x82a4c758
	ctx.lr = 0x8266B868;
	sub_82A4C758(ctx, base);
loc_8266B868:
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

__attribute__((alias("__imp__sub_8266B880"))) PPC_WEAK_FUNC(sub_8266B880);
PPC_FUNC_IMPL(__imp__sub_8266B880) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r11,r11,13764
	ctx.r11.s64 = ctx.r11.s64 + 13764;
	// addi r10,r10,15084
	ctx.r10.s64 = ctx.r10.s64 + 15084;
	// addi r9,r9,-26776
	ctx.r9.s64 = ctx.r9.s64 + -26776;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// bl 0x823e9df8
	ctx.lr = 0x8266B8C8;
	sub_823E9DF8(ctx, base);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r11,r11,27424
	ctx.r11.s64 = ctx.r11.s64 + 27424;
	// addi r10,r10,27600
	ctx.r10.s64 = ctx.r10.s64 + 27600;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r11,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, ctx.r11.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bl 0x823d5640
	ctx.lr = 0x8266B900;
	sub_823D5640(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r11,r11,-23016
	ctx.r11.s64 = ctx.r11.s64 + -23016;
	// addi r10,r10,-22840
	ctx.r10.s64 = ctx.r10.s64 + -22840;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r9,-22784
	ctx.r9.s64 = ctx.r9.s64 + -22784;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r11,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8266B960"))) PPC_WEAK_FUNC(sub_8266B960);
PPC_FUNC_IMPL(__imp__sub_8266B960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8266B968;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,84
	ctx.r3.s64 = 84;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82833108
	ctx.lr = 0x8266B97C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266b994
	if (ctx.cr0.eq) goto loc_8266B994;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8266b880
	ctx.lr = 0x8266B98C;
	sub_8266B880(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8266b998
	goto loc_8266B998;
loc_8266B994:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8266B998:
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8266ba60
	if (ctx.cr6.eq) goto loc_8266BA60;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// addi r30,r29,68
	ctx.r30.s64 = ctx.r29.s64 + 68;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266ba60
	if (ctx.cr6.eq) goto loc_8266BA60;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,-4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266B9F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266BA0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8266ba60
	if (!ctx.cr6.eq) goto loc_8266BA60;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266BA34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8266ba54
	if (ctx.cr6.eq) goto loc_8266BA54;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
loc_8266BA54:
	// stw r27,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8266baf4
	goto loc_8266BAF4;
loc_8266BA60:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266BA80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82816528
	ctx.lr = 0x8266BA84;
	sub_82816528(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,44(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266BAB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266BAD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x829e3c18
	ctx.lr = 0x8266BAF4;
	sub_829E3C18(ctx, base);
loc_8266BAF4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266BB00"))) PPC_WEAK_FUNC(sub_8266BB00);
PPC_FUNC_IMPL(__imp__sub_8266BB00) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82668e28
	sub_82668E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266BB08"))) PPC_WEAK_FUNC(sub_8266BB08);
PPC_FUNC_IMPL(__imp__sub_8266BB08) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1672(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 1672);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8266BB18"))) PPC_WEAK_FUNC(sub_8266BB18);
PPC_FUNC_IMPL(__imp__sub_8266BB18) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1676(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 1676);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8266BB28"))) PPC_WEAK_FUNC(sub_8266BB28);
PPC_FUNC_IMPL(__imp__sub_8266BB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6852
	ctx.r3.s64 = ctx.r11.s64 + -6852;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266BB38"))) PPC_WEAK_FUNC(sub_8266BB38);
PPC_FUNC_IMPL(__imp__sub_8266BB38) {
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
	// beq cr6,0x8266bb70
	if (ctx.cr6.eq) goto loc_8266BB70;
	// bl 0x823c2740
	ctx.lr = 0x8266BB60;
	sub_823C2740(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8266bb70
	if (!ctx.cr6.eq) goto loc_8266BB70;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8266bb7c
	goto loc_8266BB7C;
loc_8266BB70:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8250f560
	ctx.lr = 0x8266BB7C;
	sub_8250F560(ctx, base);
loc_8266BB7C:
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

__attribute__((alias("__imp__sub_8266BB98"))) PPC_WEAK_FUNC(sub_8266BB98);
PPC_FUNC_IMPL(__imp__sub_8266BB98) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c2740
	sub_823C2740(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266BBA0"))) PPC_WEAK_FUNC(sub_8266BBA0);
PPC_FUNC_IMPL(__imp__sub_8266BBA0) {
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
	// li r3,3408
	ctx.r3.s64 = 3408;
	// bl 0x82833108
	ctx.lr = 0x8266BBC0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266bc08
	if (ctx.cr0.eq) goto loc_8266BC08;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250f690
	ctx.lr = 0x8266BBD4;
	sub_8250F690(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-22616
	ctx.r11.s64 = ctx.r11.s64 + -22616;
	// addi r10,r10,-20928
	ctx.r10.s64 = ctx.r10.s64 + -20928;
	// addi r9,r9,-20876
	ctx.r9.s64 = ctx.r9.s64 + -20876;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,3392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3392);
	// stw r11,3392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3392, ctx.r11.u32);
	// b 0x8266bc0c
	goto loc_8266BC0C;
loc_8266BC08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266BC0C:
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

__attribute__((alias("__imp__sub_8266BC28"))) PPC_WEAK_FUNC(sub_8266BC28);
PPC_FUNC_IMPL(__imp__sub_8266BC28) {
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
	// bl 0x823c2740
	ctx.lr = 0x8266BC48;
	sub_823C2740(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8266bc5c
	if (ctx.cr6.eq) goto loc_8266BC5C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8250f608
	ctx.lr = 0x8266BC5C;
	sub_8250F608(ctx, base);
loc_8266BC5C:
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

__attribute__((alias("__imp__sub_8266BC78"))) PPC_WEAK_FUNC(sub_8266BC78);
PPC_FUNC_IMPL(__imp__sub_8266BC78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8266BC80;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82668fe8
	ctx.lr = 0x8266BC8C;
	sub_82668FE8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r8,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r8.u32);
	// lis r7,-32224
	ctx.r7.s64 = -2111832064;
	// stw r11,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r11.u32);
	// lis r6,-32224
	ctx.r6.s64 = -2111832064;
	// stw r8,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r8.u32);
	// lis r5,-32224
	ctx.r5.s64 = -2111832064;
	// stw r10,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r10.u32);
	// addi r11,r7,-22616
	ctx.r11.s64 = ctx.r7.s64 + -22616;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r8,r6,-20928
	ctx.r8.s64 = ctx.r6.s64 + -20928;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r5,-20876
	ctx.r10.s64 = ctx.r5.s64 + -20876;
	// stw r9,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// addi r29,r11,-5760
	ctx.r29.s64 = ctx.r11.s64 + -5760;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82816528
	ctx.lr = 0x8266BCE8;
	sub_82816528(ctx, base);
	// stw r3,3308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3308, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82816528
	ctx.lr = 0x8266BCF4;
	sub_82816528(ctx, base);
	// lis r11,-23833
	ctx.r11.s64 = -1561919488;
	// lis r10,26549
	ctx.r10.s64 = 1739915264;
	// stw r3,3312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3312, ctx.r3.u32);
	// ori r11,r11,51940
	ctx.r11.u64 = ctx.r11.u64 | 51940;
	// ori r10,r10,52330
	ctx.r10.u64 = ctx.r10.u64 | 52330;
	// stw r11,3324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3324, ctx.r11.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// stw r10,3328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3328, ctx.r10.u32);
	// addi r3,r11,-22696
	ctx.r3.s64 = ctx.r11.s64 + -22696;
	// bl 0x82816528
	ctx.lr = 0x8266BD1C;
	sub_82816528(ctx, base);
	// stw r3,3316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3316, ctx.r3.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-22684
	ctx.r3.s64 = ctx.r11.s64 + -22684;
	// bl 0x82816528
	ctx.lr = 0x8266BD2C;
	sub_82816528(ctx, base);
	// stw r3,3320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3320, ctx.r3.u32);
	// stw r30,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r30.u32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23788
	ctx.r4.s64 = ctx.r11.s64 + -23788;
	// bl 0x8233a258
	ctx.lr = 0x8266BD44;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,2320
	ctx.r3.s64 = ctx.r31.s64 + 2320;
	// bl 0x82400b48
	ctx.lr = 0x8266BD50;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x8266BD58;
	sub_82333960(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r30,3392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3392, ctx.r30.u32);
	// stw r10,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r10.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8266bd9c
	if (ctx.cr6.eq) goto loc_8266BD9C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r5,r11,-30912
	ctx.r5.s64 = ctx.r11.s64 + -30912;
	// addi r4,r10,-22672
	ctx.r4.s64 = ctx.r10.s64 + -22672;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r31,3216
	ctx.r6.s64 = ctx.r31.s64 + 3216;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c58b0
	ctx.lr = 0x8266BD9C;
	sub_828C58B0(ctx, base);
loc_8266BD9C:
	// lis r11,10385
	ctx.r11.s64 = 680591360;
	// lis r10,3321
	ctx.r10.s64 = 217645056;
	// lis r9,2980
	ctx.r9.s64 = 195297280;
	// ori r11,r11,29450
	ctx.r11.u64 = ctx.r11.u64 | 29450;
	// ori r10,r10,51109
	ctx.r10.u64 = ctx.r10.u64 | 51109;
	// ori r9,r9,34285
	ctx.r9.u64 = ctx.r9.u64 | 34285;
	// stw r11,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r11.u32);
	// stw r10,3088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3088, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266BDD0"))) PPC_WEAK_FUNC(sub_8266BDD0);
PPC_FUNC_IMPL(__imp__sub_8266BDD0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8266bc28
	sub_8266BC28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266BDD8"))) PPC_WEAK_FUNC(sub_8266BDD8);
PPC_FUNC_IMPL(__imp__sub_8266BDD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6824
	ctx.r3.s64 = ctx.r11.s64 + -6824;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266BDE8"))) PPC_WEAK_FUNC(sub_8266BDE8);
PPC_FUNC_IMPL(__imp__sub_8266BDE8) {
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
	// beq cr6,0x8266be20
	if (ctx.cr6.eq) goto loc_8266BE20;
	// bl 0x823c2880
	ctx.lr = 0x8266BE10;
	sub_823C2880(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8266be20
	if (!ctx.cr6.eq) goto loc_8266BE20;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8266be2c
	goto loc_8266BE2C;
loc_8266BE20:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8250f560
	ctx.lr = 0x8266BE2C;
	sub_8250F560(ctx, base);
loc_8266BE2C:
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

__attribute__((alias("__imp__sub_8266BE48"))) PPC_WEAK_FUNC(sub_8266BE48);
PPC_FUNC_IMPL(__imp__sub_8266BE48) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c2880
	sub_823C2880(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266BE50"))) PPC_WEAK_FUNC(sub_8266BE50);
PPC_FUNC_IMPL(__imp__sub_8266BE50) {
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
	// li r3,3392
	ctx.r3.s64 = 3392;
	// bl 0x82833108
	ctx.lr = 0x8266BE70;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266beb0
	if (ctx.cr0.eq) goto loc_8266BEB0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250f690
	ctx.lr = 0x8266BE84;
	sub_8250F690(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-20784
	ctx.r11.s64 = ctx.r11.s64 + -20784;
	// addi r10,r10,-19096
	ctx.r10.s64 = ctx.r10.s64 + -19096;
	// addi r9,r9,-20876
	ctx.r9.s64 = ctx.r9.s64 + -20876;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8266beb4
	goto loc_8266BEB4;
loc_8266BEB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266BEB4:
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

__attribute__((alias("__imp__sub_8266BED0"))) PPC_WEAK_FUNC(sub_8266BED0);
PPC_FUNC_IMPL(__imp__sub_8266BED0) {
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
	// bl 0x823c2880
	ctx.lr = 0x8266BEF0;
	sub_823C2880(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8266bf04
	if (ctx.cr6.eq) goto loc_8266BF04;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8250f608
	ctx.lr = 0x8266BF04;
	sub_8250F608(ctx, base);
loc_8266BF04:
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

__attribute__((alias("__imp__sub_8266BF20"))) PPC_WEAK_FUNC(sub_8266BF20);
PPC_FUNC_IMPL(__imp__sub_8266BF20) {
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
	// bl 0x82669768
	ctx.lr = 0x8266BF40;
	sub_82669768(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266bf50
	if (ctx.cr0.eq) goto loc_8266BF50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8266BF50;
	sub_82332DB8(ctx, base);
loc_8266BF50:
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

__attribute__((alias("__imp__sub_8266BF70"))) PPC_WEAK_FUNC(sub_8266BF70);
PPC_FUNC_IMPL(__imp__sub_8266BF70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8266BF78;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82668fe8
	ctx.lr = 0x8266BF84;
	sub_82668FE8(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-20784
	ctx.r11.s64 = ctx.r11.s64 + -20784;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r10,r10,-19096
	ctx.r10.s64 = ctx.r10.s64 + -19096;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r9,r9,-20876
	ctx.r9.s64 = ctx.r9.s64 + -20876;
	// stw r29,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r29.u32);
	// stw r29,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r29.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,-5820
	ctx.r3.s64 = ctx.r11.s64 + -5820;
	// bl 0x82816528
	ctx.lr = 0x8266BFC0;
	sub_82816528(ctx, base);
	// stw r3,3308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3308, ctx.r3.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5844
	ctx.r3.s64 = ctx.r11.s64 + -5844;
	// bl 0x82816528
	ctx.lr = 0x8266BFD0;
	sub_82816528(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,3312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3312, ctx.r3.u32);
	// lis r3,-23833
	ctx.r3.s64 = -1561919488;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,3316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3316, ctx.r30.u32);
	// lis r28,26549
	ctx.r28.s64 = 1739915264;
	// stw r30,3376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3376, ctx.r30.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r11.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r27,112(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r25,84(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r24,88(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r23,104(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r10,3336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3336, ctx.r10.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r10,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r10.u32);
	// ori r11,r3,51940
	ctx.r11.u64 = ctx.r3.u64 | 51940;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r23,3332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3332, ctx.r23.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r11,3324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3324, ctx.r11.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r9,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r9.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r27,3340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3340, ctx.r27.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r8,3356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3356, ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r7,3360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3360, ctx.r7.u32);
	// ori r10,r28,52330
	ctx.r10.u64 = ctx.r28.u64 | 52330;
	// stw r6,3364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3364, ctx.r6.u32);
	// stw r26,3344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3344, ctx.r26.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// stw r10,3328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3328, ctx.r10.u32);
	// stw r25,3348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3348, ctx.r25.u32);
	// addi r3,r11,-20852
	ctx.r3.s64 = ctx.r11.s64 + -20852;
	// stw r24,3352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3352, ctx.r24.u32);
	// stw r5,3368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3368, ctx.r5.u32);
	// stw r4,3372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3372, ctx.r4.u32);
	// bl 0x82816528
	ctx.lr = 0x8266C094;
	sub_82816528(ctx, base);
	// stw r3,3320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3320, ctx.r3.u32);
	// stw r30,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r30.u32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23748
	ctx.r4.s64 = ctx.r11.s64 + -23748;
	// bl 0x8233a258
	ctx.lr = 0x8266C0AC;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,2320
	ctx.r3.s64 = ctx.r31.s64 + 2320;
	// bl 0x82400b48
	ctx.lr = 0x8266C0B8;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x8266C0C0;
	sub_82333960(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r10,29
	ctx.r10.s64 = 29;
	// stw r10,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r10.u32);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lfs f0,24724(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24724);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,2128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2128, ctx.r11.u32);
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// stw r9,2132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2132, ctx.r9.u32);
	// stw r8,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r8.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8266c12c
	if (ctx.cr6.eq) goto loc_8266C12C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r5,r11,-30912
	ctx.r5.s64 = ctx.r11.s64 + -30912;
	// addi r4,r10,-20840
	ctx.r4.s64 = ctx.r10.s64 + -20840;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r31,3216
	ctx.r6.s64 = ctx.r31.s64 + 3216;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c58b0
	ctx.lr = 0x8266C12C;
	sub_828C58B0(ctx, base);
loc_8266C12C:
	// lis r11,7147
	ctx.r11.s64 = 468385792;
	// lis r10,5903
	ctx.r10.s64 = 386859008;
	// lis r9,6424
	ctx.r9.s64 = 421003264;
	// ori r11,r11,12662
	ctx.r11.u64 = ctx.r11.u64 | 12662;
	// ori r10,r10,36082
	ctx.r10.u64 = ctx.r10.u64 | 36082;
	// ori r9,r9,239
	ctx.r9.u64 = ctx.r9.u64 | 239;
	// stw r11,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r11.u32);
	// stw r10,3088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3088, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C160"))) PPC_WEAK_FUNC(sub_8266C160);
PPC_FUNC_IMPL(__imp__sub_8266C160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8266C168;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x823328c8
	ctx.lr = 0x8266C180;
	sub_823328C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8266c194
	if (!ctx.cr0.eq) goto loc_8266C194;
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266c1fc
	if (ctx.cr6.eq) goto loc_8266C1FC;
loc_8266C194:
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266c1fc
	if (ctx.cr6.eq) goto loc_8266C1FC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266c1b0
	if (ctx.cr6.eq) goto loc_8266C1B0;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8266c1cc
	goto loc_8266C1CC;
loc_8266C1B0:
	// lwz r3,3284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 792);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266C1C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8266C1CC:
	// lwz r3,3288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 792);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266C1E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8266c1f8
	if (ctx.cr6.eq) goto loc_8266C1F8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// bne cr6,0x8266c1fc
	if (!ctx.cr6.eq) goto loc_8266C1FC;
loc_8266C1F8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8266C1FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C208"))) PPC_WEAK_FUNC(sub_8266C208);
PPC_FUNC_IMPL(__imp__sub_8266C208) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8266bf20
	sub_8266BF20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C210"))) PPC_WEAK_FUNC(sub_8266C210);
PPC_FUNC_IMPL(__imp__sub_8266C210) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8266bf20
	sub_8266BF20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C218"))) PPC_WEAK_FUNC(sub_8266C218);
PPC_FUNC_IMPL(__imp__sub_8266C218) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8266bed0
	sub_8266BED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C220"))) PPC_WEAK_FUNC(sub_8266C220);
PPC_FUNC_IMPL(__imp__sub_8266C220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-10336
	ctx.r3.s64 = ctx.r11.s64 + -10336;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266C230"))) PPC_WEAK_FUNC(sub_8266C230);
PPC_FUNC_IMPL(__imp__sub_8266C230) {
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
	// beq cr6,0x8266c268
	if (ctx.cr6.eq) goto loc_8266C268;
	// bl 0x823b8e78
	ctx.lr = 0x8266C258;
	sub_823B8E78(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8266c268
	if (!ctx.cr6.eq) goto loc_8266C268;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8266c274
	goto loc_8266C274;
loc_8266C268:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8250f560
	ctx.lr = 0x8266C274;
	sub_8250F560(ctx, base);
loc_8266C274:
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

__attribute__((alias("__imp__sub_8266C290"))) PPC_WEAK_FUNC(sub_8266C290);
PPC_FUNC_IMPL(__imp__sub_8266C290) {
	PPC_FUNC_PROLOGUE();
	// b 0x823b8e78
	sub_823B8E78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C298"))) PPC_WEAK_FUNC(sub_8266C298);
PPC_FUNC_IMPL(__imp__sub_8266C298) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3408
	ctx.r3.s64 = 3408;
	// bl 0x82833108
	ctx.lr = 0x8266C2B8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266c300
	if (ctx.cr0.eq) goto loc_8266C300;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250f690
	ctx.lr = 0x8266C2CC;
	sub_8250F690(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-19016
	ctx.r11.s64 = ctx.r11.s64 + -19016;
	// addi r10,r10,-17328
	ctx.r10.s64 = ctx.r10.s64 + -17328;
	// addi r9,r9,-20876
	ctx.r9.s64 = ctx.r9.s64 + -20876;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lfs f0,3392(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3392);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3392(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3392, temp.u32);
	// b 0x8266c304
	goto loc_8266C304;
loc_8266C300:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C304:
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

__attribute__((alias("__imp__sub_8266C320"))) PPC_WEAK_FUNC(sub_8266C320);
PPC_FUNC_IMPL(__imp__sub_8266C320) {
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
	// bl 0x823b8e78
	ctx.lr = 0x8266C340;
	sub_823B8E78(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8266c354
	if (ctx.cr6.eq) goto loc_8266C354;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8250f608
	ctx.lr = 0x8266C354;
	sub_8250F608(ctx, base);
loc_8266C354:
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

__attribute__((alias("__imp__sub_8266C370"))) PPC_WEAK_FUNC(sub_8266C370);
PPC_FUNC_IMPL(__imp__sub_8266C370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8266C378;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82668fe8
	ctx.lr = 0x8266C384;
	sub_82668FE8(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,-19016
	ctx.r11.s64 = ctx.r11.s64 + -19016;
	// addi r10,r10,-17328
	ctx.r10.s64 = ctx.r10.s64 + -17328;
	// stw r30,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r30.u32);
	// addi r9,r9,-20876
	ctx.r9.s64 = ctx.r9.s64 + -20876;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r28,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r28.u32);
	// stw r30,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r30.u32);
	// addi r3,r11,-10616
	ctx.r3.s64 = ctx.r11.s64 + -10616;
	// stw r30,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r30.u32);
	// bl 0x82816528
	ctx.lr = 0x8266C3CC;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-23833
	ctx.r10.s64 = -1561919488;
	// stw r30,2052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2052, ctx.r30.u32);
	// lis r9,26549
	ctx.r9.s64 = 1739915264;
	// stw r30,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r30.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r3,3308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3308, ctx.r3.u32);
	// ori r29,r10,51940
	ctx.r29.u64 = ctx.r10.u64 | 51940;
	// stw r3,3312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3312, ctx.r3.u32);
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// li r6,128
	ctx.r6.s64 = 128;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r25,88(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ori r24,r9,52330
	ctx.r24.u64 = ctx.r9.u64 | 52330;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r23,96(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r7,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r7.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r7,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r7.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r6,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r6.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stw r29,3324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3324, ctx.r29.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stw r24,3328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3328, ctx.r24.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r23,3332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3332, ctx.r23.u32);
	// addi r29,r31,1684
	ctx.r29.s64 = ctx.r31.s64 + 1684;
	// stw r5,3336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3336, ctx.r5.u32);
	// stw r4,3340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3340, ctx.r4.u32);
	// stw r11,3356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3356, ctx.r11.u32);
	// stw r10,3360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3360, ctx.r10.u32);
	// stw r9,3364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3364, ctx.r9.u32);
	// stw r27,3344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3344, ctx.r27.u32);
	// stw r26,3348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3348, ctx.r26.u32);
	// stw r25,3352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3352, ctx.r25.u32);
	// stw r8,3368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3368, ctx.r8.u32);
	// stw r7,3372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3372, ctx.r7.u32);
	// stw r6,3376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3376, ctx.r6.u32);
	// lwz r11,1704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r28.u32);
	// beq cr6,0x8266c4b0
	if (ctx.cr6.eq) goto loc_8266C4B0;
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8266C4B0;
	sub_82332C38(ctx, base);
loc_8266C4B0:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823327e0
	ctx.lr = 0x8266C4C8;
	sub_823327E0(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r29,r11,29568
	ctx.r29.s64 = ctx.r11.s64 + 29568;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r27,1696(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x82816528
	ctx.lr = 0x8266C4DC;
	sub_82816528(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r27,1696(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x82816528
	ctx.lr = 0x8266C4EC;
	sub_82816528(ctx, base);
	// stw r3,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r3.u32);
	// lwz r11,1680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1680);
	// addi r29,r31,1660
	ctx.r29.s64 = ctx.r31.s64 + 1660;
	// stw r28,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8266c518
	if (ctx.cr6.eq) goto loc_8266C518;
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8266C518;
	sub_82332C38(ctx, base);
loc_8266C518:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823327e0
	ctx.lr = 0x8266C530;
	sub_823327E0(ctx, base);
	// lwz r11,1672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// addi r29,r31,2020
	ctx.r29.s64 = ctx.r31.s64 + 2020;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lwz r11,1672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// stb r30,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r30.u8);
	// lwz r11,2040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2040);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,2036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2036, ctx.r28.u32);
	// beq cr6,0x8266c568
	if (ctx.cr6.eq) goto loc_8266C568;
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8266C568;
	sub_82332C38(ctx, base);
loc_8266C568:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823327e0
	ctx.lr = 0x8266C580;
	sub_823327E0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19044
	ctx.r4.s64 = ctx.r11.s64 + -19044;
	// lwz r11,2032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,2032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8233a258
	ctx.lr = 0x8266C5A0;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,2320
	ctx.r3.s64 = ctx.r31.s64 + 2320;
	// bl 0x82400b48
	ctx.lr = 0x8266C5AC;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x8266C5B4;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r28.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C5C8"))) PPC_WEAK_FUNC(sub_8266C5C8);
PPC_FUNC_IMPL(__imp__sub_8266C5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// std r9,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r9.u64);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8266a3d0
	ctx.lr = 0x8266C5F8;
	sub_8266A3D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,1576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1576);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266C610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1576);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266C628;
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

__attribute__((alias("__imp__sub_8266C640"))) PPC_WEAK_FUNC(sub_8266C640);
PPC_FUNC_IMPL(__imp__sub_8266C640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8266C648;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,3284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266c694
	if (ctx.cr6.eq) goto loc_8266C694;
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r30,1632(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1632);
	// stw r11,3300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3300, ctx.r11.u32);
	// bl 0x8254a710
	ctx.lr = 0x8266C66C;
	sub_8254A710(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f0,3392(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3392);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f0,3284(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3284, temp.u32);
	// bl 0x828a30d8
	ctx.lr = 0x8266C680;
	sub_828A30D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x828a2a88
	ctx.lr = 0x8266C68C;
	sub_828A2A88(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828a3140
	ctx.lr = 0x8266C694;
	sub_828A3140(ctx, base);
loc_8266C694:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C6A0"))) PPC_WEAK_FUNC(sub_8266C6A0);
PPC_FUNC_IMPL(__imp__sub_8266C6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8266C6A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,3288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266c6f4
	if (ctx.cr6.eq) goto loc_8266C6F4;
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r30,1632(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1632);
	// stw r11,3304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3304, ctx.r11.u32);
	// bl 0x8254a710
	ctx.lr = 0x8266C6CC;
	sub_8254A710(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f0,3392(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3392);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f0,3284(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3284, temp.u32);
	// bl 0x828a30d8
	ctx.lr = 0x8266C6E0;
	sub_828A30D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x828a2a88
	ctx.lr = 0x8266C6EC;
	sub_828A2A88(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828a3140
	ctx.lr = 0x8266C6F4;
	sub_828A3140(ctx, base);
loc_8266C6F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C700"))) PPC_WEAK_FUNC(sub_8266C700);
PPC_FUNC_IMPL(__imp__sub_8266C700) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r4,1632(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1632);
	// lwz r3,3284(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3284);
	// stw r10,3300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3300, ctx.r10.u32);
	// b 0x828a2dd0
	sub_828A2DD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C718"))) PPC_WEAK_FUNC(sub_8266C718);
PPC_FUNC_IMPL(__imp__sub_8266C718) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r4,1632(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1632);
	// lwz r3,3288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3288);
	// stw r10,3304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3304, ctx.r10.u32);
	// b 0x828a2dd0
	sub_828A2DD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C730"))) PPC_WEAK_FUNC(sub_8266C730);
PPC_FUNC_IMPL(__imp__sub_8266C730) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8266c320
	sub_8266C320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C738"))) PPC_WEAK_FUNC(sub_8266C738);
PPC_FUNC_IMPL(__imp__sub_8266C738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6760
	ctx.r3.s64 = ctx.r11.s64 + -6760;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266C748"))) PPC_WEAK_FUNC(sub_8266C748);
PPC_FUNC_IMPL(__imp__sub_8266C748) {
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
	// beq cr6,0x8266c780
	if (ctx.cr6.eq) goto loc_8266C780;
	// bl 0x823c2b00
	ctx.lr = 0x8266C770;
	sub_823C2B00(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8266c780
	if (!ctx.cr6.eq) goto loc_8266C780;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8266c78c
	goto loc_8266C78C;
loc_8266C780:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8250f560
	ctx.lr = 0x8266C78C;
	sub_8250F560(ctx, base);
loc_8266C78C:
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

__attribute__((alias("__imp__sub_8266C7A8"))) PPC_WEAK_FUNC(sub_8266C7A8);
PPC_FUNC_IMPL(__imp__sub_8266C7A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c2b00
	sub_823C2B00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C7B0"))) PPC_WEAK_FUNC(sub_8266C7B0);
PPC_FUNC_IMPL(__imp__sub_8266C7B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x824fe1a8
	sub_824FE1A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266C7B8"))) PPC_WEAK_FUNC(sub_8266C7B8);
PPC_FUNC_IMPL(__imp__sub_8266C7B8) {
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
	// li r3,3392
	ctx.r3.s64 = 3392;
	// bl 0x82833108
	ctx.lr = 0x8266C7D8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266c818
	if (ctx.cr0.eq) goto loc_8266C818;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250f690
	ctx.lr = 0x8266C7EC;
	sub_8250F690(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-17112
	ctx.r11.s64 = ctx.r11.s64 + -17112;
	// addi r10,r10,-15424
	ctx.r10.s64 = ctx.r10.s64 + -15424;
	// addi r9,r9,-20876
	ctx.r9.s64 = ctx.r9.s64 + -20876;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8266c81c
	goto loc_8266C81C;
loc_8266C818:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C81C:
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

__attribute__((alias("__imp__sub_8266C838"))) PPC_WEAK_FUNC(sub_8266C838);
PPC_FUNC_IMPL(__imp__sub_8266C838) {
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
	// bl 0x823c2b00
	ctx.lr = 0x8266C858;
	sub_823C2B00(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8266c86c
	if (ctx.cr6.eq) goto loc_8266C86C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8250f608
	ctx.lr = 0x8266C86C;
	sub_8250F608(ctx, base);
loc_8266C86C:
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

__attribute__((alias("__imp__sub_8266C888"))) PPC_WEAK_FUNC(sub_8266C888);
PPC_FUNC_IMPL(__imp__sub_8266C888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8266C890;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82668fe8
	ctx.lr = 0x8266C8A0;
	sub_82668FE8(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-17112
	ctx.r11.s64 = ctx.r11.s64 + -17112;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r10,r10,-15424
	ctx.r10.s64 = ctx.r10.s64 + -15424;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r9,r9,-20876
	ctx.r9.s64 = ctx.r9.s64 + -20876;
	// stw r30,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r30.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r30,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r30.u32);
	// li r29,2
	ctx.r29.s64 = 2;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r28,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r28.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stw r29,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r29.u32);
	// addi r27,r11,-17276
	ctx.r27.s64 = ctx.r11.s64 + -17276;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x828165a8
	ctx.lr = 0x8266C8F0;
	sub_828165A8(ctx, base);
	// stw r3,3308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3308, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x828165a8
	ctx.lr = 0x8266C8FC;
	sub_828165A8(ctx, base);
	// li r11,4112
	ctx.r11.s64 = 4112;
	// stw r3,3312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3312, ctx.r3.u32);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// stw r11,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r11.u32);
	// addi r3,r10,-17232
	ctx.r3.s64 = ctx.r10.s64 + -17232;
	// bl 0x828165a8
	ctx.lr = 0x8266C914;
	sub_828165A8(ctx, base);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r3,3324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3324, ctx.r3.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r11,3356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3356, ctx.r11.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// stw r10,3360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3360, ctx.r10.u32);
	// li r9,32767
	ctx.r9.s64 = 32767;
	// lfs f31,904(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,19848(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 19848);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,3364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3364, ctx.r9.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,3336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3336, ctx.r9.u32);
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// stw r10,3332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3332, ctx.r10.u32);
	// addi r3,r9,-17204
	ctx.r3.s64 = ctx.r9.s64 + -17204;
	// stw r11,3340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3340, ctx.r11.u32);
	// bl 0x828165a8
	ctx.lr = 0x8266C970;
	sub_828165A8(ctx, base);
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// stw r11,3344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3344, ctx.r11.u32);
	// li r7,100
	ctx.r7.s64 = 100;
	// lwz r11,13024(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13024);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r7,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r7.u32);
	// stw r7,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r7.u32);
	// stw r3,3328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3328, ctx.r3.u32);
	// stw r30,2052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2052, ctx.r30.u32);
	// stw r30,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r30.u32);
	// stw r6,3348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3348, ctx.r6.u32);
	// stw r10,3368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3368, ctx.r10.u32);
	// stw r9,3372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3372, ctx.r9.u32);
	// stw r8,3376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3376, ctx.r8.u32);
	// stw r5,3352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3352, ctx.r5.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8266c9fc
	if (ctx.cr6.eq) goto loc_8266C9FC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r5,r11,-30812
	ctx.r5.s64 = ctx.r11.s64 + -30812;
	// addi r4,r10,-17176
	ctx.r4.s64 = ctx.r10.s64 + -17176;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r31,3212
	ctx.r6.s64 = ctx.r31.s64 + 3212;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8266C9FC;
	sub_828C5740(ctx, base);
loc_8266C9FC:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2020
	ctx.r3.s64 = ctx.r31.s64 + 2020;
	// bl 0x823327e0
	ctx.lr = 0x8266CA14;
	sub_823327E0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23688
	ctx.r4.s64 = ctx.r11.s64 + -23688;
	// lwz r11,2032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,2032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r11,1672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// stw r28,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r28.u32);
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// lwz r11,1672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// stb r29,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r29.u8);
	// bl 0x8233a258
	ctx.lr = 0x8266CA48;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,2320
	ctx.r3.s64 = ctx.r31.s64 + 2320;
	// bl 0x82400b48
	ctx.lr = 0x8266CA54;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x8266CA5C;
	sub_82333960(ctx, base);
	// lis r11,13188
	ctx.r11.s64 = 864288768;
	// lis r10,15873
	ctx.r10.s64 = 1040252928;
	// li r9,35
	ctx.r9.s64 = 35;
	// ori r11,r11,25176
	ctx.r11.u64 = ctx.r11.u64 | 25176;
	// ori r10,r10,46579
	ctx.r10.u64 = ctx.r10.u64 | 46579;
	// stw r9,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r9.u32);
	// stw r11,3100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266CA90"))) PPC_WEAK_FUNC(sub_8266CA90);
PPC_FUNC_IMPL(__imp__sub_8266CA90) {
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
	// bl 0x82669150
	ctx.lr = 0x8266CAAC;
	sub_82669150(ctx, base);
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266cacc
	if (ctx.cr0.eq) goto loc_8266CACC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8266cacc
	if (ctx.cr6.eq) goto loc_8266CACC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8266cad0
	goto loc_8266CAD0;
loc_8266CACC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8266CAD0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6728
	ctx.r3.s64 = ctx.r11.s64 + -6728;
	// bl 0x82816528
	ctx.lr = 0x8266CADC;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,28548
	ctx.r3.s64 = ctx.r11.s64 + 28548;
	// bl 0x82816528
	ctx.lr = 0x8266CAEC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x828d0cb0
	ctx.lr = 0x8266CAFC;
	sub_828D0CB0(ctx, base);
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

__attribute__((alias("__imp__sub_8266CB18"))) PPC_WEAK_FUNC(sub_8266CB18);
PPC_FUNC_IMPL(__imp__sub_8266CB18) {
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
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// std r9,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r9.u64);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8266a3d0
	ctx.lr = 0x8266CB48;
	sub_8266A3D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,1576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1576);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266CB60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1576);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266CB78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r5,1209
	ctx.r5.s64 = 79233024;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r4,9265
	ctx.r4.s64 = 607191040;
	// ori r5,r5,4666
	ctx.r5.u64 = ctx.r5.u64 | 4666;
	// ori r4,r4,30242
	ctx.r4.u64 = ctx.r4.u64 | 30242;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266CBA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x8266CBB8;
	sub_8233A258(ctx, base);
	// lis r4,15873
	ctx.r4.s64 = 1040252928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,46579
	ctx.r4.u64 = ctx.r4.u64 | 46579;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x8266CBCC;
	sub_829C3740(ctx, base);
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

__attribute__((alias("__imp__sub_8266CBE0"))) PPC_WEAK_FUNC(sub_8266CBE0);
PPC_FUNC_IMPL(__imp__sub_8266CBE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r6,821
	ctx.r11.s64 = ctx.r6.s64 + 821;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// bl 0x8266cdf0
	ctx.lr = 0x8266CC08;
	sub_8266CDF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266cc30
	if (ctx.cr0.eq) goto loc_8266CC30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1604(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1604);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266CC30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266CC30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266CC48"))) PPC_WEAK_FUNC(sub_8266CC48);
PPC_FUNC_IMPL(__imp__sub_8266CC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r6,821
	ctx.r11.s64 = ctx.r6.s64 + 821;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// bl 0x8266cdf0
	ctx.lr = 0x8266CC70;
	sub_8266CDF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266cc98
	if (ctx.cr0.eq) goto loc_8266CC98;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266CC98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266CC98:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266CCB0"))) PPC_WEAK_FUNC(sub_8266CCB0);
PPC_FUNC_IMPL(__imp__sub_8266CCB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r31,821
	ctx.r11.s64 = ctx.r31.s64 + 821;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// bl 0x8266cdf0
	ctx.lr = 0x8266CCD4;
	sub_8266CDF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266ccf0
	if (ctx.cr0.eq) goto loc_8266CCF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,1648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1648);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266CCF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266CCF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266CD08"))) PPC_WEAK_FUNC(sub_8266CD08);
PPC_FUNC_IMPL(__imp__sub_8266CD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8266CD10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8266cd64
	if (ctx.cr6.eq) goto loc_8266CD64;
	// bl 0x823c2b00
	ctx.lr = 0x8266CD38;
	sub_823C2B00(ctx, base);
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
	ctx.lr = 0x8266CD50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8266cd5c
	if (!ctx.cr0.eq) goto loc_8266CD5C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8266CD5C:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x8266cd68
	goto loc_8266CD68;
loc_8266CD64:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8266CD68:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8266cdc0
	if (ctx.cr6.eq) goto loc_8266CDC0;
	// lwz r3,3284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3284);
	// bl 0x8266cdf0
	ctx.lr = 0x8266CD78;
	sub_8266CDF0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266cd98
	if (ctx.cr0.eq) goto loc_8266CD98;
	// lwz r3,3280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8266cd98
	if (ctx.cr6.eq) goto loc_8266CD98;
	// bl 0x82715610
	ctx.lr = 0x8266CD90;
	sub_82715610(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2452, ctx.r11.u32);
loc_8266CD98:
	// lwz r3,3288(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3288);
	// bl 0x8266cdf0
	ctx.lr = 0x8266CDA0;
	sub_8266CDF0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266cdc0
	if (ctx.cr0.eq) goto loc_8266CDC0;
	// lwz r3,3280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8266cdc0
	if (ctx.cr6.eq) goto loc_8266CDC0;
	// bl 0x82715610
	ctx.lr = 0x8266CDB8;
	sub_82715610(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2452, ctx.r11.u32);
loc_8266CDC0:
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82661510
	ctx.lr = 0x8266CDE4;
	sub_82661510(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266CDF0"))) PPC_WEAK_FUNC(sub_8266CDF0);
PPC_FUNC_IMPL(__imp__sub_8266CDF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8266ce34
	if (ctx.cr6.eq) goto loc_8266CE34;
	// bl 0x823c3eb8
	ctx.lr = 0x8266CE10;
	sub_823C3EB8(ctx, base);
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
	ctx.lr = 0x8266CE28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8266ce38
	if (!ctx.cr0.eq) goto loc_8266CE38;
loc_8266CE34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266CE38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266CE50"))) PPC_WEAK_FUNC(sub_8266CE50);
PPC_FUNC_IMPL(__imp__sub_8266CE50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8266c838
	sub_8266C838(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266CE58"))) PPC_WEAK_FUNC(sub_8266CE58);
PPC_FUNC_IMPL(__imp__sub_8266CE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6676
	ctx.r3.s64 = ctx.r11.s64 + -6676;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266CE68"))) PPC_WEAK_FUNC(sub_8266CE68);
PPC_FUNC_IMPL(__imp__sub_8266CE68) {
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
	// beq cr6,0x8266cea0
	if (ctx.cr6.eq) goto loc_8266CEA0;
	// bl 0x823c2da0
	ctx.lr = 0x8266CE90;
	sub_823C2DA0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8266cea0
	if (!ctx.cr6.eq) goto loc_8266CEA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8266ceac
	goto loc_8266CEAC;
loc_8266CEA0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8250f560
	ctx.lr = 0x8266CEAC;
	sub_8250F560(ctx, base);
loc_8266CEAC:
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

__attribute__((alias("__imp__sub_8266CEC8"))) PPC_WEAK_FUNC(sub_8266CEC8);
PPC_FUNC_IMPL(__imp__sub_8266CEC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c2da0
	sub_823C2DA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266CED0"))) PPC_WEAK_FUNC(sub_8266CED0);
PPC_FUNC_IMPL(__imp__sub_8266CED0) {
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
	// li r3,3392
	ctx.r3.s64 = 3392;
	// bl 0x82833108
	ctx.lr = 0x8266CEF0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266cf30
	if (ctx.cr0.eq) goto loc_8266CF30;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250f690
	ctx.lr = 0x8266CF04;
	sub_8250F690(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-15264
	ctx.r11.s64 = ctx.r11.s64 + -15264;
	// addi r10,r10,-13576
	ctx.r10.s64 = ctx.r10.s64 + -13576;
	// addi r9,r9,-20876
	ctx.r9.s64 = ctx.r9.s64 + -20876;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8266cf34
	goto loc_8266CF34;
loc_8266CF30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266CF34:
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

__attribute__((alias("__imp__sub_8266CF50"))) PPC_WEAK_FUNC(sub_8266CF50);
PPC_FUNC_IMPL(__imp__sub_8266CF50) {
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
	// bl 0x823c2da0
	ctx.lr = 0x8266CF70;
	sub_823C2DA0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8266cf84
	if (ctx.cr6.eq) goto loc_8266CF84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8250f608
	ctx.lr = 0x8266CF84;
	sub_8250F608(ctx, base);
loc_8266CF84:
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

__attribute__((alias("__imp__sub_8266CFA0"))) PPC_WEAK_FUNC(sub_8266CFA0);
PPC_FUNC_IMPL(__imp__sub_8266CFA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8266CFA8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82668fe8
	ctx.lr = 0x8266CFB8;
	sub_82668FE8(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-15264
	ctx.r11.s64 = ctx.r11.s64 + -15264;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-13576
	ctx.r10.s64 = ctx.r10.s64 + -13576;
	// stw r30,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r30.u32);
	// addi r9,r9,-20876
	ctx.r9.s64 = ctx.r9.s64 + -20876;
	// stw r29,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r29.u32);
	// stw r29,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r29.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r28,r11,-15372
	ctx.r28.s64 = ctx.r11.s64 + -15372;
	// stw r30,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828165a8
	ctx.lr = 0x8266D004;
	sub_828165A8(ctx, base);
	// stw r3,3308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3308, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828165a8
	ctx.lr = 0x8266D010;
	sub_828165A8(ctx, base);
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r3,3312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3312, ctx.r3.u32);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// stw r11,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r11.u32);
	// addi r3,r10,-17232
	ctx.r3.s64 = ctx.r10.s64 + -17232;
	// bl 0x828165a8
	ctx.lr = 0x8266D028;
	sub_828165A8(ctx, base);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r3,3324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3324, ctx.r3.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r11,3356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3356, ctx.r11.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// stw r10,3360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3360, ctx.r10.u32);
	// li r9,32767
	ctx.r9.s64 = 32767;
	// lfs f31,904(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,19848(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 19848);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,3364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3364, ctx.r9.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,3336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3336, ctx.r9.u32);
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// stw r10,3332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3332, ctx.r10.u32);
	// addi r3,r9,-17204
	ctx.r3.s64 = ctx.r9.s64 + -17204;
	// stw r11,3340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3340, ctx.r11.u32);
	// bl 0x828165a8
	ctx.lr = 0x8266D084;
	sub_828165A8(ctx, base);
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// stw r11,3344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3344, ctx.r11.u32);
	// li r7,100
	ctx.r7.s64 = 100;
	// lwz r11,13024(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13024);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r7,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r7.u32);
	// stw r7,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r7.u32);
	// stw r3,3328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3328, ctx.r3.u32);
	// stw r30,2052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2052, ctx.r30.u32);
	// stw r30,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r30.u32);
	// stw r6,3348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3348, ctx.r6.u32);
	// stw r5,3352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3352, ctx.r5.u32);
	// stw r10,3368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3368, ctx.r10.u32);
	// stw r9,3372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3372, ctx.r9.u32);
	// stw r8,3376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3376, ctx.r8.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8266d110
	if (ctx.cr6.eq) goto loc_8266D110;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r5,r11,-30812
	ctx.r5.s64 = ctx.r11.s64 + -30812;
	// addi r4,r10,-15324
	ctx.r4.s64 = ctx.r10.s64 + -15324;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r31,3212
	ctx.r6.s64 = ctx.r31.s64 + 3212;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8266D110;
	sub_828C5740(ctx, base);
loc_8266D110:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2020
	ctx.r3.s64 = ctx.r31.s64 + 2020;
	// bl 0x823327e0
	ctx.lr = 0x8266D128;
	sub_823327E0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23708
	ctx.r4.s64 = ctx.r11.s64 + -23708;
	// lwz r11,2032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,2032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r29,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r29.u32);
	// bl 0x8233a258
	ctx.lr = 0x8266D14C;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,2320
	ctx.r3.s64 = ctx.r31.s64 + 2320;
	// bl 0x82400b48
	ctx.lr = 0x8266D158;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x8266D160;
	sub_82333960(ctx, base);
	// lis r11,1942
	ctx.r11.s64 = 127270912;
	// lis r10,15873
	ctx.r10.s64 = 1040252928;
	// li r9,38
	ctx.r9.s64 = 38;
	// ori r11,r11,33482
	ctx.r11.u64 = ctx.r11.u64 | 33482;
	// ori r10,r10,46579
	ctx.r10.u64 = ctx.r10.u64 | 46579;
	// stw r9,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r9.u32);
	// stw r11,3100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D190"))) PPC_WEAK_FUNC(sub_8266D190);
PPC_FUNC_IMPL(__imp__sub_8266D190) {
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
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// std r9,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r9.u64);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8266a3d0
	ctx.lr = 0x8266D1C0;
	sub_8266A3D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,1576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1576);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266D1D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1576);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266D1F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r5,12183
	ctx.r5.s64 = 798425088;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r4,9265
	ctx.r4.s64 = 607191040;
	// ori r5,r5,7736
	ctx.r5.u64 = ctx.r5.u64 | 7736;
	// ori r4,r4,30242
	ctx.r4.u64 = ctx.r4.u64 | 30242;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266D220;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x8266D230;
	sub_8233A258(ctx, base);
	// lis r4,15873
	ctx.r4.s64 = 1040252928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,46579
	ctx.r4.u64 = ctx.r4.u64 | 46579;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x8266D244;
	sub_829C3740(ctx, base);
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

__attribute__((alias("__imp__sub_8266D258"))) PPC_WEAK_FUNC(sub_8266D258);
PPC_FUNC_IMPL(__imp__sub_8266D258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8266a428
	ctx.lr = 0x8266D270;
	sub_8266A428(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1580);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266D288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1580);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266D2A0;
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

__attribute__((alias("__imp__sub_8266D2B8"))) PPC_WEAK_FUNC(sub_8266D2B8);
PPC_FUNC_IMPL(__imp__sub_8266D2B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8266cf50
	sub_8266CF50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D2C0"))) PPC_WEAK_FUNC(sub_8266D2C0);
PPC_FUNC_IMPL(__imp__sub_8266D2C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6792
	ctx.r3.s64 = ctx.r11.s64 + -6792;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266D2D0"))) PPC_WEAK_FUNC(sub_8266D2D0);
PPC_FUNC_IMPL(__imp__sub_8266D2D0) {
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
	// beq cr6,0x8266d308
	if (ctx.cr6.eq) goto loc_8266D308;
	// bl 0x823c29c0
	ctx.lr = 0x8266D2F8;
	sub_823C29C0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8266d308
	if (!ctx.cr6.eq) goto loc_8266D308;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8266d314
	goto loc_8266D314;
loc_8266D308:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8250f560
	ctx.lr = 0x8266D314;
	sub_8250F560(ctx, base);
loc_8266D314:
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

__attribute__((alias("__imp__sub_8266D330"))) PPC_WEAK_FUNC(sub_8266D330);
PPC_FUNC_IMPL(__imp__sub_8266D330) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c29c0
	sub_823C29C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D338"))) PPC_WEAK_FUNC(sub_8266D338);
PPC_FUNC_IMPL(__imp__sub_8266D338) {
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
	// li r3,3392
	ctx.r3.s64 = 3392;
	// bl 0x82833108
	ctx.lr = 0x8266D358;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266d398
	if (ctx.cr0.eq) goto loc_8266D398;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250f690
	ctx.lr = 0x8266D36C;
	sub_8250F690(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-13424
	ctx.r11.s64 = ctx.r11.s64 + -13424;
	// addi r10,r10,-11736
	ctx.r10.s64 = ctx.r10.s64 + -11736;
	// addi r9,r9,-20876
	ctx.r9.s64 = ctx.r9.s64 + -20876;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8266d39c
	goto loc_8266D39C;
loc_8266D398:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D39C:
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

__attribute__((alias("__imp__sub_8266D3B8"))) PPC_WEAK_FUNC(sub_8266D3B8);
PPC_FUNC_IMPL(__imp__sub_8266D3B8) {
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
	// bl 0x823c29c0
	ctx.lr = 0x8266D3D8;
	sub_823C29C0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8266d3ec
	if (ctx.cr6.eq) goto loc_8266D3EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8250f608
	ctx.lr = 0x8266D3EC;
	sub_8250F608(ctx, base);
loc_8266D3EC:
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

__attribute__((alias("__imp__sub_8266D408"))) PPC_WEAK_FUNC(sub_8266D408);
PPC_FUNC_IMPL(__imp__sub_8266D408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8266D410;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82668fe8
	ctx.lr = 0x8266D41C;
	sub_82668FE8(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,-13424
	ctx.r11.s64 = ctx.r11.s64 + -13424;
	// addi r10,r10,-11736
	ctx.r10.s64 = ctx.r10.s64 + -11736;
	// stw r30,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r30.u32);
	// addi r9,r9,-20876
	ctx.r9.s64 = ctx.r9.s64 + -20876;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// stw r29,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r29.u32);
	// stw r30,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r30.u32);
	// addi r3,r11,-13524
	ctx.r3.s64 = ctx.r11.s64 + -13524;
	// stw r30,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r30.u32);
	// bl 0x828165a8
	ctx.lr = 0x8266D464;
	sub_828165A8(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r3,3308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3308, ctx.r3.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r3,3312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3312, ctx.r3.u32);
	// lis r3,-32215
	ctx.r3.s64 = -2111242240;
	// lis r9,9749
	ctx.r9.s64 = 638910464;
	// stw r11,3356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3356, ctx.r11.u32);
	// li r5,100
	ctx.r5.s64 = 100;
	// stw r30,2052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2052, ctx.r30.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,26669
	ctx.r8.s64 = 1747779584;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r25,96(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f13,19848(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 19848);
	ctx.f13.f64 = double(temp.f32);
	// ori r11,r9,17317
	ctx.r11.u64 = ctx.r9.u64 | 17317;
	// stw r5,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r5.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r5,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r5.u32);
	// ori r9,r8,58543
	ctx.r9.u64 = ctx.r8.u64 | 58543;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r10,4224
	ctx.r10.s64 = 4224;
	// stw r10,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r10.u32);
	// lis r6,-31949
	ctx.r6.s64 = -2093809664;
	// stw r11,3324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3324, ctx.r11.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r9,3328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3328, ctx.r9.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r30,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r30.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r5,3336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3336, ctx.r5.u32);
	// li r9,32767
	ctx.r9.s64 = 32767;
	// lwz r11,13024(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13024);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r25,3332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3332, ctx.r25.u32);
	// stw r4,3340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3340, ctx.r4.u32);
	// stw r10,3360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3360, ctx.r10.u32);
	// stw r9,3364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3364, ctx.r9.u32);
	// stw r28,3344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3344, ctx.r28.u32);
	// stw r27,3348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3348, ctx.r27.u32);
	// stw r26,3352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3352, ctx.r26.u32);
	// stw r8,3368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3368, ctx.r8.u32);
	// stw r7,3372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3372, ctx.r7.u32);
	// stw r6,3376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3376, ctx.r6.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8266d560
	if (ctx.cr6.eq) goto loc_8266D560;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r5,r11,-30812
	ctx.r5.s64 = ctx.r11.s64 + -30812;
	// addi r4,r10,-13480
	ctx.r4.s64 = ctx.r10.s64 + -13480;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r31,3212
	ctx.r6.s64 = ctx.r31.s64 + 3212;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8266D560;
	sub_828C5740(ctx, base);
loc_8266D560:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2020
	ctx.r3.s64 = ctx.r31.s64 + 2020;
	// bl 0x823327e0
	ctx.lr = 0x8266D578;
	sub_823327E0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-23728
	ctx.r4.s64 = ctx.r11.s64 + -23728;
	// lwz r11,2032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,2032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8233a258
	ctx.lr = 0x8266D598;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,2320
	ctx.r3.s64 = ctx.r31.s64 + 2320;
	// bl 0x82400b48
	ctx.lr = 0x8266D5A4;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x8266D5AC;
	sub_82333960(ctx, base);
	// lis r11,15683
	ctx.r11.s64 = 1027801088;
	// lis r10,15873
	ctx.r10.s64 = 1040252928;
	// stw r29,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r29.u32);
	// ori r11,r11,56281
	ctx.r11.u64 = ctx.r11.u64 | 56281;
	// li r9,41
	ctx.r9.s64 = 41;
	// ori r10,r10,46579
	ctx.r10.u64 = ctx.r10.u64 | 46579;
	// stw r11,3100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3100, ctx.r11.u32);
	// stw r9,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D5E0"))) PPC_WEAK_FUNC(sub_8266D5E0);
PPC_FUNC_IMPL(__imp__sub_8266D5E0) {
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
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// std r9,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r9.u64);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8266a3d0
	ctx.lr = 0x8266D610;
	sub_8266A3D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,1576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1576);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266D628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1576);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266D640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r5,2722
	ctx.r5.s64 = 178388992;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r4,9265
	ctx.r4.s64 = 607191040;
	// ori r5,r5,49107
	ctx.r5.u64 = ctx.r5.u64 | 49107;
	// ori r4,r4,30242
	ctx.r4.u64 = ctx.r4.u64 | 30242;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266D670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x8266D680;
	sub_8233A258(ctx, base);
	// lis r4,15873
	ctx.r4.s64 = 1040252928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,46579
	ctx.r4.u64 = ctx.r4.u64 | 46579;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x8266D694;
	sub_829C3740(ctx, base);
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

__attribute__((alias("__imp__sub_8266D6A8"))) PPC_WEAK_FUNC(sub_8266D6A8);
PPC_FUNC_IMPL(__imp__sub_8266D6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8266D6B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r31,3284(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3284);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8266d6ec
	if (ctx.cr6.eq) goto loc_8266D6EC;
	// bl 0x823c3d78
	ctx.lr = 0x8266D6CC;
	sub_823C3D78(ctx, base);
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
	ctx.lr = 0x8266D6E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8266d6f0
	if (!ctx.cr0.eq) goto loc_8266D6F0;
loc_8266D6EC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8266D6F0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8266d700
	if (!ctx.cr6.eq) goto loc_8266D700;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1632(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1632, ctx.r11.u8);
loc_8266D700:
	// lwz r31,3288(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3288);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8266d730
	if (ctx.cr6.eq) goto loc_8266D730;
	// bl 0x823c3d78
	ctx.lr = 0x8266D710;
	sub_823C3D78(ctx, base);
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
	ctx.lr = 0x8266D728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8266d734
	if (!ctx.cr0.eq) goto loc_8266D734;
loc_8266D730:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8266D734:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8266d744
	if (!ctx.cr6.eq) goto loc_8266D744;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1632(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1632, ctx.r11.u8);
loc_8266D744:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D750"))) PPC_WEAK_FUNC(sub_8266D750);
PPC_FUNC_IMPL(__imp__sub_8266D750) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8266d3b8
	sub_8266D3B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D758"))) PPC_WEAK_FUNC(sub_8266D758);
PPC_FUNC_IMPL(__imp__sub_8266D758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6880
	ctx.r3.s64 = ctx.r11.s64 + -6880;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266D768"))) PPC_WEAK_FUNC(sub_8266D768);
PPC_FUNC_IMPL(__imp__sub_8266D768) {
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
	// beq cr6,0x8266d7a0
	if (ctx.cr6.eq) goto loc_8266D7A0;
	// bl 0x823c25f8
	ctx.lr = 0x8266D790;
	sub_823C25F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8266d7a0
	if (!ctx.cr6.eq) goto loc_8266D7A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8266d7ac
	goto loc_8266D7AC;
loc_8266D7A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8250f560
	ctx.lr = 0x8266D7AC;
	sub_8250F560(ctx, base);
loc_8266D7AC:
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

__attribute__((alias("__imp__sub_8266D7C8"))) PPC_WEAK_FUNC(sub_8266D7C8);
PPC_FUNC_IMPL(__imp__sub_8266D7C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c25f8
	sub_823C25F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266D7D0"))) PPC_WEAK_FUNC(sub_8266D7D0);
PPC_FUNC_IMPL(__imp__sub_8266D7D0) {
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
	// li r3,3392
	ctx.r3.s64 = 3392;
	// bl 0x82833108
	ctx.lr = 0x8266D7F0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266d830
	if (ctx.cr0.eq) goto loc_8266D830;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250f690
	ctx.lr = 0x8266D804;
	sub_8250F690(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-11632
	ctx.r11.s64 = ctx.r11.s64 + -11632;
	// addi r10,r10,-9944
	ctx.r10.s64 = ctx.r10.s64 + -9944;
	// addi r9,r9,-20876
	ctx.r9.s64 = ctx.r9.s64 + -20876;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8266d834
	goto loc_8266D834;
loc_8266D830:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D834:
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

__attribute__((alias("__imp__sub_8266D850"))) PPC_WEAK_FUNC(sub_8266D850);
PPC_FUNC_IMPL(__imp__sub_8266D850) {
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
	// bl 0x823c25f8
	ctx.lr = 0x8266D870;
	sub_823C25F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8266d884
	if (ctx.cr6.eq) goto loc_8266D884;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8250f608
	ctx.lr = 0x8266D884;
	sub_8250F608(ctx, base);
loc_8266D884:
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

__attribute__((alias("__imp__sub_8266D8A0"))) PPC_WEAK_FUNC(sub_8266D8A0);
PPC_FUNC_IMPL(__imp__sub_8266D8A0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82668fe8
	ctx.lr = 0x8266D8BC;
	sub_82668FE8(ctx, base);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-11632
	ctx.r10.s64 = ctx.r10.s64 + -11632;
	// addi r9,r9,-9944
	ctx.r9.s64 = ctx.r9.s64 + -9944;
	// stw r11,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r11.u32);
	// addi r8,r8,-20876
	ctx.r8.s64 = ctx.r8.s64 + -20876;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// stw r11,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r11.u32);
	// addi r30,r10,-5736
	ctx.r30.s64 = ctx.r10.s64 + -5736;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82816528
	ctx.lr = 0x8266D8FC;
	sub_82816528(ctx, base);
	// stw r3,3308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3308, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82816528
	ctx.lr = 0x8266D908;
	sub_82816528(ctx, base);
	// stw r3,3312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3312, ctx.r3.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-22696
	ctx.r3.s64 = ctx.r11.s64 + -22696;
	// bl 0x82816528
	ctx.lr = 0x8266D918;
	sub_82816528(ctx, base);
	// stw r3,3316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3316, ctx.r3.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-22684
	ctx.r3.s64 = ctx.r11.s64 + -22684;
	// bl 0x82816528
	ctx.lr = 0x8266D928;
	sub_82816528(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,-23833
	ctx.r8.s64 = -1561919488;
	// stw r3,3320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3320, ctx.r3.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r9,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r9.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r9,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r9.u32);
	// lis r7,26549
	ctx.r7.s64 = 1739915264;
	// stw r11,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r11.u32);
	// ori r11,r8,51940
	ctx.r11.u64 = ctx.r8.u64 | 51940;
	// stw r10,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r10.u32);
	// ori r10,r7,52330
	ctx.r10.u64 = ctx.r7.u64 | 52330;
	// li r8,26
	ctx.r8.s64 = 26;
	// stw r11,3324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3324, ctx.r11.u32);
	// stw r10,3328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3328, ctx.r10.u32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// stw r8,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23848
	ctx.r4.s64 = ctx.r11.s64 + -23848;
	// bl 0x8233a258
	ctx.lr = 0x8266D978;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,2320
	ctx.r3.s64 = ctx.r31.s64 + 2320;
	// bl 0x82400b48
	ctx.lr = 0x8266D984;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x8266D98C;
	sub_82333960(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8266d9c4
	if (ctx.cr6.eq) goto loc_8266D9C4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r5,r11,-30912
	ctx.r5.s64 = ctx.r11.s64 + -30912;
	// addi r4,r10,-11684
	ctx.r4.s64 = ctx.r10.s64 + -11684;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r31,3216
	ctx.r6.s64 = ctx.r31.s64 + 3216;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c58b0
	ctx.lr = 0x8266D9C4;
	sub_828C58B0(ctx, base);
loc_8266D9C4:
	// lis r11,10144
	ctx.r11.s64 = 664797184;
	// lis r10,3220
	ctx.r10.s64 = 211025920;
	// ori r11,r11,22616
	ctx.r11.u64 = ctx.r11.u64 | 22616;
	// ori r10,r10,49414
	ctx.r10.u64 = ctx.r10.u64 | 49414;
	// stw r11,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,3088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3088, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8266D9F8"))) PPC_WEAK_FUNC(sub_8266D9F8);
PPC_FUNC_IMPL(__imp__sub_8266D9F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8266d850
	sub_8266D850(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266DA00"))) PPC_WEAK_FUNC(sub_8266DA00);
PPC_FUNC_IMPL(__imp__sub_8266DA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18184
	ctx.r3.s64 = ctx.r11.s64 + -18184;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266DA10"))) PPC_WEAK_FUNC(sub_8266DA10);
PPC_FUNC_IMPL(__imp__sub_8266DA10) {
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
	// beq cr6,0x8266da48
	if (ctx.cr6.eq) goto loc_8266DA48;
	// bl 0x823ab448
	ctx.lr = 0x8266DA38;
	sub_823AB448(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8266da48
	if (!ctx.cr6.eq) goto loc_8266DA48;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8266da54
	goto loc_8266DA54;
loc_8266DA48:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e9a0
	ctx.lr = 0x8266DA54;
	sub_8233E9A0(ctx, base);
loc_8266DA54:
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

__attribute__((alias("__imp__sub_8266DA70"))) PPC_WEAK_FUNC(sub_8266DA70);
PPC_FUNC_IMPL(__imp__sub_8266DA70) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ab448
	sub_823AB448(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266DA78"))) PPC_WEAK_FUNC(sub_8266DA78);
PPC_FUNC_IMPL(__imp__sub_8266DA78) {
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
	// li r3,1904
	ctx.r3.s64 = 1904;
	// bl 0x82833108
	ctx.lr = 0x8266DA98;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266db0c
	if (ctx.cr0.eq) goto loc_8266DB0C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e6c8
	ctx.lr = 0x8266DAAC;
	sub_8233E6C8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r11,-26968
	ctx.r11.s64 = ctx.r11.s64 + -26968;
	// addi r10,r10,-25792
	ctx.r10.s64 = ctx.r10.s64 + -25792;
	// addi r9,r9,-25740
	ctx.r9.s64 = ctx.r9.s64 + -25740;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lwz r8,1888(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1888);
	// addi r11,r11,-9640
	ctx.r11.s64 = ctx.r11.s64 + -9640;
	// stw r8,1888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1888, ctx.r8.u32);
	// addi r10,r10,-8464
	ctx.r10.s64 = ctx.r10.s64 + -8464;
	// lwz r8,1892(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1892);
	// addi r9,r9,-25740
	ctx.r9.s64 = ctx.r9.s64 + -25740;
	// stw r8,1892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1892, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8266db10
	goto loc_8266DB10;
loc_8266DB0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266DB10:
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

__attribute__((alias("__imp__sub_8266DB28"))) PPC_WEAK_FUNC(sub_8266DB28);
PPC_FUNC_IMPL(__imp__sub_8266DB28) {
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
	// bl 0x823ab448
	ctx.lr = 0x8266DB48;
	sub_823AB448(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8266db58
	if (!ctx.cr6.eq) goto loc_8266DB58;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8266db70
	goto loc_8266DB70;
loc_8266DB58:
	// bl 0x82394d48
	ctx.lr = 0x8266DB5C;
	sub_82394D48(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8266db70
	if (ctx.cr6.eq) goto loc_8266DB70;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233e668
	ctx.lr = 0x8266DB70;
	sub_8233E668(ctx, base);
loc_8266DB70:
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

__attribute__((alias("__imp__sub_8266DB88"))) PPC_WEAK_FUNC(sub_8266DB88);
PPC_FUNC_IMPL(__imp__sub_8266DB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5640
	ctx.r3.s64 = ctx.r11.s64 + -5640;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266DB98"))) PPC_WEAK_FUNC(sub_8266DB98);
PPC_FUNC_IMPL(__imp__sub_8266DB98) {
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
	// beq cr6,0x8266dbd0
	if (ctx.cr6.eq) goto loc_8266DBD0;
	// bl 0x823c56f8
	ctx.lr = 0x8266DBC0;
	sub_823C56F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8266dbd0
	if (!ctx.cr6.eq) goto loc_8266DBD0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8266dbdc
	goto loc_8266DBDC;
loc_8266DBD0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234e2d8
	ctx.lr = 0x8266DBDC;
	sub_8234E2D8(ctx, base);
loc_8266DBDC:
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

__attribute__((alias("__imp__sub_8266DBF8"))) PPC_WEAK_FUNC(sub_8266DBF8);
PPC_FUNC_IMPL(__imp__sub_8266DBF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c56f8
	sub_823C56F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266DC00"))) PPC_WEAK_FUNC(sub_8266DC00);
PPC_FUNC_IMPL(__imp__sub_8266DC00) {
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
	// li r3,3296
	ctx.r3.s64 = 3296;
	// bl 0x82833108
	ctx.lr = 0x8266DC20;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266dc70
	if (ctx.cr0.eq) goto loc_8266DC70;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e3e0
	ctx.lr = 0x8266DC34;
	sub_8234E3E0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-8408
	ctx.r11.s64 = ctx.r11.s64 + -8408;
	// addi r10,r10,-6740
	ctx.r10.s64 = ctx.r10.s64 + -6740;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,3280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3280);
	// stw r11,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r11.u32);
	// lwz r11,3284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3284);
	// stw r11,3284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3284, ctx.r11.u32);
	// b 0x8266dc74
	goto loc_8266DC74;
loc_8266DC70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266DC74:
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

__attribute__((alias("__imp__sub_8266DC90"))) PPC_WEAK_FUNC(sub_8266DC90);
PPC_FUNC_IMPL(__imp__sub_8266DC90) {
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
	// bl 0x823c56f8
	ctx.lr = 0x8266DCB0;
	sub_823C56F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8266dcc0
	if (!ctx.cr6.eq) goto loc_8266DCC0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8266dcd8
	goto loc_8266DCD8;
loc_8266DCC0:
	// bl 0x823323b8
	ctx.lr = 0x8266DCC4;
	sub_823323B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8266dcd8
	if (ctx.cr6.eq) goto loc_8266DCD8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8234d0a0
	ctx.lr = 0x8266DCD8;
	sub_8234D0A0(ctx, base);
loc_8266DCD8:
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

__attribute__((alias("__imp__sub_8266DCF0"))) PPC_WEAK_FUNC(sub_8266DCF0);
PPC_FUNC_IMPL(__imp__sub_8266DCF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5612
	ctx.r3.s64 = ctx.r11.s64 + -5612;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266DD00"))) PPC_WEAK_FUNC(sub_8266DD00);
PPC_FUNC_IMPL(__imp__sub_8266DD00) {
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
	// beq cr6,0x8266dd38
	if (ctx.cr6.eq) goto loc_8266DD38;
	// bl 0x823c5840
	ctx.lr = 0x8266DD28;
	sub_823C5840(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8266dd38
	if (!ctx.cr6.eq) goto loc_8266DD38;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8266dd44
	goto loc_8266DD44;
loc_8266DD38:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8266da10
	ctx.lr = 0x8266DD44;
	sub_8266DA10(ctx, base);
loc_8266DD44:
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

__attribute__((alias("__imp__sub_8266DD60"))) PPC_WEAK_FUNC(sub_8266DD60);
PPC_FUNC_IMPL(__imp__sub_8266DD60) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c5840
	sub_823C5840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266DD68"))) PPC_WEAK_FUNC(sub_8266DD68);
PPC_FUNC_IMPL(__imp__sub_8266DD68) {
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
	// li r3,1904
	ctx.r3.s64 = 1904;
	// bl 0x82833108
	ctx.lr = 0x8266DD88;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266ddfc
	if (ctx.cr0.eq) goto loc_8266DDFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e6c8
	ctx.lr = 0x8266DD9C;
	sub_8233E6C8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r11,-26968
	ctx.r11.s64 = ctx.r11.s64 + -26968;
	// addi r10,r10,-25792
	ctx.r10.s64 = ctx.r10.s64 + -25792;
	// addi r9,r9,-25740
	ctx.r9.s64 = ctx.r9.s64 + -25740;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lwz r8,1888(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1888);
	// addi r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -6688;
	// stw r8,1888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1888, ctx.r8.u32);
	// addi r10,r10,-5512
	ctx.r10.s64 = ctx.r10.s64 + -5512;
	// lwz r8,1892(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1892);
	// addi r9,r9,-25740
	ctx.r9.s64 = ctx.r9.s64 + -25740;
	// stw r8,1892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1892, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8266de00
	goto loc_8266DE00;
loc_8266DDFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266DE00:
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

__attribute__((alias("__imp__sub_8266DE18"))) PPC_WEAK_FUNC(sub_8266DE18);
PPC_FUNC_IMPL(__imp__sub_8266DE18) {
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
	// bl 0x823c5840
	ctx.lr = 0x8266DE38;
	sub_823C5840(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8266de4c
	if (ctx.cr6.eq) goto loc_8266DE4C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8266db28
	ctx.lr = 0x8266DE4C;
	sub_8266DB28(ctx, base);
loc_8266DE4C:
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

__attribute__((alias("__imp__sub_8266DE68"))) PPC_WEAK_FUNC(sub_8266DE68);
PPC_FUNC_IMPL(__imp__sub_8266DE68) {
	PPC_FUNC_PROLOGUE();
	// stw r4,3284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3284, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266DE70"))) PPC_WEAK_FUNC(sub_8266DE70);
PPC_FUNC_IMPL(__imp__sub_8266DE70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-9888
	ctx.r3.s64 = ctx.r11.s64 + -9888;
	// b 0x828165a8
	sub_828165A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266DE80"))) PPC_WEAK_FUNC(sub_8266DE80);
PPC_FUNC_IMPL(__imp__sub_8266DE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-9824
	ctx.r3.s64 = ctx.r11.s64 + -9824;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266DE90"))) PPC_WEAK_FUNC(sub_8266DE90);
PPC_FUNC_IMPL(__imp__sub_8266DE90) {
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
	// bl 0x826bbeb8
	ctx.lr = 0x8266DEA8;
	sub_826BBEB8(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r11,r11,-6688
	ctx.r11.s64 = ctx.r11.s64 + -6688;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-5512
	ctx.r10.s64 = ctx.r10.s64 + -5512;
	// addi r9,r9,-25740
	ctx.r9.s64 = ctx.r9.s64 + -25740;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r11.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lis r5,13215
	ctx.r5.s64 = 866058240;
	// addi r4,r31,1584
	ctx.r4.s64 = ctx.r31.s64 + 1584;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// ori r5,r5,33963
	ctx.r5.u64 = ctx.r5.u64 | 33963;
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8266DEF8;
	sub_823CF190(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,32716
	ctx.r10.s64 = ctx.r11.s64 + 32716;
	// lfs f0,32716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f13,204(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r11.u32);
	// stw r9,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r9.u32);
	// stw r10,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8266DF48"))) PPC_WEAK_FUNC(sub_8266DF48);
PPC_FUNC_IMPL(__imp__sub_8266DF48) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r4,-5310
	ctx.r4.s64 = -347996160;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,1668(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,1656(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r30,152(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lfs f30,912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f30.f64 = double(temp.f32);
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,1664(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f13,1660(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	ctx.f13.f64 = double(temp.f32);
	// ori r4,r4,37952
	ctx.r4.u64 = ctx.r4.u64 | 37952;
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fadds f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lfs f31,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// rldicr r9,r30,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
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
	// addi r11,r31,1660
	ctx.r11.s64 = ctx.r31.s64 + 1660;
	// ld r6,1648(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1648);
	// bl 0x826b9ff8
	ctx.lr = 0x8266DFE0;
	sub_826B9FF8(ctx, base);
	// stfs f31,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stfs f30,144(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
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
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r8,1656(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	// li r5,128
	ctx.r5.s64 = 128;
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
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x826b9f28
	ctx.lr = 0x8266E02C;
	sub_826B9F28(ctx, base);
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// beq cr6,0x8266e064
	if (ctx.cr6.eq) goto loc_8266E064;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266E05C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x8266e068
	goto loc_8266E068;
loc_8266E064:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8266E068:
	// lfs f0,1512(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
	ctx.f0.f64 = double(temp.f32);
	// ld r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f0.u64);
	// lwz r31,168(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f4,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f4.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82331120
	ctx.lr = 0x8266E0C0;
	sub_82331120(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
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

__attribute__((alias("__imp__sub_8266E0E0"))) PPC_WEAK_FUNC(sub_8266E0E0);
PPC_FUNC_IMPL(__imp__sub_8266E0E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8266E0E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826b9508
	ctx.lr = 0x8266E0F4;
	sub_826B9508(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-9764
	ctx.r3.s64 = ctx.r11.s64 + -9764;
	// bl 0x82816528
	ctx.lr = 0x8266E100;
	sub_82816528(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-9708
	ctx.r3.s64 = ctx.r11.s64 + -9708;
	// bl 0x82816528
	ctx.lr = 0x8266E110;
	sub_82816528(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266E12C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e190
	if (ctx.cr0.eq) goto loc_8266E190;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bd828
	ctx.lr = 0x8266E144;
	sub_829BD828(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,1888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1888, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rldicr r8,r11,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x829c7118
	ctx.lr = 0x8266E184;
	sub_829C7118(ctx, base);
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r3,1888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1888);
	// bl 0x82978d98
	ctx.lr = 0x8266E190;
	sub_82978D98(ctx, base);
loc_8266E190:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E198"))) PPC_WEAK_FUNC(sub_8266E198);
PPC_FUNC_IMPL(__imp__sub_8266E198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8266E1A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8265e4f0
	ctx.lr = 0x8266E1AC;
	sub_8265E4F0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-9696
	ctx.r3.s64 = ctx.r11.s64 + -9696;
	// bl 0x82816528
	ctx.lr = 0x8266E1B8;
	sub_82816528(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-9708
	ctx.r3.s64 = ctx.r11.s64 + -9708;
	// bl 0x82816528
	ctx.lr = 0x8266E1C8;
	sub_82816528(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266E1E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e248
	if (ctx.cr0.eq) goto loc_8266E248;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bd828
	ctx.lr = 0x8266E1FC;
	sub_829BD828(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rldicr r8,r11,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x829c7118
	ctx.lr = 0x8266E23C;
	sub_829C7118(ctx, base);
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r3,3280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// bl 0x82978d98
	ctx.lr = 0x8266E248;
	sub_82978D98(ctx, base);
loc_8266E248:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E250"))) PPC_WEAK_FUNC(sub_8266E250);
PPC_FUNC_IMPL(__imp__sub_8266E250) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8266de18
	sub_8266DE18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E258"))) PPC_WEAK_FUNC(sub_8266E258);
PPC_FUNC_IMPL(__imp__sub_8266E258) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8266db28
	sub_8266DB28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E260"))) PPC_WEAK_FUNC(sub_8266E260);
PPC_FUNC_IMPL(__imp__sub_8266E260) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8266dc90
	sub_8266DC90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E268"))) PPC_WEAK_FUNC(sub_8266E268);
PPC_FUNC_IMPL(__imp__sub_8266E268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6992
	ctx.r3.s64 = ctx.r11.s64 + -6992;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266E278"))) PPC_WEAK_FUNC(sub_8266E278);
PPC_FUNC_IMPL(__imp__sub_8266E278) {
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
	// beq cr6,0x8266e2b0
	if (ctx.cr6.eq) goto loc_8266E2B0;
	// bl 0x823c20f0
	ctx.lr = 0x8266E2A0;
	sub_823C20F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8266e2b0
	if (!ctx.cr6.eq) goto loc_8266E2B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8266e2bc
	goto loc_8266E2BC;
loc_8266E2B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234e2d8
	ctx.lr = 0x8266E2BC;
	sub_8234E2D8(ctx, base);
loc_8266E2BC:
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

__attribute__((alias("__imp__sub_8266E2D8"))) PPC_WEAK_FUNC(sub_8266E2D8);
PPC_FUNC_IMPL(__imp__sub_8266E2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,3312
	ctx.r3.s64 = 3312;
	// bl 0x82833108
	ctx.lr = 0x8266E2F4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e308
	if (ctx.cr0.eq) goto loc_8266E308;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8266e380
	ctx.lr = 0x8266E304;
	sub_8266E380(ctx, base);
	// b 0x8266e30c
	goto loc_8266E30C;
loc_8266E308:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E30C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266E320"))) PPC_WEAK_FUNC(sub_8266E320);
PPC_FUNC_IMPL(__imp__sub_8266E320) {
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
	// bl 0x823c20f0
	ctx.lr = 0x8266E340;
	sub_823C20F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8266e350
	if (!ctx.cr6.eq) goto loc_8266E350;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8266e368
	goto loc_8266E368;
loc_8266E350:
	// bl 0x823323b8
	ctx.lr = 0x8266E354;
	sub_823323B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8266e368
	if (ctx.cr6.eq) goto loc_8266E368;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8234d0a0
	ctx.lr = 0x8266E368;
	sub_8234D0A0(ctx, base);
loc_8266E368:
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

__attribute__((alias("__imp__sub_8266E380"))) PPC_WEAK_FUNC(sub_8266E380);
PPC_FUNC_IMPL(__imp__sub_8266E380) {
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
	// bl 0x8234e3e0
	ctx.lr = 0x8266E3A0;
	sub_8234E3E0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-5432
	ctx.r11.s64 = ctx.r11.s64 + -5432;
	// addi r10,r10,-3764
	ctx.r10.s64 = ctx.r10.s64 + -3764;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,3280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3280);
	// stw r11,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r11.u32);
	// lfs f0,3284(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3284, temp.u32);
	// lfs f0,3288(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3288);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3288(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3288, temp.u32);
	// lfs f0,3292(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3292);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3292(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3292, temp.u32);
	// lfs f0,3296(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3296);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3296(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3296, temp.u32);
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
	// lwz r11,3308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3308);
	// stw r11,3308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3308, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8266E420"))) PPC_WEAK_FUNC(sub_8266E420);
PPC_FUNC_IMPL(__imp__sub_8266E420) {
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
	// bl 0x8265c840
	ctx.lr = 0x8266E438;
	sub_8265C840(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lfs f13,-32516(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32516);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32224
	ctx.r6.s64 = -2111832064;
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lfs f12,16816(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16816);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-11424(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -11424);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r6,-5432
	ctx.r9.s64 = ctx.r6.s64 + -5432;
	// addi r11,r11,-3764
	ctx.r11.s64 = ctx.r11.s64 + -3764;
	// lfs f10,20364(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20364);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,-30936
	ctx.r10.s64 = ctx.r10.s64 + -30936;
	// stfs f13,3300(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3300, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f0,3288(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3288, temp.u32);
	// stfs f0,3292(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3292, temp.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stfs f12,3284(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3284, temp.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stfs f11,3304(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3304, temp.u32);
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// stfs f10,3296(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3296, temp.u32);
	// stw r8,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_8266E4C0"))) PPC_WEAK_FUNC(sub_8266E4C0);
PPC_FUNC_IMPL(__imp__sub_8266E4C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8265cda8
	sub_8265CDA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E4C8"))) PPC_WEAK_FUNC(sub_8266E4C8);
PPC_FUNC_IMPL(__imp__sub_8266E4C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8265d858
	sub_8265D858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E4D0"))) PPC_WEAK_FUNC(sub_8266E4D0);
PPC_FUNC_IMPL(__imp__sub_8266E4D0) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x829c2520
	ctx.lr = 0x8266E4EC;
	sub_829C2520(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266e564
	if (ctx.cr0.eq) goto loc_8266E564;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-5460
	ctx.r3.s64 = ctx.r11.s64 + -5460;
	// bl 0x82816528
	ctx.lr = 0x8266E500;
	sub_82816528(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// bl 0x824d5a20
	ctx.lr = 0x8266E50C;
	sub_824D5A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e524
	if (ctx.cr0.eq) goto loc_8266E524;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8290b9d0
	ctx.lr = 0x8266E51C;
	sub_8290B9D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8266e528
	goto loc_8266E528;
loc_8266E524:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8266E528:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8266e560
	if (ctx.cr6.eq) goto loc_8266E560;
	// bl 0x824f7478
	ctx.lr = 0x8266E534;
	sub_824F7478(ctx, base);
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
	ctx.lr = 0x8266E54C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8266e558
	if (!ctx.cr0.eq) goto loc_8266E558;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8266E558:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x8266e564
	goto loc_8266E564;
loc_8266E560:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8266E564:
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

__attribute__((alias("__imp__sub_8266E580"))) PPC_WEAK_FUNC(sub_8266E580);
PPC_FUNC_IMPL(__imp__sub_8266E580) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82661448
	ctx.lr = 0x8266E5A0;
	sub_82661448(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266e4d0
	ctx.lr = 0x8266E5A8;
	sub_8266E4D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e63c
	if (ctx.cr0.eq) goto loc_8266E63C;
	// lfs f0,3292(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3292);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8266e63c
	if (ctx.cr6.eq) goto loc_8266E63C;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f11,3296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfd f11,16376(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16376);
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fsel f12,f12,f12,f11
	ctx.f12.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : ctx.f11.f64;
	// fsub f11,f12,f10
	ctx.f11.f64 = ctx.f12.f64 - ctx.f10.f64;
	// fsel f12,f11,f10,f12
	ctx.f12.f64 = ctx.f11.f64 >= 0.0 ? ctx.f10.f64 : ctx.f12.f64;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// bge cr6,0x8266e600
	if (!ctx.cr6.lt) goto loc_8266E600;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f11,16864(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16864);
	// fmul f12,f12,f11
	ctx.f12.f64 = ctx.f12.f64 * ctx.f11.f64;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
loc_8266E600:
	// fadds f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f11,3300(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,3284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f13,3288(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3288, temp.u32);
	// fsubs f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f13.f64));
	// fsel f13,f11,f13,f13
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f13.f64;
	// fsub f11,f13,f12
	ctx.f11.f64 = ctx.f13.f64 - ctx.f12.f64;
	// fsel f13,f11,f12,f13
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,3288(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3288, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8266e63c
	if (!ctx.cr6.eq) goto loc_8266E63C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r11.u32);
loc_8266E63C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_8266E658"))) PPC_WEAK_FUNC(sub_8266E658);
PPC_FUNC_IMPL(__imp__sub_8266E658) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8266e4d0
	ctx.lr = 0x8266E678;
	sub_8266E4D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266e6c8
	if (ctx.cr0.eq) goto loc_8266E6C8;
	// lwz r11,3280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8266e6c8
	if (!ctx.cr6.eq) goto loc_8266E6C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266E6A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,3300(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f31,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f13,3292(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3292, temp.u32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8266e6c0
	if (!ctx.cr6.lt) goto loc_8266E6C0;
	// stfs f0,3292(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3292, temp.u32);
loc_8266E6C0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r11.u32);
loc_8266E6C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_8266E6E0"))) PPC_WEAK_FUNC(sub_8266E6E0);
PPC_FUNC_IMPL(__imp__sub_8266E6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8266E6E8;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r5,336(r1)
	PPC_STORE_U64(ctx.r1.u32 + 336, ctx.r5.u64);
	// std r6,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.r6.u64);
	// lfs f13,3288(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3288);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f13,f1
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// lfs f0,3284(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3284);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3300(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3300);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x8266e724
	if (!ctx.cr6.gt) goto loc_8266E724;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_8266E724:
	// bl 0x8266e658
	ctx.lr = 0x8266E728;
	sub_8266E658(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82817bb8
	ctx.lr = 0x8266E734;
	sub_82817BB8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82817280
	ctx.lr = 0x8266E740;
	sub_82817280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f30,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f30.f64 = double(temp.f32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lfs f31,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f31.f64 = double(temp.f32);
	// addi r31,r1,184
	ctx.r31.s64 = ctx.r1.s64 + 184;
	// lfs f29,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f29.f64 = double(temp.f32);
	// addi r3,r10,20104
	ctx.r3.s64 = ctx.r10.s64 + 20104;
	// addi r29,r1,152
	ctx.r29.s64 = ctx.r1.s64 + 152;
	// lfs f0,-24640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24640);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmuls f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// lwz r27,800(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// lfs f11,628(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f10,624(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 624);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,620(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8266E79C;
	sub_82816528(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x8266E7DC;
	sub_828250B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,2352
	ctx.r4.s64 = ctx.r30.s64 + 2352;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823339b8
	ctx.lr = 0x8266E7EC;
	sub_823339B8(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r29,r11,7896
	ctx.r29.s64 = ctx.r11.s64 + 7896;
	// addi r5,r10,28564
	ctx.r5.s64 = ctx.r10.s64 + 28564;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82816cf8
	ctx.lr = 0x8266E80C;
	sub_82816CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82400b48
	ctx.lr = 0x8266E818;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x8266E820;
	sub_82333960(ctx, base);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r5,220(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r8,2348(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// bne cr6,0x8266e840
	if (!ctx.cr6.eq) goto loc_8266E840;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_8266E840:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// addi r4,r11,28624
	ctx.r4.s64 = ctx.r11.s64 + 28624;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82816c30
	ctx.lr = 0x8266E854;
	sub_82816C30(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8266e868
	if (!ctx.cr6.eq) goto loc_8266E868;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8266E868:
	// bl 0x828165a8
	ctx.lr = 0x8266E86C;
	sub_828165A8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x8266E878;
	sub_82333960(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r29,-1
	ctx.r29.s64 = -1;
	// lis r5,-26422
	ctx.r5.s64 = -1731592192;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// ori r5,r5,8246
	ctx.r5.u64 = ctx.r5.u64 | 8246;
	// addi r4,r31,1580
	ctx.r4.s64 = ctx.r31.s64 + 1580;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8266E89C;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r31,1584
	ctx.r4.s64 = ctx.r31.s64 + 1584;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8266E8B8;
	sub_823CF190(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266E8D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,1504(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266E904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwa r11,2084(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 2084));
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1108);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266E92C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82333960
	ctx.lr = 0x8266E934;
	sub_82333960(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E948"))) PPC_WEAK_FUNC(sub_8266E948);
PPC_FUNC_IMPL(__imp__sub_8266E948) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8266e320
	sub_8266E320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E950"))) PPC_WEAK_FUNC(sub_8266E950);
PPC_FUNC_IMPL(__imp__sub_8266E950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5712
	ctx.r3.s64 = ctx.r11.s64 + -5712;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266E960"))) PPC_WEAK_FUNC(sub_8266E960);
PPC_FUNC_IMPL(__imp__sub_8266E960) {
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
	// beq cr6,0x8266e998
	if (ctx.cr6.eq) goto loc_8266E998;
	// bl 0x823c54c0
	ctx.lr = 0x8266E988;
	sub_823C54C0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8266e998
	if (!ctx.cr6.eq) goto loc_8266E998;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8266e9a4
	goto loc_8266E9A4;
loc_8266E998:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8266e278
	ctx.lr = 0x8266E9A4;
	sub_8266E278(ctx, base);
loc_8266E9A4:
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

__attribute__((alias("__imp__sub_8266E9C0"))) PPC_WEAK_FUNC(sub_8266E9C0);
PPC_FUNC_IMPL(__imp__sub_8266E9C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c54c0
	sub_823C54C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E9C8"))) PPC_WEAK_FUNC(sub_8266E9C8);
PPC_FUNC_IMPL(__imp__sub_8266E9C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c20f0
	sub_823C20F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E9D0"))) PPC_WEAK_FUNC(sub_8266E9D0);
PPC_FUNC_IMPL(__imp__sub_8266E9D0) {
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
	// li r3,3312
	ctx.r3.s64 = 3312;
	// bl 0x82833108
	ctx.lr = 0x8266E9F0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266ea30
	if (ctx.cr0.eq) goto loc_8266EA30;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266e380
	ctx.lr = 0x8266EA04;
	sub_8266E380(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-3608
	ctx.r11.s64 = ctx.r11.s64 + -3608;
	// addi r10,r10,-1940
	ctx.r10.s64 = ctx.r10.s64 + -1940;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8266ea34
	goto loc_8266EA34;
loc_8266EA30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266EA34:
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

__attribute__((alias("__imp__sub_8266EA50"))) PPC_WEAK_FUNC(sub_8266EA50);
PPC_FUNC_IMPL(__imp__sub_8266EA50) {
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
	// bl 0x823c54c0
	ctx.lr = 0x8266EA70;
	sub_823C54C0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8266ea84
	if (ctx.cr6.eq) goto loc_8266EA84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8266e320
	ctx.lr = 0x8266EA84;
	sub_8266E320(ctx, base);
loc_8266EA84:
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

__attribute__((alias("__imp__sub_8266EAA0"))) PPC_WEAK_FUNC(sub_8266EAA0);
PPC_FUNC_IMPL(__imp__sub_8266EAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8266EAA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8266e420
	ctx.lr = 0x8266EAB4;
	sub_8266E420(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-3608
	ctx.r11.s64 = ctx.r11.s64 + -3608;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r10,r10,-1940
	ctx.r10.s64 = ctx.r10.s64 + -1940;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r30,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r30.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stw r30,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r30.u32);
	// addi r3,r11,-3712
	ctx.r3.s64 = ctx.r11.s64 + -3712;
	// bl 0x828165a8
	ctx.lr = 0x8266EAF0;
	sub_828165A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r3,1936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1936, ctx.r3.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r11,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r11.u32);
	// stw r30,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r30.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// stw r10,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r10.u32);
	// stw r9,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r9.u32);
	// addi r3,r11,-3692
	ctx.r3.s64 = ctx.r11.s64 + -3692;
	// bl 0x82816528
	ctx.lr = 0x8266EB1C;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r3,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r3.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lfs f0,18368(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18368);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lis r11,-2537
	ctx.r11.s64 = -166264832;
	// lfs f13,19896(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19896);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lfs f12,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// ori r11,r11,19839
	ctx.r11.u64 = ctx.r11.u64 | 19839;
	// lfs f11,-25080(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25080);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,24881
	ctx.r8.s64 = 1630601216;
	// lfs f10,16612(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16612);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,4243
	ctx.r9.s64 = 278069248;
	// lfs f0,18016(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 18016);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,2080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2080, ctx.r11.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r28,2108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2108, ctx.r28.u32);
	// ori r9,r9,62582
	ctx.r9.u64 = ctx.r9.u64 | 62582;
	// stw r10,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r10.u32);
	// ori r11,r8,65451
	ctx.r11.u64 = ctx.r8.u64 | 65451;
	// stw r4,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r4.u32);
	// stw r9,2248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2248, ctx.r9.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// stw r11,2252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2252, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r29,2104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2104, ctx.r29.u32);
	// addi r4,r10,-23828
	ctx.r4.s64 = ctx.r10.s64 + -23828;
	// stw r7,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r7.u32);
	// stw r6,2116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2116, ctx.r6.u32);
	// stw r5,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r5.u32);
	// stw r30,2124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2124, ctx.r30.u32);
	// bl 0x8233a258
	ctx.lr = 0x8266EBE0;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,2320
	ctx.r3.s64 = ctx.r31.s64 + 2320;
	// bl 0x82400b48
	ctx.lr = 0x8266EBEC;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x8266EBF4;
	sub_82333960(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,3321
	ctx.r10.s64 = 217645056;
	// lis r9,10385
	ctx.r9.s64 = 680591360;
	// lis r8,6282
	ctx.r8.s64 = 411697152;
	// ori r10,r10,51109
	ctx.r10.u64 = ctx.r10.u64 | 51109;
	// li r7,30
	ctx.r7.s64 = 30;
	// ori r9,r9,29450
	ctx.r9.u64 = ctx.r9.u64 | 29450;
	// stw r10,3088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3088, ctx.r10.u32);
	// ori r8,r8,26998
	ctx.r8.u64 = ctx.r8.u64 | 26998;
	// stw r7,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r7.u32);
	// stw r9,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r9.u32);
	// stw r8,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r8.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8266ec58
	if (ctx.cr6.eq) goto loc_8266EC58;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r5,r11,-30912
	ctx.r5.s64 = ctx.r11.s64 + -30912;
	// addi r4,r10,-3664
	ctx.r4.s64 = ctx.r10.s64 + -3664;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r31,3216
	ctx.r6.s64 = ctx.r31.s64 + 3216;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c58b0
	ctx.lr = 0x8266EC58;
	sub_828C58B0(ctx, base);
loc_8266EC58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266EC68"))) PPC_WEAK_FUNC(sub_8266EC68);
PPC_FUNC_IMPL(__imp__sub_8266EC68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8266ea50
	sub_8266EA50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266EC70"))) PPC_WEAK_FUNC(sub_8266EC70);
PPC_FUNC_IMPL(__imp__sub_8266EC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5760
	ctx.r3.s64 = ctx.r11.s64 + -5760;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266EC80"))) PPC_WEAK_FUNC(sub_8266EC80);
PPC_FUNC_IMPL(__imp__sub_8266EC80) {
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
	// beq cr6,0x8266ecb8
	if (ctx.cr6.eq) goto loc_8266ECB8;
	// bl 0x823c5240
	ctx.lr = 0x8266ECA8;
	sub_823C5240(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8266ecb8
	if (!ctx.cr6.eq) goto loc_8266ECB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8266ecc4
	goto loc_8266ECC4;
loc_8266ECB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8266e278
	ctx.lr = 0x8266ECC4;
	sub_8266E278(ctx, base);
loc_8266ECC4:
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

__attribute__((alias("__imp__sub_8266ECE0"))) PPC_WEAK_FUNC(sub_8266ECE0);
PPC_FUNC_IMPL(__imp__sub_8266ECE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c5240
	sub_823C5240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266ECE8"))) PPC_WEAK_FUNC(sub_8266ECE8);
PPC_FUNC_IMPL(__imp__sub_8266ECE8) {
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
	// li r3,3312
	ctx.r3.s64 = 3312;
	// bl 0x82833108
	ctx.lr = 0x8266ED08;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266ed48
	if (ctx.cr0.eq) goto loc_8266ED48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266e380
	ctx.lr = 0x8266ED1C;
	sub_8266E380(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-1832
	ctx.r11.s64 = ctx.r11.s64 + -1832;
	// addi r10,r10,-164
	ctx.r10.s64 = ctx.r10.s64 + -164;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8266ed4c
	goto loc_8266ED4C;
loc_8266ED48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266ED4C:
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

__attribute__((alias("__imp__sub_8266ED68"))) PPC_WEAK_FUNC(sub_8266ED68);
PPC_FUNC_IMPL(__imp__sub_8266ED68) {
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
	// bl 0x823c5240
	ctx.lr = 0x8266ED88;
	sub_823C5240(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8266ed9c
	if (ctx.cr6.eq) goto loc_8266ED9C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8266e320
	ctx.lr = 0x8266ED9C;
	sub_8266E320(ctx, base);
loc_8266ED9C:
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

__attribute__((alias("__imp__sub_8266EDB8"))) PPC_WEAK_FUNC(sub_8266EDB8);
PPC_FUNC_IMPL(__imp__sub_8266EDB8) {
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
	// bl 0x8266e420
	ctx.lr = 0x8266EDD0;
	sub_8266E420(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r6,-32224
	ctx.r6.s64 = -2111832064;
	// stw r11,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r11.u32);
	// lis r5,-32224
	ctx.r5.s64 = -2111832064;
	// stw r11,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r11.u32);
	// lis r7,-32224
	ctx.r7.s64 = -2111832064;
	// stw r11,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r11.u32);
	// stw r10,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r10.u32);
	// addi r11,r6,-164
	ctx.r11.s64 = ctx.r6.s64 + -164;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r7,r7,-1832
	ctx.r7.s64 = ctx.r7.s64 + -1832;
	// stw r9,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r9.u32);
	// addi r10,r5,-30936
	ctx.r10.s64 = ctx.r5.s64 + -30936;
	// stw r8,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r8.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// addi r3,r11,-1888
	ctx.r3.s64 = ctx.r11.s64 + -1888;
	// bl 0x82816528
	ctx.lr = 0x8266EE28;
	sub_82816528(ctx, base);
	// stw r3,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r3.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-1864
	ctx.r3.s64 = ctx.r11.s64 + -1864;
	// bl 0x82816528
	ctx.lr = 0x8266EE38;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// stw r3,2080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2080, ctx.r3.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lfs f0,17060(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17060);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lfs f13,-28788(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28788);
	ctx.f13.f64 = double(temp.f32);
	// li r10,20
	ctx.r10.s64 = 20;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ori r11,r11,32832
	ctx.r11.u64 = ctx.r11.u64 | 32832;
	// lfs f12,17676(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17676);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,32716(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32716);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r10.u32);
	// lfs f10,16596(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16596);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r11.u32);
	// lfs f0,19848(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 19848);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r9,2108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2108, ctx.r9.u32);
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// stw r11,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r11.u32);
	// addi r4,r9,-1852
	ctx.r4.s64 = ctx.r9.s64 + -1852;
	// stw r10,2116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2116, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r8,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r8.u32);
	// stw r7,2124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2124, ctx.r7.u32);
	// stw r6,2104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2104, ctx.r6.u32);
	// bl 0x8233a258
	ctx.lr = 0x8266EED8;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,2320
	ctx.r3.s64 = ctx.r31.s64 + 2320;
	// bl 0x82400b48
	ctx.lr = 0x8266EEE4;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x8266EEEC;
	sub_82333960(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,4243
	ctx.r11.s64 = 278069248;
	// lis r10,24881
	ctx.r10.s64 = 1630601216;
	// stw r9,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r9.u32);
	// lis r8,3321
	ctx.r8.s64 = 217645056;
	// ori r11,r11,62582
	ctx.r11.u64 = ctx.r11.u64 | 62582;
	// ori r10,r10,65451
	ctx.r10.u64 = ctx.r10.u64 | 65451;
	// ori r9,r8,51109
	ctx.r9.u64 = ctx.r8.u64 | 51109;
	// lis r8,11894
	ctx.r8.s64 = 779485184;
	// stw r11,2248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2248, ctx.r11.u32);
	// lis r7,6282
	ctx.r7.s64 = 411697152;
	// stw r10,2252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2252, ctx.r10.u32);
	// ori r11,r8,61036
	ctx.r11.u64 = ctx.r8.u64 | 61036;
	// stw r9,3088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3088, ctx.r9.u32);
	// ori r10,r7,26998
	ctx.r10.u64 = ctx.r7.u64 | 26998;
	// stw r11,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8266EF48"))) PPC_WEAK_FUNC(sub_8266EF48);
PPC_FUNC_IMPL(__imp__sub_8266EF48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8266ed68
	sub_8266ED68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266EF50"))) PPC_WEAK_FUNC(sub_8266EF50);
PPC_FUNC_IMPL(__imp__sub_8266EF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6960
	ctx.r3.s64 = ctx.r11.s64 + -6960;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266EF60"))) PPC_WEAK_FUNC(sub_8266EF60);
PPC_FUNC_IMPL(__imp__sub_8266EF60) {
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
	// beq cr6,0x8266ef98
	if (ctx.cr6.eq) goto loc_8266EF98;
	// bl 0x823c2230
	ctx.lr = 0x8266EF88;
	sub_823C2230(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8266ef98
	if (!ctx.cr6.eq) goto loc_8266EF98;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8266efa4
	goto loc_8266EFA4;
loc_8266EF98:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8266e278
	ctx.lr = 0x8266EFA4;
	sub_8266E278(ctx, base);
loc_8266EFA4:
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

__attribute__((alias("__imp__sub_8266EFC0"))) PPC_WEAK_FUNC(sub_8266EFC0);
PPC_FUNC_IMPL(__imp__sub_8266EFC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c2230
	sub_823C2230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266EFC8"))) PPC_WEAK_FUNC(sub_8266EFC8);
PPC_FUNC_IMPL(__imp__sub_8266EFC8) {
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
	// li r3,3312
	ctx.r3.s64 = 3312;
	// bl 0x82833108
	ctx.lr = 0x8266EFE8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266f028
	if (ctx.cr0.eq) goto loc_8266F028;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266e380
	ctx.lr = 0x8266EFFC;
	sub_8266E380(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// addi r10,r10,1740
	ctx.r10.s64 = ctx.r10.s64 + 1740;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8266f02c
	goto loc_8266F02C;
loc_8266F028:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266F02C:
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

__attribute__((alias("__imp__sub_8266F048"))) PPC_WEAK_FUNC(sub_8266F048);
PPC_FUNC_IMPL(__imp__sub_8266F048) {
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
	// bl 0x823c2230
	ctx.lr = 0x8266F068;
	sub_823C2230(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8266f07c
	if (ctx.cr6.eq) goto loc_8266F07C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8266e320
	ctx.lr = 0x8266F07C;
	sub_8266E320(ctx, base);
loc_8266F07C:
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

__attribute__((alias("__imp__sub_8266F098"))) PPC_WEAK_FUNC(sub_8266F098);
PPC_FUNC_IMPL(__imp__sub_8266F098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8266F0A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8266e420
	ctx.lr = 0x8266F0AC;
	sub_8266E420(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r10,r10,1740
	ctx.r10.s64 = ctx.r10.s64 + 1740;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r29,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r29.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stw r29,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r29.u32);
	// addi r3,r11,-112
	ctx.r3.s64 = ctx.r11.s64 + -112;
	// bl 0x828165a8
	ctx.lr = 0x8266F0E8;
	sub_828165A8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,1936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1936, ctx.r3.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// stw r30,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r30.u32);
	// addi r3,r11,-92
	ctx.r3.s64 = ctx.r11.s64 + -92;
	// bl 0x828165a8
	ctx.lr = 0x8266F100;
	sub_828165A8(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,1684
	ctx.r3.s64 = ctx.r31.s64 + 1684;
	// bl 0x82410060
	ctx.lr = 0x8266F110;
	sub_82410060(ctx, base);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,1660
	ctx.r3.s64 = ctx.r31.s64 + 1660;
	// bl 0x82643410
	ctx.lr = 0x8266F120;
	sub_82643410(ctx, base);
	// lis r28,-32244
	ctx.r28.s64 = -2113142784;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r27,r28,24724
	ctx.r27.s64 = ctx.r28.s64 + 24724;
	// addi r3,r31,1780
	ctx.r3.s64 = ctx.r31.s64 + 1780;
	// lfs f0,16172(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 16172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x824fc978
	ctx.lr = 0x8266F13C;
	sub_824FC978(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f0,29388(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 29388);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// stfs f0,3304(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3304, temp.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// stw r30,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r30.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r30.u32);
	// lfs f13,-32516(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32516);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lfs f0,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r11.u32);
	// lfs f12,16816(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16816);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r11.u32);
	// lfs f11,20364(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20364);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f13,3300(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3300, temp.u32);
	// addi r4,r10,-23808
	ctx.r4.s64 = ctx.r10.s64 + -23808;
	// stfs f0,3288(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3288, temp.u32);
	// stfs f0,3292(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3292, temp.u32);
	// stfs f12,3284(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3284, temp.u32);
	// stfs f11,3296(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3296, temp.u32);
	// bl 0x8233a258
	ctx.lr = 0x8266F19C;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,2320
	ctx.r3.s64 = ctx.r31.s64 + 2320;
	// bl 0x82400b48
	ctx.lr = 0x8266F1A8;
	sub_82400B48(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x8266F1B0;
	sub_82333960(ctx, base);
	// li r11,31
	ctx.r11.s64 = 31;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// stw r11,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r11.u32);
	// addi r3,r10,-40
	ctx.r3.s64 = ctx.r10.s64 + -40;
	// bl 0x82816528
	ctx.lr = 0x8266F1C4;
	sub_82816528(ctx, base);
	// stw r3,2248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2248, ctx.r3.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// bl 0x82816528
	ctx.lr = 0x8266F1D4;
	sub_82816528(ctx, base);
	// stw r3,2252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2252, ctx.r3.u32);
	// stw r29,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r29.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x82816528
	ctx.lr = 0x8266F1E8;
	sub_82816528(ctx, base);
	// stw r3,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r3.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-1864
	ctx.r3.s64 = ctx.r11.s64 + -1864;
	// bl 0x82816528
	ctx.lr = 0x8266F1F8;
	sub_82816528(ctx, base);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f0,24724(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24724);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,13484(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 13484);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f11,29356(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 29356);
	ctx.f11.f64 = double(temp.f32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f10,19564(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19564);
	ctx.f10.f64 = double(temp.f32);
	// stw r3,2080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2080, ctx.r3.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r29,120(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lfs f12,20576(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20576);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f13,19876(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19876);
	ctx.f13.f64 = double(temp.f32);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// lfs f0,19204(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 19204);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r10.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r4,2108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2108, ctx.r4.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r28,2104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2104, ctx.r28.u32);
	// li r4,80
	ctx.r4.s64 = 80;
	// lis r7,3321
	ctx.r7.s64 = 217645056;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lis r28,1141
	ctx.r28.s64 = 74776576;
	// stw r4,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r4.u32);
	// lis r27,7041
	ctx.r27.s64 = 461438976;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ori r10,r28,57255
	ctx.r10.u64 = ctx.r28.u64 | 57255;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ori r7,r7,51109
	ctx.r7.u64 = ctx.r7.u64 | 51109;
	// stw r3,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r3.u32);
	// ori r4,r27,17896
	ctx.r4.u64 = ctx.r27.u64 | 17896;
	// stw r7,3088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3088, ctx.r7.u32);
	// stw r10,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r10.u32);
	// stw r4,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r4.u32);
	// stw r8,2116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2116, ctx.r8.u32);
	// stw r30,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r30.u32);
	// stw r29,2124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2124, ctx.r29.u32);
	// stw r9,2128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2128, ctx.r9.u32);
	// stw r6,2132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2132, ctx.r6.u32);
	// stw r5,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r5.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8266f304
	if (ctx.cr6.eq) goto loc_8266F304;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r5,r11,-30912
	ctx.r5.s64 = ctx.r11.s64 + -30912;
	// addi r4,r10,20
	ctx.r4.s64 = ctx.r10.s64 + 20;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r31,3216
	ctx.r6.s64 = ctx.r31.s64 + 3216;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c58b0
	ctx.lr = 0x8266F304;
	sub_828C58B0(ctx, base);
loc_8266F304:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266F310"))) PPC_WEAK_FUNC(sub_8266F310);
PPC_FUNC_IMPL(__imp__sub_8266F310) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8266f048
	sub_8266F048(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266F318"))) PPC_WEAK_FUNC(sub_8266F318);
PPC_FUNC_IMPL(__imp__sub_8266F318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-24100
	ctx.r3.s64 = ctx.r11.s64 + -24100;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266F328"))) PPC_WEAK_FUNC(sub_8266F328);
PPC_FUNC_IMPL(__imp__sub_8266F328) {
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
	// beq cr6,0x8266f360
	if (ctx.cr6.eq) goto loc_8266F360;
	// bl 0x823a2218
	ctx.lr = 0x8266F350;
	sub_823A2218(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8266f360
	if (!ctx.cr6.eq) goto loc_8266F360;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8266f36c
	goto loc_8266F36C;
loc_8266F360:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234e2d8
	ctx.lr = 0x8266F36C;
	sub_8234E2D8(ctx, base);
loc_8266F36C:
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

__attribute__((alias("__imp__sub_8266F388"))) PPC_WEAK_FUNC(sub_8266F388);
PPC_FUNC_IMPL(__imp__sub_8266F388) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a2218
	sub_823A2218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266F390"))) PPC_WEAK_FUNC(sub_8266F390);
PPC_FUNC_IMPL(__imp__sub_8266F390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,3344
	ctx.r3.s64 = 3344;
	// bl 0x82833108
	ctx.lr = 0x8266F3AC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266f3c0
	if (ctx.cr0.eq) goto loc_8266F3C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8266f438
	ctx.lr = 0x8266F3BC;
	sub_8266F438(ctx, base);
	// b 0x8266f3c4
	goto loc_8266F3C4;
loc_8266F3C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266F3C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266F3D8"))) PPC_WEAK_FUNC(sub_8266F3D8);
PPC_FUNC_IMPL(__imp__sub_8266F3D8) {
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
	// bl 0x823a2218
	ctx.lr = 0x8266F3F8;
	sub_823A2218(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8266f408
	if (!ctx.cr6.eq) goto loc_8266F408;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8266f420
	goto loc_8266F420;
loc_8266F408:
	// bl 0x823323b8
	ctx.lr = 0x8266F40C;
	sub_823323B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8266f420
	if (ctx.cr6.eq) goto loc_8266F420;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8234d0a0
	ctx.lr = 0x8266F420;
	sub_8234D0A0(ctx, base);
loc_8266F420:
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

__attribute__((alias("__imp__sub_8266F438"))) PPC_WEAK_FUNC(sub_8266F438);
PPC_FUNC_IMPL(__imp__sub_8266F438) {
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
	// bl 0x8234e3e0
	ctx.lr = 0x8266F458;
	sub_8234E3E0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,1896
	ctx.r11.s64 = ctx.r11.s64 + 1896;
	// addi r10,r10,3564
	ctx.r10.s64 = ctx.r10.s64 + 3564;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
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
	// lwz r11,3300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3300);
	// stw r11,3300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3300, ctx.r11.u32);
	// lwz r11,3304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3304);
	// stw r11,3304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3304, ctx.r11.u32);
	// lwz r11,3308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3308);
	// stw r11,3308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3308, ctx.r11.u32);
	// lwz r11,3312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3312);
	// stw r11,3312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3312, ctx.r11.u32);
	// lwz r11,3316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3316);
	// stw r11,3316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3316, ctx.r11.u32);
	// lwz r11,3320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3320);
	// stw r11,3320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3320, ctx.r11.u32);
	// lwz r11,3324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3324);
	// stw r11,3324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3324, ctx.r11.u32);
	// lwz r11,3328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3328);
	// stw r11,3328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3328, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8266F500"))) PPC_WEAK_FUNC(sub_8266F500);
PPC_FUNC_IMPL(__imp__sub_8266F500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8266F508;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8265c840
	ctx.lr = 0x8266F514;
	sub_8265C840(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// addi r8,r11,-24640
	ctx.r8.s64 = ctx.r11.s64 + -24640;
	// lfs f11,-24640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24640);
	ctx.f11.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lfs f0,20448(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20448);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// stw r11,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r11.u32);
	// lis r3,-32215
	ctx.r3.s64 = -2111242240;
	// stw r11,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r11.u32);
	// lis r4,-32216
	ctx.r4.s64 = -2111307776;
	// lfs f10,20444(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20444);
	ctx.f10.f64 = double(temp.f32);
	// lis r30,-32215
	ctx.r30.s64 = -2111242240;
	// lfs f13,19204(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19204);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r26,124(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stfs f10,92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f0,19548(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 19548);
	ctx.f0.f64 = double(temp.f32);
	// lwz r25,128(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lfs f12,13184(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 13184);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-32224
	ctx.r7.s64 = -2111832064;
	// lfs f13,18368(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 18368);
	ctx.f13.f64 = double(temp.f32);
	// lis r5,-32224
	ctx.r5.s64 = -2111832064;
	// lfs f10,19684(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 19684);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r11,3564
	ctx.r3.s64 = ctx.r11.s64 + 3564;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f9,-2688(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -2688);
	ctx.f9.f64 = double(temp.f32);
	// addi r5,r5,-30936
	ctx.r5.s64 = ctx.r5.s64 + -30936;
	// lfs f12,-12104(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -12104);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r7,1896
	ctx.r4.s64 = ctx.r7.s64 + 1896;
	// lfs f0,19876(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 19876);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r27,120(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// lis r24,-32224
	ctx.r24.s64 = -2111832064;
	// stw r5,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r5.u32);
	// stw r26,3288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3288, ctx.r26.u32);
	// addi r3,r24,1860
	ctx.r3.s64 = ctx.r24.s64 + 1860;
	// stw r25,3292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3292, ctx.r25.u32);
	// stw r11,3308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3308, ctx.r11.u32);
	// stw r10,3312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3312, ctx.r10.u32);
	// stw r9,3316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3316, ctx.r9.u32);
	// stw r8,3320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3320, ctx.r8.u32);
	// stw r7,3324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3324, ctx.r7.u32);
	// stw r27,3284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3284, ctx.r27.u32);
	// stw r6,3328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3328, ctx.r6.u32);
	// stw r29,3296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3296, ctx.r29.u32);
	// stw r28,3300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3300, ctx.r28.u32);
	// stw r30,3304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3304, ctx.r30.u32);
	// stw r11,2104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2104, ctx.r11.u32);
	// stw r10,2108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2108, ctx.r10.u32);
	// stw r9,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r9.u32);
	// stw r8,2116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2116, ctx.r8.u32);
	// stw r7,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r7.u32);
	// stw r6,2124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2124, ctx.r6.u32);
	// bl 0x82816528
	ctx.lr = 0x8266F64C;
	sub_82816528(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x82336a38
	ctx.lr = 0x8266F678;
	sub_82336A38(ctx, base);
	// li r3,848
	ctx.r3.s64 = 848;
	// bl 0x82833108
	ctx.lr = 0x8266F680;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266f698
	if (ctx.cr0.eq) goto loc_8266F698;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82963eb8
	ctx.lr = 0x8266F690;
	sub_82963EB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8266f69c
	goto loc_8266F69C;
loc_8266F698:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8266F69C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829be6e8
	ctx.lr = 0x8266F6A4;
	sub_829BE6E8(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lis r5,32659
	ctx.r5.s64 = 2140340224;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// ori r5,r5,10987
	ctx.r5.u64 = ctx.r5.u64 | 10987;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8266F6C8;
	sub_823CF190(ctx, base);
	// addi r3,r31,2276
	ctx.r3.s64 = ctx.r31.s64 + 2276;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823327e0
	ctx.lr = 0x8266F6E0;
	sub_823327E0(ctx, base);
	// lwz r11,2288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266f6f4
	if (ctx.cr6.eq) goto loc_8266F6F4;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8266F6F4:
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lis r6,-1408
	ctx.r6.s64 = -92274688;
	// lis r5,25840
	ctx.r5.s64 = 1693450240;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// ori r6,r6,17377
	ctx.r6.u64 = ctx.r6.u64 | 17377;
	// ori r5,r5,33391
	ctx.r5.u64 = ctx.r5.u64 | 33391;
	// addi r4,r31,2244
	ctx.r4.s64 = ctx.r31.s64 + 2244;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x824091a0
	ctx.lr = 0x8266F718;
	sub_824091A0(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,32736
	ctx.r3.s64 = ctx.r11.s64 + 32736;
	// bl 0x82816528
	ctx.lr = 0x8266F724;
	sub_82816528(ctx, base);
	// stw r3,2248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2248, ctx.r3.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,32756
	ctx.r3.s64 = ctx.r11.s64 + 32756;
	// bl 0x82816528
	ctx.lr = 0x8266F734;
	sub_82816528(ctx, base);
	// stw r3,2252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2252, ctx.r3.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,1792
	ctx.r3.s64 = ctx.r11.s64 + 1792;
	// bl 0x828165a8
	ctx.lr = 0x8266F744;
	sub_828165A8(ctx, base);
	// stw r3,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r3.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,1820
	ctx.r3.s64 = ctx.r11.s64 + 1820;
	// bl 0x828165a8
	ctx.lr = 0x8266F754;
	sub_828165A8(ctx, base);
	// lis r11,3321
	ctx.r11.s64 = 217645056;
	// lis r10,-10062
	ctx.r10.s64 = -659423232;
	// stw r3,2080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2080, ctx.r3.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,80
	ctx.r8.s64 = 80;
	// ori r11,r11,51109
	ctx.r11.u64 = ctx.r11.u64 | 51109;
	// stw r9,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r9.u32);
	// ori r10,r10,13507
	ctx.r10.u64 = ctx.r10.u64 | 13507;
	// stw r8,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r8.u32);
	// stw r11,3088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3088, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266F790"))) PPC_WEAK_FUNC(sub_8266F790);
PPC_FUNC_IMPL(__imp__sub_8266F790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,1860
	ctx.r3.s64 = ctx.r11.s64 + 1860;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266F7A0"))) PPC_WEAK_FUNC(sub_8266F7A0);
PPC_FUNC_IMPL(__imp__sub_8266F7A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8265f1d0
	ctx.lr = 0x8266F7B8;
	sub_8265F1D0(ctx, base);
	// lwz r11,2060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2060);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266f7d0
	if (ctx.cr6.eq) goto loc_8266F7D0;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r10,r10,0,16,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_8266F7D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266F7E8"))) PPC_WEAK_FUNC(sub_8266F7E8);
PPC_FUNC_IMPL(__imp__sub_8266F7E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8266f3d8
	sub_8266F3D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266F7F0"))) PPC_WEAK_FUNC(sub_8266F7F0);
PPC_FUNC_IMPL(__imp__sub_8266F7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5844
	ctx.r3.s64 = ctx.r11.s64 + -5844;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266F800"))) PPC_WEAK_FUNC(sub_8266F800);
PPC_FUNC_IMPL(__imp__sub_8266F800) {
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
	// beq cr6,0x8266f838
	if (ctx.cr6.eq) goto loc_8266F838;
	// bl 0x823c4e60
	ctx.lr = 0x8266F828;
	sub_823C4E60(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8266f838
	if (!ctx.cr6.eq) goto loc_8266F838;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8266f844
	goto loc_8266F844;
loc_8266F838:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234e2d8
	ctx.lr = 0x8266F844;
	sub_8234E2D8(ctx, base);
loc_8266F844:
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

__attribute__((alias("__imp__sub_8266F860"))) PPC_WEAK_FUNC(sub_8266F860);
PPC_FUNC_IMPL(__imp__sub_8266F860) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c4e60
	sub_823C4E60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266F868"))) PPC_WEAK_FUNC(sub_8266F868);
PPC_FUNC_IMPL(__imp__sub_8266F868) {
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
	// li r3,3280
	ctx.r3.s64 = 3280;
	// bl 0x82833108
	ctx.lr = 0x8266F888;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266f8c8
	if (ctx.cr0.eq) goto loc_8266F8C8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e3e0
	ctx.lr = 0x8266F89C;
	sub_8234E3E0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,3712
	ctx.r11.s64 = ctx.r11.s64 + 3712;
	// addi r10,r10,5380
	ctx.r10.s64 = ctx.r10.s64 + 5380;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8266f8cc
	goto loc_8266F8CC;
loc_8266F8C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266F8CC:
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

__attribute__((alias("__imp__sub_8266F8E8"))) PPC_WEAK_FUNC(sub_8266F8E8);
PPC_FUNC_IMPL(__imp__sub_8266F8E8) {
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
	// bl 0x823c4e60
	ctx.lr = 0x8266F908;
	sub_823C4E60(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8266f918
	if (!ctx.cr6.eq) goto loc_8266F918;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8266f930
	goto loc_8266F930;
loc_8266F918:
	// bl 0x823323b8
	ctx.lr = 0x8266F91C;
	sub_823323B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8266f930
	if (ctx.cr6.eq) goto loc_8266F930;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8234d0a0
	ctx.lr = 0x8266F930;
	sub_8234D0A0(ctx, base);
loc_8266F930:
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

__attribute__((alias("__imp__sub_8266F948"))) PPC_WEAK_FUNC(sub_8266F948);
PPC_FUNC_IMPL(__imp__sub_8266F948) {
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
	// bl 0x8265cc00
	ctx.lr = 0x8266F968;
	sub_8265CC00(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266f978
	if (ctx.cr0.eq) goto loc_8266F978;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8266F978;
	sub_82332DB8(ctx, base);
loc_8266F978:
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

__attribute__((alias("__imp__sub_8266F998"))) PPC_WEAK_FUNC(sub_8266F998);
PPC_FUNC_IMPL(__imp__sub_8266F998) {
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
	// bl 0x8265c840
	ctx.lr = 0x8266F9B0;
	sub_8265C840(ctx, base);
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// lis r7,-32224
	ctx.r7.s64 = -2111832064;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,3712
	ctx.r9.s64 = ctx.r9.s64 + 3712;
	// stw r11,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r11.u32);
	// addi r8,r8,5380
	ctx.r8.s64 = ctx.r8.s64 + 5380;
	// stw r11,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r11.u32);
	// addi r7,r7,-30936
	ctx.r7.s64 = ctx.r7.s64 + -30936;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// stw r7,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r7.u32);
	// stw r10,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r10.u32);
	// addi r3,r9,3616
	ctx.r3.s64 = ctx.r9.s64 + 3616;
	// stw r11,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r11.u32);
	// stw r10,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r10.u32);
	// stw r11,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r11.u32);
	// bl 0x82816528
	ctx.lr = 0x8266FA00;
	sub_82816528(ctx, base);
	// stw r3,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r3.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-1864
	ctx.r3.s64 = ctx.r11.s64 + -1864;
	// bl 0x82816528
	ctx.lr = 0x8266FA10;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r3,2080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2080, ctx.r3.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lfs f0,19536(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19536);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lfs f13,20440(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20440);
	ctx.f13.f64 = double(temp.f32);
	// li r10,20
	ctx.r10.s64 = 20;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ori r11,r11,32769
	ctx.r11.u64 = ctx.r11.u64 | 32769;
	// lfs f12,-32616(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32616);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,17684(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 17684);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r10.u32);
	// lfs f10,19540(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 19540);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r11.u32);
	// lfs f0,17120(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 17120);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r9,2108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2108, ctx.r9.u32);
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// stw r11,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r11.u32);
	// addi r4,r9,3640
	ctx.r4.s64 = ctx.r9.s64 + 3640;
	// stw r10,2116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2116, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r8,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r8.u32);
	// stw r7,2124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2124, ctx.r7.u32);
	// stw r6,2104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2104, ctx.r6.u32);
	// bl 0x8233a258
	ctx.lr = 0x8266FAB0;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,2320
	ctx.r3.s64 = ctx.r31.s64 + 2320;
	// bl 0x82400b48
	ctx.lr = 0x8266FABC;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x8266FAC4;
	sub_82333960(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-16472
	ctx.r3.s64 = ctx.r11.s64 + -16472;
	// bl 0x82816528
	ctx.lr = 0x8266FAD0;
	sub_82816528(ctx, base);
	// stw r3,2248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2248, ctx.r3.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-16480
	ctx.r3.s64 = ctx.r11.s64 + -16480;
	// bl 0x82816528
	ctx.lr = 0x8266FAE0;
	sub_82816528(ctx, base);
	// lis r11,5903
	ctx.r11.s64 = 386859008;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r3,2252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2252, ctx.r3.u32);
	// ori r9,r11,36082
	ctx.r9.u64 = ctx.r11.u64 | 36082;
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lis r8,14405
	ctx.r8.s64 = 944046080;
	// lis r10,11955
	ctx.r10.s64 = 783482880;
	// stw r9,3088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3088, ctx.r9.u32);
	// ori r9,r8,55715
	ctx.r9.u64 = ctx.r8.u64 | 55715;
	// ori r10,r10,41362
	ctx.r10.u64 = ctx.r10.u64 | 41362;
	// stw r9,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r9.u32);
	// stw r10,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r10.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8266fb40
	if (ctx.cr6.eq) goto loc_8266FB40;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r5,r11,-30912
	ctx.r5.s64 = ctx.r11.s64 + -30912;
	// addi r4,r10,3660
	ctx.r4.s64 = ctx.r10.s64 + 3660;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r31,3216
	ctx.r6.s64 = ctx.r31.s64 + 3216;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c58b0
	ctx.lr = 0x8266FB40;
	sub_828C58B0(ctx, base);
loc_8266FB40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8266FB58"))) PPC_WEAK_FUNC(sub_8266FB58);
PPC_FUNC_IMPL(__imp__sub_8266FB58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8266f948
	sub_8266F948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266FB60"))) PPC_WEAK_FUNC(sub_8266FB60);
PPC_FUNC_IMPL(__imp__sub_8266FB60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8266f8e8
	sub_8266F8E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266FB68"))) PPC_WEAK_FUNC(sub_8266FB68);
PPC_FUNC_IMPL(__imp__sub_8266FB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6932
	ctx.r3.s64 = ctx.r11.s64 + -6932;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266FB78"))) PPC_WEAK_FUNC(sub_8266FB78);
PPC_FUNC_IMPL(__imp__sub_8266FB78) {
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
	// beq cr6,0x8266fbb0
	if (ctx.cr6.eq) goto loc_8266FBB0;
	// bl 0x823c2370
	ctx.lr = 0x8266FBA0;
	sub_823C2370(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8266fbb0
	if (!ctx.cr6.eq) goto loc_8266FBB0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8266fbbc
	goto loc_8266FBBC;
loc_8266FBB0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234e2d8
	ctx.lr = 0x8266FBBC;
	sub_8234E2D8(ctx, base);
loc_8266FBBC:
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

__attribute__((alias("__imp__sub_8266FBD8"))) PPC_WEAK_FUNC(sub_8266FBD8);
PPC_FUNC_IMPL(__imp__sub_8266FBD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c2370
	sub_823C2370(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266FBE0"))) PPC_WEAK_FUNC(sub_8266FBE0);
PPC_FUNC_IMPL(__imp__sub_8266FBE0) {
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
	// li r3,3312
	ctx.r3.s64 = 3312;
	// bl 0x82833108
	ctx.lr = 0x8266FC00;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8266fc78
	if (ctx.cr0.eq) goto loc_8266FC78;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e3e0
	ctx.lr = 0x8266FC14;
	sub_8234E3E0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,5560
	ctx.r11.s64 = ctx.r11.s64 + 5560;
	// addi r10,r10,7228
	ctx.r10.s64 = ctx.r10.s64 + 7228;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
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
	// lwz r11,3300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3300);
	// stw r11,3300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3300, ctx.r11.u32);
	// lwz r11,3304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3304);
	// stw r11,3304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3304, ctx.r11.u32);
	// b 0x8266fc7c
	goto loc_8266FC7C;
loc_8266FC78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266FC7C:
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

__attribute__((alias("__imp__sub_8266FC98"))) PPC_WEAK_FUNC(sub_8266FC98);
PPC_FUNC_IMPL(__imp__sub_8266FC98) {
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
	// bl 0x823c2370
	ctx.lr = 0x8266FCB8;
	sub_823C2370(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8266fcc8
	if (!ctx.cr6.eq) goto loc_8266FCC8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8266fce0
	goto loc_8266FCE0;
loc_8266FCC8:
	// bl 0x823323b8
	ctx.lr = 0x8266FCCC;
	sub_823323B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8266fce0
	if (ctx.cr6.eq) goto loc_8266FCE0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8234d0a0
	ctx.lr = 0x8266FCE0;
	sub_8234D0A0(ctx, base);
loc_8266FCE0:
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

__attribute__((alias("__imp__sub_8266FCF8"))) PPC_WEAK_FUNC(sub_8266FCF8);
PPC_FUNC_IMPL(__imp__sub_8266FCF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8266FD00;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8265c840
	ctx.lr = 0x8266FD0C;
	sub_8265C840(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,5560
	ctx.r11.s64 = ctx.r11.s64 + 5560;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r10,r10,7228
	ctx.r10.s64 = ctx.r10.s64 + 7228;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r30,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r30.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stw r30,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r30.u32);
	// addi r3,r11,5432
	ctx.r3.s64 = ctx.r11.s64 + 5432;
	// bl 0x828165a8
	ctx.lr = 0x8266FD48;
	sub_828165A8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,1936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1936, ctx.r3.u32);
	// stw r30,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r30.u32);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// stw r29,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r29.u32);
	// stw r11,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r11.u32);
	// addi r3,r10,5452
	ctx.r3.s64 = ctx.r10.s64 + 5452;
	// stw r30,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r30.u32);
	// bl 0x82816528
	ctx.lr = 0x8266FD70;
	sub_82816528(ctx, base);
	// stw r3,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r3.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-1864
	ctx.r3.s64 = ctx.r11.s64 + -1864;
	// bl 0x82816528
	ctx.lr = 0x8266FD80;
	sub_82816528(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stw r3,2080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2080, ctx.r3.u32);
	// addi r9,r11,-32456
	ctx.r9.s64 = ctx.r11.s64 + -32456;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f10,-32456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32456);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,19792(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19792);
	ctx.f0.f64 = double(temp.f32);
	// li r8,20
	ctx.r8.s64 = 20;
	// lfs f12,-304(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -304);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lfs f13,17668(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17668);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f9,20436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20436);
	ctx.f9.f64 = double(temp.f32);
	// ori r9,r9,32769
	ctx.r9.u64 = ctx.r9.u64 | 32769;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f11,17116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17116);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r30,108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r9,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r9.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f8,18516(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18516);
	ctx.f8.f64 = double(temp.f32);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r27,108(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r26,112(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r25,104(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r24,108(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r8,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r8.u32);
	// addi r4,r7,-23768
	ctx.r4.s64 = ctx.r7.s64 + -23768;
	// stw r11,2108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2108, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r28,2104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2104, ctx.r28.u32);
	// stw r6,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r6.u32);
	// stw r5,2116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2116, ctx.r5.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r30.u32);
	// stw r10,2124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2124, ctx.r10.u32);
	// stw r9,3284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3284, ctx.r9.u32);
	// stw r27,3288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3288, ctx.r27.u32);
	// stw r26,3292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3292, ctx.r26.u32);
	// stw r25,3296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3296, ctx.r25.u32);
	// stw r24,3300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3300, ctx.r24.u32);
	// stw r11,3304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3304, ctx.r11.u32);
	// bl 0x8233a258
	ctx.lr = 0x8266FE70;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,2320
	ctx.r3.s64 = ctx.r31.s64 + 2320;
	// bl 0x82400b48
	ctx.lr = 0x8266FE7C;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x8266FE84;
	sub_82333960(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,4243
	ctx.r10.s64 = 278069248;
	// stw r29,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r29.u32);
	// lis r9,24881
	ctx.r9.s64 = 1630601216;
	// ori r10,r10,62582
	ctx.r10.u64 = ctx.r10.u64 | 62582;
	// lis r8,5903
	ctx.r8.s64 = 386859008;
	// ori r9,r9,65451
	ctx.r9.u64 = ctx.r9.u64 | 65451;
	// stw r10,2248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2248, ctx.r10.u32);
	// lis r7,9077
	ctx.r7.s64 = 594870272;
	// lis r6,14057
	ctx.r6.s64 = 921239552;
	// stw r9,2252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2252, ctx.r9.u32);
	// ori r10,r8,36082
	ctx.r10.u64 = ctx.r8.u64 | 36082;
	// li r5,28
	ctx.r5.s64 = 28;
	// ori r9,r7,1750
	ctx.r9.u64 = ctx.r7.u64 | 1750;
	// stw r10,3088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3088, ctx.r10.u32);
	// ori r8,r6,19571
	ctx.r8.u64 = ctx.r6.u64 | 19571;
	// stw r5,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r5.u32);
	// stw r9,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r9.u32);
	// stw r8,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r8.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8266ff04
	if (ctx.cr6.eq) goto loc_8266FF04;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r5,r11,-30912
	ctx.r5.s64 = ctx.r11.s64 + -30912;
	// addi r4,r10,5480
	ctx.r4.s64 = ctx.r10.s64 + 5480;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r31,3216
	ctx.r6.s64 = ctx.r31.s64 + 3216;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c58b0
	ctx.lr = 0x8266FF04;
	sub_828C58B0(ctx, base);
loc_8266FF04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266FF10"))) PPC_WEAK_FUNC(sub_8266FF10);
PPC_FUNC_IMPL(__imp__sub_8266FF10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8266FF18;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8265f1d0
	ctx.lr = 0x8266FF2C;
	sub_8265F1D0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r9,3284(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lwz r8,3288(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// addi r3,r10,5532
	ctx.r3.s64 = ctx.r10.s64 + 5532;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r11,3296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	// lwz r10,3300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// lwz r30,2080(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2080);
	// lwz r29,3304(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3304);
	// lwz r28,3292(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3292);
	// lwz r27,2100(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2100);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// bl 0x82816528
	ctx.lr = 0x8266FF7C;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r26,152(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,136
	ctx.r5.s64 = 136;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r8,r28,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// rldicr r10,r29,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// bl 0x8265f390
	ctx.lr = 0x8266FFB4;
	sub_8265F390(ctx, base);
	// lwz r11,3232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3232);
	// stw r3,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8266ffd0
	if (ctx.cr6.gt) goto loc_8266FFD0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// b 0x8266ffd8
	goto loc_8266FFD8;
loc_8266FFD0:
	// lwz r11,3228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3228);
	// lfs f30,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
loc_8266FFD8:
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82670008
	if (ctx.cr6.eq) goto loc_82670008;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82670000;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x8267000c
	goto loc_8267000C;
loc_82670008:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8267000C:
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r29,152(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,2084(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2084);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,3280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x82331120
	ctx.lr = 0x82670054;
	sub_82331120(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82670068"))) PPC_WEAK_FUNC(sub_82670068);
PPC_FUNC_IMPL(__imp__sub_82670068) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x826700ac
	if (!ctx.cr6.eq) goto loc_826700AC;
	// lwz r11,3280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3280);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,2072(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2072, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,2084(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2084);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 592, ctx.r9.u32);
	// stw r10,452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 452, ctx.r10.u32);
	// lwz r11,3280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3280);
	// lwz r10,2048(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2048);
	// stw r10,416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 416, ctx.r10.u32);
	// lwz r3,3280(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3280);
	// b 0x8281d650
	sub_8281D650(ctx, base);
	return;
loc_826700AC:
	// b 0x8265fbc8
	sub_8265FBC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826700B0"))) PPC_WEAK_FUNC(sub_826700B0);
PPC_FUNC_IMPL(__imp__sub_826700B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826700B8"))) PPC_WEAK_FUNC(sub_826700B8);
PPC_FUNC_IMPL(__imp__sub_826700B8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826700c8
	if (ctx.cr6.eq) goto loc_826700C8;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x826700e8
	if (!ctx.cr6.eq) goto loc_826700E8;
loc_826700C8:
	// lwz r11,3280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3280);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,2072(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2072, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826700e8
	if (ctx.cr6.eq) goto loc_826700E8;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_826700E8:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x826700f8
	if (ctx.cr6.eq) goto loc_826700F8;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_826700F8:
	// b 0x8265ff38
	sub_8265FF38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826700FC"))) PPC_WEAK_FUNC(sub_826700FC);
PPC_FUNC_IMPL(__imp__sub_826700FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82670100"))) PPC_WEAK_FUNC(sub_82670100);
PPC_FUNC_IMPL(__imp__sub_82670100) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8266fc98
	sub_8266FC98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82670108"))) PPC_WEAK_FUNC(sub_82670108);
PPC_FUNC_IMPL(__imp__sub_82670108) {
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
	// beq cr6,0x82670140
	if (ctx.cr6.eq) goto loc_82670140;
	// bl 0x826708b8
	ctx.lr = 0x82670130;
	sub_826708B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82670140
	if (!ctx.cr6.eq) goto loc_82670140;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267014c
	goto loc_8267014C;
loc_82670140:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8265c138
	ctx.lr = 0x8267014C;
	sub_8265C138(ctx, base);
loc_8267014C:
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

