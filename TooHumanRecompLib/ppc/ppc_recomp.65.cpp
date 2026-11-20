#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82546DF8"))) PPC_WEAK_FUNC(sub_82546DF8);
PPC_FUNC_IMPL(__imp__sub_82546DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,12116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82546e40
	if (!ctx.cr6.eq) goto loc_82546E40;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-28776
	ctx.r3.s64 = ctx.r10.s64 + -28776;
	// bl 0x82a4c7d8
	ctx.lr = 0x82546E2C;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x82546E34;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x82546E3C;
	sub_82816528(ctx, base);
	// stw r3,12116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12116, ctx.r3.u32);
loc_82546E40:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82546E58"))) PPC_WEAK_FUNC(sub_82546E58);
PPC_FUNC_IMPL(__imp__sub_82546E58) {
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
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82546eb8
	if (!ctx.cr6.gt) goto loc_82546EB8;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82546E8C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82546ea8
	if (!ctx.cr6.eq) goto loc_82546EA8;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x82546ef4
	if (ctx.cr6.eq) goto loc_82546EF4;
loc_82546EA8:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82546e8c
	if (ctx.cr6.lt) goto loc_82546E8C;
loc_82546EB8:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x82546ECC;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82546eec
	if (ctx.cr0.eq) goto loc_82546EEC;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82546EEC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
loc_82546EF4:
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

__attribute__((alias("__imp__sub_82546F10"))) PPC_WEAK_FUNC(sub_82546F10);
PPC_FUNC_IMPL(__imp__sub_82546F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x82546f4c
	if (ctx.cr6.eq) goto loc_82546F4C;
	// bl 0x823b7190
	ctx.lr = 0x82546F30;
	sub_823B7190(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82546F48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82546f50
	goto loc_82546F50;
loc_82546F4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82546F50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82546F68"))) PPC_WEAK_FUNC(sub_82546F68);
PPC_FUNC_IMPL(__imp__sub_82546F68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82544430
	sub_82544430(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82546F70"))) PPC_WEAK_FUNC(sub_82546F70);
PPC_FUNC_IMPL(__imp__sub_82546F70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825440f0
	sub_825440F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82546F78"))) PPC_WEAK_FUNC(sub_82546F78);
PPC_FUNC_IMPL(__imp__sub_82546F78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82544430
	sub_82544430(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82546F80"))) PPC_WEAK_FUNC(sub_82546F80);
PPC_FUNC_IMPL(__imp__sub_82546F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f2,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-11456(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11456);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82540000
	sub_82540000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82546F98"))) PPC_WEAK_FUNC(sub_82546F98);
PPC_FUNC_IMPL(__imp__sub_82546F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f2,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// b 0x82540000
	sub_82540000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82546FA8"))) PPC_WEAK_FUNC(sub_82546FA8);
PPC_FUNC_IMPL(__imp__sub_82546FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f2,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-27300(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27300);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82540000
	sub_82540000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82546FC0"))) PPC_WEAK_FUNC(sub_82546FC0);
PPC_FUNC_IMPL(__imp__sub_82546FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82546FC8;
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
	// lis r10,-1065
	ctx.r10.s64 = -69795840;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// ori r29,r10,47510
	ctx.r29.u64 = ctx.r10.u64 | 47510;
	// lis r4,-16689
	ctx.r4.s64 = -1093730304;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r7,32
	ctx.r7.s64 = 32;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r6,9
	ctx.r6.s64 = 9;
	// lfs f1,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// ori r4,r4,39672
	ctx.r4.u64 = ctx.r4.u64 | 39672;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82500060
	ctx.lr = 0x82547008;
	sub_82500060(ctx, base);
	// stw r3,7000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7000, ctx.r3.u32);
	// lis r4,-28938
	ctx.r4.s64 = -1896480768;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r7,32
	ctx.r7.s64 = 32;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,18
	ctx.r6.s64 = 18;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,52261
	ctx.r4.u64 = ctx.r4.u64 | 52261;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82500060
	ctx.lr = 0x82547030;
	sub_82500060(ctx, base);
	// lis r11,-2251
	ctx.r11.s64 = -147521536;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,7004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7004, ctx.r3.u32);
	// ori r11,r11,9123
	ctx.r11.u64 = ctx.r11.u64 | 9123;
	// li r28,4
	ctx.r28.s64 = 4;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8254706C;
	sub_82410060(ctx, base);
	// lis r11,-2425
	ctx.r11.s64 = -158924800;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,44029
	ctx.r11.u64 = ctx.r11.u64 | 44029;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82547084;
	sub_82410060(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82873b58
	ctx.lr = 0x82547090;
	sub_82873B58(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,42
	ctx.r6.s64 = 42;
	// lfs f1,-27300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f1.f64 = double(temp.f32);
	// li r7,32
	ctx.r7.s64 = 32;
	// lfs f2,32716(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32716);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82500100
	ctx.lr = 0x825470B8;
	sub_82500100(ctx, base);
	// stw r3,7008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7008, ctx.r3.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r3,r11,-21140
	ctx.r3.s64 = ctx.r11.s64 + -21140;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// bl 0x82816528
	ctx.lr = 0x825470E0;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82410060
	ctx.lr = 0x825470F0;
	sub_82410060(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-21124
	ctx.r3.s64 = ctx.r11.s64 + -21124;
	// bl 0x82816528
	ctx.lr = 0x825470FC;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82410060
	ctx.lr = 0x8254710C;
	sub_82410060(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-21108
	ctx.r3.s64 = ctx.r11.s64 + -21108;
	// bl 0x82816528
	ctx.lr = 0x82547118;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82410060
	ctx.lr = 0x82547128;
	sub_82410060(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-21092
	ctx.r3.s64 = ctx.r11.s64 + -21092;
	// bl 0x82816528
	ctx.lr = 0x82547134;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82410060
	ctx.lr = 0x82547144;
	sub_82410060(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82873b58
	ctx.lr = 0x82547150;
	sub_82873B58(ctx, base);
	// lwz r11,7008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7008);
	// lwz r10,6732(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6732);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mulli r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 * 92;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,68
	ctx.r3.s64 = ctx.r11.s64 + 68;
	// bl 0x828e0f90
	ctx.lr = 0x82547170;
	sub_828E0F90(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8239d768
	ctx.lr = 0x82547178;
	sub_8239D768(ctx, base);
	// stw r30,7012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7012, ctx.r30.u32);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lis r5,-6113
	ctx.r5.s64 = -400621568;
	// addi r4,r31,7012
	ctx.r4.s64 = ctx.r31.s64 + 7012;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// ori r5,r5,59975
	ctx.r5.u64 = ctx.r5.u64 | 59975;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825471A4;
	sub_823CF190(ctx, base);
	// stw r30,7016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7016, ctx.r30.u32);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lis r5,-17205
	ctx.r5.s64 = -1127546880;
	// addi r4,r31,7016
	ctx.r4.s64 = ctx.r31.s64 + 7016;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// ori r5,r5,44094
	ctx.r5.u64 = ctx.r5.u64 | 44094;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825471C8;
	sub_823CF190(ctx, base);
	// stw r30,7020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7020, ctx.r30.u32);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lis r5,-1495
	ctx.r5.s64 = -97976320;
	// addi r4,r31,7020
	ctx.r4.s64 = ctx.r31.s64 + 7020;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// ori r5,r5,59182
	ctx.r5.u64 = ctx.r5.u64 | 59182;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825471EC;
	sub_823CF190(ctx, base);
	// stw r30,7024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7024, ctx.r30.u32);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lis r5,-18305
	ctx.r5.s64 = -1199636480;
	// addi r4,r31,7024
	ctx.r4.s64 = ctx.r31.s64 + 7024;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// ori r5,r5,11574
	ctx.r5.u64 = ctx.r5.u64 | 11574;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x82547210;
	sub_823CF190(ctx, base);
	// lis r4,2579
	ctx.r4.s64 = 169017344;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// ori r4,r4,31595
	ctx.r4.u64 = ctx.r4.u64 | 31595;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bd828
	ctx.lr = 0x82547224;
	sub_829BD828(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r3,7028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7028, ctx.r3.u32);
	// addi r30,r11,-2728
	ctx.r30.s64 = ctx.r11.s64 + -2728;
	// addi r29,r10,13868
	ctx.r29.s64 = ctx.r10.s64 + 13868;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lis r4,-29481
	ctx.r4.s64 = -1932066816;
	// ori r4,r4,21864
	ctx.r4.u64 = ctx.r4.u64 | 21864;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x829c7118
	ctx.lr = 0x82547264;
	sub_829C7118(ctx, base);
	// lwz r3,7028(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7028);
	// bl 0x82978ed0
	ctx.lr = 0x8254726C;
	sub_82978ED0(ctx, base);
	// lis r4,-3730
	ctx.r4.s64 = -244449280;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// ori r4,r4,3254
	ctx.r4.u64 = ctx.r4.u64 | 3254;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bd828
	ctx.lr = 0x82547280;
	sub_829BD828(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r3,7032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7032, ctx.r3.u32);
	// lis r4,2658
	ctx.r4.s64 = 174194688;
	// ori r4,r4,28146
	ctx.r4.u64 = ctx.r4.u64 | 28146;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rldicr r8,r9,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x829c7118
	ctx.lr = 0x825472B0;
	sub_829C7118(ctx, base);
	// lwz r3,7032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7032);
	// bl 0x82978ed0
	ctx.lr = 0x825472B8;
	sub_82978ED0(ctx, base);
	// lis r4,-17983
	ctx.r4.s64 = -1178533888;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// ori r4,r4,55450
	ctx.r4.u64 = ctx.r4.u64 | 55450;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bd828
	ctx.lr = 0x825472CC;
	sub_829BD828(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r3,7036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7036, ctx.r3.u32);
	// lis r4,-29481
	ctx.r4.s64 = -1932066816;
	// ori r4,r4,21864
	ctx.r4.u64 = ctx.r4.u64 | 21864;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rldicr r6,r9,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x829c7118
	ctx.lr = 0x825472FC;
	sub_829C7118(ctx, base);
	// lwz r3,7036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7036);
	// bl 0x82978ed0
	ctx.lr = 0x82547304;
	sub_82978ED0(ctx, base);
	// lis r4,-17983
	ctx.r4.s64 = -1178533888;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// ori r4,r4,55450
	ctx.r4.u64 = ctx.r4.u64 | 55450;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bd828
	ctx.lr = 0x82547318;
	sub_829BD828(ctx, base);
	// stw r3,7040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7040, ctx.r3.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r4,2658
	ctx.r4.s64 = 174194688;
	// ld r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// ld r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ori r4,r4,28146
	ctx.r4.u64 = ctx.r4.u64 | 28146;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x829c7118
	ctx.lr = 0x82547340;
	sub_829C7118(ctx, base);
	// lwz r3,7040(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7040);
	// bl 0x82978ed0
	ctx.lr = 0x82547348;
	sub_82978ED0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239d768
	ctx.lr = 0x82547350;
	sub_8239D768(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8239d768
	ctx.lr = 0x82547358;
	sub_8239D768(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82547368"))) PPC_WEAK_FUNC(sub_82547368);
PPC_FUNC_IMPL(__imp__sub_82547368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82547370;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lfs f29,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f29.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f30,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r11,-21076
	ctx.r27.s64 = ctx.r11.s64 + -21076;
loc_825473A8:
	// lwz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82547408
	if (!ctx.cr6.lt) goto loc_82547408;
	// lwz r11,288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82411cb0
	ctx.lr = 0x825473C0;
	sub_82411CB0(ctx, base);
	// bl 0x82411cb0
	ctx.lr = 0x825473C4;
	sub_82411CB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825473fc
	if (ctx.cr0.eq) goto loc_825473FC;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x825473dc
	if (ctx.cr6.eq) goto loc_825473DC;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
	// b 0x825473e0
	goto loc_825473E0;
loc_825473DC:
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
loc_825473E0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x825473E8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965458
	ctx.lr = 0x825473FC;
	sub_82965458(ctx, base);
loc_825473FC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// b 0x825473a8
	goto loc_825473A8;
loc_82547408:
	// lwz r3,7028(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7028);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254744c
	if (ctx.cr6.eq) goto loc_8254744C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82547438
	if (ctx.cr6.eq) goto loc_82547438;
	// bl 0x82979298
	ctx.lr = 0x82547420;
	sub_82979298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8254744c
	if (!ctx.cr0.eq) goto loc_8254744C;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// lwz r3,7028(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7028);
	// bl 0x82978d98
	ctx.lr = 0x82547434;
	sub_82978D98(ctx, base);
	// b 0x8254744c
	goto loc_8254744C;
loc_82547438:
	// bl 0x82979298
	ctx.lr = 0x8254743C;
	sub_82979298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8254744c
	if (ctx.cr0.eq) goto loc_8254744C;
	// lwz r3,7028(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7028);
	// bl 0x82978ed0
	ctx.lr = 0x8254744C;
	sub_82978ED0(ctx, base);
loc_8254744C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82547460"))) PPC_WEAK_FUNC(sub_82547460);
PPC_FUNC_IMPL(__imp__sub_82547460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82547468;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lfs f29,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f29.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f30,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r11,-21064
	ctx.r27.s64 = ctx.r11.s64 + -21064;
loc_825474A0:
	// lwz r11,292(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82547500
	if (!ctx.cr6.lt) goto loc_82547500;
	// lwz r11,288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82411cb0
	ctx.lr = 0x825474B8;
	sub_82411CB0(ctx, base);
	// bl 0x82411cb0
	ctx.lr = 0x825474BC;
	sub_82411CB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825474f4
	if (ctx.cr0.eq) goto loc_825474F4;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x825474d4
	if (ctx.cr6.eq) goto loc_825474D4;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
	// b 0x825474d8
	goto loc_825474D8;
loc_825474D4:
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
loc_825474D8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x825474E0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965458
	ctx.lr = 0x825474F4;
	sub_82965458(ctx, base);
loc_825474F4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// b 0x825474a0
	goto loc_825474A0;
loc_82547500:
	// lwz r3,7032(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82547544
	if (ctx.cr6.eq) goto loc_82547544;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82547530
	if (ctx.cr6.eq) goto loc_82547530;
	// bl 0x82979298
	ctx.lr = 0x82547518;
	sub_82979298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82547544
	if (!ctx.cr0.eq) goto loc_82547544;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// lwz r3,7032(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7032);
	// bl 0x82978d98
	ctx.lr = 0x8254752C;
	sub_82978D98(ctx, base);
	// b 0x82547544
	goto loc_82547544;
loc_82547530:
	// bl 0x82979298
	ctx.lr = 0x82547534;
	sub_82979298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82547544
	if (ctx.cr0.eq) goto loc_82547544;
	// lwz r3,7032(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7032);
	// bl 0x82978ed0
	ctx.lr = 0x82547544;
	sub_82978ED0(ctx, base);
loc_82547544:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82547558"))) PPC_WEAK_FUNC(sub_82547558);
PPC_FUNC_IMPL(__imp__sub_82547558) {
	PPC_FUNC_PROLOGUE();
	// lis r5,-11531
	ctx.r5.s64 = -755695616;
	// lwz r4,7004(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7004);
	// ori r5,r5,40934
	ctx.r5.u64 = ctx.r5.u64 | 40934;
	// b 0x824ffdd0
	sub_824FFDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82547568"))) PPC_WEAK_FUNC(sub_82547568);
PPC_FUNC_IMPL(__imp__sub_82547568) {
	PPC_FUNC_PROLOGUE();
	// lis r5,22384
	ctx.r5.s64 = 1466957824;
	// lwz r4,7004(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7004);
	// ori r5,r5,63574
	ctx.r5.u64 = ctx.r5.u64 | 63574;
	// b 0x824ffdd0
	sub_824FFDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82547578"))) PPC_WEAK_FUNC(sub_82547578);
PPC_FUNC_IMPL(__imp__sub_82547578) {
	PPC_FUNC_PROLOGUE();
	// lis r5,-20177
	ctx.r5.s64 = -1322319872;
	// lwz r4,7004(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7004);
	// ori r5,r5,23770
	ctx.r5.u64 = ctx.r5.u64 | 23770;
	// b 0x824ffdd0
	sub_824FFDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82547588"))) PPC_WEAK_FUNC(sub_82547588);
PPC_FUNC_IMPL(__imp__sub_82547588) {
	PPC_FUNC_PROLOGUE();
	// lis r5,-19143
	ctx.r5.s64 = -1254555648;
	// lwz r4,7004(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7004);
	// ori r5,r5,9611
	ctx.r5.u64 = ctx.r5.u64 | 9611;
	// b 0x824ffdd0
	sub_824FFDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82547598"))) PPC_WEAK_FUNC(sub_82547598);
PPC_FUNC_IMPL(__imp__sub_82547598) {
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
	// lwz r5,7016(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7016);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825475e8
	if (ctx.cr6.eq) goto loc_825475E8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,664(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 664);
	// lwz r8,628(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r9,656(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 656);
	// li r4,48
	ctx.r4.s64 = 48;
	// ld r7,620(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 620);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x8282b1e0
	ctx.lr = 0x825475E8;
	sub_8282B1E0(ctx, base);
loc_825475E8:
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

__attribute__((alias("__imp__sub_82547600"))) PPC_WEAK_FUNC(sub_82547600);
PPC_FUNC_IMPL(__imp__sub_82547600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82547608;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825476a0
	if (ctx.cr0.eq) goto loc_825476A0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8281d650
	ctx.lr = 0x82547638;
	sub_8281D650(ctx, base);
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r11,0
	ctx.r11.s64 = 0;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f13,f31,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8254769c
	if (ctx.cr6.lt) goto loc_8254769C;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r10,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r10.u32);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x825476a0
	goto loc_825476A0;
loc_8254769C:
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
loc_825476A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825476B0"))) PPC_WEAK_FUNC(sub_825476B0);
PPC_FUNC_IMPL(__imp__sub_825476B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x825476B8;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82a61734
	ctx.lr = 0x825476C0;
	__savefpr_23(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x824df418
	ctx.lr = 0x825476CC;
	sub_824DF418(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-31961
	ctx.r7.s64 = -2094596096;
	// lfs f0,16580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16580);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,19796(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19796);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r30,152(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lfs f11,-12104(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12104);
	ctx.f11.f64 = double(temp.f32);
	// lis r26,-32243
	ctx.r26.s64 = -2113077248;
	// lfs f0,16664(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16664);
	ctx.f0.f64 = double(temp.f32);
	// lis r25,-32242
	ctx.r25.s64 = -2113011712;
	// lfs f13,-28800(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -28800);
	ctx.f13.f64 = double(temp.f32);
	// addi r24,r26,-24644
	ctx.r24.s64 = ctx.r26.s64 + -24644;
	// lfs f12,18120(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 18120);
	ctx.f12.f64 = double(temp.f32);
	// addi r23,r25,-32760
	ctx.r23.s64 = ctx.r25.s64 + -32760;
	// lfs f27,17960(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17960);
	ctx.f27.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stfs f11,184(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stfs f27,164(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lwz r9,5352(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5352);
	// lfs f0,-2684(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -2684);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,144(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// stw r31,400(r9)
	PPC_STORE_U32(ctx.r9.u32 + 400, ctx.r31.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lis r10,22237
	ctx.r10.s64 = 1457324032;
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// ori r28,r10,987
	ctx.r28.u64 = ctx.r10.u64 | 987;
	// lis r4,-16601
	ctx.r4.s64 = -1087963136;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,62193
	ctx.r4.u64 = ctx.r4.u64 | 62193;
	// rldicr r9,r30,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r7,r29,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824e5590
	ctx.lr = 0x8254779C;
	sub_824E5590(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,5356(r27)
	PPC_STORE_U32(ctx.r27.u32 + 5356, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825477BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lfs f0,16592(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16592);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f13,17840(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17840);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,23596(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23596);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f28,19792(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19792);
	ctx.f28.f64 = double(temp.f32);
	// lfs f11,19788(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 19788);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f28,144(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r9,5356(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5356);
	// lfs f0,19784(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19784);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r9,6912(r27)
	PPC_STORE_U32(ctx.r27.u32 + 6912, ctx.r9.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ld r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lis r10,19549
	ctx.r10.s64 = 1281163264;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lis r4,-3736
	ctx.r4.s64 = -244842496;
	// ori r10,r10,6536
	ctx.r10.u64 = ctx.r10.u64 | 6536;
	// ld r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ori r4,r4,3838
	ctx.r4.u64 = ctx.r4.u64 | 3838;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824e5590
	ctx.lr = 0x8254786C;
	sub_824E5590(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r3,5360(r27)
	PPC_STORE_U32(ctx.r27.u32 + 5360, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82547888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lfs f0,19780(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19780);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lfs f0,19776(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19776);
	ctx.f0.f64 = double(temp.f32);
	// lwz r30,184(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lis r29,-32215
	ctx.r29.s64 = -2111242240;
	// lfs f23,19772(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19772);
	ctx.f23.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f23,152(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r22,152(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lfs f30,19768(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19768);
	ctx.f30.f64 = double(temp.f32);
	// lis r10,870
	ctx.r10.s64 = 57016320;
	// lfs f13,19764(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 19764);
	ctx.f13.f64 = double(temp.f32);
	// lis r4,-11256
	ctx.r4.s64 = -737673216;
	// lfs f12,19760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19760);
	ctx.f12.f64 = double(temp.f32);
	// ori r10,r10,896
	ctx.r10.u64 = ctx.r10.u64 | 896;
	// lfs f11,19756(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 19756);
	ctx.f11.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ori r4,r4,56587
	ctx.r4.u64 = ctx.r4.u64 | 56587;
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f11,180(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ld r6,176(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lfs f0,19684(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19684);
	ctx.f0.f64 = double(temp.f32);
	// lwz r21,5352(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5352);
	// lfs f29,16604(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16604);
	ctx.f29.f64 = double(temp.f32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f29,160(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// ld r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r9,r22,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r7,r30,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// bl 0x824e5590
	ctx.lr = 0x82547944;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1740);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82547968;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,-4(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stfs f29,180(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f0,19644(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19644);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// lfs f0,19752(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19752);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,24415
	ctx.r10.s64 = 1600061440;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r30,152(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lfs f0,19748(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19748);
	ctx.f0.f64 = double(temp.f32);
	// lis r4,-18469
	ctx.r4.s64 = -1210384384;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f13,19744(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 19744);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,168(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lfs f0,19740(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19740);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ori r10,r10,58066
	ctx.r10.u64 = ctx.r10.u64 | 58066;
	// lfs f0,19676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19676);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,5352(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5352);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// ori r4,r4,33045
	ctx.r4.u64 = ctx.r4.u64 | 33045;
	// lwz r29,184(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// rldicr r9,r30,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,176(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r7,r29,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824e5590
	ctx.lr = 0x82547A10;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1740);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82547A30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f25,-4648(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -4648);
	ctx.f25.f64 = double(temp.f32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stfs f25,168(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// stfs f29,144(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lis r10,-1198
	ctx.r10.s64 = -78512128;
	// stfs f28,176(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lfs f26,19548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19548);
	ctx.f26.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r4,3321
	ctx.r4.s64 = 217645056;
	// lfs f0,19736(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19736);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,17848(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 17848);
	ctx.f30.f64 = double(temp.f32);
	// ori r10,r10,31389
	ctx.r10.u64 = ctx.r10.u64 | 31389;
	// lfs f13,19732(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 19732);
	ctx.f13.f64 = double(temp.f32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stfs f26,160(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f24,19660(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19660);
	ctx.f24.f64 = double(temp.f32);
	// ori r4,r4,26437
	ctx.r4.u64 = ctx.r4.u64 | 26437;
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r11,5352(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5352);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stfs f26,152(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stfs f24,184(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lwz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// rldicr r7,r8,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,176(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// bl 0x824e5590
	ctx.lr = 0x82547AD0;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1740);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82547AF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f29,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// stfs f24,168(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f26,184(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r7,168(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r30,184(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stfs f28,160(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f29,16540(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16540);
	ctx.f29.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f29,164(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// lfs f0,19728(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19728);
	ctx.f0.f64 = double(temp.f32);
	// lis r4,-6370
	ctx.r4.s64 = -417464320;
	// lfs f13,19724(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 19724);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ld r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// stfs f25,152(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f0,18368(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18368);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,26696
	ctx.r10.s64 = 1749549056;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// ori r4,r4,1700
	ctx.r4.u64 = ctx.r4.u64 | 1700;
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ori r10,r10,5884
	ctx.r10.u64 = ctx.r10.u64 | 5884;
	// lwz r11,5352(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5352);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r9,r30,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x824e5590
	ctx.lr = 0x82547B88;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1740);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82547BAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,-24644(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -24644);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-60(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + -60);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f0,19720(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19720);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lfs f13,912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lfs f24,-28788(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28788);
	ctx.f24.f64 = double(temp.f32);
	// stfs f24,152(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r11,5352(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5352);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ld r6,176(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f28,23600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23600);
	ctx.f28.f64 = double(temp.f32);
	// lis r10,29033
	ctx.r10.s64 = 1902706688;
	// stfs f28,184(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lis r4,9506
	ctx.r4.s64 = 622985216;
	// ori r10,r10,45555
	ctx.r10.u64 = ctx.r10.u64 | 45555;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// lfs f0,19716(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19716);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// ld r30,144(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r30,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r30.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// ori r4,r4,7552
	ctx.r4.u64 = ctx.r4.u64 | 7552;
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824e5590
	ctx.lr = 0x82547C50;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1740);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82547C74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f24,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f23,180(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f28,184(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r7,184(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// lfs f12,19664(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19664);
	ctx.f12.f64 = double(temp.f32);
	// lis r4,-32215
	ctx.r4.s64 = -2111242240;
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lis r10,-27386
	ctx.r10.s64 = -1794768896;
	// lfs f13,19712(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19712);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f11,19592(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19592);
	ctx.f11.f64 = double(temp.f32);
	// ori r10,r10,36407
	ctx.r10.u64 = ctx.r10.u64 | 36407;
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f11,176(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lfs f23,16360(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16360);
	ctx.f23.f64 = double(temp.f32);
	// lis r4,-11818
	ctx.r4.s64 = -774504448;
	// lfs f0,19708(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 19708);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// ori r4,r4,11204
	ctx.r4.u64 = ctx.r4.u64 | 11204;
	// stfs f23,148(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// ld r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// ld r6,176(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lwz r11,5352(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5352);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824e5590
	ctx.lr = 0x82547D10;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1740);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82547D34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f27,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f23,184(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r10,-7585
	ctx.r10.s64 = -497090560;
	// lfs f26,-32760(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -32760);
	ctx.f26.f64 = double(temp.f32);
	// lis r4,21307
	ctx.r4.s64 = 1396375552;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// ori r10,r10,16672
	ctx.r10.u64 = ctx.r10.u64 | 16672;
	// lfs f28,19704(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19704);
	ctx.f28.f64 = double(temp.f32);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stfs f28,152(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stfs f28,148(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f26,176(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// ori r4,r4,59739
	ctx.r4.u64 = ctx.r4.u64 | 59739;
	// stfs f29,180(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r30,168(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// ld r29,160(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,5352(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5352);
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x824e5590
	ctx.lr = 0x82547DB4;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1740);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82547DD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f26,176(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r6,5352(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5352);
	// stfs f28,148(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stfs f28,152(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lis r10,11932
	ctx.r10.s64 = 781975552;
	// stfs f29,180(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lis r4,-17967
	ctx.r4.s64 = -1177485312;
	// stfs f27,144(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// ori r10,r10,4519
	ctx.r10.u64 = ctx.r10.u64 | 4519;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f23,184(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ori r4,r4,36937
	ctx.r4.u64 = ctx.r4.u64 | 36937;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// ld r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// ld r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r30,168(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// bl 0x824e5590
	ctx.lr = 0x82547E4C;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1740);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82547E70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r28,r9,13868
	ctx.r28.s64 = ctx.r9.s64 + 13868;
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lfs f0,24008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24008);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// lfs f0,18520(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18520);
	ctx.f0.f64 = double(temp.f32);
	// lis r4,195
	ctx.r4.s64 = 12779520;
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// li r6,512
	ctx.r6.s64 = 512;
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// ori r5,r5,136
	ctx.r5.u64 = ctx.r5.u64 | 136;
	// ori r4,r4,40427
	ctx.r4.u64 = ctx.r4.u64 | 40427;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// std r26,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r26.u64);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x824e4120
	ctx.lr = 0x82547EFC;
	sub_824E4120(ctx, base);
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// ld r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,6940(r27)
	PPC_STORE_U32(ctx.r27.u32 + 6940, ctx.r3.u32);
	// lfs f28,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f28.f64 = double(temp.f32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82331120
	ctx.lr = 0x82547F58;
	sub_82331120(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r3,r11,-21052
	ctx.r3.s64 = ctx.r11.s64 + -21052;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f26,160(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f29,164(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f29,168(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f30,144(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r11,6940(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6940);
	// stw r29,416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 416, ctx.r29.u32);
	// bl 0x82816528
	ctx.lr = 0x82547F90;
	sub_82816528(ctx, base);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lis r4,6848
	ctx.r4.s64 = 448790528;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// li r5,136
	ctx.r5.s64 = 136;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// ori r4,r4,12836
	ctx.r4.u64 = ctx.r4.u64 | 12836;
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x824e4120
	ctx.lr = 0x82547FDC;
	sub_824E4120(ctx, base);
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r3,6916(r27)
	PPC_STORE_U32(ctx.r27.u32 + 6916, ctx.r3.u32);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ld r26,176(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// std r26,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r26.u64);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,6852(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6852);
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82331120
	ctx.lr = 0x82548030;
	sub_82331120(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r3,r11,-21036
	ctx.r3.s64 = ctx.r11.s64 + -21036;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f26,160(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f29,164(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f29,168(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f30,144(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82548060;
	sub_82816528(ctx, base);
	// lwz r26,184(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lis r4,-10108
	ctx.r4.s64 = -662437888;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// li r5,136
	ctx.r5.s64 = 136;
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// ori r4,r4,37720
	ctx.r4.u64 = ctx.r4.u64 | 37720;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// ld r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824e4120
	ctx.lr = 0x825480AC;
	sub_824E4120(ctx, base);
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r4,6852(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6852);
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// stw r3,6920(r27)
	PPC_STORE_U32(ctx.r27.u32 + 6920, ctx.r3.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82331120
	ctx.lr = 0x82548100;
	sub_82331120(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stfs f25,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f25,180(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r3,r10,-21020
	ctx.r3.s64 = ctx.r10.s64 + -21020;
	// stfs f25,184(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f27,160(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f27,164(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f27,168(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r26,8(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// bl 0x82816528
	ctx.lr = 0x8254813C;
	sub_82816528(ctx, base);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// lis r4,-9389
	ctx.r4.s64 = -615317504;
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r5,136
	ctx.r5.s64 = 136;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,55012
	ctx.r4.u64 = ctx.r4.u64 | 55012;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824e4120
	ctx.lr = 0x82548184;
	sub_824E4120(ctx, base);
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r3,6924(r27)
	PPC_STORE_U32(ctx.r27.u32 + 6924, ctx.r3.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r9,0
	ctx.r9.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,6856(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6856);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82331120
	ctx.lr = 0x825481DC;
	sub_82331120(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stfs f24,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stfs f24,180(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f24,184(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r3,r9,-21004
	ctx.r3.s64 = ctx.r9.s64 + -21004;
	// lfs f0,18516(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18516);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,8(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// bl 0x82816528
	ctx.lr = 0x82548220;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lis r4,-18461
	ctx.r4.s64 = -1209860096;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,136
	ctx.r5.s64 = 136;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// ori r4,r4,12382
	ctx.r4.u64 = ctx.r4.u64 | 12382;
	// rldicr r8,r9,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// bl 0x824e4120
	ctx.lr = 0x82548268;
	sub_824E4120(ctx, base);
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,6860(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6860);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r3,6928(r27)
	PPC_STORE_U32(ctx.r27.u32 + 6928, ctx.r3.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82331120
	ctx.lr = 0x825482C0;
	sub_82331120(ctx, base);
	// stfs f26,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stfs f29,168(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lis r10,-6377
	ctx.r10.s64 = -417923072;
	// stfs f29,164(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f30,176(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// ori r4,r10,1184
	ctx.r4.u64 = ctx.r10.u64 | 1184;
	// stfs f30,180(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ld r7,176(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// stfs f30,184(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,136
	ctx.r5.s64 = 136;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// ld r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824e4120
	ctx.lr = 0x82548328;
	sub_824E4120(ctx, base);
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// ld r26,176(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// stw r3,6932(r27)
	PPC_STORE_U32(ctx.r27.u32 + 6932, ctx.r3.u32);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// std r26,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r26.u64);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82331120
	ctx.lr = 0x8254837C;
	sub_82331120(ctx, base);
	// stfs f29,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lis r11,2905
	ctx.r11.s64 = 190382080;
	// stfs f26,176(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// ori r4,r11,44184
	ctx.r4.u64 = ctx.r11.u64 | 44184;
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stfs f29,184(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,136
	ctx.r5.s64 = 136;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// ld r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// std r30,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r30.u64);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x824e4120
	ctx.lr = 0x825483E0;
	sub_824E4120(ctx, base);
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r3,6936(r27)
	PPC_STORE_U32(ctx.r27.u32 + 6936, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82331120
	ctx.lr = 0x82548434;
	sub_82331120(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82a61780
	ctx.lr = 0x82548440;
	__restfpr_23(ctx, base);
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82548448"))) PPC_WEAK_FUNC(sub_82548448);
PPC_FUNC_IMPL(__imp__sub_82548448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82548450;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x825484ec
	if (ctx.cr6.eq) goto loc_825484EC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825484ec
	if (ctx.cr6.eq) goto loc_825484EC;
	// lwz r11,2112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825484ec
	if (!ctx.cr6.gt) goto loc_825484EC;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825484ec
	if (!ctx.cr0.eq) goto loc_825484EC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8254849c
	if (ctx.cr6.eq) goto loc_8254849C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,6916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6916);
	// bl 0x8281d650
	ctx.lr = 0x8254849C;
	sub_8281D650(ctx, base);
loc_8254849C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x825484b0
	if (ctx.cr6.eq) goto loc_825484B0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,6920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6920);
	// bl 0x8281d650
	ctx.lr = 0x825484B0;
	sub_8281D650(ctx, base);
loc_825484B0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82548544
	if (ctx.cr6.eq) goto loc_82548544;
	// lwz r11,6804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825484d0
	if (ctx.cr6.eq) goto loc_825484D0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,6924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6924);
	// bl 0x8281d650
	ctx.lr = 0x825484D0;
	sub_8281D650(ctx, base);
loc_825484D0:
	// lwz r11,6808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6808);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82548544
	if (ctx.cr6.eq) goto loc_82548544;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,6928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6928);
	// bl 0x8281d650
	ctx.lr = 0x825484E8;
	sub_8281D650(ctx, base);
	// b 0x82548544
	goto loc_82548544;
loc_825484EC:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82548504
	if (ctx.cr6.eq) goto loc_82548504;
	// lwz r11,6916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6916);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_82548504:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8254851c
	if (ctx.cr6.eq) goto loc_8254851C;
	// lwz r11,6920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6920);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_8254851C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82548544
	if (ctx.cr6.eq) goto loc_82548544;
	// lwz r11,6924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6924);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,6928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6928);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_82548544:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82548550"))) PPC_WEAK_FUNC(sub_82548550);
PPC_FUNC_IMPL(__imp__sub_82548550) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,6812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82548618
	if (!ctx.cr6.eq) goto loc_82548618;
	// stw r4,6804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6804, ctx.r4.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82548620
	if (ctx.cr6.eq) goto loc_82548620;
	// lwz r11,2112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82548654
	if (!ctx.cr6.gt) goto loc_82548654;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82548654
	if (!ctx.cr0.eq) goto loc_82548654;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x825485A4;
	sub_8233A258(ctx, base);
	// lis r4,170
	ctx.r4.s64 = 11141120;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,8537
	ctx.r4.u64 = ctx.r4.u64 | 8537;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x825485B8;
	sub_829C3740(ctx, base);
	// lwz r9,5356(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5356);
	// lis r11,4
	ctx.r11.s64 = 262144;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,1535
	ctx.r11.u64 = ctx.r11.u64 | 1535;
	// stw r11,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, ctx.r11.u32);
	// lwz r11,5356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5356);
	// addi r3,r11,532
	ctx.r3.s64 = ctx.r11.s64 + 532;
	// lwz r9,552(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 548, ctx.r10.u32);
	// beq cr6,0x825485f4
	if (ctx.cr6.eq) goto loc_825485F4;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82332c38
	ctx.lr = 0x825485F4;
	sub_82332C38(ctx, base);
loc_825485F4:
	// li r4,16
	ctx.r4.s64 = 16;
	// lfs f1,5548(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5548);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,5356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5356);
	// bl 0x82331d08
	ctx.lr = 0x82548604;
	sub_82331D08(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,6924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6924);
	// bl 0x8281d650
	ctx.lr = 0x82548610;
	sub_8281D650(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8254864c
	goto loc_8254864C;
loc_82548618:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,6804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6804, ctx.r10.u32);
loc_82548620:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,5356(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5356);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82548638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6924);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_8254864C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82547368
	ctx.lr = 0x82548654;
	sub_82547368(ctx, base);
loc_82548654:
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

__attribute__((alias("__imp__sub_82548668"))) PPC_WEAK_FUNC(sub_82548668);
PPC_FUNC_IMPL(__imp__sub_82548668) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,6816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82548750
	if (!ctx.cr6.eq) goto loc_82548750;
	// stw r4,6808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6808, ctx.r4.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82548730
	if (ctx.cr6.eq) goto loc_82548730;
	// lwz r11,2112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8254878c
	if (!ctx.cr6.gt) goto loc_8254878C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254878c
	if (!ctx.cr0.eq) goto loc_8254878C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x825486BC;
	sub_8233A258(ctx, base);
	// lis r4,15321
	ctx.r4.s64 = 1004077056;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,43930
	ctx.r4.u64 = ctx.r4.u64 | 43930;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x825486D0;
	sub_829C3740(ctx, base);
	// lwz r9,5360(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5360);
	// lis r11,4
	ctx.r11.s64 = 262144;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,1535
	ctx.r11.u64 = ctx.r11.u64 | 1535;
	// stw r11,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, ctx.r11.u32);
	// lwz r11,5360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5360);
	// addi r3,r11,532
	ctx.r3.s64 = ctx.r11.s64 + 532;
	// lwz r9,552(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 548, ctx.r10.u32);
	// beq cr6,0x8254870c
	if (ctx.cr6.eq) goto loc_8254870C;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82332c38
	ctx.lr = 0x8254870C;
	sub_82332C38(ctx, base);
loc_8254870C:
	// li r4,16
	ctx.r4.s64 = 16;
	// lfs f1,5548(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5548);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,5360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5360);
	// bl 0x82331d08
	ctx.lr = 0x8254871C;
	sub_82331D08(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,6928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6928);
	// bl 0x8281d650
	ctx.lr = 0x82548728;
	sub_8281D650(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82548784
	goto loc_82548784;
loc_82548730:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,5360(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5360);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82548748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6928);
	// b 0x82548774
	goto loc_82548774;
loc_82548750:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,5360(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5360);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,6808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6808, ctx.r10.u32);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82548770;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6924);
loc_82548774:
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_82548784:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82547460
	ctx.lr = 0x8254878C;
	sub_82547460(ctx, base);
loc_8254878C:
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

__attribute__((alias("__imp__sub_825487A0"))) PPC_WEAK_FUNC(sub_825487A0);
PPC_FUNC_IMPL(__imp__sub_825487A0) {
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
	// lwz r11,6812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82548820
	if (!ctx.cr6.eq) goto loc_82548820;
	// lwz r3,7036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7036);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82548820
	if (ctx.cr6.eq) goto loc_82548820;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82978d98
	ctx.lr = 0x825487D8;
	sub_82978D98(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,15834
	ctx.r30.s64 = ctx.r11.s64 + 15834;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8233a258
	ctx.lr = 0x825487EC;
	sub_8233A258(ctx, base);
	// lis r4,1818
	ctx.r4.s64 = 119144448;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,21027
	ctx.r4.u64 = ctx.r4.u64 | 21027;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x82548800;
	sub_829C3740(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233a258
	ctx.lr = 0x8254880C;
	sub_8233A258(ctx, base);
	// lis r4,12840
	ctx.r4.s64 = 841482240;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,60900
	ctx.r4.u64 = ctx.r4.u64 | 60900;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x82548820;
	sub_829C3740(ctx, base);
loc_82548820:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,6812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6812, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82548840"))) PPC_WEAK_FUNC(sub_82548840);
PPC_FUNC_IMPL(__imp__sub_82548840) {
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
	// lwz r11,6816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825488c0
	if (!ctx.cr6.eq) goto loc_825488C0;
	// lwz r3,7040(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7040);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825488c0
	if (ctx.cr6.eq) goto loc_825488C0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82978d98
	ctx.lr = 0x82548878;
	sub_82978D98(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,15834
	ctx.r30.s64 = ctx.r11.s64 + 15834;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8233a258
	ctx.lr = 0x8254888C;
	sub_8233A258(ctx, base);
	// lis r4,1818
	ctx.r4.s64 = 119144448;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,21027
	ctx.r4.u64 = ctx.r4.u64 | 21027;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x825488A0;
	sub_829C3740(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233a258
	ctx.lr = 0x825488AC;
	sub_8233A258(ctx, base);
	// lis r4,8646
	ctx.r4.s64 = 566624256;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,56108
	ctx.r4.u64 = ctx.r4.u64 | 56108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x825488C0;
	sub_829C3740(ctx, base);
loc_825488C0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,6816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6816, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_825488E0"))) PPC_WEAK_FUNC(sub_825488E0);
PPC_FUNC_IMPL(__imp__sub_825488E0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,6932(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6932);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,6792(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6792);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r10,2112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8281d650
	sub_8281D650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254891C"))) PPC_WEAK_FUNC(sub_8254891C);
PPC_FUNC_IMPL(__imp__sub_8254891C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82548920"))) PPC_WEAK_FUNC(sub_82548920);
PPC_FUNC_IMPL(__imp__sub_82548920) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6932(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6932);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82548940"))) PPC_WEAK_FUNC(sub_82548940);
PPC_FUNC_IMPL(__imp__sub_82548940) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,6936(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6936);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,6792(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6792);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r10,2112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8281d650
	sub_8281D650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254897C"))) PPC_WEAK_FUNC(sub_8254897C);
PPC_FUNC_IMPL(__imp__sub_8254897C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82548980"))) PPC_WEAK_FUNC(sub_82548980);
PPC_FUNC_IMPL(__imp__sub_82548980) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6936(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6936);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825489A0"))) PPC_WEAK_FUNC(sub_825489A0);
PPC_FUNC_IMPL(__imp__sub_825489A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6916(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6916);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,2112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,6916(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6916);
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 460, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825489D8"))) PPC_WEAK_FUNC(sub_825489D8);
PPC_FUNC_IMPL(__imp__sub_825489D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6920(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,2112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,6920(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6920);
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 460, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82548A10"))) PPC_WEAK_FUNC(sub_82548A10);
PPC_FUNC_IMPL(__imp__sub_82548A10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6916(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6916);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 460, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82548A30"))) PPC_WEAK_FUNC(sub_82548A30);
PPC_FUNC_IMPL(__imp__sub_82548A30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6920(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 460, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82548A50"))) PPC_WEAK_FUNC(sub_82548A50);
PPC_FUNC_IMPL(__imp__sub_82548A50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lbz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 16);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lbz r11,17(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 17);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lbz r11,18(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 18);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82548A80"))) PPC_WEAK_FUNC(sub_82548A80);
PPC_FUNC_IMPL(__imp__sub_82548A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82548ae0
	if (ctx.cr6.eq) goto loc_82548AE0;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82548ae0
	if (ctx.cr6.eq) goto loc_82548AE0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82548AC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82548ae0
	if (ctx.cr0.eq) goto loc_82548AE0;
	// bl 0x82548af8
	ctx.lr = 0x82548ACC;
	sub_82548AF8(ctx, base);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82548448
	ctx.lr = 0x82548AE0;
	sub_82548448(ctx, base);
loc_82548AE0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82548AF8"))) PPC_WEAK_FUNC(sub_82548AF8);
PPC_FUNC_IMPL(__imp__sub_82548AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823b7038
	ctx.lr = 0x82548B10;
	sub_823B7038(ctx, base);
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
	ctx.lr = 0x82548B28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82548b38
	if (!ctx.cr0.eq) goto loc_82548B38;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82548B38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82548B50"))) PPC_WEAK_FUNC(sub_82548B50);
PPC_FUNC_IMPL(__imp__sub_82548B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-10832
	ctx.r3.s64 = ctx.r11.s64 + -10832;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82548B60"))) PPC_WEAK_FUNC(sub_82548B60);
PPC_FUNC_IMPL(__imp__sub_82548B60) {
	PPC_FUNC_PROLOGUE();
	// b 0x823b7c50
	sub_823B7C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82548B68"))) PPC_WEAK_FUNC(sub_82548B68);
PPC_FUNC_IMPL(__imp__sub_82548B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,2080
	ctx.r3.s64 = 2080;
	// bl 0x82833108
	ctx.lr = 0x82548B84;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82548b9c
	if (ctx.cr0.eq) goto loc_82548B9C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// bl 0x82548d28
	ctx.lr = 0x82548B98;
	sub_82548D28(ctx, base);
	// b 0x82548ba0
	goto loc_82548BA0;
loc_82548B9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82548BA0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82548bb4
	if (ctx.cr6.eq) goto loc_82548BB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82548BB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82548BC8"))) PPC_WEAK_FUNC(sub_82548BC8);
PPC_FUNC_IMPL(__imp__sub_82548BC8) {
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
	// beq cr6,0x82548bf8
	if (ctx.cr6.eq) goto loc_82548BF8;
	// bl 0x823b7c50
	ctx.lr = 0x82548BF0;
	sub_823B7C50(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82548c5c
	if (ctx.cr6.eq) goto loc_82548C5C;
loc_82548BF8:
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x82346e08
	ctx.lr = 0x82548C10;
	sub_82346E08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82548c5c
	if (!ctx.cr0.eq) goto loc_82548C5C;
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x82347ab0
	ctx.lr = 0x82548C30;
	sub_82347AB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82548c5c
	if (!ctx.cr0.eq) goto loc_82548C5C;
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x823510a0
	ctx.lr = 0x82548C50;
	sub_823510A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x82548c60
	if (ctx.cr0.eq) goto loc_82548C60;
loc_82548C5C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82548C60:
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

__attribute__((alias("__imp__sub_82548C78"))) PPC_WEAK_FUNC(sub_82548C78);
PPC_FUNC_IMPL(__imp__sub_82548C78) {
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
	// bl 0x823b7c50
	ctx.lr = 0x82548C98;
	sub_823B7C50(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82548ca8
	if (!ctx.cr6.eq) goto loc_82548CA8;
	// addi r3,r31,-64
	ctx.r3.s64 = ctx.r31.s64 + -64;
	// b 0x82548d00
	goto loc_82548D00;
loc_82548CA8:
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x82346ed0
	ctx.lr = 0x82548CC0;
	sub_82346ED0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82548d00
	if (!ctx.cr0.eq) goto loc_82548D00;
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x82347b88
	ctx.lr = 0x82548CE0;
	sub_82347B88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82548d00
	if (!ctx.cr0.eq) goto loc_82548D00;
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x82351168
	ctx.lr = 0x82548D00;
	sub_82351168(ctx, base);
loc_82548D00:
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

__attribute__((alias("__imp__sub_82548D18"))) PPC_WEAK_FUNC(sub_82548D18);
PPC_FUNC_IMPL(__imp__sub_82548D18) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82548D28"))) PPC_WEAK_FUNC(sub_82548D28);
PPC_FUNC_IMPL(__imp__sub_82548D28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82548D30;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-19360
	ctx.r11.s64 = ctx.r11.s64 + -19360;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r10,-19340
	ctx.r10.s64 = ctx.r10.s64 + -19340;
	// addi r9,r9,15864
	ctx.r9.s64 = ctx.r9.s64 + 15864;
	// addi r11,r8,-16672
	ctx.r11.s64 = ctx.r8.s64 + -16672;
	// stw r10,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r10.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r9,2052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2052, ctx.r9.u32);
	// addi r29,r31,2032
	ctx.r29.s64 = ctx.r31.s64 + 2032;
	// stw r11,2064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2064, ctx.r11.u32);
	// addi r27,r31,2064
	ctx.r27.s64 = ctx.r31.s64 + 2064;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82548d88
	if (!ctx.cr6.eq) goto loc_82548D88;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82548d94
	goto loc_82548D94;
loc_82548D88:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82548D94:
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x823ff1a0
	ctx.lr = 0x82548D9C;
	sub_823FF1A0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82548dac
	if (!ctx.cr6.eq) goto loc_82548DAC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82548db8
	goto loc_82548DB8;
loc_82548DAC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82548DB8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82346f30
	ctx.lr = 0x82548DC4;
	sub_82346F30(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82548dd4
	if (!ctx.cr6.eq) goto loc_82548DD4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82548de0
	goto loc_82548DE0;
loc_82548DD4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82548DE0:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,2048
	ctx.r3.s64 = ctx.r31.s64 + 2048;
	// bl 0x82347be8
	ctx.lr = 0x82548DEC;
	sub_82347BE8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82548dfc
	if (!ctx.cr6.eq) goto loc_82548DFC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82548e08
	goto loc_82548E08;
loc_82548DFC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82548E08:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823511c8
	ctx.lr = 0x82548E14;
	sub_823511C8(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-20984
	ctx.r11.s64 = ctx.r11.s64 + -20984;
	// addi r10,r10,-19412
	ctx.r10.s64 = ctx.r10.s64 + -19412;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r9,r9,11368
	ctx.r9.s64 = ctx.r9.s64 + 11368;
	// addi r8,r8,7928
	ctx.r8.s64 = ctx.r8.s64 + 7928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r11,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r11.u32);
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
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f0,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82548EC8"))) PPC_WEAK_FUNC(sub_82548EC8);
PPC_FUNC_IMPL(__imp__sub_82548EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82548ED0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// addi r11,r11,-19360
	ctx.r11.s64 = ctx.r11.s64 + -19360;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-19340
	ctx.r10.s64 = ctx.r10.s64 + -19340;
	// addi r9,r9,15864
	ctx.r9.s64 = ctx.r9.s64 + 15864;
	// addi r11,r8,-16672
	ctx.r11.s64 = ctx.r8.s64 + -16672;
	// stw r10,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r10.u32);
	// stw r9,2052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2052, ctx.r9.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stw r11,2064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2064, ctx.r11.u32);
	// addi r30,r31,2032
	ctx.r30.s64 = ctx.r31.s64 + 2032;
	// addi r29,r31,2064
	ctx.r29.s64 = ctx.r31.s64 + 2064;
	// bl 0x824cbb48
	ctx.lr = 0x82548F18;
	sub_824CBB48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ba650
	ctx.lr = 0x82548F24;
	sub_825BA650(ctx, base);
	// addi r3,r31,2048
	ctx.r3.s64 = ctx.r31.s64 + 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825b8a40
	ctx.lr = 0x82548F30;
	sub_825B8A40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82501770
	ctx.lr = 0x82548F3C;
	sub_82501770(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r7,r11,-20984
	ctx.r7.s64 = ctx.r11.s64 + -20984;
	// ori r11,r10,65534
	ctx.r11.u64 = ctx.r10.u64 | 65534;
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r6,r6,-19412
	ctx.r6.s64 = ctx.r6.s64 + -19412;
	// addi r4,r11,11368
	ctx.r4.s64 = ctx.r11.s64 + 11368;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r5,7928
	ctx.r5.s64 = ctx.r5.s64 + 7928;
	// lfs f0,-28788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28788);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
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
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r4,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r4.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stwx r5,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// stw r11,-4(r7)
	PPC_STORE_U32(ctx.r7.u32 + -4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,928(r11)
	PPC_STORE_U32(ctx.r11.u32 + 928, ctx.r10.u32);
	// stw r9,932(r11)
	PPC_STORE_U32(ctx.r11.u32 + 932, ctx.r9.u32);
	// stw r8,936(r11)
	PPC_STORE_U32(ctx.r11.u32 + 936, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f0,1656(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1656, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82548FF8"))) PPC_WEAK_FUNC(sub_82548FF8);
PPC_FUNC_IMPL(__imp__sub_82548FF8) {
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
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x825ba700
	ctx.lr = 0x82549024;
	sub_825BA700(ctx, base);
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x825b8b00
	ctx.lr = 0x82549038;
	sub_825B8B00(ctx, base);
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x82501810
	ctx.lr = 0x8254904C;
	sub_82501810(ctx, base);
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addic. r11,r11,236
	ctx.xer.ca = ctx.r11.u32 > 4294967059;
	ctx.r11.s64 = ctx.r11.s64 + 236;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82549078
	if (ctx.cr0.eq) goto loc_82549078;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82549078
	if (ctx.cr6.eq) goto loc_82549078;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8254907c
	goto loc_8254907C;
loc_82549078:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8254907C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-10736
	ctx.r3.s64 = ctx.r11.s64 + -10736;
	// bl 0x82816528
	ctx.lr = 0x82549088;
	sub_82816528(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-17724
	ctx.r3.s64 = ctx.r11.s64 + -17724;
	// bl 0x82816528
	ctx.lr = 0x82549098;
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
	ctx.lr = 0x825490AC;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-10692
	ctx.r3.s64 = ctx.r11.s64 + -10692;
	// bl 0x82816528
	ctx.lr = 0x825490B8;
	sub_82816528(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-17448
	ctx.r3.s64 = ctx.r11.s64 + -17448;
	// bl 0x82816528
	ctx.lr = 0x825490C8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x825490D8;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-10652
	ctx.r3.s64 = ctx.r11.s64 + -10652;
	// bl 0x82816528
	ctx.lr = 0x825490E4;
	sub_82816528(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-19664
	ctx.r3.s64 = ctx.r11.s64 + -19664;
	// bl 0x82816528
	ctx.lr = 0x825490F4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x82549104;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-10772
	ctx.r3.s64 = ctx.r11.s64 + -10772;
	// bl 0x82816528
	ctx.lr = 0x82549110;
	sub_82816528(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-20992
	ctx.r3.s64 = ctx.r11.s64 + -20992;
	// bl 0x82816528
	ctx.lr = 0x82549120;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x82549130;
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

__attribute__((alias("__imp__sub_82549148"))) PPC_WEAK_FUNC(sub_82549148);
PPC_FUNC_IMPL(__imp__sub_82549148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82549150;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,-64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -64);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,-64
	ctx.r3.s64 = ctx.r11.s64 + -64;
	// bl 0x829c6360
	ctx.lr = 0x82549168;
	sub_829C6360(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825491dc
	if (ctx.cr0.eq) goto loc_825491DC;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r4,r11,808
	ctx.r4.s64 = ctx.r11.s64 + 808;
	// bl 0x82873b58
	ctx.lr = 0x82549188;
	sub_82873B58(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x825491d0
	if (!ctx.cr6.gt) goto loc_825491D0;
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8254919C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825491B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825491cc
	if (ctx.cr0.eq) goto loc_825491CC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8254919c
	if (ctx.cr6.lt) goto loc_8254919C;
	// b 0x825491d0
	goto loc_825491D0;
loc_825491CC:
	// li r28,0
	ctx.r28.s64 = 0;
loc_825491D0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239d768
	ctx.lr = 0x825491D8;
	sub_8239D768(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_825491DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825491E8"))) PPC_WEAK_FUNC(sub_825491E8);
PPC_FUNC_IMPL(__imp__sub_825491E8) {
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
	// addi r30,r31,-64
	ctx.r30.s64 = ctx.r31.s64 + -64;
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-64
	ctx.r3.s64 = ctx.r11.s64 + -64;
	// bl 0x824cf588
	ctx.lr = 0x82549220;
	sub_824CF588(ctx, base);
	// lfs f0,-36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,-36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -36, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_82549248"))) PPC_WEAK_FUNC(sub_82549248);
PPC_FUNC_IMPL(__imp__sub_82549248) {
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
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x825ba7d0
	ctx.lr = 0x82549270;
	sub_825BA7D0(ctx, base);
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x825b8c00
	ctx.lr = 0x82549284;
	sub_825B8C00(ctx, base);
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-64
	ctx.r3.s64 = ctx.r11.s64 + -64;
	// bl 0x824cc238
	ctx.lr = 0x82549298;
	sub_824CC238(ctx, base);
	// lis r11,-27852
	ctx.r11.s64 = -1825308672;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r11,40719
	ctx.r10.u64 = ctx.r11.u64 | 40719;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1868
	ctx.r3.s64 = ctx.r11.s64 + 1868;
	// lwz r11,1884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1884);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825492e4
	if (!ctx.cr6.gt) goto loc_825492E4;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_825492C8:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825492ec
	if (ctx.cr6.eq) goto loc_825492EC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825492c8
	if (ctx.cr6.lt) goto loc_825492C8;
loc_825492E4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825492EC;
	sub_82410060(ctx, base);
loc_825492EC:
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

__attribute__((alias("__imp__sub_82549300"))) PPC_WEAK_FUNC(sub_82549300);
PPC_FUNC_IMPL(__imp__sub_82549300) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,-60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -60);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82549418
	if (ctx.cr0.eq) goto loc_82549418;
	// lwz r10,2112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82549418
	if (!ctx.cr6.gt) goto loc_82549418;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82549418
	if (!ctx.cr0.eq) goto loc_82549418;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82549418
	if (ctx.cr6.eq) goto loc_82549418;
	// lwz r10,2112(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82549418
	if (!ctx.cr6.gt) goto loc_82549418;
	// lwz r10,84(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82549418
	if (!ctx.cr0.eq) goto loc_82549418;
	// lwz r11,6924(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6924);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82549418
	if (ctx.cr0.eq) goto loc_82549418;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82549380;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82549418
	if (ctx.cr0.eq) goto loc_82549418;
	// lwz r10,628(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// lwz r8,620(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,624(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	// lfs f13,-21844(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -21844);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x825493c0
	if (ctx.cr6.lt) goto loc_825493C0;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82549404
	goto loc_82549404;
loc_825493C0:
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lfs f13,-21840(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -21840);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x825493d8
	if (ctx.cr6.lt) goto loc_825493D8;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82549404
	goto loc_82549404;
loc_825493D8:
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lfs f13,-21836(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -21836);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x825493f0
	if (ctx.cr6.lt) goto loc_825493F0;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82549404
	goto loc_82549404;
loc_825493F0:
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lfs f13,-21832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -21832);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82549404
	if (ctx.cr6.lt) goto loc_82549404;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82549404:
	// lwz r10,-60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -60);
	// lwz r10,6808(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6808);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82549418
	if (ctx.cr6.eq) goto loc_82549418;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82549418:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82549438"))) PPC_WEAK_FUNC(sub_82549438);
PPC_FUNC_IMPL(__imp__sub_82549438) {
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
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-64
	ctx.r3.s64 = ctx.r11.s64 + -64;
	// bl 0x824ce338
	ctx.lr = 0x82549468;
	sub_824CE338(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8254a5a8
	ctx.lr = 0x82549470;
	sub_8254A5A8(ctx, base);
	// stw r3,-60(r31)
	PPC_STORE_U32(ctx.r31.u32 + -60, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82549490"))) PPC_WEAK_FUNC(sub_82549490);
PPC_FUNC_IMPL(__imp__sub_82549490) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-64
	ctx.r3.s64 = ctx.r3.s64 + -64;
	// bl 0x825494c0
	ctx.lr = 0x825494A8;
	sub_825494C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825494C0"))) PPC_WEAK_FUNC(sub_825494C0);
PPC_FUNC_IMPL(__imp__sub_825494C0) {
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
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r9,r11,13868
	ctx.r9.s64 = ctx.r11.s64 + 13868;
	// lwz r8,13868(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13868);
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82549504;
	sub_829B9720(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x82549508;
	sub_82416348(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8254951c
	if (ctx.cr0.eq) goto loc_8254951C;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x82549520
	goto loc_82549520;
loc_8254951C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82549520:
	// stw r10,7052(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7052, ctx.r10.u32);
	// lwz r10,960(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 960);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82549534
	if (!ctx.cr6.eq) goto loc_82549534;
	// stw r3,7056(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7056, ctx.r3.u32);
loc_82549534:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82549568
	if (ctx.cr6.eq) goto loc_82549568;
	// lwz r11,620(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lfs f0,24008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24008);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,624(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,628(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_82549568:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82549580"))) PPC_WEAK_FUNC(sub_82549580);
PPC_FUNC_IMPL(__imp__sub_82549580) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,7048(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7048);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82549688
	if (!ctx.cr6.eq) goto loc_82549688;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f0,24008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8254d9f0
	ctx.lr = 0x825495DC;
	sub_8254D9F0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82549670
	if (ctx.cr0.eq) goto loc_82549670;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,1416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1416);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82549614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// bl 0x825494c0
	ctx.lr = 0x82549620;
	sub_825494C0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6912, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,7064(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7064);
	// bl 0x824ffc38
	ctx.lr = 0x82549638;
	sub_824FFC38(ctx, base);
	// bl 0x82a4cd78
	ctx.lr = 0x8254963C;
	sub_82A4CD78(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f31,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,17104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-25080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25080);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// b 0x82549688
	goto loc_82549688;
loc_82549670:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,7040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7040);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82549688
	if (!ctx.cr6.eq) goto loc_82549688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825496a8
	ctx.lr = 0x82549688;
	sub_825496A8(ctx, base);
loc_82549688:
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

__attribute__((alias("__imp__sub_825496A8"))) PPC_WEAK_FUNC(sub_825496A8);
PPC_FUNC_IMPL(__imp__sub_825496A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825496B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r29,6992
	ctx.r30.s64 = ctx.r29.s64 + 6992;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,6992(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6992);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825496D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r29,7024
	ctx.r3.s64 = ctx.r29.s64 + 7024;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825496fc
	if (ctx.cr6.eq) goto loc_825496FC;
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x825496FC;
	sub_82332C38(ctx, base);
loc_825496FC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82549710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,572
	ctx.r11.s64 = ctx.r11.s64 + 572;
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,1420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1420);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82549748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,10548(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,840(r11)
	PPC_STORE_U32(ctx.r11.u32 + 840, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,808(r11)
	PPC_STORE_U32(ctx.r11.u32 + 808, ctx.r29.u32);
	// bl 0x82439c68
	ctx.lr = 0x82549768;
	sub_82439C68(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825497cc
	if (!ctx.cr6.gt) goto loc_825497CC;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_8254977C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825497c0
	if (ctx.cr6.eq) goto loc_825497C0;
	// lwz r10,2112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x825497c0
	if (!ctx.cr6.gt) goto loc_825497C0;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825497c0
	if (!ctx.cr0.eq) goto loc_825497C0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,8452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8452, ctx.r10.u32);
	// beq cr6,0x825497bc
	if (ctx.cr6.eq) goto loc_825497BC;
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// stw r10,8448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8448, ctx.r10.u32);
	// b 0x825497c0
	goto loc_825497C0;
loc_825497BC:
	// stw r29,8448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8448, ctx.r29.u32);
loc_825497C0:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x8254977c
	if (!ctx.cr0.eq) goto loc_8254977C;
loc_825497CC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239d768
	ctx.lr = 0x825497D4;
	sub_8239D768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825497E0"))) PPC_WEAK_FUNC(sub_825497E0);
PPC_FUNC_IMPL(__imp__sub_825497E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x825497E8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,-60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -60);
	// lwz r11,6924(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6924);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82549a14
	if (!ctx.cr0.eq) goto loc_82549A14;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x825498c8
	if (ctx.cr6.eq) goto loc_825498C8;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,10548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82549820;
	sub_829B9720(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825498c8
	if (ctx.cr0.eq) goto loc_825498C8;
	// bl 0x82394ac8
	ctx.lr = 0x8254982C;
	sub_82394AC8(ctx, base);
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
	ctx.lr = 0x82549844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82549850
	if (!ctx.cr0.eq) goto loc_82549850;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82549850:
	// lwz r28,800(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x825498c8
	if (ctx.cr6.eq) goto loc_825498C8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,10548(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82439c68
	ctx.lr = 0x8254986C;
	sub_82439C68(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x825498a4
	if (!ctx.cr6.gt) goto loc_825498A4;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82549880:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825498a0
	if (ctx.cr6.eq) goto loc_825498A0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82549880
	if (ctx.cr6.lt) goto loc_82549880;
	// b 0x825498a4
	goto loc_825498A4;
loc_825498A0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_825498A4:
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x82332868
	ctx.lr = 0x825498AC;
	sub_82332868(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825498b8
	if (ctx.cr0.eq) goto loc_825498B8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_825498B8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239d768
	ctx.lr = 0x825498C0;
	sub_8239D768(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82549a14
	if (!ctx.cr6.eq) goto loc_82549A14;
loc_825498C8:
	// lwz r3,-60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -60);
	// lwz r11,6768(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6768);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82549a14
	if (!ctx.cr6.eq) goto loc_82549A14;
	// lwz r11,6924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6924);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825498f0
	if (ctx.cr0.eq) goto loc_825498F0;
	// addi r3,r29,-64
	ctx.r3.s64 = ctx.r29.s64 + -64;
	// bl 0x82549580
	ctx.lr = 0x825498EC;
	sub_82549580(ctx, base);
	// b 0x82549a14
	goto loc_82549A14;
loc_825498F0:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8254d518
	ctx.lr = 0x8254990C;
	sub_8254D518(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825499b8
	if (ctx.cr0.eq) goto loc_825499B8;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x825499b8
	if (!ctx.cr6.gt) goto loc_825499B8;
	// lwz r11,-60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -60);
	// stw r3,7072(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7072, ctx.r3.u32);
	// lwz r11,-64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -64);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,-64
	ctx.r3.s64 = ctx.r11.s64 + -64;
	// addic. r11,r3,300
	ctx.xer.ca = ctx.r3.u32 > 4294966995;
	ctx.r11.s64 = ctx.r3.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254996c
	if (ctx.cr0.eq) goto loc_8254996C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8254996c
	if (ctx.cr6.eq) goto loc_8254996C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82549970
	goto loc_82549970;
loc_8254996C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82549970:
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8254999c
	if (ctx.cr6.eq) goto loc_8254999C;
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82549a14
	if (!ctx.cr0.eq) goto loc_82549A14;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8254999c
	if (ctx.cr6.eq) goto loc_8254999C;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82549a14
	if (!ctx.cr0.eq) goto loc_82549A14;
loc_8254999C:
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82549a14
	if (!ctx.cr0.eq) goto loc_82549A14;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x824cdaf8
	ctx.lr = 0x825499B4;
	sub_824CDAF8(ctx, base);
	// b 0x82549a14
	goto loc_82549A14;
loc_825499B8:
	// lwz r31,-60(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + -60);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,6988(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6988);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824dea78
	ctx.lr = 0x825499CC;
	sub_824DEA78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82549a14
	if (ctx.cr0.eq) goto loc_82549A14;
	// lwz r11,-64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -64);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,-64
	ctx.r3.s64 = ctx.r11.s64 + -64;
	// lwz r11,-64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// lwz r11,1416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1416);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82549A08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7064(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7064);
	// bl 0x824ffc38
	ctx.lr = 0x82549A14;
	sub_824FFC38(ctx, base);
loc_82549A14:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82549A20"))) PPC_WEAK_FUNC(sub_82549A20);
PPC_FUNC_IMPL(__imp__sub_82549A20) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x824ba060
	ctx.lr = 0x82549A3C;
	sub_824BA060(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82549a8c
	if (ctx.cr0.eq) goto loc_82549A8C;
	// lwz r10,-60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -60);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// addi r9,r9,-25824
	ctx.r9.s64 = ctx.r9.s64 + -25824;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,808(r10)
	PPC_STORE_U32(ctx.r10.u32 + 808, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,-64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// rldicr r7,r11,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f1,30996(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 30996);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r3,r10,-56
	ctx.r3.s64 = ctx.r10.s64 + -56;
	// bl 0x8254a608
	ctx.lr = 0x82549A8C;
	sub_8254A608(ctx, base);
loc_82549A8C:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82549AA8"))) PPC_WEAK_FUNC(sub_82549AA8);
PPC_FUNC_IMPL(__imp__sub_82549AA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,-60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -60);
	// lwz r11,6924(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6924);
	// rlwinm. r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82549aec
	if (ctx.cr0.eq) goto loc_82549AEC;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82549acc
	if (ctx.cr0.eq) goto loc_82549ACC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-40(r3)
	PPC_STORE_U32(ctx.r3.u32 + -40, ctx.r11.u32);
	// b 0x82549aec
	goto loc_82549AEC;
loc_82549ACC:
	// lwz r11,-40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-40(r3)
	PPC_STORE_U32(ctx.r3.u32 + -40, ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82549aec
	if (ctx.cr6.lt) goto loc_82549AEC;
	// lwz r11,6924(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6924);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,6924(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6924, ctx.r11.u32);
loc_82549AEC:
	// lwz r11,-64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -64);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r4,r11,-64
	ctx.r4.s64 = ctx.r11.s64 + -64;
	// lwz r11,1692(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1692);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,1756(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1756);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82549B1C"))) PPC_WEAK_FUNC(sub_82549B1C);
PPC_FUNC_IMPL(__imp__sub_82549B1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82549B20"))) PPC_WEAK_FUNC(sub_82549B20);
PPC_FUNC_IMPL(__imp__sub_82549B20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,808(r11)
	PPC_STORE_U32(ctx.r11.u32 + 808, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82549B30"))) PPC_WEAK_FUNC(sub_82549B30);
PPC_FUNC_IMPL(__imp__sub_82549B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82549B38;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82549c4c
	if (ctx.cr6.eq) goto loc_82549C4C;
	// lwz r10,2112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82549c4c
	if (!ctx.cr6.gt) goto loc_82549C4C;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82549c4c
	if (!ctx.cr0.eq) goto loc_82549C4C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r4,r11,808
	ctx.r4.s64 = ctx.r11.s64 + 808;
	// bl 0x82873b58
	ctx.lr = 0x82549B80;
	sub_82873B58(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82549c44
	if (!ctx.cr6.gt) goto loc_82549C44;
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82549B94:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,1412(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82549c2c
	if (ctx.cr6.eq) goto loc_82549C2C;
	// lwz r11,2112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82549c2c
	if (!ctx.cr6.gt) goto loc_82549C2C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82549c2c
	if (!ctx.cr0.eq) goto loc_82549C2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a0b58
	ctx.lr = 0x82549BC4;
	sub_824A0B58(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82438430
	ctx.lr = 0x82549BCC;
	sub_82438430(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lfs f0,624(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f11,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f11,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1448);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f31,f0
	ctx.f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82549C14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// ble cr6,0x82549c40
	if (!ctx.cr6.gt) goto loc_82549C40;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lfs f0,3116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3116);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82549c40
	if (!ctx.cr6.gt) goto loc_82549C40;
loc_82549C2C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82549b94
	if (ctx.cr6.lt) goto loc_82549B94;
	// b 0x82549c44
	goto loc_82549C44;
loc_82549C40:
	// li r26,1
	ctx.r26.s64 = 1;
loc_82549C44:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239d768
	ctx.lr = 0x82549C4C;
	sub_8239D768(ctx, base);
loc_82549C4C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82549C60"))) PPC_WEAK_FUNC(sub_82549C60);
PPC_FUNC_IMPL(__imp__sub_82549C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82549cbc
	if (!ctx.cr6.gt) goto loc_82549CBC;
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-29416
	ctx.r9.s64 = ctx.r9.s64 + -29416;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// rldicr r7,r11,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// bl 0x8254a608
	ctx.lr = 0x82549CBC;
	sub_8254A608(ctx, base);
loc_82549CBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82549CD0"))) PPC_WEAK_FUNC(sub_82549CD0);
PPC_FUNC_IMPL(__imp__sub_82549CD0) {
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
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825018b0
	ctx.lr = 0x82549CFC;
	sub_825018B0(ctx, base);
	// bl 0x823b7c50
	ctx.lr = 0x82549D00;
	sub_823B7C50(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82549D18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82549D38"))) PPC_WEAK_FUNC(sub_82549D38);
PPC_FUNC_IMPL(__imp__sub_82549D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-27852
	ctx.r11.s64 = -1825308672;
	// ori r11,r11,40719
	ctx.r11.u64 = ctx.r11.u64 | 40719;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,-100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -100);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,-64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// b 0x829e3da8
	sub_829E3DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82549D5C"))) PPC_WEAK_FUNC(sub_82549D5C);
PPC_FUNC_IMPL(__imp__sub_82549D5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82549D60"))) PPC_WEAK_FUNC(sub_82549D60);
PPC_FUNC_IMPL(__imp__sub_82549D60) {
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
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82549e00
	if (ctx.cr6.eq) goto loc_82549E00;
	// lwz r11,2112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82549e00
	if (!ctx.cr6.gt) goto loc_82549E00;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82549e00
	if (!ctx.cr0.eq) goto loc_82549E00;
	// lwz r11,6756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6756);
	// lis r4,-27852
	ctx.r4.s64 = -1825308672;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// ori r4,r4,40719
	ctx.r4.u64 = ctx.r4.u64 | 40719;
	// stw r11,-8(r3)
	PPC_STORE_U32(ctx.r3.u32 + -8, ctx.r11.u32);
	// lwz r11,6756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6756);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,6756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6756, ctx.r11.u32);
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,1380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82549DF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lfs f0,984(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6940(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6940, temp.u32);
loc_82549E00:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82549E18"))) PPC_WEAK_FUNC(sub_82549E18);
PPC_FUNC_IMPL(__imp__sub_82549E18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,2112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r10,-8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,6756(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6756);
	// beq cr6,0x82549e64
	if (ctx.cr6.eq) goto loc_82549E64;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// b 0x82549e68
	goto loc_82549E68;
loc_82549E64:
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_82549E68:
	// stw r10,6756(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6756, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82549E70"))) PPC_WEAK_FUNC(sub_82549E70);
PPC_FUNC_IMPL(__imp__sub_82549E70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// lwz r9,-16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stw r10,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82549E98"))) PPC_WEAK_FUNC(sub_82549E98);
PPC_FUNC_IMPL(__imp__sub_82549E98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x829e3da8
	sub_829E3DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82549EB8"))) PPC_WEAK_FUNC(sub_82549EB8);
PPC_FUNC_IMPL(__imp__sub_82549EB8) {
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
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,-30232
	ctx.r4.s64 = ctx.r11.s64 + -30232;
	// lwz r10,-16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// lwz r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82549EFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825b9d00
	ctx.lr = 0x82549F10;
	sub_825B9D00(ctx, base);
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

__attribute__((alias("__imp__sub_82549F28"))) PPC_WEAK_FUNC(sub_82549F28);
PPC_FUNC_IMPL(__imp__sub_82549F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82549F30;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,7100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7100);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82549f6c
	if (ctx.cr6.eq) goto loc_82549F6C;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x829e3da8
	ctx.lr = 0x82549F68;
	sub_829E3DA8(ctx, base);
	// b 0x8254a098
	goto loc_8254A098;
loc_82549F6C:
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r30,1780(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1780);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r28,1928(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1928);
	// bl 0x823b8e78
	ctx.lr = 0x82549F94;
	sub_823B8E78(ctx, base);
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
	ctx.lr = 0x82549FAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82549fbc
	if (!ctx.cr0.eq) goto loc_82549FBC;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82549FBC:
	// lwz r3,3284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3284);
	// bl 0x8254a710
	ctx.lr = 0x82549FC4;
	sub_8254A710(ctx, base);
	// lwz r11,3288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3288);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8254a710
	ctx.lr = 0x82549FD4;
	sub_8254A710(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82549ff8
	if (!ctx.cr6.eq) goto loc_82549FF8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x8254a014
	goto loc_8254A014;
loc_82549FF8:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8254A014:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824d77f8
	ctx.lr = 0x8254A020;
	sub_824D77F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8254a05c
	if (ctx.cr0.eq) goto loc_8254A05C;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r10,960(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 960);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// stw r11,3280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3280, ctx.r11.u32);
	// bne cr6,0x8254a040
	if (!ctx.cr6.eq) goto loc_8254A040;
	// stw r3,3288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3288, ctx.r3.u32);
loc_8254A040:
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r10,960(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 960);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// stw r11,3280(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3280, ctx.r11.u32);
	// bne cr6,0x8254a084
	if (!ctx.cr6.eq) goto loc_8254A084;
	// stw r3,3288(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3288, ctx.r3.u32);
	// b 0x8254a084
	goto loc_8254A084;
loc_8254A05C:
	// lwz r11,960(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 960);
	// stw r27,3280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3280, ctx.r27.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8254a070
	if (!ctx.cr6.eq) goto loc_8254A070;
	// stw r27,3288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3288, ctx.r27.u32);
loc_8254A070:
	// lwz r11,960(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 960);
	// stw r27,3280(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3280, ctx.r27.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8254a084
	if (!ctx.cr6.eq) goto loc_8254A084;
	// stw r27,3288(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3288, ctx.r27.u32);
loc_8254A084:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x825b93e0
	ctx.lr = 0x8254A098;
	sub_825B93E0(ctx, base);
loc_8254A098:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254A0A0"))) PPC_WEAK_FUNC(sub_8254A0A0);
PPC_FUNC_IMPL(__imp__sub_8254A0A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8254A0A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254A0E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8254a1f4
	if (ctx.cr0.eq) goto loc_8254A1F4;
	// lwz r11,7100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8254a1f4
	if (!ctx.cr6.eq) goto loc_8254A1F4;
	// lwz r11,6924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6924);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254a120
	if (ctx.cr0.eq) goto loc_8254A120;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82549b30
	ctx.lr = 0x8254A118;
	sub_82549B30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8254a1f4
	if (!ctx.cr0.eq) goto loc_8254A1F4;
loc_8254A120:
	// lwz r11,6924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6924);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254a1f8
	if (ctx.cr0.eq) goto loc_8254A1F8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8254a14c
	if (!ctx.cr6.eq) goto loc_8254A14C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8254a164
	goto loc_8254A164;
loc_8254A14C:
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8254A164:
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,1928(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1928);
	// bl 0x824d77f8
	ctx.lr = 0x8254A188;
	sub_824D77F8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8254a1a8
	if (ctx.cr0.eq) goto loc_8254A1A8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254A1A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8254a1ac
	goto loc_8254A1AC;
loc_8254A1A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254A1AC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254a1f8
	if (ctx.cr6.eq) goto loc_8254A1F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f1,16620(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16620);
	ctx.f1.f64 = double(temp.f32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,1340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254A1EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8254a1f8
	if (ctx.cr0.eq) goto loc_8254A1F8;
loc_8254A1F4:
	// li r29,1
	ctx.r29.s64 = 1;
loc_8254A1F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254A208"))) PPC_WEAK_FUNC(sub_8254A208);
PPC_FUNC_IMPL(__imp__sub_8254A208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8254A210;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r29,-84
	ctx.r31.s64 = ctx.r29.s64 + -84;
	// lwz r11,-84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -84);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,-80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -80);
	// lwz r28,4(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,1780(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1780);
	// bl 0x823b8e78
	ctx.lr = 0x8254A24C;
	sub_823B8E78(ctx, base);
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
	ctx.lr = 0x8254A264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8254a270
	if (!ctx.cr0.eq) goto loc_8254A270;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8254A270:
	// lwz r11,2004(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2004);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8254a288
	if (ctx.cr6.eq) goto loc_8254A288;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8254a28c
	if (!ctx.cr6.eq) goto loc_8254A28C;
loc_8254A288:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8254A28C:
	// stw r11,6908(r28)
	PPC_STORE_U32(ctx.r28.u32 + 6908, ctx.r11.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254a0a0
	ctx.lr = 0x8254A29C;
	sub_8254A0A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8254a2c4
	if (ctx.cr0.eq) goto loc_8254A2C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,-84
	ctx.r3.s64 = ctx.r11.s64 + -84;
	// lwz r11,-84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -84);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254A2C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8254A2C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254A2D0"))) PPC_WEAK_FUNC(sub_8254A2D0);
PPC_FUNC_IMPL(__imp__sub_8254A2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8254A2D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r29,-124
	ctx.r31.s64 = ctx.r29.s64 + -124;
	// lwz r11,-124(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -124);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,1780(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1780);
	// bl 0x823b8e78
	ctx.lr = 0x8254A300;
	sub_823B8E78(ctx, base);
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
	ctx.lr = 0x8254A318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8254a324
	if (!ctx.cr0.eq) goto loc_8254A324;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8254A324:
	// lwz r11,2004(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2004);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8254a33c
	if (ctx.cr6.eq) goto loc_8254A33C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8254a340
	if (!ctx.cr6.eq) goto loc_8254A340;
loc_8254A33C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8254A340:
	// stw r11,6908(r28)
	PPC_STORE_U32(ctx.r28.u32 + 6908, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,-124
	ctx.r3.s64 = ctx.r11.s64 + -124;
	// bl 0x825b9960
	ctx.lr = 0x8254A358;
	sub_825B9960(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254A360"))) PPC_WEAK_FUNC(sub_8254A360);
PPC_FUNC_IMPL(__imp__sub_8254A360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8254A368;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254A390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r28,1600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1600, ctx.r28.u32);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,1584(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254a4d0
	if (ctx.cr6.eq) goto loc_8254A4D0;
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r3,1584(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// bl 0x8254a768
	ctx.lr = 0x8254A3DC;
	sub_8254A768(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1664);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254A3F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// lwz r10,3160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,3160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3160, ctx.r9.u32);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// stw r10,3168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3168, ctx.r10.u32);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8254a420
	if (ctx.cr6.eq) goto loc_8254A420;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8254a424
	if (!ctx.cr6.eq) goto loc_8254A424;
loc_8254A420:
	// stw r28,2496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2496, ctx.r28.u32);
loc_8254A424:
	// lwz r10,5352(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8254a43c
	if (ctx.cr6.eq) goto loc_8254A43C;
	// lwz r8,52(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// oris r8,r8,8
	ctx.r8.u64 = ctx.r8.u64 | 524288;
	// stw r8,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r8.u32);
loc_8254A43C:
	// stw r9,7200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7200, ctx.r9.u32);
	// stw r9,7196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7196, ctx.r9.u32);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8254a460
	if (ctx.cr6.eq) goto loc_8254A460;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8254A458;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8254A45C;
	sub_82409C40(ctx, base);
	// b 0x8254a464
	goto loc_8254A464;
loc_8254A460:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8254A464:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254a474
	if (ctx.cr6.eq) goto loc_8254A474;
	// lwz r29,80(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x8254a478
	goto loc_8254A478;
loc_8254A474:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8254A478:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82833108
	ctx.lr = 0x8254A480;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8254a4c0
	if (ctx.cr0.eq) goto loc_8254A4C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,80(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82833180
	ctx.lr = 0x8254A494;
	sub_82833180(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// addi r11,r11,-19280
	ctx.r11.s64 = ctx.r11.s64 + -19280;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// b 0x8254a4c4
	goto loc_8254A4C4;
loc_8254A4C0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8254A4C4:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8254A4D0;
	sub_82833A30(ctx, base);
loc_8254A4D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254A4D8"))) PPC_WEAK_FUNC(sub_8254A4D8);
PPC_FUNC_IMPL(__imp__sub_8254A4D8) {
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
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r3,1584(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// bl 0x8254a768
	ctx.lr = 0x8254A508;
	sub_8254A768(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r30,840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 840, ctx.r30.u32);
	// stw r30,808(r3)
	PPC_STORE_U32(ctx.r3.u32 + 808, ctx.r30.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// stw r10,3160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3160, ctx.r10.u32);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8254a538
	if (ctx.cr6.eq) goto loc_8254A538;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8254a53c
	if (!ctx.cr6.eq) goto loc_8254A53C;
loc_8254A538:
	// stw r30,2496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2496, ctx.r30.u32);
loc_8254A53C:
	// lwz r3,5352(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5352);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254a550
	if (ctx.cr6.eq) goto loc_8254A550;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8281d650
	ctx.lr = 0x8254A550;
	sub_8281D650(ctx, base);
loc_8254A550:
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r31,-4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x823b7c50
	ctx.lr = 0x8254A564;
	sub_823B7C50(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254A57C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r30,1600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1600, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8254A5A8"))) PPC_WEAK_FUNC(sub_8254A5A8);
PPC_FUNC_IMPL(__imp__sub_8254A5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x8254a5ec
	if (ctx.cr6.eq) goto loc_8254A5EC;
	// bl 0x823b7af0
	ctx.lr = 0x8254A5C8;
	sub_823B7AF0(ctx, base);
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
	ctx.lr = 0x8254A5E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8254a5f0
	if (!ctx.cr0.eq) goto loc_8254A5F0;
loc_8254A5EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254A5F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254A608"))) PPC_WEAK_FUNC(sub_8254A608);
PPC_FUNC_IMPL(__imp__sub_8254A608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8254A610;
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
	// std r6,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r6.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,192(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// std r7,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r7.u64);
	// bl 0x829c80b8
	ctx.lr = 0x8254A638;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8254a6e0
	if (!ctx.cr0.eq) goto loc_8254A6E0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x8254a658
	if (!ctx.cr6.eq) goto loc_8254A658;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
loc_8254A658:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823b7c50
	ctx.lr = 0x8254A660;
	sub_823B7C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254A674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x8254A680;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8254a6cc
	if (ctx.cr0.eq) goto loc_8254A6CC;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lwz r8,200(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stfs f31,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r9,r9,18100
	ctx.r9.s64 = ctx.r9.s64 + 18100;
	// stfs f31,20(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r29,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// b 0x8254a6d0
	goto loc_8254A6D0;
loc_8254A6CC:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8254A6D0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x8254A6DC;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8254A6E0:
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
	ctx.lr = 0x8254A6FC;
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

__attribute__((alias("__imp__sub_8254A710"))) PPC_WEAK_FUNC(sub_8254A710);
PPC_FUNC_IMPL(__imp__sub_8254A710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823b8450
	ctx.lr = 0x8254A728;
	sub_823B8450(ctx, base);
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
	ctx.lr = 0x8254A740;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8254a750
	if (!ctx.cr0.eq) goto loc_8254A750;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254A750:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254A768"))) PPC_WEAK_FUNC(sub_8254A768);
PPC_FUNC_IMPL(__imp__sub_8254A768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x823b7af0
	ctx.lr = 0x8254A780;
	sub_823B7AF0(ctx, base);
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
	ctx.lr = 0x8254A798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8254a7a8
	if (!ctx.cr0.eq) goto loc_8254A7A8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254A7A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254A7C0"))) PPC_WEAK_FUNC(sub_8254A7C0);
PPC_FUNC_IMPL(__imp__sub_8254A7C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82549aa8
	sub_82549AA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254A7D0"))) PPC_WEAK_FUNC(sub_8254A7D0);
PPC_FUNC_IMPL(__imp__sub_8254A7D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82549148
	sub_82549148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254A7E0"))) PPC_WEAK_FUNC(sub_8254A7E0);
PPC_FUNC_IMPL(__imp__sub_8254A7E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82548b68
	sub_82548B68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254A7F0"))) PPC_WEAK_FUNC(sub_8254A7F0);
PPC_FUNC_IMPL(__imp__sub_8254A7F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82549300
	sub_82549300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254A800"))) PPC_WEAK_FUNC(sub_8254A800);
PPC_FUNC_IMPL(__imp__sub_8254A800) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82548b60
	sub_82548B60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254A810"))) PPC_WEAK_FUNC(sub_8254A810);
PPC_FUNC_IMPL(__imp__sub_8254A810) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82549a20
	sub_82549A20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254A820"))) PPC_WEAK_FUNC(sub_8254A820);
PPC_FUNC_IMPL(__imp__sub_8254A820) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825497e0
	sub_825497E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254A830"))) PPC_WEAK_FUNC(sub_8254A830);
PPC_FUNC_IMPL(__imp__sub_8254A830) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82548ff8
	sub_82548FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254A840"))) PPC_WEAK_FUNC(sub_8254A840);
PPC_FUNC_IMPL(__imp__sub_8254A840) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82548b50
	sub_82548B50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254A850"))) PPC_WEAK_FUNC(sub_8254A850);
PPC_FUNC_IMPL(__imp__sub_8254A850) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82549490
	sub_82549490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254A860"))) PPC_WEAK_FUNC(sub_8254A860);
PPC_FUNC_IMPL(__imp__sub_8254A860) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825491e8
	sub_825491E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254A870"))) PPC_WEAK_FUNC(sub_8254A870);
PPC_FUNC_IMPL(__imp__sub_8254A870) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82548c78
	sub_82548C78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254A880"))) PPC_WEAK_FUNC(sub_8254A880);
PPC_FUNC_IMPL(__imp__sub_8254A880) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82548c78
	sub_82548C78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254A890"))) PPC_WEAK_FUNC(sub_8254A890);
PPC_FUNC_IMPL(__imp__sub_8254A890) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82548bc8
	sub_82548BC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254A8A0"))) PPC_WEAK_FUNC(sub_8254A8A0);
PPC_FUNC_IMPL(__imp__sub_8254A8A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82549248
	sub_82549248(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254A8B0"))) PPC_WEAK_FUNC(sub_8254A8B0);
PPC_FUNC_IMPL(__imp__sub_8254A8B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82549438
	sub_82549438(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254A8C0"))) PPC_WEAK_FUNC(sub_8254A8C0);
PPC_FUNC_IMPL(__imp__sub_8254A8C0) {
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
	// bl 0x8254a910
	ctx.lr = 0x8254A8E0;
	sub_8254A910(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8254a8f4
	if (ctx.cr6.eq) goto loc_8254A8F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x8254A8F4;
	sub_82333B08(ctx, base);
loc_8254A8F4:
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

__attribute__((alias("__imp__sub_8254A910"))) PPC_WEAK_FUNC(sub_8254A910);
PPC_FUNC_IMPL(__imp__sub_8254A910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,12120
	ctx.r31.s64 = ctx.r11.s64 + 12120;
	// lwz r11,12124(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12124);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8254a958
	if (!ctx.cr0.eq) goto loc_8254A958;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-19200
	ctx.r9.s64 = ctx.r9.s64 + -19200;
	// stw r11,12124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12124, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,20472
	ctx.r3.s64 = ctx.r11.s64 + 20472;
	// bl 0x82a4c758
	ctx.lr = 0x8254A958;
	sub_82A4C758(ctx, base);
loc_8254A958:
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

__attribute__((alias("__imp__sub_8254A970"))) PPC_WEAK_FUNC(sub_8254A970);
PPC_FUNC_IMPL(__imp__sub_8254A970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,25860(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25860);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8254a9b0
	if (!ctx.cr0.eq) goto loc_8254A9B0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,25860(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25860, ctx.r11.u32);
	// addi r3,r9,-19332
	ctx.r3.s64 = ctx.r9.s64 + -19332;
	// bl 0x82816528
	ctx.lr = 0x8254A9A8;
	sub_82816528(ctx, base);
	// stw r3,25856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25856, ctx.r3.u32);
	// b 0x8254a9b4
	goto loc_8254A9B4;
loc_8254A9B0:
	// lwz r3,25856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25856);
loc_8254A9B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254A9C8"))) PPC_WEAK_FUNC(sub_8254A9C8);
PPC_FUNC_IMPL(__imp__sub_8254A9C8) {
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
	// bl 0x8254a910
	ctx.lr = 0x8254A9E8;
	sub_8254A910(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254A9FC;
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

__attribute__((alias("__imp__sub_8254AA18"))) PPC_WEAK_FUNC(sub_8254AA18);
PPC_FUNC_IMPL(__imp__sub_8254AA18) {
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
	// beq cr6,0x8254aa50
	if (ctx.cr6.eq) goto loc_8254AA50;
	// bl 0x8254a910
	ctx.lr = 0x8254AA40;
	sub_8254A910(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8254aa50
	if (!ctx.cr6.eq) goto loc_8254AA50;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8254aa5c
	goto loc_8254AA5C;
loc_8254AA50:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x8254AA5C;
	sub_82333C70(ctx, base);
loc_8254AA5C:
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

__attribute__((alias("__imp__sub_8254AA78"))) PPC_WEAK_FUNC(sub_8254AA78);
PPC_FUNC_IMPL(__imp__sub_8254AA78) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254a910
	sub_8254A910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254AA80"))) PPC_WEAK_FUNC(sub_8254AA80);
PPC_FUNC_IMPL(__imp__sub_8254AA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82833108
	ctx.lr = 0x8254AA9C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8254aaf4
	if (ctx.cr0.eq) goto loc_8254AAF4;
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
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,-19280
	ctx.r9.s64 = ctx.r9.s64 + -19280;
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
	// b 0x8254aaf8
	goto loc_8254AAF8;
loc_8254AAF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254AAF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254AB10"))) PPC_WEAK_FUNC(sub_8254AB10);
PPC_FUNC_IMPL(__imp__sub_8254AB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-19332
	ctx.r3.s64 = ctx.r11.s64 + -19332;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254AB20"))) PPC_WEAK_FUNC(sub_8254AB20);
PPC_FUNC_IMPL(__imp__sub_8254AB20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-10848
	ctx.r3.s64 = ctx.r11.s64 + -10848;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254AB30"))) PPC_WEAK_FUNC(sub_8254AB30);
PPC_FUNC_IMPL(__imp__sub_8254AB30) {
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
	// beq cr6,0x8254ab68
	if (ctx.cr6.eq) goto loc_8254AB68;
	// bl 0x823b7af0
	ctx.lr = 0x8254AB58;
	sub_823B7AF0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8254ab68
	if (!ctx.cr6.eq) goto loc_8254AB68;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8254ab74
	goto loc_8254AB74;
loc_8254AB68:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ff548
	ctx.lr = 0x8254AB74;
	sub_824FF548(ctx, base);
loc_8254AB74:
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

__attribute__((alias("__imp__sub_8254AB90"))) PPC_WEAK_FUNC(sub_8254AB90);
PPC_FUNC_IMPL(__imp__sub_8254AB90) {
	PPC_FUNC_PROLOGUE();
	// b 0x823b7af0
	sub_823B7AF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254AB98"))) PPC_WEAK_FUNC(sub_8254AB98);
PPC_FUNC_IMPL(__imp__sub_8254AB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,7248
	ctx.r3.s64 = 7248;
	// bl 0x82833108
	ctx.lr = 0x8254ABB4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8254abc8
	if (ctx.cr0.eq) goto loc_8254ABC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8254ac70
	ctx.lr = 0x8254ABC4;
	sub_8254AC70(ctx, base);
	// b 0x8254abcc
	goto loc_8254ABCC;
loc_8254ABC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254ABCC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254ABE0"))) PPC_WEAK_FUNC(sub_8254ABE0);
PPC_FUNC_IMPL(__imp__sub_8254ABE0) {
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
	// bl 0x823b7af0
	ctx.lr = 0x8254AC00;
	sub_823B7AF0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8254ac14
	if (ctx.cr6.eq) goto loc_8254AC14;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824ff5f8
	ctx.lr = 0x8254AC14;
	sub_824FF5F8(ctx, base);
loc_8254AC14:
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

__attribute__((alias("__imp__sub_8254AC30"))) PPC_WEAK_FUNC(sub_8254AC30);
PPC_FUNC_IMPL(__imp__sub_8254AC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-19180
	ctx.r3.s64 = ctx.r11.s64 + -19180;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254AC40"))) PPC_WEAK_FUNC(sub_8254AC40);
PPC_FUNC_IMPL(__imp__sub_8254AC40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,7072(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7072);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254AC48"))) PPC_WEAK_FUNC(sub_8254AC48);
PPC_FUNC_IMPL(__imp__sub_8254AC48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-27852
	ctx.r10.s64 = -1825308672;
	// lwz r11,5676(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5676);
	// ori r10,r10,40719
	ctx.r10.u64 = ctx.r10.u64 | 40719;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254AC68"))) PPC_WEAK_FUNC(sub_8254AC68);
PPC_FUNC_IMPL(__imp__sub_8254AC68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,6956(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6956);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254AC70"))) PPC_WEAK_FUNC(sub_8254AC70);
PPC_FUNC_IMPL(__imp__sub_8254AC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8254AC78;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x824ff678
	ctx.lr = 0x8254AC88;
	sub_824FF678(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-18352
	ctx.r11.s64 = ctx.r11.s64 + -18352;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-15916
	ctx.r10.s64 = ctx.r10.s64 + -15916;
	// addi r9,r9,-15864
	ctx.r9.s64 = ctx.r9.s64 + -15864;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r29,r31,6784
	ctx.r29.s64 = ctx.r31.s64 + 6784;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r27,r30,6784
	ctx.r27.s64 = ctx.r30.s64 + 6784;
	// stw r28,6792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6792, ctx.r28.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r28,6796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6796, ctx.r28.u32);
	// stw r28,6800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6800, ctx.r28.u32);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// stw r11,6788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6788, ctx.r11.u32);
	// stw r28,6804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6804, ctx.r28.u32);
	// stw r28,6784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6784, ctx.r28.u32);
	// beq cr6,0x8254ad6c
	if (ctx.cr6.eq) goto loc_8254AD6C;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8254ad6c
	if (!ctx.cr6.gt) goto loc_8254AD6C;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254ad08
	if (ctx.cr0.eq) goto loc_8254AD08;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8254AD08;
	sub_82332C38(ctx, base);
loc_8254AD08:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8254ad6c
	if (!ctx.cr6.gt) goto loc_8254AD6C;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
loc_8254AD1C:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x8254AD30;
	sub_82332D50(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254ad58
	if (ctx.cr0.eq) goto loc_8254AD58;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8254AD58:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8254ad1c
	if (ctx.cr6.lt) goto loc_8254AD1C;
loc_8254AD6C:
	// lwz r11,6808(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6808);
	// addi r4,r30,6824
	ctx.r4.s64 = ctx.r30.s64 + 6824;
	// addi r3,r31,6824
	ctx.r3.s64 = ctx.r31.s64 + 6824;
	// stw r11,6808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6808, ctx.r11.u32);
	// lwz r11,6812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6812);
	// stw r11,6812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6812, ctx.r11.u32);
	// lwz r11,6816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6816);
	// stw r11,6816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6816, ctx.r11.u32);
	// lwz r11,6820(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6820);
	// stw r11,6820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6820, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x8254AD98;
	sub_82873B58(ctx, base);
	// lwz r11,6848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6848);
	// stw r11,6848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6848, ctx.r11.u32);
	// lwz r11,6852(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6852);
	// stw r11,6852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6852, ctx.r11.u32);
	// lwz r11,6856(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6856);
	// stw r11,6856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6856, ctx.r11.u32);
	// lwz r11,6860(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6860);
	// stw r11,6860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6860, ctx.r11.u32);
	// lwz r11,6864(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6864);
	// stw r11,6864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6864, ctx.r11.u32);
	// lwz r11,6868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6868);
	// stw r11,6868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6868, ctx.r11.u32);
	// lwz r11,6872(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6872);
	// stw r11,6872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6872, ctx.r11.u32);
	// lfs f0,6876(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6876);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6876(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6876, temp.u32);
	// lfs f0,6880(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6880);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6880(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6880, temp.u32);
	// lfs f0,6884(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6884);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6884(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6884, temp.u32);
	// lfs f0,6888(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6888);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6888(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6888, temp.u32);
	// lwz r11,6892(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6892);
	// stw r11,6892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6892, ctx.r11.u32);
	// lwz r11,6896(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6896);
	// stw r11,6896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6896, ctx.r11.u32);
	// lwz r11,6900(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6900);
	// stw r11,6900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6900, ctx.r11.u32);
	// lwz r11,6904(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6904);
	// stw r11,6904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6904, ctx.r11.u32);
	// lwz r11,6908(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6908);
	// stw r11,6908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6908, ctx.r11.u32);
	// lwz r11,6912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6912);
	// stw r11,6912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6912, ctx.r11.u32);
	// lwz r11,6916(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6916);
	// stw r11,6916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6916, ctx.r11.u32);
	// lwz r11,6920(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6920);
	// stw r11,6920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6920, ctx.r11.u32);
	// lwz r11,6924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6924);
	// stw r11,6924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6924, ctx.r11.u32);
	// lfs f0,6928(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6928);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6928(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6928, temp.u32);
	// lfs f0,6932(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6932);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6932(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6932, temp.u32);
	// lfs f0,6936(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6936);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6936(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6936, temp.u32);
	// lfs f0,6940(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6940);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6940(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6940, temp.u32);
	// lfs f0,6944(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6944);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6944(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6944, temp.u32);
	// lfs f0,6948(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6948);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6948(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6948, temp.u32);
	// lfs f0,6952(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6952);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6952(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6952, temp.u32);
	// lfs f0,6956(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6956);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6956(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6956, temp.u32);
	// lfs f0,6960(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6960);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6960(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6960, temp.u32);
	// lfs f0,6964(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6964);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6964(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6964, temp.u32);
	// lfs f0,6968(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6968);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6968(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6968, temp.u32);
	// lfs f0,6972(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6972);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6972(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6972, temp.u32);
	// lfs f0,6976(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6976);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6976(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6976, temp.u32);
	// lfs f0,6980(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6980);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6980(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6980, temp.u32);
	// lfs f0,6984(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6984);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6984(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6984, temp.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lfs f0,6988(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6988);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6988(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6988, temp.u32);
	// addi r11,r31,6992
	ctx.r11.s64 = ctx.r31.s64 + 6992;
	// addi r10,r10,15852
	ctx.r10.s64 = ctx.r10.s64 + 15852;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,6992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6992, ctx.r10.u32);
	// addi r4,r30,6996
	ctx.r4.s64 = ctx.r30.s64 + 6996;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x8254AED8;
	sub_82A4EA80(ctx, base);
	// addi r4,r30,7024
	ctx.r4.s64 = ctx.r30.s64 + 7024;
	// addi r3,r31,7024
	ctx.r3.s64 = ctx.r31.s64 + 7024;
	// bl 0x82873b58
	ctx.lr = 0x8254AEE4;
	sub_82873B58(ctx, base);
	// lwz r11,7048(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7048);
	// addi r4,r30,7076
	ctx.r4.s64 = ctx.r30.s64 + 7076;
	// addi r3,r31,7076
	ctx.r3.s64 = ctx.r31.s64 + 7076;
	// stw r11,7048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7048, ctx.r11.u32);
	// lwz r11,7052(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7052);
	// stw r11,7052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7052, ctx.r11.u32);
	// lwz r11,7056(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7056);
	// stw r11,7056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7056, ctx.r11.u32);
	// lwz r11,7060(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7060);
	// stw r11,7060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7060, ctx.r11.u32);
	// lwz r11,7064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7064);
	// stw r11,7064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7064, ctx.r11.u32);
	// lwz r11,7068(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7068);
	// stw r11,7068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7068, ctx.r11.u32);
	// lwz r11,7072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7072);
	// stw r11,7072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7072, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x8254AF28;
	sub_82873B58(ctx, base);
	// lwz r11,7100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7100);
	// addi r4,r30,7108
	ctx.r4.s64 = ctx.r30.s64 + 7108;
	// addi r3,r31,7108
	ctx.r3.s64 = ctx.r31.s64 + 7108;
	// stw r11,7100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7100, ctx.r11.u32);
	// lfs f0,7104(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7104, temp.u32);
	// bl 0x82873b58
	ctx.lr = 0x8254AF44;
	sub_82873B58(ctx, base);
	// addi r4,r30,7132
	ctx.r4.s64 = ctx.r30.s64 + 7132;
	// addi r3,r31,7132
	ctx.r3.s64 = ctx.r31.s64 + 7132;
	// bl 0x82873b58
	ctx.lr = 0x8254AF50;
	sub_82873B58(ctx, base);
	// addi r4,r30,7156
	ctx.r4.s64 = ctx.r30.s64 + 7156;
	// addi r3,r31,7156
	ctx.r3.s64 = ctx.r31.s64 + 7156;
	// bl 0x82873b58
	ctx.lr = 0x8254AF5C;
	sub_82873B58(ctx, base);
	// lwz r10,7180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7180);
	// addi r29,r31,7224
	ctx.r29.s64 = ctx.r31.s64 + 7224;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r27,r30,7224
	ctx.r27.s64 = ctx.r30.s64 + 7224;
	// stw r10,7180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7180, ctx.r10.u32);
	// lfs f0,7184(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7184, temp.u32);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// lwz r10,7188(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7188);
	// stw r10,7188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7188, ctx.r10.u32);
	// lwz r10,7192(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7192);
	// stw r10,7192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7192, ctx.r10.u32);
	// lwz r10,7196(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7196);
	// stw r10,7196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7196, ctx.r10.u32);
	// lwz r10,7200(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7200);
	// stw r10,7200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7200, ctx.r10.u32);
	// lwz r10,7204(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7204);
	// stw r10,7204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7204, ctx.r10.u32);
	// lwz r10,7208(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7208);
	// stw r10,7208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7208, ctx.r10.u32);
	// lwz r10,7212(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7212);
	// stw r10,7212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7212, ctx.r10.u32);
	// lwz r10,7216(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7216);
	// stw r10,7216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7216, ctx.r10.u32);
	// lwz r10,7220(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7220);
	// stw r10,7220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7220, ctx.r10.u32);
	// stw r11,7228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7228, ctx.r11.u32);
	// stw r28,7232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7232, ctx.r28.u32);
	// stw r28,7236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7236, ctx.r28.u32);
	// stw r28,7240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7240, ctx.r28.u32);
	// stw r28,7244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7244, ctx.r28.u32);
	// stw r28,7224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7224, ctx.r28.u32);
	// beq cr6,0x8254b028
	if (ctx.cr6.eq) goto loc_8254B028;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8254b028
	if (!ctx.cr6.gt) goto loc_8254B028;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254b00c
	if (ctx.cr0.eq) goto loc_8254B00C;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8254B00C;
	sub_82332C38(ctx, base);
loc_8254B00C:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x8254B020;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_8254B028:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254B038"))) PPC_WEAK_FUNC(sub_8254B038);
PPC_FUNC_IMPL(__imp__sub_8254B038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8254B040;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r31,7224
	ctx.r30.s64 = ctx.r31.s64 + 7224;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,7240(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7240);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8254B068;
	sub_82332CA8(ctx, base);
	// lwz r3,7236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254b078
	if (ctx.cr6.eq) goto loc_8254B078;
	// bl 0x82332db8
	ctx.lr = 0x8254B078;
	sub_82332DB8(ctx, base);
loc_8254B078:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r31,7156
	ctx.r3.s64 = ctx.r31.s64 + 7156;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// bl 0x8239d768
	ctx.lr = 0x8254B090;
	sub_8239D768(ctx, base);
	// addi r3,r31,7132
	ctx.r3.s64 = ctx.r31.s64 + 7132;
	// bl 0x8239d768
	ctx.lr = 0x8254B098;
	sub_8239D768(ctx, base);
	// addi r3,r31,7108
	ctx.r3.s64 = ctx.r31.s64 + 7108;
	// bl 0x8239d768
	ctx.lr = 0x8254B0A0;
	sub_8239D768(ctx, base);
	// addi r3,r31,7076
	ctx.r3.s64 = ctx.r31.s64 + 7076;
	// bl 0x8239d768
	ctx.lr = 0x8254B0A8;
	sub_8239D768(ctx, base);
	// addi r3,r31,7024
	ctx.r3.s64 = ctx.r31.s64 + 7024;
	// bl 0x8239d768
	ctx.lr = 0x8254B0B0;
	sub_8239D768(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,6824
	ctx.r3.s64 = ctx.r31.s64 + 6824;
	// addi r11,r11,-29556
	ctx.r11.s64 = ctx.r11.s64 + -29556;
	// stw r11,6992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6992, ctx.r11.u32);
	// bl 0x8239d768
	ctx.lr = 0x8254B0C4;
	sub_8239D768(ctx, base);
	// addi r30,r31,6784
	ctx.r30.s64 = ctx.r31.s64 + 6784;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,6800(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6800);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8254B0E0;
	sub_82332CA8(ctx, base);
	// lwz r3,6796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6796);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254b0f0
	if (ctx.cr6.eq) goto loc_8254B0F0;
	// bl 0x82332db8
	ctx.lr = 0x8254B0F0;
	sub_82332DB8(ctx, base);
loc_8254B0F0:
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// bl 0x824ff7c8
	ctx.lr = 0x8254B104;
	sub_824FF7C8(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254b114
	if (ctx.cr0.eq) goto loc_8254B114;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8254B114;
	sub_82332DB8(ctx, base);
loc_8254B114:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254B120"))) PPC_WEAK_FUNC(sub_8254B120);
PPC_FUNC_IMPL(__imp__sub_8254B120) {
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
	// addi r31,r11,-21824
	ctx.r31.s64 = ctx.r11.s64 + -21824;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x8254B158;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 * 24;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254b184
	if (ctx.cr0.eq) goto loc_8254B184;
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
loc_8254B184:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8254b1a8
	if (ctx.cr6.eq) goto loc_8254B1A8;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82332c38
	ctx.lr = 0x8254B1A8;
	sub_82332C38(ctx, base);
loc_8254B1A8:
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

__attribute__((alias("__imp__sub_8254B1C0"))) PPC_WEAK_FUNC(sub_8254B1C0);
PPC_FUNC_IMPL(__imp__sub_8254B1C0) {
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
	// addi r11,r11,-21824
	ctx.r11.s64 = ctx.r11.s64 + -21824;
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
	// ble cr6,0x8254b22c
	if (!ctx.cr6.gt) goto loc_8254B22C;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8254B1FC:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8254b21c
	if (ctx.cr6.eq) goto loc_8254B21C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8254b1fc
	if (ctx.cr6.lt) goto loc_8254B1FC;
	// b 0x8254b22c
	goto loc_8254B22C;
loc_8254B21C:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_8254B22C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8254b254
	if (ctx.cr6.eq) goto loc_8254B254;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8254B24C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8254b258
	goto loc_8254B258;
loc_8254B254:
	// bl 0x824daf88
	ctx.lr = 0x8254B258;
	sub_824DAF88(ctx, base);
loc_8254B258:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254B268"))) PPC_WEAK_FUNC(sub_8254B268);
PPC_FUNC_IMPL(__imp__sub_8254B268) {
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
	// addi r11,r11,-21824
	ctx.r11.s64 = ctx.r11.s64 + -21824;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8254b2c8
	if (!ctx.cr6.gt) goto loc_8254B2C8;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8254B294:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8254b2b4
	if (ctx.cr6.eq) goto loc_8254B2B4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8254b294
	if (ctx.cr6.lt) goto loc_8254B294;
	// b 0x8254b2c8
	goto loc_8254B2C8;
loc_8254B2B4:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8254b2d0
	if (!ctx.cr6.eq) goto loc_8254B2D0;
loc_8254B2C8:
	// bl 0x824db030
	ctx.lr = 0x8254B2CC;
	sub_824DB030(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8254B2D0:
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

__attribute__((alias("__imp__sub_8254B2E8"))) PPC_WEAK_FUNC(sub_8254B2E8);
PPC_FUNC_IMPL(__imp__sub_8254B2E8) {
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
	// addi r11,r11,-21824
	ctx.r11.s64 = ctx.r11.s64 + -21824;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8254b368
	if (!ctx.cr6.gt) goto loc_8254B368;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8254B324:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8254b344
	if (ctx.cr6.eq) goto loc_8254B344;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8254b324
	if (ctx.cr6.lt) goto loc_8254B324;
	// b 0x8254b368
	goto loc_8254B368;
loc_8254B344:
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
	ctx.lr = 0x8254B360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8254b374
	if (!ctx.cr0.eq) goto loc_8254B374;
loc_8254B368:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824db0b0
	ctx.lr = 0x8254B374;
	sub_824DB0B0(ctx, base);
loc_8254B374:
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

__attribute__((alias("__imp__sub_8254B390"))) PPC_WEAK_FUNC(sub_8254B390);
PPC_FUNC_IMPL(__imp__sub_8254B390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e8
	ctx.lr = 0x8254B398;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824ff818
	ctx.lr = 0x8254B3A8;
	sub_824FF818(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-18352
	ctx.r11.s64 = ctx.r11.s64 + -18352;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-15916
	ctx.r10.s64 = ctx.r10.s64 + -15916;
	// addi r9,r9,-15864
	ctx.r9.s64 = ctx.r9.s64 + -15864;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// li r23,8
	ctx.r23.s64 = 8;
	// li r25,4
	ctx.r25.s64 = 4;
	// stw r30,6792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6792, ctx.r30.u32);
	// addi r10,r11,15852
	ctx.r10.s64 = ctx.r11.s64 + 15852;
	// stw r23,6788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6788, ctx.r23.u32);
	// stw r30,6796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6796, ctx.r30.u32);
	// addi r11,r31,6992
	ctx.r11.s64 = ctx.r31.s64 + 6992;
	// stw r30,6800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6800, ctx.r30.u32);
	// addi r29,r31,6824
	ctx.r29.s64 = ctx.r31.s64 + 6824;
	// stw r30,6804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6804, ctx.r30.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r30,6784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6784, ctx.r30.u32);
	// stw r30,6824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6824, ctx.r30.u32);
	// stw r25,6828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6828, ctx.r25.u32);
	// stw r30,6832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6832, ctx.r30.u32);
	// stw r30,6836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6836, ctx.r30.u32);
	// stw r30,6840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6840, ctx.r30.u32);
	// stw r30,6844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6844, ctx.r30.u32);
	// stw r10,6992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6992, ctx.r10.u32);
	// bl 0x8312e7dc
	ctx.lr = 0x8254B424;
	sub_8312E7DC(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// stw r25,7028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7028, ctx.r25.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r30,7032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7032, ctx.r30.u32);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// stw r30,7036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7036, ctx.r30.u32);
	// stw r30,7040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7040, ctx.r30.u32);
	// lis r7,5275
	ctx.r7.s64 = 345702400;
	// stw r30,7044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7044, ctx.r30.u32);
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,7024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7024, ctx.r30.u32);
	// lfs f13,-12104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12104);
	ctx.f13.f64 = double(temp.f32);
	// stw r25,7080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7080, ctx.r25.u32);
	// lfs f31,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r30,7084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7084, ctx.r30.u32);
	// lfs f12,30996(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 30996);
	ctx.f12.f64 = double(temp.f32);
	// stw r30,7088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7088, ctx.r30.u32);
	// addi r28,r31,7108
	ctx.r28.s64 = ctx.r31.s64 + 7108;
	// stw r30,7092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7092, ctx.r30.u32);
	// addi r27,r31,7132
	ctx.r27.s64 = ctx.r31.s64 + 7132;
	// stw r30,7096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7096, ctx.r30.u32);
	// addi r26,r31,7156
	ctx.r26.s64 = ctx.r31.s64 + 7156;
	// stw r30,7076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7076, ctx.r30.u32);
	// ori r11,r7,18677
	ctx.r11.u64 = ctx.r7.u64 | 18677;
	// stw r25,7112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7112, ctx.r25.u32);
	// stw r30,7116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7116, ctx.r30.u32);
	// stw r30,7120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7120, ctx.r30.u32);
	// stw r30,7124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7124, ctx.r30.u32);
	// stw r30,7128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7128, ctx.r30.u32);
	// stw r30,7108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7108, ctx.r30.u32);
	// stw r25,7136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7136, ctx.r25.u32);
	// stw r30,7140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7140, ctx.r30.u32);
	// stw r30,7144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7144, ctx.r30.u32);
	// stw r30,7148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7148, ctx.r30.u32);
	// stw r30,7152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7152, ctx.r30.u32);
	// stw r30,7132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7132, ctx.r30.u32);
	// stw r25,7160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7160, ctx.r25.u32);
	// stw r30,7164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7164, ctx.r30.u32);
	// stw r30,7168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7168, ctx.r30.u32);
	// stw r30,7172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7172, ctx.r30.u32);
	// stw r30,7176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7176, ctx.r30.u32);
	// stw r30,7156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7156, ctx.r30.u32);
	// stw r25,7228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7228, ctx.r25.u32);
	// stw r30,7232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7232, ctx.r30.u32);
	// stw r30,7236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7236, ctx.r30.u32);
	// stw r30,7240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7240, ctx.r30.u32);
	// stw r30,7244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7244, ctx.r30.u32);
	// stw r30,7224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7224, ctx.r30.u32);
	// stfs f0,6960(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6960, temp.u32);
	// stw r11,6704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6704, ctx.r11.u32);
	// stfs f0,6932(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6932, temp.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stfs f0,6936(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6936, temp.u32);
	// stfs f13,6984(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6984, temp.u32);
	// stw r30,7188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7188, ctx.r30.u32);
	// stfs f31,6888(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6888, temp.u32);
	// stw r30,6908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6908, ctx.r30.u32);
	// stfs f31,6884(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6884, temp.u32);
	// stw r30,6892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6892, ctx.r30.u32);
	// stfs f12,6876(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6876, temp.u32);
	// stw r30,6820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6820, ctx.r30.u32);
	// stfs f13,2732(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2732, temp.u32);
	// stw r30,6816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6816, ctx.r30.u32);
	// stw r23,6756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6756, ctx.r23.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-10832
	ctx.r3.s64 = ctx.r11.s64 + -10832;
	// bl 0x82816528
	ctx.lr = 0x8254B534;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r9,-31944
	ctx.r9.s64 = -2093481984;
	// lwz r7,2852(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2852);
	// lis r6,-31961
	ctx.r6.s64 = -2094596096;
	// stw r3,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r3.u32);
	// lis r5,-31963
	ctx.r5.s64 = -2094727168;
	// stw r30,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r30.u32);
	// li r8,150
	ctx.r8.s64 = 150;
	// stw r30,1976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1976, ctx.r30.u32);
	// lis r4,27312
	ctx.r4.s64 = 1789919232;
	// lfs f0,20500(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20500);
	ctx.f0.f64 = double(temp.f32);
	// li r11,8192
	ctx.r11.s64 = 8192;
	// stw r8,1980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1980, ctx.r8.u32);
	// li r24,1
	ctx.r24.s64 = 1;
	// stw r8,1984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1984, ctx.r8.u32);
	// ori r4,r4,35504
	ctx.r4.u64 = ctx.r4.u64 | 35504;
	// lwz r10,25852(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25852);
	// li r3,2048
	ctx.r3.s64 = 2048;
	// stfs f0,1820(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1820, temp.u32);
	// li r21,2
	ctx.r21.s64 = 2;
	// stfs f0,3108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3108, temp.u32);
	// li r20,100
	ctx.r20.s64 = 100;
	// lfs f0,-28788(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -28788);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-31944
	ctx.r8.s64 = -2093481984;
	// lfs f13,23968(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 23968);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,3120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3120, temp.u32);
	// stw r4,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r4.u32);
	// stfs f0,1696(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1696, temp.u32);
	// stw r11,3812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3812, ctx.r11.u32);
	// stfs f13,5404(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5404, temp.u32);
	// stw r3,3816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3816, ctx.r3.u32);
	// stw r30,3124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3124, ctx.r30.u32);
	// clrlwi. r6,r10,31
	ctx.r6.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r24,3148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3148, ctx.r24.u32);
	// addi r22,r8,25848
	ctx.r22.s64 = ctx.r8.s64 + 25848;
	// stw r11,5392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5392, ctx.r11.u32);
	// stw r11,5400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5400, ctx.r11.u32);
	// stw r11,5396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5396, ctx.r11.u32);
	// stw r30,3172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3172, ctx.r30.u32);
	// stw r24,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r24.u32);
	// stw r24,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r24.u32);
	// stw r21,2236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2236, ctx.r21.u32);
	// stw r20,3340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3340, ctx.r20.u32);
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r30.u32);
	// bne 0x8254b608
	if (!ctx.cr0.eq) goto loc_8254B608;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// addi r10,r8,-15840
	ctx.r10.s64 = ctx.r8.s64 + -15840;
	// stw r11,25852(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25852, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r10,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
	// addi r3,r11,20608
	ctx.r3.s64 = ctx.r11.s64 + 20608;
	// bl 0x82a4c758
	ctx.lr = 0x8254B608;
	sub_82A4C758(ctx, base);
loc_8254B608:
	// lwz r11,2852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2852);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r9,26669
	ctx.r9.s64 = 1747779584;
	// ori r9,r9,58543
	ctx.r9.u64 = ctx.r9.u64 | 58543;
	// stw r22,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r22.u32);
	// lwz r11,2852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2852);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// stw r24,5448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5448, ctx.r24.u32);
	// stw r30,4004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4004, ctx.r30.u32);
	// stw r9,5468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5468, ctx.r9.u32);
	// stw r23,3612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3612, ctx.r23.u32);
	// bne cr6,0x8254b670
	if (!ctx.cr6.eq) goto loc_8254B670;
	// li r10,500
	ctx.r10.s64 = 500;
	// stw r10,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r10.u32);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8254b670
	if (!ctx.cr6.eq) goto loc_8254B670;
	// lwz r10,1052(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8254b670
	if (!ctx.cr6.eq) goto loc_8254B670;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r10,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r10.u32);
loc_8254B670:
	// lwz r10,1492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// addi r3,r7,-18980
	ctx.r3.s64 = ctx.r7.s64 + -18980;
	// stw r24,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r24.u32);
	// lfs f0,-27804(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27804);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,1492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stw r24,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r24.u32);
	// lwz r10,1492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stfs f0,84(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 84, temp.u32);
	// lwz r10,1492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lfs f0,20496(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20496);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 64, temp.u32);
	// stw r24,4108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4108, ctx.r24.u32);
	// stw r24,2904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2904, ctx.r24.u32);
	// stw r24,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r24.u32);
	// addi r24,r11,1268
	ctx.r24.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x8254B6BC;
	sub_82816528(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r4,r31,1740
	ctx.r4.s64 = ctx.r31.s64 + 1740;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82509750
	ctx.lr = 0x8254B6D4;
	sub_82509750(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8254b6ec
	if (!ctx.cr6.eq) goto loc_8254B6EC;
	// bl 0x82a4cd78
	ctx.lr = 0x8254B6E4;
	sub_82A4CD78(ctx, base);
	// clrlwi r11,r3,29
	ctx.r11.u64 = ctx.r3.u32 & 0x7;
	// stw r11,7060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7060, ctx.r11.u32);
loc_8254B6EC:
	// lis r11,4659
	ctx.r11.s64 = 305332224;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,35581
	ctx.r11.u64 = ctx.r11.u64 | 35581;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8254B704;
	sub_82410060(ctx, base);
	// lis r11,4654
	ctx.r11.s64 = 305004544;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,13148
	ctx.r11.u64 = ctx.r11.u64 | 13148;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8254B71C;
	sub_82410060(ctx, base);
	// lis r11,6111
	ctx.r11.s64 = 400490496;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,57894
	ctx.r11.u64 = ctx.r11.u64 | 57894;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8254B734;
	sub_82410060(ctx, base);
	// lis r11,2965
	ctx.r11.s64 = 194314240;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,40393
	ctx.r11.u64 = ctx.r11.u64 | 40393;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8254B74C;
	sub_82410060(ctx, base);
	// lis r11,14401
	ctx.r11.s64 = 943783936;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,12509
	ctx.r11.u64 = ctx.r11.u64 | 12509;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8254B764;
	sub_82410060(ctx, base);
	// lis r11,2510
	ctx.r11.s64 = 164495360;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,61140
	ctx.r11.u64 = ctx.r11.u64 | 61140;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8254B77C;
	sub_82410060(ctx, base);
	// lis r11,13025
	ctx.r11.s64 = 853606400;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,23264
	ctx.r11.u64 = ctx.r11.u64 | 23264;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8254B794;
	sub_82410060(ctx, base);
	// lis r11,13835
	ctx.r11.s64 = 906690560;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,27699
	ctx.r11.u64 = ctx.r11.u64 | 27699;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8254B7AC;
	sub_82410060(ctx, base);
	// lis r11,11369
	ctx.r11.s64 = 745078784;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,2358
	ctx.r11.u64 = ctx.r11.u64 | 2358;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8254B7C4;
	sub_82410060(ctx, base);
	// lis r11,4094
	ctx.r11.s64 = 268304384;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,62330
	ctx.r11.u64 = ctx.r11.u64 | 62330;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8254B7DC;
	sub_82410060(ctx, base);
	// lis r11,5524
	ctx.r11.s64 = 362020864;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,29767
	ctx.r11.u64 = ctx.r11.u64 | 29767;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8254B7F4;
	sub_82410060(ctx, base);
	// lis r11,9754
	ctx.r11.s64 = 639238144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,25477
	ctx.r11.u64 = ctx.r11.u64 | 25477;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8254B80C;
	sub_82410060(ctx, base);
	// stfs f31,7184(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7184, temp.u32);
	// stw r30,7180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7180, ctx.r30.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r28,r11,-32444
	ctx.r28.s64 = ctx.r11.s64 + -32444;
	// addi r4,r28,16
	ctx.r4.s64 = ctx.r28.s64 + 16;
	// bl 0x824fc978
	ctx.lr = 0x8254B828;
	sub_824FC978(ctx, base);
	// addi r4,r28,12
	ctx.r4.s64 = ctx.r28.s64 + 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824fc978
	ctx.lr = 0x8254B834;
	sub_824FC978(ctx, base);
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824fc978
	ctx.lr = 0x8254B840;
	sub_824FC978(ctx, base);
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824fc978
	ctx.lr = 0x8254B84C;
	sub_824FC978(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824fc978
	ctx.lr = 0x8254B858;
	sub_824FC978(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8254b87c
	if (ctx.cr6.eq) goto loc_8254B87C;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8254B87C;
	sub_82332C38(ctx, base);
loc_8254B87C:
	// lis r11,-13728
	ctx.r11.s64 = -899678208;
	// stw r25,6808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6808, ctx.r25.u32);
	// lis r10,6444
	ctx.r10.s64 = 422313984;
	// stw r30,6896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6896, ctx.r30.u32);
	// lis r9,1655
	ctx.r9.s64 = 108462080;
	// stw r30,6900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6900, ctx.r30.u32);
	// ori r11,r11,12805
	ctx.r11.u64 = ctx.r11.u64 | 12805;
	// stw r30,6904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6904, ctx.r30.u32);
	// ori r10,r10,1329
	ctx.r10.u64 = ctx.r10.u64 | 1329;
	// ori r9,r9,37217
	ctx.r9.u64 = ctx.r9.u64 | 37217;
	// stw r11,3644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3644, ctx.r11.u32);
	// stw r10,2612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2612, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,2608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2608, ctx.r9.u32);
	// stw r30,7196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7196, ctx.r30.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82a4ea38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254B8C8"))) PPC_WEAK_FUNC(sub_8254B8C8);
PPC_FUNC_IMPL(__imp__sub_8254B8C8) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r30,r31,7224
	ctx.r30.s64 = ctx.r31.s64 + 7224;
	// lwz r11,7244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7244);
	// stw r10,7240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7240, ctx.r10.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8254b910
	if (ctx.cr6.eq) goto loc_8254B910;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x8254B910;
	sub_82332C38(ctx, base);
loc_8254B910:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823327e0
	ctx.lr = 0x8254B928;
	sub_823327E0(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82a455d0
	ctx.lr = 0x8254B938;
	sub_82A455D0(ctx, base);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lis r4,-8332
	ctx.r4.s64 = -546045952;
	// ori r4,r4,25088
	ctx.r4.u64 = ctx.r4.u64 | 25088;
	// lwz r11,10548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x8254B950;
	sub_829B98F8(ctx, base);
	// bl 0x8254f058
	ctx.lr = 0x8254B954;
	sub_8254F058(ctx, base);
	// lwz r10,7236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7236);
	// lwz r11,10548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// lis r4,508
	ctx.r4.s64 = 33292288;
	// ori r4,r4,6070
	ctx.r4.u64 = ctx.r4.u64 | 6070;
	// stw r3,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r3.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x8254B970;
	sub_829B98F8(ctx, base);
	// bl 0x8254f058
	ctx.lr = 0x8254B974;
	sub_8254F058(ctx, base);
	// lwz r10,7236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7236);
	// lwz r11,10548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// lis r4,-3010
	ctx.r4.s64 = -197263360;
	// ori r4,r4,44001
	ctx.r4.u64 = ctx.r4.u64 | 44001;
	// stw r3,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x8254B990;
	sub_829B98F8(ctx, base);
	// bl 0x8254f058
	ctx.lr = 0x8254B994;
	sub_8254F058(ctx, base);
	// lwz r10,7236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7236);
	// lwz r11,10548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// lis r4,-20295
	ctx.r4.s64 = -1330053120;
	// ori r4,r4,56691
	ctx.r4.u64 = ctx.r4.u64 | 56691;
	// stw r3,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r3.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x8254B9B0;
	sub_829B98F8(ctx, base);
	// bl 0x8254f058
	ctx.lr = 0x8254B9B4;
	sub_8254F058(ctx, base);
	// lwz r10,7236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7236);
	// lwz r11,10548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// lis r4,-29777
	ctx.r4.s64 = -1951465472;
	// ori r4,r4,31790
	ctx.r4.u64 = ctx.r4.u64 | 31790;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x8254B9D0;
	sub_829B98F8(ctx, base);
	// bl 0x8254f058
	ctx.lr = 0x8254B9D4;
	sub_8254F058(ctx, base);
	// lwz r11,7236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7236);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8254B9F8"))) PPC_WEAK_FUNC(sub_8254B9F8);
PPC_FUNC_IMPL(__imp__sub_8254B9F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8254BA00;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x824ffa88
	ctx.lr = 0x8254BA14;
	sub_824FFA88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254c210
	ctx.lr = 0x8254BA1C;
	sub_8254C210(ctx, base);
	// lwz r11,6820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6820);
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254babc
	if (ctx.cr6.eq) goto loc_8254BABC;
	// lwz r10,960(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8254ba58
	if (!ctx.cr6.eq) goto loc_8254BA58;
	// lwz r10,620(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// stw r10,7204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7204, ctx.r10.u32);
	// lwz r10,624(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// stw r10,7208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7208, ctx.r10.u32);
	// lwz r11,628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// stw r11,7212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7212, ctx.r11.u32);
	// b 0x8254babc
	goto loc_8254BABC;
loc_8254BA58:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82833108
	ctx.lr = 0x8254BA60;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8254baac
	if (ctx.cr0.eq) goto loc_8254BAAC;
	// lwz r11,6820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6820);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8254ba7c
	if (ctx.cr0.eq) goto loc_8254BA7C;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8254ba80
	goto loc_8254BA80;
loc_8254BA7C:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_8254BA80:
	// lwz r7,664(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,7212(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7212);
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rldicr r5,r5,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,656(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 656);
	// ld r4,7204(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 7204);
	// bl 0x8254f228
	ctx.lr = 0x8254BAA4;
	sub_8254F228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8254bab0
	goto loc_8254BAB0;
loc_8254BAAC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8254BAB0:
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8254BABC;
	sub_82833A30(ctx, base);
loc_8254BABC:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x8254bb78
	if (!ctx.cr6.gt) goto loc_8254BB78;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,6924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6924);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f1,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// beq 0x8254bae8
	if (ctx.cr0.eq) goto loc_8254BAE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254d268
	ctx.lr = 0x8254BAE8;
	sub_8254D268(ctx, base);
loc_8254BAE8:
	// stfs f1,5412(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5412, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254ebc0
	ctx.lr = 0x8254BAF4;
	sub_8254EBC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254e920
	ctx.lr = 0x8254BAFC;
	sub_8254E920(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8254bb6c
	if (!ctx.cr6.eq) goto loc_8254BB6C;
	// lwz r11,6820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6820);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254bb6c
	if (ctx.cr6.eq) goto loc_8254BB6C;
	// lwz r11,6896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6896);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8254bb34
	if (ctx.cr6.lt) goto loc_8254BB34;
	// bne cr6,0x8254bb40
	if (!ctx.cr6.eq) goto loc_8254BB40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8254e600
	ctx.lr = 0x8254BB30;
	sub_8254E600(ctx, base);
	// b 0x8254bb40
	goto loc_8254BB40;
loc_8254BB34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8254e4c0
	ctx.lr = 0x8254BB40;
	sub_8254E4C0(ctx, base);
loc_8254BB40:
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r4,6900(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6900);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254bb64
	if (ctx.cr6.eq) goto loc_8254BB64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8254bb64
	if (ctx.cr6.eq) goto loc_8254BB64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8254bb6c
	if (!ctx.cr6.eq) goto loc_8254BB6C;
loc_8254BB64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254e7d0
	ctx.lr = 0x8254BB6C;
	sub_8254E7D0(ctx, base);
loc_8254BB6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8254ed98
	ctx.lr = 0x8254BB78;
	sub_8254ED98(ctx, base);
loc_8254BB78:
	// lwz r11,6768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6768);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254bba8
	if (ctx.cr6.eq) goto loc_8254BBA8;
	// stw r29,2088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2088, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,2092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2092, ctx.r29.u32);
	// stw r29,2096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2096, ctx.r29.u32);
	// lwz r11,1664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1664);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254BBA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8254BBA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254BBB8"))) PPC_WEAK_FUNC(sub_8254BBB8);
PPC_FUNC_IMPL(__imp__sub_8254BBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,30160
	ctx.r3.s64 = 1976565760;
	// ori r3,r3,36888
	ctx.r3.u64 = ctx.r3.u64 | 36888;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254BBC8"))) PPC_WEAK_FUNC(sub_8254BBC8);
PPC_FUNC_IMPL(__imp__sub_8254BBC8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-17199
	ctx.r3.s64 = -1127153664;
	// ori r3,r3,9903
	ctx.r3.u64 = ctx.r3.u64 | 9903;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254BBD8"))) PPC_WEAK_FUNC(sub_8254BBD8);
PPC_FUNC_IMPL(__imp__sub_8254BBD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-32760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32760);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16604(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16604);
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

__attribute__((alias("__imp__sub_8254BBF8"))) PPC_WEAK_FUNC(sub_8254BBF8);
PPC_FUNC_IMPL(__imp__sub_8254BBF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8254BC00;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x824ffb80
	ctx.lr = 0x8254BC14;
	sub_824FFB80(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,1972(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1972, ctx.r27.u32);
	// stw r27,1976(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1976, ctx.r27.u32);
	// lwz r11,5728(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254bc34
	if (ctx.cr6.eq) goto loc_8254BC34;
	// lwz r4,5724(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5724);
	// b 0x8254bc3c
	goto loc_8254BC3C;
loc_8254BC34:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_8254BC3C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82409058
	ctx.lr = 0x8254BC44;
	sub_82409058(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwz r31,132(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8254bc68
	if (ctx.cr6.eq) goto loc_8254BC68;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254bc68
	if (ctx.cr6.eq) goto loc_8254BC68;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x8254BC68;
	sub_82332DB8(ctx, base);
loc_8254BC68:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8254c0d8
	if (ctx.cr6.eq) goto loc_8254C0D8;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254c0d8
	if (ctx.cr6.eq) goto loc_8254C0D8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82507af0
	ctx.lr = 0x8254BC84;
	sub_82507AF0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r10,15280
	ctx.r4.s64 = ctx.r10.s64 + 15280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8254BCA4;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,9896
	ctx.r4.s64 = ctx.r11.s64 + 9896;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x829e6978
	ctx.lr = 0x8254BCCC;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,11960
	ctx.r4.s64 = ctx.r11.s64 + 11960;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x829e6978
	ctx.lr = 0x8254BCF4;
	sub_829E6978(ctx, base);
	// stfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r28,r29,3412
	ctx.r28.s64 = ctx.r29.s64 + 3412;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82507928
	ctx.lr = 0x8254BD08;
	sub_82507928(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,15888
	ctx.r4.s64 = ctx.r11.s64 + 15888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8254BD20;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,32484
	ctx.r4.s64 = ctx.r11.s64 + 32484;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x829e6978
	ctx.lr = 0x8254BD48;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,15904
	ctx.r4.s64 = ctx.r11.s64 + 15904;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x829e6978
	ctx.lr = 0x8254BD70;
	sub_829E6978(ctx, base);
	// stfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82507928
	ctx.lr = 0x8254BD80;
	sub_82507928(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,15920
	ctx.r4.s64 = ctx.r11.s64 + 15920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8254BD98;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r11,15936
	ctx.r4.s64 = ctx.r11.s64 + 15936;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8254BDC0;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,24044
	ctx.r4.s64 = ctx.r11.s64 + 24044;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x829e6978
	ctx.lr = 0x8254BDE8;
	sub_829E6978(ctx, base);
	// stfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82507928
	ctx.lr = 0x8254BDF8;
	sub_82507928(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,-18944
	ctx.r4.s64 = ctx.r11.s64 + -18944;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8254BE10;
	sub_829E6978(ctx, base);
	// stfs f1,3116(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3116, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-18928
	ctx.r4.s64 = ctx.r11.s64 + -18928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8254BE2C;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r28,r29,7076
	ctx.r28.s64 = ctx.r29.s64 + 7076;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x8254BE4C;
	sub_82410060(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,-18912
	ctx.r4.s64 = ctx.r11.s64 + -18912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8254BE64;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x8254BE80;
	sub_82410060(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,-18896
	ctx.r4.s64 = ctx.r11.s64 + -18896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8254BE98;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x8254BEB4;
	sub_82410060(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,-18880
	ctx.r4.s64 = ctx.r11.s64 + -18880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8254BECC;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82410060
	ctx.lr = 0x8254BEE8;
	sub_82410060(ctx, base);
	// lwz r11,7092(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7092);
	// lwz r10,7096(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7096);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8254bf0c
	if (ctx.cr6.eq) goto loc_8254BF0C;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x8254BF0C;
	sub_82332C38(ctx, base);
loc_8254BF0C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-18864
	ctx.r4.s64 = ctx.r11.s64 + -18864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8254BF24;
	sub_829E6978(ctx, base);
	// stfs f1,6960(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6960, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-18848
	ctx.r4.s64 = ctx.r11.s64 + -18848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8254BF40;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-18824
	ctx.r4.s64 = ctx.r10.s64 + -18824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwa r11,84(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 84));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfs f0,16356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16356);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,6928(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6928, temp.u32);
	// bl 0x829e6978
	ctx.lr = 0x8254BF84;
	sub_829E6978(ctx, base);
	// stfs f1,6964(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6964, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-18808
	ctx.r4.s64 = ctx.r11.s64 + -18808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8254BFA0;
	sub_829E6978(ctx, base);
	// stfs f1,6968(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6968, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-18792
	ctx.r4.s64 = ctx.r11.s64 + -18792;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8254BFBC;
	sub_829E6978(ctx, base);
	// stfs f1,6972(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6972, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-18772
	ctx.r4.s64 = ctx.r11.s64 + -18772;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8254BFD8;
	sub_829E6978(ctx, base);
	// stfs f1,6948(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6948, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-18756
	ctx.r4.s64 = ctx.r11.s64 + -18756;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8254BFF4;
	sub_829E6978(ctx, base);
	// stfs f1,6952(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6952, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-18736
	ctx.r4.s64 = ctx.r11.s64 + -18736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8254C010;
	sub_829E6978(ctx, base);
	// stfs f1,6944(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6944, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-18716
	ctx.r4.s64 = ctx.r11.s64 + -18716;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8254C02C;
	sub_829E6978(ctx, base);
	// stfs f1,6956(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6956, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-18688
	ctx.r4.s64 = ctx.r11.s64 + -18688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8254C048;
	sub_829E6978(ctx, base);
	// stfs f1,6932(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6932, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,-18668
	ctx.r4.s64 = ctx.r11.s64 + -18668;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8254C064;
	sub_829E6978(ctx, base);
	// stfs f1,6936(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6936, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-18652
	ctx.r4.s64 = ctx.r11.s64 + -18652;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8254C080;
	sub_829E6978(ctx, base);
	// stfs f1,6976(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6976, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-18632
	ctx.r4.s64 = ctx.r11.s64 + -18632;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8254C09C;
	sub_829E6978(ctx, base);
	// stfs f1,6980(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6980, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-18616
	ctx.r4.s64 = ctx.r11.s64 + -18616;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8254C0B8;
	sub_829E6978(ctx, base);
	// stfs f1,6984(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6984, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-18600
	ctx.r4.s64 = ctx.r11.s64 + -18600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8254C0D4;
	sub_829E6978(ctx, base);
	// stfs f1,6988(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6988, temp.u32);
loc_8254C0D8:
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r31,r29,3436
	ctx.r31.s64 = ctx.r29.s64 + 3436;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82522580
	ctx.lr = 0x8254C0F0;
	sub_82522580(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82522580
	ctx.lr = 0x8254C108;
	sub_82522580(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82522580
	ctx.lr = 0x8254C120;
	sub_82522580(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254C130"))) PPC_WEAK_FUNC(sub_8254C130);
PPC_FUNC_IMPL(__imp__sub_8254C130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8254C138;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82502d10
	ctx.lr = 0x8254C144;
	sub_82502D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824ff970
	ctx.lr = 0x8254C14C;
	sub_824FF970(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r5,-2537
	ctx.r5.s64 = -166264832;
	// lis r4,-11588
	ctx.r4.s64 = -759431168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// lfs f2,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// li r6,2
	ctx.r6.s64 = 2;
	// ori r5,r5,19839
	ctx.r5.u64 = ctx.r5.u64 | 19839;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// ori r4,r4,59573
	ctx.r4.u64 = ctx.r4.u64 | 59573;
	// bl 0x82500060
	ctx.lr = 0x8254C178;
	sub_82500060(ctx, base);
	// stw r3,7064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7064, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254c210
	ctx.lr = 0x8254C184;
	sub_8254C210(ctx, base);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8254c1a8
	if (ctx.cr6.eq) goto loc_8254C1A8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8254c1a8
	if (ctx.cr6.eq) goto loc_8254C1A8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8254c1b4
	if (!ctx.cr6.eq) goto loc_8254C1B4;
loc_8254C1A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254b8c8
	ctx.lr = 0x8254C1B0;
	sub_8254B8C8(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
loc_8254C1B4:
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254c204
	if (ctx.cr6.eq) goto loc_8254C204;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r31,6880
	ctx.r29.s64 = ctx.r31.s64 + 6880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r10,-18588
	ctx.r28.s64 = ctx.r10.s64 + -18588;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,1880(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1880);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254C1E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// bl 0x828c5740
	ctx.lr = 0x8254C204;
	sub_828C5740(ctx, base);
loc_8254C204:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254C210"))) PPC_WEAK_FUNC(sub_8254C210);
PPC_FUNC_IMPL(__imp__sub_8254C210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8254C218;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,6816(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8254c278
	if (!ctx.cr6.eq) goto loc_8254C278;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lis r4,11388
	ctx.r4.s64 = 746323968;
	// ori r4,r4,47258
	ctx.r4.u64 = ctx.r4.u64 | 47258;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x8254C244;
	sub_829B98F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8254c278
	if (ctx.cr0.eq) goto loc_8254C278;
	// bl 0x82437b78
	ctx.lr = 0x8254C250;
	sub_82437B78(ctx, base);
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
	ctx.lr = 0x8254C268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8254c274
	if (!ctx.cr0.eq) goto loc_8254C274;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8254C274:
	// stw r31,6816(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6816, ctx.r31.u32);
loc_8254C278:
	// lwz r11,6820(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6820);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8254c2cc
	if (!ctx.cr6.eq) goto loc_8254C2CC;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lis r4,19285
	ctx.r4.s64 = 1263861760;
	// ori r4,r4,14582
	ctx.r4.u64 = ctx.r4.u64 | 14582;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x8254C298;
	sub_829B98F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8254c2cc
	if (ctx.cr0.eq) goto loc_8254C2CC;
	// bl 0x82437b78
	ctx.lr = 0x8254C2A4;
	sub_82437B78(ctx, base);
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
	ctx.lr = 0x8254C2BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8254c2c8
	if (!ctx.cr0.eq) goto loc_8254C2C8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8254C2C8:
	// stw r31,6820(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6820, ctx.r31.u32);
loc_8254C2CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254C2D8"))) PPC_WEAK_FUNC(sub_8254C2D8);
PPC_FUNC_IMPL(__imp__sub_8254C2D8) {
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
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r31,5652
	ctx.r3.s64 = ctx.r31.s64 + 5652;
	// lwz r30,5668(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5668);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823327e0
	ctx.lr = 0x8254C30C;
	sub_823327E0(ctx, base);
	// lwz r5,5664(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r9,9237
	ctx.r9.s64 = 605356032;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// ori r9,r9,53137
	ctx.r9.u64 = ctx.r9.u64 | 53137;
	// lis r8,2015
	ctx.r8.s64 = 132055040;
	// stwx r9,r10,r5
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r9.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r7,-27852
	ctx.r7.s64 = -1825308672;
	// ori r8,r8,25833
	ctx.r8.u64 = ctx.r8.u64 | 25833;
	// ori r7,r7,40719
	ctx.r7.u64 = ctx.r7.u64 | 40719;
	// lis r6,2583
	ctx.r6.s64 = 169279488;
	// ori r6,r6,45621
	ctx.r6.u64 = ctx.r6.u64 | 45621;
	// lwz r9,5664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r10,5664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// lwz r10,5664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_8254C378"))) PPC_WEAK_FUNC(sub_8254C378);
PPC_FUNC_IMPL(__imp__sub_8254C378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8254C380;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8254c50c
	if (ctx.cr6.eq) goto loc_8254C50C;
	// lwz r11,2112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8254c50c
	if (!ctx.cr6.gt) goto loc_8254C50C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254c50c
	if (!ctx.cr0.eq) goto loc_8254C50C;
	// lwz r11,6924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6924);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254c3ec
	if (ctx.cr0.eq) goto loc_8254C3EC;
	// lwz r11,6768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6768);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8254c3ec
	if (!ctx.cr6.eq) goto loc_8254C3EC;
	// lwz r11,5356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5356);
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254c3ec
	if (ctx.cr6.eq) goto loc_8254C3EC;
	// lwz r11,6756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6756);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254c3ec
	if (!ctx.cr0.eq) goto loc_8254C3EC;
	// bl 0x825005e0
	ctx.lr = 0x8254C3EC;
	sub_825005E0(ctx, base);
loc_8254C3EC:
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// rlwinm. r9,r11,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ori r10,r10,1535
	ctx.r10.u64 = ctx.r10.u64 | 1535;
	// beq 0x8254c408
	if (ctx.cr0.eq) goto loc_8254C408;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8254c50c
	if (!ctx.cr6.eq) goto loc_8254C50C;
loc_8254C408:
	// lwz r27,6756(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6756);
	// rlwinm. r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8254c4f4
	if (ctx.cr0.eq) goto loc_8254C4F4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8254c4f4
	if (ctx.cr6.eq) goto loc_8254C4F4;
	// lwz r11,6924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6924);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254c4f4
	if (ctx.cr0.eq) goto loc_8254C4F4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8281b988
	ctx.lr = 0x8254C434;
	sub_8281B988(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8281b988
	ctx.lr = 0x8254C444;
	sub_8281B988(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x8281b988
	ctx.lr = 0x8254C484;
	sub_8281B988(ctx, base);
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82414510
	ctx.lr = 0x8254C494;
	sub_82414510(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8254c4dc
	if (ctx.cr0.eq) goto loc_8254C4DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829c1f08
	ctx.lr = 0x8254C4A4;
	sub_829C1F08(ctx, base);
	// bl 0x824d3cd0
	ctx.lr = 0x8254C4A8;
	sub_824D3CD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// beq 0x8254c4c8
	if (ctx.cr0.eq) goto loc_8254C4C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// b 0x8254c4d4
	goto loc_8254C4D4;
loc_8254C4C8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1488);
loc_8254C4D4:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254C4DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8254C4DC:
	// lwz r11,6768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6768);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8254c4f4
	if (!ctx.cr6.eq) goto loc_8254C4F4;
	// lwz r11,6756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6756);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,6756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6756, ctx.r11.u32);
loc_8254C4F4:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82504bf8
	ctx.lr = 0x8254C508;
	sub_82504BF8(ctx, base);
	// stw r27,6756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6756, ctx.r27.u32);
loc_8254C50C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254C518"))) PPC_WEAK_FUNC(sub_8254C518);
PPC_FUNC_IMPL(__imp__sub_8254C518) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6924);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8254c558
	if (ctx.cr0.eq) goto loc_8254C558;
	// lwz r10,6916(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6916);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8254c53c
	if (ctx.cr6.eq) goto loc_8254C53C;
	// lwz r10,6920(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6920);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8254c558
	if (!ctx.cr6.eq) goto loc_8254C558;
loc_8254C53C:
	// lis r12,3
	ctx.r12.s64 = 196608;
	// lwz r10,64(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// ori r12,r12,33891
	ctx.r12.u64 = ctx.r12.u64 | 33891;
	// and. r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8254c558
	if (ctx.cr0.eq) goto loc_8254C558;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,6924(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6924, ctx.r11.u32);
loc_8254C558:
	// b 0x82504e58
	sub_82504E58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254C560"))) PPC_WEAK_FUNC(sub_8254C560);
PPC_FUNC_IMPL(__imp__sub_8254C560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,6924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6924);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254c5b0
	if (ctx.cr0.eq) goto loc_8254C5B0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8254c5b0
	if (ctx.cr6.eq) goto loc_8254C5B0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254C59C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8254c5b0
	if (ctx.cr0.eq) goto loc_8254C5B0;
	// lwz r11,6924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6924);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,6924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6924, ctx.r11.u32);
loc_8254C5B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254C5C8"))) PPC_WEAK_FUNC(sub_8254C5C8);
PPC_FUNC_IMPL(__imp__sub_8254C5C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8254C5D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8254c6c8
	if (ctx.cr6.eq) goto loc_8254C6C8;
	// lwz r11,7100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8254c6c8
	if (!ctx.cr6.eq) goto loc_8254C6C8;
	// lwz r11,6872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6872);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254c6c8
	if (ctx.cr6.eq) goto loc_8254C6C8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254C60C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8254c6c8
	if (ctx.cr0.eq) goto loc_8254C6C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254C624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8254c6c8
	if (ctx.cr0.eq) goto loc_8254C6C8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254C640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addze r29,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r29.s64 = temp.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254C660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x8254c6c8
	if (!ctx.cr6.gt) goto loc_8254C6C8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lfs f13,7104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lfs f0,-32616(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32616);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8254c6c8
	if (!ctx.cr6.gt) goto loc_8254C6C8;
	// lwz r11,7180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7180);
	// addi r4,r31,7156
	ctx.r4.s64 = ctx.r31.s64 + 7156;
	// lwz r10,7172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7172);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// twllei r10,0
	// divw r8,r9,r10
	ctx.r8.s32 = ctx.r9.s32 / ctx.r10.s32;
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// subf r5,r8,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r8.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r5,7180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7180, ctx.r5.u32);
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
	// bl 0x8254ece0
	ctx.lr = 0x8254C6C8;
	sub_8254ECE0(ctx, base);
loc_8254C6C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254C6D0"))) PPC_WEAK_FUNC(sub_8254C6D0);
PPC_FUNC_IMPL(__imp__sub_8254C6D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8254C6D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x825006d0
	ctx.lr = 0x8254C6F4;
	sub_825006D0(ctx, base);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82500838
	ctx.lr = 0x8254C710;
	sub_82500838(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254C718"))) PPC_WEAK_FUNC(sub_8254C718);
PPC_FUNC_IMPL(__imp__sub_8254C718) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// lwz r11,1768(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1768);
	// lwz r3,1780(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1780);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,1768(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1768, ctx.r11.u32);
	// beq cr6,0x8254c768
	if (ctx.cr6.eq) goto loc_8254C768;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8254c768
	if (ctx.cr6.eq) goto loc_8254C768;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lbz r4,1632(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1632);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254C768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8254C768:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254C778"))) PPC_WEAK_FUNC(sub_8254C778);
PPC_FUNC_IMPL(__imp__sub_8254C778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8254C780;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82a6173c
	ctx.lr = 0x8254C788;
	__savefpr_25(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x824df418
	ctx.lr = 0x8254C794;
	sub_824DF418(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r30,-32243
	ctx.r30.s64 = -2113077248;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lfs f0,19556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19556);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r30,-27328
	ctx.r7.s64 = ctx.r30.s64 + -27328;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lfs f13,19552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19552);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r28,152(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lfs f31,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lwz r27,168(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lfs f0,17116(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 17116);
	ctx.f0.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f26,2688(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2688);
	ctx.f26.f64 = double(temp.f32);
	// lis r10,-6866
	ctx.r10.s64 = -449970176;
	// lfs f13,19548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19548);
	ctx.f13.f64 = double(temp.f32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// lfs f25,17120(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 17120);
	ctx.f25.f64 = double(temp.f32);
	// lis r4,-16601
	ctx.r4.s64 = -1087963136;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// ori r10,r10,31988
	ctx.r10.u64 = ctx.r10.u64 | 31988;
	// stfs f26,148(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stfs f25,160(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lwz r9,5352(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5352);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r31,420(r9)
	PPC_STORE_U32(ctx.r9.u32 + 420, ctx.r31.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r5,4
	ctx.r5.s64 = 4;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// ori r4,r4,62193
	ctx.r4.u64 = ctx.r4.u64 | 62193;
	// lwz r26,5352(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5352);
	// rldicr r9,r28,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r7,r27,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// bl 0x824e5590
	ctx.lr = 0x8254C850;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1740);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r10,5356(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5356, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,5356(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5356);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254C878;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f26,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lis r10,-23022
	ctx.r10.s64 = -1508769792;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lis r4,-3736
	ctx.r4.s64 = -244842496;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lfs f30,-12104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f30.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f28,17060(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17060);
	ctx.f28.f64 = double(temp.f32);
	// ori r10,r10,52136
	ctx.r10.u64 = ctx.r10.u64 | 52136;
	// lfs f29,18368(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18368);
	ctx.f29.f64 = double(temp.f32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// ori r4,r4,3838
	ctx.r4.u64 = ctx.r4.u64 | 3838;
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stfs f28,144(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,148(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f29,152(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r11,5352(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5352);
	// lwz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// ld r28,176(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r28,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r28.u64);
	// bl 0x824e5590
	ctx.lr = 0x8254C904;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1740);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r10,5360(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5360, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,5360(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5360);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254C92C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r28,-32243
	ctx.r28.s64 = -2113077248;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r27,r28,32716
	ctx.r27.s64 = ctx.r28.s64 + 32716;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lis r10,22763
	ctx.r10.s64 = 1491795968;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r3,r11,-16432
	ctx.r3.s64 = ctx.r11.s64 + -16432;
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// ori r26,r10,37495
	ctx.r26.u64 = ctx.r10.u64 | 37495;
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f27,56(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	ctx.f27.f64 = double(temp.f32);
	// stfs f27,144(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,164(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f29,168(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r25,5352(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x8254C974;
	sub_82816528(ctx, base);
	// lwz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r24,152(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r9,r24,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x8254C9B8;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1740);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254C9D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-19521
	ctx.r10.s64 = -1279328256;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r3,r11,-16424
	ctx.r3.s64 = ctx.r11.s64 + -16424;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ori r26,r10,23324
	ctx.r26.u64 = ctx.r10.u64 | 23324;
	// stfs f27,144(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f29,164(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f29,168(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r25,5352(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x8254CA14;
	sub_82816528(ctx, base);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r24,184(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// bl 0x824e5590
	ctx.lr = 0x8254CA58;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1740);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254CA7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,16364
	ctx.r10.s64 = 1072431104;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ori r26,r10,28383
	ctx.r26.u64 = ctx.r10.u64 | 28383;
	// stfs f27,144(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f29,164(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f29,168(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r25,5352(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x8254CAB8;
	sub_82816528(ctx, base);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r24,184(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x8254CAFC;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1740);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254CB1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,599
	ctx.r10.s64 = 39256064;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r3,r11,-16408
	ctx.r3.s64 = ctx.r11.s64 + -16408;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ori r26,r10,14532
	ctx.r26.u64 = ctx.r10.u64 | 14532;
	// stfs f27,144(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f29,164(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f29,168(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r25,5352(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x8254CB58;
	sub_82816528(ctx, base);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r24,184(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x8254CB9C;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1740);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254CBC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,30100
	ctx.r10.s64 = 1972633600;
	// lfs f27,204(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 204);
	ctx.f27.f64 = double(temp.f32);
	// addi r3,r11,-16400
	ctx.r3.s64 = ctx.r11.s64 + -16400;
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ori r27,r10,42004
	ctx.r27.u64 = ctx.r10.u64 | 42004;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f27,144(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f28,160(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f29,164(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f29,168(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r26,5352(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x8254CC00;
	sub_82816528(ctx, base);
	// lwz r25,184(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// bl 0x824e5590
	ctx.lr = 0x8254CC44;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1740);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254CC64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-13035
	ctx.r10.s64 = -854261760;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r3,r11,-16388
	ctx.r3.s64 = ctx.r11.s64 + -16388;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ori r27,r10,53749
	ctx.r27.u64 = ctx.r10.u64 | 53749;
	// stfs f27,144(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f28,160(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f29,164(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f29,168(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r26,5352(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x8254CCA0;
	sub_82816528(ctx, base);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r26,184(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824e5590
	ctx.lr = 0x8254CCE4;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1740);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254CD04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-11265
	ctx.r10.s64 = -738263040;
	// lfs f30,32716(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32716);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r11,-16376
	ctx.r3.s64 = ctx.r11.s64 + -16376;
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ori r28,r10,44068
	ctx.r28.u64 = ctx.r10.u64 | 44068;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f27,144(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f28,160(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f28,164(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f28,168(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r27,5352(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x8254CD44;
	sub_82816528(ctx, base);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r27,184(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// bl 0x824e5590
	ctx.lr = 0x8254CD88;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1740);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254CDAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,24284
	ctx.r10.s64 = 1591476224;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r3,r11,-16364
	ctx.r3.s64 = ctx.r11.s64 + -16364;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ori r28,r10,32798
	ctx.r28.u64 = ctx.r10.u64 | 32798;
	// stfs f27,144(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f28,160(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f28,164(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lwz r27,5352(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5352);
	// stfs f28,168(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8254CDE8;
	sub_82816528(ctx, base);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r27,184(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// bl 0x824e5590
	ctx.lr = 0x8254CE2C;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1740);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,444(r28)
	PPC_STORE_U32(ctx.r28.u32 + 444, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254CE50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lis r9,9749
	ctx.r9.s64 = 638910464;
	// lfs f30,-27328(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -27328);
	ctx.f30.f64 = double(temp.f32);
	// li r30,2
	ctx.r30.s64 = 2;
	// ori r9,r9,17317
	ctx.r9.u64 = ctx.r9.u64 | 17317;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lfs f29,19204(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19204);
	ctx.f29.f64 = double(temp.f32);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stfs f29,152(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stfs f27,160(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// ld r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// stfs f25,144(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stfs f29,148(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lis r4,32191
	ctx.r4.s64 = 2109669376;
	// stfs f26,176(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// ld r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,136
	ctx.r5.s64 = 136;
	// ori r4,r4,49034
	ctx.r4.u64 = ctx.r4.u64 | 49034;
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824e4120
	ctx.lr = 0x8254CED8;
	sub_824E4120(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r4,3332(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3332);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ld r27,176(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r3,6916(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6916, ctx.r3.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lfs f28,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f28.f64 = double(temp.f32);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// li r10,3
	ctx.r10.s64 = 3;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// std r27,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r27.u64);
	// bl 0x82331120
	ctx.lr = 0x8254CF34;
	sub_82331120(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254CF4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f25,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f29,180(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ld r7,176(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stfs f29,184(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lis r10,26669
	ctx.r10.s64 = 1747779584;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lis r4,16794
	ctx.r4.s64 = 1100611584;
	// stfs f26,160(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// ori r10,r10,58543
	ctx.r10.u64 = ctx.r10.u64 | 58543;
	// stfs f30,152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stfs f27,144(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,136
	ctx.r5.s64 = 136;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// ori r4,r4,63480
	ctx.r4.u64 = ctx.r4.u64 | 63480;
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824e4120
	ctx.lr = 0x8254CFC4;
	sub_824E4120(ctx, base);
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r3,6920(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6920, ctx.r3.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r9,0
	ctx.r9.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,3332(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3332);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82331120
	ctx.lr = 0x8254D018;
	sub_82331120(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254D030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,5356(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5356);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,2088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2088);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254D048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82a61788
	ctx.lr = 0x8254D054;
	__restfpr_25(ctx, base);
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254D058"))) PPC_WEAK_FUNC(sub_8254D058);
PPC_FUNC_IMPL(__imp__sub_8254D058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824e74f8
	ctx.lr = 0x8254D07C;
	sub_824E74F8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r11.u32);
	// stw r11,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254D0A0"))) PPC_WEAK_FUNC(sub_8254D0A0);
PPC_FUNC_IMPL(__imp__sub_8254D0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824e75d8
	ctx.lr = 0x8254D0C4;
	sub_824E75D8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r11.u32);
	// stw r11,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254D0E8"))) PPC_WEAK_FUNC(sub_8254D0E8);
PPC_FUNC_IMPL(__imp__sub_8254D0E8) {
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
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82898d18
	ctx.lr = 0x8254D114;
	sub_82898D18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7064(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7064);
	// bl 0x824fffe8
	ctx.lr = 0x8254D120;
	sub_824FFFE8(ctx, base);
	// lwz r10,6924(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6924);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,7048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7048, ctx.r11.u32);
	// beq 0x8254d188
	if (ctx.cr0.eq) goto loc_8254D188;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8254d188
	if (ctx.cr6.eq) goto loc_8254D188;
	// lwz r10,7040(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7040);
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8254d16c
	if (!ctx.cr6.gt) goto loc_8254D16C;
	// lwz r9,7036(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7036);
loc_8254D150:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8254d170
	if (ctx.cr6.eq) goto loc_8254D170;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8254d150
	if (ctx.cr6.lt) goto loc_8254D150;
loc_8254D16C:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8254D170:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8254d180
	if (ctx.cr6.eq) goto loc_8254D180;
	// stw r4,6912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6912, ctx.r4.u32);
	// b 0x8254d188
	goto loc_8254D188;
loc_8254D180:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254d3f0
	ctx.lr = 0x8254D188;
	sub_8254D3F0(ctx, base);
loc_8254D188:
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

__attribute__((alias("__imp__sub_8254D1A0"))) PPC_WEAK_FUNC(sub_8254D1A0);
PPC_FUNC_IMPL(__imp__sub_8254D1A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,7052(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7052);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,6924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6924);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r9,7040(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7040);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8254d1e8
	if (!ctx.cr6.gt) goto loc_8254D1E8;
	// lwz r10,7036(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7036);
loc_8254D1CC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8254d1ec
	if (ctx.cr6.eq) goto loc_8254D1EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8254d1cc
	if (ctx.cr6.lt) goto loc_8254D1CC;
loc_8254D1E8:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8254D1EC:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x8254d3f0
	sub_8254D3F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254D1F8"))) PPC_WEAK_FUNC(sub_8254D1F8);
PPC_FUNC_IMPL(__imp__sub_8254D1F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254D200"))) PPC_WEAK_FUNC(sub_8254D200);
PPC_FUNC_IMPL(__imp__sub_8254D200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x824e7838
	ctx.lr = 0x8254D218;
	sub_824E7838(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7048, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254D238"))) PPC_WEAK_FUNC(sub_8254D238);
PPC_FUNC_IMPL(__imp__sub_8254D238) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// bl 0x824e7a88
	ctx.lr = 0x8254D24C;
	sub_824E7A88(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,7048(r7)
	PPC_STORE_U32(ctx.r7.u32 + 7048, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254D268"))) PPC_WEAK_FUNC(sub_8254D268);
PPC_FUNC_IMPL(__imp__sub_8254D268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8254D270;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,10548(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lfs f31,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82439c68
	ctx.lr = 0x8254D294;
	sub_82439C68(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8254d2f4
	if (!ctx.cr6.gt) goto loc_8254D2F4;
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8254D2A8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254d2e8
	if (ctx.cr6.eq) goto loc_8254D2E8;
	// lwz r11,2112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8254d2e8
	if (!ctx.cr6.gt) goto loc_8254D2E8;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254d2e8
	if (!ctx.cr0.eq) goto loc_8254D2E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1568);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254D2DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x8254d2e8
	if (!ctx.cr6.gt) goto loc_8254D2E8;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
loc_8254D2E8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8254d2a8
	if (!ctx.cr0.eq) goto loc_8254D2A8;
loc_8254D2F4:
	// lfs f0,6960(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 6960);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x8239d768
	ctx.lr = 0x8254D304;
	sub_8239D768(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254D318"))) PPC_WEAK_FUNC(sub_8254D318);
PPC_FUNC_IMPL(__imp__sub_8254D318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8254D320;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,6992
	ctx.r30.s64 = ctx.r31.s64 + 6992;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,6992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6992);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254D348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,7024
	ctx.r3.s64 = ctx.r31.s64 + 7024;
	// bl 0x8254f1a8
	ctx.lr = 0x8254D354;
	sub_8254F1A8(ctx, base);
	// lwz r11,6992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6992);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254D368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,1608(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8254d394
	if (ctx.cr6.eq) goto loc_8254D394;
	// bl 0x823b7c50
	ctx.lr = 0x8254D378;
	sub_823B7C50(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254D390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8254d398
	goto loc_8254D398;
loc_8254D394:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254D398:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254d3e4
	if (ctx.cr6.eq) goto loc_8254D3E4;
	// lwz r11,6912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6912);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8254d3c0
	if (!ctx.cr6.eq) goto loc_8254D3C0;
	// lwz r11,7048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7048);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8254d3d8
	if (!ctx.cr6.eq) goto loc_8254D3D8;
	// bl 0x82549580
	ctx.lr = 0x8254D3BC;
	sub_82549580(ctx, base);
	// b 0x8254d3e4
	goto loc_8254D3E4;
loc_8254D3C0:
	// lwz r11,7052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7052);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8254d3e4
	if (!ctx.cr6.eq) goto loc_8254D3E4;
	// lwz r11,7048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7048);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254d3e4
	if (ctx.cr6.eq) goto loc_8254D3E4;
loc_8254D3D8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254d3f0
	ctx.lr = 0x8254D3E4;
	sub_8254D3F0(ctx, base);
loc_8254D3E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254D3F0"))) PPC_WEAK_FUNC(sub_8254D3F0);
PPC_FUNC_IMPL(__imp__sub_8254D3F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8254D3F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,1608(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1608);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8254d42c
	if (ctx.cr6.eq) goto loc_8254D42C;
	// bl 0x823b7c50
	ctx.lr = 0x8254D410;
	sub_823B7C50(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254D428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8254d430
	goto loc_8254D430;
loc_8254D42C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254D430:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254d4d0
	if (ctx.cr6.eq) goto loc_8254D4D0;
	// bl 0x825496a8
	ctx.lr = 0x8254D43C;
	sub_825496A8(ctx, base);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8254d4d0
	if (!ctx.cr6.eq) goto loc_8254D4D0;
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x8254d4d0
	if (!ctx.cr6.lt) goto loc_8254D4D0;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x82833108
	ctx.lr = 0x8254D464;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8254d4c0
	if (ctx.cr0.eq) goto loc_8254D4C0;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8254d490
	if (ctx.cr6.eq) goto loc_8254D490;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8254D484;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8254D488;
	sub_82409C40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8254d494
	goto loc_8254D494;
loc_8254D490:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8254D494:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f1c68
	ctx.lr = 0x8254D4A0;
	sub_827F1C68(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r10,-24888
	ctx.r10.s64 = ctx.r10.s64 + -24888;
	// lfs f0,-28792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28792);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// b 0x8254d4c4
	goto loc_8254D4C4;
loc_8254D4C0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8254D4C4:
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8254D4D0;
	sub_82833A30(ctx, base);
loc_8254D4D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254D4D8"))) PPC_WEAK_FUNC(sub_8254D4D8);
PPC_FUNC_IMPL(__imp__sub_8254D4D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,7064(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7064);
	// b 0x824ffc38
	sub_824FFC38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254D4E0"))) PPC_WEAK_FUNC(sub_8254D4E0);
PPC_FUNC_IMPL(__imp__sub_8254D4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r4,7064(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7064);
	// bl 0x824fffe8
	ctx.lr = 0x8254D4FC;
	sub_824FFFE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e9180
	ctx.lr = 0x8254D504;
	sub_824E9180(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254D518"))) PPC_WEAK_FUNC(sub_8254D518);
PPC_FUNC_IMPL(__imp__sub_8254D518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8254D520;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82a61728
	ctx.lr = 0x8254D528;
	__savefpr_20(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r11,6924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6924);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8254d550
	if (ctx.cr0.eq) goto loc_8254D550;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254d550
	if (!ctx.cr0.eq) goto loc_8254D550;
	// li r25,2
	ctx.r25.s64 = 2;
	// b 0x8254d92c
	goto loc_8254D92C;
loc_8254D550:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824de9d8
	ctx.lr = 0x8254D558;
	sub_824DE9D8(ctx, base);
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r9,664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// stw r9,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r9.u32);
	// bl 0x82817bb8
	ctx.lr = 0x8254D580;
	sub_82817BB8(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f12,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f13,f0,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x8254d5d8
	if (!ctx.cr6.eq) goto loc_8254D5D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// b 0x8254d614
	goto loc_8254D614;
loc_8254D5D8:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f11,16668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x8254d5f8
	if (!ctx.cr6.lt) goto loc_8254D5F8;
	// fmr f13,f9
	ctx.f13.f64 = ctx.f9.f64;
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
	// fmr f10,f9
	ctx.f10.f64 = ctx.f9.f64;
	// b 0x8254d614
	goto loc_8254D614;
loc_8254D5F8:
	// fsqrts f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmuls f13,f0,f8
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f12,f11,f8
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmuls f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
loc_8254D614:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// fmuls f7,f12,f9
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// lfs f11,24000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f6,f13,f11
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f0,23752(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23752);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f12,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f31,f10,f0
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmsubs f9,f13,f9,f7
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 - ctx.f7.f64));
	// fsubs f10,f12,f8
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f29,f12,f0
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f29,100(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f13,f8,f6
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// fsubs f12,f5,f8
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// fmuls f28,f11,f0
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f28,200(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fmuls f25,f6,f0
	ctx.f25.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f25,192(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmuls f24,f5,f0
	ctx.f24.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f24,196(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fmuls f27,f10,f0
	ctx.f27.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f27,144(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f26,f7,f0
	ctx.f26.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f26,148(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f21,f9,f0
	ctx.f21.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f21,152(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f20,f9,f0
	ctx.f20.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f20,120(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f22,f13,f0
	ctx.f22.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f22,116(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f23,f12,f0
	ctx.f23.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f23,112(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// beq cr6,0x8254d768
	if (ctx.cr6.eq) goto loc_8254D768;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// beq cr6,0x8254d734
	if (ctx.cr6.eq) goto loc_8254D734;
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 3, ctx.xer);
	// beq cr6,0x8254d700
	if (ctx.cr6.eq) goto loc_8254D700;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// bne cr6,0x8254d7a0
	if (!ctx.cr6.eq) goto loc_8254D7A0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// bl 0x82a4cd78
	ctx.lr = 0x8254D6D8;
	sub_82A4CD78(ctx, base);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254d6ec
	if (ctx.cr0.eq) goto loc_8254D6EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x8254d6f4
	goto loc_8254D6F4;
loc_8254D6EC:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8254D6F4:
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8254d798
	goto loc_8254D798;
loc_8254D700:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// bl 0x82a4cd78
	ctx.lr = 0x8254D70C;
	sub_82A4CD78(ctx, base);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254d720
	if (ctx.cr0.eq) goto loc_8254D720;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x8254d728
	goto loc_8254D728;
loc_8254D720:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8254D728:
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8254d798
	goto loc_8254D798;
loc_8254D734:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// bl 0x82a4cd78
	ctx.lr = 0x8254D740;
	sub_82A4CD78(ctx, base);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254d754
	if (ctx.cr0.eq) goto loc_8254D754;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x8254d75c
	goto loc_8254D75C;
loc_8254D754:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,3
	ctx.r10.s64 = 3;
loc_8254D75C:
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8254d798
	goto loc_8254D798;
loc_8254D768:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// bl 0x82a4cd78
	ctx.lr = 0x8254D774;
	sub_82A4CD78(ctx, base);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254d788
	if (ctx.cr0.eq) goto loc_8254D788;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x8254d790
	goto loc_8254D790;
loc_8254D788:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,3
	ctx.r10.s64 = 3;
loc_8254D790:
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
loc_8254D798:
	// stw r10,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r10.u32);
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
loc_8254D7A0:
	// lwz r28,216(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r29,212(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r26,r1,224
	ctx.r26.s64 = ctx.r1.s64 + 224;
	// lwz r30,208(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
loc_8254D7B4:
	// lwz r27,0(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x8254d8ac
	if (ctx.cr6.eq) goto loc_8254D8AC;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x8254d868
	if (ctx.cr6.eq) goto loc_8254D868;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// beq cr6,0x8254d81c
	if (ctx.cr6.eq) goto loc_8254D81C;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// bne cr6,0x8254d8f4
	if (!ctx.cr6.eq) goto loc_8254D8F4;
	// lfs f0,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// fadds f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f23.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f0,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// fadds f0,f0,f22
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f22.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f0,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// fadds f0,f0,f20
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f20.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r28,120(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x8254d8ec
	goto loc_8254D8EC;
loc_8254D81C:
	// lfs f13,628(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// lwz r30,144(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// fadds f13,f13,f21
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f21.f64));
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lfs f0,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f26.f64));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lfs f0,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lwz r29,148(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r28,152(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// b 0x8254d8f4
	goto loc_8254D8F4;
loc_8254D868:
	// lfs f0,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lfs f0,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lfs f13,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lwz r28,104(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// fadds f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x8254d8ec
	goto loc_8254D8EC;
loc_8254D8AC:
	// lfs f12,628(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lwz r30,192(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// fadds f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f28.f64));
	// stfs f12,216(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// lfs f0,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lwz r29,196(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lfs f13,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f25.f64));
	// fadds f13,f13,f24
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f24.f64));
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f13,212(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// lwz r28,200(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_8254D8EC:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8254D8F4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824dec68
	ctx.lr = 0x8254D900;
	sub_824DEC68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8254d91c
	if (!ctx.cr0.eq) goto loc_8254D91C;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 4, ctx.xer);
	// blt cr6,0x8254d7b4
	if (ctx.cr6.lt) goto loc_8254D7B4;
	// b 0x8254d92c
	goto loc_8254D92C;
loc_8254D91C:
	// stw r30,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r30.u32);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// stw r29,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r29.u32);
	// stw r28,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r28.u32);
loc_8254D92C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82a61774
	ctx.lr = 0x8254D93C;
	__restfpr_20(ctx, base);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254D940"))) PPC_WEAK_FUNC(sub_8254D940);
PPC_FUNC_IMPL(__imp__sub_8254D940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8254D948;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,6992
	ctx.r30.s64 = ctx.r31.s64 + 6992;
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,6992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6992);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254D970;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,7024
	ctx.r31.s64 = ctx.r31.s64 + 7024;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8254d9a4
	if (!ctx.cr6.gt) goto loc_8254D9A4;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_8254D988:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x8254d9b0
	if (ctx.cr6.eq) goto loc_8254D9B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8254d988
	if (ctx.cr6.lt) goto loc_8254D988;
loc_8254D9A4:
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x8254D9B0;
	sub_82410060(ctx, base);
loc_8254D9B0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8254d9d4
	if (ctx.cr6.eq) goto loc_8254D9D4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x8254D9D4;
	sub_82332C38(ctx, base);
loc_8254D9D4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254D9E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254D9F0"))) PPC_WEAK_FUNC(sub_8254D9F0);
PPC_FUNC_IMPL(__imp__sub_8254D9F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8254D9F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r5.u64);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// std r6,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r6.u64);
	// addi r30,r31,6992
	ctx.r30.s64 = ctx.r31.s64 + 6992;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,6992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6992);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254DA28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,7024
	ctx.r4.s64 = ctx.r31.s64 + 7024;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82873b58
	ctx.lr = 0x8254DA34;
	sub_82873B58(ctx, base);
	// lwz r11,6992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6992);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254DA48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// ble cr6,0x8254da6c
	if (!ctx.cr6.gt) goto loc_8254DA6C;
	// lwz r11,6912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6912);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8254f1a8
	ctx.lr = 0x8254DA68;
	sub_8254F1A8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_8254DA6C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8254db0c
	if (ctx.cr6.eq) goto loc_8254DB0C;
	// bl 0x82a4cd78
	ctx.lr = 0x8254DA78;
	sub_82A4CD78(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// twllei r30,0
	// divw r7,r8,r30
	ctx.r7.s32 = ctx.r8.s32 / ctx.r30.s32;
	// rotlwi r9,r8,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// mullw r7,r7,r30
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// subf r11,r7,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r7.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// andc r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 & ~ctx.r9.u64;
	// twlgei r9,-1
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x829b9720
	ctx.lr = 0x8254DAB8;
	sub_829B9720(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x8254DABC;
	sub_82416348(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8254db0c
	if (ctx.cr0.eq) goto loc_8254DB0C;
	// lwz r11,620(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	// lfs f0,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lfs f11,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,624(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// lfs f11,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,628(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lfs f11,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f13,4(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f12,8(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
loc_8254DB0C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239d768
	ctx.lr = 0x8254DB14;
	sub_8239D768(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254DB20"))) PPC_WEAK_FUNC(sub_8254DB20);
PPC_FUNC_IMPL(__imp__sub_8254DB20) {
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
	// lwz r31,1780(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1780);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8254dbc4
	if (ctx.cr6.eq) goto loc_8254DBC4;
	// bl 0x823b8e78
	ctx.lr = 0x8254DB48;
	sub_823B8E78(ctx, base);
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
	ctx.lr = 0x8254DB60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8254db6c
	if (!ctx.cr0.eq) goto loc_8254DB6C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8254DB6C:
	// lwz r11,6908(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254db80
	if (ctx.cr6.eq) goto loc_8254DB80;
	// lfs f0,6980(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6980);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8254db84
	goto loc_8254DB84;
loc_8254DB80:
	// lfs f0,6976(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6976);
	ctx.f0.f64 = double(temp.f32);
loc_8254DB84:
	// stfs f0,3392(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3392, temp.u32);
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254dbc4
	if (ctx.cr6.eq) goto loc_8254DBC4;
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254dbc4
	if (ctx.cr6.eq) goto loc_8254DBC4;
	// lwz r11,6908(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6908);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x828a30d8
	ctx.lr = 0x8254DBB0;
	sub_828A30D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1672);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254DBC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8254DBC4:
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

__attribute__((alias("__imp__sub_8254DBE0"))) PPC_WEAK_FUNC(sub_8254DBE0);
PPC_FUNC_IMPL(__imp__sub_8254DBE0) {
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
	// lwz r31,1780(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1780);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8254dc84
	if (ctx.cr6.eq) goto loc_8254DC84;
	// bl 0x823b8e78
	ctx.lr = 0x8254DC08;
	sub_823B8E78(ctx, base);
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
	ctx.lr = 0x8254DC20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8254dc2c
	if (!ctx.cr0.eq) goto loc_8254DC2C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8254DC2C:
	// lwz r11,6908(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254dc40
	if (ctx.cr6.eq) goto loc_8254DC40;
	// lfs f0,6980(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6980);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8254dc44
	goto loc_8254DC44;
loc_8254DC40:
	// lfs f0,6976(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6976);
	ctx.f0.f64 = double(temp.f32);
loc_8254DC44:
	// stfs f0,3392(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3392, temp.u32);
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254dc84
	if (ctx.cr6.eq) goto loc_8254DC84;
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254dc84
	if (ctx.cr6.eq) goto loc_8254DC84;
	// lwz r11,6908(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6908);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x828a30d8
	ctx.lr = 0x8254DC70;
	sub_828A30D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1676(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1676);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254DC84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8254DC84:
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

__attribute__((alias("__imp__sub_8254DCA0"))) PPC_WEAK_FUNC(sub_8254DCA0);
PPC_FUNC_IMPL(__imp__sub_8254DCA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,1780(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1780);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8254dce4
	if (ctx.cr6.eq) goto loc_8254DCE4;
	// bl 0x823b8e78
	ctx.lr = 0x8254DCC0;
	sub_823B8E78(ctx, base);
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
	ctx.lr = 0x8254DCD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8254dce8
	if (!ctx.cr0.eq) goto loc_8254DCE8;
loc_8254DCE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254DCE8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254dd18
	if (ctx.cr6.eq) goto loc_8254DD18;
	// lwz r11,3284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254dd18
	if (ctx.cr6.eq) goto loc_8254DD18;
	// lwz r11,3288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254dd18
	if (ctx.cr6.eq) goto loc_8254DD18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1680(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1680);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254DD18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8254DD18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254DD30"))) PPC_WEAK_FUNC(sub_8254DD30);
PPC_FUNC_IMPL(__imp__sub_8254DD30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,1780(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1780);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8254dd74
	if (ctx.cr6.eq) goto loc_8254DD74;
	// bl 0x823b8e78
	ctx.lr = 0x8254DD50;
	sub_823B8E78(ctx, base);
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
	ctx.lr = 0x8254DD68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8254dd78
	if (!ctx.cr0.eq) goto loc_8254DD78;
loc_8254DD74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254DD78:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254dda8
	if (ctx.cr6.eq) goto loc_8254DDA8;
	// lwz r11,3284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254dda8
	if (ctx.cr6.eq) goto loc_8254DDA8;
	// lwz r11,3288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254dda8
	if (ctx.cr6.eq) goto loc_8254DDA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1684);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254DDA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8254DDA8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254DDC0"))) PPC_WEAK_FUNC(sub_8254DDC0);
PPC_FUNC_IMPL(__imp__sub_8254DDC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,6916(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6916);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8281d650
	sub_8281D650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254DDD0"))) PPC_WEAK_FUNC(sub_8254DDD0);
PPC_FUNC_IMPL(__imp__sub_8254DDD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6916(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6916);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254DDE8"))) PPC_WEAK_FUNC(sub_8254DDE8);
PPC_FUNC_IMPL(__imp__sub_8254DDE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,6920(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6920);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8281d650
	sub_8281D650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254DDF8"))) PPC_WEAK_FUNC(sub_8254DDF8);
PPC_FUNC_IMPL(__imp__sub_8254DDF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6920(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6920);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254DE10"))) PPC_WEAK_FUNC(sub_8254DE10);
PPC_FUNC_IMPL(__imp__sub_8254DE10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8254DE18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8254dee8
	if (ctx.cr6.eq) goto loc_8254DEE8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824fe208
	ctx.lr = 0x8254DE3C;
	sub_824FE208(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8254de98
	if (ctx.cr0.eq) goto loc_8254DE98;
	// lwz r11,3284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254de5c
	if (ctx.cr6.eq) goto loc_8254DE5C;
	// lwz r11,3288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8254de98
	if (!ctx.cr6.eq) goto loc_8254DE98;
loc_8254DE5C:
	// stw r3,7220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7220, ctx.r3.u32);
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// stw r28,7216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7216, ctx.r28.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-8448
	ctx.r10.s64 = ctx.r10.s64 + -8448;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lfs f1,20416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20416);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8254f0b0
	ctx.lr = 0x8254DE94;
	sub_8254F0B0(ctx, base);
	// b 0x8254def8
	goto loc_8254DEF8;
loc_8254DE98:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-8448
	ctx.r4.s64 = ctx.r11.s64 + -8448;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254DEB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8254dee8
	if (ctx.cr0.eq) goto loc_8254DEE8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-8448
	ctx.r4.s64 = ctx.r11.s64 + -8448;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254DEDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7216, ctx.r11.u32);
	// stw r11,7220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7220, ctx.r11.u32);
loc_8254DEE8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82897330
	ctx.lr = 0x8254DEF8;
	sub_82897330(ctx, base);
loc_8254DEF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254DF00"))) PPC_WEAK_FUNC(sub_8254DF00);
PPC_FUNC_IMPL(__imp__sub_8254DF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r5,7220(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7220);
	// lwz r11,3284(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 3284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254df60
	if (ctx.cr6.eq) goto loc_8254DF60;
	// lwz r11,3288(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 3288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254df60
	if (ctx.cr6.eq) goto loc_8254DF60;
	// lwz r4,7216(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7216);
	// bl 0x82897330
	ctx.lr = 0x8254DF38;
	sub_82897330(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-8448
	ctx.r4.s64 = ctx.r11.s64 + -8448;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254DF54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7216, ctx.r11.u32);
	// stw r11,7220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7220, ctx.r11.u32);
loc_8254DF60:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254DF78"))) PPC_WEAK_FUNC(sub_8254DF78);
PPC_FUNC_IMPL(__imp__sub_8254DF78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x825008f0
	ctx.lr = 0x8254DF90;
	sub_825008F0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r31,6660
	ctx.r4.s64 = ctx.r31.s64 + 6660;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18544
	ctx.r5.s64 = ctx.r11.s64 + -18544;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x824f9968
	ctx.lr = 0x8254DFAC;
	sub_824F9968(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r31,6512
	ctx.r4.s64 = ctx.r31.s64 + 6512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18500
	ctx.r5.s64 = ctx.r11.s64 + -18500;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824115b8
	ctx.lr = 0x8254DFC8;
	sub_824115B8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r31,6792
	ctx.r4.s64 = ctx.r31.s64 + 6792;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18460
	ctx.r5.s64 = ctx.r11.s64 + -18460;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824115b8
	ctx.lr = 0x8254DFE4;
	sub_824115B8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r31,6808
	ctx.r4.s64 = ctx.r31.s64 + 6808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-18424
	ctx.r5.s64 = ctx.r11.s64 + -18424;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824f5de8
	ctx.lr = 0x8254E000;
	sub_824F5DE8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r31,6804
	ctx.r4.s64 = ctx.r31.s64 + 6804;
	// addi r5,r11,-18388
	ctx.r5.s64 = ctx.r11.s64 + -18388;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416240
	ctx.lr = 0x8254E01C;
	sub_82416240(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254E030"))) PPC_WEAK_FUNC(sub_8254E030);
PPC_FUNC_IMPL(__imp__sub_8254E030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8254E038;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x825009c8
	ctx.lr = 0x8254E048;
	sub_825009C8(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8254e130
	if (!ctx.cr6.eq) goto loc_8254E130;
	// addi r11,r31,7056
	ctx.r11.s64 = ctx.r31.s64 + 7056;
	// addi r30,r31,424
	ctx.r30.s64 = ctx.r31.s64 + 424;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8254E070;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,6908
	ctx.r10.s64 = ctx.r31.s64 + 6908;
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
	ctx.lr = 0x8254E090;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,7188
	ctx.r10.s64 = ctx.r31.s64 + 7188;
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
	ctx.lr = 0x8254E0B0;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,7204
	ctx.r10.s64 = ctx.r31.s64 + 7204;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x82838fd0
	ctx.lr = 0x8254E0D0;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r11,r11,1799
	ctx.r11.s64 = ctx.r11.s64 + 1799;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254e130
	if (ctx.cr6.eq) goto loc_8254E130;
	// addi r11,r31,7200
	ctx.r11.s64 = ctx.r31.s64 + 7200;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8254E10C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r11,r11,1799
	ctx.r11.s64 = ctx.r11.s64 + 1799;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_8254E130:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254E140"))) PPC_WEAK_FUNC(sub_8254E140);
PPC_FUNC_IMPL(__imp__sub_8254E140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8254E148;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x82500ac0
	ctx.lr = 0x8254E15C;
	sub_82500AC0(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8254e384
	if (!ctx.cr6.eq) goto loc_8254E384;
	// addi r27,r31,7056
	ctx.r27.s64 = ctx.r31.s64 + 7056;
	// addi r29,r31,424
	ctx.r29.s64 = ctx.r31.s64 + 424;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8254E184;
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
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254E1A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254E1BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8254e1e0
	if (!ctx.cr0.eq) goto loc_8254E1E0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8254E1D4;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_8254E1E0:
	// addi r27,r31,6908
	ctx.r27.s64 = ctx.r31.s64 + 6908;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8254E1F4;
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
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254E218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254E22C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8254e250
	if (!ctx.cr0.eq) goto loc_8254E250;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8254E244;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_8254E250:
	// addi r27,r31,7188
	ctx.r27.s64 = ctx.r31.s64 + 7188;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8254E264;
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
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254E288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254E29C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8254e2c0
	if (!ctx.cr0.eq) goto loc_8254E2C0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8254E2B4;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_8254E2C0:
	// addi r27,r31,7204
	ctx.r27.s64 = ctx.r31.s64 + 7204;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8254E2D4;
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
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254E2F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254E30C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8254e330
	if (!ctx.cr0.eq) goto loc_8254E330;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8254E324;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_8254E330:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r11,r11,1799
	ctx.r11.s64 = ctx.r11.s64 + 1799;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254e384
	if (ctx.cr6.eq) goto loc_8254E384;
	// addi r11,r31,7200
	ctx.r11.s64 = ctx.r31.s64 + 7200;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8254E360;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r11,r11,1799
	ctx.r11.s64 = ctx.r11.s64 + 1799;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_8254E384:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254E390"))) PPC_WEAK_FUNC(sub_8254E390);
PPC_FUNC_IMPL(__imp__sub_8254E390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8254E398;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82505418
	ctx.lr = 0x8254E3A8;
	sub_82505418(ctx, base);
	// lis r11,-26943
	ctx.r11.s64 = -1765736448;
	// ori r11,r11,53741
	ctx.r11.u64 = ctx.r11.u64 | 53741;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8254e3d8
	if (!ctx.cr6.eq) goto loc_8254E3D8;
	// lwz r11,7056(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7056);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254e3cc
	if (ctx.cr6.eq) goto loc_8254E3CC;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8254e3d0
	goto loc_8254E3D0;
loc_8254E3CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8254E3D0:
	// stw r11,7052(r28)
	PPC_STORE_U32(ctx.r28.u32 + 7052, ctx.r11.u32);
	// b 0x8254e4b8
	goto loc_8254E4B8;
loc_8254E3D8:
	// lis r11,-907
	ctx.r11.s64 = -59441152;
	// ori r11,r11,22875
	ctx.r11.u64 = ctx.r11.u64 | 22875;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8254e4b8
	if (!ctx.cr6.eq) goto loc_8254E4B8;
	// lwz r11,7200(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254e4b8
	if (ctx.cr6.eq) goto loc_8254E4B8;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8254e41c
	if (ctx.cr6.eq) goto loc_8254E41C;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8254E410;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8254E414;
	sub_82409C40(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// b 0x8254e420
	goto loc_8254E420;
loc_8254E41C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254E420:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254e4b8
	if (ctx.cr6.eq) goto loc_8254E4B8;
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8254e444
	if (ctx.cr6.eq) goto loc_8254E444;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8254E43C;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8254E440;
	sub_82409C40(ctx, base);
	// b 0x8254e448
	goto loc_8254E448;
loc_8254E444:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254E448:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254e458
	if (ctx.cr6.eq) goto loc_8254E458;
	// lwz r30,80(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x8254e45c
	goto loc_8254E45C;
loc_8254E458:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8254E45C:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82833108
	ctx.lr = 0x8254E464;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8254e4a8
	if (ctx.cr0.eq) goto loc_8254E4A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,80(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// bl 0x82833180
	ctx.lr = 0x8254E478;
	sub_82833180(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// addi r11,r11,-19280
	ctx.r11.s64 = ctx.r11.s64 + -19280;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// b 0x8254e4ac
	goto loc_8254E4AC;
loc_8254E4A8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8254E4AC:
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8254E4B8;
	sub_82833A30(ctx, base);
loc_8254E4B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254E4C0"))) PPC_WEAK_FUNC(sub_8254E4C0);
PPC_FUNC_IMPL(__imp__sub_8254E4C0) {
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
	// lwz r11,716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// lwz r10,6820(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6820);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8254e528
	if (!ctx.cr6.eq) goto loc_8254E528;
	// lwz r11,6924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6924);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254e528
	if (!ctx.cr0.eq) goto loc_8254E528;
	// lfs f0,6876(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6876);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f13,6876(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6876, temp.u32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8254e5e4
	if (ctx.cr6.gt) goto loc_8254E5E4;
	// lwz r11,6892(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6892);
	// li r10,4
	ctx.r10.s64 = 4;
	// stfs f0,6876(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6876, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,6900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6900, ctx.r10.u32);
	// b 0x8254e5b0
	goto loc_8254E5B0;
loc_8254E528:
	// lwz r11,6860(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6860);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8254e5e4
	if (!ctx.cr6.eq) goto loc_8254E5E4;
	// lwz r11,6848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6848);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8254e580
	if (!ctx.cr6.gt) goto loc_8254E580;
	// lwz r11,6868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6868);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254e558
	if (ctx.cr6.eq) goto loc_8254E558;
	// lwz r11,6852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254e5e4
	if (ctx.cr6.eq) goto loc_8254E5E4;
loc_8254E558:
	// lfs f0,6876(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6876);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f13,6876(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6876, temp.u32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8254e5e4
	if (ctx.cr6.gt) goto loc_8254E5E4;
	// lwz r11,6808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6808);
	// stfs f0,6876(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6876, temp.u32);
	// b 0x8254e5a4
	goto loc_8254E5A4;
loc_8254E580:
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lwz r11,6864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6864);
	// lwz r9,6904(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6904);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// lfs f0,30996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6876(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6876, temp.u32);
	// beq cr6,0x8254e5e4
	if (ctx.cr6.eq) goto loc_8254E5E4;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8254e5e4
	if (ctx.cr6.eq) goto loc_8254E5E4;
loc_8254E5A4:
	// lwz r10,6892(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6892);
	// stw r11,6900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6900, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_8254E5B0:
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r30,6896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6896, ctx.r30.u32);
	// bne cr6,0x8254e5e4
	if (!ctx.cr6.eq) goto loc_8254E5E4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x8254E5CC;
	sub_8233A258(ctx, base);
	// lis r4,11267
	ctx.r4.s64 = 738394112;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,6820(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6820);
	// ori r4,r4,12607
	ctx.r4.u64 = ctx.r4.u64 | 12607;
	// bl 0x829c3740
	ctx.lr = 0x8254E5E0;
	sub_829C3740(ctx, base);
	// stw r30,6892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6892, ctx.r30.u32);
loc_8254E5E4:
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

__attribute__((alias("__imp__sub_8254E600"))) PPC_WEAK_FUNC(sub_8254E600);
PPC_FUNC_IMPL(__imp__sub_8254E600) {
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
	// lwz r11,6820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6820);
	// lfs f0,6888(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6888);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,6900(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6900);
	// lwz r9,6836(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6836);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,628(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// lwz r6,620(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// lwz r5,624(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// stfs f0,6884(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6884, temp.u32);
	// lfsx f0,r8,r9
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// beq cr6,0x8254e754
	if (ctx.cr6.eq) goto loc_8254E754;
	// fsubs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x8254e680
	if (!ctx.cr6.lt) goto loc_8254E680;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,16640(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16640);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x8254e694
	if (!ctx.cr6.lt) goto loc_8254E694;
	// b 0x8254e690
	goto loc_8254E690;
loc_8254E680:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,-32420(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32420);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x8254e694
	if (!ctx.cr6.gt) goto loc_8254E694;
loc_8254E690:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64;
loc_8254E694:
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lfs f0,20416(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20416);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x8254e6b4
	if (!ctx.cr6.lt) goto loc_8254E6B4;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,17548(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17548);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x8254e6b8
	if (ctx.cr6.gt) goto loc_8254E6B8;
loc_8254E6B4:
	// fmuls f31,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f1.f64));
loc_8254E6B8:
	// lwz r10,960(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8254e748
	if (!ctx.cr6.eq) goto loc_8254E748;
	// lfs f0,628(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// li r3,56
	ctx.r3.s64 = 56;
	// lfs f13,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f12,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82833108
	ctx.lr = 0x8254E6E8;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8254e734
	if (ctx.cr0.eq) goto loc_8254E734;
	// lwz r11,6820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6820);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8254e704
	if (ctx.cr0.eq) goto loc_8254E704;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8254e708
	goto loc_8254E708;
loc_8254E704:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8254E708:
	// lwz r7,664(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rldicr r5,r6,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r6,656(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 656);
	// bl 0x8254f228
	ctx.lr = 0x8254E72C;
	sub_8254F228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8254e738
	goto loc_8254E738;
loc_8254E734:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8254E738:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8254E748;
	sub_82833A30(ctx, base);
loc_8254E748:
	// fabs f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// stfs f0,6888(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6888, temp.u32);
	// b 0x8254e76c
	goto loc_8254E76C;
loc_8254E754:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r10,6904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6904, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,6896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6896, ctx.r10.u32);
	// lfs f0,30996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6876(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6876, temp.u32);
loc_8254E76C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,6888(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6888);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8254e7b8
	if (!ctx.cr6.lt) goto loc_8254E7B8;
	// lwz r11,6892(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6892);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254e7b8
	if (ctx.cr6.eq) goto loc_8254E7B8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x8254E79C;
	sub_8233A258(ctx, base);
	// lis r4,4856
	ctx.r4.s64 = 318242816;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,6820(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6820);
	// ori r4,r4,3405
	ctx.r4.u64 = ctx.r4.u64 | 3405;
	// bl 0x829c3740
	ctx.lr = 0x8254E7B0;
	sub_829C3740(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6892, ctx.r11.u32);
loc_8254E7B8:
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

__attribute__((alias("__imp__sub_8254E7D0"))) PPC_WEAK_FUNC(sub_8254E7D0);
PPC_FUNC_IMPL(__imp__sub_8254E7D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8254E7D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,6888(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 6888);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8254e89c
	if (ctx.cr6.lt) goto loc_8254E89C;
	// lwz r11,7240(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7240);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8254e918
	if (!ctx.cr6.gt) goto loc_8254E918;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
loc_8254E810:
	// lwz r10,7236(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7236);
	// lwzx r31,r28,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// lwz r10,1472(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8254e884
	if (!ctx.cr6.eq) goto loc_8254E884;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r10.u32);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8254e840
	if (ctx.cr6.eq) goto loc_8254E840;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8254e858
	if (!ctx.cr6.eq) goto loc_8254E858;
loc_8254E840:
	// lwz r3,836(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 836);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254e858
	if (ctx.cr6.eq) goto loc_8254E858;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82914b18
	ctx.lr = 0x8254E854;
	sub_82914B18(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
loc_8254E858:
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8254e86c
	if (ctx.cr6.eq) goto loc_8254E86C;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8254e884
	if (!ctx.cr6.eq) goto loc_8254E884;
loc_8254E86C:
	// lwz r3,836(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 836);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254e884
	if (ctx.cr6.eq) goto loc_8254E884;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82914b18
	ctx.lr = 0x8254E880;
	sub_82914B18(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
loc_8254E884:
	// lwz r10,7240(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7240);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8254e810
	if (ctx.cr6.lt) goto loc_8254E810;
	// b 0x8254e918
	goto loc_8254E918;
loc_8254E89C:
	// lwz r11,7236(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7236);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,1472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254e918
	if (ctx.cr6.eq) goto loc_8254E918;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1472(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1472, ctx.r11.u32);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8254e8d8
	if (ctx.cr6.eq) goto loc_8254E8D8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8254e8f0
	if (!ctx.cr6.eq) goto loc_8254E8F0;
loc_8254E8D8:
	// lwz r3,836(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 836);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254e8f0
	if (ctx.cr6.eq) goto loc_8254E8F0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82914b18
	ctx.lr = 0x8254E8EC;
	sub_82914B18(ctx, base);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
loc_8254E8F0:
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8254e904
	if (ctx.cr6.eq) goto loc_8254E904;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8254e918
	if (!ctx.cr6.eq) goto loc_8254E918;
loc_8254E904:
	// lwz r3,836(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 836);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254e918
	if (ctx.cr6.eq) goto loc_8254E918;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82914b18
	ctx.lr = 0x8254E918;
	sub_82914B18(ctx, base);
loc_8254E918:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254E920"))) PPC_WEAK_FUNC(sub_8254E920);
PPC_FUNC_IMPL(__imp__sub_8254E920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e0
	ctx.lr = 0x8254E928;
	__savegprlr_18(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,10548(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x82439c68
	ctx.lr = 0x8254E940;
	sub_82439C68(ctx, base);
	// lwz r11,6804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6804);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r20,-1
	ctx.r20.s64 = -1;
	// addi r28,r31,6784
	ctx.r28.s64 = ctx.r31.s64 + 6784;
	// stw r27,6800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6800, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254e970
	if (ctx.cr6.eq) goto loc_8254E970;
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x8254E970;
	sub_82332C38(ctx, base);
loc_8254E970:
	// lwz r11,6820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6820);
	// li r18,1
	ctx.r18.s64 = 1;
	// stw r27,6848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6848, ctx.r27.u32);
	// stw r27,6852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6852, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r27,6856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6856, ctx.r27.u32);
	// stw r27,6860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6860, ctx.r27.u32);
	// stw r20,6864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6864, ctx.r20.u32);
	// stw r18,6868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6868, ctx.r18.u32);
	// beq cr6,0x8254ebac
	if (ctx.cr6.eq) goto loc_8254EBAC;
	// lwz r19,128(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x8254eb7c
	if (!ctx.cr6.gt) goto loc_8254EB7C;
	// lwz r25,124(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// lis r23,-31962
	ctx.r23.s64 = -2094661632;
	// lis r22,-31962
	ctx.r22.s64 = -2094661632;
	// lis r21,-31962
	ctx.r21.s64 = -2094661632;
	// lis r26,-31962
	ctx.r26.s64 = -2094661632;
loc_8254E9BC:
	// lwz r29,0(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8254eb70
	if (ctx.cr6.eq) goto loc_8254EB70;
	// lwz r11,2112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8254eb70
	if (!ctx.cr6.gt) goto loc_8254EB70;
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254eb70
	if (!ctx.cr0.eq) goto loc_8254EB70;
	// lwz r11,628(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	// lfs f13,-21844(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -21844);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,620(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lwz r9,624(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// blt cr6,0x8254ea14
	if (ctx.cr6.lt) goto loc_8254EA14;
	// li r30,4
	ctx.r30.s64 = 4;
	// b 0x8254ea4c
	goto loc_8254EA4C;
loc_8254EA14:
	// lfs f13,-21840(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -21840);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8254ea28
	if (ctx.cr6.lt) goto loc_8254EA28;
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x8254ea4c
	goto loc_8254EA4C;
loc_8254EA28:
	// lfs f13,-21836(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -21836);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8254ea3c
	if (ctx.cr6.lt) goto loc_8254EA3C;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x8254ea4c
	goto loc_8254EA4C;
loc_8254EA3C:
	// lfs f13,-21832(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + -21832);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8254ea4c
	if (ctx.cr6.lt) goto loc_8254EA4C;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
loc_8254EA4C:
	// lwz r11,6820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6820);
	// lwz r10,6224(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6224);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8254ea64
	if (!ctx.cr6.eq) goto loc_8254EA64;
	// stw r27,6224(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6224, ctx.r27.u32);
loc_8254EA64:
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82332d50
	ctx.lr = 0x8254EA84;
	sub_82332D50(ctx, base);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254ea9c
	if (ctx.cr0.eq) goto loc_8254EA9C;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_8254EA9C:
	// lwz r11,6808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6808);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8254eab4
	if (!ctx.cr6.eq) goto loc_8254EAB4;
	// lwz r10,6856(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6856);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,6856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6856, ctx.r10.u32);
loc_8254EAB4:
	// lwz r10,6864(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6864);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8254eae8
	if (ctx.cr6.eq) goto loc_8254EAE8;
	// subf r9,r30,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r30.s64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8254eaec
	if (!ctx.cr6.gt) goto loc_8254EAEC;
loc_8254EAE8:
	// stw r30,6864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6864, ctx.r30.u32);
loc_8254EAEC:
	// lwz r11,6868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6868);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254eb14
	if (ctx.cr6.eq) goto loc_8254EB14;
	// cmpwi cr6,r20,-1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, -1, ctx.xer);
	// bne cr6,0x8254eb08
	if (!ctx.cr6.eq) goto loc_8254EB08;
	// mr r20,r30
	ctx.r20.u64 = ctx.r30.u64;
	// b 0x8254eb14
	goto loc_8254EB14;
loc_8254EB08:
	// cmpw cr6,r30,r20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r20.s32, ctx.xer);
	// beq cr6,0x8254eb14
	if (ctx.cr6.eq) goto loc_8254EB14;
	// stw r27,6868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6868, ctx.r27.u32);
loc_8254EB14:
	// lwz r11,6820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6820);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254eb70
	if (ctx.cr6.eq) goto loc_8254EB70;
	// lwz r10,716(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 716);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8254eb70
	if (!ctx.cr6.eq) goto loc_8254EB70;
	// lfs f13,620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,620(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,624(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,6880(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6880);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8254eb70
	if (!ctx.cr6.lt) goto loc_8254EB70;
	// lwz r10,6848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6848);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,6848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6848, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,6224(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6224, ctx.r11.u32);
loc_8254EB70:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// bne 0x8254e9bc
	if (!ctx.cr0.eq) goto loc_8254E9BC;
loc_8254EB7C:
	// lwz r11,6848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6848);
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, ctx.xer);
	// bne cr6,0x8254eb8c
	if (!ctx.cr6.eq) goto loc_8254EB8C;
	// stw r18,6852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6852, ctx.r18.u32);
loc_8254EB8C:
	// lwz r11,6856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6856);
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, ctx.xer);
	// bne cr6,0x8254eb9c
	if (!ctx.cr6.eq) goto loc_8254EB9C;
	// stw r18,6860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6860, ctx.r18.u32);
loc_8254EB9C:
	// lwz r11,6864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8254ebac
	if (!ctx.cr6.lt) goto loc_8254EBAC;
	// stw r27,6864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6864, ctx.r27.u32);
loc_8254EBAC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8239d768
	ctx.lr = 0x8254EBB4;
	sub_8239D768(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82a4ea30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254EBC0"))) PPC_WEAK_FUNC(sub_8254EBC0);
PPC_FUNC_IMPL(__imp__sub_8254EBC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,620(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,624(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	// lwz r9,628(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	// lwz r6,6812(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6812);
	// lwz r7,6808(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6808);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bne cr6,0x8254ec0c
	if (!ctx.cr6.eq) goto loc_8254EC0C;
	// lwz r11,716(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 716);
	// lwz r10,6816(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6816);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8254ec0c
	if (!ctx.cr6.eq) goto loc_8254EC0C;
	// stw r8,6812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6812, ctx.r8.u32);
loc_8254EC0C:
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-21844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -21844);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8254ec38
	if (!ctx.cr6.gt) goto loc_8254EC38;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,6808(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6808, ctx.r11.u32);
	// bl 0x824e5888
	ctx.lr = 0x8254EC30;
	sub_824E5888(ctx, base);
	// stw r8,6872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6872, ctx.r8.u32);
	// b 0x8254ec98
	goto loc_8254EC98;
loc_8254EC38:
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lfs f13,-21840(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -21840);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8254ec54
	if (!ctx.cr6.gt) goto loc_8254EC54;
	// li r11,3
	ctx.r11.s64 = 3;
loc_8254EC4C:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8254ec90
	goto loc_8254EC90;
loc_8254EC54:
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lfs f13,-21836(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -21836);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8254ec6c
	if (!ctx.cr6.gt) goto loc_8254EC6C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8254ec4c
	goto loc_8254EC4C;
loc_8254EC6C:
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lfs f13,-21832(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -21832);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8254ec88
	if (!ctx.cr6.gt) goto loc_8254EC88;
	// stw r8,6808(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6808, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8254ec94
	goto loc_8254EC94;
loc_8254EC88:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
loc_8254EC90:
	// stw r11,6808(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6808, ctx.r11.u32);
loc_8254EC94:
	// bl 0x824e5888
	ctx.lr = 0x8254EC98;
	sub_824E5888(ctx, base);
loc_8254EC98:
	// lwz r5,6808(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6808);
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8254eccc
	if (ctx.cr6.eq) goto loc_8254ECCC;
	// lwz r11,6872(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6872);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254eccc
	if (ctx.cr6.eq) goto loc_8254ECCC;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x8254eccc
	if (ctx.cr6.eq) goto loc_8254ECCC;
	// lwz r11,7100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8254eccc
	if (!ctx.cr6.eq) goto loc_8254ECCC;
	// addi r4,r3,7108
	ctx.r4.s64 = ctx.r3.s64 + 7108;
	// bl 0x8254ece0
	ctx.lr = 0x8254ECCC;
	sub_8254ECE0(ctx, base);
loc_8254ECCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254ECE0"))) PPC_WEAK_FUNC(sub_8254ECE0);
PPC_FUNC_IMPL(__imp__sub_8254ECE0) {
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
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r9,15834
	ctx.r4.s64 = ctx.r9.s64 + 15834;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,7192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7192, ctx.r11.u32);
	// bl 0x8233a258
	ctx.lr = 0x8254ED14;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7192(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7192);
	// bl 0x829c3a20
	ctx.lr = 0x8254ED24;
	sub_829C3A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8254ed64
	if (ctx.cr0.eq) goto loc_8254ED64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// stw r11,7100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7100, ctx.r11.u32);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4744
	ctx.r11.s64 = ctx.r11.s64 + -4744;
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
	// lfs f1,-12104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12104);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8254f0b0
	ctx.lr = 0x8254ED64;
	sub_8254F0B0(ctx, base);
loc_8254ED64:
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

__attribute__((alias("__imp__sub_8254ED78"))) PPC_WEAK_FUNC(sub_8254ED78);
PPC_FUNC_IMPL(__imp__sub_8254ED78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7192, ctx.r11.u32);
	// stw r11,7100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7100, ctx.r11.u32);
	// lwz r11,10548(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10548);
	// lfs f0,984(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 7104, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254ED98"))) PPC_WEAK_FUNC(sub_8254ED98);
PPC_FUNC_IMPL(__imp__sub_8254ED98) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r8,1740(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1740);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8254ee80
	if (!ctx.cr6.gt) goto loc_8254EE80;
	// lwz r11,1736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1736);
loc_8254EDC8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8254edec
	if (ctx.cr6.eq) goto loc_8254EDEC;
	// lwz r7,2112(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2112);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8254edec
	if (!ctx.cr6.gt) goto loc_8254EDEC;
	// lwz r9,84(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// rlwinm. r9,r9,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8254ee00
	if (ctx.cr0.eq) goto loc_8254EE00;
loc_8254EDEC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8254edc8
	if (ctx.cr6.lt) goto loc_8254EDC8;
	// b 0x8254ee80
	goto loc_8254EE80;
loc_8254EE00:
	// lwz r11,6812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8254ee80
	if (!ctx.cr6.eq) goto loc_8254EE80;
	// lwz r11,7188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254ee80
	if (ctx.cr6.eq) goto loc_8254EE80;
	// lwz r11,7100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8254ee80
	if (!ctx.cr6.eq) goto loc_8254EE80;
	// lwz r11,7148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7148);
	// lwz r5,7180(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7180);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8254ee80
	if (!ctx.cr6.lt) goto loc_8254EE80;
	// lfs f0,7184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7184);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f13,7184(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7184, temp.u32);
	// lfs f0,-27328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27328);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8254ee80
	if (ctx.cr6.lt) goto loc_8254EE80;
	// lbz r11,5460(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5460);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8254ee80
	if (!ctx.cr0.eq) goto loc_8254EE80;
	// addi r4,r31,7132
	ctx.r4.s64 = ctx.r31.s64 + 7132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254ece0
	ctx.lr = 0x8254EE68;
	sub_8254ECE0(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,7180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7180);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,7180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7180, ctx.r11.u32);
	// stfs f0,7184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7184, temp.u32);
loc_8254EE80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254EE98"))) PPC_WEAK_FUNC(sub_8254EE98);
PPC_FUNC_IMPL(__imp__sub_8254EE98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,7192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7192);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r10,7192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7192, ctx.r10.u32);
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// stw r10,7100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7100, ctx.r10.u32);
	// lwz r10,10548(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10548);
	// addi r4,r9,-4744
	ctx.r4.s64 = ctx.r9.s64 + -4744;
	// lfs f0,984(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7104(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7104, temp.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8254EEE0"))) PPC_WEAK_FUNC(sub_8254EEE0);
PPC_FUNC_IMPL(__imp__sub_8254EEE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254EEE8"))) PPC_WEAK_FUNC(sub_8254EEE8);
PPC_FUNC_IMPL(__imp__sub_8254EEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x824ea480
	ctx.lr = 0x8254EEF8;
	sub_824EA480(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r11,r11,-23832
	ctx.r11.s64 = ctx.r11.s64 + -23832;
	// lfs f0,96(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254EF18"))) PPC_WEAK_FUNC(sub_8254EF18);
PPC_FUNC_IMPL(__imp__sub_8254EF18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r11,r11,-23720
	ctx.r11.s64 = ctx.r11.s64 + -23720;
	// lfs f1,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254EF28"))) PPC_WEAK_FUNC(sub_8254EF28);
PPC_FUNC_IMPL(__imp__sub_8254EF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8254EF30;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x824ff908
	ctx.lr = 0x8254EF38;
	sub_824FF908(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,10548(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x82439c68
	ctx.lr = 0x8254EF48;
	sub_82439C68(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8254efb8
	if (!ctx.cr6.gt) goto loc_8254EFB8;
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8254EF60:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254efac
	if (ctx.cr6.eq) goto loc_8254EFAC;
	// lwz r10,2112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8254efac
	if (!ctx.cr6.gt) goto loc_8254EFAC;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8254efac
	if (!ctx.cr0.eq) goto loc_8254EFAC;
	// lwz r3,1608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// bl 0x82438130
	ctx.lr = 0x8254EF8C;
	sub_82438130(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8254efac
	if (ctx.cr0.eq) goto loc_8254EFAC;
	// stw r28,3628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3628, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8263d268
	ctx.lr = 0x8254EFA0;
	sub_8263D268(ctx, base);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r28,8452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8452, ctx.r28.u32);
	// stw r28,8448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8448, ctx.r28.u32);
loc_8254EFAC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8254ef60
	if (!ctx.cr0.eq) goto loc_8254EF60;
loc_8254EFB8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239d768
	ctx.lr = 0x8254EFC0;
	sub_8239D768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254EFC8"))) PPC_WEAK_FUNC(sub_8254EFC8);
PPC_FUNC_IMPL(__imp__sub_8254EFC8) {
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
	// li r3,3408
	ctx.r3.s64 = 3408;
	// bl 0x82833108
	ctx.lr = 0x8254EFDC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8254efec
	if (ctx.cr0.eq) goto loc_8254EFEC;
	// bl 0x8266c370
	ctx.lr = 0x8254EFE8;
	sub_8266C370(ctx, base);
	// b 0x8254eff0
	goto loc_8254EFF0;
loc_8254EFEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254EFF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254F000"))) PPC_WEAK_FUNC(sub_8254F000);
PPC_FUNC_IMPL(__imp__sub_8254F000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r31,-31943
	ctx.r31.s64 = -2093416448;
	// lwz r11,-31540(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31540);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8254f040
	if (!ctx.cr0.eq) goto loc_8254F040;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31540(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31540, ctx.r11.u32);
	// addi r3,r9,-10336
	ctx.r3.s64 = ctx.r9.s64 + -10336;
	// bl 0x82816528
	ctx.lr = 0x8254F038;
	sub_82816528(ctx, base);
	// stw r3,-31544(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31544, ctx.r3.u32);
	// b 0x8254f044
	goto loc_8254F044;
loc_8254F040:
	// lwz r3,-31544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31544);
loc_8254F044:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254F058"))) PPC_WEAK_FUNC(sub_8254F058);
PPC_FUNC_IMPL(__imp__sub_8254F058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x824101a8
	ctx.lr = 0x8254F070;
	sub_824101A8(ctx, base);
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
	ctx.lr = 0x8254F088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8254f098
	if (!ctx.cr0.eq) goto loc_8254F098;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254F098:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254F0B0"))) PPC_WEAK_FUNC(sub_8254F0B0);
PPC_FUNC_IMPL(__imp__sub_8254F0B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8254F0B8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r29,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r29.u64);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x829c80b8
	ctx.lr = 0x8254F0DC;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8254f164
	if (!ctx.cr0.eq) goto loc_8254F164;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823b7af0
	ctx.lr = 0x8254F0EC;
	sub_823B7AF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254F100;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x8254F10C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8254f150
	if (ctx.cr0.eq) goto loc_8254F150;
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
	// b 0x8254f154
	goto loc_8254F154;
loc_8254F150:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8254F154:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x8254F160;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8254F164:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254F180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254F190"))) PPC_WEAK_FUNC(sub_8254F190);
PPC_FUNC_IMPL(__imp__sub_8254F190) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8254b038
	sub_8254B038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254F198"))) PPC_WEAK_FUNC(sub_8254F198);
PPC_FUNC_IMPL(__imp__sub_8254F198) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8254abe0
	sub_8254ABE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254F1A0"))) PPC_WEAK_FUNC(sub_8254F1A0);
PPC_FUNC_IMPL(__imp__sub_8254F1A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8254b038
	sub_8254B038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254F1A8"))) PPC_WEAK_FUNC(sub_8254F1A8);
PPC_FUNC_IMPL(__imp__sub_8254F1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8254F1B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x8254f218
	if (!ctx.cr6.gt) goto loc_8254F218;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8254F1D0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8254f204
	if (!ctx.cr6.eq) goto loc_8254F204;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8254F1FC;
	sub_82332CA8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_8254F204:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8254f1d0
	if (ctx.cr6.lt) goto loc_8254F1D0;
loc_8254F218:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r3,r11,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r11.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254F228"))) PPC_WEAK_FUNC(sub_8254F228);
PPC_FUNC_IMPL(__imp__sub_8254F228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8254F230;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r5.u64);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// std r6,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// bl 0x82833180
	ctx.lr = 0x8254F258;
	sub_82833180(ctx, base);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lwz r7,168(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lis r6,-8531
	ctx.r6.s64 = -559087616;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// ori r6,r6,47806
	ctx.r6.u64 = ctx.r6.u64 | 47806;
	// lwz r27,184(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r8,r8,-15784
	ctx.r8.s64 = ctx.r8.s64 + -15784;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// stw r5,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// stw r4,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254F2C8"))) PPC_WEAK_FUNC(sub_8254F2C8);
PPC_FUNC_IMPL(__imp__sub_8254F2C8) {
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
	// bl 0x8254f318
	ctx.lr = 0x8254F2E8;
	sub_8254F318(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8254f2fc
	if (ctx.cr6.eq) goto loc_8254F2FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x8254F2FC;
	sub_82333B08(ctx, base);
loc_8254F2FC:
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

__attribute__((alias("__imp__sub_8254F318"))) PPC_WEAK_FUNC(sub_8254F318);
PPC_FUNC_IMPL(__imp__sub_8254F318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,12128
	ctx.r31.s64 = ctx.r11.s64 + 12128;
	// lwz r11,12132(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12132);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8254f360
	if (!ctx.cr0.eq) goto loc_8254F360;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-15704
	ctx.r9.s64 = ctx.r9.s64 + -15704;
	// stw r11,12132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12132, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,20632
	ctx.r3.s64 = ctx.r11.s64 + 20632;
	// bl 0x82a4c758
	ctx.lr = 0x8254F360;
	sub_82A4C758(ctx, base);
loc_8254F360:
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

__attribute__((alias("__imp__sub_8254F378"))) PPC_WEAK_FUNC(sub_8254F378);
PPC_FUNC_IMPL(__imp__sub_8254F378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,25844(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25844);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8254f3b8
	if (!ctx.cr0.eq) goto loc_8254F3B8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,25844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25844, ctx.r11.u32);
	// addi r3,r9,-15820
	ctx.r3.s64 = ctx.r9.s64 + -15820;
	// bl 0x82816528
	ctx.lr = 0x8254F3B0;
	sub_82816528(ctx, base);
	// stw r3,25840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25840, ctx.r3.u32);
	// b 0x8254f3bc
	goto loc_8254F3BC;
loc_8254F3B8:
	// lwz r3,25840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25840);
loc_8254F3BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254F3D0"))) PPC_WEAK_FUNC(sub_8254F3D0);
PPC_FUNC_IMPL(__imp__sub_8254F3D0) {
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
	// bl 0x8254f318
	ctx.lr = 0x8254F3F0;
	sub_8254F318(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254F404;
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

__attribute__((alias("__imp__sub_8254F420"))) PPC_WEAK_FUNC(sub_8254F420);
PPC_FUNC_IMPL(__imp__sub_8254F420) {
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
	// beq cr6,0x8254f458
	if (ctx.cr6.eq) goto loc_8254F458;
	// bl 0x8254f318
	ctx.lr = 0x8254F448;
	sub_8254F318(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8254f458
	if (!ctx.cr6.eq) goto loc_8254F458;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8254f464
	goto loc_8254F464;
loc_8254F458:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x8254F464;
	sub_82333C70(ctx, base);
loc_8254F464:
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

__attribute__((alias("__imp__sub_8254F480"))) PPC_WEAK_FUNC(sub_8254F480);
PPC_FUNC_IMPL(__imp__sub_8254F480) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254f318
	sub_8254F318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254F488"))) PPC_WEAK_FUNC(sub_8254F488);
PPC_FUNC_IMPL(__imp__sub_8254F488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82833108
	ctx.lr = 0x8254F4A4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8254f53c
	if (ctx.cr0.eq) goto loc_8254F53C;
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
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,-15784
	ctx.r9.s64 = ctx.r9.s64 + -15784;
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
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// b 0x8254f540
	goto loc_8254F540;
loc_8254F53C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254F540:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254F558"))) PPC_WEAK_FUNC(sub_8254F558);
PPC_FUNC_IMPL(__imp__sub_8254F558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-15820
	ctx.r3.s64 = ctx.r11.s64 + -15820;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254F568"))) PPC_WEAK_FUNC(sub_8254F568);
PPC_FUNC_IMPL(__imp__sub_8254F568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-9616
	ctx.r3.s64 = ctx.r11.s64 + -9616;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254F578"))) PPC_WEAK_FUNC(sub_8254F578);
PPC_FUNC_IMPL(__imp__sub_8254F578) {
	PPC_FUNC_PROLOGUE();
	// b 0x823bade0
	sub_823BADE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254F580"))) PPC_WEAK_FUNC(sub_8254F580);
PPC_FUNC_IMPL(__imp__sub_8254F580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,2048
	ctx.r3.s64 = 2048;
	// bl 0x82833108
	ctx.lr = 0x8254F59C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8254f5b4
	if (ctx.cr0.eq) goto loc_8254F5B4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bl 0x8254f6f0
	ctx.lr = 0x8254F5B0;
	sub_8254F6F0(ctx, base);
	// b 0x8254f5b8
	goto loc_8254F5B8;
loc_8254F5B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254F5B8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254f5cc
	if (ctx.cr6.eq) goto loc_8254F5CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8254F5CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254F5E0"))) PPC_WEAK_FUNC(sub_8254F5E0);
PPC_FUNC_IMPL(__imp__sub_8254F5E0) {
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
	// beq cr6,0x8254f610
	if (ctx.cr6.eq) goto loc_8254F610;
	// bl 0x823bade0
	ctx.lr = 0x8254F608;
	sub_823BADE0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8254f654
	if (ctx.cr6.eq) goto loc_8254F654;
loc_8254F610:
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x82346e08
	ctx.lr = 0x8254F628;
	sub_82346E08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8254f654
	if (!ctx.cr0.eq) goto loc_8254F654;
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x823510a0
	ctx.lr = 0x8254F648;
	sub_823510A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x8254f658
	if (ctx.cr0.eq) goto loc_8254F658;
loc_8254F654:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8254F658:
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

__attribute__((alias("__imp__sub_8254F670"))) PPC_WEAK_FUNC(sub_8254F670);
PPC_FUNC_IMPL(__imp__sub_8254F670) {
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
	// bl 0x823bade0
	ctx.lr = 0x8254F690;
	sub_823BADE0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8254f6a0
	if (!ctx.cr6.eq) goto loc_8254F6A0;
	// addi r3,r31,-48
	ctx.r3.s64 = ctx.r31.s64 + -48;
	// b 0x8254f6d8
	goto loc_8254F6D8;
loc_8254F6A0:
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x82346ed0
	ctx.lr = 0x8254F6B8;
	sub_82346ED0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8254f6d8
	if (!ctx.cr0.eq) goto loc_8254F6D8;
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x82351168
	ctx.lr = 0x8254F6D8;
	sub_82351168(ctx, base);
loc_8254F6D8:
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

__attribute__((alias("__imp__sub_8254F6F0"))) PPC_WEAK_FUNC(sub_8254F6F0);
PPC_FUNC_IMPL(__imp__sub_8254F6F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8254F6F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-24752
	ctx.r11.s64 = ctx.r11.s64 + -24752;
	// addi r10,r10,-19340
	ctx.r10.s64 = ctx.r10.s64 + -19340;
	// addi r9,r9,-1392
	ctx.r9.s64 = ctx.r9.s64 + -1392;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r10,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r10.u32);
	// addi r29,r31,2016
	ctx.r29.s64 = ctx.r31.s64 + 2016;
	// stw r9,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r9.u32);
	// addi r27,r31,2032
	ctx.r27.s64 = ctx.r31.s64 + 2032;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8254f744
	if (!ctx.cr6.eq) goto loc_8254F744;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x8254f750
	goto loc_8254F750;
loc_8254F744:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8254F750:
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x823ff1a0
	ctx.lr = 0x8254F758;
	sub_823FF1A0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8254f768
	if (!ctx.cr6.eq) goto loc_8254F768;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x8254f774
	goto loc_8254F774;
loc_8254F768:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8254F774:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82346f30
	ctx.lr = 0x8254F780;
	sub_82346F30(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8254f790
	if (!ctx.cr6.eq) goto loc_8254F790;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x8254f79c
	goto loc_8254F79C;
loc_8254F790:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8254F79C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823511c8
	ctx.lr = 0x8254F7A8;
	sub_823511C8(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-15680
	ctx.r11.s64 = ctx.r11.s64 + -15680;
	// addi r10,r10,-14108
	ctx.r10.s64 = ctx.r10.s64 + -14108;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r9,-24776
	ctx.r9.s64 = ctx.r9.s64 + -24776;
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
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254F828"))) PPC_WEAK_FUNC(sub_8254F828);
PPC_FUNC_IMPL(__imp__sub_8254F828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8254F830;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,-24752
	ctx.r11.s64 = ctx.r11.s64 + -24752;
	// addi r10,r10,-19340
	ctx.r10.s64 = ctx.r10.s64 + -19340;
	// addi r9,r9,-1392
	ctx.r9.s64 = ctx.r9.s64 + -1392;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r10.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r9,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r9.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r31,2016
	ctx.r30.s64 = ctx.r31.s64 + 2016;
	// addi r29,r31,2032
	ctx.r29.s64 = ctx.r31.s64 + 2032;
	// bl 0x824cbb48
	ctx.lr = 0x8254F870;
	sub_824CBB48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ba650
	ctx.lr = 0x8254F87C;
	sub_825BA650(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82501770
	ctx.lr = 0x8254F888;
	sub_82501770(ctx, base);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-15680
	ctx.r11.s64 = ctx.r11.s64 + -15680;
	// addi r10,r10,-14108
	ctx.r10.s64 = ctx.r10.s64 + -14108;
	// lfs f0,904(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r9,-24776
	ctx.r9.s64 = ctx.r9.s64 + -24776;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254F900"))) PPC_WEAK_FUNC(sub_8254F900);
PPC_FUNC_IMPL(__imp__sub_8254F900) {
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
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x825ba700
	ctx.lr = 0x8254F92C;
	sub_825BA700(ctx, base);
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x82501810
	ctx.lr = 0x8254F940;
	sub_82501810(ctx, base);
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addic. r11,r11,252
	ctx.xer.ca = ctx.r11.u32 > 4294967043;
	ctx.r11.s64 = ctx.r11.s64 + 252;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254f96c
	if (ctx.cr0.eq) goto loc_8254F96C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8254f96c
	if (ctx.cr6.eq) goto loc_8254F96C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8254f970
	goto loc_8254F970;
loc_8254F96C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8254F970:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-9552
	ctx.r3.s64 = ctx.r11.s64 + -9552;
	// bl 0x82816528
	ctx.lr = 0x8254F97C;
	sub_82816528(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-19756
	ctx.r3.s64 = ctx.r11.s64 + -19756;
	// bl 0x82816528
	ctx.lr = 0x8254F98C;
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
	ctx.lr = 0x8254F9A0;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-9512
	ctx.r3.s64 = ctx.r11.s64 + -9512;
	// bl 0x82816528
	ctx.lr = 0x8254F9AC;
	sub_82816528(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,16396
	ctx.r3.s64 = ctx.r11.s64 + 16396;
	// bl 0x82816528
	ctx.lr = 0x8254F9BC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x8254F9CC;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-9468
	ctx.r3.s64 = ctx.r11.s64 + -9468;
	// bl 0x82816528
	ctx.lr = 0x8254F9D8;
	sub_82816528(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,32560
	ctx.r3.s64 = ctx.r11.s64 + 32560;
	// bl 0x82816528
	ctx.lr = 0x8254F9E8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x8254F9F8;
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

__attribute__((alias("__imp__sub_8254FA10"))) PPC_WEAK_FUNC(sub_8254FA10);
PPC_FUNC_IMPL(__imp__sub_8254FA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8254FA18;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,-32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32);
	// lfs f30,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8254fae0
	if (!ctx.cr6.eq) goto loc_8254FAE0;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lfs f0,12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12136);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f13,-12104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12104);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,12136(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12136, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8254fb10
	if (ctx.cr6.lt) goto loc_8254FB10;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// stw r11,-32(r29)
	PPC_STORE_U32(ctx.r29.u32 + -32, ctx.r11.u32);
	// addi r31,r29,-48
	ctx.r31.s64 = ctx.r29.s64 + -48;
	// lwz r11,-48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -48);
	// stfs f30,12140(r10)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12140, temp.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r30,1584(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// bl 0x823bac80
	ctx.lr = 0x8254FA88;
	sub_823BAC80(ctx, base);
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
	ctx.lr = 0x8254FAA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8254faac
	if (!ctx.cr0.eq) goto loc_8254FAAC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8254FAAC:
	// lwz r11,5448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5448);
	// li r4,1
	ctx.r4.s64 = 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,1292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1292);
	// beq cr6,0x8254fad4
	if (ctx.cr6.eq) goto loc_8254FAD4;
	// li r4,2
	ctx.r4.s64 = 2;
loc_8254FAD4:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254FADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8254fb10
	goto loc_8254FB10;
loc_8254FAE0:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f0,12140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12140);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f13,32716(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32716);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,12140(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12140, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8254fb10
	if (ctx.cr6.lt) goto loc_8254FB10;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-32(r29)
	PPC_STORE_U32(ctx.r29.u32 + -32, ctx.r10.u32);
	// stfs f30,12136(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12136, temp.u32);
loc_8254FB10:
	// lwz r11,-48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -48);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addic. r11,r11,252
	ctx.xer.ca = ctx.r11.u32 > 4294967043;
	ctx.r11.s64 = ctx.r11.s64 + 252;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254fb3c
	if (ctx.cr0.eq) goto loc_8254FB3C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8254fb3c
	if (ctx.cr6.eq) goto loc_8254FB3C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8254fb40
	goto loc_8254FB40;
loc_8254FB3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8254FB40:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254fbcc
	if (ctx.cr6.eq) goto loc_8254FBCC;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8254fbcc
	if (ctx.cr6.eq) goto loc_8254FBCC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,-4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8254fb90
	if (ctx.cr6.eq) goto loc_8254FB90;
	// bl 0x823bb1e8
	ctx.lr = 0x8254FB74;
	sub_823BB1E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254FB8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8254fb94
	goto loc_8254FB94;
loc_8254FB90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254FB94:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254fbcc
	if (ctx.cr6.eq) goto loc_8254FBCC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,-44(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-11456(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11456);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8254fbc0
	if (!ctx.cr6.lt) goto loc_8254FBC0;
	// lfs f0,-40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -40);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,-40(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + -40, temp.u32);
	// b 0x8254fbc4
	goto loc_8254FBC4;
loc_8254FBC0:
	// stfs f30,-40(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + -40, temp.u32);
loc_8254FBC4:
	// stfs f30,-44(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + -44, temp.u32);
	// b 0x8254fbd8
	goto loc_8254FBD8;
loc_8254FBCC:
	// lfs f0,-44(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -44);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,-44(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + -44, temp.u32);
loc_8254FBD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254FBE8"))) PPC_WEAK_FUNC(sub_8254FBE8);
PPC_FUNC_IMPL(__imp__sub_8254FBE8) {
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
	// lwz r11,-48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -48);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// bl 0x824ce338
	ctx.lr = 0x8254FC18;
	sub_824CE338(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8254fc48
	if (ctx.cr6.eq) goto loc_8254FC48;
	// bl 0x823bac80
	ctx.lr = 0x8254FC24;
	sub_823BAC80(ctx, base);
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
	ctx.lr = 0x8254FC3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x8254fc4c
	if (!ctx.cr0.eq) goto loc_8254FC4C;
loc_8254FC48:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8254FC4C:
	// stw r11,-36(r30)
	PPC_STORE_U32(ctx.r30.u32 + -36, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8254FC68"))) PPC_WEAK_FUNC(sub_8254FC68);
PPC_FUNC_IMPL(__imp__sub_8254FC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x825ba7d0
	ctx.lr = 0x8254FC90;
	sub_825BA7D0(ctx, base);
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// bl 0x824cc238
	ctx.lr = 0x8254FCA4;
	sub_824CC238(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254FCB8"))) PPC_WEAK_FUNC(sub_8254FCB8);
PPC_FUNC_IMPL(__imp__sub_8254FCB8) {
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
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825ba8c0
	ctx.lr = 0x8254FCE4;
	sub_825BA8C0(ctx, base);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825018b0
	ctx.lr = 0x8254FCF8;
	sub_825018B0(ctx, base);
	// bl 0x823bade0
	ctx.lr = 0x8254FCFC;
	sub_823BADE0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254FD14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8254FD30"))) PPC_WEAK_FUNC(sub_8254FD30);
PPC_FUNC_IMPL(__imp__sub_8254FD30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x825bb460
	sub_825BB460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254FD48"))) PPC_WEAK_FUNC(sub_8254FD48);
PPC_FUNC_IMPL(__imp__sub_8254FD48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8254fa10
	sub_8254FA10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254FD58"))) PPC_WEAK_FUNC(sub_8254FD58);
PPC_FUNC_IMPL(__imp__sub_8254FD58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8254f580
	sub_8254F580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254FD68"))) PPC_WEAK_FUNC(sub_8254FD68);
PPC_FUNC_IMPL(__imp__sub_8254FD68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8254f670
	sub_8254F670(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254FD78"))) PPC_WEAK_FUNC(sub_8254FD78);
PPC_FUNC_IMPL(__imp__sub_8254FD78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8254f670
	sub_8254F670(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254FD88"))) PPC_WEAK_FUNC(sub_8254FD88);
PPC_FUNC_IMPL(__imp__sub_8254FD88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8254f578
	sub_8254F578(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254FD98"))) PPC_WEAK_FUNC(sub_8254FD98);
PPC_FUNC_IMPL(__imp__sub_8254FD98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8254fc68
	sub_8254FC68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254FDA8"))) PPC_WEAK_FUNC(sub_8254FDA8);
PPC_FUNC_IMPL(__imp__sub_8254FDA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8254fbe8
	sub_8254FBE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254FDB8"))) PPC_WEAK_FUNC(sub_8254FDB8);
PPC_FUNC_IMPL(__imp__sub_8254FDB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8254f5e0
	sub_8254F5E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254FDC8"))) PPC_WEAK_FUNC(sub_8254FDC8);
PPC_FUNC_IMPL(__imp__sub_8254FDC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8254f900
	sub_8254F900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254FDD8"))) PPC_WEAK_FUNC(sub_8254FDD8);
PPC_FUNC_IMPL(__imp__sub_8254FDD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8254f568
	sub_8254F568(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254FDE8"))) PPC_WEAK_FUNC(sub_8254FDE8);
PPC_FUNC_IMPL(__imp__sub_8254FDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-9636
	ctx.r3.s64 = ctx.r11.s64 + -9636;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254FDF8"))) PPC_WEAK_FUNC(sub_8254FDF8);
PPC_FUNC_IMPL(__imp__sub_8254FDF8) {
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
	// beq cr6,0x8254fe30
	if (ctx.cr6.eq) goto loc_8254FE30;
	// bl 0x823bac80
	ctx.lr = 0x8254FE20;
	sub_823BAC80(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8254fe30
	if (!ctx.cr6.eq) goto loc_8254FE30;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8254fe3c
	goto loc_8254FE3C;
loc_8254FE30:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ff548
	ctx.lr = 0x8254FE3C;
	sub_824FF548(ctx, base);
loc_8254FE3C:
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

__attribute__((alias("__imp__sub_8254FE58"))) PPC_WEAK_FUNC(sub_8254FE58);
PPC_FUNC_IMPL(__imp__sub_8254FE58) {
	PPC_FUNC_PROLOGUE();
	// b 0x823bac80
	sub_823BAC80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254FE60"))) PPC_WEAK_FUNC(sub_8254FE60);
PPC_FUNC_IMPL(__imp__sub_8254FE60) {
	PPC_FUNC_PROLOGUE();
	// b 0x82410cb0
	sub_82410CB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254FE68"))) PPC_WEAK_FUNC(sub_8254FE68);
PPC_FUNC_IMPL(__imp__sub_8254FE68) {
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
	// li r3,6800
	ctx.r3.s64 = 6800;
	// bl 0x82833108
	ctx.lr = 0x8254FE88;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8254fed8
	if (ctx.cr0.eq) goto loc_8254FED8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824ff678
	ctx.lr = 0x8254FE9C;
	sub_824FF678(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,-13528
	ctx.r11.s64 = ctx.r11.s64 + -13528;
	// addi r10,r10,-11092
	ctx.r10.s64 = ctx.r10.s64 + -11092;
	// addi r9,r9,-11040
	ctx.r9.s64 = ctx.r9.s64 + -11040;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,6784(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6784);
	// stw r11,6784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6784, ctx.r11.u32);
	// lwz r11,6788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6788);
	// stw r11,6788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6788, ctx.r11.u32);
	// b 0x8254fedc
	goto loc_8254FEDC;
loc_8254FED8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254FEDC:
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

__attribute__((alias("__imp__sub_8254FEF8"))) PPC_WEAK_FUNC(sub_8254FEF8);
PPC_FUNC_IMPL(__imp__sub_8254FEF8) {
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
	// bl 0x823bac80
	ctx.lr = 0x8254FF18;
	sub_823BAC80(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8254ff2c
	if (ctx.cr6.eq) goto loc_8254FF2C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824ff5f8
	ctx.lr = 0x8254FF2C;
	sub_824FF5F8(ctx, base);
loc_8254FF2C:
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

__attribute__((alias("__imp__sub_8254FF48"))) PPC_WEAK_FUNC(sub_8254FF48);
PPC_FUNC_IMPL(__imp__sub_8254FF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-14056
	ctx.r3.s64 = ctx.r11.s64 + -14056;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254FF58"))) PPC_WEAK_FUNC(sub_8254FF58);
PPC_FUNC_IMPL(__imp__sub_8254FF58) {
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
	// bl 0x824ff7c8
	ctx.lr = 0x8254FF78;
	sub_824FF7C8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254ff88
	if (ctx.cr0.eq) goto loc_8254FF88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8254FF88;
	sub_82332DB8(ctx, base);
loc_8254FF88:
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

__attribute__((alias("__imp__sub_8254FFA8"))) PPC_WEAK_FUNC(sub_8254FFA8);
PPC_FUNC_IMPL(__imp__sub_8254FFA8) {
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
	// addi r31,r11,-21800
	ctx.r31.s64 = ctx.r11.s64 + -21800;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x8254FFE0;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 * 24;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255000c
	if (ctx.cr0.eq) goto loc_8255000C;
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
loc_8255000C:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82550030
	if (ctx.cr6.eq) goto loc_82550030;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82332c38
	ctx.lr = 0x82550030;
	sub_82332C38(ctx, base);
loc_82550030:
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

__attribute__((alias("__imp__sub_82550048"))) PPC_WEAK_FUNC(sub_82550048);
PPC_FUNC_IMPL(__imp__sub_82550048) {
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
	// addi r11,r11,-21800
	ctx.r11.s64 = ctx.r11.s64 + -21800;
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
	// ble cr6,0x825500b4
	if (!ctx.cr6.gt) goto loc_825500B4;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82550084:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x825500a4
	if (ctx.cr6.eq) goto loc_825500A4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82550084
	if (ctx.cr6.lt) goto loc_82550084;
	// b 0x825500b4
	goto loc_825500B4;
loc_825500A4:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_825500B4:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825500dc
	if (ctx.cr6.eq) goto loc_825500DC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825500D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825500e0
	goto loc_825500E0;
loc_825500DC:
	// bl 0x824daf88
	ctx.lr = 0x825500E0;
	sub_824DAF88(ctx, base);
loc_825500E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825500F0"))) PPC_WEAK_FUNC(sub_825500F0);
PPC_FUNC_IMPL(__imp__sub_825500F0) {
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
	// addi r11,r11,-21800
	ctx.r11.s64 = ctx.r11.s64 + -21800;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82550150
	if (!ctx.cr6.gt) goto loc_82550150;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8255011C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8255013c
	if (ctx.cr6.eq) goto loc_8255013C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8255011c
	if (ctx.cr6.lt) goto loc_8255011C;
	// b 0x82550150
	goto loc_82550150;
loc_8255013C:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82550158
	if (!ctx.cr6.eq) goto loc_82550158;
loc_82550150:
	// bl 0x824db030
	ctx.lr = 0x82550154;
	sub_824DB030(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82550158:
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

__attribute__((alias("__imp__sub_82550170"))) PPC_WEAK_FUNC(sub_82550170);
PPC_FUNC_IMPL(__imp__sub_82550170) {
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
	// addi r11,r11,-21800
	ctx.r11.s64 = ctx.r11.s64 + -21800;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x825501f0
	if (!ctx.cr6.gt) goto loc_825501F0;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_825501AC:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x825501cc
	if (ctx.cr6.eq) goto loc_825501CC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825501ac
	if (ctx.cr6.lt) goto loc_825501AC;
	// b 0x825501f0
	goto loc_825501F0;
loc_825501CC:
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
	ctx.lr = 0x825501E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825501fc
	if (!ctx.cr0.eq) goto loc_825501FC;
loc_825501F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824db0b0
	ctx.lr = 0x825501FC;
	sub_824DB0B0(ctx, base);
loc_825501FC:
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

__attribute__((alias("__imp__sub_82550218"))) PPC_WEAK_FUNC(sub_82550218);
PPC_FUNC_IMPL(__imp__sub_82550218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82550220;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824ff818
	ctx.lr = 0x8255022C;
	sub_824FF818(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,-13528
	ctx.r11.s64 = ctx.r11.s64 + -13528;
	// addi r10,r10,-11092
	ctx.r10.s64 = ctx.r10.s64 + -11092;
	// addi r9,r9,-11040
	ctx.r9.s64 = ctx.r9.s64 + -11040;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,-13784
	ctx.r3.s64 = ctx.r11.s64 + -13784;
	// bl 0x82816528
	ctx.lr = 0x8255025C;
	sub_82816528(ctx, base);
	// stw r3,6704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6704, ctx.r3.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-9616
	ctx.r3.s64 = ctx.r11.s64 + -9616;
	// bl 0x82816528
	ctx.lr = 0x8255026C;
	sub_82816528(ctx, base);
	// stw r3,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r3.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-13776
	ctx.r3.s64 = ctx.r11.s64 + -13776;
	// bl 0x82816528
	ctx.lr = 0x8255027C;
	sub_82816528(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lwz r9,2852(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2852);
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r3,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r3.u32);
	// addi r30,r11,25812
	ctx.r30.s64 = ctx.r11.s64 + 25812;
	// lwz r11,25820(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25820);
	// stw r28,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r28.u32);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825502c4
	if (!ctx.cr0.eq) goto loc_825502C4;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-10996
	ctx.r9.s64 = ctx.r9.s64 + -10996;
	// stw r11,25820(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25820, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r3,r11,20792
	ctx.r3.s64 = ctx.r11.s64 + 20792;
	// bl 0x82a4c758
	ctx.lr = 0x825502C4;
	sub_82A4C758(ctx, base);
loc_825502C4:
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lwz r9,2852(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2852);
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r29,r11,25808
	ctx.r29.s64 = ctx.r11.s64 + 25808;
	// lwz r11,25816(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25816);
	// stw r30,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r30.u32);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82550304
	if (!ctx.cr0.eq) goto loc_82550304;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-11016
	ctx.r9.s64 = ctx.r9.s64 + -11016;
	// stw r11,25816(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25816, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r3,r11,20768
	ctx.r3.s64 = ctx.r11.s64 + 20768;
	// bl 0x82a4c758
	ctx.lr = 0x82550304;
	sub_82A4C758(ctx, base);
loc_82550304:
	// lwz r9,2852(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2852);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,2048
	ctx.r11.s64 = 2048;
	// li r7,100
	ctx.r7.s64 = 100;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r29,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r29.u32);
	// lfs f0,32748(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32748);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1696(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1696, temp.u32);
	// stw r10,5336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5336, ctx.r10.u32);
	// stw r11,5392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5392, ctx.r11.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,5400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5400, ctx.r11.u32);
	// stw r11,5396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5396, ctx.r11.u32);
	// addi r3,r9,-13732
	ctx.r3.s64 = ctx.r9.s64 + -13732;
	// stw r28,3172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3172, ctx.r28.u32);
	// stw r28,3124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3124, ctx.r28.u32);
	// stw r28,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r28.u32);
	// stw r10,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r10.u32);
	// stw r28,2236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2236, ctx.r28.u32);
	// stw r10,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r10.u32);
	// stw r7,3076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3076, ctx.r7.u32);
	// stw r6,5448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5448, ctx.r6.u32);
	// bl 0x828165a8
	ctx.lr = 0x82550364;
	sub_828165A8(ctx, base);
	// stw r3,5476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5476, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82550378"))) PPC_WEAK_FUNC(sub_82550378);
PPC_FUNC_IMPL(__imp__sub_82550378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,25836(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25836);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825503b8
	if (!ctx.cr0.eq) goto loc_825503B8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,25836(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25836, ctx.r11.u32);
	// addi r3,r9,-13708
	ctx.r3.s64 = ctx.r9.s64 + -13708;
	// bl 0x82816528
	ctx.lr = 0x825503B0;
	sub_82816528(ctx, base);
	// stw r3,25832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25832, ctx.r3.u32);
	// b 0x825503bc
	goto loc_825503BC;
loc_825503B8:
	// lwz r3,25832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25832);
loc_825503BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825503D0"))) PPC_WEAK_FUNC(sub_825503D0);
PPC_FUNC_IMPL(__imp__sub_825503D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,25828(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25828);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82550410
	if (!ctx.cr0.eq) goto loc_82550410;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,25828(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25828, ctx.r11.u32);
	// addi r3,r9,-13672
	ctx.r3.s64 = ctx.r9.s64 + -13672;
	// bl 0x82816528
	ctx.lr = 0x82550408;
	sub_82816528(ctx, base);
	// stw r3,25824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25824, ctx.r3.u32);
	// b 0x82550414
	goto loc_82550414;
loc_82550410:
	// lwz r3,25824(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25824);
loc_82550414:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82550428"))) PPC_WEAK_FUNC(sub_82550428);
PPC_FUNC_IMPL(__imp__sub_82550428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
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

__attribute__((alias("__imp__sub_82550448"))) PPC_WEAK_FUNC(sub_82550448);
PPC_FUNC_IMPL(__imp__sub_82550448) {
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r11,24096
	ctx.r30.s64 = ctx.r11.s64 + 24096;
	// lwz r3,24096(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24096);
	// bl 0x828165a8
	ctx.lr = 0x82550470;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82550480;
	sub_82410060(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x828165a8
	ctx.lr = 0x82550488;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82550498;
	sub_82410060(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-13636
	ctx.r3.s64 = ctx.r11.s64 + -13636;
	// bl 0x82816528
	ctx.lr = 0x825504A4;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825504B4;
	sub_82410060(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-13596
	ctx.r3.s64 = ctx.r11.s64 + -13596;
	// bl 0x82816528
	ctx.lr = 0x825504C0;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x825504D0;
	sub_82410060(ctx, base);
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

__attribute__((alias("__imp__sub_825504E8"))) PPC_WEAK_FUNC(sub_825504E8);
PPC_FUNC_IMPL(__imp__sub_825504E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,2180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2180);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,2180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2180, ctx.r11.u32);
	// bl 0x82550d50
	ctx.lr = 0x82550514;
	sub_82550D50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82502d10
	ctx.lr = 0x8255051C;
	sub_82502D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824ff970
	ctx.lr = 0x82550524;
	sub_824FF970(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82550538"))) PPC_WEAK_FUNC(sub_82550538);
PPC_FUNC_IMPL(__imp__sub_82550538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82550540;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82a61740
	ctx.lr = 0x82550548;
	__savefpr_26(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x824df418
	ctx.lr = 0x82550554;
	sub_824DF418(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lfs f13,19552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19552);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,19556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19556);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r29,136(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r30,152(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lfs f13,17120(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17120);
	ctx.f13.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f0,17116(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17116);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-6866
	ctx.r10.s64 = -449970176;
	// lfs f12,19548(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 19548);
	ctx.f12.f64 = double(temp.f32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// lfs f30,-24640(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24640);
	ctx.f30.f64 = double(temp.f32);
	// lis r4,-16601
	ctx.r4.s64 = -1087963136;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// ori r10,r10,31988
	ctx.r10.u64 = ctx.r10.u64 | 31988;
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// ori r4,r4,62193
	ctx.r4.u64 = ctx.r4.u64 | 62193;
	// lwz r11,5352(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5352);
	// rldicr r9,r30,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r7,r29,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x824e5590
	ctx.lr = 0x82550604;
	sub_824E5590(ctx, base);
	// stw r3,5356(r28)
	PPC_STORE_U32(ctx.r28.u32 + 5356, ctx.r3.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f30,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f30,-12104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f30.f64 = double(temp.f32);
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// lwz r30,5352(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5352);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r3,r8,9748
	ctx.r3.s64 = ctx.r8.s64 + 9748;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f28,17060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17060);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,18368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18368);
	ctx.f29.f64 = double(temp.f32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f28,160(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f29,164(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f29,168(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82550654;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,168(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// lis r4,-3736
	ctx.r4.s64 = -244842496;
	// ori r4,r4,3838
	ctx.r4.u64 = ctx.r4.u64 | 3838;
	// bl 0x824e5590
	ctx.lr = 0x8255069C;
	sub_824E5590(ctx, base);
	// stw r3,5360(r28)
	PPC_STORE_U32(ctx.r28.u32 + 5360, ctx.r3.u32);
	// lis r30,-32243
	ctx.r30.s64 = -2113077248;
	// lwz r29,5352(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5352);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r27,r30,32716
	ctx.r27.s64 = ctx.r30.s64 + 32716;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lis r10,22763
	ctx.r10.s64 = 1491795968;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r3,r11,-16432
	ctx.r3.s64 = ctx.r11.s64 + -16432;
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// ori r26,r10,37495
	ctx.r26.u64 = ctx.r10.u64 | 37495;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f27,56(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	ctx.f27.f64 = double(temp.f32);
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f29,148(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f29,152(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x825506E8;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r25,168(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x8255072C;
	sub_824E5590(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r10,-19521
	ctx.r10.s64 = -1279328256;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r3,r11,-16424
	ctx.r3.s64 = ctx.r11.s64 + -16424;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// ori r29,r10,23324
	ctx.r29.u64 = ctx.r10.u64 | 23324;
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,148(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f29,152(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r26,5352(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x82550768;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r25,168(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r24,136(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rldicr r9,r24,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x825507AC;
	sub_824E5590(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r10,16364
	ctx.r10.s64 = 1072431104;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// ori r29,r10,28383
	ctx.r29.u64 = ctx.r10.u64 | 28383;
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r26,5352(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5352);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,148(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f29,152(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x825507E8;
	sub_82816528(ctx, base);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r25,168(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// bl 0x824e5590
	ctx.lr = 0x8255082C;
	sub_824E5590(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,599
	ctx.r10.s64 = 39256064;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r3,r11,-16408
	ctx.r3.s64 = ctx.r11.s64 + -16408;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// ori r29,r10,14532
	ctx.r29.u64 = ctx.r10.u64 | 14532;
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,148(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f29,152(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r26,5352(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x82550868;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r25,168(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r24,136(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rldicr r9,r24,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// bl 0x824e5590
	ctx.lr = 0x825508AC;
	sub_824E5590(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f26,204(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 204);
	ctx.f26.f64 = double(temp.f32);
	// lis r10,30100
	ctx.r10.s64 = 1972633600;
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r3,r11,-16400
	ctx.r3.s64 = ctx.r11.s64 + -16400;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// ori r29,r10,42004
	ctx.r29.u64 = ctx.r10.u64 | 42004;
	// stfs f26,128(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f28,144(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,148(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f29,152(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r27,5352(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x825508EC;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r26,168(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// bl 0x824e5590
	ctx.lr = 0x82550930;
	sub_824E5590(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-13035
	ctx.r10.s64 = -854261760;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r3,r11,-16388
	ctx.r3.s64 = ctx.r11.s64 + -16388;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// ori r29,r10,53749
	ctx.r29.u64 = ctx.r10.u64 | 53749;
	// stfs f26,128(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f28,144(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,148(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f29,152(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r27,5352(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x8255096C;
	sub_82816528(ctx, base);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r27,168(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// bl 0x824e5590
	ctx.lr = 0x825509B0;
	sub_824E5590(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-11265
	ctx.r10.s64 = -738263040;
	// lfs f30,32716(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32716);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r11,-16376
	ctx.r3.s64 = ctx.r11.s64 + -16376;
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// ori r30,r10,44068
	ctx.r30.u64 = ctx.r10.u64 | 44068;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f26,128(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f28,144(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f28,148(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f28,152(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r29,5352(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x825509F0;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r27,168(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r26,136(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r9,r26,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// bl 0x824e5590
	ctx.lr = 0x82550A34;
	sub_824E5590(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,24284
	ctx.r10.s64 = 1591476224;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r3,r11,-16364
	ctx.r3.s64 = ctx.r11.s64 + -16364;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// ori r30,r10,32798
	ctx.r30.u64 = ctx.r10.u64 | 32798;
	// stfs f26,128(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r29,5352(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5352);
	// stfs f28,144(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f28,148(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f28,152(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82550A70;
	sub_82816528(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r30,168(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x82550AB4;
	sub_824E5590(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,5356(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5356);
	// lwz r11,2088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2088);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82550ACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r9,26549
	ctx.r9.s64 = 1739915264;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r3,r10,-13556
	ctx.r3.s64 = ctx.r10.s64 + -13556;
	// stfs f30,128(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// li r29,2
	ctx.r29.s64 = 2;
	// lfs f0,16612(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16612);
	ctx.f0.f64 = double(temp.f32);
	// ori r30,r9,52330
	ctx.r30.u64 = ctx.r9.u64 | 52330;
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f27,136(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f28,144(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f28,148(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82550B10;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r27,168(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,136
	ctx.r5.s64 = 136;
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r10,r9,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x824e4120
	ctx.lr = 0x82550B58;
	sub_824E4120(ctx, base);
	// stw r3,6784(r28)
	PPC_STORE_U32(ctx.r28.u32 + 6784, ctx.r3.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,16568(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16568);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r3,r11,-13548
	ctx.r3.s64 = ctx.r11.s64 + -13548;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f0,19700(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19700);
	ctx.f0.f64 = double(temp.f32);
	// stfs f30,128(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f28,144(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f28,148(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82550B9C;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r31,168(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,136
	ctx.r5.s64 = 136;
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r10,r9,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x824e4120
	ctx.lr = 0x82550BE4;
	sub_824E4120(ctx, base);
	// stw r3,6788(r28)
	PPC_STORE_U32(ctx.r28.u32 + 6788, ctx.r3.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82a6178c
	ctx.lr = 0x82550BF4;
	__restfpr_26(ctx, base);
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82550BF8"))) PPC_WEAK_FUNC(sub_82550BF8);
PPC_FUNC_IMPL(__imp__sub_82550BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82550C00;
	__savegprlr_29(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x824ffb80
	ctx.lr = 0x82550C10;
	sub_824FFB80(ctx, base);
	// lwz r11,5728(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82550c24
	if (ctx.cr6.eq) goto loc_82550C24;
	// lwz r4,5724(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5724);
	// b 0x82550c2c
	goto loc_82550C2C;
loc_82550C24:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_82550C2C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82409058
	ctx.lr = 0x82550C34;
	sub_82409058(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwz r31,132(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82550c58
	if (ctx.cr6.eq) goto loc_82550C58;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82550c58
	if (ctx.cr6.eq) goto loc_82550C58;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x82550C58;
	sub_82332DB8(ctx, base);
loc_82550C58:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82550ca0
	if (ctx.cr6.eq) goto loc_82550CA0;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82550ca0
	if (ctx.cr6.eq) goto loc_82550CA0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82507af0
	ctx.lr = 0x82550C74;
	sub_82507AF0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,11960
	ctx.r4.s64 = ctx.r10.s64 + 11960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x829e6978
	ctx.lr = 0x82550C90;
	sub_829E6978(ctx, base);
	// stfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,3412
	ctx.r3.s64 = ctx.r30.s64 + 3412;
	// bl 0x82507928
	ctx.lr = 0x82550CA0;
	sub_82507928(ctx, base);
loc_82550CA0:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r30,3436
	ctx.r3.s64 = ctx.r30.s64 + 3436;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82522580
	ctx.lr = 0x82550CB8;
	sub_82522580(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82550CC0"))) PPC_WEAK_FUNC(sub_82550CC0);
PPC_FUNC_IMPL(__imp__sub_82550CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82550d50
	ctx.lr = 0x82550CE0;
	sub_82550D50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82550d50
	ctx.lr = 0x82550CF0;
	sub_82550D50(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82550D08"))) PPC_WEAK_FUNC(sub_82550D08);
PPC_FUNC_IMPL(__imp__sub_82550D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82550d50
	ctx.lr = 0x82550D28;
	sub_82550D50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82550d50
	ctx.lr = 0x82550D38;
	sub_82550D50(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82550D50"))) PPC_WEAK_FUNC(sub_82550D50);
PPC_FUNC_IMPL(__imp__sub_82550D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82550D58;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,24096
	ctx.r11.s64 = ctx.r11.s64 + 24096;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x828165a8
	ctx.lr = 0x82550D78;
	sub_828165A8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82550D84:
	// lwz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82550dc0
	if (!ctx.cr6.lt) goto loc_82550DC0;
	// lwz r11,288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82411cb0
	ctx.lr = 0x82550D9C;
	sub_82411CB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82550db0
	if (ctx.cr0.eq) goto loc_82550DB0;
	// lwz r11,472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82550dbc
	if (ctx.cr6.eq) goto loc_82550DBC;
loc_82550DB0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x82550d84
	goto loc_82550D84;
loc_82550DBC:
	// stw r27,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r27.u32);
loc_82550DC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82550DC8"))) PPC_WEAK_FUNC(sub_82550DC8);
PPC_FUNC_IMPL(__imp__sub_82550DC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,6784(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6784);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8281d650
	sub_8281D650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82550DD8"))) PPC_WEAK_FUNC(sub_82550DD8);
PPC_FUNC_IMPL(__imp__sub_82550DD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6784(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6784);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82550DF0"))) PPC_WEAK_FUNC(sub_82550DF0);
PPC_FUNC_IMPL(__imp__sub_82550DF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,6788(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6788);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8281d650
	sub_8281D650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82550E00"))) PPC_WEAK_FUNC(sub_82550E00);
PPC_FUNC_IMPL(__imp__sub_82550E00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6788);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82550E18"))) PPC_WEAK_FUNC(sub_82550E18);
PPC_FUNC_IMPL(__imp__sub_82550E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,3280
	ctx.r3.s64 = 3280;
	// bl 0x82833108
	ctx.lr = 0x82550E30;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82550e88
	if (ctx.cr0.eq) goto loc_82550E88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8265c840
	ctx.lr = 0x82550E40;
	sub_8265C840(ctx, base);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r10,r10,16576
	ctx.r10.s64 = ctx.r10.s64 + 16576;
	// addi r9,r9,18244
	ctx.r9.s64 = ctx.r9.s64 + 18244;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r8,-30936
	ctx.r8.s64 = ctx.r8.s64 + -30936;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r11.u32);
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// stw r10,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r9.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// b 0x82550e8c
	goto loc_82550E8C;
loc_82550E88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82550E8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82550EA0"))) PPC_WEAK_FUNC(sub_82550EA0);
PPC_FUNC_IMPL(__imp__sub_82550EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,25804(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25804);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82550ee0
	if (!ctx.cr0.eq) goto loc_82550EE0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,25804(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25804, ctx.r11.u32);
	// addi r3,r9,-14008
	ctx.r3.s64 = ctx.r9.s64 + -14008;
	// bl 0x82816528
	ctx.lr = 0x82550ED8;
	sub_82816528(ctx, base);
	// stw r3,25800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25800, ctx.r3.u32);
	// b 0x82550ee4
	goto loc_82550EE4;
loc_82550EE0:
	// lwz r3,25800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25800);
loc_82550EE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82550EF8"))) PPC_WEAK_FUNC(sub_82550EF8);
PPC_FUNC_IMPL(__imp__sub_82550EF8) {
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
	// bl 0x82550f48
	ctx.lr = 0x82550F18;
	sub_82550F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82550F2C;
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

__attribute__((alias("__imp__sub_82550F48"))) PPC_WEAK_FUNC(sub_82550F48);
PPC_FUNC_IMPL(__imp__sub_82550F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,12156
	ctx.r31.s64 = ctx.r11.s64 + 12156;
	// lwz r11,12152(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12152);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82550f90
	if (!ctx.cr0.eq) goto loc_82550F90;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-11016
	ctx.r9.s64 = ctx.r9.s64 + -11016;
	// stw r11,12152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12152, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,20840
	ctx.r3.s64 = ctx.r11.s64 + 20840;
	// bl 0x82a4c758
	ctx.lr = 0x82550F90;
	sub_82A4C758(ctx, base);
loc_82550F90:
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

__attribute__((alias("__imp__sub_82550FA8"))) PPC_WEAK_FUNC(sub_82550FA8);
PPC_FUNC_IMPL(__imp__sub_82550FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,3280
	ctx.r3.s64 = 3280;
	// bl 0x82833108
	ctx.lr = 0x82550FC0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82551018
	if (ctx.cr0.eq) goto loc_82551018;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8265c840
	ctx.lr = 0x82550FD0;
	sub_8265C840(ctx, base);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r10,r10,18416
	ctx.r10.s64 = ctx.r10.s64 + 18416;
	// addi r9,r9,20084
	ctx.r9.s64 = ctx.r9.s64 + 20084;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r8,-30936
	ctx.r8.s64 = ctx.r8.s64 + -30936;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r11.u32);
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// stw r10,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r9.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// b 0x8255101c
	goto loc_8255101C;
loc_82551018:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255101C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551030"))) PPC_WEAK_FUNC(sub_82551030);
PPC_FUNC_IMPL(__imp__sub_82551030) {
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
	// bl 0x82551080
	ctx.lr = 0x82551050;
	sub_82551080(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82551064;
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

__attribute__((alias("__imp__sub_82551080"))) PPC_WEAK_FUNC(sub_82551080);
PPC_FUNC_IMPL(__imp__sub_82551080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,12148
	ctx.r31.s64 = ctx.r11.s64 + 12148;
	// lwz r11,12144(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12144);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825510c8
	if (!ctx.cr0.eq) goto loc_825510C8;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-10996
	ctx.r9.s64 = ctx.r9.s64 + -10996;
	// stw r11,12144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12144, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,20816
	ctx.r3.s64 = ctx.r11.s64 + 20816;
	// bl 0x82a4c758
	ctx.lr = 0x825510C8;
	sub_82A4C758(ctx, base);
loc_825510C8:
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

__attribute__((alias("__imp__sub_825510E0"))) PPC_WEAK_FUNC(sub_825510E0);
PPC_FUNC_IMPL(__imp__sub_825510E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,25796(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25796);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82551120
	if (!ctx.cr0.eq) goto loc_82551120;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,25796(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25796, ctx.r11.u32);
	// addi r3,r9,-13984
	ctx.r3.s64 = ctx.r9.s64 + -13984;
	// bl 0x82816528
	ctx.lr = 0x82551118;
	sub_82816528(ctx, base);
	// stw r3,25792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25792, ctx.r3.u32);
	// b 0x82551124
	goto loc_82551124;
loc_82551120:
	// lwz r3,25792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25792);
loc_82551124:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551138"))) PPC_WEAK_FUNC(sub_82551138);
PPC_FUNC_IMPL(__imp__sub_82551138) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8254fef8
	sub_8254FEF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551140"))) PPC_WEAK_FUNC(sub_82551140);
PPC_FUNC_IMPL(__imp__sub_82551140) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8254ff58
	sub_8254FF58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551148"))) PPC_WEAK_FUNC(sub_82551148);
PPC_FUNC_IMPL(__imp__sub_82551148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-26092
	ctx.r3.s64 = ctx.r11.s64 + -26092;
	// blr 
	return;
}

