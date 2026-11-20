#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825B0260"))) PPC_WEAK_FUNC(sub_825B0260);
PPC_FUNC_IMPL(__imp__sub_825B0260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,-9100
	ctx.r3.s64 = ctx.r11.s64 + -9100;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B0270"))) PPC_WEAK_FUNC(sub_825B0270);
PPC_FUNC_IMPL(__imp__sub_825B0270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,-9008
	ctx.r3.s64 = ctx.r11.s64 + -9008;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B0280"))) PPC_WEAK_FUNC(sub_825B0280);
PPC_FUNC_IMPL(__imp__sub_825B0280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x825B0288;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82a61744
	ctx.lr = 0x825B0290;
	__savefpr_27(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x824df418
	ctx.lr = 0x825B029C;
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
	// lwz r28,136(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r29,152(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
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
	// lfs f27,-24640(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24640);
	ctx.f27.f64 = double(temp.f32);
	// lis r4,-16601
	ctx.r4.s64 = -1087963136;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f27,148(r1)
	temp.f32 = float(ctx.f27.f64);
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
	// lwz r11,5352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5352);
	// rldicr r9,r29,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r7,r28,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x824e5590
	ctx.lr = 0x825B034C;
	sub_824E5590(ctx, base);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r6,1740(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lis r10,-23022
	ctx.r10.s64 = -1508769792;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfs f29,18368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18368);
	ctx.f29.f64 = double(temp.f32);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lfs f30,-12104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f30.f64 = double(temp.f32);
	// stw r3,5356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5356, ctx.r3.u32);
	// stfs f29,168(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lfs f28,17060(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 17060);
	ctx.f28.f64 = double(temp.f32);
	// stw r6,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r6.u32);
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// stfs f28,160(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// rldicr r7,r4,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stfs f29,164(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lwz r29,5352(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5352);
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// ori r10,r10,52136
	ctx.r10.u64 = ctx.r10.u64 | 52136;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lis r4,-3736
	ctx.r4.s64 = -244842496;
	// ori r4,r4,3838
	ctx.r4.u64 = ctx.r4.u64 | 3838;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x824e5590
	ctx.lr = 0x825B03E4;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// stw r3,5360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5360, ctx.r3.u32);
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// addi r28,r29,32716
	ctx.r28.s64 = ctx.r29.s64 + 32716;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r27,5352(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5352);
	// lis r10,22763
	ctx.r10.s64 = 1491795968;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r3,r11,-16432
	ctx.r3.s64 = ctx.r11.s64 + -16432;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// ori r26,r10,37495
	ctx.r26.u64 = ctx.r10.u64 | 37495;
	// lfs f27,56(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	ctx.f27.f64 = double(temp.f32);
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
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f29,152(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x825B0438;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r25,168(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x825B047C;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// lis r11,-19521
	ctx.r11.s64 = -1279328256;
	// addi r3,r10,-16424
	ctx.r3.s64 = ctx.r10.s64 + -16424;
	// lwz r27,5352(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5352);
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// ori r26,r11,23324
	ctx.r26.u64 = ctx.r11.u64 | 23324;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
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
	// bl 0x82816528
	ctx.lr = 0x825B04C0;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r25,168(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
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
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x825B0504;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lwz r27,5352(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5352);
	// lis r11,16364
	ctx.r11.s64 = 1072431104;
	// addi r3,r10,-16416
	ctx.r3.s64 = ctx.r10.s64 + -16416;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// ori r26,r11,28383
	ctx.r26.u64 = ctx.r11.u64 | 28383;
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
	// bl 0x82816528
	ctx.lr = 0x825B0548;
	sub_82816528(ctx, base);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r27,168(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
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
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// bl 0x824e5590
	ctx.lr = 0x825B058C;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// lis r10,599
	ctx.r10.s64 = 39256064;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-16408
	ctx.r3.s64 = ctx.r11.s64 + -16408;
	// lwz r27,5352(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5352);
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// ori r26,r10,14532
	ctx.r26.u64 = ctx.r10.u64 | 14532;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
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
	// bl 0x82816528
	ctx.lr = 0x825B05D0;
	sub_82816528(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r25,160(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// std r25,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r25.u64);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x825B0614;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// lis r9,30100
	ctx.r9.s64 = 1972633600;
	// addi r3,r10,-16400
	ctx.r3.s64 = ctx.r10.s64 + -16400;
	// lfs f27,204(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	ctx.f27.f64 = double(temp.f32);
	// lwz r27,5352(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5352);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// ori r28,r9,42004
	ctx.r28.u64 = ctx.r9.u64 | 42004;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
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
	// bl 0x82816528
	ctx.lr = 0x825B065C;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r26,168(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r25,136(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rldicr r9,r25,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x825B06A0;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// lis r9,-13035
	ctx.r9.s64 = -854261760;
	// addi r3,r10,-16388
	ctx.r3.s64 = ctx.r10.s64 + -16388;
	// lwz r27,5352(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5352);
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// ori r28,r9,53749
	ctx.r28.u64 = ctx.r9.u64 | 53749;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
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
	// bl 0x82816528
	ctx.lr = 0x825B06E4;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r26,168(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// bl 0x824e5590
	ctx.lr = 0x825B0728;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// lis r9,-11265
	ctx.r9.s64 = -738263040;
	// addi r3,r10,-16376
	ctx.r3.s64 = ctx.r10.s64 + -16376;
	// lfs f30,32716(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32716);
	ctx.f30.f64 = double(temp.f32);
	// lwz r28,5352(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5352);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// ori r29,r9,44068
	ctx.r29.u64 = ctx.r9.u64 | 44068;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
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
	// bl 0x82816528
	ctx.lr = 0x825B0770;
	sub_82816528(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r27,168(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// ld r26,160(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// std r26,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r26.u64);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x825B07B4;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,24284
	ctx.r9.s64 = 1591476224;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// ori r29,r9,32798
	ctx.r29.u64 = ctx.r9.u64 | 32798;
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// addi r3,r10,-16364
	ctx.r3.s64 = ctx.r10.s64 + -16364;
	// lwz r28,5352(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5352);
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
	// bl 0x82816528
	ctx.lr = 0x825B07F8;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r28,168(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// bl 0x824e5590
	ctx.lr = 0x825B083C;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,5356(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5356);
	// lwz r11,2088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2088);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B085C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82a61790
	ctx.lr = 0x825B0868;
	__restfpr_27(ctx, base);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B0870"))) PPC_WEAK_FUNC(sub_825B0870);
PPC_FUNC_IMPL(__imp__sub_825B0870) {
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
	// std r7,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r7.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r7,200(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r30,236(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// std r9,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r9.u64);
	// lwz r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824e2080
	ctx.lr = 0x825B08B4;
	sub_824E2080(ctx, base);
	// lwz r11,3148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825b08f4
	if (ctx.cr6.eq) goto loc_825B08F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// stw r11,3148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3148, ctx.r11.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r11,r9,2632
	ctx.r11.s64 = ctx.r9.s64 + 2632;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lfs f1,-11456(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11456);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b0c30
	ctx.lr = 0x825B08F4;
	sub_825B0C30(ctx, base);
loc_825B08F4:
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

__attribute__((alias("__imp__sub_825B0910"))) PPC_WEAK_FUNC(sub_825B0910);
PPC_FUNC_IMPL(__imp__sub_825B0910) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,6112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b09a8
	if (ctx.cr6.eq) goto loc_825B09A8;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
loc_825B0944:
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825b0978
	if (!ctx.cr6.lt) goto loc_825B0978;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824112d0
	ctx.lr = 0x825B095C;
	sub_824112D0(ctx, base);
	// bl 0x82411cb0
	ctx.lr = 0x825B0960;
	sub_82411CB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825b0970
	if (ctx.cr0.eq) goto loc_825B0970;
	// lwz r11,6112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6112);
	// stw r11,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r11.u32);
loc_825B0970:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x825b0944
	goto loc_825B0944;
loc_825B0978:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,-8980
	ctx.r3.s64 = ctx.r11.s64 + -8980;
	// bl 0x82816528
	ctx.lr = 0x825B0984;
	sub_82816528(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r11,6112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6112);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// lfs f3,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82980630
	ctx.lr = 0x825B09A8;
	sub_82980630(ctx, base);
loc_825B09A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x824f0ce0
	ctx.lr = 0x825B09B4;
	sub_824F0CE0(ctx, base);
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

__attribute__((alias("__imp__sub_825B09D0"))) PPC_WEAK_FUNC(sub_825B09D0);
PPC_FUNC_IMPL(__imp__sub_825B09D0) {
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
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
loc_825B09F0:
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825b0a24
	if (!ctx.cr6.lt) goto loc_825B0A24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824112d0
	ctx.lr = 0x825B0A08;
	sub_824112D0(ctx, base);
	// bl 0x82411cb0
	ctx.lr = 0x825B0A0C;
	sub_82411CB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825b0a1c
	if (ctx.cr0.eq) goto loc_825B0A1C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r11.u32);
loc_825B0A1C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x825b09f0
	goto loc_825B09F0;
loc_825B0A24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f0e10
	ctx.lr = 0x825B0A2C;
	sub_824F0E10(ctx, base);
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

__attribute__((alias("__imp__sub_825B0A48"))) PPC_WEAK_FUNC(sub_825B0A48);
PPC_FUNC_IMPL(__imp__sub_825B0A48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3148, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B0A60"))) PPC_WEAK_FUNC(sub_825B0A60);
PPC_FUNC_IMPL(__imp__sub_825B0A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,2864(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2864);
	// bl 0x823c5ac8
	ctx.lr = 0x825B0A78;
	sub_823C5AC8(ctx, base);
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
	ctx.lr = 0x825B0A90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x825b0aa0
	if (!ctx.cr0.eq) goto loc_825B0AA0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B0AA0:
	// bl 0x8267be68
	ctx.lr = 0x825B0AA4;
	sub_8267BE68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B0AB8"))) PPC_WEAK_FUNC(sub_825B0AB8);
PPC_FUNC_IMPL(__imp__sub_825B0AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,2864(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2864);
	// bl 0x823c5ac8
	ctx.lr = 0x825B0AD0;
	sub_823C5AC8(ctx, base);
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
	ctx.lr = 0x825B0AE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825b0af4
	if (!ctx.cr0.eq) goto loc_825B0AF4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_825B0AF4:
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// lwz r3,3284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// ori r4,r4,64
	ctx.r4.u64 = ctx.r4.u64 | 64;
	// bl 0x82978d98
	ctx.lr = 0x825B0B04;
	sub_82978D98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B0B18"))) PPC_WEAK_FUNC(sub_825B0B18);
PPC_FUNC_IMPL(__imp__sub_825B0B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,1780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1780);
	// bl 0x82332928
	ctx.lr = 0x825B0B34;
	sub_82332928(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825b0b50
	if (ctx.cr0.eq) goto loc_825B0B50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,1620(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1620);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B0B50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825B0B50:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,6108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6108, ctx.r11.u32);
	// stw r10,3148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3148, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B0B78"))) PPC_WEAK_FUNC(sub_825B0B78);
PPC_FUNC_IMPL(__imp__sub_825B0B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,1780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1780);
	// bl 0x82332928
	ctx.lr = 0x825B0B94;
	sub_82332928(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825b0bb0
	if (ctx.cr0.eq) goto loc_825B0BB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,1624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1624);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B0BB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825B0BB0:
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// stw r10,6108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6108, ctx.r10.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,2632
	ctx.r4.s64 = ctx.r11.s64 + 2632;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B0BD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825b0be4
	if (!ctx.cr0.eq) goto loc_825B0BE4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3148, ctx.r11.u32);
loc_825B0BE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B0BF8"))) PPC_WEAK_FUNC(sub_825B0BF8);
PPC_FUNC_IMPL(__imp__sub_825B0BF8) {
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
	// li r3,3344
	ctx.r3.s64 = 3344;
	// bl 0x82833108
	ctx.lr = 0x825B0C0C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825b0c1c
	if (ctx.cr0.eq) goto loc_825B0C1C;
	// bl 0x8267b7a0
	ctx.lr = 0x825B0C18;
	sub_8267B7A0(ctx, base);
	// b 0x825b0c20
	goto loc_825B0C20;
loc_825B0C1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B0C20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B0C30"))) PPC_WEAK_FUNC(sub_825B0C30);
PPC_FUNC_IMPL(__imp__sub_825B0C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825B0C38;
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
	ctx.lr = 0x825B0C50;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825b0cd8
	if (!ctx.cr0.eq) goto loc_825B0CD8;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8239db68
	ctx.lr = 0x825B0C60;
	sub_8239DB68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B0C74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x825B0C80;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x825b0cc4
	if (ctx.cr0.eq) goto loc_825B0CC4;
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
	// b 0x825b0cc8
	goto loc_825B0CC8;
loc_825B0CC4:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_825B0CC8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x825B0CD4;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825B0CD8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,-11456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11456);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B0CF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B0D00"))) PPC_WEAK_FUNC(sub_825B0D00);
PPC_FUNC_IMPL(__imp__sub_825B0D00) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825afb88
	sub_825AFB88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B0D08"))) PPC_WEAK_FUNC(sub_825B0D08);
PPC_FUNC_IMPL(__imp__sub_825B0D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-26396
	ctx.r3.s64 = ctx.r11.s64 + -26396;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B0D18"))) PPC_WEAK_FUNC(sub_825B0D18);
PPC_FUNC_IMPL(__imp__sub_825B0D18) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239e220
	sub_8239E220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B0D20"))) PPC_WEAK_FUNC(sub_825B0D20);
PPC_FUNC_IMPL(__imp__sub_825B0D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x825B0D3C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825b0d54
	if (ctx.cr0.eq) goto loc_825B0D54;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x825b0e90
	ctx.lr = 0x825B0D50;
	sub_825B0E90(ctx, base);
	// b 0x825b0d58
	goto loc_825B0D58;
loc_825B0D54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B0D58:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b0d6c
	if (ctx.cr6.eq) goto loc_825B0D6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_825B0D6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B0D80"))) PPC_WEAK_FUNC(sub_825B0D80);
PPC_FUNC_IMPL(__imp__sub_825B0D80) {
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
	// beq cr6,0x825b0db0
	if (ctx.cr6.eq) goto loc_825B0DB0;
	// bl 0x8239e220
	ctx.lr = 0x825B0DA8;
	sub_8239E220(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x825b0df0
	if (ctx.cr6.eq) goto loc_825B0DF0;
loc_825B0DB0:
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82346e08
	ctx.lr = 0x825B0DC4;
	sub_82346E08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825b0df0
	if (!ctx.cr0.eq) goto loc_825B0DF0;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x8234b850
	ctx.lr = 0x825B0DE4;
	sub_8234B850(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x825b0df4
	if (ctx.cr0.eq) goto loc_825B0DF4;
loc_825B0DF0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825B0DF4:
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

__attribute__((alias("__imp__sub_825B0E10"))) PPC_WEAK_FUNC(sub_825B0E10);
PPC_FUNC_IMPL(__imp__sub_825B0E10) {
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
	// bl 0x8239e220
	ctx.lr = 0x825B0E30;
	sub_8239E220(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825b0e40
	if (!ctx.cr6.eq) goto loc_825B0E40;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// b 0x825b0e74
	goto loc_825B0E74;
loc_825B0E40:
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82346ed0
	ctx.lr = 0x825B0E54;
	sub_82346ED0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825b0e74
	if (!ctx.cr0.eq) goto loc_825B0E74;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x8234b8c8
	ctx.lr = 0x825B0E74;
	sub_8234B8C8(ctx, base);
loc_825B0E74:
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

__attribute__((alias("__imp__sub_825B0E90"))) PPC_WEAK_FUNC(sub_825B0E90);
PPC_FUNC_IMPL(__imp__sub_825B0E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825B0E98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-4828
	ctx.r11.s64 = ctx.r11.s64 + -4828;
	// addi r10,r10,-19340
	ctx.r10.s64 = ctx.r10.s64 + -19340;
	// addi r9,r9,-4812
	ctx.r9.s64 = ctx.r9.s64 + -4812;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r10,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r10.u32);
	// addi r28,r31,2000
	ctx.r28.s64 = ctx.r31.s64 + 2000;
	// stw r9,2036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2036, ctx.r9.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825b0ee0
	if (!ctx.cr6.eq) goto loc_825B0EE0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x825b0eec
	goto loc_825B0EEC;
loc_825B0EE0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_825B0EEC:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x823ff1a0
	ctx.lr = 0x825B0EF4;
	sub_823FF1A0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825b0f04
	if (!ctx.cr6.eq) goto loc_825B0F04;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x825b0f10
	goto loc_825B0F10;
loc_825B0F04:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_825B0F10:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82346f30
	ctx.lr = 0x825B0F1C;
	sub_82346F30(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825b0f2c
	if (!ctx.cr6.eq) goto loc_825B0F2C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x825b0f38
	goto loc_825B0F38;
loc_825B0F2C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_825B0F38:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,2032
	ctx.r3.s64 = ctx.r31.s64 + 2032;
	// bl 0x8234c128
	ctx.lr = 0x825B0F44;
	sub_8234C128(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r11,r11,-6504
	ctx.r11.s64 = ctx.r11.s64 + -6504;
	// addi r10,r10,-4932
	ctx.r10.s64 = ctx.r10.s64 + -4932;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r9,r9,-4880
	ctx.r9.s64 = ctx.r9.s64 + -4880;
	// addi r8,r8,-4856
	ctx.r8.s64 = ctx.r8.s64 + -4856;
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
	// stw r29,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B0FD0"))) PPC_WEAK_FUNC(sub_825B0FD0);
PPC_FUNC_IMPL(__imp__sub_825B0FD0) {
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
	// addi r31,r3,-32
	ctx.r31.s64 = ctx.r3.s64 + -32;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x825b12a8
	ctx.lr = 0x825B0FF4;
	sub_825B12A8(ctx, base);
	// bl 0x823ff098
	ctx.lr = 0x825B0FF8;
	sub_823FF098(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b1008
	if (ctx.cr0.eq) goto loc_825B1008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x825B1008;
	sub_82332DB8(ctx, base);
loc_825B1008:
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

__attribute__((alias("__imp__sub_825B1028"))) PPC_WEAK_FUNC(sub_825B1028);
PPC_FUNC_IMPL(__imp__sub_825B1028) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r11,r11,-4828
	ctx.r11.s64 = ctx.r11.s64 + -4828;
	// addi r10,r10,-19340
	ctx.r10.s64 = ctx.r10.s64 + -19340;
	// addi r9,r9,-4812
	ctx.r9.s64 = ctx.r9.s64 + -4812;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r10.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r9,2036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2036, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r31,2000
	ctx.r30.s64 = ctx.r31.s64 + 2000;
	// bl 0x824cbb48
	ctx.lr = 0x825B1074;
	sub_824CBB48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ba650
	ctx.lr = 0x825B1080;
	sub_825BA650(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2032
	ctx.r3.s64 = ctx.r31.s64 + 2032;
	// bl 0x824d8ef8
	ctx.lr = 0x825B108C;
	sub_824D8EF8(ctx, base);
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r4,-18240
	ctx.r3.s64 = ctx.r4.s64 + -18240;
	// addi r11,r11,-6504
	ctx.r11.s64 = ctx.r11.s64 + -6504;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r7,r10,-4932
	ctx.r7.s64 = ctx.r10.s64 + -4932;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r5,r9,-4856
	ctx.r5.s64 = ctx.r9.s64 + -4856;
	// addi r6,r10,-4880
	ctx.r6.s64 = ctx.r10.s64 + -4880;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stwx r11,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r6,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r6.u32);
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
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r11,-4(r7)
	PPC_STORE_U32(ctx.r7.u32 + -4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-2032
	ctx.r11.s64 = ctx.r11.s64 + -2032;
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
	// bl 0x82816528
	ctx.lr = 0x825B1140;
	sub_82816528(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f0,1628(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1628, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f0,1632(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1632, temp.u32);
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

__attribute__((alias("__imp__sub_825B11C8"))) PPC_WEAK_FUNC(sub_825B11C8);
PPC_FUNC_IMPL(__imp__sub_825B11C8) {
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
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825ba700
	ctx.lr = 0x825B11F0;
	sub_825BA700(ctx, base);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x824d8f88
	ctx.lr = 0x825B1204;
	sub_824D8F88(ctx, base);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addic. r11,r11,268
	ctx.xer.ca = ctx.r11.u32 > 4294967027;
	ctx.r11.s64 = ctx.r11.s64 + 268;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b1230
	if (ctx.cr0.eq) goto loc_825B1230;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825b1230
	if (ctx.cr6.eq) goto loc_825B1230;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825b1234
	goto loc_825B1234;
loc_825B1230:
	// li r31,0
	ctx.r31.s64 = 0;
loc_825B1234:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-26344
	ctx.r3.s64 = ctx.r11.s64 + -26344;
	// bl 0x82816528
	ctx.lr = 0x825B1240;
	sub_82816528(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,16396
	ctx.r3.s64 = ctx.r11.s64 + 16396;
	// bl 0x82816528
	ctx.lr = 0x825B1250;
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
	ctx.lr = 0x825B1264;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-26308
	ctx.r3.s64 = ctx.r11.s64 + -26308;
	// bl 0x82816528
	ctx.lr = 0x825B1270;
	sub_82816528(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-17724
	ctx.r3.s64 = ctx.r11.s64 + -17724;
	// bl 0x82816528
	ctx.lr = 0x825B1280;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x825B1290;
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

__attribute__((alias("__imp__sub_825B12A8"))) PPC_WEAK_FUNC(sub_825B12A8);
PPC_FUNC_IMPL(__imp__sub_825B12A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r10,r10,-6504
	ctx.r10.s64 = ctx.r10.s64 + -6504;
	// addi r9,r9,-4932
	ctx.r9.s64 = ctx.r9.s64 + -4932;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// addi r8,r8,-4880
	ctx.r8.s64 = ctx.r8.s64 + -4880;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r7,r7,-4856
	ctx.r7.s64 = ctx.r7.s64 + -4856;
	// stw r10,-32(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32, ctx.r10.u32);
	// lwz r11,-32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r9,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r9.u32);
	// lwz r11,-32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r8,364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 364, ctx.r8.u32);
	// lwz r11,-32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r7,-32(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32, ctx.r7.u32);
	// lwz r11,-32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r11,-36(r10)
	PPC_STORE_U32(ctx.r10.u32 + -36, ctx.r11.u32);
	// lwz r11,-32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,-2032
	ctx.r11.s64 = ctx.r11.s64 + -2032;
	// stw r11,-36(r10)
	PPC_STORE_U32(ctx.r10.u32 + -36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B1338"))) PPC_WEAK_FUNC(sub_825B1338);
PPC_FUNC_IMPL(__imp__sub_825B1338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825B1340;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x824f6598
	ctx.lr = 0x825B1358;
	sub_824F6598(ctx, base);
	// stw r3,-28(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28, ctx.r3.u32);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x824ce338
	ctx.lr = 0x825B1378;
	sub_824CE338(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B1380"))) PPC_WEAK_FUNC(sub_825B1380);
PPC_FUNC_IMPL(__imp__sub_825B1380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825ba7d0
	ctx.lr = 0x825B13A4;
	sub_825BA7D0(ctx, base);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x824d9028
	ctx.lr = 0x825B13B8;
	sub_824D9028(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B13D0"))) PPC_WEAK_FUNC(sub_825B13D0);
PPC_FUNC_IMPL(__imp__sub_825B13D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825b1338
	sub_825B1338(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B13E0"))) PPC_WEAK_FUNC(sub_825B13E0);
PPC_FUNC_IMPL(__imp__sub_825B13E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825b0d80
	sub_825B0D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B13F0"))) PPC_WEAK_FUNC(sub_825B13F0);
PPC_FUNC_IMPL(__imp__sub_825B13F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825b0e10
	sub_825B0E10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B1400"))) PPC_WEAK_FUNC(sub_825B1400);
PPC_FUNC_IMPL(__imp__sub_825B1400) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825b0e10
	sub_825B0E10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B1410"))) PPC_WEAK_FUNC(sub_825B1410);
PPC_FUNC_IMPL(__imp__sub_825B1410) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825b0d20
	sub_825B0D20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B1420"))) PPC_WEAK_FUNC(sub_825B1420);
PPC_FUNC_IMPL(__imp__sub_825B1420) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825b11c8
	sub_825B11C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B1430"))) PPC_WEAK_FUNC(sub_825B1430);
PPC_FUNC_IMPL(__imp__sub_825B1430) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825b0d18
	sub_825B0D18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B1440"))) PPC_WEAK_FUNC(sub_825B1440);
PPC_FUNC_IMPL(__imp__sub_825B1440) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825b1380
	sub_825B1380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B1450"))) PPC_WEAK_FUNC(sub_825B1450);
PPC_FUNC_IMPL(__imp__sub_825B1450) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825b0d08
	sub_825B0D08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B1460"))) PPC_WEAK_FUNC(sub_825B1460);
PPC_FUNC_IMPL(__imp__sub_825B1460) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -400);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x825b0fd0
	sub_825B0FD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B1470"))) PPC_WEAK_FUNC(sub_825B1470);
PPC_FUNC_IMPL(__imp__sub_825B1470) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825b0fd0
	sub_825B0FD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B1480"))) PPC_WEAK_FUNC(sub_825B1480);
PPC_FUNC_IMPL(__imp__sub_825B1480) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825b0fd0
	sub_825B0FD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B1490"))) PPC_WEAK_FUNC(sub_825B1490);
PPC_FUNC_IMPL(__imp__sub_825B1490) {
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
	// lwz r11,-12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x824d2540
	ctx.lr = 0x825B14C0;
	sub_824D2540(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825b14e8
	if (ctx.cr6.eq) goto loc_825B14E8;
	// bl 0x8239e220
	ctx.lr = 0x825B14CC;
	sub_8239E220(ctx, base);
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
	ctx.lr = 0x825B14E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825b14ec
	goto loc_825B14EC;
loc_825B14E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B14EC:
	// stw r3,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_825B1508"))) PPC_WEAK_FUNC(sub_825B1508);
PPC_FUNC_IMPL(__imp__sub_825B1508) {
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
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x825b1490
	ctx.lr = 0x825B1538;
	sub_825B1490(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x825ba8c0
	ctx.lr = 0x825B1550;
	sub_825BA8C0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825b1578
	if (ctx.cr6.eq) goto loc_825B1578;
	// bl 0x8239e220
	ctx.lr = 0x825B155C;
	sub_8239E220(ctx, base);
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
	ctx.lr = 0x825B1574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825b157c
	goto loc_825B157C;
loc_825B1578:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B157C:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_825B15A8"))) PPC_WEAK_FUNC(sub_825B15A8);
PPC_FUNC_IMPL(__imp__sub_825B15A8) {
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
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
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
	// lwz r30,1584(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825b167c
	if (ctx.cr6.eq) goto loc_825B167C;
	// lwz r11,2112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825b167c
	if (!ctx.cr6.gt) goto loc_825B167C;
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825b167c
	if (!ctx.cr0.eq) goto loc_825B167C;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,1928(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1928);
	// bne cr6,0x825b1638
	if (!ctx.cr6.eq) goto loc_825B1638;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825b1654
	goto loc_825B1654;
loc_825B1638:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
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
loc_825B1654:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x824d77f8
	ctx.lr = 0x825B165C;
	sub_824D77F8(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b167c
	if (ctx.cr0.eq) goto loc_825B167C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,1384(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1384);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B167C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825B167C:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,1292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B16BC;
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

__attribute__((alias("__imp__sub_825B16D8"))) PPC_WEAK_FUNC(sub_825B16D8);
PPC_FUNC_IMPL(__imp__sub_825B16D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x825B16E0;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -144);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -140);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r22,1584(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x825b1960
	if (ctx.cr6.eq) goto loc_825B1960;
	// lwz r11,5492(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 5492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825b1960
	if (!ctx.cr6.gt) goto loc_825B1960;
	// lwz r11,-144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -144);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -140);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,1412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B174C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825b1960
	if (ctx.cr0.eq) goto loc_825B1960;
	// lwz r11,-144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -144);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,-140
	ctx.r10.s64 = ctx.r11.s64 + -140;
	// lwz r10,-140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -140);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,1928(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1928);
	// bne cr6,0x825b1790
	if (!ctx.cr6.eq) goto loc_825B1790;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x825b17ac
	goto loc_825B17AC;
loc_825B1790:
	// lwz r11,-144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -144);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -140);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_825B17AC:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x824d77f8
	ctx.lr = 0x825B17B4;
	sub_824D77F8(ctx, base);
	// lwz r11,-144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -144);
	// li r10,84
	ctx.r10.s64 = 84;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lwz r11,-140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -140);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x824cf958
	ctx.lr = 0x825B1800;
	sub_824CF958(ctx, base);
	// li r23,1
	ctx.r23.s64 = 1;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x825b18d4
	if (!ctx.cr0.gt) goto loc_825B18D4;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r26,108(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
loc_825B181C:
	// lwz r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825b18c8
	if (ctx.cr6.eq) goto loc_825B18C8;
	// lwz r11,2112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825b18c8
	if (!ctx.cr6.gt) goto loc_825B18C8;
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825b18c8
	if (!ctx.cr0.eq) goto loc_825B18C8;
	// lwz r11,-144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -144);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -140);
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
	ctx.lr = 0x825B1874;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825b1884
	if (!ctx.cr0.eq) goto loc_825B1884;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x825b18c8
	if (!ctx.cr6.eq) goto loc_825B18C8;
loc_825B1884:
	// lwz r11,656(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 656);
	// addi r5,r29,620
	ctx.r5.s64 = ctx.r29.s64 + 620;
	// lwz r10,660(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 660);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,664(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 664);
	// addi r3,r22,620
	ctx.r3.s64 = ctx.r22.s64 + 620;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x824cb778
	ctx.lr = 0x825B18AC;
	sub_824CB778(ctx, base);
	// cmplw cr6,r27,r29
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x825b18b8
	if (!ctx.cr6.eq) goto loc_825B18B8;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_825B18B8:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// slw r10,r23,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r3.u8 & 0x3F));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
loc_825B18C8:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,84
	ctx.r26.s64 = ctx.r26.s64 + 84;
	// bne 0x825b181c
	if (!ctx.cr0.eq) goto loc_825B181C;
loc_825B18D4:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
loc_825B18DC:
	// slw r9,r23,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// and. r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825b18ec
	if (ctx.cr0.eq) goto loc_825B18EC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_825B18EC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x825b18dc
	if (ctx.cr6.lt) goto loc_825B18DC;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x825b1908
	if (ctx.cr6.lt) goto loc_825B1908;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x825b1940
	goto loc_825B1940;
loc_825B1908:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x825b193c
	if (!ctx.cr6.eq) goto loc_825B193C;
	// lwz r11,656(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 656);
	// addi r5,r27,620
	ctx.r5.s64 = ctx.r27.s64 + 620;
	// lwz r10,660(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 660);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,664(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 664);
	// addi r3,r22,620
	ctx.r3.s64 = ctx.r22.s64 + 620;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x824cb778
	ctx.lr = 0x825B1938;
	sub_824CB778(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_825B193C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_825B1940:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,1600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B1954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823ff140
	ctx.lr = 0x825B195C;
	sub_823FF140(ctx, base);
	// b 0x825b1974
	goto loc_825B1974;
loc_825B1960:
	// lwz r11,-144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -144);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -108);
	// bl 0x829e3da8
	ctx.lr = 0x825B1974;
	sub_829E3DA8(ctx, base);
loc_825B1974:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B1980"))) PPC_WEAK_FUNC(sub_825B1980);
PPC_FUNC_IMPL(__imp__sub_825B1980) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -96);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82347478
	ctx.lr = 0x825B19AC;
	sub_82347478(ctx, base);
	// lwz r11,-96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -96);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,-92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,1584(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825b1a84
	if (ctx.cr6.eq) goto loc_825B1A84;
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// lwz r9,664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r11,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r11.u32);
	// stw r10,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r10.u32);
	// stw r9,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r9.u32);
	// lwz r11,-96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -96);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,-92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 668, ctx.r8.u32);
	// stw r7,672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 672, ctx.r7.u32);
	// stw r9,676(r11)
	PPC_STORE_U32(ctx.r11.u32 + 676, ctx.r9.u32);
	// lwz r11,-96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -96);
	// lwz r10,656(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// lwz r9,660(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// lwz r8,664(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,-92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B1A64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1384);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B1A7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,5332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5332, ctx.r11.u32);
loc_825B1A84:
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

__attribute__((alias("__imp__sub_825B1AA0"))) PPC_WEAK_FUNC(sub_825B1AA0);
PPC_FUNC_IMPL(__imp__sub_825B1AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -96);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,-92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,-96
	ctx.r10.s64 = ctx.r11.s64 + -96;
	// lwz r3,-88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1476);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B1AE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -96);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,1584(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b1b18
	if (ctx.cr6.eq) goto loc_825B1B18;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,5332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5332, ctx.r10.u32);
loc_825B1B18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B1B30"))) PPC_WEAK_FUNC(sub_825B1B30);
PPC_FUNC_IMPL(__imp__sub_825B1B30) {
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
	// lwz r11,-8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,1584(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B1B78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2240);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B1B90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,16440
	ctx.r3.s64 = ctx.r11.s64 + 16440;
	// lwz r31,1428(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// bl 0x82816528
	ctx.lr = 0x825B1BA0;
	sub_82816528(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f1,-12104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82965458
	ctx.lr = 0x825B1BB8;
	sub_82965458(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B1BD0"))) PPC_WEAK_FUNC(sub_825B1BD0);
PPC_FUNC_IMPL(__imp__sub_825B1BD0) {
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-29016
	ctx.r3.s64 = ctx.r11.s64 + -29016;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82816528
	ctx.lr = 0x825B1BF8;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x825b1c24
	if (!ctx.cr6.eq) goto loc_825B1C24;
	// lwz r11,-96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -96);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,1708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1708, ctx.r9.u32);
loc_825B1C24:
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

__attribute__((alias("__imp__sub_825B1C40"))) PPC_WEAK_FUNC(sub_825B1C40);
PPC_FUNC_IMPL(__imp__sub_825B1C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825B1C48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -148);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -140);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r29,1588(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1588);
	// lwz r3,3392(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3392);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b1c80
	if (ctx.cr6.eq) goto loc_825B1C80;
	// bl 0x82978ed0
	ctx.lr = 0x825B1C80;
	sub_82978ED0(ctx, base);
loc_825B1C80:
	// lwz r11,-148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -148);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -140);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825b1dec
	if (ctx.cr6.eq) goto loc_825B1DEC;
	// lwz r11,-148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -148);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-148
	ctx.r3.s64 = ctx.r11.s64 + -148;
	// lwz r11,-148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -148);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B1CBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x825b1dd8
	if (ctx.cr0.eq) goto loc_825B1DD8;
	// lwz r11,-148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -148);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-148
	ctx.r3.s64 = ctx.r11.s64 + -148;
	// bl 0x824d9da0
	ctx.lr = 0x825B1CD8;
	sub_824D9DA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825b1dd8
	if (ctx.cr0.eq) goto loc_825B1DD8;
	// lwz r11,-148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -148);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -140);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x824cf738
	ctx.lr = 0x825B1D08;
	sub_824CF738(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825b1dd8
	if (ctx.cr0.eq) goto loc_825B1DD8;
	// lwz r11,2748(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2748);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825b1d4c
	if (ctx.cr6.eq) goto loc_825B1D4C;
	// lwz r11,-148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -148);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -140);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,1136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B1D4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825B1D4C:
	// lwz r30,1780(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1780);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x825b1d94
	if (ctx.cr6.eq) goto loc_825B1D94;
	// bl 0x823c5bd0
	ctx.lr = 0x825B1D5C;
	sub_823C5BD0(ctx, base);
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
	ctx.lr = 0x825B1D74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x825b1d84
	if (!ctx.cr0.eq) goto loc_825B1D84;
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B1D84:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B1D94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825B1D94:
	// lwz r11,-148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -148);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -140);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,-148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -148);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -140);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,1588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1588);
	// stw r9,6076(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6076, ctx.r9.u32);
	// b 0x825b1dec
	goto loc_825B1DEC;
loc_825B1DD8:
	// lwz r11,-148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -148);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -112);
	// bl 0x829e3da8
	ctx.lr = 0x825B1DEC;
	sub_829E3DA8(ctx, base);
loc_825B1DEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B1DF8"))) PPC_WEAK_FUNC(sub_825B1DF8);
PPC_FUNC_IMPL(__imp__sub_825B1DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-26268
	ctx.r3.s64 = ctx.r11.s64 + -26268;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B1E08"))) PPC_WEAK_FUNC(sub_825B1E08);
PPC_FUNC_IMPL(__imp__sub_825B1E08) {
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
	// beq cr6,0x825b1e40
	if (ctx.cr6.eq) goto loc_825B1E40;
	// bl 0x8239e770
	ctx.lr = 0x825B1E30;
	sub_8239E770(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825b1e40
	if (!ctx.cr6.eq) goto loc_825B1E40;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825b1e4c
	goto loc_825B1E4C;
loc_825B1E40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824040a0
	ctx.lr = 0x825B1E4C;
	sub_824040A0(ctx, base);
loc_825B1E4C:
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

__attribute__((alias("__imp__sub_825B1E68"))) PPC_WEAK_FUNC(sub_825B1E68);
PPC_FUNC_IMPL(__imp__sub_825B1E68) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239e770
	sub_8239E770(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B1E70"))) PPC_WEAK_FUNC(sub_825B1E70);
PPC_FUNC_IMPL(__imp__sub_825B1E70) {
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
	// li r3,6112
	ctx.r3.s64 = 6112;
	// bl 0x82833108
	ctx.lr = 0x825B1E90;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825b1ee8
	if (ctx.cr0.eq) goto loc_825B1EE8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82400f98
	ctx.lr = 0x825B1EA4;
	sub_82400F98(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r11,r11,-4496
	ctx.r11.s64 = ctx.r11.s64 + -4496;
	// addi r10,r10,-2140
	ctx.r10.s64 = ctx.r10.s64 + -2140;
	// addi r9,r9,-2088
	ctx.r9.s64 = ctx.r9.s64 + -2088;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,6096(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6096);
	// stw r11,6096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6096, ctx.r11.u32);
	// lwz r11,6100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6100);
	// stw r11,6100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6100, ctx.r11.u32);
	// lwz r11,6104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6104);
	// stw r11,6104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6104, ctx.r11.u32);
	// b 0x825b1eec
	goto loc_825B1EEC;
loc_825B1EE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B1EEC:
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

__attribute__((alias("__imp__sub_825B1F08"))) PPC_WEAK_FUNC(sub_825B1F08);
PPC_FUNC_IMPL(__imp__sub_825B1F08) {
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
	// bl 0x8239e770
	ctx.lr = 0x825B1F28;
	sub_8239E770(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825b1f3c
	if (ctx.cr6.eq) goto loc_825B1F3C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82404040
	ctx.lr = 0x825B1F3C;
	sub_82404040(ctx, base);
loc_825B1F3C:
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

__attribute__((alias("__imp__sub_825B1F58"))) PPC_WEAK_FUNC(sub_825B1F58);
PPC_FUNC_IMPL(__imp__sub_825B1F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,-4804
	ctx.r3.s64 = ctx.r11.s64 + -4804;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B1F68"))) PPC_WEAK_FUNC(sub_825B1F68);
PPC_FUNC_IMPL(__imp__sub_825B1F68) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r11,r11,-4496
	ctx.r11.s64 = ctx.r11.s64 + -4496;
	// addi r10,r10,-2140
	ctx.r10.s64 = ctx.r10.s64 + -2140;
	// addi r9,r9,-2088
	ctx.r9.s64 = ctx.r9.s64 + -2088;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x824dbe08
	ctx.lr = 0x825B1FAC;
	sub_824DBE08(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b1fbc
	if (ctx.cr0.eq) goto loc_825B1FBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x825B1FBC;
	sub_82332DB8(ctx, base);
loc_825B1FBC:
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

__attribute__((alias("__imp__sub_825B1FD8"))) PPC_WEAK_FUNC(sub_825B1FD8);
PPC_FUNC_IMPL(__imp__sub_825B1FD8) {
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
	// addi r31,r11,-21420
	ctx.r31.s64 = ctx.r11.s64 + -21420;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x825B2010;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 * 24;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b203c
	if (ctx.cr0.eq) goto loc_825B203C;
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
loc_825B203C:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x825b2060
	if (ctx.cr6.eq) goto loc_825B2060;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82332c38
	ctx.lr = 0x825B2060;
	sub_82332C38(ctx, base);
loc_825B2060:
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

__attribute__((alias("__imp__sub_825B2078"))) PPC_WEAK_FUNC(sub_825B2078);
PPC_FUNC_IMPL(__imp__sub_825B2078) {
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
	// addi r11,r11,-21420
	ctx.r11.s64 = ctx.r11.s64 + -21420;
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
	// ble cr6,0x825b20e4
	if (!ctx.cr6.gt) goto loc_825B20E4;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_825B20B4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x825b20d4
	if (ctx.cr6.eq) goto loc_825B20D4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825b20b4
	if (ctx.cr6.lt) goto loc_825B20B4;
	// b 0x825b20e4
	goto loc_825B20E4;
loc_825B20D4:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_825B20E4:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825b210c
	if (ctx.cr6.eq) goto loc_825B210C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825B2104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825b2110
	goto loc_825B2110;
loc_825B210C:
	// bl 0x824daf88
	ctx.lr = 0x825B2110;
	sub_824DAF88(ctx, base);
loc_825B2110:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B2120"))) PPC_WEAK_FUNC(sub_825B2120);
PPC_FUNC_IMPL(__imp__sub_825B2120) {
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
	// addi r11,r11,-21420
	ctx.r11.s64 = ctx.r11.s64 + -21420;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x825b2180
	if (!ctx.cr6.gt) goto loc_825B2180;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_825B214C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x825b216c
	if (ctx.cr6.eq) goto loc_825B216C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825b214c
	if (ctx.cr6.lt) goto loc_825B214C;
	// b 0x825b2180
	goto loc_825B2180;
loc_825B216C:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b2188
	if (!ctx.cr6.eq) goto loc_825B2188;
loc_825B2180:
	// bl 0x824db030
	ctx.lr = 0x825B2184;
	sub_824DB030(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_825B2188:
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

__attribute__((alias("__imp__sub_825B21A0"))) PPC_WEAK_FUNC(sub_825B21A0);
PPC_FUNC_IMPL(__imp__sub_825B21A0) {
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
	// addi r11,r11,-21420
	ctx.r11.s64 = ctx.r11.s64 + -21420;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x825b2220
	if (!ctx.cr6.gt) goto loc_825B2220;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_825B21DC:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x825b21fc
	if (ctx.cr6.eq) goto loc_825B21FC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825b21dc
	if (ctx.cr6.lt) goto loc_825B21DC;
	// b 0x825b2220
	goto loc_825B2220;
loc_825B21FC:
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
	ctx.lr = 0x825B2218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825b222c
	if (!ctx.cr0.eq) goto loc_825B222C;
loc_825B2220:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824db0b0
	ctx.lr = 0x825B222C;
	sub_824DB0B0(ctx, base);
loc_825B222C:
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

__attribute__((alias("__imp__sub_825B2248"))) PPC_WEAK_FUNC(sub_825B2248);
PPC_FUNC_IMPL(__imp__sub_825B2248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x825B2250;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824db158
	ctx.lr = 0x825B225C;
	sub_824DB158(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r11,r11,-4496
	ctx.r11.s64 = ctx.r11.s64 + -4496;
	// addi r10,r10,-2140
	ctx.r10.s64 = ctx.r10.s64 + -2140;
	// addi r9,r9,-2088
	ctx.r9.s64 = ctx.r9.s64 + -2088;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,-6668
	ctx.r3.s64 = ctx.r11.s64 + -6668;
	// bl 0x82816528
	ctx.lr = 0x825B228C;
	sub_82816528(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-26396
	ctx.r3.s64 = ctx.r11.s64 + -26396;
	// bl 0x82816528
	ctx.lr = 0x825B229C;
	sub_82816528(ctx, base);
	// stw r3,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,-4704
	ctx.r3.s64 = ctx.r11.s64 + -4704;
	// bl 0x82816528
	ctx.lr = 0x825B22AC;
	sub_82816528(ctx, base);
	// stw r3,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,-4668
	ctx.r3.s64 = ctx.r11.s64 + -4668;
	// bl 0x82816528
	ctx.lr = 0x825B22BC;
	sub_82816528(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// stw r3,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r3.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825b2300
	if (!ctx.cr6.eq) goto loc_825B2300;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// stw r10,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r10.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825b2300
	if (!ctx.cr6.eq) goto loc_825B2300;
	// lwz r11,1052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825b2300
	if (!ctx.cr6.eq) goto loc_825B2300;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r11.u32);
loc_825B2300:
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lwz r9,2852(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2852);
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,25356
	ctx.r28.s64 = ctx.r11.s64 + 25356;
	// lwz r11,25360(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25360);
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825b2344
	if (!ctx.cr0.eq) goto loc_825B2344;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-2064
	ctx.r9.s64 = ctx.r9.s64 + -2064;
	// stw r11,25360(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25360, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// addi r3,r11,23144
	ctx.r3.s64 = ctx.r11.s64 + 23144;
	// bl 0x82a4c758
	ctx.lr = 0x825B2344;
	sub_82A4C758(ctx, base);
loc_825B2344:
	// lwz r11,2852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2852);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lis r5,-31963
	ctx.r5.s64 = -2094727168;
	// lwz r11,2852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2852);
	// lfs f0,23752(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23752);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// lis r4,-32215
	ctx.r4.s64 = -2111242240;
	// stfs f0,1696(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1696, temp.u32);
	// lwz r10,1492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stfs f0,3120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3120, temp.u32);
	// stw r30,3172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3172, ctx.r30.u32);
	// lfs f13,16540(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16540);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f12,24088(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24088);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lfs f11,32708(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32708);
	ctx.f11.f64 = double(temp.f32);
	// lis r3,-32215
	ctx.r3.s64 = -2111242240;
	// lfs f0,19632(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 19632);
	ctx.f0.f64 = double(temp.f32);
	// lis r28,-32215
	ctx.r28.s64 = -2111242240;
	// stfs f13,1700(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1700, temp.u32);
	// ori r9,r7,65535
	ctx.r9.u64 = ctx.r7.u64 | 65535;
	// stfs f13,1704(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1704, temp.u32);
	// lis r27,26549
	ctx.r27.s64 = 1739915264;
	// stfs f12,3108(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3108, temp.u32);
	// li r29,2
	ctx.r29.s64 = 2;
	// stfs f11,3112(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3112, temp.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stfs f0,52(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// lwz r6,1492(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lfs f0,16800(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16800);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1024
	ctx.r10.s64 = 1024;
	// stfs f0,56(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 56, temp.u32);
	// lwz r6,1492(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lfs f0,20192(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20192);
	ctx.f0.f64 = double(temp.f32);
	// li r4,20
	ctx.r4.s64 = 20;
	// stfs f0,64(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 64, temp.u32);
	// lwz r6,1492(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stw r11,132(r6)
	PPC_STORE_U32(ctx.r6.u32 + 132, ctx.r11.u32);
	// lfs f0,17816(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 17816);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,1492(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// li r5,50
	ctx.r5.s64 = 50;
	// stw r11,144(r6)
	PPC_STORE_U32(ctx.r6.u32 + 144, ctx.r11.u32);
	// li r6,8192
	ctx.r6.s64 = 8192;
	// lwz r26,1492(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r11,108(r26)
	PPC_STORE_U32(ctx.r26.u32 + 108, ctx.r11.u32);
	// ori r27,r27,52330
	ctx.r27.u64 = ctx.r27.u64 | 52330;
	// lwz r3,1492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f13,912(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,5392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5392, ctx.r10.u32);
	// stfs f13,3988(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3988, temp.u32);
	// stw r10,5400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5400, ctx.r10.u32);
	// stw r10,5396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5396, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r29.u32);
	// stw r11,5448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5448, ctx.r11.u32);
	// stw r11,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r11.u32);
	// stw r27,5468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5468, ctx.r27.u32);
	// stw r29,2236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2236, ctx.r29.u32);
	// stw r4,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r4.u32);
	// stw r4,1976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1976, ctx.r4.u32);
	// stw r5,1980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1980, ctx.r5.u32);
	// stw r5,1984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1984, ctx.r5.u32);
	// stw r30,3752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3752, ctx.r30.u32);
	// stw r8,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r8.u32);
	// stw r7,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r7.u32);
	// stw r9,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r9.u32);
	// stw r30,3064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3064, ctx.r30.u32);
	// stw r30,2180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2180, ctx.r30.u32);
	// stw r30,6096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6096, ctx.r30.u32);
	// stw r6,3812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3812, ctx.r6.u32);
	// stw r6,3816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3816, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B2488"))) PPC_WEAK_FUNC(sub_825B2488);
PPC_FUNC_IMPL(__imp__sub_825B2488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824de388
	ctx.lr = 0x825B24A0;
	sub_824DE388(ctx, base);
	// lwz r11,5728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825b24b4
	if (ctx.cr6.eq) goto loc_825B24B4;
	// lwz r4,5724(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5724);
	// b 0x825b24bc
	goto loc_825B24BC;
loc_825B24B4:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_825B24BC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82409058
	ctx.lr = 0x825B24C4;
	sub_82409058(ctx, base);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825b24e0
	if (ctx.cr6.eq) goto loc_825B24E0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b24e0
	if (ctx.cr6.eq) goto loc_825B24E0;
	// bl 0x82332db8
	ctx.lr = 0x825B24E0;
	sub_82332DB8(ctx, base);
loc_825B24E0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B24F8"))) PPC_WEAK_FUNC(sub_825B24F8);
PPC_FUNC_IMPL(__imp__sub_825B24F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r10,1740(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1740);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x825b2534
	if (!ctx.cr6.gt) goto loc_825B2534;
	// lwz r11,1736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1736);
loc_825B2514:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,2184(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2184);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x825b2528
	if (!ctx.cr6.gt) goto loc_825B2528;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_825B2528:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x825b2514
	if (!ctx.cr0.eq) goto loc_825B2514;
loc_825B2534:
	// stw r8,2184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2184, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B2540"))) PPC_WEAK_FUNC(sub_825B2540);
PPC_FUNC_IMPL(__imp__sub_825B2540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,-4644
	ctx.r3.s64 = ctx.r11.s64 + -4644;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B2550"))) PPC_WEAK_FUNC(sub_825B2550);
PPC_FUNC_IMPL(__imp__sub_825B2550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,-4552
	ctx.r3.s64 = ctx.r11.s64 + -4552;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B2560"))) PPC_WEAK_FUNC(sub_825B2560);
PPC_FUNC_IMPL(__imp__sub_825B2560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,16572(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16572);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-29292(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29292);
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

__attribute__((alias("__imp__sub_825B2580"))) PPC_WEAK_FUNC(sub_825B2580);
PPC_FUNC_IMPL(__imp__sub_825B2580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x825B2588;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82a61744
	ctx.lr = 0x825B2590;
	__savefpr_27(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x824df418
	ctx.lr = 0x825B259C;
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
	// lwz r28,136(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r29,152(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
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
	// lfs f27,-24640(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24640);
	ctx.f27.f64 = double(temp.f32);
	// lis r4,-16601
	ctx.r4.s64 = -1087963136;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// ori r10,r10,31988
	ctx.r10.u64 = ctx.r10.u64 | 31988;
	// stfs f27,148(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// ori r4,r4,62193
	ctx.r4.u64 = ctx.r4.u64 | 62193;
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,5352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5352);
	// rldicr r9,r29,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r7,r28,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x824e5590
	ctx.lr = 0x825B264C;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// stw r3,5356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5356, ctx.r3.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lfs f30,-12104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12104);
	ctx.f30.f64 = double(temp.f32);
	// lfs f28,17060(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17060);
	ctx.f28.f64 = double(temp.f32);
	// lwz r29,5352(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5352);
	// addi r3,r7,9748
	ctx.r3.s64 = ctx.r7.s64 + 9748;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f29,18368(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18368);
	ctx.f29.f64 = double(temp.f32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
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
	ctx.lr = 0x825B26A4;
	sub_82816528(ctx, base);
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
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
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lis r4,-3736
	ctx.r4.s64 = -244842496;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// ori r4,r4,3838
	ctx.r4.u64 = ctx.r4.u64 | 3838;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x825B26EC;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// stw r3,5360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5360, ctx.r3.u32);
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// addi r28,r29,32716
	ctx.r28.s64 = ctx.r29.s64 + 32716;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r27,5352(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5352);
	// lis r10,22763
	ctx.r10.s64 = 1491795968;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r3,r11,-16432
	ctx.r3.s64 = ctx.r11.s64 + -16432;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// ori r26,r10,37495
	ctx.r26.u64 = ctx.r10.u64 | 37495;
	// lfs f27,56(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	ctx.f27.f64 = double(temp.f32);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
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
	ctx.lr = 0x825B2740;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r25,168(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r24,136(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
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
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x825B2784;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// lis r9,-19521
	ctx.r9.s64 = -1279328256;
	// addi r3,r10,-16424
	ctx.r3.s64 = ctx.r10.s64 + -16424;
	// lwz r26,5352(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5352);
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// ori r27,r9,23324
	ctx.r27.u64 = ctx.r9.u64 | 23324;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
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
	// bl 0x82816528
	ctx.lr = 0x825B27C8;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r25,168(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
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
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x825B280C;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,16364
	ctx.r10.s64 = 1072431104;
	// lwz r27,5352(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5352);
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// ori r26,r10,28383
	ctx.r26.u64 = ctx.r10.u64 | 28383;
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
	// bl 0x82816528
	ctx.lr = 0x825B2850;
	sub_82816528(ctx, base);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r25,168(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r24,136(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r9,r24,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// bl 0x824e5590
	ctx.lr = 0x825B2894;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r11,599
	ctx.r11.s64 = 39256064;
	// lwz r27,5352(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5352);
	// addi r3,r10,-16408
	ctx.r3.s64 = ctx.r10.s64 + -16408;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// ori r26,r11,14532
	ctx.r26.u64 = ctx.r11.u64 | 14532;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
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
	// bl 0x82816528
	ctx.lr = 0x825B28D8;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r25,168(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
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
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x825B291C;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// lis r11,30100
	ctx.r11.s64 = 1972633600;
	// lfs f27,204(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	ctx.f27.f64 = double(temp.f32);
	// lwz r28,5352(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5352);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r3,r10,-16400
	ctx.r3.s64 = ctx.r10.s64 + -16400;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// ori r27,r11,42004
	ctx.r27.u64 = ctx.r11.u64 | 42004;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
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
	// bl 0x82816528
	ctx.lr = 0x825B2964;
	sub_82816528(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r26,160(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// std r26,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r26.u64);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x825B29A8;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-13035
	ctx.r9.s64 = -854261760;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// ori r28,r9,53749
	ctx.r28.u64 = ctx.r9.u64 | 53749;
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// addi r3,r10,-16388
	ctx.r3.s64 = ctx.r10.s64 + -16388;
	// lwz r27,5352(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5352);
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
	// bl 0x82816528
	ctx.lr = 0x825B29EC;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r26,168(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x825B2A30;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// lis r11,-11265
	ctx.r11.s64 = -738263040;
	// addi r3,r10,-16376
	ctx.r3.s64 = ctx.r10.s64 + -16376;
	// lfs f30,32716(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32716);
	ctx.f30.f64 = double(temp.f32);
	// lwz r29,5352(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5352);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ori r28,r11,44068
	ctx.r28.u64 = ctx.r11.u64 | 44068;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f28,160(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f28,164(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f28,168(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x825B2A78;
	sub_82816528(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r27,144(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lwz r26,152(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r27,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r27.u64);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x825B2ABC;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// lis r11,24284
	ctx.r11.s64 = 1591476224;
	// addi r3,r10,-16364
	ctx.r3.s64 = ctx.r10.s64 + -16364;
	// lwz r29,5352(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5352);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ori r28,r11,32798
	ctx.r28.u64 = ctx.r11.u64 | 32798;
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
	// bl 0x82816528
	ctx.lr = 0x825B2B00;
	sub_82816528(ctx, base);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r6,136(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r7,r8,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// rldicr r9,r6,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x825B2B44;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,5356(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5356);
	// lwz r11,2088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2088);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B2B64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82a61790
	ctx.lr = 0x825B2B70;
	__restfpr_27(ctx, base);
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B2B78"))) PPC_WEAK_FUNC(sub_825B2B78);
PPC_FUNC_IMPL(__imp__sub_825B2B78) {
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
	// lwz r3,1608(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x825B2B8C;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825b2ba0
	if (ctx.cr0.eq) goto loc_825B2BA0;
	// lwz r3,1708(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1708);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x825b2ba4
	if (!ctx.cr6.eq) goto loc_825B2BA4;
loc_825B2BA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B2BA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B2BB8"))) PPC_WEAK_FUNC(sub_825B2BB8);
PPC_FUNC_IMPL(__imp__sub_825B2BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,1780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b2c24
	if (ctx.cr6.eq) goto loc_825B2C24;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1620(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1620);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B2BF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1780);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1584(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B2C04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1832);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B2C24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825B2C24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B2C38"))) PPC_WEAK_FUNC(sub_825B2C38);
PPC_FUNC_IMPL(__imp__sub_825B2C38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1780(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1624);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825B2C5C"))) PPC_WEAK_FUNC(sub_825B2C5C);
PPC_FUNC_IMPL(__imp__sub_825B2C5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B2C60"))) PPC_WEAK_FUNC(sub_825B2C60);
PPC_FUNC_IMPL(__imp__sub_825B2C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x825B2C68;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b2c8c
	if (ctx.cr6.eq) goto loc_825B2C8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B2C8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825B2C8C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-8052
	ctx.r3.s64 = ctx.r11.s64 + -8052;
	// bl 0x82816528
	ctx.lr = 0x825B2C98;
	sub_82816528(ctx, base);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x825B2CAC;
	sub_829B98F8(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x825B2CB0;
	sub_82333A20(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x825b2dd8
	if (ctx.cr0.eq) goto loc_825B2DD8;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r28,r1,120
	ctx.r28.s64 = ctx.r1.s64 + 120;
	// addi r3,r11,-5704
	ctx.r3.s64 = ctx.r11.s64 + -5704;
	// addi r27,r1,136
	ctx.r27.s64 = ctx.r1.s64 + 136;
	// bl 0x82816528
	ctx.lr = 0x825B2CCC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,1780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1780);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x8284da30
	ctx.lr = 0x825B2CE0;
	sub_8284DA30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r27,r1,120
	ctx.r27.s64 = ctx.r1.s64 + 120;
	// addi r3,r11,-5508
	ctx.r3.s64 = ctx.r11.s64 + -5508;
	// addi r26,r1,136
	ctx.r26.s64 = ctx.r1.s64 + 136;
	// bl 0x82816528
	ctx.lr = 0x825B2CF4;
	sub_82816528(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x825B2D34;
	sub_828250B0(ctx, base);
	// bl 0x824ca610
	ctx.lr = 0x825B2D38;
	sub_824CA610(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825b2dd8
	if (ctx.cr0.eq) goto loc_825B2DD8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r10,628(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r5,620(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 620);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B2D64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// lis r5,-23435
	ctx.r5.s64 = -1535836160;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// ori r5,r5,16475
	ctx.r5.u64 = ctx.r5.u64 | 16475;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x823cf190
	ctx.lr = 0x825B2D88;
	sub_823CF190(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x8282b1e0
	ctx.lr = 0x825B2DB8;
	sub_8282B1E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1832);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B2DD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825B2DD8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B2DE0"))) PPC_WEAK_FUNC(sub_825B2DE0);
PPC_FUNC_IMPL(__imp__sub_825B2DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825B2DE8;
	__savegprlr_29(ctx, base);
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
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,5652
	ctx.r3.s64 = ctx.r31.s64 + 5652;
	// lwz r30,5668(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5668);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823327e0
	ctx.lr = 0x825B2E0C;
	sub_823327E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// rlwinm r30,r30,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r11,-29016
	ctx.r3.s64 = ctx.r11.s64 + -29016;
	// lwz r29,5664(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// bl 0x82816528
	ctx.lr = 0x825B2E20;
	sub_82816528(ctx, base);
	// stwx r3,r30,r29
	PPC_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r3.u32);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lwz r11,5664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r10,-4524
	ctx.r3.s64 = ctx.r10.s64 + -4524;
	// bl 0x82816528
	ctx.lr = 0x825B2E38;
	sub_82816528(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B2E48"))) PPC_WEAK_FUNC(sub_825B2E48);
PPC_FUNC_IMPL(__imp__sub_825B2E48) {
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
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x825B2E6C;
	sub_82414510(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e8298
	ctx.lr = 0x825B2E78;
	sub_824E8298(ctx, base);
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

__attribute__((alias("__imp__sub_825B2E90"))) PPC_WEAK_FUNC(sub_825B2E90);
PPC_FUNC_IMPL(__imp__sub_825B2E90) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x824dfef8
	ctx.lr = 0x825B2EB0;
	sub_824DFEF8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825b2f00
	if (ctx.cr6.eq) goto loc_825B2F00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82411708
	ctx.lr = 0x825B2EC0;
	sub_82411708(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825b2f00
	if (ctx.cr0.eq) goto loc_825B2F00;
	// lwz r11,460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 460);
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b2eec
	if (ctx.cr0.eq) goto loc_825B2EEC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,3148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3148, ctx.r11.u32);
	// stw r11,3208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3208, ctx.r11.u32);
	// stw r10,3128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3128, ctx.r10.u32);
	// b 0x825b2f00
	goto loc_825B2F00;
loc_825B2EEC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B2F00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825B2F00:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1832);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B2F20;
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

__attribute__((alias("__imp__sub_825B2F38"))) PPC_WEAK_FUNC(sub_825B2F38);
PPC_FUNC_IMPL(__imp__sub_825B2F38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1780(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1584(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825B2F58"))) PPC_WEAK_FUNC(sub_825B2F58);
PPC_FUNC_IMPL(__imp__sub_825B2F58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B2F60"))) PPC_WEAK_FUNC(sub_825B2F60);
PPC_FUNC_IMPL(__imp__sub_825B2F60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1780(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1588);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825B2F80"))) PPC_WEAK_FUNC(sub_825B2F80);
PPC_FUNC_IMPL(__imp__sub_825B2F80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B2F88"))) PPC_WEAK_FUNC(sub_825B2F88);
PPC_FUNC_IMPL(__imp__sub_825B2F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8239e770
	ctx.lr = 0x825B2FA0;
	sub_8239E770(ctx, base);
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
	ctx.lr = 0x825B2FB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x825b2fc8
	if (!ctx.cr0.eq) goto loc_825B2FC8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B2FC8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b2fd8
	if (ctx.cr6.eq) goto loc_825B2FD8;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,6100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6100, ctx.r10.u32);
loc_825B2FD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B2FF0"))) PPC_WEAK_FUNC(sub_825B2FF0);
PPC_FUNC_IMPL(__imp__sub_825B2FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8239e770
	ctx.lr = 0x825B3008;
	sub_8239E770(ctx, base);
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
	ctx.lr = 0x825B3020;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x825b3030
	if (!ctx.cr0.eq) goto loc_825B3030;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B3030:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b3040
	if (ctx.cr6.eq) goto loc_825B3040;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,6096(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6096, ctx.r10.u32);
loc_825B3040:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B3058"))) PPC_WEAK_FUNC(sub_825B3058);
PPC_FUNC_IMPL(__imp__sub_825B3058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8239e770
	ctx.lr = 0x825B3070;
	sub_8239E770(ctx, base);
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
	ctx.lr = 0x825B3088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825b3094
	if (!ctx.cr0.eq) goto loc_825B3094;
	// li r31,0
	ctx.r31.s64 = 0;
loc_825B3094:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825b30a4
	if (ctx.cr6.eq) goto loc_825B30A4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6096, ctx.r11.u32);
loc_825B30A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B30B8"))) PPC_WEAK_FUNC(sub_825B30B8);
PPC_FUNC_IMPL(__imp__sub_825B30B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x825B30C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// bl 0x82485a50
	ctx.lr = 0x825B30F8;
	sub_82485A50(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82410060
	ctx.lr = 0x825B3108;
	sub_82410060(ctx, base);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82833108
	ctx.lr = 0x825B3110;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825b316c
	if (ctx.cr0.eq) goto loc_825B316C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825b3128
	if (ctx.cr6.eq) goto loc_825B3128;
	// lwz r29,80(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// b 0x825b312c
	goto loc_825B312C;
loc_825B3128:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_825B312C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x825B3134;
	sub_82833180(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r11,r11,-2000
	ctx.r11.s64 = ctx.r11.s64 + -2000;
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// stw r26,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// b 0x825b3170
	goto loc_825B3170;
loc_825B316C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_825B3170:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833b88
	ctx.lr = 0x825B3188;
	sub_82833B88(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239d768
	ctx.lr = 0x825B3190;
	sub_8239D768(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B3198"))) PPC_WEAK_FUNC(sub_825B3198);
PPC_FUNC_IMPL(__imp__sub_825B3198) {
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
	// li r3,3296
	ctx.r3.s64 = 3296;
	// bl 0x82833108
	ctx.lr = 0x825B31AC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825b31bc
	if (ctx.cr0.eq) goto loc_825B31BC;
	// bl 0x8267ca88
	ctx.lr = 0x825B31B8;
	sub_8267CA88(ctx, base);
	// b 0x825b31c0
	goto loc_825B31C0;
loc_825B31BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B31C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B31D0"))) PPC_WEAK_FUNC(sub_825B31D0);
PPC_FUNC_IMPL(__imp__sub_825B31D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825b1f68
	sub_825B1F68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B31D8"))) PPC_WEAK_FUNC(sub_825B31D8);
PPC_FUNC_IMPL(__imp__sub_825B31D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825b1f08
	sub_825B1F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B31E0"))) PPC_WEAK_FUNC(sub_825B31E0);
PPC_FUNC_IMPL(__imp__sub_825B31E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x825b1f68
	sub_825B1F68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B31E8"))) PPC_WEAK_FUNC(sub_825B31E8);
PPC_FUNC_IMPL(__imp__sub_825B31E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,-2044
	ctx.r3.s64 = ctx.r11.s64 + -2044;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B31F8"))) PPC_WEAK_FUNC(sub_825B31F8);
PPC_FUNC_IMPL(__imp__sub_825B31F8) {
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
	// bl 0x825b3248
	ctx.lr = 0x825B3218;
	sub_825B3248(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825b322c
	if (ctx.cr6.eq) goto loc_825B322C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x825B322C;
	sub_82333B08(ctx, base);
loc_825B322C:
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

__attribute__((alias("__imp__sub_825B3248"))) PPC_WEAK_FUNC(sub_825B3248);
PPC_FUNC_IMPL(__imp__sub_825B3248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,12416
	ctx.r31.s64 = ctx.r11.s64 + 12416;
	// lwz r11,12420(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12420);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825b3290
	if (!ctx.cr0.eq) goto loc_825B3290;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-1920
	ctx.r9.s64 = ctx.r9.s64 + -1920;
	// stw r11,12420(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12420, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,23168
	ctx.r3.s64 = ctx.r11.s64 + 23168;
	// bl 0x82a4c758
	ctx.lr = 0x825B3290;
	sub_82A4C758(ctx, base);
loc_825B3290:
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

__attribute__((alias("__imp__sub_825B32A8"))) PPC_WEAK_FUNC(sub_825B32A8);
PPC_FUNC_IMPL(__imp__sub_825B32A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,25352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25352);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825b32e8
	if (!ctx.cr0.eq) goto loc_825B32E8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r11,25352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25352, ctx.r11.u32);
	// addi r3,r9,-2044
	ctx.r3.s64 = ctx.r9.s64 + -2044;
	// bl 0x82816528
	ctx.lr = 0x825B32E0;
	sub_82816528(ctx, base);
	// stw r3,25348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25348, ctx.r3.u32);
	// b 0x825b32ec
	goto loc_825B32EC;
loc_825B32E8:
	// lwz r3,25348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25348);
loc_825B32EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B3300"))) PPC_WEAK_FUNC(sub_825B3300);
PPC_FUNC_IMPL(__imp__sub_825B3300) {
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
	// bl 0x825b3248
	ctx.lr = 0x825B3320;
	sub_825B3248(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B3334;
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

__attribute__((alias("__imp__sub_825B3350"))) PPC_WEAK_FUNC(sub_825B3350);
PPC_FUNC_IMPL(__imp__sub_825B3350) {
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
	// beq cr6,0x825b3388
	if (ctx.cr6.eq) goto loc_825B3388;
	// bl 0x825b3248
	ctx.lr = 0x825B3378;
	sub_825B3248(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825b3388
	if (!ctx.cr6.eq) goto loc_825B3388;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825b3394
	goto loc_825B3394;
loc_825B3388:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x825B3394;
	sub_82333C70(ctx, base);
loc_825B3394:
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

__attribute__((alias("__imp__sub_825B33B0"))) PPC_WEAK_FUNC(sub_825B33B0);
PPC_FUNC_IMPL(__imp__sub_825B33B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x825b3248
	sub_825B3248(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B33B8"))) PPC_WEAK_FUNC(sub_825B33B8);
PPC_FUNC_IMPL(__imp__sub_825B33B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82833108
	ctx.lr = 0x825B33D4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825b3444
	if (ctx.cr0.eq) goto loc_825B3444;
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
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,-2000
	ctx.r9.s64 = ctx.r9.s64 + -2000;
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
	// b 0x825b3448
	goto loc_825B3448;
loc_825B3444:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B3448:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B3460"))) PPC_WEAK_FUNC(sub_825B3460);
PPC_FUNC_IMPL(__imp__sub_825B3460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-19192
	ctx.r3.s64 = ctx.r11.s64 + -19192;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B3470"))) PPC_WEAK_FUNC(sub_825B3470);
PPC_FUNC_IMPL(__imp__sub_825B3470) {
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
	// beq cr6,0x825b34a8
	if (ctx.cr6.eq) goto loc_825B34A8;
	// bl 0x823a8540
	ctx.lr = 0x825B3498;
	sub_823A8540(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825b34a8
	if (!ctx.cr6.eq) goto loc_825B34A8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825b34b4
	goto loc_825B34B4;
loc_825B34A8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824040a0
	ctx.lr = 0x825B34B4;
	sub_824040A0(ctx, base);
loc_825B34B4:
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

__attribute__((alias("__imp__sub_825B34D0"))) PPC_WEAK_FUNC(sub_825B34D0);
PPC_FUNC_IMPL(__imp__sub_825B34D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,6128
	ctx.r3.s64 = 6128;
	// bl 0x82833108
	ctx.lr = 0x825B34EC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825b3500
	if (ctx.cr0.eq) goto loc_825B3500;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825b3568
	ctx.lr = 0x825B34FC;
	sub_825B3568(ctx, base);
	// b 0x825b3504
	goto loc_825B3504;
loc_825B3500:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B3504:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B3518"))) PPC_WEAK_FUNC(sub_825B3518);
PPC_FUNC_IMPL(__imp__sub_825B3518) {
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
	// bl 0x823a8540
	ctx.lr = 0x825B3538;
	sub_823A8540(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825b354c
	if (ctx.cr6.eq) goto loc_825B354C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82404040
	ctx.lr = 0x825B354C;
	sub_82404040(ctx, base);
loc_825B354C:
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

__attribute__((alias("__imp__sub_825B3568"))) PPC_WEAK_FUNC(sub_825B3568);
PPC_FUNC_IMPL(__imp__sub_825B3568) {
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
	// bl 0x82400f98
	ctx.lr = 0x825B3588;
	sub_82400F98(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r11,r11,-1824
	ctx.r11.s64 = ctx.r11.s64 + -1824;
	// addi r10,r10,536
	ctx.r10.s64 = ctx.r10.s64 + 536;
	// addi r9,r9,-6552
	ctx.r9.s64 = ctx.r9.s64 + -6552;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lfs f0,6096(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6096);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6096(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6096, temp.u32);
	// lfs f0,6100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6100, temp.u32);
	// lfs f0,6104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6104, temp.u32);
	// lfs f0,6108(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6108, temp.u32);
	// lwz r11,6112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6112);
	// stw r11,6112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6112, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_825B35F0"))) PPC_WEAK_FUNC(sub_825B35F0);
PPC_FUNC_IMPL(__imp__sub_825B35F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,18640
	ctx.r3.s64 = ctx.r11.s64 + 18640;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B3600"))) PPC_WEAK_FUNC(sub_825B3600);
PPC_FUNC_IMPL(__imp__sub_825B3600) {
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
	// beq cr6,0x825b3638
	if (ctx.cr6.eq) goto loc_825B3638;
	// bl 0x8247a928
	ctx.lr = 0x825B3628;
	sub_8247A928(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825b3638
	if (!ctx.cr6.eq) goto loc_825B3638;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825b3644
	goto loc_825B3644;
loc_825B3638:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b3470
	ctx.lr = 0x825B3644;
	sub_825B3470(ctx, base);
loc_825B3644:
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

__attribute__((alias("__imp__sub_825B3660"))) PPC_WEAK_FUNC(sub_825B3660);
PPC_FUNC_IMPL(__imp__sub_825B3660) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a8540
	sub_823A8540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B3668"))) PPC_WEAK_FUNC(sub_825B3668);
PPC_FUNC_IMPL(__imp__sub_825B3668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,6176
	ctx.r3.s64 = 6176;
	// bl 0x82833108
	ctx.lr = 0x825B3684;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825b3698
	if (ctx.cr0.eq) goto loc_825B3698;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825b3710
	ctx.lr = 0x825B3694;
	sub_825B3710(ctx, base);
	// b 0x825b369c
	goto loc_825B369C;
loc_825B3698:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B369C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B36B0"))) PPC_WEAK_FUNC(sub_825B36B0);
PPC_FUNC_IMPL(__imp__sub_825B36B0) {
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
	// bl 0x8247a928
	ctx.lr = 0x825B36D0;
	sub_8247A928(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825b36e0
	if (!ctx.cr6.eq) goto loc_825B36E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x825b36f8
	goto loc_825B36F8;
loc_825B36E0:
	// bl 0x823a8540
	ctx.lr = 0x825B36E4;
	sub_823A8540(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825b36f8
	if (ctx.cr6.eq) goto loc_825B36F8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82404040
	ctx.lr = 0x825B36F8;
	sub_82404040(ctx, base);
loc_825B36F8:
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

__attribute__((alias("__imp__sub_825B3710"))) PPC_WEAK_FUNC(sub_825B3710);
PPC_FUNC_IMPL(__imp__sub_825B3710) {
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
	// bl 0x825b3568
	ctx.lr = 0x825B3730;
	sub_825B3568(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r11,r11,592
	ctx.r11.s64 = ctx.r11.s64 + 592;
	// addi r10,r10,2952
	ctx.r10.s64 = ctx.r10.s64 + 2952;
	// addi r9,r9,-24212
	ctx.r9.s64 = ctx.r9.s64 + -24212;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r3,r31,6128
	ctx.r3.s64 = ctx.r31.s64 + 6128;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r4,r30,6128
	ctx.r4.s64 = ctx.r30.s64 + 6128;
	// bl 0x82873b58
	ctx.lr = 0x825B3760;
	sub_82873B58(ctx, base);
	// addi r3,r31,6152
	ctx.r3.s64 = ctx.r31.s64 + 6152;
	// addi r4,r30,6152
	ctx.r4.s64 = ctx.r30.s64 + 6152;
	// bl 0x82873b58
	ctx.lr = 0x825B376C;
	sub_82873B58(ctx, base);
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

__attribute__((alias("__imp__sub_825B3788"))) PPC_WEAK_FUNC(sub_825B3788);
PPC_FUNC_IMPL(__imp__sub_825B3788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-19108
	ctx.r3.s64 = ctx.r11.s64 + -19108;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B3798"))) PPC_WEAK_FUNC(sub_825B3798);
PPC_FUNC_IMPL(__imp__sub_825B3798) {
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
	// beq cr6,0x825b37d0
	if (ctx.cr6.eq) goto loc_825B37D0;
	// bl 0x823a8a38
	ctx.lr = 0x825B37C0;
	sub_823A8A38(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825b37d0
	if (!ctx.cr6.eq) goto loc_825B37D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825b37dc
	goto loc_825B37DC;
loc_825B37D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b3600
	ctx.lr = 0x825B37DC;
	sub_825B3600(ctx, base);
loc_825B37DC:
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

__attribute__((alias("__imp__sub_825B37F8"))) PPC_WEAK_FUNC(sub_825B37F8);
PPC_FUNC_IMPL(__imp__sub_825B37F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a8a38
	sub_823A8A38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B3800"))) PPC_WEAK_FUNC(sub_825B3800);
PPC_FUNC_IMPL(__imp__sub_825B3800) {
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
	// li r3,6176
	ctx.r3.s64 = 6176;
	// bl 0x82833108
	ctx.lr = 0x825B3820;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825b3860
	if (ctx.cr0.eq) goto loc_825B3860;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b3710
	ctx.lr = 0x825B3834;
	sub_825B3710(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r11,r11,3008
	ctx.r11.s64 = ctx.r11.s64 + 3008;
	// addi r10,r10,5368
	ctx.r10.s64 = ctx.r10.s64 + 5368;
	// addi r9,r9,-24212
	ctx.r9.s64 = ctx.r9.s64 + -24212;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x825b3864
	goto loc_825B3864;
loc_825B3860:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B3864:
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

__attribute__((alias("__imp__sub_825B3880"))) PPC_WEAK_FUNC(sub_825B3880);
PPC_FUNC_IMPL(__imp__sub_825B3880) {
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
	// bl 0x823a8a38
	ctx.lr = 0x825B38A0;
	sub_823A8A38(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825b38b4
	if (ctx.cr6.eq) goto loc_825B38B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825b36b0
	ctx.lr = 0x825B38B4;
	sub_825B36B0(ctx, base);
loc_825B38B4:
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

__attribute__((alias("__imp__sub_825B38D0"))) PPC_WEAK_FUNC(sub_825B38D0);
PPC_FUNC_IMPL(__imp__sub_825B38D0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-523
	ctx.r3.s64 = -34275328;
	// ori r3,r3,45312
	ctx.r3.u64 = ctx.r3.u64 | 45312;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B38E0"))) PPC_WEAK_FUNC(sub_825B38E0);
PPC_FUNC_IMPL(__imp__sub_825B38E0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-17772
	ctx.r3.s64 = -1164705792;
	// ori r3,r3,35187
	ctx.r3.u64 = ctx.r3.u64 | 35187;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B38F0"))) PPC_WEAK_FUNC(sub_825B38F0);
PPC_FUNC_IMPL(__imp__sub_825B38F0) {
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
	// lis r11,10400
	ctx.r11.s64 = 681574400;
	// addi r31,r3,6128
	ctx.r31.s64 = ctx.r3.s64 + 6128;
	// ori r11,r11,49615
	ctx.r11.u64 = ctx.r11.u64 | 49615;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825B391C;
	sub_82410060(ctx, base);
	// lis r11,14694
	ctx.r11.s64 = 962985984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,41945
	ctx.r11.u64 = ctx.r11.u64 | 41945;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825B3934;
	sub_82410060(ctx, base);
	// lis r11,15533
	ctx.r11.s64 = 1017970688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,41406
	ctx.r11.u64 = ctx.r11.u64 | 41406;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825B394C;
	sub_82410060(ctx, base);
	// lis r11,13234
	ctx.r11.s64 = 867303424;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,34549
	ctx.r11.u64 = ctx.r11.u64 | 34549;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825B3964;
	sub_82410060(ctx, base);
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

__attribute__((alias("__imp__sub_825B3978"))) PPC_WEAK_FUNC(sub_825B3978);
PPC_FUNC_IMPL(__imp__sub_825B3978) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r11,-1864
	ctx.r3.s64 = ctx.r11.s64 + -1864;
	// bl 0x82816528
	ctx.lr = 0x825B3998;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x825B39A8;
	sub_82410060(ctx, base);
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

__attribute__((alias("__imp__sub_825B39C0"))) PPC_WEAK_FUNC(sub_825B39C0);
PPC_FUNC_IMPL(__imp__sub_825B39C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825b3518
	sub_825B3518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B39C8"))) PPC_WEAK_FUNC(sub_825B39C8);
PPC_FUNC_IMPL(__imp__sub_825B39C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825b3880
	sub_825B3880(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B39D0"))) PPC_WEAK_FUNC(sub_825B39D0);
PPC_FUNC_IMPL(__imp__sub_825B39D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825b36b0
	sub_825B36B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B39D8"))) PPC_WEAK_FUNC(sub_825B39D8);
PPC_FUNC_IMPL(__imp__sub_825B39D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-19060
	ctx.r3.s64 = ctx.r11.s64 + -19060;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B39E8"))) PPC_WEAK_FUNC(sub_825B39E8);
PPC_FUNC_IMPL(__imp__sub_825B39E8) {
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
	// beq cr6,0x825b3a20
	if (ctx.cr6.eq) goto loc_825B3A20;
	// bl 0x823a8d88
	ctx.lr = 0x825B3A10;
	sub_823A8D88(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825b3a20
	if (!ctx.cr6.eq) goto loc_825B3A20;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825b3a2c
	goto loc_825B3A2C;
loc_825B3A20:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b3600
	ctx.lr = 0x825B3A2C;
	sub_825B3600(ctx, base);
loc_825B3A2C:
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

__attribute__((alias("__imp__sub_825B3A48"))) PPC_WEAK_FUNC(sub_825B3A48);
PPC_FUNC_IMPL(__imp__sub_825B3A48) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a8d88
	sub_823A8D88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B3A50"))) PPC_WEAK_FUNC(sub_825B3A50);
PPC_FUNC_IMPL(__imp__sub_825B3A50) {
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
	// li r3,6176
	ctx.r3.s64 = 6176;
	// bl 0x82833108
	ctx.lr = 0x825B3A70;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825b3ab0
	if (ctx.cr0.eq) goto loc_825B3AB0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b3710
	ctx.lr = 0x825B3A84;
	sub_825B3710(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r11,r11,5512
	ctx.r11.s64 = ctx.r11.s64 + 5512;
	// addi r10,r10,7872
	ctx.r10.s64 = ctx.r10.s64 + 7872;
	// addi r9,r9,-24212
	ctx.r9.s64 = ctx.r9.s64 + -24212;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x825b3ab4
	goto loc_825B3AB4;
loc_825B3AB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B3AB4:
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

__attribute__((alias("__imp__sub_825B3AD0"))) PPC_WEAK_FUNC(sub_825B3AD0);
PPC_FUNC_IMPL(__imp__sub_825B3AD0) {
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
	// bl 0x823a8d88
	ctx.lr = 0x825B3AF0;
	sub_823A8D88(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825b3b04
	if (ctx.cr6.eq) goto loc_825B3B04;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825b36b0
	ctx.lr = 0x825B3B04;
	sub_825B36B0(ctx, base);
loc_825B3B04:
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

__attribute__((alias("__imp__sub_825B3B20"))) PPC_WEAK_FUNC(sub_825B3B20);
PPC_FUNC_IMPL(__imp__sub_825B3B20) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-30912
	ctx.r3.s64 = -2025848832;
	// ori r3,r3,10540
	ctx.r3.u64 = ctx.r3.u64 | 10540;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B3B30"))) PPC_WEAK_FUNC(sub_825B3B30);
PPC_FUNC_IMPL(__imp__sub_825B3B30) {
	PPC_FUNC_PROLOGUE();
	// lis r3,16209
	ctx.r3.s64 = 1062273024;
	// ori r3,r3,21237
	ctx.r3.u64 = ctx.r3.u64 | 21237;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B3B40"))) PPC_WEAK_FUNC(sub_825B3B40);
PPC_FUNC_IMPL(__imp__sub_825B3B40) {
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
	// lis r11,3609
	ctx.r11.s64 = 236519424;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r11,r11,14556
	ctx.r11.u64 = ctx.r11.u64 | 14556;
	// addi r31,r30,6128
	ctx.r31.s64 = ctx.r30.s64 + 6128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x825B3B74;
	sub_82410060(ctx, base);
	// lis r11,7964
	ctx.r11.s64 = 521928704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,45443
	ctx.r11.u64 = ctx.r11.u64 | 45443;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825B3B8C;
	sub_82410060(ctx, base);
	// lis r11,6183
	ctx.r11.s64 = 405209088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,33161
	ctx.r11.u64 = ctx.r11.u64 | 33161;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825B3BA4;
	sub_82410060(ctx, base);
	// lis r11,4969
	ctx.r11.s64 = 325648384;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,40863
	ctx.r11.u64 = ctx.r11.u64 | 40863;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825B3BBC;
	sub_82410060(ctx, base);
	// lis r11,9167
	ctx.r11.s64 = 600768512;
	// addi r31,r30,6152
	ctx.r31.s64 = ctx.r30.s64 + 6152;
	// ori r11,r11,37461
	ctx.r11.u64 = ctx.r11.u64 | 37461;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825B3BD8;
	sub_82410060(ctx, base);
	// lis r11,14051
	ctx.r11.s64 = 920846336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,51480
	ctx.r11.u64 = ctx.r11.u64 | 51480;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825B3BF0;
	sub_82410060(ctx, base);
	// lis r11,9161
	ctx.r11.s64 = 600375296;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,29654
	ctx.r11.u64 = ctx.r11.u64 | 29654;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825B3C08;
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

__attribute__((alias("__imp__sub_825B3C20"))) PPC_WEAK_FUNC(sub_825B3C20);
PPC_FUNC_IMPL(__imp__sub_825B3C20) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r11,5464
	ctx.r3.s64 = ctx.r11.s64 + 5464;
	// bl 0x82816528
	ctx.lr = 0x825B3C40;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x825B3C50;
	sub_82410060(ctx, base);
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

__attribute__((alias("__imp__sub_825B3C68"))) PPC_WEAK_FUNC(sub_825B3C68);
PPC_FUNC_IMPL(__imp__sub_825B3C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,16572(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16572);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16568(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16568);
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

__attribute__((alias("__imp__sub_825B3C88"))) PPC_WEAK_FUNC(sub_825B3C88);
PPC_FUNC_IMPL(__imp__sub_825B3C88) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825b3ad0
	sub_825B3AD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B3C90"))) PPC_WEAK_FUNC(sub_825B3C90);
PPC_FUNC_IMPL(__imp__sub_825B3C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-19084
	ctx.r3.s64 = ctx.r11.s64 + -19084;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B3CA0"))) PPC_WEAK_FUNC(sub_825B3CA0);
PPC_FUNC_IMPL(__imp__sub_825B3CA0) {
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
	// beq cr6,0x825b3cd8
	if (ctx.cr6.eq) goto loc_825B3CD8;
	// bl 0x823a8be0
	ctx.lr = 0x825B3CC8;
	sub_823A8BE0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825b3cd8
	if (!ctx.cr6.eq) goto loc_825B3CD8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825b3ce4
	goto loc_825B3CE4;
loc_825B3CD8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b3600
	ctx.lr = 0x825B3CE4;
	sub_825B3600(ctx, base);
loc_825B3CE4:
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

__attribute__((alias("__imp__sub_825B3D00"))) PPC_WEAK_FUNC(sub_825B3D00);
PPC_FUNC_IMPL(__imp__sub_825B3D00) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a8be0
	sub_823A8BE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B3D08"))) PPC_WEAK_FUNC(sub_825B3D08);
PPC_FUNC_IMPL(__imp__sub_825B3D08) {
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
	// li r3,6176
	ctx.r3.s64 = 6176;
	// bl 0x82833108
	ctx.lr = 0x825B3D28;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825b3d68
	if (ctx.cr0.eq) goto loc_825B3D68;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b3710
	ctx.lr = 0x825B3D3C;
	sub_825B3710(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r11,r11,8008
	ctx.r11.s64 = ctx.r11.s64 + 8008;
	// addi r10,r10,10368
	ctx.r10.s64 = ctx.r10.s64 + 10368;
	// addi r9,r9,-24212
	ctx.r9.s64 = ctx.r9.s64 + -24212;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x825b3d6c
	goto loc_825B3D6C;
loc_825B3D68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B3D6C:
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

__attribute__((alias("__imp__sub_825B3D88"))) PPC_WEAK_FUNC(sub_825B3D88);
PPC_FUNC_IMPL(__imp__sub_825B3D88) {
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
	// bl 0x823a8be0
	ctx.lr = 0x825B3DA8;
	sub_823A8BE0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825b3dbc
	if (ctx.cr6.eq) goto loc_825B3DBC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825b36b0
	ctx.lr = 0x825B3DBC;
	sub_825B36B0(ctx, base);
loc_825B3DBC:
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

__attribute__((alias("__imp__sub_825B3DD8"))) PPC_WEAK_FUNC(sub_825B3DD8);
PPC_FUNC_IMPL(__imp__sub_825B3DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,6666
	ctx.r3.s64 = 436862976;
	// ori r3,r3,15797
	ctx.r3.u64 = ctx.r3.u64 | 15797;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B3DE8"))) PPC_WEAK_FUNC(sub_825B3DE8);
PPC_FUNC_IMPL(__imp__sub_825B3DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-29189
	ctx.r3.s64 = -1912930304;
	// ori r3,r3,61365
	ctx.r3.u64 = ctx.r3.u64 | 61365;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B3DF8"))) PPC_WEAK_FUNC(sub_825B3DF8);
PPC_FUNC_IMPL(__imp__sub_825B3DF8) {
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
	// lis r11,7444
	ctx.r11.s64 = 487849984;
	// addi r31,r3,6128
	ctx.r31.s64 = ctx.r3.s64 + 6128;
	// ori r11,r11,47285
	ctx.r11.u64 = ctx.r11.u64 | 47285;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825B3E24;
	sub_82410060(ctx, base);
	// lis r11,15632
	ctx.r11.s64 = 1024458752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,62493
	ctx.r11.u64 = ctx.r11.u64 | 62493;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825B3E3C;
	sub_82410060(ctx, base);
	// lis r11,2505
	ctx.r11.s64 = 164167680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,1067
	ctx.r11.u64 = ctx.r11.u64 | 1067;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825B3E54;
	sub_82410060(ctx, base);
	// lis r11,5854
	ctx.r11.s64 = 383647744;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,38554
	ctx.r11.u64 = ctx.r11.u64 | 38554;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825B3E6C;
	sub_82410060(ctx, base);
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

__attribute__((alias("__imp__sub_825B3E80"))) PPC_WEAK_FUNC(sub_825B3E80);
PPC_FUNC_IMPL(__imp__sub_825B3E80) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r11,7964
	ctx.r3.s64 = ctx.r11.s64 + 7964;
	// bl 0x82816528
	ctx.lr = 0x825B3EA0;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x825B3EB0;
	sub_82410060(ctx, base);
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

__attribute__((alias("__imp__sub_825B3EC8"))) PPC_WEAK_FUNC(sub_825B3EC8);
PPC_FUNC_IMPL(__imp__sub_825B3EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,16592(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16592);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16568(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16568);
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

__attribute__((alias("__imp__sub_825B3EE8"))) PPC_WEAK_FUNC(sub_825B3EE8);
PPC_FUNC_IMPL(__imp__sub_825B3EE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825b3d88
	sub_825B3D88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B3EF0"))) PPC_WEAK_FUNC(sub_825B3EF0);
PPC_FUNC_IMPL(__imp__sub_825B3EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-19036
	ctx.r3.s64 = ctx.r11.s64 + -19036;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B3F00"))) PPC_WEAK_FUNC(sub_825B3F00);
PPC_FUNC_IMPL(__imp__sub_825B3F00) {
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
	// beq cr6,0x825b3f38
	if (ctx.cr6.eq) goto loc_825B3F38;
	// bl 0x823a8f30
	ctx.lr = 0x825B3F28;
	sub_823A8F30(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825b3f38
	if (!ctx.cr6.eq) goto loc_825B3F38;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825b3f44
	goto loc_825B3F44;
loc_825B3F38:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b3600
	ctx.lr = 0x825B3F44;
	sub_825B3600(ctx, base);
loc_825B3F44:
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

__attribute__((alias("__imp__sub_825B3F60"))) PPC_WEAK_FUNC(sub_825B3F60);
PPC_FUNC_IMPL(__imp__sub_825B3F60) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a8f30
	sub_823A8F30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B3F68"))) PPC_WEAK_FUNC(sub_825B3F68);
PPC_FUNC_IMPL(__imp__sub_825B3F68) {
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
	// li r3,6176
	ctx.r3.s64 = 6176;
	// bl 0x82833108
	ctx.lr = 0x825B3F88;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825b3fc8
	if (ctx.cr0.eq) goto loc_825B3FC8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b3710
	ctx.lr = 0x825B3F9C;
	sub_825B3710(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r11,r11,10464
	ctx.r11.s64 = ctx.r11.s64 + 10464;
	// addi r10,r10,12824
	ctx.r10.s64 = ctx.r10.s64 + 12824;
	// addi r9,r9,-24212
	ctx.r9.s64 = ctx.r9.s64 + -24212;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x825b3fcc
	goto loc_825B3FCC;
loc_825B3FC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B3FCC:
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

__attribute__((alias("__imp__sub_825B3FE8"))) PPC_WEAK_FUNC(sub_825B3FE8);
PPC_FUNC_IMPL(__imp__sub_825B3FE8) {
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
	// bl 0x823a8f30
	ctx.lr = 0x825B4008;
	sub_823A8F30(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825b401c
	if (ctx.cr6.eq) goto loc_825B401C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825b36b0
	ctx.lr = 0x825B401C;
	sub_825B36B0(ctx, base);
loc_825B401C:
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

__attribute__((alias("__imp__sub_825B4038"))) PPC_WEAK_FUNC(sub_825B4038);
PPC_FUNC_IMPL(__imp__sub_825B4038) {
	PPC_FUNC_PROLOGUE();
	// lis r3,656
	ctx.r3.s64 = 42991616;
	// ori r3,r3,31385
	ctx.r3.u64 = ctx.r3.u64 | 31385;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B4048"))) PPC_WEAK_FUNC(sub_825B4048);
PPC_FUNC_IMPL(__imp__sub_825B4048) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-10212
	ctx.r3.s64 = -669253632;
	// ori r3,r3,21586
	ctx.r3.u64 = ctx.r3.u64 | 21586;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B4058"))) PPC_WEAK_FUNC(sub_825B4058);
PPC_FUNC_IMPL(__imp__sub_825B4058) {
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
	// lis r11,6825
	ctx.r11.s64 = 447283200;
	// addi r31,r3,6128
	ctx.r31.s64 = ctx.r3.s64 + 6128;
	// ori r11,r11,54860
	ctx.r11.u64 = ctx.r11.u64 | 54860;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825B4084;
	sub_82410060(ctx, base);
	// lis r11,3042
	ctx.r11.s64 = 199360512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,45685
	ctx.r11.u64 = ctx.r11.u64 | 45685;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825B409C;
	sub_82410060(ctx, base);
	// lis r11,9130
	ctx.r11.s64 = 598343680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,15385
	ctx.r11.u64 = ctx.r11.u64 | 15385;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825B40B4;
	sub_82410060(ctx, base);
	// lis r11,13308
	ctx.r11.s64 = 872153088;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,61166
	ctx.r11.u64 = ctx.r11.u64 | 61166;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825B40CC;
	sub_82410060(ctx, base);
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

__attribute__((alias("__imp__sub_825B40E0"))) PPC_WEAK_FUNC(sub_825B40E0);
PPC_FUNC_IMPL(__imp__sub_825B40E0) {
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
	// lfs f13,16568(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16568);
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

__attribute__((alias("__imp__sub_825B4100"))) PPC_WEAK_FUNC(sub_825B4100);
PPC_FUNC_IMPL(__imp__sub_825B4100) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825b3fe8
	sub_825B3FE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B4108"))) PPC_WEAK_FUNC(sub_825B4108);
PPC_FUNC_IMPL(__imp__sub_825B4108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-19008
	ctx.r3.s64 = ctx.r11.s64 + -19008;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B4118"))) PPC_WEAK_FUNC(sub_825B4118);
PPC_FUNC_IMPL(__imp__sub_825B4118) {
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
	// beq cr6,0x825b4150
	if (ctx.cr6.eq) goto loc_825B4150;
	// bl 0x823a90d8
	ctx.lr = 0x825B4140;
	sub_823A90D8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825b4150
	if (!ctx.cr6.eq) goto loc_825B4150;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825b415c
	goto loc_825B415C;
loc_825B4150:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b3600
	ctx.lr = 0x825B415C;
	sub_825B3600(ctx, base);
loc_825B415C:
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

__attribute__((alias("__imp__sub_825B4178"))) PPC_WEAK_FUNC(sub_825B4178);
PPC_FUNC_IMPL(__imp__sub_825B4178) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a90d8
	sub_823A90D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B4180"))) PPC_WEAK_FUNC(sub_825B4180);
PPC_FUNC_IMPL(__imp__sub_825B4180) {
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
	// li r3,6176
	ctx.r3.s64 = 6176;
	// bl 0x82833108
	ctx.lr = 0x825B41A0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825b41e0
	if (ctx.cr0.eq) goto loc_825B41E0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b3710
	ctx.lr = 0x825B41B4;
	sub_825B3710(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r11,r11,12912
	ctx.r11.s64 = ctx.r11.s64 + 12912;
	// addi r10,r10,15272
	ctx.r10.s64 = ctx.r10.s64 + 15272;
	// addi r9,r9,-24212
	ctx.r9.s64 = ctx.r9.s64 + -24212;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x825b41e4
	goto loc_825B41E4;
loc_825B41E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B41E4:
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

__attribute__((alias("__imp__sub_825B4200"))) PPC_WEAK_FUNC(sub_825B4200);
PPC_FUNC_IMPL(__imp__sub_825B4200) {
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
	// bl 0x823a90d8
	ctx.lr = 0x825B4220;
	sub_823A90D8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825b4234
	if (ctx.cr6.eq) goto loc_825B4234;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825b36b0
	ctx.lr = 0x825B4234;
	sub_825B36B0(ctx, base);
loc_825B4234:
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

__attribute__((alias("__imp__sub_825B4250"))) PPC_WEAK_FUNC(sub_825B4250);
PPC_FUNC_IMPL(__imp__sub_825B4250) {
	PPC_FUNC_PROLOGUE();
	// lis r3,12983
	ctx.r3.s64 = 850853888;
	// ori r3,r3,9971
	ctx.r3.u64 = ctx.r3.u64 | 9971;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B4260"))) PPC_WEAK_FUNC(sub_825B4260);
PPC_FUNC_IMPL(__imp__sub_825B4260) {
	PPC_FUNC_PROLOGUE();
	// lis r3,18192
	ctx.r3.s64 = 1192230912;
	// ori r3,r3,57376
	ctx.r3.u64 = ctx.r3.u64 | 57376;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B4270"))) PPC_WEAK_FUNC(sub_825B4270);
PPC_FUNC_IMPL(__imp__sub_825B4270) {
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
	// lis r11,2188
	ctx.r11.s64 = 143392768;
	// addi r31,r3,6128
	ctx.r31.s64 = ctx.r3.s64 + 6128;
	// ori r11,r11,21162
	ctx.r11.u64 = ctx.r11.u64 | 21162;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825B429C;
	sub_82410060(ctx, base);
	// lis r11,14420
	ctx.r11.s64 = 945029120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,52131
	ctx.r11.u64 = ctx.r11.u64 | 52131;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825B42B4;
	sub_82410060(ctx, base);
	// lis r11,9917
	ctx.r11.s64 = 649920512;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,50373
	ctx.r11.u64 = ctx.r11.u64 | 50373;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825B42CC;
	sub_82410060(ctx, base);
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

__attribute__((alias("__imp__sub_825B42E0"))) PPC_WEAK_FUNC(sub_825B42E0);
PPC_FUNC_IMPL(__imp__sub_825B42E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825b4200
	sub_825B4200(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B42E8"))) PPC_WEAK_FUNC(sub_825B42E8);
PPC_FUNC_IMPL(__imp__sub_825B42E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18980
	ctx.r3.s64 = ctx.r11.s64 + -18980;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B42F8"))) PPC_WEAK_FUNC(sub_825B42F8);
PPC_FUNC_IMPL(__imp__sub_825B42F8) {
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
	// beq cr6,0x825b4330
	if (ctx.cr6.eq) goto loc_825B4330;
	// bl 0x823a9280
	ctx.lr = 0x825B4320;
	sub_823A9280(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825b4330
	if (!ctx.cr6.eq) goto loc_825B4330;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825b433c
	goto loc_825B433C;
loc_825B4330:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b3600
	ctx.lr = 0x825B433C;
	sub_825B3600(ctx, base);
loc_825B433C:
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

__attribute__((alias("__imp__sub_825B4358"))) PPC_WEAK_FUNC(sub_825B4358);
PPC_FUNC_IMPL(__imp__sub_825B4358) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a9280
	sub_823A9280(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B4360"))) PPC_WEAK_FUNC(sub_825B4360);
PPC_FUNC_IMPL(__imp__sub_825B4360) {
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
	// li r3,6176
	ctx.r3.s64 = 6176;
	// bl 0x82833108
	ctx.lr = 0x825B4380;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825b43c0
	if (ctx.cr0.eq) goto loc_825B43C0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b3710
	ctx.lr = 0x825B4394;
	sub_825B3710(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r11,r11,15400
	ctx.r11.s64 = ctx.r11.s64 + 15400;
	// addi r10,r10,17760
	ctx.r10.s64 = ctx.r10.s64 + 17760;
	// addi r9,r9,-24212
	ctx.r9.s64 = ctx.r9.s64 + -24212;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x825b43c4
	goto loc_825B43C4;
loc_825B43C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B43C4:
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

__attribute__((alias("__imp__sub_825B43E0"))) PPC_WEAK_FUNC(sub_825B43E0);
PPC_FUNC_IMPL(__imp__sub_825B43E0) {
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
	// bl 0x823a9280
	ctx.lr = 0x825B4400;
	sub_823A9280(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825b4414
	if (ctx.cr6.eq) goto loc_825B4414;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825b36b0
	ctx.lr = 0x825B4414;
	sub_825B36B0(ctx, base);
loc_825B4414:
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

__attribute__((alias("__imp__sub_825B4430"))) PPC_WEAK_FUNC(sub_825B4430);
PPC_FUNC_IMPL(__imp__sub_825B4430) {
	PPC_FUNC_PROLOGUE();
	// lis r3,31819
	ctx.r3.s64 = 2085289984;
	// ori r3,r3,4044
	ctx.r3.u64 = ctx.r3.u64 | 4044;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B4440"))) PPC_WEAK_FUNC(sub_825B4440);
PPC_FUNC_IMPL(__imp__sub_825B4440) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-23240
	ctx.r3.s64 = -1523056640;
	// ori r3,r3,5060
	ctx.r3.u64 = ctx.r3.u64 | 5060;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B4450"))) PPC_WEAK_FUNC(sub_825B4450);
PPC_FUNC_IMPL(__imp__sub_825B4450) {
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
	// lis r11,13083
	ctx.r11.s64 = 857407488;
	// addi r31,r3,6152
	ctx.r31.s64 = ctx.r3.s64 + 6152;
	// ori r11,r11,10953
	ctx.r11.u64 = ctx.r11.u64 | 10953;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825B447C;
	sub_82410060(ctx, base);
	// lis r11,7795
	ctx.r11.s64 = 510853120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,20492
	ctx.r11.u64 = ctx.r11.u64 | 20492;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825B4494;
	sub_82410060(ctx, base);
	// lis r11,12562
	ctx.r11.s64 = 823263232;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,6750
	ctx.r11.u64 = ctx.r11.u64 | 6750;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825B44AC;
	sub_82410060(ctx, base);
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

__attribute__((alias("__imp__sub_825B44C0"))) PPC_WEAK_FUNC(sub_825B44C0);
PPC_FUNC_IMPL(__imp__sub_825B44C0) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r11,15360
	ctx.r3.s64 = ctx.r11.s64 + 15360;
	// bl 0x82816528
	ctx.lr = 0x825B44E0;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x825B44F0;
	sub_82410060(ctx, base);
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

__attribute__((alias("__imp__sub_825B4508"))) PPC_WEAK_FUNC(sub_825B4508);
PPC_FUNC_IMPL(__imp__sub_825B4508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,16588(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16588);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16568(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16568);
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

__attribute__((alias("__imp__sub_825B4528"))) PPC_WEAK_FUNC(sub_825B4528);
PPC_FUNC_IMPL(__imp__sub_825B4528) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825b43e0
	sub_825B43E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B4530"))) PPC_WEAK_FUNC(sub_825B4530);
PPC_FUNC_IMPL(__imp__sub_825B4530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-19140
	ctx.r3.s64 = ctx.r11.s64 + -19140;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B4540"))) PPC_WEAK_FUNC(sub_825B4540);
PPC_FUNC_IMPL(__imp__sub_825B4540) {
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
	// beq cr6,0x825b4578
	if (ctx.cr6.eq) goto loc_825B4578;
	// bl 0x823a8890
	ctx.lr = 0x825B4568;
	sub_823A8890(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825b4578
	if (!ctx.cr6.eq) goto loc_825B4578;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825b4584
	goto loc_825B4584;
loc_825B4578:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b3470
	ctx.lr = 0x825B4584;
	sub_825B3470(ctx, base);
loc_825B4584:
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

__attribute__((alias("__imp__sub_825B45A0"))) PPC_WEAK_FUNC(sub_825B45A0);
PPC_FUNC_IMPL(__imp__sub_825B45A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a8890
	sub_823A8890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B45A8"))) PPC_WEAK_FUNC(sub_825B45A8);
PPC_FUNC_IMPL(__imp__sub_825B45A8) {
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
	// li r3,6128
	ctx.r3.s64 = 6128;
	// bl 0x82833108
	ctx.lr = 0x825B45C8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825b4608
	if (ctx.cr0.eq) goto loc_825B4608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b3568
	ctx.lr = 0x825B45DC;
	sub_825B3568(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r11,r11,17968
	ctx.r11.s64 = ctx.r11.s64 + 17968;
	// addi r10,r10,20328
	ctx.r10.s64 = ctx.r10.s64 + 20328;
	// addi r9,r9,-6552
	ctx.r9.s64 = ctx.r9.s64 + -6552;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x825b460c
	goto loc_825B460C;
loc_825B4608:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B460C:
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

__attribute__((alias("__imp__sub_825B4628"))) PPC_WEAK_FUNC(sub_825B4628);
PPC_FUNC_IMPL(__imp__sub_825B4628) {
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
	// bl 0x823a8890
	ctx.lr = 0x825B4648;
	sub_823A8890(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825b4658
	if (!ctx.cr6.eq) goto loc_825B4658;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x825b4670
	goto loc_825B4670;
loc_825B4658:
	// bl 0x823a8540
	ctx.lr = 0x825B465C;
	sub_823A8540(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825b4670
	if (ctx.cr6.eq) goto loc_825B4670;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82404040
	ctx.lr = 0x825B4670;
	sub_82404040(ctx, base);
loc_825B4670:
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

__attribute__((alias("__imp__sub_825B4688"))) PPC_WEAK_FUNC(sub_825B4688);
PPC_FUNC_IMPL(__imp__sub_825B4688) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r11,17812
	ctx.r3.s64 = ctx.r11.s64 + 17812;
	// bl 0x82816528
	ctx.lr = 0x825B46A8;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x825B46B8;
	sub_82410060(ctx, base);
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

__attribute__((alias("__imp__sub_825B46D0"))) PPC_WEAK_FUNC(sub_825B46D0);
PPC_FUNC_IMPL(__imp__sub_825B46D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,280(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B46E0"))) PPC_WEAK_FUNC(sub_825B46E0);
PPC_FUNC_IMPL(__imp__sub_825B46E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,284(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B46F0"))) PPC_WEAK_FUNC(sub_825B46F0);
PPC_FUNC_IMPL(__imp__sub_825B46F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x824033e8
	sub_824033E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B46F8"))) PPC_WEAK_FUNC(sub_825B46F8);
PPC_FUNC_IMPL(__imp__sub_825B46F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825b4628
	sub_825B4628(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B4700"))) PPC_WEAK_FUNC(sub_825B4700);
PPC_FUNC_IMPL(__imp__sub_825B4700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18884
	ctx.r3.s64 = ctx.r11.s64 + -18884;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B4710"))) PPC_WEAK_FUNC(sub_825B4710);
PPC_FUNC_IMPL(__imp__sub_825B4710) {
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
	// beq cr6,0x825b4748
	if (ctx.cr6.eq) goto loc_825B4748;
	// bl 0x823a9930
	ctx.lr = 0x825B4738;
	sub_823A9930(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825b4748
	if (!ctx.cr6.eq) goto loc_825B4748;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825b4754
	goto loc_825B4754;
loc_825B4748:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b3600
	ctx.lr = 0x825B4754;
	sub_825B3600(ctx, base);
loc_825B4754:
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

__attribute__((alias("__imp__sub_825B4770"))) PPC_WEAK_FUNC(sub_825B4770);
PPC_FUNC_IMPL(__imp__sub_825B4770) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a9930
	sub_823A9930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B4778"))) PPC_WEAK_FUNC(sub_825B4778);
PPC_FUNC_IMPL(__imp__sub_825B4778) {
	PPC_FUNC_PROLOGUE();
	// b 0x8247a928
	sub_8247A928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B4780"))) PPC_WEAK_FUNC(sub_825B4780);
PPC_FUNC_IMPL(__imp__sub_825B4780) {
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
	// li r3,6176
	ctx.r3.s64 = 6176;
	// bl 0x82833108
	ctx.lr = 0x825B47A0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825b47e0
	if (ctx.cr0.eq) goto loc_825B47E0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b3710
	ctx.lr = 0x825B47B4;
	sub_825B3710(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r11,r11,20384
	ctx.r11.s64 = ctx.r11.s64 + 20384;
	// addi r10,r10,22744
	ctx.r10.s64 = ctx.r10.s64 + 22744;
	// addi r9,r9,-24212
	ctx.r9.s64 = ctx.r9.s64 + -24212;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x825b47e4
	goto loc_825B47E4;
loc_825B47E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B47E4:
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

__attribute__((alias("__imp__sub_825B4800"))) PPC_WEAK_FUNC(sub_825B4800);
PPC_FUNC_IMPL(__imp__sub_825B4800) {
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
	// bl 0x823a9930
	ctx.lr = 0x825B4820;
	sub_823A9930(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825b4834
	if (ctx.cr6.eq) goto loc_825B4834;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825b36b0
	ctx.lr = 0x825B4834;
	sub_825B36B0(ctx, base);
loc_825B4834:
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

__attribute__((alias("__imp__sub_825B4850"))) PPC_WEAK_FUNC(sub_825B4850);
PPC_FUNC_IMPL(__imp__sub_825B4850) {
	PPC_FUNC_PROLOGUE();
	// lis r3,14439
	ctx.r3.s64 = 946274304;
	// ori r3,r3,33342
	ctx.r3.u64 = ctx.r3.u64 | 33342;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B4860"))) PPC_WEAK_FUNC(sub_825B4860);
PPC_FUNC_IMPL(__imp__sub_825B4860) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-21604
	ctx.r3.s64 = -1415839744;
	// ori r3,r3,51912
	ctx.r3.u64 = ctx.r3.u64 | 51912;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B4870"))) PPC_WEAK_FUNC(sub_825B4870);
PPC_FUNC_IMPL(__imp__sub_825B4870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-24640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24640);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16568(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16568);
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

__attribute__((alias("__imp__sub_825B4890"))) PPC_WEAK_FUNC(sub_825B4890);
PPC_FUNC_IMPL(__imp__sub_825B4890) {
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
	// lis r11,13902
	ctx.r11.s64 = 911081472;
	// addi r31,r3,6128
	ctx.r31.s64 = ctx.r3.s64 + 6128;
	// ori r11,r11,29320
	ctx.r11.u64 = ctx.r11.u64 | 29320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825B48BC;
	sub_82410060(ctx, base);
	// lis r11,4754
	ctx.r11.s64 = 311558144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,65463
	ctx.r11.u64 = ctx.r11.u64 | 65463;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825B48D4;
	sub_82410060(ctx, base);
	// lis r11,11689
	ctx.r11.s64 = 766050304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,28390
	ctx.r11.u64 = ctx.r11.u64 | 28390;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825B48EC;
	sub_82410060(ctx, base);
	// lis r11,8153
	ctx.r11.s64 = 534315008;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,49560
	ctx.r11.u64 = ctx.r11.u64 | 49560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825B4904;
	sub_82410060(ctx, base);
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

__attribute__((alias("__imp__sub_825B4918"))) PPC_WEAK_FUNC(sub_825B4918);
PPC_FUNC_IMPL(__imp__sub_825B4918) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8289bbe8
	ctx.lr = 0x825B4938;
	sub_8289BBE8(ctx, base);
	// lwz r10,276(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,4256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4256, ctx.r10.u32);
	// lwz r10,280(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// stw r10,4268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4268, ctx.r10.u32);
	// stw r11,6112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6112, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_825B4968"))) PPC_WEAK_FUNC(sub_825B4968);
PPC_FUNC_IMPL(__imp__sub_825B4968) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825b4800
	sub_825B4800(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B4970"))) PPC_WEAK_FUNC(sub_825B4970);
PPC_FUNC_IMPL(__imp__sub_825B4970) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x825b8548
	sub_825B8548(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B4978"))) PPC_WEAK_FUNC(sub_825B4978);
PPC_FUNC_IMPL(__imp__sub_825B4978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18808
	ctx.r3.s64 = ctx.r11.s64 + -18808;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B4988"))) PPC_WEAK_FUNC(sub_825B4988);
PPC_FUNC_IMPL(__imp__sub_825B4988) {
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
	// beq cr6,0x825b49c0
	if (ctx.cr6.eq) goto loc_825B49C0;
	// bl 0x823a9e00
	ctx.lr = 0x825B49B0;
	sub_823A9E00(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825b49c0
	if (!ctx.cr6.eq) goto loc_825B49C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825b49cc
	goto loc_825B49CC;
loc_825B49C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ffd58
	ctx.lr = 0x825B49CC;
	sub_823FFD58(ctx, base);
loc_825B49CC:
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

__attribute__((alias("__imp__sub_825B49E8"))) PPC_WEAK_FUNC(sub_825B49E8);
PPC_FUNC_IMPL(__imp__sub_825B49E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a9e00
	sub_823A9E00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B49F0"))) PPC_WEAK_FUNC(sub_825B49F0);
PPC_FUNC_IMPL(__imp__sub_825B49F0) {
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
	// li r3,1984
	ctx.r3.s64 = 1984;
	// bl 0x82833108
	ctx.lr = 0x825B4A10;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825b4a70
	if (ctx.cr0.eq) goto loc_825B4A70;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ff1a0
	ctx.lr = 0x825B4A24;
	sub_823FF1A0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r11,r11,22840
	ctx.r11.s64 = ctx.r11.s64 + 22840;
	// addi r10,r10,24412
	ctx.r10.s64 = ctx.r10.s64 + 24412;
	// addi r9,r9,24464
	ctx.r9.s64 = ctx.r9.s64 + 24464;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// stw r11,1968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1968, ctx.r11.u32);
	// lwz r11,1972(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1972);
	// stw r11,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r11.u32);
	// lwz r11,1976(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1976);
	// stw r11,1976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1976, ctx.r11.u32);
	// lwz r11,1980(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1980);
	// stw r11,1980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1980, ctx.r11.u32);
	// b 0x825b4a74
	goto loc_825B4A74;
loc_825B4A70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B4A74:
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

__attribute__((alias("__imp__sub_825B4A90"))) PPC_WEAK_FUNC(sub_825B4A90);
PPC_FUNC_IMPL(__imp__sub_825B4A90) {
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
	// bl 0x823a9e00
	ctx.lr = 0x825B4AB0;
	sub_823A9E00(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825b4ac4
	if (ctx.cr6.eq) goto loc_825B4AC4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823ffcf8
	ctx.lr = 0x825B4AC4;
	sub_823FFCF8(ctx, base);
loc_825B4AC4:
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

__attribute__((alias("__imp__sub_825B4AE0"))) PPC_WEAK_FUNC(sub_825B4AE0);
PPC_FUNC_IMPL(__imp__sub_825B4AE0) {
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
	// bl 0x824cbde8
	ctx.lr = 0x825B4AFC;
	sub_824CBDE8(ctx, base);
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b4b1c
	if (ctx.cr0.eq) goto loc_825B4B1C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825b4b1c
	if (ctx.cr6.eq) goto loc_825B4B1C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825b4b20
	goto loc_825B4B20;
loc_825B4B1C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_825B4B20:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18744
	ctx.r3.s64 = ctx.r11.s64 + -18744;
	// bl 0x82816528
	ctx.lr = 0x825B4B2C;
	sub_82816528(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,29408
	ctx.r3.s64 = ctx.r11.s64 + 29408;
	// bl 0x82816528
	ctx.lr = 0x825B4B3C;
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
	ctx.lr = 0x825B4B50;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18704
	ctx.r3.s64 = ctx.r11.s64 + -18704;
	// bl 0x82816528
	ctx.lr = 0x825B4B5C;
	sub_82816528(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,29416
	ctx.r3.s64 = ctx.r11.s64 + 29416;
	// bl 0x82816528
	ctx.lr = 0x825B4B6C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x825B4B7C;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18664
	ctx.r3.s64 = ctx.r11.s64 + -18664;
	// bl 0x82816528
	ctx.lr = 0x825B4B88;
	sub_82816528(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,29424
	ctx.r3.s64 = ctx.r11.s64 + 29424;
	// bl 0x82816528
	ctx.lr = 0x825B4B98;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x825B4BA8;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18572
	ctx.r3.s64 = ctx.r11.s64 + -18572;
	// bl 0x82816528
	ctx.lr = 0x825B4BB4;
	sub_82816528(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,29440
	ctx.r3.s64 = ctx.r11.s64 + 29440;
	// bl 0x82816528
	ctx.lr = 0x825B4BC4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x825B4BD4;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18524
	ctx.r3.s64 = ctx.r11.s64 + -18524;
	// bl 0x82816528
	ctx.lr = 0x825B4BE0;
	sub_82816528(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-19756
	ctx.r3.s64 = ctx.r11.s64 + -19756;
	// bl 0x82816528
	ctx.lr = 0x825B4BF0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x825B4C00;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18480
	ctx.r3.s64 = ctx.r11.s64 + -18480;
	// bl 0x82816528
	ctx.lr = 0x825B4C0C;
	sub_82816528(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-19620
	ctx.r3.s64 = ctx.r11.s64 + -19620;
	// bl 0x82816528
	ctx.lr = 0x825B4C1C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x825B4C2C;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18616
	ctx.r3.s64 = ctx.r11.s64 + -18616;
	// bl 0x82816528
	ctx.lr = 0x825B4C38;
	sub_82816528(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,22796
	ctx.r3.s64 = ctx.r11.s64 + 22796;
	// bl 0x82816528
	ctx.lr = 0x825B4C48;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x825B4C58;
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

__attribute__((alias("__imp__sub_825B4C70"))) PPC_WEAK_FUNC(sub_825B4C70);
PPC_FUNC_IMPL(__imp__sub_825B4C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825B4C78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825b4cb8
	if (ctx.cr6.eq) goto loc_825B4CB8;
	// bl 0x823a8540
	ctx.lr = 0x825B4C94;
	sub_823A8540(ctx, base);
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
	ctx.lr = 0x825B4CAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x825b4cbc
	if (!ctx.cr0.eq) goto loc_825B4CBC;
loc_825B4CB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B4CBC:
	// stw r11,1968(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1968, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ce338
	ctx.lr = 0x825B4CD0;
	sub_824CE338(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B4CD8"))) PPC_WEAK_FUNC(sub_825B4CD8);
PPC_FUNC_IMPL(__imp__sub_825B4CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825B4CE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// std r6,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r6.u64);
	// bl 0x829c1f08
	ctx.lr = 0x825B4CF8;
	sub_829C1F08(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825b4d20
	if (ctx.cr0.eq) goto loc_825B4D20;
	// bl 0x823a9f60
	ctx.lr = 0x825B4D04;
	sub_823A9F60(ctx, base);
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
	ctx.lr = 0x825B4D1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825b4d24
	goto loc_825B4D24;
loc_825B4D20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B4D24:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x825b4d50
	if (ctx.cr6.eq) goto loc_825B4D50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// ld r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B4D4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825b4d68
	goto loc_825B4D68;
loc_825B4D50:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1504);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B4D68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825B4D68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B4D70"))) PPC_WEAK_FUNC(sub_825B4D70);
PPC_FUNC_IMPL(__imp__sub_825B4D70) {
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
	// bl 0x824cc238
	ctx.lr = 0x825B4D88;
	sub_824CC238(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,29408
	ctx.r3.s64 = ctx.r11.s64 + 29408;
	// bl 0x82816528
	ctx.lr = 0x825B4D94;
	sub_82816528(ctx, base);
	// addi r31,r31,1932
	ctx.r31.s64 = ctx.r31.s64 + 1932;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x825b4dcc
	if (!ctx.cr6.gt) goto loc_825B4DCC;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_825B4DB0:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x825b4dd8
	if (ctx.cr6.eq) goto loc_825B4DD8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825b4db0
	if (ctx.cr6.lt) goto loc_825B4DB0;
loc_825B4DCC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x825B4DD8;
	sub_82410060(ctx, base);
loc_825B4DD8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,29416
	ctx.r3.s64 = ctx.r11.s64 + 29416;
	// bl 0x82816528
	ctx.lr = 0x825B4DE4;
	sub_82816528(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x825b4e18
	if (!ctx.cr6.gt) goto loc_825B4E18;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_825B4DFC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x825b4e24
	if (ctx.cr6.eq) goto loc_825B4E24;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825b4dfc
	if (ctx.cr6.lt) goto loc_825B4DFC;
loc_825B4E18:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x825B4E24;
	sub_82410060(ctx, base);
loc_825B4E24:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,29424
	ctx.r3.s64 = ctx.r11.s64 + 29424;
	// bl 0x82816528
	ctx.lr = 0x825B4E30;
	sub_82816528(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x825b4e64
	if (!ctx.cr6.gt) goto loc_825B4E64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_825B4E48:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x825b4e70
	if (ctx.cr6.eq) goto loc_825B4E70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825b4e48
	if (ctx.cr6.lt) goto loc_825B4E48;
loc_825B4E64:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x825B4E70;
	sub_82410060(ctx, base);
loc_825B4E70:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,29440
	ctx.r3.s64 = ctx.r11.s64 + 29440;
	// bl 0x82816528
	ctx.lr = 0x825B4E7C;
	sub_82816528(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x825b4eb0
	if (!ctx.cr6.gt) goto loc_825B4EB0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_825B4E94:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x825b4ebc
	if (ctx.cr6.eq) goto loc_825B4EBC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825b4e94
	if (ctx.cr6.lt) goto loc_825B4E94;
loc_825B4EB0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x825B4EBC;
	sub_82410060(ctx, base);
loc_825B4EBC:
	// lis r10,30312
	ctx.r10.s64 = 1986527232;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r8,r10,31343
	ctx.r8.u64 = ctx.r10.u64 | 31343;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// ble cr6,0x825b4ef8
	if (!ctx.cr6.gt) goto loc_825B4EF8;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_825B4EDC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x825b4f04
	if (ctx.cr6.eq) goto loc_825B4F04;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825b4edc
	if (ctx.cr6.lt) goto loc_825B4EDC;
loc_825B4EF8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x825B4F04;
	sub_82410060(ctx, base);
loc_825B4F04:
	// lis r10,14112
	ctx.r10.s64 = 924844032;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r8,r10,53358
	ctx.r8.u64 = ctx.r10.u64 | 53358;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// ble cr6,0x825b4f40
	if (!ctx.cr6.gt) goto loc_825B4F40;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_825B4F24:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x825b4f4c
	if (ctx.cr6.eq) goto loc_825B4F4C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825b4f24
	if (ctx.cr6.lt) goto loc_825B4F24;
loc_825B4F40:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x825B4F4C;
	sub_82410060(ctx, base);
loc_825B4F4C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,22796
	ctx.r3.s64 = ctx.r11.s64 + 22796;
	// bl 0x82816528
	ctx.lr = 0x825B4F58;
	sub_82816528(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x825b4f8c
	if (!ctx.cr6.gt) goto loc_825B4F8C;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_825B4F70:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x825b4f98
	if (ctx.cr6.eq) goto loc_825B4F98;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825b4f70
	if (ctx.cr6.lt) goto loc_825B4F70;
loc_825B4F8C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x825B4F98;
	sub_82410060(ctx, base);
loc_825B4F98:
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

__attribute__((alias("__imp__sub_825B4FB0"))) PPC_WEAK_FUNC(sub_825B4FB0);
PPC_FUNC_IMPL(__imp__sub_825B4FB0) {
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
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r6,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r6.u64);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825b4ff0
	if (ctx.cr6.eq) goto loc_825B4FF0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B4FF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825B4FF0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1504);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B501C;
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

__attribute__((alias("__imp__sub_825B5038"))) PPC_WEAK_FUNC(sub_825B5038);
PPC_FUNC_IMPL(__imp__sub_825B5038) {
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
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,1408(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// stw r10,1132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1132, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,1408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// bl 0x82903e48
	ctx.lr = 0x825B506C;
	sub_82903E48(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,1660(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1660);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1656(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1656, temp.u32);
	// stw r11,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x829e3da8
	ctx.lr = 0x825B5094;
	sub_829E3DA8(ctx, base);
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

__attribute__((alias("__imp__sub_825B50B0"))) PPC_WEAK_FUNC(sub_825B50B0);
PPC_FUNC_IMPL(__imp__sub_825B50B0) {
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
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x824d2540
	ctx.lr = 0x825B50E0;
	sub_824D2540(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825b5108
	if (ctx.cr6.eq) goto loc_825B5108;
	// bl 0x823a9e00
	ctx.lr = 0x825B50EC;
	sub_823A9E00(ctx, base);
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
	ctx.lr = 0x825B5104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825b510c
	goto loc_825B510C;
loc_825B5108:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B510C:
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// stw r3,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r3.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,1928(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1928);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_825B5140"))) PPC_WEAK_FUNC(sub_825B5140);
PPC_FUNC_IMPL(__imp__sub_825B5140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825B5148;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r29,1408(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// beq cr6,0x825b518c
	if (ctx.cr6.eq) goto loc_825B518C;
	// bl 0x8247b540
	ctx.lr = 0x825B5168;
	sub_8247B540(ctx, base);
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
	ctx.lr = 0x825B5180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x825b5190
	if (!ctx.cr0.eq) goto loc_825B5190;
loc_825B518C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B5190:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b51a8
	if (ctx.cr6.eq) goto loc_825B51A8;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lfs f0,16628(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16628);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1656(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1656, temp.u32);
loc_825B51A8:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r5,14112
	ctx.r5.s64 = 924844032;
	// stw r11,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r5,r5,53358
	ctx.r5.u64 = ctx.r5.u64 | 53358;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1368);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B51D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B51E8"))) PPC_WEAK_FUNC(sub_825B51E8);
PPC_FUNC_IMPL(__imp__sub_825B51E8) {
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
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f2,-28788(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28788);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-24640(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24640);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82825a58
	ctx.lr = 0x825B5218;
	sub_82825A58(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x825b5318
	if (ctx.cr6.eq) goto loc_825B5318;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// cmpwi cr6,r11,328
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 328, ctx.xer);
	// lfs f13,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x825b529c
	if (ctx.cr6.eq) goto loc_825B529C;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r10,328
	ctx.r10.s64 = 328;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,1132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1132, ctx.r10.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x825b5294
	if (ctx.cr6.lt) goto loc_825B5294;
	// stfs f13,52(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// b 0x825b529c
	goto loc_825B529C;
loc_825B5294:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
loc_825B529C:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x825b52c4
	if (ctx.cr6.lt) goto loc_825B52C4;
	// stfs f13,52(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x825b52d0
	goto loc_825B52D0;
loc_825B52C4:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B52D0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b5318
	if (ctx.cr0.eq) goto loc_825B5318;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x829e3da8
	ctx.lr = 0x825B52EC;
	sub_829E3DA8(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r9,1132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1132, ctx.r9.u32);
loc_825B5318:
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

__attribute__((alias("__imp__sub_825B5330"))) PPC_WEAK_FUNC(sub_825B5330);
PPC_FUNC_IMPL(__imp__sub_825B5330) {
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
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r3,1972(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1972);
	// bl 0x829c35d8
	ctx.lr = 0x825B5358;
	sub_829C35D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825b53e8
	if (ctx.cr0.eq) goto loc_825B53E8;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// addi r3,r8,-19620
	ctx.r3.s64 = ctx.r8.s64 + -19620;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,1660(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1660);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1656(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1656, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x825B53A0;
	sub_82816528(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addic. r11,r11,300
	ctx.xer.ca = ctx.r11.u32 > 4294966995;
	ctx.r11.s64 = ctx.r11.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b53c8
	if (ctx.cr0.eq) goto loc_825B53C8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825b53c8
	if (ctx.cr6.eq) goto loc_825B53C8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825b53cc
	goto loc_825B53CC;
loc_825B53C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B53CC:
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r5,-6056(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6056);
	// bl 0x829e4160
	ctx.lr = 0x825B53E8;
	sub_829E4160(ctx, base);
loc_825B53E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B5400"))) PPC_WEAK_FUNC(sub_825B5400);
PPC_FUNC_IMPL(__imp__sub_825B5400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825B5408;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r3,1972(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1972);
	// bl 0x829c35d8
	ctx.lr = 0x825B5424;
	sub_829C35D8(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,1584(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1584);
	// lwz r3,1688(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1688);
	// lwz r8,1684(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1684);
	// addi r4,r11,620
	ctx.r4.s64 = ctx.r11.s64 + 620;
	// lwz r29,1692(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1692);
	// lwz r9,1408(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1408);
	// lwz r11,1492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r10,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lfs f0,1660(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1660);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1656(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1656, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825B5498;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825b54dc
	if (ctx.cr0.eq) goto loc_825B54DC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825b54c8
	if (ctx.cr6.eq) goto loc_825B54C8;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1384);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B54C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825B54C8:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x829e3da8
	ctx.lr = 0x825B54DC;
	sub_829E3DA8(ctx, base);
loc_825B54DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B54E8"))) PPC_WEAK_FUNC(sub_825B54E8);
PPC_FUNC_IMPL(__imp__sub_825B54E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -116);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// b 0x824d07f0
	sub_824D07F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B5500"))) PPC_WEAK_FUNC(sub_825B5500);
PPC_FUNC_IMPL(__imp__sub_825B5500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82a61744
	ctx.lr = 0x825B5514;
	__savefpr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x824d19e0
	ctx.lr = 0x825B552C;
	sub_824D19E0(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x825b5550
	if (ctx.cr6.eq) goto loc_825B5550;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x825B5548;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x825B554C;
	sub_82409C40(ctx, base);
	// b 0x825b5554
	goto loc_825B5554;
loc_825B5550:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B5554:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b5718
	if (ctx.cr6.eq) goto loc_825B5718;
	// lwz r11,1412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b5718
	if (ctx.cr6.eq) goto loc_825B5718;
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r9,620(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// lwz r8,624(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lwz r11,628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r3,1412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b55ac
	if (ctx.cr6.eq) goto loc_825B55AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B55A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825b55b0
	goto loc_825B55B0;
loc_825B55AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B55B0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b5718
	if (ctx.cr6.eq) goto loc_825B5718;
	// lwz r11,624(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,620(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,628(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lfs f29,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f29.f64 = double(temp.f32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lfs f28,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f28.f64 = double(temp.f32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lfs f30,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f29.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f31,16668(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16668);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f28.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f27,f12,f12,f0
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// bl 0x82332e18
	ctx.lr = 0x825B5620;
	sub_82332E18(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,1692(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1692);
	// lwz r9,1684(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1684);
	// lwz r11,1688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1688);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f28.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82332e18
	ctx.lr = 0x825B5674;
	sub_82332E18(ctx, base);
	// fsqrts f13,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f27.f64)));
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,-11424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11424);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x825b5718
	if (!ctx.cr6.lt) goto loc_825B5718;
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f9,f10,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x825b5718
	if (!ctx.cr6.gt) goto loc_825B5718;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,22812
	ctx.r3.s64 = ctx.r11.s64 + 22812;
	// bl 0x828165a8
	ctx.lr = 0x825B56C8;
	sub_828165A8(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addic. r11,r11,300
	ctx.xer.ca = ctx.r11.u32 > 4294966995;
	ctx.r11.s64 = ctx.r11.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b56f8
	if (ctx.cr0.eq) goto loc_825B56F8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825b56f8
	if (ctx.cr6.eq) goto loc_825B56F8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825b56fc
	goto loc_825B56FC;
loc_825B56F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B56FC:
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r5,-6056(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6056);
	// bl 0x829e4160
	ctx.lr = 0x825B5718;
	sub_829E4160(ctx, base);
loc_825B5718:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82a61790
	ctx.lr = 0x825B5724;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B5738"))) PPC_WEAK_FUNC(sub_825B5738);
PPC_FUNC_IMPL(__imp__sub_825B5738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825B5740;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82a61744
	ctx.lr = 0x825B5748;
	__savefpr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x824d0f08
	ctx.lr = 0x825B5764;
	sub_824D0F08(ctx, base);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r30,13024(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r4,1312(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x825b578c
	if (ctx.cr6.eq) goto loc_825B578C;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x825B5780;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x825B5784;
	sub_82409C40(ctx, base);
	// lwz r30,13024(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// b 0x825b5790
	goto loc_825B5790;
loc_825B578C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B5790:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b5970
	if (ctx.cr6.eq) goto loc_825B5970;
	// lwz r11,1412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b5970
	if (ctx.cr6.eq) goto loc_825B5970;
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r9,620(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// lwz r8,624(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lwz r11,628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r3,1412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b57ec
	if (ctx.cr6.eq) goto loc_825B57EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B57E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,13024(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// b 0x825b57f0
	goto loc_825B57F0;
loc_825B57EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B57F0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825b5970
	if (ctx.cr6.eq) goto loc_825B5970;
	// lwz r11,624(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,620(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,628(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lfs f29,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f29.f64 = double(temp.f32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lfs f28,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f28.f64 = double(temp.f32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lfs f30,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f29.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f31,16668(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16668);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f28.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f27,f12,f12,f0
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// bl 0x82332e18
	ctx.lr = 0x825B5860;
	sub_82332E18(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,1408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// lwz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// bl 0x829b9720
	ctx.lr = 0x825B587C;
	sub_829B9720(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b5970
	if (ctx.cr0.eq) goto loc_825B5970;
	// lwz r10,628(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,620(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f28.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82332e18
	ctx.lr = 0x825B58CC;
	sub_82332E18(ctx, base);
	// fsqrts f13,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f27.f64)));
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,-11424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11424);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x825b5970
	if (!ctx.cr6.lt) goto loc_825B5970;
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f9,f10,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x825b5970
	if (!ctx.cr6.gt) goto loc_825B5970;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,22812
	ctx.r3.s64 = ctx.r11.s64 + 22812;
	// bl 0x828165a8
	ctx.lr = 0x825B5920;
	sub_828165A8(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addic. r11,r11,300
	ctx.xer.ca = ctx.r11.u32 > 4294966995;
	ctx.r11.s64 = ctx.r11.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b5950
	if (ctx.cr0.eq) goto loc_825B5950;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825b5950
	if (ctx.cr6.eq) goto loc_825B5950;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825b5954
	goto loc_825B5954;
loc_825B5950:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B5954:
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r5,-6056(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6056);
	// bl 0x829e4160
	ctx.lr = 0x825B5970;
	sub_829E4160(ctx, base);
loc_825B5970:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82a61790
	ctx.lr = 0x825B597C;
	__restfpr_27(ctx, base);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B5980"))) PPC_WEAK_FUNC(sub_825B5980);
PPC_FUNC_IMPL(__imp__sub_825B5980) {
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
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r4,r11,23056
	ctx.r4.s64 = ctx.r11.s64 + 23056;
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B59B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825b59fc
	if (!ctx.cr0.eq) goto loc_825B59FC;
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r8,23056
	ctx.r6.s64 = ctx.r8.s64 + 23056;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// rldicr r7,r11,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lfs f1,-11456(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11456);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x825b5b68
	ctx.lr = 0x825B59FC;
	sub_825B5B68(ctx, base);
loc_825B59FC:
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

__attribute__((alias("__imp__sub_825B5A10"))) PPC_WEAK_FUNC(sub_825B5A10);
PPC_FUNC_IMPL(__imp__sub_825B5A10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r11,300
	ctx.xer.ca = ctx.r11.u32 > 4294966995;
	ctx.r11.s64 = ctx.r11.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b5a40
	if (ctx.cr0.eq) goto loc_825B5A40;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825b5a40
	if (ctx.cr6.eq) goto loc_825B5A40;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825b5a44
	goto loc_825B5A44;
loc_825B5A40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B5A44:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lis r4,18987
	ctx.r4.s64 = 1244332032;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,-6056(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// ori r4,r4,28266
	ctx.r4.u64 = ctx.r4.u64 | 28266;
	// b 0x829e3fd0
	sub_829E3FD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B5A68"))) PPC_WEAK_FUNC(sub_825B5A68);
PPC_FUNC_IMPL(__imp__sub_825B5A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r3,1972(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1972);
	// bl 0x829c35d8
	ctx.lr = 0x825B5A90;
	sub_829C35D8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x825b5aac
	if (ctx.cr0.eq) goto loc_825B5AAC;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x825b5140
	ctx.lr = 0x825B5AAC;
	sub_825B5140(ctx, base);
loc_825B5AAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B5AC0"))) PPC_WEAK_FUNC(sub_825B5AC0);
PPC_FUNC_IMPL(__imp__sub_825B5AC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825B5AC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r3,1972(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1972);
	// lwz r30,1584(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// bl 0x829c35d8
	ctx.lr = 0x825B5AE8;
	sub_829C35D8(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r3,1492(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1492);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r29,1408(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// stw r10,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r10.u32);
	// beq 0x825b5b30
	if (ctx.cr0.eq) goto loc_825B5B30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r6,620
	ctx.r5.s64 = ctx.r6.s64 + 620;
	// addi r4,r30,620
	ctx.r4.s64 = ctx.r30.s64 + 620;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B5B28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825b5b60
	if (ctx.cr0.eq) goto loc_825B5B60;
loc_825B5B30:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lfs f0,1660(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1660);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1656(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1656, temp.u32);
	// stw r10,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r10.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x829e3da8
	ctx.lr = 0x825B5B60;
	sub_829E3DA8(ctx, base);
loc_825B5B60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B5B68"))) PPC_WEAK_FUNC(sub_825B5B68);
PPC_FUNC_IMPL(__imp__sub_825B5B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825B5B70;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r6,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,176(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// bl 0x829c80b8
	ctx.lr = 0x825B5B8C;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825b5c24
	if (!ctx.cr0.eq) goto loc_825B5C24;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823aa4c0
	ctx.lr = 0x825B5B9C;
	sub_823AA4C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B5BB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x825B5BBC;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x825b5c10
	if (ctx.cr0.eq) goto loc_825B5C10;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
	// addi r7,r7,18100
	ctx.r7.s64 = ctx.r7.s64 + 18100;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r29,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// b 0x825b5c14
	goto loc_825B5C14;
loc_825B5C10:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_825B5C14:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x825B5C20;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825B5C24:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,-11456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11456);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B5C44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B5C50"))) PPC_WEAK_FUNC(sub_825B5C50);
PPC_FUNC_IMPL(__imp__sub_825B5C50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82374a60
	sub_82374A60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B5C58"))) PPC_WEAK_FUNC(sub_825B5C58);
PPC_FUNC_IMPL(__imp__sub_825B5C58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825b4a90
	sub_825B4A90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B5C60"))) PPC_WEAK_FUNC(sub_825B5C60);
PPC_FUNC_IMPL(__imp__sub_825B5C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825B5C68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824db158
	ctx.lr = 0x825B5C74;
	sub_824DB158(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r11,r11,-1824
	ctx.r11.s64 = ctx.r11.s64 + -1824;
	// addi r10,r10,536
	ctx.r10.s64 = ctx.r10.s64 + 536;
	// addi r9,r9,-6552
	ctx.r9.s64 = ctx.r9.s64 + -6552;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,-1084
	ctx.r3.s64 = ctx.r11.s64 + -1084;
	// bl 0x82816528
	ctx.lr = 0x825B5CA4;
	sub_82816528(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r29,2
	ctx.r29.s64 = 2;
	// stw r3,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r3.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,2588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2588, ctx.r11.u32);
	// stw r29,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r29.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r30,5348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5348, ctx.r30.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r11,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r11.u32);
	// stw r11,6112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6112, ctx.r11.u32);
	// stw r11,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r11.u32);
	// lfs f2,-27300(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27300);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82825a58
	ctx.lr = 0x825B5CE0;
	sub_82825A58(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x825b5cf8
	if (!ctx.cr6.gt) goto loc_825B5CF8;
	// stw r29,6112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6112, ctx.r29.u32);
	// b 0x825b5cfc
	goto loc_825B5CFC;
loc_825B5CF8:
	// stw r30,6112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6112, ctx.r30.u32);
loc_825B5CFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B5D08"))) PPC_WEAK_FUNC(sub_825B5D08);
PPC_FUNC_IMPL(__imp__sub_825B5D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x824dd5b0
	ctx.lr = 0x825B5D20;
	sub_824DD5B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82895f78
	ctx.lr = 0x825B5D28;
	sub_82895F78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825b5d3c
	if (ctx.cr0.eq) goto loc_825B5D3C;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// ori r11,r11,80
	ctx.r11.u64 = ctx.r11.u64 | 80;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
loc_825B5D3C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B5D50"))) PPC_WEAK_FUNC(sub_825B5D50);
PPC_FUNC_IMPL(__imp__sub_825B5D50) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x824dd3f8
	ctx.lr = 0x825B5D70;
	sub_824DD3F8(ctx, base);
	// lfs f0,476(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6096(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6096, temp.u32);
	// lfs f0,480(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 480);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6100, temp.u32);
	// lfs f0,484(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6104, temp.u32);
	// lfs f0,488(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 488);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6108, temp.u32);
	// lwz r11,492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// stw r11,6112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6112, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_825B5DB0"))) PPC_WEAK_FUNC(sub_825B5DB0);
PPC_FUNC_IMPL(__imp__sub_825B5DB0) {
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
	ctx.lr = 0x825B5DC8;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32243
	ctx.r30.s64 = -2113077248;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r10,r30,-27300
	ctx.r10.s64 = ctx.r30.s64 + -27300;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f30,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,15844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15844);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82825a58
	ctx.lr = 0x825B5DF0;
	sub_82825A58(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f28,-27300(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -27300);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f1,f29
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// bgt cr6,0x825b5e10
	if (ctx.cr6.gt) goto loc_825B5E10;
	// lis r11,21978
	ctx.r11.s64 = 1440350208;
	// ori r11,r11,34395
	ctx.r11.u64 = ctx.r11.u64 | 34395;
	// b 0x825b5e2c
	goto loc_825B5E2C;
loc_825B5E10:
	// fcmpu cr6,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bgt cr6,0x825b5e24
	if (ctx.cr6.gt) goto loc_825B5E24;
	// lis r11,15263
	ctx.r11.s64 = 1000275968;
	// ori r11,r11,37094
	ctx.r11.u64 = ctx.r11.u64 | 37094;
	// b 0x825b5e2c
	goto loc_825B5E2C;
loc_825B5E24:
	// lis r11,775
	ctx.r11.s64 = 50790400;
	// ori r11,r11,33386
	ctx.r11.u64 = ctx.r11.u64 | 33386;
loc_825B5E2C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x825B5E3C;
	sub_82410060(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82825a58
	ctx.lr = 0x825B5E48;
	sub_82825A58(ctx, base);
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// bgt cr6,0x825b5e5c
	if (ctx.cr6.gt) goto loc_825B5E5C;
	// lis r11,-28749
	ctx.r11.s64 = -1884094464;
	// ori r11,r11,48438
	ctx.r11.u64 = ctx.r11.u64 | 48438;
	// b 0x825b5e78
	goto loc_825B5E78;
loc_825B5E5C:
	// fcmpu cr6,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bgt cr6,0x825b5e70
	if (ctx.cr6.gt) goto loc_825B5E70;
	// lis r11,-14226
	ctx.r11.s64 = -932315136;
	// ori r11,r11,28597
	ctx.r11.u64 = ctx.r11.u64 | 28597;
	// b 0x825b5e78
	goto loc_825B5E78;
loc_825B5E70:
	// lis r11,14579
	ctx.r11.s64 = 955449344;
	// ori r11,r11,36091
	ctx.r11.u64 = ctx.r11.u64 | 36091;
loc_825B5E78:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x825B5E88;
	sub_82410060(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82825a58
	ctx.lr = 0x825B5E94;
	sub_82825A58(ctx, base);
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// bgt cr6,0x825b5ea8
	if (ctx.cr6.gt) goto loc_825B5EA8;
	// lis r11,-30763
	ctx.r11.s64 = -2016083968;
	// ori r11,r11,42119
	ctx.r11.u64 = ctx.r11.u64 | 42119;
	// b 0x825b5ec4
	goto loc_825B5EC4;
loc_825B5EA8:
	// fcmpu cr6,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bgt cr6,0x825b5ebc
	if (ctx.cr6.gt) goto loc_825B5EBC;
	// lis r11,31452
	ctx.r11.s64 = 2061238272;
	// ori r11,r11,37093
	ctx.r11.u64 = ctx.r11.u64 | 37093;
	// b 0x825b5ec4
	goto loc_825B5EC4;
loc_825B5EBC:
	// lis r11,24408
	ctx.r11.s64 = 1599602688;
	// ori r11,r11,24803
	ctx.r11.u64 = ctx.r11.u64 | 24803;
loc_825B5EC4:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x825B5ED4;
	sub_82410060(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82825a58
	ctx.lr = 0x825B5EE0;
	sub_82825A58(ctx, base);
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// bgt cr6,0x825b5ef4
	if (ctx.cr6.gt) goto loc_825B5EF4;
	// lis r11,-26477
	ctx.r11.s64 = -1735196672;
	// ori r11,r11,59423
	ctx.r11.u64 = ctx.r11.u64 | 59423;
	// b 0x825b5f10
	goto loc_825B5F10;
loc_825B5EF4:
	// fcmpu cr6,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bgt cr6,0x825b5f08
	if (ctx.cr6.gt) goto loc_825B5F08;
	// lis r11,19991
	ctx.r11.s64 = 1310130176;
	// ori r11,r11,25805
	ctx.r11.u64 = ctx.r11.u64 | 25805;
	// b 0x825b5f10
	goto loc_825B5F10;
loc_825B5F08:
	// lis r11,7063
	ctx.r11.s64 = 462880768;
	// ori r11,r11,12495
	ctx.r11.u64 = ctx.r11.u64 | 12495;
loc_825B5F10:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x825B5F20;
	sub_82410060(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82825a58
	ctx.lr = 0x825B5F2C;
	sub_82825A58(ctx, base);
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// bgt cr6,0x825b5f40
	if (ctx.cr6.gt) goto loc_825B5F40;
	// lis r11,-4194
	ctx.r11.s64 = -274857984;
	// ori r11,r11,35089
	ctx.r11.u64 = ctx.r11.u64 | 35089;
	// b 0x825b5f5c
	goto loc_825B5F5C;
loc_825B5F40:
	// fcmpu cr6,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bgt cr6,0x825b5f54
	if (ctx.cr6.gt) goto loc_825B5F54;
	// lis r11,-19543
	ctx.r11.s64 = -1280770048;
	// ori r11,r11,17351
	ctx.r11.u64 = ctx.r11.u64 | 17351;
	// b 0x825b5f5c
	goto loc_825B5F5C;
loc_825B5F54:
	// lis r11,13134
	ctx.r11.s64 = 860749824;
	// ori r11,r11,47535
	ctx.r11.u64 = ctx.r11.u64 | 47535;
loc_825B5F5C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x825B5F6C;
	sub_82410060(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82825a58
	ctx.lr = 0x825B5F78;
	sub_82825A58(ctx, base);
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// bgt cr6,0x825b5f8c
	if (ctx.cr6.gt) goto loc_825B5F8C;
	// lis r11,-8829
	ctx.r11.s64 = -578617344;
	// ori r11,r11,20225
	ctx.r11.u64 = ctx.r11.u64 | 20225;
	// b 0x825b5fa8
	goto loc_825B5FA8;
loc_825B5F8C:
	// fcmpu cr6,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bgt cr6,0x825b5fa0
	if (ctx.cr6.gt) goto loc_825B5FA0;
	// lis r11,-9334
	ctx.r11.s64 = -611713024;
	// ori r11,r11,51059
	ctx.r11.u64 = ctx.r11.u64 | 51059;
	// b 0x825b5fa8
	goto loc_825B5FA8;
loc_825B5FA0:
	// lis r11,-16267
	ctx.r11.s64 = -1066074112;
	// ori r11,r11,44590
	ctx.r11.u64 = ctx.r11.u64 | 44590;
loc_825B5FA8:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x825B5FB8;
	sub_82410060(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82a61794
	ctx.lr = 0x825B5FC4;
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

__attribute__((alias("__imp__sub_825B5FD8"))) PPC_WEAK_FUNC(sub_825B5FD8);
PPC_FUNC_IMPL(__imp__sub_825B5FD8) {
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
	// bl 0x82a61744
	ctx.lr = 0x825B5FF0;
	__savefpr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r30,r11,-11456
	ctx.r30.s64 = ctx.r11.s64 + -11456;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,-15844(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -15844);
	ctx.f29.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x82825a58
	ctx.lr = 0x825B6018;
	sub_82825A58(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bgt cr6,0x825b6034
	if (ctx.cr6.gt) goto loc_825B6034;
	// lis r11,22258
	ctx.r11.s64 = 1458700288;
	// ori r11,r11,45103
	ctx.r11.u64 = ctx.r11.u64 | 45103;
	// b 0x825b6044
	goto loc_825B6044;
loc_825B6034:
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// bgt cr6,0x825b6054
	if (ctx.cr6.gt) goto loc_825B6054;
	// lis r11,25666
	ctx.r11.s64 = 1682046976;
	// ori r11,r11,41882
	ctx.r11.u64 = ctx.r11.u64 | 41882;
loc_825B6044:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x825B6054;
	sub_82410060(ctx, base);
loc_825B6054:
	// lfs f27,-13624(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -13624);
	ctx.f27.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// bl 0x82825a58
	ctx.lr = 0x825B6064;
	sub_82825A58(ctx, base);
	// lfs f28,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bgt cr6,0x825b607c
	if (ctx.cr6.gt) goto loc_825B607C;
	// lis r11,27648
	ctx.r11.s64 = 1811939328;
	// ori r11,r11,15791
	ctx.r11.u64 = ctx.r11.u64 | 15791;
	// b 0x825b60a0
	goto loc_825B60A0;
loc_825B607C:
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// bgt cr6,0x825b6090
	if (ctx.cr6.gt) goto loc_825B6090;
	// lis r11,29414
	ctx.r11.s64 = 1927675904;
	// ori r11,r11,45931
	ctx.r11.u64 = ctx.r11.u64 | 45931;
	// b 0x825b60a0
	goto loc_825B60A0;
loc_825B6090:
	// fcmpu cr6,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bgt cr6,0x825b60b0
	if (ctx.cr6.gt) goto loc_825B60B0;
	// lis r11,-26177
	ctx.r11.s64 = -1715535872;
	// ori r11,r11,9166
	ctx.r11.u64 = ctx.r11.u64 | 9166;
loc_825B60A0:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x825B60B0;
	sub_82410060(ctx, base);
loc_825B60B0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f2,32716(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32716);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82825a58
	ctx.lr = 0x825B60C0;
	sub_82825A58(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bgt cr6,0x825b60d4
	if (ctx.cr6.gt) goto loc_825B60D4;
loc_825B60C8:
	// lis r11,2830
	ctx.r11.s64 = 185466880;
	// ori r11,r11,10156
	ctx.r11.u64 = ctx.r11.u64 | 10156;
	// b 0x825b610c
	goto loc_825B610C;
loc_825B60D4:
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// ble cr6,0x825b60c8
	if (!ctx.cr6.gt) goto loc_825B60C8;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bgt cr6,0x825b60f0
	if (ctx.cr6.gt) goto loc_825B60F0;
	// lis r11,-27986
	ctx.r11.s64 = -1834090496;
	// ori r11,r11,51858
	ctx.r11.u64 = ctx.r11.u64 | 51858;
	// b 0x825b610c
	goto loc_825B610C;
loc_825B60F0:
	// fcmpu cr6,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f27.f64);
	// bgt cr6,0x825b6104
	if (ctx.cr6.gt) goto loc_825B6104;
	// lis r11,14977
	ctx.r11.s64 = 981532672;
	// ori r11,r11,10091
	ctx.r11.u64 = ctx.r11.u64 | 10091;
	// b 0x825b610c
	goto loc_825B610C;
loc_825B6104:
	// lis r11,13908
	ctx.r11.s64 = 911474688;
	// ori r11,r11,18758
	ctx.r11.u64 = ctx.r11.u64 | 18758;
loc_825B610C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x825B611C;
	sub_82410060(ctx, base);
	// lis r11,14862
	ctx.r11.s64 = 973996032;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,22266
	ctx.r11.u64 = ctx.r11.u64 | 22266;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825B6134;
	sub_82410060(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82a61790
	ctx.lr = 0x825B6140;
	__restfpr_27(ctx, base);
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

__attribute__((alias("__imp__sub_825B6158"))) PPC_WEAK_FUNC(sub_825B6158);
PPC_FUNC_IMPL(__imp__sub_825B6158) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6112);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825b6170
	if (ctx.cr6.eq) goto loc_825B6170;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x825b5db0
	sub_825B5DB0(ctx, base);
	return;
loc_825B6170:
	// b 0x825b5fd8
	sub_825B5FD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B6174"))) PPC_WEAK_FUNC(sub_825B6174);
PPC_FUNC_IMPL(__imp__sub_825B6174) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B6178"))) PPC_WEAK_FUNC(sub_825B6178);
PPC_FUNC_IMPL(__imp__sub_825B6178) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6112);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825b61a4
	if (ctx.cr6.eq) goto loc_825B61A4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825b6198
	if (ctx.cr6.eq) goto loc_825B6198;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,24488
	ctx.r3.s64 = ctx.r11.s64 + 24488;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
loc_825B6198:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,24512
	ctx.r3.s64 = ctx.r11.s64 + 24512;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
loc_825B61A4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,24488
	ctx.r3.s64 = ctx.r11.s64 + 24488;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B61B0"))) PPC_WEAK_FUNC(sub_825B61B0);
PPC_FUNC_IMPL(__imp__sub_825B61B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6112);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825b61d4
	if (ctx.cr6.eq) goto loc_825B61D4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,24560
	ctx.r3.s64 = ctx.r11.s64 + 24560;
	// beq cr6,0x825b61d0
	if (ctx.cr6.eq) goto loc_825B61D0;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
loc_825B61D0:
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
loc_825B61D4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,24536
	ctx.r3.s64 = ctx.r11.s64 + 24536;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B61E0"))) PPC_WEAK_FUNC(sub_825B61E0);
PPC_FUNC_IMPL(__imp__sub_825B61E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,16584(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16584);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16580);
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

__attribute__((alias("__imp__sub_825B6200"))) PPC_WEAK_FUNC(sub_825B6200);
PPC_FUNC_IMPL(__imp__sub_825B6200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x824dd8b8
	ctx.lr = 0x825B6218;
	sub_824DD8B8(ctx, base);
	// lwz r11,6112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6112);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825b6240
	if (ctx.cr6.eq) goto loc_825B6240;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x825b6250
	if (!ctx.cr6.eq) goto loc_825B6250;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,24584
	ctx.r4.s64 = ctx.r11.s64 + 24584;
	// bl 0x825b6278
	ctx.lr = 0x825B623C;
	sub_825B6278(ctx, base);
	// b 0x825b6250
	goto loc_825B6250;
loc_825B6240:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,24620
	ctx.r4.s64 = ctx.r11.s64 + 24620;
	// bl 0x825b71a0
	ctx.lr = 0x825B6250;
	sub_825B71A0(ctx, base);
loc_825B6250:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B6264;
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

__attribute__((alias("__imp__sub_825B6278"))) PPC_WEAK_FUNC(sub_825B6278);
PPC_FUNC_IMPL(__imp__sub_825B6278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d0
	ctx.lr = 0x825B6280;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82a61744
	ctx.lr = 0x825B6288;
	__savefpr_27(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31943
	ctx.r31.s64 = -2093416448;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,12436
	ctx.r30.s64 = ctx.r11.s64 + 12436;
	// stw r29,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r29.u32);
	// lwz r11,-17672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17672);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825b62fc
	if (!ctx.cr0.eq) goto loc_825B62FC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r11,-17672(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17672, ctx.r11.u32);
	// addi r3,r10,24716
	ctx.r3.s64 = ctx.r10.s64 + 24716;
	// bl 0x82816528
	ctx.lr = 0x825B62C4;
	sub_82816528(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,24696
	ctx.r3.s64 = ctx.r11.s64 + 24696;
	// bl 0x82816528
	ctx.lr = 0x825B62D4;
	sub_82816528(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,24676
	ctx.r3.s64 = ctx.r11.s64 + 24676;
	// bl 0x82816528
	ctx.lr = 0x825B62E4;
	sub_82816528(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,24656
	ctx.r3.s64 = ctx.r11.s64 + 24656;
	// bl 0x82816528
	ctx.lr = 0x825B62F4;
	sub_82816528(ctx, base);
	// lwz r11,-17672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17672);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
loc_825B62FC:
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r30,r10,12452
	ctx.r30.s64 = ctx.r10.s64 + 12452;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// bne 0x825b635c
	if (!ctx.cr0.eq) goto loc_825B635C;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r11,-17672(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17672, ctx.r11.u32);
	// addi r3,r10,24796
	ctx.r3.s64 = ctx.r10.s64 + 24796;
	// bl 0x82816528
	ctx.lr = 0x825B6324;
	sub_82816528(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,24776
	ctx.r3.s64 = ctx.r11.s64 + 24776;
	// bl 0x82816528
	ctx.lr = 0x825B6334;
	sub_82816528(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,24756
	ctx.r3.s64 = ctx.r11.s64 + 24756;
	// bl 0x82816528
	ctx.lr = 0x825B6344;
	sub_82816528(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,24736
	ctx.r3.s64 = ctx.r11.s64 + 24736;
	// bl 0x82816528
	ctx.lr = 0x825B6354;
	sub_82816528(ctx, base);
	// lwz r11,-17672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17672);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
loc_825B635C:
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// rlwinm. r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r30,r10,12468
	ctx.r30.s64 = ctx.r10.s64 + 12468;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// bne 0x825b63b8
	if (!ctx.cr0.eq) goto loc_825B63B8;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r11,-17672(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17672, ctx.r11.u32);
	// addi r3,r10,24876
	ctx.r3.s64 = ctx.r10.s64 + 24876;
	// bl 0x82816528
	ctx.lr = 0x825B6384;
	sub_82816528(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,24856
	ctx.r3.s64 = ctx.r11.s64 + 24856;
	// bl 0x82816528
	ctx.lr = 0x825B6394;
	sub_82816528(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,24836
	ctx.r3.s64 = ctx.r11.s64 + 24836;
	// bl 0x82816528
	ctx.lr = 0x825B63A4;
	sub_82816528(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,24816
	ctx.r3.s64 = ctx.r11.s64 + 24816;
	// bl 0x82816528
	ctx.lr = 0x825B63B4;
	sub_82816528(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
loc_825B63B8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,24584
	ctx.r3.s64 = ctx.r11.s64 + 24584;
	// bl 0x829e6d68
	ctx.lr = 0x825B63C4;
	sub_829E6D68(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825b7190
	if (ctx.cr0.eq) goto loc_825B7190;
	// lwz r31,76(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// bl 0x82825ab8
	ctx.lr = 0x825B63E0;
	sub_82825AB8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x825b63f0
	if (!ctx.cr6.gt) goto loc_825B63F0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_825B63F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// addi r16,r11,25856
	ctx.r16.s64 = ctx.r11.s64 + 25856;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// addi r10,r11,25280
	ctx.r10.s64 = ctx.r11.s64 + 25280;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r10,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// addi r10,r11,25256
	ctx.r10.s64 = ctx.r11.s64 + 25256;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// lis r31,-32227
	ctx.r31.s64 = -2112028672;
	// addi r10,r11,25232
	ctx.r10.s64 = ctx.r11.s64 + 25232;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r4,-32227
	ctx.r4.s64 = -2112028672;
	// stw r10,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r10.u32);
	// addi r11,r11,25208
	ctx.r11.s64 = ctx.r11.s64 + 25208;
	// lis r3,-32227
	ctx.r3.s64 = -2112028672;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// addi r11,r8,25792
	ctx.r11.s64 = ctx.r8.s64 + 25792;
	// addi r8,r7,25768
	ctx.r8.s64 = ctx.r7.s64 + 25768;
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// addi r11,r5,25720
	ctx.r11.s64 = ctx.r5.s64 + 25720;
	// addi r7,r6,25744
	ctx.r7.s64 = ctx.r6.s64 + 25744;
	// stw r8,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r8.u32);
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// addi r11,r31,25644
	ctx.r11.s64 = ctx.r31.s64 + 25644;
	// lis r28,-32227
	ctx.r28.s64 = -2112028672;
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// addi r8,r4,25692
	ctx.r8.s64 = ctx.r4.s64 + 25692;
	// addi r7,r3,25668
	ctx.r7.s64 = ctx.r3.s64 + 25668;
	// addi r11,r28,25568
	ctx.r11.s64 = ctx.r28.s64 + 25568;
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// lis r30,-32227
	ctx.r30.s64 = -2112028672;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// lis r29,-32227
	ctx.r29.s64 = -2112028672;
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// lis r25,-32227
	ctx.r25.s64 = -2112028672;
	// addi r8,r30,25620
	ctx.r8.s64 = ctx.r30.s64 + 25620;
	// addi r7,r29,25592
	ctx.r7.s64 = ctx.r29.s64 + 25592;
	// addi r11,r25,25496
	ctx.r11.s64 = ctx.r25.s64 + 25496;
	// stw r8,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r8.u32);
	// lis r27,-32227
	ctx.r27.s64 = -2112028672;
	// stw r7,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r7.u32);
	// lis r26,-32227
	ctx.r26.s64 = -2112028672;
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// addi r8,r27,25544
	ctx.r8.s64 = ctx.r27.s64 + 25544;
	// addi r7,r26,25520
	ctx.r7.s64 = ctx.r26.s64 + 25520;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r8,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r8.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// lis r24,-32227
	ctx.r24.s64 = -2112028672;
	// lis r23,-32227
	ctx.r23.s64 = -2112028672;
	// lis r22,-32227
	ctx.r22.s64 = -2112028672;
	// lis r21,-32227
	ctx.r21.s64 = -2112028672;
	// lis r20,-32227
	ctx.r20.s64 = -2112028672;
	// lis r19,-32227
	ctx.r19.s64 = -2112028672;
	// lis r18,-32227
	ctx.r18.s64 = -2112028672;
	// lis r17,-32227
	ctx.r17.s64 = -2112028672;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// addi r15,r10,25836
	ctx.r15.s64 = ctx.r10.s64 + 25836;
	// addi r14,r9,25816
	ctx.r14.s64 = ctx.r9.s64 + 25816;
	// addi r24,r24,25472
	ctx.r24.s64 = ctx.r24.s64 + 25472;
	// addi r23,r23,25448
	ctx.r23.s64 = ctx.r23.s64 + 25448;
	// addi r22,r22,25424
	ctx.r22.s64 = ctx.r22.s64 + 25424;
	// addi r21,r21,25400
	ctx.r21.s64 = ctx.r21.s64 + 25400;
	// addi r20,r20,25376
	ctx.r20.s64 = ctx.r20.s64 + 25376;
	// addi r19,r19,25352
	ctx.r19.s64 = ctx.r19.s64 + 25352;
	// addi r18,r18,25328
	ctx.r18.s64 = ctx.r18.s64 + 25328;
	// addi r17,r17,25304
	ctx.r17.s64 = ctx.r17.s64 + 25304;
	// addi r5,r11,25184
	ctx.r5.s64 = ctx.r11.s64 + 25184;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lfs f30,24252(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24252);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,908(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 908);
	ctx.f29.f64 = double(temp.f32);
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// addi r8,r11,25160
	ctx.r8.s64 = ctx.r11.s64 + 25160;
	// lfs f31,904(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// addi r7,r11,25136
	ctx.r7.s64 = ctx.r11.s64 + 25136;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r10,r10,24968
	ctx.r10.s64 = ctx.r10.s64 + 24968;
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// addi r6,r11,25112
	ctx.r6.s64 = ctx.r11.s64 + 25112;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r10,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// addi r5,r11,25088
	ctx.r5.s64 = ctx.r11.s64 + 25088;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// addi r4,r11,25064
	ctx.r4.s64 = ctx.r11.s64 + 25064;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// addi r10,r9,24944
	ctx.r10.s64 = ctx.r9.s64 + 24944;
	// addi r4,r11,25040
	ctx.r4.s64 = ctx.r11.s64 + 25040;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// stw r4,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r4.u32);
	// addi r9,r8,24920
	ctx.r9.s64 = ctx.r8.s64 + 24920;
	// addi r4,r11,25016
	ctx.r4.s64 = ctx.r11.s64 + 25016;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r9,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r9.u32);
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// addi r11,r11,24992
	ctx.r11.s64 = ctx.r11.s64 + 24992;
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// addi r10,r7,24912
	ctx.r10.s64 = ctx.r7.s64 + 24912;
	// addi r11,r6,24904
	ctx.r11.s64 = ctx.r6.s64 + 24904;
	// addi r9,r5,24896
	ctx.r9.s64 = ctx.r5.s64 + 24896;
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// li r25,-1
	ctx.r25.s64 = -1;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
loc_825B65FC:
	// lwz r11,644(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825b7190
	if (!ctx.cr6.lt) goto loc_825B7190;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x824112d0
	ctx.lr = 0x825B6618;
	sub_824112D0(ctx, base);
	// bl 0x82411cb0
	ctx.lr = 0x825B661C;
	sub_82411CB0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x825b7180
	if (ctx.cr0.eq) goto loc_825B7180;
	// lis r10,-8829
	ctx.r10.s64 = -578617344;
	// lwz r11,472(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 472);
	// ori r10,r10,20225
	ctx.r10.u64 = ctx.r10.u64 | 20225;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x825b6c60
	if (ctx.cr6.gt) goto loc_825B6C60;
	// beq cr6,0x825b6b9c
	if (ctx.cr6.eq) goto loc_825B6B9C;
	// lis r10,-30763
	ctx.r10.s64 = -2016083968;
	// ori r10,r10,42119
	ctx.r10.u64 = ctx.r10.u64 | 42119;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825b6ad8
	if (ctx.cr6.eq) goto loc_825B6AD8;
	// lis r10,-28749
	ctx.r10.s64 = -1884094464;
	// ori r10,r10,48438
	ctx.r10.u64 = ctx.r10.u64 | 48438;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825b69d8
	if (ctx.cr6.eq) goto loc_825B69D8;
	// lis r10,-26477
	ctx.r10.s64 = -1735196672;
	// ori r10,r10,59423
	ctx.r10.u64 = ctx.r10.u64 | 59423;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825b6914
	if (ctx.cr6.eq) goto loc_825B6914;
	// lis r10,-16267
	ctx.r10.s64 = -1066074112;
	// ori r10,r10,44590
	ctx.r10.u64 = ctx.r10.u64 | 44590;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825b6850
	if (ctx.cr6.eq) goto loc_825B6850;
	// lis r10,-14226
	ctx.r10.s64 = -932315136;
	// ori r10,r10,28597
	ctx.r10.u64 = ctx.r10.u64 | 28597;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825b6760
	if (ctx.cr6.eq) goto loc_825B6760;
	// lis r10,-9334
	ctx.r10.s64 = -611713024;
	// ori r10,r10,51059
	ctx.r10.u64 = ctx.r10.u64 | 51059;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825b6cb0
	if (!ctx.cr6.eq) goto loc_825B6CB0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B66B0;
	sub_829E68F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B66C8;
	sub_829E68F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B66E0;
	sub_829E68F0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmuls f13,f27,f30
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stfs f13,272(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f0,276(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// bl 0x829e68f0
	ctx.lr = 0x825B6708;
	sub_829E68F0(ctx, base);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// stfs f0,280(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f29,284(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r4,26489
	ctx.r4.s64 = 1735983104;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r4,r4,51172
	ctx.r4.u64 = ctx.r4.u64 | 51172;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// bl 0x82965458
	ctx.lr = 0x825B6754;
	sub_82965458(ctx, base);
	// lis r4,-10474
	ctx.r4.s64 = -686424064;
	// ori r4,r4,48152
	ctx.r4.u64 = ctx.r4.u64 | 48152;
	// b 0x825b7170
	goto loc_825B7170;
loc_825B6760:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B6778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x825b7180
	if (!ctx.cr0.gt) goto loc_825B7180;
loc_825B6780:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B6798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82a4d040
	ctx.lr = 0x825B67A4;
	sub_82A4D040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825b682c
	if (ctx.cr0.eq) goto loc_825B682C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82825ab8
	ctx.lr = 0x825B67C4;
	sub_82825AB8(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x825b67d0
	if (ctx.cr6.lt) goto loc_825B67D0;
	// li r3,3
	ctx.r3.s64 = 3;
loc_825B67D0:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// lwzx r5,r28,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// bl 0x824091a0
	ctx.lr = 0x825B67F4;
	sub_824091A0(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// lwzx r5,r28,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// bl 0x825b7c80
	ctx.lr = 0x825B6814;
	sub_825B7C80(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825b682c
	if (ctx.cr6.eq) goto loc_825B682C;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x825b6ac8
	if (!ctx.cr6.eq) goto loc_825B6AC8;
loc_825B682C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B6844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r27,r3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x825b6780
	if (ctx.cr6.lt) goto loc_825B6780;
	// b 0x825b7180
	goto loc_825B7180;
loc_825B6850:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B6864;
	sub_829E68F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// lwz r4,260(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B687C;
	sub_829E68F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B6894;
	sub_829E68F0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmuls f13,f27,f30
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,232(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stfs f13,304(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f0,308(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// bl 0x829e68f0
	ctx.lr = 0x825B68BC;
	sub_829E68F0(ctx, base);
	// stfs f29,316(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// fmuls f0,f1,f30
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// stfs f0,312(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r4,5108
	ctx.r4.s64 = 334757888;
	// li r6,-1
	ctx.r6.s64 = -1;
	// ori r4,r4,53463
	ctx.r4.u64 = ctx.r4.u64 | 53463;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x82965458
	ctx.lr = 0x825B6908;
	sub_82965458(ctx, base);
	// lis r4,-13839
	ctx.r4.s64 = -906952704;
	// ori r4,r4,15097
	ctx.r4.u64 = ctx.r4.u64 | 15097;
	// b 0x825b7170
	goto loc_825B7170;
loc_825B6914:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B6928;
	sub_829E68F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// lwz r4,248(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B6940;
	sub_829E68F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B6958;
	sub_829E68F0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmuls f13,f27,f30
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// stfs f13,368(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f0,372(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// bl 0x829e68f0
	ctx.lr = 0x825B6980;
	sub_829E68F0(ctx, base);
	// stfs f29,380(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// fmuls f0,f1,f30
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// stfs f0,376(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r4,16161
	ctx.r4.s64 = 1059127296;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// ori r4,r4,61641
	ctx.r4.u64 = ctx.r4.u64 | 61641;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x82965458
	ctx.lr = 0x825B69CC;
	sub_82965458(ctx, base);
	// lis r4,27617
	ctx.r4.s64 = 1809907712;
	// ori r4,r4,27292
	ctx.r4.u64 = ctx.r4.u64 | 27292;
	// b 0x825b7170
	goto loc_825B7170;
loc_825B69D8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B69F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x825b7180
	if (!ctx.cr0.gt) goto loc_825B7180;
loc_825B69F8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B6A10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x82a4d040
	ctx.lr = 0x825B6A1C;
	sub_82A4D040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825b6aa4
	if (ctx.cr0.eq) goto loc_825B6AA4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82825ab8
	ctx.lr = 0x825B6A3C;
	sub_82825AB8(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x825b6a48
	if (ctx.cr6.lt) goto loc_825B6A48;
	// li r3,3
	ctx.r3.s64 = 3;
loc_825B6A48:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// lwzx r5,r28,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// bl 0x824091a0
	ctx.lr = 0x825B6A6C;
	sub_824091A0(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// lwzx r5,r28,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// bl 0x825b7c80
	ctx.lr = 0x825B6A8C;
	sub_825B7C80(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825b6aa4
	if (ctx.cr6.eq) goto loc_825B6AA4;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x825b6ac8
	if (!ctx.cr6.eq) goto loc_825B6AC8;
loc_825B6AA4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B6ABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r27,r3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x825b69f8
	if (ctx.cr6.lt) goto loc_825B69F8;
	// b 0x825b7180
	goto loc_825B7180;
loc_825B6AC8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82965358
	ctx.lr = 0x825B6AD4;
	sub_82965358(ctx, base);
	// b 0x825b7180
	goto loc_825B7180;
loc_825B6AD8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B6AEC;
	sub_829E68F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B6B04;
	sub_829E68F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B6B1C;
	sub_829E68F0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmuls f13,f27,f30
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stfs f13,336(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f0,340(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// bl 0x829e68f0
	ctx.lr = 0x825B6B44;
	sub_829E68F0(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// stfs f0,344(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// stfs f29,348(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r4,23940
	ctx.r4.s64 = 1568931840;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// ori r4,r4,63430
	ctx.r4.u64 = ctx.r4.u64 | 63430;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// bl 0x82965458
	ctx.lr = 0x825B6B90;
	sub_82965458(ctx, base);
	// lis r4,-28954
	ctx.r4.s64 = -1897529344;
	// ori r4,r4,23314
	ctx.r4.u64 = ctx.r4.u64 | 23314;
	// b 0x825b7170
	goto loc_825B7170;
loc_825B6B9C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B6BB0;
	sub_829E68F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B6BC8;
	sub_829E68F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B6BE0;
	sub_829E68F0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmuls f13,f27,f30
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,216(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// stfs f13,400(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f0,404(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// bl 0x829e68f0
	ctx.lr = 0x825B6C08;
	sub_829E68F0(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// stfs f0,408(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// addi r11,r1,400
	ctx.r11.s64 = ctx.r1.s64 + 400;
	// stfs f29,412(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 412, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r4,4210
	ctx.r4.s64 = 275906560;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// ori r4,r4,28873
	ctx.r4.u64 = ctx.r4.u64 | 28873;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x82965458
	ctx.lr = 0x825B6C54;
	sub_82965458(ctx, base);
	// lis r4,-30261
	ctx.r4.s64 = -1983184896;
	// ori r4,r4,1249
	ctx.r4.u64 = ctx.r4.u64 | 1249;
	// b 0x825b7170
	goto loc_825B7170;
loc_825B6C60:
	// lis r10,7063
	ctx.r10.s64 = 462880768;
	// ori r10,r10,12495
	ctx.r10.u64 = ctx.r10.u64 | 12495;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825b70b0
	if (ctx.cr6.eq) goto loc_825B70B0;
	// lis r10,14579
	ctx.r10.s64 = 955449344;
	// ori r10,r10,36091
	ctx.r10.u64 = ctx.r10.u64 | 36091;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825b6fc0
	if (ctx.cr6.eq) goto loc_825B6FC0;
	// lis r10,19991
	ctx.r10.s64 = 1310130176;
	// ori r10,r10,25805
	ctx.r10.u64 = ctx.r10.u64 | 25805;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825b6efc
	if (ctx.cr6.eq) goto loc_825B6EFC;
	// lis r10,24408
	ctx.r10.s64 = 1599602688;
	// ori r10,r10,24803
	ctx.r10.u64 = ctx.r10.u64 | 24803;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825b6e38
	if (ctx.cr6.eq) goto loc_825B6E38;
	// lis r10,31452
	ctx.r10.s64 = 2061238272;
	// ori r10,r10,37093
	ctx.r10.u64 = ctx.r10.u64 | 37093;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825b6d74
	if (ctx.cr6.eq) goto loc_825B6D74;
loc_825B6CB0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B6CC4;
	sub_829E68F0(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B6CDC;
	sub_829E68F0(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B6CF4;
	sub_829E68F0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// fmuls f13,f27,f30
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stfs f13,288(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f0,292(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// bl 0x829e68f0
	ctx.lr = 0x825B6D1C;
	sub_829E68F0(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// stfs f0,296(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// stfs f29,300(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r4,25244
	ctx.r4.s64 = 1654390784;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// ori r4,r4,32588
	ctx.r4.u64 = ctx.r4.u64 | 32588;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x82965458
	ctx.lr = 0x825B6D68;
	sub_82965458(ctx, base);
	// lis r4,13955
	ctx.r4.s64 = 914554880;
	// ori r4,r4,42410
	ctx.r4.u64 = ctx.r4.u64 | 42410;
	// b 0x825b7170
	goto loc_825B7170;
loc_825B6D74:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B6D88;
	sub_829E68F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B6DA0;
	sub_829E68F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B6DB8;
	sub_829E68F0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmuls f13,f27,f30
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stfs f13,320(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f0,324(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// bl 0x829e68f0
	ctx.lr = 0x825B6DE0;
	sub_829E68F0(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// stfs f0,328(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// stfs f29,332(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r4,-6676
	ctx.r4.s64 = -437518336;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// ori r4,r4,11125
	ctx.r4.u64 = ctx.r4.u64 | 11125;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x82965458
	ctx.lr = 0x825B6E2C;
	sub_82965458(ctx, base);
	// lis r4,11407
	ctx.r4.s64 = 747569152;
	// ori r4,r4,58782
	ctx.r4.u64 = ctx.r4.u64 | 58782;
	// b 0x825b7170
	goto loc_825B7170;
loc_825B6E38:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B6E4C;
	sub_829E68F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B6E64;
	sub_829E68F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// lwz r4,188(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B6E7C;
	sub_829E68F0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmuls f13,f27,f30
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stfs f13,352(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f0,356(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// bl 0x829e68f0
	ctx.lr = 0x825B6EA4;
	sub_829E68F0(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// stfs f0,360(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// stfs f29,364(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r4,-14482
	ctx.r4.s64 = -949092352;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// ori r4,r4,36569
	ctx.r4.u64 = ctx.r4.u64 | 36569;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x82965458
	ctx.lr = 0x825B6EF0;
	sub_82965458(ctx, base);
	// lis r4,19031
	ctx.r4.s64 = 1247215616;
	// ori r4,r4,32262
	ctx.r4.u64 = ctx.r4.u64 | 32262;
	// b 0x825b7170
	goto loc_825B7170;
loc_825B6EFC:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e68f0
	ctx.lr = 0x825B6F10;
	sub_829E68F0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B6F28;
	sub_829E68F0(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B6F40;
	sub_829E68F0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// fmuls f13,f27,f30
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stfs f13,384(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f0,388(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// bl 0x829e68f0
	ctx.lr = 0x825B6F68;
	sub_829E68F0(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// stfs f0,392(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// stfs f29,396(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r4,21888
	ctx.r4.s64 = 1434451968;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// ori r4,r4,50042
	ctx.r4.u64 = ctx.r4.u64 | 50042;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x82965458
	ctx.lr = 0x825B6FB4;
	sub_82965458(ctx, base);
	// lis r4,18250
	ctx.r4.s64 = 1196032000;
	// ori r4,r4,9256
	ctx.r4.u64 = ctx.r4.u64 | 9256;
	// b 0x825b7170
	goto loc_825B7170;
loc_825B6FC0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B6FD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x825b7180
	if (!ctx.cr0.gt) goto loc_825B7180;
loc_825B6FE0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B6FF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// lwz r4,204(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// bl 0x82a4d040
	ctx.lr = 0x825B7004;
	sub_82A4D040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825b708c
	if (ctx.cr0.eq) goto loc_825B708C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82825ab8
	ctx.lr = 0x825B7024;
	sub_82825AB8(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x825b7030
	if (ctx.cr6.lt) goto loc_825B7030;
	// li r3,3
	ctx.r3.s64 = 3;
loc_825B7030:
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// lwzx r5,r28,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// bl 0x824091a0
	ctx.lr = 0x825B7054;
	sub_824091A0(ctx, base);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// lwzx r5,r28,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// bl 0x825b7c80
	ctx.lr = 0x825B7074;
	sub_825B7C80(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825b708c
	if (ctx.cr6.eq) goto loc_825B708C;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x825b6ac8
	if (!ctx.cr6.eq) goto loc_825B6AC8;
loc_825B708C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B70A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r27,r3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x825b6fe0
	if (ctx.cr6.lt) goto loc_825B6FE0;
	// b 0x825b7180
	goto loc_825B7180;
loc_825B70B0:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e68f0
	ctx.lr = 0x825B70C4;
	sub_829E68F0(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B70DC;
	sub_829E68F0(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B70F4;
	sub_829E68F0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// fmuls f13,f27,f30
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stfs f13,416(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f0,420(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// bl 0x829e68f0
	ctx.lr = 0x825B711C;
	sub_829E68F0(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// stfs f0,424(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// addi r11,r1,416
	ctx.r11.s64 = ctx.r1.s64 + 416;
	// stfs f29,428(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 428, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r4,-7389
	ctx.r4.s64 = -484245504;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// ori r4,r4,18309
	ctx.r4.u64 = ctx.r4.u64 | 18309;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x82965458
	ctx.lr = 0x825B7168;
	sub_82965458(ctx, base);
	// lis r4,-19334
	ctx.r4.s64 = -1267073024;
	// ori r4,r4,15390
	ctx.r4.u64 = ctx.r4.u64 | 15390;
loc_825B7170:
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829653c8
	ctx.lr = 0x825B7180;
	sub_829653C8(ctx, base);
loc_825B7180:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// b 0x825b65fc
	goto loc_825B65FC;
loc_825B7190:
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82a61790
	ctx.lr = 0x825B719C;
	__restfpr_27(ctx, base);
	// b 0x82a4ea20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B71A0"))) PPC_WEAK_FUNC(sub_825B71A0);
PPC_FUNC_IMPL(__imp__sub_825B71A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d0
	ctx.lr = 0x825B71A8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82a61744
	ctx.lr = 0x825B71B0;
	__savefpr_27(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31943
	ctx.r31.s64 = -2093416448;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,12484
	ctx.r30.s64 = ctx.r11.s64 + 12484;
	// stw r29,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r29.u32);
	// lwz r11,-17676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17676);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825b7214
	if (!ctx.cr0.eq) goto loc_825B7214;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r11,-17676(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17676, ctx.r11.u32);
	// addi r3,r10,25924
	ctx.r3.s64 = ctx.r10.s64 + 25924;
	// bl 0x82816528
	ctx.lr = 0x825B71EC;
	sub_82816528(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,25900
	ctx.r3.s64 = ctx.r11.s64 + 25900;
	// bl 0x82816528
	ctx.lr = 0x825B71FC;
	sub_82816528(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,25876
	ctx.r3.s64 = ctx.r11.s64 + 25876;
	// bl 0x82816528
	ctx.lr = 0x825B720C;
	sub_82816528(ctx, base);
	// lwz r11,-17676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17676);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
loc_825B7214:
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r30,r10,12496
	ctx.r30.s64 = ctx.r10.s64 + 12496;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// bne 0x825b7264
	if (!ctx.cr0.eq) goto loc_825B7264;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r11,-17676(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17676, ctx.r11.u32);
	// addi r3,r10,25996
	ctx.r3.s64 = ctx.r10.s64 + 25996;
	// bl 0x82816528
	ctx.lr = 0x825B723C;
	sub_82816528(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,25972
	ctx.r3.s64 = ctx.r11.s64 + 25972;
	// bl 0x82816528
	ctx.lr = 0x825B724C;
	sub_82816528(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,25948
	ctx.r3.s64 = ctx.r11.s64 + 25948;
	// bl 0x82816528
	ctx.lr = 0x825B725C;
	sub_82816528(ctx, base);
	// lwz r11,-17676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17676);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
loc_825B7264:
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// rlwinm. r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r30,r10,12508
	ctx.r30.s64 = ctx.r10.s64 + 12508;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// bne 0x825b72b0
	if (!ctx.cr0.eq) goto loc_825B72B0;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r11,-17676(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17676, ctx.r11.u32);
	// addi r3,r10,26068
	ctx.r3.s64 = ctx.r10.s64 + 26068;
	// bl 0x82816528
	ctx.lr = 0x825B728C;
	sub_82816528(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,26044
	ctx.r3.s64 = ctx.r11.s64 + 26044;
	// bl 0x82816528
	ctx.lr = 0x825B729C;
	sub_82816528(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,26020
	ctx.r3.s64 = ctx.r11.s64 + 26020;
	// bl 0x82816528
	ctx.lr = 0x825B72AC;
	sub_82816528(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
loc_825B72B0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,24620
	ctx.r3.s64 = ctx.r11.s64 + 24620;
	// bl 0x829e6d68
	ctx.lr = 0x825B72BC;
	sub_829E6D68(ctx, base);
	// mr. r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq 0x825b7bd8
	if (ctx.cr0.eq) goto loc_825B7BD8;
	// lwz r31,76(r16)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r16.u32 + 76);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// bl 0x82825ab8
	ctx.lr = 0x825B72D4;
	sub_82825AB8(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// cmpw cr6,r17,r31
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x825b72e4
	if (!ctx.cr6.gt) goto loc_825B72E4;
	// mr r17,r31
	ctx.r17.u64 = ctx.r31.u64;
loc_825B72E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// addi r11,r11,26516
	ctx.r11.s64 = ctx.r11.s64 + 26516;
	// lfs f30,24252(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24252);
	ctx.f30.f64 = double(temp.f32);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lfs f29,908(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 908);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,904(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// addi r10,r10,26496
	ctx.r10.s64 = ctx.r10.s64 + 26496;
	// addi r9,r9,26476
	ctx.r9.s64 = ctx.r9.s64 + 26476;
	// addi r11,r8,26452
	ctx.r11.s64 = ctx.r8.s64 + 26452;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r30,-32227
	ctx.r30.s64 = -2112028672;
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// lis r29,-32227
	ctx.r29.s64 = -2112028672;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// addi r30,r30,26308
	ctx.r30.s64 = ctx.r30.s64 + 26308;
	// addi r29,r29,26284
	ctx.r29.s64 = ctx.r29.s64 + 26284;
	// addi r10,r7,26432
	ctx.r10.s64 = ctx.r7.s64 + 26432;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// addi r9,r6,26412
	ctx.r9.s64 = ctx.r6.s64 + 26412;
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// addi r11,r5,26392
	ctx.r11.s64 = ctx.r5.s64 + 26392;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// lis r4,-32227
	ctx.r4.s64 = -2112028672;
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// lis r3,-32227
	ctx.r3.s64 = -2112028672;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lis r31,-32227
	ctx.r31.s64 = -2112028672;
	// lis r27,-32227
	ctx.r27.s64 = -2112028672;
	// lis r26,-32227
	ctx.r26.s64 = -2112028672;
	// lis r28,-32227
	ctx.r28.s64 = -2112028672;
	// lis r25,-32227
	ctx.r25.s64 = -2112028672;
	// lis r24,-32227
	ctx.r24.s64 = -2112028672;
	// lis r23,-32227
	ctx.r23.s64 = -2112028672;
	// lis r22,-32227
	ctx.r22.s64 = -2112028672;
	// lis r21,-32227
	ctx.r21.s64 = -2112028672;
	// lis r20,-32227
	ctx.r20.s64 = -2112028672;
	// lis r19,-32227
	ctx.r19.s64 = -2112028672;
	// lis r18,-32227
	ctx.r18.s64 = -2112028672;
	// addi r10,r4,26368
	ctx.r10.s64 = ctx.r4.s64 + 26368;
	// addi r9,r3,26348
	ctx.r9.s64 = ctx.r3.s64 + 26348;
	// addi r11,r31,26328
	ctx.r11.s64 = ctx.r31.s64 + 26328;
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// addi r30,r27,26236
	ctx.r30.s64 = ctx.r27.s64 + 26236;
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// addi r29,r26,26212
	ctx.r29.s64 = ctx.r26.s64 + 26212;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// li r14,-1
	ctx.r14.s64 = -1;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// lis r15,-31949
	ctx.r15.s64 = -2093809664;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// addi r28,r28,26260
	ctx.r28.s64 = ctx.r28.s64 + 26260;
	// addi r25,r25,26188
	ctx.r25.s64 = ctx.r25.s64 + 26188;
	// addi r24,r24,26164
	ctx.r24.s64 = ctx.r24.s64 + 26164;
	// addi r23,r23,26140
	ctx.r23.s64 = ctx.r23.s64 + 26140;
	// addi r22,r22,26116
	ctx.r22.s64 = ctx.r22.s64 + 26116;
	// addi r21,r21,26092
	ctx.r21.s64 = ctx.r21.s64 + 26092;
	// addi r20,r20,24912
	ctx.r20.s64 = ctx.r20.s64 + 24912;
	// addi r19,r19,24904
	ctx.r19.s64 = ctx.r19.s64 + 24904;
	// addi r18,r18,24896
	ctx.r18.s64 = ctx.r18.s64 + 24896;
loc_825B7400:
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825b7bd8
	if (!ctx.cr6.lt) goto loc_825B7BD8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824112d0
	ctx.lr = 0x825B741C;
	sub_824112D0(ctx, base);
	// bl 0x82411cb0
	ctx.lr = 0x825B7420;
	sub_82411CB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825b7bc0
	if (ctx.cr0.eq) goto loc_825B7BC0;
	// lis r10,14862
	ctx.r10.s64 = 973996032;
	// lwz r11,472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// ori r10,r10,22266
	ctx.r10.u64 = ctx.r10.u64 | 22266;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x825b7818
	if (ctx.cr6.gt) goto loc_825B7818;
	// beq cr6,0x825b7754
	if (ctx.cr6.eq) goto loc_825B7754;
	// lis r10,-27986
	ctx.r10.s64 = -1834090496;
	// ori r10,r10,51858
	ctx.r10.u64 = ctx.r10.u64 | 51858;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825b76c0
	if (ctx.cr6.eq) goto loc_825B76C0;
	// lis r10,-26177
	ctx.r10.s64 = -1715535872;
	// ori r10,r10,9166
	ctx.r10.u64 = ctx.r10.u64 | 9166;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825b75c4
	if (ctx.cr6.eq) goto loc_825B75C4;
	// lis r10,2830
	ctx.r10.s64 = 185466880;
	// ori r10,r10,10156
	ctx.r10.u64 = ctx.r10.u64 | 10156;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825b7544
	if (ctx.cr6.eq) goto loc_825B7544;
	// lis r10,13908
	ctx.r10.s64 = 911474688;
	// ori r10,r10,18758
	ctx.r10.u64 = ctx.r10.u64 | 18758;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825b7bc0
	if (!ctx.cr6.eq) goto loc_825B7BC0;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B7494;
	sub_829E68F0(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B74AC;
	sub_829E68F0(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B74C4;
	sub_829E68F0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// fmuls f13,f27,f30
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stfs f13,192(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// bl 0x829e68f0
	ctx.lr = 0x825B74EC;
	sub_829E68F0(ctx, base);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f29,204(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r4,-17880
	ctx.r4.s64 = -1171783680;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r4,r4,29511
	ctx.r4.u64 = ctx.r4.u64 | 29511;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// bl 0x82965458
	ctx.lr = 0x825B7538;
	sub_82965458(ctx, base);
	// lis r4,15255
	ctx.r4.s64 = 999751680;
	// ori r4,r4,32934
	ctx.r4.u64 = ctx.r4.u64 | 32934;
	// b 0x825b7ae0
	goto loc_825B7AE0;
loc_825B7544:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x829e68f0
	ctx.lr = 0x825B7558;
	sub_829E68F0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B7570;
	sub_829E68F0(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B7588;
	sub_829E68F0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// fmuls f13,f27,f30
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// stfs f13,224(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f0,228(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// bl 0x829e68f0
	ctx.lr = 0x825B75B0;
	sub_829E68F0(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// stfs f29,236(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stfs f0,232(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// b 0x825b7a9c
	goto loc_825B7A9C;
loc_825B75C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B75E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x825b7bc0
	if (!ctx.cr0.gt) goto loc_825B7BC0;
loc_825B75E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B7600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// bl 0x82a4d040
	ctx.lr = 0x825B760C;
	sub_82A4D040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825b768c
	if (ctx.cr0.eq) goto loc_825B768C;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// bl 0x82825ab8
	ctx.lr = 0x825B7628;
	sub_82825AB8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x825b7634
	if (ctx.cr6.lt) goto loc_825B7634;
	// li r3,2
	ctx.r3.s64 = 2;
loc_825B7634:
	// lwz r27,132(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r30,r3,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,13024(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 13024);
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// lwzx r5,r30,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// bl 0x824091a0
	ctx.lr = 0x825B7658;
	sub_824091A0(ctx, base);
	// lwz r11,13024(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 13024);
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// lwzx r5,r30,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x825b7c80
	ctx.lr = 0x825B7674;
	sub_825B7C80(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825b768c
	if (ctx.cr6.eq) goto loc_825B768C;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x825b76b0
	if (!ctx.cr6.eq) goto loc_825B76B0;
loc_825B768C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B76A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x825b75e8
	if (ctx.cr6.lt) goto loc_825B75E8;
	// b 0x825b7bc0
	goto loc_825B7BC0;
loc_825B76B0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82965358
	ctx.lr = 0x825B76BC;
	sub_82965358(ctx, base);
	// b 0x825b7bc0
	goto loc_825B7BC0;
loc_825B76C0:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x829e68f0
	ctx.lr = 0x825B76D4;
	sub_829E68F0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B76EC;
	sub_829E68F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B7704;
	sub_829E68F0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmuls f13,f27,f30
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// stfs f13,256(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f0,260(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// bl 0x829e68f0
	ctx.lr = 0x825B772C;
	sub_829E68F0(ctx, base);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// stfs f0,264(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f29,268(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// b 0x825b7ab0
	goto loc_825B7AB0;
loc_825B7754:
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B7768;
	sub_829E68F0(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B7780;
	sub_829E68F0(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B7798;
	sub_829E68F0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// fmuls f13,f27,f30
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stfs f13,208(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// bl 0x829e68f0
	ctx.lr = 0x825B77C0;
	sub_829E68F0(ctx, base);
	// stfs f29,220(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// fmuls f0,f1,f30
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r4,-3013
	ctx.r4.s64 = -197459968;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// ori r4,r4,37436
	ctx.r4.u64 = ctx.r4.u64 | 37436;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// bl 0x82965458
	ctx.lr = 0x825B780C;
	sub_82965458(ctx, base);
	// lis r4,14939
	ctx.r4.s64 = 979042304;
	// ori r4,r4,20943
	ctx.r4.u64 = ctx.r4.u64 | 20943;
	// b 0x825b7bb0
	goto loc_825B7BB0;
loc_825B7818:
	// lis r10,14977
	ctx.r10.s64 = 981532672;
	// ori r10,r10,10091
	ctx.r10.u64 = ctx.r10.u64 | 10091;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825b7a20
	if (ctx.cr6.eq) goto loc_825B7A20;
	// lis r10,27648
	ctx.r10.s64 = 1811939328;
	// ori r10,r10,15791
	ctx.r10.u64 = ctx.r10.u64 | 15791;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825b7934
	if (ctx.cr6.eq) goto loc_825B7934;
	// lis r10,29414
	ctx.r10.s64 = 1927675904;
	// ori r10,r10,45931
	ctx.r10.u64 = ctx.r10.u64 | 45931;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825b7bc0
	if (!ctx.cr6.eq) goto loc_825B7BC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B7860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x825b7bc0
	if (!ctx.cr0.gt) goto loc_825B7BC0;
loc_825B7868:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B7880;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// bl 0x82a4d040
	ctx.lr = 0x825B788C;
	sub_82A4D040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825b7910
	if (ctx.cr0.eq) goto loc_825B7910;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82825ab8
	ctx.lr = 0x825B78AC;
	sub_82825AB8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x825b78b8
	if (ctx.cr6.lt) goto loc_825B78B8;
	// li r3,2
	ctx.r3.s64 = 2;
loc_825B78B8:
	// lwz r27,168(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// rlwinm r30,r3,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,13024(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 13024);
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// lwzx r5,r30,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// bl 0x824091a0
	ctx.lr = 0x825B78DC;
	sub_824091A0(ctx, base);
	// lwz r11,13024(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 13024);
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// lwzx r5,r30,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x825b7c80
	ctx.lr = 0x825B78F8;
	sub_825B7C80(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825b7910
	if (ctx.cr6.eq) goto loc_825B7910;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x825b76b0
	if (!ctx.cr6.eq) goto loc_825B76B0;
loc_825B7910:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B7928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x825b7868
	if (ctx.cr6.lt) goto loc_825B7868;
	// b 0x825b7bc0
	goto loc_825B7BC0;
loc_825B7934:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B794C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x825b7bc0
	if (!ctx.cr0.gt) goto loc_825B7BC0;
loc_825B7954:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B796C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// bl 0x82a4d040
	ctx.lr = 0x825B7978;
	sub_82A4D040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825b79fc
	if (ctx.cr0.eq) goto loc_825B79FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82825ab8
	ctx.lr = 0x825B7998;
	sub_82825AB8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x825b79a4
	if (ctx.cr6.lt) goto loc_825B79A4;
	// li r3,2
	ctx.r3.s64 = 2;
loc_825B79A4:
	// lwz r27,156(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// rlwinm r30,r3,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,13024(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 13024);
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// lwzx r5,r30,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// bl 0x824091a0
	ctx.lr = 0x825B79C8;
	sub_824091A0(ctx, base);
	// lwz r11,13024(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 13024);
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// lwzx r5,r30,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x825b7c80
	ctx.lr = 0x825B79E4;
	sub_825B7C80(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825b79fc
	if (ctx.cr6.eq) goto loc_825B79FC;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x825b76b0
	if (!ctx.cr6.eq) goto loc_825B76B0;
loc_825B79FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B7A14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x825b7954
	if (ctx.cr6.lt) goto loc_825B7954;
	// b 0x825b7bc0
	goto loc_825B7BC0;
loc_825B7A20:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x829e68f0
	ctx.lr = 0x825B7A34;
	sub_829E68F0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B7A4C;
	sub_829E68F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B7A64;
	sub_829E68F0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmuls f13,f27,f30
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// stfs f13,240(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f0,244(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// bl 0x829e68f0
	ctx.lr = 0x825B7A8C;
	sub_829E68F0(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// stfs f0,248(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// stfs f29,252(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
loc_825B7A9C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_825B7AB0:
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r4,26404
	ctx.r4.s64 = 1730412544;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r6,-1
	ctx.r6.s64 = -1;
	// ori r4,r4,44453
	ctx.r4.u64 = ctx.r4.u64 | 44453;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x82965458
	ctx.lr = 0x825B7AD8;
	sub_82965458(ctx, base);
	// lis r4,-7195
	ctx.r4.s64 = -471531520;
	// ori r4,r4,52900
	ctx.r4.u64 = ctx.r4.u64 | 52900;
loc_825B7AE0:
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829653c8
	ctx.lr = 0x825B7AF0;
	sub_829653C8(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B7B04;
	sub_829E68F0(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B7B1C;
	sub_829E68F0(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e68f0
	ctx.lr = 0x825B7B34;
	sub_829E68F0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// fmuls f13,f27,f30
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stfs f13,272(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f0,276(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// bl 0x829e68f0
	ctx.lr = 0x825B7B5C;
	sub_829E68F0(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// stfs f0,280(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// stfs f29,284(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r4,15707
	ctx.r4.s64 = 1029373952;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// ori r4,r4,19335
	ctx.r4.u64 = ctx.r4.u64 | 19335;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x82965458
	ctx.lr = 0x825B7BA8;
	sub_82965458(ctx, base);
	// lis r4,20270
	ctx.r4.s64 = 1328414720;
	// ori r4,r4,34852
	ctx.r4.u64 = ctx.r4.u64 | 34852;
loc_825B7BB0:
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829653c8
	ctx.lr = 0x825B7BC0;
	sub_829653C8(ctx, base);
loc_825B7BC0:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r30,136(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r29,144(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// b 0x825b7400
	goto loc_825B7400;
loc_825B7BD8:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82a61790
	ctx.lr = 0x825B7BE4;
	__restfpr_27(ctx, base);
	// b 0x82a4ea20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B7BE8"))) PPC_WEAK_FUNC(sub_825B7BE8);
PPC_FUNC_IMPL(__imp__sub_825B7BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x825B7BF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b7c50
	if (ctx.cr6.eq) goto loc_825B7C50;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B7C24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825b7c50
	if (ctx.cr0.eq) goto loc_825B7C50;
	// bl 0x823a8540
	ctx.lr = 0x825B7C30;
	sub_823A8540(ctx, base);
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
	ctx.lr = 0x825B7C48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825b7c54
	if (!ctx.cr0.eq) goto loc_825B7C54;
loc_825B7C50:
	// li r31,0
	ctx.r31.s64 = 0;
loc_825B7C54:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825b7c64
	if (ctx.cr6.eq) goto loc_825B7C64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825b7c78
	goto loc_825B7C78;
loc_825B7C64:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8289cad0
	ctx.lr = 0x825B7C78;
	sub_8289CAD0(ctx, base);
loc_825B7C78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B7C80"))) PPC_WEAK_FUNC(sub_825B7C80);
PPC_FUNC_IMPL(__imp__sub_825B7C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x825B7C88;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r26,0(r13)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r27,r10,24
	ctx.r27.s64 = ctx.r10.s64 + 24;
	// addi r24,r11,-15412
	ctx.r24.s64 = ctx.r11.s64 + -15412;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwzx r11,r27,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825b7cc8
	if (!ctx.cr0.eq) goto loc_825B7CC8;
	// addi r3,r24,4
	ctx.r3.s64 = ctx.r24.s64 + 4;
	// bl 0x8312e74c
	ctx.lr = 0x825B7CC8;
	sub_8312E74C(ctx, base);
loc_825B7CC8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825b7d38
	ctx.lr = 0x825B7CD4;
	sub_825B7D38(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828552a0
	ctx.lr = 0x825B7CEC;
	sub_828552A0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825b7d0c
	if (ctx.cr0.eq) goto loc_825B7D0C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// ble cr6,0x825b7d08
	if (!ctx.cr6.gt) goto loc_825B7D08;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_825B7D08:
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_825B7D0C:
	// lwzx r11,r27,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825b7d20
	if (!ctx.cr0.eq) goto loc_825B7D20;
	// addi r3,r24,4
	ctx.r3.s64 = ctx.r24.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x825B7D20;
	sub_8312E73C(ctx, base);
loc_825B7D20:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B7D38"))) PPC_WEAK_FUNC(sub_825B7D38);
PPC_FUNC_IMPL(__imp__sub_825B7D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825B7D40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31944
	ctx.r31.s64 = -2093481984;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r29,-31944
	ctx.r29.s64 = -2093481984;
	// lwz r11,12424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12424);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825b7da8
	if (!ctx.cr0.eq) goto loc_825B7DA8;
	// lis r30,-31944
	ctx.r30.s64 = -2093481984;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,12424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12424, ctx.r11.u32);
	// lwz r3,12520(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12520);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825b7da0
	if (!ctx.cr6.eq) goto loc_825B7DA0;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-28660
	ctx.r3.s64 = ctx.r10.s64 + -28660;
	// bl 0x82a4c7d8
	ctx.lr = 0x825B7D88;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x825B7D90;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x825B7D98;
	sub_82816528(ctx, base);
	// lwz r11,12424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12424);
	// stw r3,12520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12520, ctx.r3.u32);
loc_825B7DA0:
	// stw r3,12428(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12428, ctx.r3.u32);
	// b 0x825b7dac
	goto loc_825B7DAC;
loc_825B7DA8:
	// lwz r3,12428(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12428);
loc_825B7DAC:
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r9,r10,12432
	ctx.r9.s64 = ctx.r10.s64 + 12432;
	// bne 0x825b7dd0
	if (!ctx.cr0.eq) goto loc_825B7DD0;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// addi r10,r10,14428
	ctx.r10.s64 = ctx.r10.s64 + 14428;
	// stw r11,12424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12424, ctx.r11.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_825B7DD0:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B7DF0"))) PPC_WEAK_FUNC(sub_825B7DF0);
PPC_FUNC_IMPL(__imp__sub_825B7DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-19172
	ctx.r3.s64 = ctx.r11.s64 + -19172;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B7E00"))) PPC_WEAK_FUNC(sub_825B7E00);
PPC_FUNC_IMPL(__imp__sub_825B7E00) {
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
	// beq cr6,0x825b7e38
	if (ctx.cr6.eq) goto loc_825B7E38;
	// bl 0x823a86e8
	ctx.lr = 0x825B7E28;
	sub_823A86E8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825b7e38
	if (!ctx.cr6.eq) goto loc_825B7E38;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825b7e44
	goto loc_825B7E44;
loc_825B7E38:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b3470
	ctx.lr = 0x825B7E44;
	sub_825B3470(ctx, base);
loc_825B7E44:
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

__attribute__((alias("__imp__sub_825B7E60"))) PPC_WEAK_FUNC(sub_825B7E60);
PPC_FUNC_IMPL(__imp__sub_825B7E60) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a86e8
	sub_823A86E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B7E68"))) PPC_WEAK_FUNC(sub_825B7E68);
PPC_FUNC_IMPL(__imp__sub_825B7E68) {
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
	// li r3,6128
	ctx.r3.s64 = 6128;
	// bl 0x82833108
	ctx.lr = 0x825B7E88;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825b7ec8
	if (ctx.cr0.eq) goto loc_825B7EC8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b3568
	ctx.lr = 0x825B7E9C;
	sub_825B3568(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r11,r11,26696
	ctx.r11.s64 = ctx.r11.s64 + 26696;
	// addi r10,r10,29056
	ctx.r10.s64 = ctx.r10.s64 + 29056;
	// addi r9,r9,-6552
	ctx.r9.s64 = ctx.r9.s64 + -6552;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x825b7ecc
	goto loc_825B7ECC;
loc_825B7EC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B7ECC:
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

__attribute__((alias("__imp__sub_825B7EE8"))) PPC_WEAK_FUNC(sub_825B7EE8);
PPC_FUNC_IMPL(__imp__sub_825B7EE8) {
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
	// bl 0x823a86e8
	ctx.lr = 0x825B7F08;
	sub_823A86E8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825b7f18
	if (!ctx.cr6.eq) goto loc_825B7F18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x825b7f30
	goto loc_825B7F30;
loc_825B7F18:
	// bl 0x823a8540
	ctx.lr = 0x825B7F1C;
	sub_823A8540(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825b7f30
	if (ctx.cr6.eq) goto loc_825B7F30;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82404040
	ctx.lr = 0x825B7F30;
	sub_82404040(ctx, base);
loc_825B7F30:
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

__attribute__((alias("__imp__sub_825B7F48"))) PPC_WEAK_FUNC(sub_825B7F48);
PPC_FUNC_IMPL(__imp__sub_825B7F48) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r11,26536
	ctx.r3.s64 = ctx.r11.s64 + 26536;
	// bl 0x82816528
	ctx.lr = 0x825B7F68;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x825B7F78;
	sub_82410060(ctx, base);
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

__attribute__((alias("__imp__sub_825B7F90"))) PPC_WEAK_FUNC(sub_825B7F90);
PPC_FUNC_IMPL(__imp__sub_825B7F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B7FA0"))) PPC_WEAK_FUNC(sub_825B7FA0);
PPC_FUNC_IMPL(__imp__sub_825B7FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B7FB0"))) PPC_WEAK_FUNC(sub_825B7FB0);
PPC_FUNC_IMPL(__imp__sub_825B7FB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825b7ee8
	sub_825B7EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B7FB8"))) PPC_WEAK_FUNC(sub_825B7FB8);
PPC_FUNC_IMPL(__imp__sub_825B7FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18956
	ctx.r3.s64 = ctx.r11.s64 + -18956;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B7FC8"))) PPC_WEAK_FUNC(sub_825B7FC8);
PPC_FUNC_IMPL(__imp__sub_825B7FC8) {
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
	// beq cr6,0x825b8000
	if (ctx.cr6.eq) goto loc_825B8000;
	// bl 0x823a9428
	ctx.lr = 0x825B7FF0;
	sub_823A9428(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825b8000
	if (!ctx.cr6.eq) goto loc_825B8000;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825b800c
	goto loc_825B800C;
loc_825B8000:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b3600
	ctx.lr = 0x825B800C;
	sub_825B3600(ctx, base);
loc_825B800C:
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

__attribute__((alias("__imp__sub_825B8028"))) PPC_WEAK_FUNC(sub_825B8028);
PPC_FUNC_IMPL(__imp__sub_825B8028) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a9428
	sub_823A9428(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B8030"))) PPC_WEAK_FUNC(sub_825B8030);
PPC_FUNC_IMPL(__imp__sub_825B8030) {
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
	// li r3,6176
	ctx.r3.s64 = 6176;
	// bl 0x82833108
	ctx.lr = 0x825B8050;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825b8090
	if (ctx.cr0.eq) goto loc_825B8090;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b3710
	ctx.lr = 0x825B8064;
	sub_825B3710(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r11,r11,29248
	ctx.r11.s64 = ctx.r11.s64 + 29248;
	// addi r10,r10,31608
	ctx.r10.s64 = ctx.r10.s64 + 31608;
	// addi r9,r9,-24212
	ctx.r9.s64 = ctx.r9.s64 + -24212;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x825b8094
	goto loc_825B8094;
loc_825B8090:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B8094:
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

__attribute__((alias("__imp__sub_825B80B0"))) PPC_WEAK_FUNC(sub_825B80B0);
PPC_FUNC_IMPL(__imp__sub_825B80B0) {
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
	// bl 0x823a9428
	ctx.lr = 0x825B80D0;
	sub_823A9428(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825b80e4
	if (ctx.cr6.eq) goto loc_825B80E4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825b36b0
	ctx.lr = 0x825B80E4;
	sub_825B36B0(ctx, base);
loc_825B80E4:
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

__attribute__((alias("__imp__sub_825B8100"))) PPC_WEAK_FUNC(sub_825B8100);
PPC_FUNC_IMPL(__imp__sub_825B8100) {
	PPC_FUNC_PROLOGUE();
	// lis r3,31623
	ctx.r3.s64 = 2072444928;
	// ori r3,r3,26105
	ctx.r3.u64 = ctx.r3.u64 | 26105;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B8110"))) PPC_WEAK_FUNC(sub_825B8110);
PPC_FUNC_IMPL(__imp__sub_825B8110) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-2924
	ctx.r3.s64 = -191627264;
	// ori r3,r3,44269
	ctx.r3.u64 = ctx.r3.u64 | 44269;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B8120"))) PPC_WEAK_FUNC(sub_825B8120);
PPC_FUNC_IMPL(__imp__sub_825B8120) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r11,29156
	ctx.r3.s64 = ctx.r11.s64 + 29156;
	// bl 0x82816528
	ctx.lr = 0x825B8140;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825B8150;
	sub_82410060(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,29200
	ctx.r3.s64 = ctx.r11.s64 + 29200;
	// bl 0x82816528
	ctx.lr = 0x825B815C;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x825B816C;
	sub_82410060(ctx, base);
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

__attribute__((alias("__imp__sub_825B8180"))) PPC_WEAK_FUNC(sub_825B8180);
PPC_FUNC_IMPL(__imp__sub_825B8180) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825b80b0
	sub_825B80B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B8188"))) PPC_WEAK_FUNC(sub_825B8188);
PPC_FUNC_IMPL(__imp__sub_825B8188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18932
	ctx.r3.s64 = ctx.r11.s64 + -18932;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B8198"))) PPC_WEAK_FUNC(sub_825B8198);
PPC_FUNC_IMPL(__imp__sub_825B8198) {
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
	// beq cr6,0x825b81d0
	if (ctx.cr6.eq) goto loc_825B81D0;
	// bl 0x823a95e0
	ctx.lr = 0x825B81C0;
	sub_823A95E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825b81d0
	if (!ctx.cr6.eq) goto loc_825B81D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825b81dc
	goto loc_825B81DC;
loc_825B81D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825b3600
	ctx.lr = 0x825B81DC;
	sub_825B3600(ctx, base);
loc_825B81DC:
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

__attribute__((alias("__imp__sub_825B81F8"))) PPC_WEAK_FUNC(sub_825B81F8);
PPC_FUNC_IMPL(__imp__sub_825B81F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a95e0
	sub_823A95E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B8200"))) PPC_WEAK_FUNC(sub_825B8200);
PPC_FUNC_IMPL(__imp__sub_825B8200) {
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
	// li r3,6176
	ctx.r3.s64 = 6176;
	// bl 0x82833108
	ctx.lr = 0x825B8220;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825b8260
	if (ctx.cr0.eq) goto loc_825B8260;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b3710
	ctx.lr = 0x825B8234;
	sub_825B3710(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r11,r11,31664
	ctx.r11.s64 = ctx.r11.s64 + 31664;
	// addi r10,r10,-31512
	ctx.r10.s64 = ctx.r10.s64 + -31512;
	// addi r9,r9,-24212
	ctx.r9.s64 = ctx.r9.s64 + -24212;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x825b8264
	goto loc_825B8264;
loc_825B8260:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B8264:
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

__attribute__((alias("__imp__sub_825B8280"))) PPC_WEAK_FUNC(sub_825B8280);
PPC_FUNC_IMPL(__imp__sub_825B8280) {
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
	// bl 0x823a95e0
	ctx.lr = 0x825B82A0;
	sub_823A95E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825b82b4
	if (ctx.cr6.eq) goto loc_825B82B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825b36b0
	ctx.lr = 0x825B82B4;
	sub_825B36B0(ctx, base);
loc_825B82B4:
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

